#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroPhaseModifier::class$ = NULL;
          jmethodID *ShapiroPhaseModifier::mids$ = NULL;
          bool ShapiroPhaseModifier::live$ = false;

          jclass ShapiroPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroPhaseModifier::ShapiroPhaseModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          ::java::util::List ShapiroPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void ShapiroPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_ShapiroPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroPhaseModifier_init_(t_ShapiroPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroPhaseModifier_getParametersDrivers(t_ShapiroPhaseModifier *self);
          static PyObject *t_ShapiroPhaseModifier_modifyWithoutDerivatives(t_ShapiroPhaseModifier *self, PyObject *arg);
          static PyObject *t_ShapiroPhaseModifier_get__parametersDrivers(t_ShapiroPhaseModifier *self, void *data);
          static PyGetSetDef t_ShapiroPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroPhaseModifier)[] = {
            { Py_tp_methods, t_ShapiroPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroPhaseModifier_init_ },
            { Py_tp_getset, t_ShapiroPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroPhaseModifier, t_ShapiroPhaseModifier, ShapiroPhaseModifier);

          void t_ShapiroPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroPhaseModifier), &PY_TYPE_DEF(ShapiroPhaseModifier), module, "ShapiroPhaseModifier", 0);
          }

          void t_ShapiroPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroPhaseModifier), "class_", make_descriptor(ShapiroPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroPhaseModifier), "wrapfn_", make_descriptor(t_ShapiroPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroPhaseModifier::wrap_Object(ShapiroPhaseModifier(((t_ShapiroPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroPhaseModifier_init_(t_ShapiroPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroPhaseModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroPhaseModifier_getParametersDrivers(t_ShapiroPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroPhaseModifier_modifyWithoutDerivatives(t_ShapiroPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroPhaseModifier_get__parametersDrivers(t_ShapiroPhaseModifier *self, void *data)
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
#include "org/hipparchus/fraction/BigFractionFormat.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/util/Locale.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/text/ParsePosition.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/fraction/BigFractionFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFractionFormat::class$ = NULL;
      jmethodID *BigFractionFormat::mids$ = NULL;
      bool BigFractionFormat::live$ = false;

      jclass BigFractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_256f36a22c0d0f55] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_e2028a486c5b97a5] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_848518009c5606f2] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/BigFraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_f5c3717ad7292c63] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_formatBigFraction_fd65e985244149e8] = env->getStaticMethodID(cls, "formatBigFraction", "(Lorg/hipparchus/fraction/BigFraction;)Ljava/lang/String;");
          mids$[mid_getAvailableLocales_c5ed07ebd55821bb] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getImproperInstance_82a9eb9a5a797180] = env->getStaticMethodID(cls, "getImproperInstance", "()Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_getImproperInstance_a14e6a4426b68fb7] = env->getStaticMethodID(cls, "getImproperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_getProperInstance_82a9eb9a5a797180] = env->getStaticMethodID(cls, "getProperInstance", "()Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_getProperInstance_a14e6a4426b68fb7] = env->getStaticMethodID(cls, "getProperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_parse_0ca38107b4e82d97] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_parse_7ca853134336de7b] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_parseNextBigInteger_c8e1e8504169ebff] = env->getMethodID(cls, "parseNextBigInteger", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/math/BigInteger;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BigFractionFormat::BigFractionFormat() : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      BigFractionFormat::BigFractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_256f36a22c0d0f55, a0.this$)) {}

      BigFractionFormat::BigFractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_e2028a486c5b97a5, a0.this$, a1.this$)) {}

      ::java::lang::StringBuffer BigFractionFormat::format(const ::org::hipparchus::fraction::BigFraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_848518009c5606f2], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer BigFractionFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_f5c3717ad7292c63], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::String BigFractionFormat::formatBigFraction(const ::org::hipparchus::fraction::BigFraction & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_formatBigFraction_fd65e985244149e8], a0.this$));
      }

      JArray< ::java::util::Locale > BigFractionFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_c5ed07ebd55821bb]));
      }

      BigFractionFormat BigFractionFormat::getImproperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_82a9eb9a5a797180]));
      }

      BigFractionFormat BigFractionFormat::getImproperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_a14e6a4426b68fb7], a0.this$));
      }

      BigFractionFormat BigFractionFormat::getProperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_82a9eb9a5a797180]));
      }

      BigFractionFormat BigFractionFormat::getProperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_a14e6a4426b68fb7], a0.this$));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_parse_0ca38107b4e82d97], a0.this$));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_parse_7ca853134336de7b], a0.this$, a1.this$));
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
      static PyObject *t_BigFractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BigFractionFormat_init_(t_BigFractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BigFractionFormat_format(t_BigFractionFormat *self, PyObject *args);
      static PyObject *t_BigFractionFormat_formatBigFraction(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFractionFormat_getProperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFractionFormat_parse(t_BigFractionFormat *self, PyObject *args);
      static PyObject *t_BigFractionFormat_get__availableLocales(t_BigFractionFormat *self, void *data);
      static PyObject *t_BigFractionFormat_get__improperInstance(t_BigFractionFormat *self, void *data);
      static PyObject *t_BigFractionFormat_get__properInstance(t_BigFractionFormat *self, void *data);
      static PyGetSetDef t_BigFractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_BigFractionFormat, availableLocales),
        DECLARE_GET_FIELD(t_BigFractionFormat, improperInstance),
        DECLARE_GET_FIELD(t_BigFractionFormat, properInstance),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigFractionFormat__methods_[] = {
        DECLARE_METHOD(t_BigFractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_BigFractionFormat, formatBigFraction, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, getAvailableLocales, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, getImproperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, getProperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFractionFormat)[] = {
        { Py_tp_methods, t_BigFractionFormat__methods_ },
        { Py_tp_init, (void *) t_BigFractionFormat_init_ },
        { Py_tp_getset, t_BigFractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::AbstractFormat),
        NULL
      };

      DEFINE_TYPE(BigFractionFormat, t_BigFractionFormat, BigFractionFormat);

      void t_BigFractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFractionFormat), &PY_TYPE_DEF(BigFractionFormat), module, "BigFractionFormat", 0);
      }

      void t_BigFractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionFormat), "class_", make_descriptor(BigFractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionFormat), "wrapfn_", make_descriptor(t_BigFractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigFractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFractionFormat::initializeClass, 1)))
          return NULL;
        return t_BigFractionFormat::wrap_Object(BigFractionFormat(((t_BigFractionFormat *) arg)->object.this$));
      }
      static PyObject *t_BigFractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BigFractionFormat_init_(t_BigFractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            BigFractionFormat object((jobject) NULL);

            INT_CALL(object = BigFractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            BigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = BigFractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            BigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BigFractionFormat(a0, a1));
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

      static PyObject *t_BigFractionFormat_format(t_BigFractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::fraction::BigFraction a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::BigFraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
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

        return callSuper(PY_TYPE(BigFractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_BigFractionFormat_formatBigFraction(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::fraction::BigFraction a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::fraction::BigFraction::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::formatBigFraction(a0));
          return j2p(result);
        }

        PyErr_SetArgsError(type, "formatBigFraction", arg);
        return NULL;
      }

      static PyObject *t_BigFractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getAvailableLocales());
          return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
        }

        return callSuper(type, "getAvailableLocales", args, 2);
      }

      static PyObject *t_BigFractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            BigFractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getImproperInstance());
            return t_BigFractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            BigFractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getImproperInstance(a0));
              return t_BigFractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getImproperInstance", args);
        return NULL;
      }

      static PyObject *t_BigFractionFormat_getProperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            BigFractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getProperInstance());
            return t_BigFractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            BigFractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getProperInstance(a0));
              return t_BigFractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getProperInstance", args);
        return NULL;
      }

      static PyObject *t_BigFractionFormat_parse(t_BigFractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::fraction::BigFraction result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::fraction::BigFraction result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BigFractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_BigFractionFormat_get__availableLocales(t_BigFractionFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_BigFractionFormat_get__improperInstance(t_BigFractionFormat *self, void *data)
      {
        BigFractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getImproperInstance());
        return t_BigFractionFormat::wrap_Object(value);
      }

      static PyObject *t_BigFractionFormat_get__properInstance(t_BigFractionFormat *self, void *data)
      {
        BigFractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getProperInstance());
        return t_BigFractionFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/Inertia.h"
#include "org/orekit/attitudes/Inertia.h"
#include "org/orekit/attitudes/InertiaAxis.h"
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
          mids$[mid_getInertiaAxis1_88f98d66bcc1d5e4] = env->getMethodID(cls, "getInertiaAxis1", "()Lorg/orekit/attitudes/InertiaAxis;");
          mids$[mid_getInertiaAxis2_88f98d66bcc1d5e4] = env->getMethodID(cls, "getInertiaAxis2", "()Lorg/orekit/attitudes/InertiaAxis;");
          mids$[mid_getInertiaAxis3_88f98d66bcc1d5e4] = env->getMethodID(cls, "getInertiaAxis3", "()Lorg/orekit/attitudes/InertiaAxis;");
          mids$[mid_momentum_d0fe714ef34714f7] = env->getMethodID(cls, "momentum", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_swap12_abcaa399dcf67539] = env->getMethodID(cls, "swap12", "()Lorg/orekit/attitudes/Inertia;");
          mids$[mid_swap13_abcaa399dcf67539] = env->getMethodID(cls, "swap13", "()Lorg/orekit/attitudes/Inertia;");
          mids$[mid_swap23_abcaa399dcf67539] = env->getMethodID(cls, "swap23", "()Lorg/orekit/attitudes/Inertia;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::InertiaAxis Inertia::getInertiaAxis1() const
      {
        return ::org::orekit::attitudes::InertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis1_88f98d66bcc1d5e4]));
      }

      ::org::orekit::attitudes::InertiaAxis Inertia::getInertiaAxis2() const
      {
        return ::org::orekit::attitudes::InertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis2_88f98d66bcc1d5e4]));
      }

      ::org::orekit::attitudes::InertiaAxis Inertia::getInertiaAxis3() const
      {
        return ::org::orekit::attitudes::InertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis3_88f98d66bcc1d5e4]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Inertia::momentum(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_momentum_d0fe714ef34714f7], a0.this$));
      }

      Inertia Inertia::swap12() const
      {
        return Inertia(env->callObjectMethod(this$, mids$[mid_swap12_abcaa399dcf67539]));
      }

      Inertia Inertia::swap13() const
      {
        return Inertia(env->callObjectMethod(this$, mids$[mid_swap13_abcaa399dcf67539]));
      }

      Inertia Inertia::swap23() const
      {
        return Inertia(env->callObjectMethod(this$, mids$[mid_swap23_abcaa399dcf67539]));
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
#include "org/orekit/models/earth/atmosphere/PythonDTM2000InputParameters.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonDTM2000InputParameters::class$ = NULL;
          jmethodID *PythonDTM2000InputParameters::mids$ = NULL;
          bool PythonDTM2000InputParameters::live$ = false;

          jclass PythonDTM2000InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonDTM2000InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_get24HoursKp_bf1d7732f1acb697] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getInstantFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMeanFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getThreeHourlyKP_bf1d7732f1acb697] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonDTM2000InputParameters::PythonDTM2000InputParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonDTM2000InputParameters::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonDTM2000InputParameters::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonDTM2000InputParameters::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonDTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonDTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonDTM2000InputParameters_init_(t_PythonDTM2000InputParameters *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonDTM2000InputParameters_finalize(t_PythonDTM2000InputParameters *self);
          static PyObject *t_PythonDTM2000InputParameters_pythonExtension(t_PythonDTM2000InputParameters *self, PyObject *args);
          static jdouble JNICALL t_PythonDTM2000InputParameters_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonDTM2000InputParameters_getInstantFlux1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonDTM2000InputParameters_getMaxDate2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonDTM2000InputParameters_getMeanFlux3(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonDTM2000InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonDTM2000InputParameters_getThreeHourlyKP5(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonDTM2000InputParameters_pythonDecRef6(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonDTM2000InputParameters_get__self(t_PythonDTM2000InputParameters *self, void *data);
          static PyGetSetDef t_PythonDTM2000InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_PythonDTM2000InputParameters, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonDTM2000InputParameters__methods_[] = {
            DECLARE_METHOD(t_PythonDTM2000InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDTM2000InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDTM2000InputParameters, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonDTM2000InputParameters, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonDTM2000InputParameters)[] = {
            { Py_tp_methods, t_PythonDTM2000InputParameters__methods_ },
            { Py_tp_init, (void *) t_PythonDTM2000InputParameters_init_ },
            { Py_tp_getset, t_PythonDTM2000InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonDTM2000InputParameters)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonDTM2000InputParameters, t_PythonDTM2000InputParameters, PythonDTM2000InputParameters);

          void t_PythonDTM2000InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonDTM2000InputParameters), &PY_TYPE_DEF(PythonDTM2000InputParameters), module, "PythonDTM2000InputParameters", 1);
          }

          void t_PythonDTM2000InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDTM2000InputParameters), "class_", make_descriptor(PythonDTM2000InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDTM2000InputParameters), "wrapfn_", make_descriptor(t_PythonDTM2000InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDTM2000InputParameters), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonDTM2000InputParameters::initializeClass);
            JNINativeMethod methods[] = {
              { "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_get24HoursKp0 },
              { "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_getInstantFlux1 },
              { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonDTM2000InputParameters_getMaxDate2 },
              { "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_getMeanFlux3 },
              { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonDTM2000InputParameters_getMinDate4 },
              { "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_getThreeHourlyKP5 },
              { "pythonDecRef", "()V", (void *) t_PythonDTM2000InputParameters_pythonDecRef6 },
            };
            env->registerNatives(cls, methods, 7);
          }

          static PyObject *t_PythonDTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonDTM2000InputParameters::initializeClass, 1)))
              return NULL;
            return t_PythonDTM2000InputParameters::wrap_Object(PythonDTM2000InputParameters(((t_PythonDTM2000InputParameters *) arg)->object.this$));
          }
          static PyObject *t_PythonDTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonDTM2000InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonDTM2000InputParameters_init_(t_PythonDTM2000InputParameters *self, PyObject *args, PyObject *kwds)
          {
            PythonDTM2000InputParameters object((jobject) NULL);

            INT_CALL(object = PythonDTM2000InputParameters());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonDTM2000InputParameters_finalize(t_PythonDTM2000InputParameters *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonDTM2000InputParameters_pythonExtension(t_PythonDTM2000InputParameters *self, PyObject *args)
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "get24HoursKp", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("get24HoursKp", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonDTM2000InputParameters_getInstantFlux1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getInstantFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getInstantFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonDTM2000InputParameters_getMaxDate2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMaxDate", result);
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_getMeanFlux3(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getMeanFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMeanFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonDTM2000InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMinDate", result);
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_getThreeHourlyKP5(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getThreeHourlyKP", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getThreeHourlyKP", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonDTM2000InputParameters_pythonDecRef6(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonDTM2000InputParameters_get__self(t_PythonDTM2000InputParameters *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/ShapiroInterSatellitePhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroInterSatellitePhaseModifier::class$ = NULL;
          jmethodID *ShapiroInterSatellitePhaseModifier::mids$ = NULL;
          bool ShapiroInterSatellitePhaseModifier::live$ = false;

          jclass ShapiroInterSatellitePhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroInterSatellitePhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroInterSatellitePhaseModifier::ShapiroInterSatellitePhaseModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          ::java::util::List ShapiroInterSatellitePhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void ShapiroInterSatellitePhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_ShapiroInterSatellitePhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroInterSatellitePhaseModifier_init_(t_ShapiroInterSatellitePhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_getParametersDrivers(t_ShapiroInterSatellitePhaseModifier *self);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_modifyWithoutDerivatives(t_ShapiroInterSatellitePhaseModifier *self, PyObject *arg);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_get__parametersDrivers(t_ShapiroInterSatellitePhaseModifier *self, void *data);
          static PyGetSetDef t_ShapiroInterSatellitePhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroInterSatellitePhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroInterSatellitePhaseModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroInterSatellitePhaseModifier)[] = {
            { Py_tp_methods, t_ShapiroInterSatellitePhaseModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroInterSatellitePhaseModifier_init_ },
            { Py_tp_getset, t_ShapiroInterSatellitePhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroInterSatellitePhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroInterSatellitePhaseModifier, t_ShapiroInterSatellitePhaseModifier, ShapiroInterSatellitePhaseModifier);

          void t_ShapiroInterSatellitePhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroInterSatellitePhaseModifier), &PY_TYPE_DEF(ShapiroInterSatellitePhaseModifier), module, "ShapiroInterSatellitePhaseModifier", 0);
          }

          void t_ShapiroInterSatellitePhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatellitePhaseModifier), "class_", make_descriptor(ShapiroInterSatellitePhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatellitePhaseModifier), "wrapfn_", make_descriptor(t_ShapiroInterSatellitePhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatellitePhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroInterSatellitePhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroInterSatellitePhaseModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroInterSatellitePhaseModifier::wrap_Object(ShapiroInterSatellitePhaseModifier(((t_ShapiroInterSatellitePhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroInterSatellitePhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroInterSatellitePhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroInterSatellitePhaseModifier_init_(t_ShapiroInterSatellitePhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroInterSatellitePhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroInterSatellitePhaseModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroInterSatellitePhaseModifier_getParametersDrivers(t_ShapiroInterSatellitePhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroInterSatellitePhaseModifier_modifyWithoutDerivatives(t_ShapiroInterSatellitePhaseModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroInterSatellitePhaseModifier_get__parametersDrivers(t_ShapiroInterSatellitePhaseModifier *self, void *data)
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
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *VisibilityTrigger::class$ = NULL;
        jmethodID *VisibilityTrigger::mids$ = NULL;
        bool VisibilityTrigger::live$ = false;
        VisibilityTrigger *VisibilityTrigger::VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV = NULL;
        VisibilityTrigger *VisibilityTrigger::VISIBLE_ONLY_WHEN_FULLY_IN_FOV = NULL;

        jclass VisibilityTrigger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/VisibilityTrigger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_radiusCorrection_dcbc7ce2902fa136] = env->getMethodID(cls, "radiusCorrection", "(D)D");
            mids$[mid_valueOf_ccdfdce1748a95c1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/events/VisibilityTrigger;");
            mids$[mid_values_7f89ad02cde9ebee] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/events/VisibilityTrigger;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV = new VisibilityTrigger(env->getStaticObjectField(cls, "VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV", "Lorg/orekit/propagation/events/VisibilityTrigger;"));
            VISIBLE_ONLY_WHEN_FULLY_IN_FOV = new VisibilityTrigger(env->getStaticObjectField(cls, "VISIBLE_ONLY_WHEN_FULLY_IN_FOV", "Lorg/orekit/propagation/events/VisibilityTrigger;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble VisibilityTrigger::radiusCorrection(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_radiusCorrection_dcbc7ce2902fa136], a0);
        }

        VisibilityTrigger VisibilityTrigger::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return VisibilityTrigger(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ccdfdce1748a95c1], a0.this$));
        }

        JArray< VisibilityTrigger > VisibilityTrigger::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< VisibilityTrigger >(env->callStaticObjectMethod(cls, mids$[mid_values_7f89ad02cde9ebee]));
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
        static PyObject *t_VisibilityTrigger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_VisibilityTrigger_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_VisibilityTrigger_of_(t_VisibilityTrigger *self, PyObject *args);
        static PyObject *t_VisibilityTrigger_radiusCorrection(t_VisibilityTrigger *self, PyObject *arg);
        static PyObject *t_VisibilityTrigger_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_VisibilityTrigger_values(PyTypeObject *type);
        static PyObject *t_VisibilityTrigger_get__parameters_(t_VisibilityTrigger *self, void *data);
        static PyGetSetDef t_VisibilityTrigger__fields_[] = {
          DECLARE_GET_FIELD(t_VisibilityTrigger, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_VisibilityTrigger__methods_[] = {
          DECLARE_METHOD(t_VisibilityTrigger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_VisibilityTrigger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_VisibilityTrigger, of_, METH_VARARGS),
          DECLARE_METHOD(t_VisibilityTrigger, radiusCorrection, METH_O),
          DECLARE_METHOD(t_VisibilityTrigger, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_VisibilityTrigger, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(VisibilityTrigger)[] = {
          { Py_tp_methods, t_VisibilityTrigger__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_VisibilityTrigger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(VisibilityTrigger)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(VisibilityTrigger, t_VisibilityTrigger, VisibilityTrigger);
        PyObject *t_VisibilityTrigger::wrap_Object(const VisibilityTrigger& object, PyTypeObject *p0)
        {
          PyObject *obj = t_VisibilityTrigger::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_VisibilityTrigger *self = (t_VisibilityTrigger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_VisibilityTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_VisibilityTrigger::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_VisibilityTrigger *self = (t_VisibilityTrigger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_VisibilityTrigger::install(PyObject *module)
        {
          installType(&PY_TYPE(VisibilityTrigger), &PY_TYPE_DEF(VisibilityTrigger), module, "VisibilityTrigger", 0);
        }

        void t_VisibilityTrigger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "class_", make_descriptor(VisibilityTrigger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "wrapfn_", make_descriptor(t_VisibilityTrigger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "boxfn_", make_descriptor(boxObject));
          env->getClass(VisibilityTrigger::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV", make_descriptor(t_VisibilityTrigger::wrap_Object(*VisibilityTrigger::VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "VISIBLE_ONLY_WHEN_FULLY_IN_FOV", make_descriptor(t_VisibilityTrigger::wrap_Object(*VisibilityTrigger::VISIBLE_ONLY_WHEN_FULLY_IN_FOV)));
        }

        static PyObject *t_VisibilityTrigger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, VisibilityTrigger::initializeClass, 1)))
            return NULL;
          return t_VisibilityTrigger::wrap_Object(VisibilityTrigger(((t_VisibilityTrigger *) arg)->object.this$));
        }
        static PyObject *t_VisibilityTrigger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, VisibilityTrigger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_VisibilityTrigger_of_(t_VisibilityTrigger *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_VisibilityTrigger_radiusCorrection(t_VisibilityTrigger *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.radiusCorrection(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "radiusCorrection", arg);
          return NULL;
        }

        static PyObject *t_VisibilityTrigger_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          VisibilityTrigger result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::VisibilityTrigger::valueOf(a0));
            return t_VisibilityTrigger::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_VisibilityTrigger_values(PyTypeObject *type)
        {
          JArray< VisibilityTrigger > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::propagation::events::VisibilityTrigger::values());
          return JArray<jobject>(result.this$).wrap(t_VisibilityTrigger::wrap_jobject);
        }
        static PyObject *t_VisibilityTrigger_get__parameters_(t_VisibilityTrigger *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *ForceModelContext::class$ = NULL;
            jmethodID *ForceModelContext::mids$ = NULL;
            bool ForceModelContext::live$ = false;

            jclass ForceModelContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAuxiliaryElements_3e39de583cb99320] = env->getMethodID(cls, "getAuxiliaryElements", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements ForceModelContext::getAuxiliaryElements() const
            {
              return ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(env->callObjectMethod(this$, mids$[mid_getAuxiliaryElements_3e39de583cb99320]));
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
            static PyObject *t_ForceModelContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ForceModelContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ForceModelContext_getAuxiliaryElements(t_ForceModelContext *self);
            static PyObject *t_ForceModelContext_get__auxiliaryElements(t_ForceModelContext *self, void *data);
            static PyGetSetDef t_ForceModelContext__fields_[] = {
              DECLARE_GET_FIELD(t_ForceModelContext, auxiliaryElements),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ForceModelContext__methods_[] = {
              DECLARE_METHOD(t_ForceModelContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ForceModelContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ForceModelContext, getAuxiliaryElements, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ForceModelContext)[] = {
              { Py_tp_methods, t_ForceModelContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ForceModelContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ForceModelContext)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ForceModelContext, t_ForceModelContext, ForceModelContext);

            void t_ForceModelContext::install(PyObject *module)
            {
              installType(&PY_TYPE(ForceModelContext), &PY_TYPE_DEF(ForceModelContext), module, "ForceModelContext", 0);
            }

            void t_ForceModelContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModelContext), "class_", make_descriptor(ForceModelContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModelContext), "wrapfn_", make_descriptor(t_ForceModelContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModelContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ForceModelContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ForceModelContext::initializeClass, 1)))
                return NULL;
              return t_ForceModelContext::wrap_Object(ForceModelContext(((t_ForceModelContext *) arg)->object.this$));
            }
            static PyObject *t_ForceModelContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ForceModelContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ForceModelContext_getAuxiliaryElements(t_ForceModelContext *self)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements result((jobject) NULL);
              OBJ_CALL(result = self->object.getAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(result);
            }

            static PyObject *t_ForceModelContext_get__auxiliaryElements(t_ForceModelContext *self, void *data)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements value((jobject) NULL);
              OBJ_CALL(value = self->object.getAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/WeibullDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *WeibullDistribution::class$ = NULL;
        jmethodID *WeibullDistribution::mids$ = NULL;
        bool WeibullDistribution::live$ = false;

        jclass WeibullDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/WeibullDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_dff5885c2c873297] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_dff5885c2c873297] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_dcbc7ce2902fa136] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        WeibullDistribution::WeibullDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble WeibullDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble WeibullDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble WeibullDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble WeibullDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble WeibullDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_dff5885c2c873297]);
        }

        jdouble WeibullDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_dff5885c2c873297]);
        }

        jdouble WeibullDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble WeibullDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jdouble WeibullDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jboolean WeibullDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble WeibullDistribution::logDensity(jdouble a0) const
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
        static PyObject *t_WeibullDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WeibullDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_WeibullDistribution_init_(t_WeibullDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_WeibullDistribution_cumulativeProbability(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_density(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getNumericalMean(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getNumericalVariance(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getScale(t_WeibullDistribution *self);
        static PyObject *t_WeibullDistribution_getShape(t_WeibullDistribution *self);
        static PyObject *t_WeibullDistribution_getSupportLowerBound(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getSupportUpperBound(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_inverseCumulativeProbability(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_isSupportConnected(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_logDensity(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_get__numericalMean(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__numericalVariance(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__scale(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__shape(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__supportConnected(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__supportLowerBound(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__supportUpperBound(t_WeibullDistribution *self, void *data);
        static PyGetSetDef t_WeibullDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_WeibullDistribution, numericalMean),
          DECLARE_GET_FIELD(t_WeibullDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_WeibullDistribution, scale),
          DECLARE_GET_FIELD(t_WeibullDistribution, shape),
          DECLARE_GET_FIELD(t_WeibullDistribution, supportConnected),
          DECLARE_GET_FIELD(t_WeibullDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_WeibullDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_WeibullDistribution__methods_[] = {
          DECLARE_METHOD(t_WeibullDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeibullDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeibullDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_WeibullDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_WeibullDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WeibullDistribution)[] = {
          { Py_tp_methods, t_WeibullDistribution__methods_ },
          { Py_tp_init, (void *) t_WeibullDistribution_init_ },
          { Py_tp_getset, t_WeibullDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WeibullDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(WeibullDistribution, t_WeibullDistribution, WeibullDistribution);

        void t_WeibullDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(WeibullDistribution), &PY_TYPE_DEF(WeibullDistribution), module, "WeibullDistribution", 0);
        }

        void t_WeibullDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeibullDistribution), "class_", make_descriptor(WeibullDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeibullDistribution), "wrapfn_", make_descriptor(t_WeibullDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeibullDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WeibullDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WeibullDistribution::initializeClass, 1)))
            return NULL;
          return t_WeibullDistribution::wrap_Object(WeibullDistribution(((t_WeibullDistribution *) arg)->object.this$));
        }
        static PyObject *t_WeibullDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WeibullDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_WeibullDistribution_init_(t_WeibullDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          WeibullDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = WeibullDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_WeibullDistribution_cumulativeProbability(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_WeibullDistribution_density(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_WeibullDistribution_getNumericalMean(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_WeibullDistribution_getNumericalVariance(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_WeibullDistribution_getScale(t_WeibullDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_WeibullDistribution_getShape(t_WeibullDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_WeibullDistribution_getSupportLowerBound(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_WeibullDistribution_getSupportUpperBound(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_WeibullDistribution_inverseCumulativeProbability(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_WeibullDistribution_isSupportConnected(t_WeibullDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_WeibullDistribution_logDensity(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_WeibullDistribution_get__numericalMean(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__numericalVariance(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__scale(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__shape(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__supportConnected(t_WeibullDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_WeibullDistribution_get__supportLowerBound(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__supportUpperBound(t_WeibullDistribution *self, void *data)
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
#include "org/hipparchus/analysis/function/Sinh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sinh::class$ = NULL;
        jmethodID *Sinh::mids$ = NULL;
        bool Sinh::live$ = false;

        jclass Sinh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sinh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sinh::Sinh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Sinh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sinh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Sinh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sinh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sinh_init_(t_Sinh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sinh_value(t_Sinh *self, PyObject *args);

        static PyMethodDef t_Sinh__methods_[] = {
          DECLARE_METHOD(t_Sinh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sinh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sinh)[] = {
          { Py_tp_methods, t_Sinh__methods_ },
          { Py_tp_init, (void *) t_Sinh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sinh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sinh, t_Sinh, Sinh);

        void t_Sinh::install(PyObject *module)
        {
          installType(&PY_TYPE(Sinh), &PY_TYPE_DEF(Sinh), module, "Sinh", 0);
        }

        void t_Sinh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinh), "class_", make_descriptor(Sinh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinh), "wrapfn_", make_descriptor(t_Sinh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sinh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sinh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sinh::initializeClass, 1)))
            return NULL;
          return t_Sinh::wrap_Object(Sinh(((t_Sinh *) arg)->object.this$));
        }
        static PyObject *t_Sinh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sinh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sinh_init_(t_Sinh *self, PyObject *args, PyObject *kwds)
        {
          Sinh object((jobject) NULL);

          INT_CALL(object = Sinh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sinh_value(t_Sinh *self, PyObject *args)
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
#include "org/orekit/utils/PythonTimeStampedCache.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "java/lang/IllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonTimeStampedCache::class$ = NULL;
      jmethodID *PythonTimeStampedCache::mids$ = NULL;
      bool PythonTimeStampedCache::live$ = false;

      jclass PythonTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEarliest_c2a1e08c7d64b02c] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getLatest_c2a1e08c7d64b02c] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getNeighbors_52c888e7e44261e4] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighbors_a067290de6165283] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeStampedCache::PythonTimeStampedCache() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonTimeStampedCache::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonTimeStampedCache::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonTimeStampedCache::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedCache_of_(t_PythonTimeStampedCache *self, PyObject *args);
      static int t_PythonTimeStampedCache_init_(t_PythonTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeStampedCache_finalize(t_PythonTimeStampedCache *self);
      static PyObject *t_PythonTimeStampedCache_pythonExtension(t_PythonTimeStampedCache *self, PyObject *args);
      static jobject JNICALL t_PythonTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj);
      static jint JNICALL t_PythonTimeStampedCache_getMaxNeighborsSize2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors3(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors4(JNIEnv *jenv, jobject jobj, jobject a0, jint a1);
      static void JNICALL t_PythonTimeStampedCache_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeStampedCache_get__self(t_PythonTimeStampedCache *self, void *data);
      static PyObject *t_PythonTimeStampedCache_get__parameters_(t_PythonTimeStampedCache *self, void *data);
      static PyGetSetDef t_PythonTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeStampedCache, self),
        DECLARE_GET_FIELD(t_PythonTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_PythonTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeStampedCache, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeStampedCache, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeStampedCache)[] = {
        { Py_tp_methods, t_PythonTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_PythonTimeStampedCache_init_ },
        { Py_tp_getset, t_PythonTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeStampedCache, t_PythonTimeStampedCache, PythonTimeStampedCache);
      PyObject *t_PythonTimeStampedCache::wrap_Object(const PythonTimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedCache *self = (t_PythonTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedCache *self = (t_PythonTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeStampedCache), &PY_TYPE_DEF(PythonTimeStampedCache), module, "PythonTimeStampedCache", 1);
      }

      void t_PythonTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedCache), "class_", make_descriptor(PythonTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedCache), "wrapfn_", make_descriptor(t_PythonTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedCache), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeStampedCache::initializeClass);
        JNINativeMethod methods[] = {
          { "getEarliest", "()Lorg/orekit/time/TimeStamped;", (void *) t_PythonTimeStampedCache_getEarliest0 },
          { "getLatest", "()Lorg/orekit/time/TimeStamped;", (void *) t_PythonTimeStampedCache_getLatest1 },
          { "getMaxNeighborsSize", "()I", (void *) t_PythonTimeStampedCache_getMaxNeighborsSize2 },
          { "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/stream/Stream;", (void *) t_PythonTimeStampedCache_getNeighbors3 },
          { "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;", (void *) t_PythonTimeStampedCache_getNeighbors4 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeStampedCache_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_PythonTimeStampedCache::wrap_Object(PythonTimeStampedCache(((t_PythonTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeStampedCache_of_(t_PythonTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeStampedCache_init_(t_PythonTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeStampedCache object((jobject) NULL);

        INT_CALL(object = PythonTimeStampedCache());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeStampedCache_finalize(t_PythonTimeStampedCache *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeStampedCache_pythonExtension(t_PythonTimeStampedCache *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarliest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeStamped::initializeClass, &value))
        {
          throwTypeError("getEarliest", result);
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

      static jobject JNICALL t_PythonTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getLatest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeStamped::initializeClass, &value))
        {
          throwTypeError("getLatest", result);
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

      static jint JNICALL t_PythonTimeStampedCache_getMaxNeighborsSize2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getMaxNeighborsSize", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getMaxNeighborsSize", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::stream::Stream value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNeighbors", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
        {
          throwTypeError("getNeighbors", result);
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

      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors4(JNIEnv *jenv, jobject jobj, jobject a0, jint a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::stream::Stream value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNeighbors", "Oi", o0, (int) a1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
        {
          throwTypeError("getNeighbors", result);
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

      static void JNICALL t_PythonTimeStampedCache_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeStampedCache_get__self(t_PythonTimeStampedCache *self, void *data)
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
      static PyObject *t_PythonTimeStampedCache_get__parameters_(t_PythonTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/BlockRealMatrix.h"
#include "org/hipparchus/linear/BlockRealMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *BlockRealMatrix::class$ = NULL;
      jmethodID *BlockRealMatrix::mids$ = NULL;
      bool BlockRealMatrix::live$ = false;
      jint BlockRealMatrix::BLOCK_SIZE = (jint) 0;

      jclass BlockRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/BlockRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a0befc7f3dc19e41] = env->getMethodID(cls, "<init>", "([[D)V");
          mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_1226074b8c13dc7e] = env->getMethodID(cls, "<init>", "(II[[DZ)V");
          mids$[mid_add_067240a7ab5be4c4] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_add_6304385ca3a5bd72] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_addToEntry_1506189166690b5e] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_62094d94b8a0389a] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_createBlocksLayout_5f8b4bdc912abcfa] = env->getStaticMethodID(cls, "createBlocksLayout", "(II)[[D");
          mids$[mid_createMatrix_4edbd6fc57b63f17] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_getColumn_abe82da4f5c7c981] = env->getMethodID(cls, "getColumn", "(I)[D");
          mids$[mid_getColumnDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_b7acdd358bb5efdd] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_getColumnVector_b686e6fcbf82678b] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getData_0358d8ea02f2cdb1] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getEntry_dbbe5f05149dbf73] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getFrobeniusNorm_dff5885c2c873297] = env->getMethodID(cls, "getFrobeniusNorm", "()D");
          mids$[mid_getNorm1_dff5885c2c873297] = env->getMethodID(cls, "getNorm1", "()D");
          mids$[mid_getNormInfty_dff5885c2c873297] = env->getMethodID(cls, "getNormInfty", "()D");
          mids$[mid_getRow_abe82da4f5c7c981] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_b7acdd358bb5efdd] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_getRowVector_b686e6fcbf82678b] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSubMatrix_49c898b876b8801a] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiply_067240a7ab5be4c4] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiply_6304385ca3a5bd72] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiplyEntry_1506189166690b5e] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_067240a7ab5be4c4] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiplyTransposed_6304385ca3a5bd72] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_operate_ac3d742ccc742f22] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_preMultiply_ac3d742ccc742f22] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_scalarAdd_0f82f472c57953f4] = env->getMethodID(cls, "scalarAdd", "(D)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_scalarMultiply_f21dcd9464c6e3c5] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setColumn_7169a8c8a60b8b2c] = env->getMethodID(cls, "setColumn", "(I[D)V");
          mids$[mid_setColumnMatrix_7f7e7105aa2a1ac1] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setColumnVector_18388821294f273e] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setEntry_1506189166690b5e] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_7169a8c8a60b8b2c] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setRowMatrix_388c57ad239baffd] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/BlockRealMatrix;)V");
          mids$[mid_setRowMatrix_7f7e7105aa2a1ac1] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setRowVector_18388821294f273e] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setSubMatrix_f92f0755fea39af9] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_subtract_067240a7ab5be4c4] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_subtract_6304385ca3a5bd72] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_toBlocksLayout_9c0348b17db96525] = env->getStaticMethodID(cls, "toBlocksLayout", "([[D)[[D");
          mids$[mid_transpose_62094d94b8a0389a] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_transposeMultiply_067240a7ab5be4c4] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_transposeMultiply_6304385ca3a5bd72] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_walkInOptimizedOrder_3e071bd337c0da4c] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_b19c1ac2d3fe7eca] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_62bd065f6938d976] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_ab29bef5e0849364] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_3e071bd337c0da4c] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_b19c1ac2d3fe7eca] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_62bd065f6938d976] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_ab29bef5e0849364] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BLOCK_SIZE = env->getStaticIntField(cls, "BLOCK_SIZE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BlockRealMatrix::BlockRealMatrix(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_a0befc7f3dc19e41, a0.this$)) {}

      BlockRealMatrix::BlockRealMatrix(jint a0, jint a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

      BlockRealMatrix::BlockRealMatrix(jint a0, jint a1, const JArray< JArray< jdouble > > & a2, jboolean a3) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_1226074b8c13dc7e, a0, a1, a2.this$, a3)) {}

      BlockRealMatrix BlockRealMatrix::add(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_add_067240a7ab5be4c4], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::add(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_add_6304385ca3a5bd72], a0.this$));
      }

      void BlockRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_1506189166690b5e], a0, a1, a2);
      }

      BlockRealMatrix BlockRealMatrix::copy() const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_copy_62094d94b8a0389a]));
      }

      JArray< JArray< jdouble > > BlockRealMatrix::createBlocksLayout(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_createBlocksLayout_5f8b4bdc912abcfa], a0, a1));
      }

      BlockRealMatrix BlockRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_4edbd6fc57b63f17], a0, a1));
      }

      JArray< jdouble > BlockRealMatrix::getColumn(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getColumn_abe82da4f5c7c981], a0));
      }

      jint BlockRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_570ce0828f81a2c1]);
      }

      BlockRealMatrix BlockRealMatrix::getColumnMatrix(jint a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_b7acdd358bb5efdd], a0));
      }

      ::org::hipparchus::linear::RealVector BlockRealMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_b686e6fcbf82678b], a0));
      }

      JArray< JArray< jdouble > > BlockRealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_0358d8ea02f2cdb1]));
      }

      jdouble BlockRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_dbbe5f05149dbf73], a0, a1);
      }

      jdouble BlockRealMatrix::getFrobeniusNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFrobeniusNorm_dff5885c2c873297]);
      }

      jdouble BlockRealMatrix::getNorm1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm1_dff5885c2c873297]);
      }

      jdouble BlockRealMatrix::getNormInfty() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormInfty_dff5885c2c873297]);
      }

      JArray< jdouble > BlockRealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_abe82da4f5c7c981], a0));
      }

      jint BlockRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_570ce0828f81a2c1]);
      }

      BlockRealMatrix BlockRealMatrix::getRowMatrix(jint a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_b7acdd358bb5efdd], a0));
      }

      ::org::hipparchus::linear::RealVector BlockRealMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRowVector_b686e6fcbf82678b], a0));
      }

      BlockRealMatrix BlockRealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_49c898b876b8801a], a0, a1, a2, a3));
      }

      BlockRealMatrix BlockRealMatrix::multiply(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_067240a7ab5be4c4], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_6304385ca3a5bd72], a0.this$));
      }

      void BlockRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_1506189166690b5e], a0, a1, a2);
      }

      BlockRealMatrix BlockRealMatrix::multiplyTransposed(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_067240a7ab5be4c4], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_6304385ca3a5bd72], a0.this$));
      }

      JArray< jdouble > BlockRealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_ac3d742ccc742f22], a0.this$));
      }

      JArray< jdouble > BlockRealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_ac3d742ccc742f22], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::scalarAdd(jdouble a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_0f82f472c57953f4], a0));
      }

      ::org::hipparchus::linear::RealMatrix BlockRealMatrix::scalarMultiply(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_f21dcd9464c6e3c5], a0));
      }

      void BlockRealMatrix::setColumn(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_7169a8c8a60b8b2c], a0, a1.this$);
      }

      void BlockRealMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_7f7e7105aa2a1ac1], a0, a1.this$);
      }

      void BlockRealMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_18388821294f273e], a0, a1.this$);
      }

      void BlockRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_1506189166690b5e], a0, a1, a2);
      }

      void BlockRealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_7169a8c8a60b8b2c], a0, a1.this$);
      }

      void BlockRealMatrix::setRowMatrix(jint a0, const BlockRealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_388c57ad239baffd], a0, a1.this$);
      }

      void BlockRealMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_7f7e7105aa2a1ac1], a0, a1.this$);
      }

      void BlockRealMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_18388821294f273e], a0, a1.this$);
      }

      void BlockRealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_f92f0755fea39af9], a0.this$, a1, a2);
      }

      BlockRealMatrix BlockRealMatrix::subtract(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_067240a7ab5be4c4], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::subtract(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_6304385ca3a5bd72], a0.this$));
      }

      JArray< JArray< jdouble > > BlockRealMatrix::toBlocksLayout(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_toBlocksLayout_9c0348b17db96525], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::transpose() const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_transpose_62094d94b8a0389a]));
      }

      BlockRealMatrix BlockRealMatrix::transposeMultiply(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_067240a7ab5be4c4], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_6304385ca3a5bd72], a0.this$));
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_3e071bd337c0da4c], a0.this$);
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_b19c1ac2d3fe7eca], a0.this$);
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_62bd065f6938d976], a0.this$, a1, a2, a3, a4);
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_ab29bef5e0849364], a0.this$, a1, a2, a3, a4);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_3e071bd337c0da4c], a0.this$);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_b19c1ac2d3fe7eca], a0.this$);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_62bd065f6938d976], a0.this$, a1, a2, a3, a4);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_ab29bef5e0849364], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_BlockRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BlockRealMatrix_init_(t_BlockRealMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BlockRealMatrix_add(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_addToEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_copy(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args);
      static PyObject *t_BlockRealMatrix_createMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumn(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumnDimension(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumnMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumnVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getData(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getFrobeniusNorm(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getNorm1(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getNormInfty(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRow(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRowDimension(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRowMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRowVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getSubMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_multiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_multiplyEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_multiplyTransposed(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_operate(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_preMultiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_scalarAdd(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_scalarMultiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setColumn(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setColumnMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setColumnVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setRow(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setRowMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setRowVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setSubMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_subtract(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockRealMatrix_transpose(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_transposeMultiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_walkInOptimizedOrder(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_walkInRowOrder(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_get__columnDimension(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__data(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__frobeniusNorm(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__norm1(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__normInfty(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__rowDimension(t_BlockRealMatrix *self, void *data);
      static PyGetSetDef t_BlockRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_BlockRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_BlockRealMatrix, data),
        DECLARE_GET_FIELD(t_BlockRealMatrix, frobeniusNorm),
        DECLARE_GET_FIELD(t_BlockRealMatrix, norm1),
        DECLARE_GET_FIELD(t_BlockRealMatrix, normInfty),
        DECLARE_GET_FIELD(t_BlockRealMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BlockRealMatrix__methods_[] = {
        DECLARE_METHOD(t_BlockRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, createBlocksLayout, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getFrobeniusNorm, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getNorm1, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getNormInfty, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, scalarAdd, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, scalarMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, toBlocksLayout, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, transpose, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BlockRealMatrix)[] = {
        { Py_tp_methods, t_BlockRealMatrix__methods_ },
        { Py_tp_init, (void *) t_BlockRealMatrix_init_ },
        { Py_tp_getset, t_BlockRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BlockRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(BlockRealMatrix, t_BlockRealMatrix, BlockRealMatrix);

      void t_BlockRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(BlockRealMatrix), &PY_TYPE_DEF(BlockRealMatrix), module, "BlockRealMatrix", 0);
      }

      void t_BlockRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "class_", make_descriptor(BlockRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "wrapfn_", make_descriptor(t_BlockRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "boxfn_", make_descriptor(boxObject));
        env->getClass(BlockRealMatrix::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "BLOCK_SIZE", make_descriptor(BlockRealMatrix::BLOCK_SIZE));
      }

      static PyObject *t_BlockRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BlockRealMatrix::initializeClass, 1)))
          return NULL;
        return t_BlockRealMatrix::wrap_Object(BlockRealMatrix(((t_BlockRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_BlockRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BlockRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BlockRealMatrix_init_(t_BlockRealMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            BlockRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[D", &a0))
            {
              INT_CALL(object = BlockRealMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jint a1;
            BlockRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = BlockRealMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            JArray< JArray< jdouble > > a2((jobject) NULL);
            jboolean a3;
            BlockRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "II[[DZ", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = BlockRealMatrix(a0, a1, a2, a3));
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

      static PyObject *t_BlockRealMatrix_add(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_BlockRealMatrix_addToEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_copy(t_BlockRealMatrix *self, PyObject *args)
      {
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_BlockRealMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockRealMatrix::createBlocksLayout(a0, a1));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "createBlocksLayout", args);
        return NULL;
      }

      static PyObject *t_BlockRealMatrix_createMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumn(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumn", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumnDimension(t_BlockRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumnMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumnMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumnVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumnVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getData(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getFrobeniusNorm(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getFrobeniusNorm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getFrobeniusNorm", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getNorm1(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNorm1());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getNorm1", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getNormInfty(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNormInfty());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getNormInfty", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRow(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRowDimension(t_BlockRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRowMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRowMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRowVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRowVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getSubMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_multiply(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_multiplyEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_multiplyTransposed(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_BlockRealMatrix_operate(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_BlockRealMatrix_preMultiply(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_scalarAdd(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble a0;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "scalarAdd", args, 2);
      }

      static PyObject *t_BlockRealMatrix_scalarMultiply(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "scalarMultiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setColumn(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setColumn", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setColumnMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setColumnMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setColumnVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setColumnVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setRow(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setRowMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            BlockRealMatrix a1((jobject) NULL);

            if (!parseArgs(args, "Ik", BlockRealMatrix::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setRowMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setRowVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setRowVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setSubMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_subtract(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_BlockRealMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockRealMatrix::toBlocksLayout(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "toBlocksLayout", arg);
        return NULL;
      }

      static PyObject *t_BlockRealMatrix_transpose(t_BlockRealMatrix *self, PyObject *args)
      {
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.transpose());
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "transpose", args, 2);
      }

      static PyObject *t_BlockRealMatrix_transposeMultiply(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_walkInOptimizedOrder(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "walkInOptimizedOrder", args, 2);
      }

      static PyObject *t_BlockRealMatrix_walkInRowOrder(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }

      static PyObject *t_BlockRealMatrix_get__columnDimension(t_BlockRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BlockRealMatrix_get__data(t_BlockRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_BlockRealMatrix_get__frobeniusNorm(t_BlockRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BlockRealMatrix_get__norm1(t_BlockRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BlockRealMatrix_get__normInfty(t_BlockRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormInfty());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BlockRealMatrix_get__rowDimension(t_BlockRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeIonosphericDelayModifier::mids$ = NULL;
          bool BistaticRangeIonosphericDelayModifier::live$ = false;

          jclass BistaticRangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_88af61602f29e4c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeIonosphericDelayModifier::BistaticRangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_88af61602f29e4c4, a0.this$, a1)) {}

          void BistaticRangeIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void BistaticRangeIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_BistaticRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeIonosphericDelayModifier_init_(t_BistaticRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeIonosphericDelayModifier_modify(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeIonosphericDelayModifier, t_BistaticRangeIonosphericDelayModifier, BistaticRangeIonosphericDelayModifier);

          void t_BistaticRangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeIonosphericDelayModifier), &PY_TYPE_DEF(BistaticRangeIonosphericDelayModifier), module, "BistaticRangeIonosphericDelayModifier", 0);
          }

          void t_BistaticRangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeIonosphericDelayModifier), "class_", make_descriptor(BistaticRangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeIonosphericDelayModifier::wrap_Object(BistaticRangeIonosphericDelayModifier(((t_BistaticRangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeIonosphericDelayModifier_init_(t_BistaticRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            BistaticRangeIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BistaticRangeIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeIonosphericDelayModifier_modify(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_BistaticRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$TimingSystemConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$TimingSystemConfiguration::mids$ = NULL;
        bool CRDConfiguration$TimingSystemConfiguration::live$ = false;

        jclass CRDConfiguration$TimingSystemConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getEpochDelayCorrection_dff5885c2c873297] = env->getMethodID(cls, "getEpochDelayCorrection", "()D");
            mids$[mid_getFrequencySource_11b109bd155ca898] = env->getMethodID(cls, "getFrequencySource", "()Ljava/lang/String;");
            mids$[mid_getLocalTimingId_11b109bd155ca898] = env->getMethodID(cls, "getLocalTimingId", "()Ljava/lang/String;");
            mids$[mid_getTimeSource_11b109bd155ca898] = env->getMethodID(cls, "getTimeSource", "()Ljava/lang/String;");
            mids$[mid_getTimer_11b109bd155ca898] = env->getMethodID(cls, "getTimer", "()Ljava/lang/String;");
            mids$[mid_getTimerSerialNumber_11b109bd155ca898] = env->getMethodID(cls, "getTimerSerialNumber", "()Ljava/lang/String;");
            mids$[mid_setEpochDelayCorrection_17db3a65980d3441] = env->getMethodID(cls, "setEpochDelayCorrection", "(D)V");
            mids$[mid_setFrequencySource_d0bc48d5b00dc40c] = env->getMethodID(cls, "setFrequencySource", "(Ljava/lang/String;)V");
            mids$[mid_setLocalTimingId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setLocalTimingId", "(Ljava/lang/String;)V");
            mids$[mid_setTimeSource_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTimeSource", "(Ljava/lang/String;)V");
            mids$[mid_setTimer_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTimer", "(Ljava/lang/String;)V");
            mids$[mid_setTimerSerialNumber_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTimerSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$TimingSystemConfiguration::CRDConfiguration$TimingSystemConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble CRDConfiguration$TimingSystemConfiguration::getEpochDelayCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEpochDelayCorrection_dff5885c2c873297]);
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getFrequencySource() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFrequencySource_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getLocalTimingId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalTimingId_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getTimeSource() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimeSource_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getTimer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimer_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getTimerSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimerSerialNumber_11b109bd155ca898]));
        }

        void CRDConfiguration$TimingSystemConfiguration::setEpochDelayCorrection(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpochDelayCorrection_17db3a65980d3441], a0);
        }

        void CRDConfiguration$TimingSystemConfiguration::setFrequencySource(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFrequencySource_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setLocalTimingId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLocalTimingId_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setTimeSource(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeSource_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setTimer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimer_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setTimerSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimerSerialNumber_d0bc48d5b00dc40c], a0.this$);
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$TimingSystemConfiguration_init_(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimer(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toCrdString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timer(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$TimingSystemConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, epochDelayCorrection),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, frequencySource),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, localTimingId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, timeSource),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, timer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, timerSerialNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$TimingSystemConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getEpochDelayCorrection, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getFrequencySource, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getLocalTimingId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getTimeSource, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getTimer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getTimerSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setEpochDelayCorrection, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setFrequencySource, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setLocalTimingId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setTimeSource, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setTimer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setTimerSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$TimingSystemConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$TimingSystemConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$TimingSystemConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$TimingSystemConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$TimingSystemConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$TimingSystemConfiguration, t_CRDConfiguration$TimingSystemConfiguration, CRDConfiguration$TimingSystemConfiguration);

        void t_CRDConfiguration$TimingSystemConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$TimingSystemConfiguration), &PY_TYPE_DEF(CRDConfiguration$TimingSystemConfiguration), module, "CRDConfiguration$TimingSystemConfiguration", 0);
        }

        void t_CRDConfiguration$TimingSystemConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TimingSystemConfiguration), "class_", make_descriptor(CRDConfiguration$TimingSystemConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TimingSystemConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$TimingSystemConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TimingSystemConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$TimingSystemConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(CRDConfiguration$TimingSystemConfiguration(((t_CRDConfiguration$TimingSystemConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$TimingSystemConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$TimingSystemConfiguration_init_(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$TimingSystemConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$TimingSystemConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEpochDelayCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrequencySource());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getLocalTimingId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeSource());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimer(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimerSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setEpochDelayCorrection(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpochDelayCorrection", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setFrequencySource(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFrequencySource", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setLocalTimingId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLocalTimingId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTimeSource(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSource", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTimer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTimerSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimerSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toCrdString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TimingSystemConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TimingSystemConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEpochDelayCorrection());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setEpochDelayCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epochDelayCorrection", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrequencySource());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setFrequencySource(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "frequencySource", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLocalTimingId());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setLocalTimingId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "localTimingId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeSource());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTimeSource(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeSource", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timer(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimer());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTimer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimerSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTimerSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timerSerialNumber", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ThreeEighthesFieldIntegratorBuilder.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ThreeEighthesFieldIntegratorBuilder::class$ = NULL;
        jmethodID *ThreeEighthesFieldIntegratorBuilder::mids$ = NULL;
        bool ThreeEighthesFieldIntegratorBuilder::live$ = false;

        jclass ThreeEighthesFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ThreeEighthesFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_072c8635f2164db9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_048f7039a7622a2b] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesFieldIntegratorBuilder::ThreeEighthesFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ThreeEighthesFieldIntegratorBuilder::ThreeEighthesFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_072c8635f2164db9, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator ThreeEighthesFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_048f7039a7622a2b], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_of_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args);
        static int t_ThreeEighthesFieldIntegratorBuilder_init_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_buildIntegrator(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_get__parameters_(t_ThreeEighthesFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_ThreeEighthesFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThreeEighthesFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_ThreeEighthesFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_ThreeEighthesFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesFieldIntegratorBuilder, t_ThreeEighthesFieldIntegratorBuilder, ThreeEighthesFieldIntegratorBuilder);
        PyObject *t_ThreeEighthesFieldIntegratorBuilder::wrap_Object(const ThreeEighthesFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegratorBuilder *self = (t_ThreeEighthesFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ThreeEighthesFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegratorBuilder *self = (t_ThreeEighthesFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ThreeEighthesFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesFieldIntegratorBuilder), &PY_TYPE_DEF(ThreeEighthesFieldIntegratorBuilder), module, "ThreeEighthesFieldIntegratorBuilder", 0);
        }

        void t_ThreeEighthesFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegratorBuilder), "class_", make_descriptor(ThreeEighthesFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_ThreeEighthesFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesFieldIntegratorBuilder::wrap_Object(ThreeEighthesFieldIntegratorBuilder(((t_ThreeEighthesFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_of_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ThreeEighthesFieldIntegratorBuilder_init_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ThreeEighthesFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = ThreeEighthesFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ThreeEighthesFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = ThreeEighthesFieldIntegratorBuilder(a0));
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

        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_buildIntegrator(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_get__parameters_(t_ThreeEighthesFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Euler::class$ = NULL;
              jmethodID *Euler::mids$ = NULL;
              bool Euler::live$ = false;

              jclass Euler::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Euler");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEndpoints_35bd4909c56b6915] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_5aea028785008a06] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getRotationAngles_60c7040667a7dc5c] = env->getMethodID(cls, "getRotationAngles", "()[D");
                  mids$[mid_getRotationRates_60c7040667a7dc5c] = env->getMethodID(cls, "getRotationRates", "()[D");
                  mids$[mid_hasAngles_b108b35ef48e27bd] = env->getMethodID(cls, "hasAngles", "()Z");
                  mids$[mid_hasRates_b108b35ef48e27bd] = env->getMethodID(cls, "hasRates", "()Z");
                  mids$[mid_isSpacecraftBodyRate_b108b35ef48e27bd] = env->getMethodID(cls, "isSpacecraftBodyRate", "()Z");
                  mids$[mid_rateFrameIsA_b108b35ef48e27bd] = env->getMethodID(cls, "rateFrameIsA", "()Z");
                  mids$[mid_setEulerRotSeq_a908138988eb2a50] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setInRotationAngles_bd04c9335fb9e4cf] = env->getMethodID(cls, "setInRotationAngles", "(Z)V");
                  mids$[mid_setIndexedRotationAngle_bb79ca80d85d0a66] = env->getMethodID(cls, "setIndexedRotationAngle", "(ID)V");
                  mids$[mid_setIndexedRotationRate_bb79ca80d85d0a66] = env->getMethodID(cls, "setIndexedRotationRate", "(ID)V");
                  mids$[mid_setLabeledRotationAngle_9d67fa439cabbd44] = env->getMethodID(cls, "setLabeledRotationAngle", "(CD)V");
                  mids$[mid_setLabeledRotationRate_9d67fa439cabbd44] = env->getMethodID(cls, "setLabeledRotationRate", "(CD)V");
                  mids$[mid_setRateFrameIsA_bd04c9335fb9e4cf] = env->getMethodID(cls, "setRateFrameIsA", "(Z)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Euler::Euler() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints Euler::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_35bd4909c56b6915]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder Euler::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_5aea028785008a06]));
              }

              JArray< jdouble > Euler::getRotationAngles() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRotationAngles_60c7040667a7dc5c]));
              }

              JArray< jdouble > Euler::getRotationRates() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRotationRates_60c7040667a7dc5c]));
              }

              jboolean Euler::hasAngles() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasAngles_b108b35ef48e27bd]);
              }

              jboolean Euler::hasRates() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasRates_b108b35ef48e27bd]);
              }

              jboolean Euler::isSpacecraftBodyRate() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isSpacecraftBodyRate_b108b35ef48e27bd]);
              }

              jboolean Euler::rateFrameIsA() const
              {
                return env->callBooleanMethod(this$, mids$[mid_rateFrameIsA_b108b35ef48e27bd]);
              }

              void Euler::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_a908138988eb2a50], a0.this$);
              }

              void Euler::setInRotationAngles(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInRotationAngles_bd04c9335fb9e4cf], a0);
              }

              void Euler::setIndexedRotationAngle(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setIndexedRotationAngle_bb79ca80d85d0a66], a0, a1);
              }

              void Euler::setIndexedRotationRate(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setIndexedRotationRate_bb79ca80d85d0a66], a0, a1);
              }

              void Euler::setLabeledRotationAngle(jchar a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setLabeledRotationAngle_9d67fa439cabbd44], a0, a1);
              }

              void Euler::setLabeledRotationRate(jchar a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setLabeledRotationRate_9d67fa439cabbd44], a0, a1);
              }

              void Euler::setRateFrameIsA(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateFrameIsA_bd04c9335fb9e4cf], a0);
              }

              void Euler::validate(jdouble a0) const
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
            namespace apm {
              static PyObject *t_Euler_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Euler_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Euler_init_(t_Euler *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Euler_getEndpoints(t_Euler *self);
              static PyObject *t_Euler_getEulerRotSeq(t_Euler *self);
              static PyObject *t_Euler_getRotationAngles(t_Euler *self);
              static PyObject *t_Euler_getRotationRates(t_Euler *self);
              static PyObject *t_Euler_hasAngles(t_Euler *self);
              static PyObject *t_Euler_hasRates(t_Euler *self);
              static PyObject *t_Euler_isSpacecraftBodyRate(t_Euler *self);
              static PyObject *t_Euler_rateFrameIsA(t_Euler *self);
              static PyObject *t_Euler_setEulerRotSeq(t_Euler *self, PyObject *arg);
              static PyObject *t_Euler_setInRotationAngles(t_Euler *self, PyObject *arg);
              static PyObject *t_Euler_setIndexedRotationAngle(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setIndexedRotationRate(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setLabeledRotationAngle(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setLabeledRotationRate(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setRateFrameIsA(t_Euler *self, PyObject *arg);
              static PyObject *t_Euler_validate(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_get__endpoints(t_Euler *self, void *data);
              static PyObject *t_Euler_get__eulerRotSeq(t_Euler *self, void *data);
              static int t_Euler_set__eulerRotSeq(t_Euler *self, PyObject *arg, void *data);
              static int t_Euler_set__inRotationAngles(t_Euler *self, PyObject *arg, void *data);
              static PyObject *t_Euler_get__rotationAngles(t_Euler *self, void *data);
              static PyObject *t_Euler_get__rotationRates(t_Euler *self, void *data);
              static PyObject *t_Euler_get__spacecraftBodyRate(t_Euler *self, void *data);
              static PyGetSetDef t_Euler__fields_[] = {
                DECLARE_GET_FIELD(t_Euler, endpoints),
                DECLARE_GETSET_FIELD(t_Euler, eulerRotSeq),
                DECLARE_SET_FIELD(t_Euler, inRotationAngles),
                DECLARE_GET_FIELD(t_Euler, rotationAngles),
                DECLARE_GET_FIELD(t_Euler, rotationRates),
                DECLARE_GET_FIELD(t_Euler, spacecraftBodyRate),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Euler__methods_[] = {
                DECLARE_METHOD(t_Euler, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Euler, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Euler, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_Euler, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_Euler, getRotationAngles, METH_NOARGS),
                DECLARE_METHOD(t_Euler, getRotationRates, METH_NOARGS),
                DECLARE_METHOD(t_Euler, hasAngles, METH_NOARGS),
                DECLARE_METHOD(t_Euler, hasRates, METH_NOARGS),
                DECLARE_METHOD(t_Euler, isSpacecraftBodyRate, METH_NOARGS),
                DECLARE_METHOD(t_Euler, rateFrameIsA, METH_NOARGS),
                DECLARE_METHOD(t_Euler, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_Euler, setInRotationAngles, METH_O),
                DECLARE_METHOD(t_Euler, setIndexedRotationAngle, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setIndexedRotationRate, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setLabeledRotationAngle, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setLabeledRotationRate, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setRateFrameIsA, METH_O),
                DECLARE_METHOD(t_Euler, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Euler)[] = {
                { Py_tp_methods, t_Euler__methods_ },
                { Py_tp_init, (void *) t_Euler_init_ },
                { Py_tp_getset, t_Euler__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Euler)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(Euler, t_Euler, Euler);

              void t_Euler::install(PyObject *module)
              {
                installType(&PY_TYPE(Euler), &PY_TYPE_DEF(Euler), module, "Euler", 0);
              }

              void t_Euler::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Euler), "class_", make_descriptor(Euler::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Euler), "wrapfn_", make_descriptor(t_Euler::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Euler), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Euler_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Euler::initializeClass, 1)))
                  return NULL;
                return t_Euler::wrap_Object(Euler(((t_Euler *) arg)->object.this$));
              }
              static PyObject *t_Euler_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Euler::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Euler_init_(t_Euler *self, PyObject *args, PyObject *kwds)
              {
                Euler object((jobject) NULL);

                INT_CALL(object = Euler());
                self->object = object;

                return 0;
              }

              static PyObject *t_Euler_getEndpoints(t_Euler *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_Euler_getEulerRotSeq(t_Euler *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_Euler_getRotationAngles(t_Euler *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getRotationAngles());
                return result.wrap();
              }

              static PyObject *t_Euler_getRotationRates(t_Euler *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getRotationRates());
                return result.wrap();
              }

              static PyObject *t_Euler_hasAngles(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasAngles());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_hasRates(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasRates());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_isSpacecraftBodyRate(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isSpacecraftBodyRate());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_rateFrameIsA(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.rateFrameIsA());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_setEulerRotSeq(t_Euler *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(self->object.setEulerRotSeq(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEulerRotSeq", arg);
                return NULL;
              }

              static PyObject *t_Euler_setInRotationAngles(t_Euler *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setInRotationAngles(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInRotationAngles", arg);
                return NULL;
              }

              static PyObject *t_Euler_setIndexedRotationAngle(t_Euler *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setIndexedRotationAngle(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIndexedRotationAngle", args);
                return NULL;
              }

              static PyObject *t_Euler_setIndexedRotationRate(t_Euler *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setIndexedRotationRate(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIndexedRotationRate", args);
                return NULL;
              }

              static PyObject *t_Euler_setLabeledRotationAngle(t_Euler *self, PyObject *args)
              {
                jchar a0;
                jdouble a1;

                if (!parseArgs(args, "CD", &a0, &a1))
                {
                  OBJ_CALL(self->object.setLabeledRotationAngle(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLabeledRotationAngle", args);
                return NULL;
              }

              static PyObject *t_Euler_setLabeledRotationRate(t_Euler *self, PyObject *args)
              {
                jchar a0;
                jdouble a1;

                if (!parseArgs(args, "CD", &a0, &a1))
                {
                  OBJ_CALL(self->object.setLabeledRotationRate(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLabeledRotationRate", args);
                return NULL;
              }

              static PyObject *t_Euler_setRateFrameIsA(t_Euler *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setRateFrameIsA(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateFrameIsA", arg);
                return NULL;
              }

              static PyObject *t_Euler_validate(t_Euler *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(Euler), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_Euler_get__endpoints(t_Euler *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_Euler_get__eulerRotSeq(t_Euler *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_Euler_set__eulerRotSeq(t_Euler *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEulerRotSeq(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eulerRotSeq", arg);
                return -1;
              }

              static int t_Euler_set__inRotationAngles(t_Euler *self, PyObject *arg, void *data)
              {
                {
                  jboolean value;
                  if (!parseArg(arg, "Z", &value))
                  {
                    INT_CALL(self->object.setInRotationAngles(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "inRotationAngles", arg);
                return -1;
              }

              static PyObject *t_Euler_get__rotationAngles(t_Euler *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getRotationAngles());
                return value.wrap();
              }

              static PyObject *t_Euler_get__rotationRates(t_Euler *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getRotationRates());
                return value.wrap();
              }

              static PyObject *t_Euler_get__spacecraftBodyRate(t_Euler *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isSpacecraftBodyRate());
                Py_RETURN_BOOL(value);
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
#include "org/hipparchus/stat/regression/AbstractMultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/regression/MultipleLinearRegression.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *AbstractMultipleLinearRegression::class$ = NULL;
        jmethodID *AbstractMultipleLinearRegression::mids$ = NULL;
        bool AbstractMultipleLinearRegression::live$ = false;

        jclass AbstractMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/AbstractMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_estimateErrorVariance_dff5885c2c873297] = env->getMethodID(cls, "estimateErrorVariance", "()D");
            mids$[mid_estimateRegressandVariance_dff5885c2c873297] = env->getMethodID(cls, "estimateRegressandVariance", "()D");
            mids$[mid_estimateRegressionParameters_60c7040667a7dc5c] = env->getMethodID(cls, "estimateRegressionParameters", "()[D");
            mids$[mid_estimateRegressionParametersStandardErrors_60c7040667a7dc5c] = env->getMethodID(cls, "estimateRegressionParametersStandardErrors", "()[D");
            mids$[mid_estimateRegressionParametersVariance_0358d8ea02f2cdb1] = env->getMethodID(cls, "estimateRegressionParametersVariance", "()[[D");
            mids$[mid_estimateRegressionStandardError_dff5885c2c873297] = env->getMethodID(cls, "estimateRegressionStandardError", "()D");
            mids$[mid_estimateResiduals_60c7040667a7dc5c] = env->getMethodID(cls, "estimateResiduals", "()[D");
            mids$[mid_isNoIntercept_b108b35ef48e27bd] = env->getMethodID(cls, "isNoIntercept", "()Z");
            mids$[mid_newSampleData_12aca76acb10f1af] = env->getMethodID(cls, "newSampleData", "([DII)V");
            mids$[mid_setNoIntercept_bd04c9335fb9e4cf] = env->getMethodID(cls, "setNoIntercept", "(Z)V");
            mids$[mid_getX_688b496048ff947b] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getY_aab4fbf77867daa8] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBeta_aab4fbf77867daa8] = env->getMethodID(cls, "calculateBeta", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBetaVariance_688b496048ff947b] = env->getMethodID(cls, "calculateBetaVariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateErrorVariance_dff5885c2c873297] = env->getMethodID(cls, "calculateErrorVariance", "()D");
            mids$[mid_validateSampleData_38e689b845a7e4f9] = env->getMethodID(cls, "validateSampleData", "([[D[D)V");
            mids$[mid_newYSampleData_fa9d415d19f69361] = env->getMethodID(cls, "newYSampleData", "([D)V");
            mids$[mid_newXSampleData_a0befc7f3dc19e41] = env->getMethodID(cls, "newXSampleData", "([[D)V");
            mids$[mid_validateCovarianceData_001acb08fd3b3c30] = env->getMethodID(cls, "validateCovarianceData", "([[D[[D)V");
            mids$[mid_calculateResiduals_aab4fbf77867daa8] = env->getMethodID(cls, "calculateResiduals", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateYVariance_dff5885c2c873297] = env->getMethodID(cls, "calculateYVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractMultipleLinearRegression::AbstractMultipleLinearRegression() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble AbstractMultipleLinearRegression::estimateErrorVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateErrorVariance_dff5885c2c873297]);
        }

        jdouble AbstractMultipleLinearRegression::estimateRegressandVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateRegressandVariance_dff5885c2c873297]);
        }

        JArray< jdouble > AbstractMultipleLinearRegression::estimateRegressionParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParameters_60c7040667a7dc5c]));
        }

        JArray< jdouble > AbstractMultipleLinearRegression::estimateRegressionParametersStandardErrors() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersStandardErrors_60c7040667a7dc5c]));
        }

        JArray< JArray< jdouble > > AbstractMultipleLinearRegression::estimateRegressionParametersVariance() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersVariance_0358d8ea02f2cdb1]));
        }

        jdouble AbstractMultipleLinearRegression::estimateRegressionStandardError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateRegressionStandardError_dff5885c2c873297]);
        }

        JArray< jdouble > AbstractMultipleLinearRegression::estimateResiduals() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateResiduals_60c7040667a7dc5c]));
        }

        jboolean AbstractMultipleLinearRegression::isNoIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isNoIntercept_b108b35ef48e27bd]);
        }

        void AbstractMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_12aca76acb10f1af], a0.this$, a1, a2);
        }

        void AbstractMultipleLinearRegression::setNoIntercept(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNoIntercept_bd04c9335fb9e4cf], a0);
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
        static PyObject *t_AbstractMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractMultipleLinearRegression_init_(t_AbstractMultipleLinearRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractMultipleLinearRegression_estimateErrorVariance(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressandVariance(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParameters(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersStandardErrors(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersVariance(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionStandardError(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateResiduals(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_isNoIntercept(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_newSampleData(t_AbstractMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_AbstractMultipleLinearRegression_setNoIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg);
        static PyObject *t_AbstractMultipleLinearRegression_get__noIntercept(t_AbstractMultipleLinearRegression *self, void *data);
        static int t_AbstractMultipleLinearRegression_set__noIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractMultipleLinearRegression__fields_[] = {
          DECLARE_GETSET_FIELD(t_AbstractMultipleLinearRegression, noIntercept),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateErrorVariance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressandVariance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionParametersStandardErrors, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionParametersVariance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionStandardError, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateResiduals, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, isNoIntercept, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, newSampleData, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, setNoIntercept, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractMultipleLinearRegression)[] = {
          { Py_tp_methods, t_AbstractMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) t_AbstractMultipleLinearRegression_init_ },
          { Py_tp_getset, t_AbstractMultipleLinearRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractMultipleLinearRegression, t_AbstractMultipleLinearRegression, AbstractMultipleLinearRegression);

        void t_AbstractMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractMultipleLinearRegression), &PY_TYPE_DEF(AbstractMultipleLinearRegression), module, "AbstractMultipleLinearRegression", 0);
        }

        void t_AbstractMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleLinearRegression), "class_", make_descriptor(AbstractMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleLinearRegression), "wrapfn_", make_descriptor(t_AbstractMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_AbstractMultipleLinearRegression::wrap_Object(AbstractMultipleLinearRegression(((t_AbstractMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_AbstractMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractMultipleLinearRegression_init_(t_AbstractMultipleLinearRegression *self, PyObject *args, PyObject *kwds)
        {
          AbstractMultipleLinearRegression object((jobject) NULL);

          INT_CALL(object = AbstractMultipleLinearRegression());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateErrorVariance(t_AbstractMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateErrorVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressandVariance(t_AbstractMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateRegressandVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParameters(t_AbstractMultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParameters());
          return result.wrap();
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersStandardErrors(t_AbstractMultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersStandardErrors());
          return result.wrap();
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersVariance(t_AbstractMultipleLinearRegression *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersVariance());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionStandardError(t_AbstractMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateRegressionStandardError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateResiduals(t_AbstractMultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateResiduals());
          return result.wrap();
        }

        static PyObject *t_AbstractMultipleLinearRegression_isNoIntercept(t_AbstractMultipleLinearRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isNoIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_newSampleData(t_AbstractMultipleLinearRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.newSampleData(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "newSampleData", args);
          return NULL;
        }

        static PyObject *t_AbstractMultipleLinearRegression_setNoIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setNoIntercept(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNoIntercept", arg);
          return NULL;
        }

        static PyObject *t_AbstractMultipleLinearRegression_get__noIntercept(t_AbstractMultipleLinearRegression *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isNoIntercept());
          Py_RETURN_BOOL(value);
        }
        static int t_AbstractMultipleLinearRegression_set__noIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setNoIntercept(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "noIntercept", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/IdentityConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
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
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_metersToRu_19583340ae9202d1] = env->getMethodID(cls, "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_ruToMeters_19583340ae9202d1] = env->getMethodID(cls, "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IdentityConverter::IdentityConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jdouble IdentityConverter::metersToRu(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_metersToRu_19583340ae9202d1], a0.this$, a1.this$, a2);
            }

            jdouble IdentityConverter::ruToMeters(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_ruToMeters_19583340ae9202d1], a0.this$, a1.this$, a2);
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
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *TileAiming::class$ = NULL;
          jmethodID *TileAiming::mids$ = NULL;
          bool TileAiming::live$ = false;

          jclass TileAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/TileAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_alongTileDirection_cb13d5b31f03b28f] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_2afa36052df4765d] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D TileAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_cb13d5b31f03b28f], a0.this$, a1.this$));
          }

          ::java::util::List TileAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_2afa36052df4765d]));
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
          static PyObject *t_TileAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TileAiming_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TileAiming_alongTileDirection(t_TileAiming *self, PyObject *args);
          static PyObject *t_TileAiming_getSingularPoints(t_TileAiming *self);
          static PyObject *t_TileAiming_get__singularPoints(t_TileAiming *self, void *data);
          static PyGetSetDef t_TileAiming__fields_[] = {
            DECLARE_GET_FIELD(t_TileAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TileAiming__methods_[] = {
            DECLARE_METHOD(t_TileAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TileAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TileAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_TileAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TileAiming)[] = {
            { Py_tp_methods, t_TileAiming__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TileAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TileAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TileAiming, t_TileAiming, TileAiming);

          void t_TileAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(TileAiming), &PY_TYPE_DEF(TileAiming), module, "TileAiming", 0);
          }

          void t_TileAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TileAiming), "class_", make_descriptor(TileAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TileAiming), "wrapfn_", make_descriptor(t_TileAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TileAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TileAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TileAiming::initializeClass, 1)))
              return NULL;
            return t_TileAiming::wrap_Object(TileAiming(((t_TileAiming *) arg)->object.this$));
          }
          static PyObject *t_TileAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TileAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TileAiming_alongTileDirection(t_TileAiming *self, PyObject *args)
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

          static PyObject *t_TileAiming_getSingularPoints(t_TileAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_TileAiming_get__singularPoints(t_TileAiming *self, void *data)
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
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventDetector::class$ = NULL;
        jmethodID *EventDetector::mids$ = NULL;
        bool EventDetector::live$ = false;

        jclass EventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getHandler_551c102e543538fd] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_35e5947e4e8f061c] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_dff5885c2c873297] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble EventDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::propagation::events::handlers::EventHandler EventDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::EventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_551c102e543538fd]));
        }

        ::org::orekit::propagation::events::AdaptableInterval EventDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_35e5947e4e8f061c]));
        }

        jint EventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_570ce0828f81a2c1]);
        }

        jdouble EventDetector::getThreshold() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThreshold_dff5885c2c873297]);
        }

        void EventDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
        static PyObject *t_EventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetector_g(t_EventDetector *self, PyObject *arg);
        static PyObject *t_EventDetector_getHandler(t_EventDetector *self);
        static PyObject *t_EventDetector_getMaxCheckInterval(t_EventDetector *self);
        static PyObject *t_EventDetector_getMaxIterationCount(t_EventDetector *self);
        static PyObject *t_EventDetector_getThreshold(t_EventDetector *self);
        static PyObject *t_EventDetector_init(t_EventDetector *self, PyObject *args);
        static PyObject *t_EventDetector_get__handler(t_EventDetector *self, void *data);
        static PyObject *t_EventDetector_get__maxCheckInterval(t_EventDetector *self, void *data);
        static PyObject *t_EventDetector_get__maxIterationCount(t_EventDetector *self, void *data);
        static PyObject *t_EventDetector_get__threshold(t_EventDetector *self, void *data);
        static PyGetSetDef t_EventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_EventDetector, handler),
          DECLARE_GET_FIELD(t_EventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_EventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_EventDetector, threshold),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventDetector__methods_[] = {
          DECLARE_METHOD(t_EventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetector, g, METH_O),
          DECLARE_METHOD(t_EventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventDetector)[] = {
          { Py_tp_methods, t_EventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventDetector, t_EventDetector, EventDetector);

        void t_EventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(EventDetector), &PY_TYPE_DEF(EventDetector), module, "EventDetector", 0);
        }

        void t_EventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetector), "class_", make_descriptor(EventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetector), "wrapfn_", make_descriptor(t_EventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventDetector::initializeClass, 1)))
            return NULL;
          return t_EventDetector::wrap_Object(EventDetector(((t_EventDetector *) arg)->object.this$));
        }
        static PyObject *t_EventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventDetector_g(t_EventDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_EventDetector_getHandler(t_EventDetector *self)
        {
          ::org::orekit::propagation::events::handlers::EventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(result);
        }

        static PyObject *t_EventDetector_getMaxCheckInterval(t_EventDetector *self)
        {
          ::org::orekit::propagation::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_EventDetector_getMaxIterationCount(t_EventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EventDetector_getThreshold(t_EventDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThreshold());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventDetector_init(t_EventDetector *self, PyObject *args)
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

        static PyObject *t_EventDetector_get__handler(t_EventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(value);
        }

        static PyObject *t_EventDetector_get__maxCheckInterval(t_EventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_EventDetector_get__maxIterationCount(t_EventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EventDetector_get__threshold(t_EventDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThreshold());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative2Field::class$ = NULL;
        jmethodID *FieldUnivariateDerivative2Field::mids$ = NULL;
        bool FieldUnivariateDerivative2Field::live$ = false;

        jclass FieldUnivariateDerivative2Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_42c313632b3465ae] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getUnivariateDerivative2Field_6ae0ed88ce5b4f3f] = env->getStaticMethodID(cls, "getUnivariateDerivative2Field", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field;");
            mids$[mid_getZero_42c313632b3465ae] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldUnivariateDerivative2Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 FieldUnivariateDerivative2Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getOne_42c313632b3465ae]));
        }

        ::java::lang::Class FieldUnivariateDerivative2Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
        }

        FieldUnivariateDerivative2Field FieldUnivariateDerivative2Field::getUnivariateDerivative2Field(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative2Field(env->callStaticObjectMethod(cls, mids$[mid_getUnivariateDerivative2Field_6ae0ed88ce5b4f3f], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 FieldUnivariateDerivative2Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getZero_42c313632b3465ae]));
        }

        jint FieldUnivariateDerivative2Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
        static PyObject *t_FieldUnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2Field_of_(t_FieldUnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2Field_equals(t_FieldUnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2Field_getOne(t_FieldUnivariateDerivative2Field *self);
        static PyObject *t_FieldUnivariateDerivative2Field_getRuntimeClass(t_FieldUnivariateDerivative2Field *self);
        static PyObject *t_FieldUnivariateDerivative2Field_getUnivariateDerivative2Field(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2Field_getZero(t_FieldUnivariateDerivative2Field *self);
        static PyObject *t_FieldUnivariateDerivative2Field_hashCode(t_FieldUnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2Field_get__one(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2Field_get__runtimeClass(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2Field_get__zero(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2Field_get__parameters_(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative2Field__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, one),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, runtimeClass),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, zero),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative2Field__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getUnivariateDerivative2Field, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative2Field)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative2Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldUnivariateDerivative2Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative2Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative2Field, t_FieldUnivariateDerivative2Field, FieldUnivariateDerivative2Field);
        PyObject *t_FieldUnivariateDerivative2Field::wrap_Object(const FieldUnivariateDerivative2Field& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2Field::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2Field *self = (t_FieldUnivariateDerivative2Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative2Field::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2Field::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2Field *self = (t_FieldUnivariateDerivative2Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative2Field::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative2Field), &PY_TYPE_DEF(FieldUnivariateDerivative2Field), module, "FieldUnivariateDerivative2Field", 0);
        }

        void t_FieldUnivariateDerivative2Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2Field), "class_", make_descriptor(FieldUnivariateDerivative2Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2Field), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative2Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative2Field::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative2Field::wrap_Object(FieldUnivariateDerivative2Field(((t_FieldUnivariateDerivative2Field *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative2Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative2Field_of_(t_FieldUnivariateDerivative2Field *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_equals(t_FieldUnivariateDerivative2Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getOne(t_FieldUnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getRuntimeClass(t_FieldUnivariateDerivative2Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getUnivariateDerivative2Field(PyTypeObject *type, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative2Field result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field::getUnivariateDerivative2Field(a0));
            return t_FieldUnivariateDerivative2Field::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getUnivariateDerivative2Field", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getZero(t_FieldUnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_hashCode(t_FieldUnivariateDerivative2Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2Field), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative2Field_get__parameters_(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative2Field_get__one(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_get__runtimeClass(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_get__zero(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonAbstractPropagator.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonAbstractPropagator::class$ = NULL;
      jmethodID *PythonAbstractPropagator::mids$ = NULL;
      bool PythonAbstractPropagator::live$ = false;

      jclass PythonAbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonAbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addEventDetector_efb7003d866d4523] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEphemerisGenerator_18d439b26e70ccd0] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_37528d110cff6b74] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_propagate_a69ef29c3ea1e1fa] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractPropagator::PythonAbstractPropagator() : ::org::orekit::propagation::AbstractPropagator(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonAbstractPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonAbstractPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonAbstractPropagator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractPropagator_init_(t_PythonAbstractPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractPropagator_finalize(t_PythonAbstractPropagator *self);
      static PyObject *t_PythonAbstractPropagator_pythonExtension(t_PythonAbstractPropagator *self, PyObject *args);
      static void JNICALL t_PythonAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractPropagator_get__self(t_PythonAbstractPropagator *self, void *data);
      static PyGetSetDef t_PythonAbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractPropagator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractPropagator)[] = {
        { Py_tp_methods, t_PythonAbstractPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractPropagator_init_ },
        { Py_tp_getset, t_PythonAbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractPropagator),
        NULL
      };

      DEFINE_TYPE(PythonAbstractPropagator, t_PythonAbstractPropagator, PythonAbstractPropagator);

      void t_PythonAbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractPropagator), &PY_TYPE_DEF(PythonAbstractPropagator), module, "PythonAbstractPropagator", 1);
      }

      void t_PythonAbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagator), "class_", make_descriptor(PythonAbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagator), "wrapfn_", make_descriptor(t_PythonAbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonAbstractPropagator_addEventDetector0 },
          { "clearEventsDetectors", "()V", (void *) t_PythonAbstractPropagator_clearEventsDetectors1 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;", (void *) t_PythonAbstractPropagator_getEphemerisGenerator2 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonAbstractPropagator_getEventsDetectors3 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonAbstractPropagator_propagate4 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractPropagator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractPropagator::wrap_Object(PythonAbstractPropagator(((t_PythonAbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractPropagator_init_(t_PythonAbstractPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonAbstractPropagator object((jobject) NULL);

        INT_CALL(object = PythonAbstractPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractPropagator_finalize(t_PythonAbstractPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractPropagator_pythonExtension(t_PythonAbstractPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::EphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractPropagator_get__self(t_PythonAbstractPropagator *self, void *data)
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
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *NaNStrategy::class$ = NULL;
        jmethodID *NaNStrategy::mids$ = NULL;
        bool NaNStrategy::live$ = false;
        NaNStrategy *NaNStrategy::FAILED = NULL;
        NaNStrategy *NaNStrategy::FIXED = NULL;
        NaNStrategy *NaNStrategy::MAXIMAL = NULL;
        NaNStrategy *NaNStrategy::MINIMAL = NULL;
        NaNStrategy *NaNStrategy::REMOVED = NULL;

        jclass NaNStrategy::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/NaNStrategy");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_b30c8b7ab921ffea] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/ranking/NaNStrategy;");
            mids$[mid_values_f32bd31c01ca497a] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/ranking/NaNStrategy;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            FAILED = new NaNStrategy(env->getStaticObjectField(cls, "FAILED", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            FIXED = new NaNStrategy(env->getStaticObjectField(cls, "FIXED", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            MAXIMAL = new NaNStrategy(env->getStaticObjectField(cls, "MAXIMAL", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            MINIMAL = new NaNStrategy(env->getStaticObjectField(cls, "MINIMAL", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            REMOVED = new NaNStrategy(env->getStaticObjectField(cls, "REMOVED", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NaNStrategy NaNStrategy::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return NaNStrategy(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b30c8b7ab921ffea], a0.this$));
        }

        JArray< NaNStrategy > NaNStrategy::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< NaNStrategy >(env->callStaticObjectMethod(cls, mids$[mid_values_f32bd31c01ca497a]));
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
      namespace ranking {
        static PyObject *t_NaNStrategy_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NaNStrategy_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NaNStrategy_of_(t_NaNStrategy *self, PyObject *args);
        static PyObject *t_NaNStrategy_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_NaNStrategy_values(PyTypeObject *type);
        static PyObject *t_NaNStrategy_get__parameters_(t_NaNStrategy *self, void *data);
        static PyGetSetDef t_NaNStrategy__fields_[] = {
          DECLARE_GET_FIELD(t_NaNStrategy, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NaNStrategy__methods_[] = {
          DECLARE_METHOD(t_NaNStrategy, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaNStrategy, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaNStrategy, of_, METH_VARARGS),
          DECLARE_METHOD(t_NaNStrategy, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_NaNStrategy, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NaNStrategy)[] = {
          { Py_tp_methods, t_NaNStrategy__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_NaNStrategy__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NaNStrategy)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(NaNStrategy, t_NaNStrategy, NaNStrategy);
        PyObject *t_NaNStrategy::wrap_Object(const NaNStrategy& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NaNStrategy::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NaNStrategy *self = (t_NaNStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NaNStrategy::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NaNStrategy::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NaNStrategy *self = (t_NaNStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NaNStrategy::install(PyObject *module)
        {
          installType(&PY_TYPE(NaNStrategy), &PY_TYPE_DEF(NaNStrategy), module, "NaNStrategy", 0);
        }

        void t_NaNStrategy::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "class_", make_descriptor(NaNStrategy::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "wrapfn_", make_descriptor(t_NaNStrategy::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "boxfn_", make_descriptor(boxObject));
          env->getClass(NaNStrategy::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "FAILED", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::FAILED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "FIXED", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::FIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "MAXIMAL", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::MAXIMAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "MINIMAL", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::MINIMAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaNStrategy), "REMOVED", make_descriptor(t_NaNStrategy::wrap_Object(*NaNStrategy::REMOVED)));
        }

        static PyObject *t_NaNStrategy_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NaNStrategy::initializeClass, 1)))
            return NULL;
          return t_NaNStrategy::wrap_Object(NaNStrategy(((t_NaNStrategy *) arg)->object.this$));
        }
        static PyObject *t_NaNStrategy_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NaNStrategy::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NaNStrategy_of_(t_NaNStrategy *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_NaNStrategy_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          NaNStrategy result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::ranking::NaNStrategy::valueOf(a0));
            return t_NaNStrategy::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_NaNStrategy_values(PyTypeObject *type)
        {
          JArray< NaNStrategy > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::ranking::NaNStrategy::values());
          return JArray<jobject>(result.this$).wrap(t_NaNStrategy::wrap_jobject);
        }
        static PyObject *t_NaNStrategy_get__parameters_(t_NaNStrategy *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
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
                mids$[mid_process_3f621e0676a56eac] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;)Z");
                mids$[mid_valueOf_e55a7fac0a6d5afb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey;");
                mids$[mid_values_7a7523b02927a2ee] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                OBJECT_ID = new AdmCommonMetadataKey(env->getStaticObjectField(cls, "OBJECT_ID", "Lorg/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdmCommonMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_3f621e0676a56eac], a0.this$, a1.this$, a2.this$);
            }

            AdmCommonMetadataKey AdmCommonMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdmCommonMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e55a7fac0a6d5afb], a0.this$));
            }

            JArray< AdmCommonMetadataKey > AdmCommonMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdmCommonMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_7a7523b02927a2ee]));
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryState::class$ = NULL;
              jmethodID *TrajectoryState::mids$ = NULL;
              bool TrajectoryState::live$ = false;

              jclass TrajectoryState::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0d3cc9d72a4f2928] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;Lorg/orekit/time/AbsoluteDate;[D)V");
                  mids$[mid_init$_43d47814b78412bd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;ILjava/util/List;)V");
                  mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getElements_60c7040667a7dc5c] = env->getMethodID(cls, "getElements", "()[D");
                  mids$[mid_getType_f6a584069fbe1b12] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_toCartesian_e4aeebae5229dc38] = env->getMethodID(cls, "toCartesian", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)Lorg/orekit/utils/TimeStampedPVCoordinates;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              TrajectoryState::TrajectoryState(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d3cc9d72a4f2928, a0.this$, a1.this$, a2.this$)) {}

              TrajectoryState::TrajectoryState(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< ::java::lang::String > & a2, jint a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_43d47814b78412bd, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

              ::org::orekit::utils::CartesianDerivativesFilter TrajectoryState::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryState::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
              }

              JArray< jdouble > TrajectoryState::getElements() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getElements_60c7040667a7dc5c]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType TrajectoryState::getType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getType_f6a584069fbe1b12]));
              }

              ::org::orekit::utils::TimeStampedPVCoordinates TrajectoryState::toCartesian(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) const
              {
                return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toCartesian_e4aeebae5229dc38], a0.this$, a1));
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
              static PyObject *t_TrajectoryState_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryState_instance_(PyTypeObject *type, PyObject *arg);
              static int t_TrajectoryState_init_(t_TrajectoryState *self, PyObject *args, PyObject *kwds);
              static PyObject *t_TrajectoryState_getAvailableDerivatives(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_getDate(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_getElements(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_getType(t_TrajectoryState *self);
              static PyObject *t_TrajectoryState_toCartesian(t_TrajectoryState *self, PyObject *args);
              static PyObject *t_TrajectoryState_get__availableDerivatives(t_TrajectoryState *self, void *data);
              static PyObject *t_TrajectoryState_get__date(t_TrajectoryState *self, void *data);
              static PyObject *t_TrajectoryState_get__elements(t_TrajectoryState *self, void *data);
              static PyObject *t_TrajectoryState_get__type(t_TrajectoryState *self, void *data);
              static PyGetSetDef t_TrajectoryState__fields_[] = {
                DECLARE_GET_FIELD(t_TrajectoryState, availableDerivatives),
                DECLARE_GET_FIELD(t_TrajectoryState, date),
                DECLARE_GET_FIELD(t_TrajectoryState, elements),
                DECLARE_GET_FIELD(t_TrajectoryState, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryState__methods_[] = {
                DECLARE_METHOD(t_TrajectoryState, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryState, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryState, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, getDate, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, getElements, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, getType, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryState, toCartesian, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryState)[] = {
                { Py_tp_methods, t_TrajectoryState__methods_ },
                { Py_tp_init, (void *) t_TrajectoryState_init_ },
                { Py_tp_getset, t_TrajectoryState__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryState)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(TrajectoryState, t_TrajectoryState, TrajectoryState);

              void t_TrajectoryState::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryState), &PY_TYPE_DEF(TrajectoryState), module, "TrajectoryState", 0);
              }

              void t_TrajectoryState::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryState), "class_", make_descriptor(TrajectoryState::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryState), "wrapfn_", make_descriptor(t_TrajectoryState::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryState), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_TrajectoryState_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryState::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryState::wrap_Object(TrajectoryState(((t_TrajectoryState *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryState_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryState::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_TrajectoryState_init_(t_TrajectoryState *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 3:
                  {
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                    JArray< jdouble > a2((jobject) NULL);
                    TrajectoryState object((jobject) NULL);

                    if (!parseArgs(args, "Kk[D", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_, &a1, &a2))
                    {
                      INT_CALL(object = TrajectoryState(a0, a1, a2));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 5:
                  {
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                    JArray< ::java::lang::String > a2((jobject) NULL);
                    jint a3;
                    ::java::util::List a4((jobject) NULL);
                    PyTypeObject **p4;
                    TrajectoryState object((jobject) NULL);

                    if (!parseArgs(args, "Kk[sIK", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
                    {
                      INT_CALL(object = TrajectoryState(a0, a1, a2, a3, a4));
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

              static PyObject *t_TrajectoryState_getAvailableDerivatives(t_TrajectoryState *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_TrajectoryState_getDate(t_TrajectoryState *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryState_getElements(t_TrajectoryState *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getElements());
                return result.wrap();
              }

              static PyObject *t_TrajectoryState_getType(t_TrajectoryState *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_TrajectoryState_toCartesian(t_TrajectoryState *self, PyObject *args)
              {
                ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
                jdouble a1;
                ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.toCartesian(a0, a1));
                  return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toCartesian", args);
                return NULL;
              }

              static PyObject *t_TrajectoryState_get__availableDerivatives(t_TrajectoryState *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_TrajectoryState_get__date(t_TrajectoryState *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_TrajectoryState_get__elements(t_TrajectoryState *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getElements());
                return value.wrap();
              }

              static PyObject *t_TrajectoryState_get__type(t_TrajectoryState *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldFixedNumberInterpolationGrid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldFixedNumberInterpolationGrid::class$ = NULL;
            jmethodID *FieldFixedNumberInterpolationGrid::mids$ = NULL;
            bool FieldFixedNumberInterpolationGrid::live$ = false;

            jclass FieldFixedNumberInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldFixedNumberInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c5199de6167cff95] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
                mids$[mid_getGridPoints_04b33bd8d7b2bde1] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldFixedNumberInterpolationGrid::FieldFixedNumberInterpolationGrid(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c5199de6167cff95, a0.this$, a1)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > FieldFixedNumberInterpolationGrid::getGridPoints(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGridPoints_04b33bd8d7b2bde1], a0.this$, a1.this$));
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
            static PyObject *t_FieldFixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldFixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldFixedNumberInterpolationGrid_of_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args);
            static int t_FieldFixedNumberInterpolationGrid_init_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldFixedNumberInterpolationGrid_getGridPoints(t_FieldFixedNumberInterpolationGrid *self, PyObject *args);
            static PyObject *t_FieldFixedNumberInterpolationGrid_get__parameters_(t_FieldFixedNumberInterpolationGrid *self, void *data);
            static PyGetSetDef t_FieldFixedNumberInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_FieldFixedNumberInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldFixedNumberInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldFixedNumberInterpolationGrid)[] = {
              { Py_tp_methods, t_FieldFixedNumberInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_FieldFixedNumberInterpolationGrid_init_ },
              { Py_tp_getset, t_FieldFixedNumberInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldFixedNumberInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldFixedNumberInterpolationGrid, t_FieldFixedNumberInterpolationGrid, FieldFixedNumberInterpolationGrid);
            PyObject *t_FieldFixedNumberInterpolationGrid::wrap_Object(const FieldFixedNumberInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldFixedNumberInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldFixedNumberInterpolationGrid *self = (t_FieldFixedNumberInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldFixedNumberInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldFixedNumberInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldFixedNumberInterpolationGrid *self = (t_FieldFixedNumberInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldFixedNumberInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldFixedNumberInterpolationGrid), &PY_TYPE_DEF(FieldFixedNumberInterpolationGrid), module, "FieldFixedNumberInterpolationGrid", 0);
            }

            void t_FieldFixedNumberInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFixedNumberInterpolationGrid), "class_", make_descriptor(FieldFixedNumberInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFixedNumberInterpolationGrid), "wrapfn_", make_descriptor(t_FieldFixedNumberInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFixedNumberInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldFixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldFixedNumberInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FieldFixedNumberInterpolationGrid::wrap_Object(FieldFixedNumberInterpolationGrid(((t_FieldFixedNumberInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FieldFixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldFixedNumberInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldFixedNumberInterpolationGrid_of_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldFixedNumberInterpolationGrid_init_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              FieldFixedNumberInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldFixedNumberInterpolationGrid(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldFixedNumberInterpolationGrid_getGridPoints(t_FieldFixedNumberInterpolationGrid *self, PyObject *args)
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
            static PyObject *t_FieldFixedNumberInterpolationGrid_get__parameters_(t_FieldFixedNumberInterpolationGrid *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RangeTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *RangeTroposphericDelayModifier::mids$ = NULL;
          bool RangeTroposphericDelayModifier::live$ = false;

          jclass RangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3e4962f34ea61659] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeTroposphericDelayModifier::RangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_3e4962f34ea61659, a0.this$)) {}

          void RangeTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void RangeTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_RangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeTroposphericDelayModifier_init_(t_RangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeTroposphericDelayModifier_modify(t_RangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeTroposphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_RangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeTroposphericDelayModifier, t_RangeTroposphericDelayModifier, RangeTroposphericDelayModifier);

          void t_RangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeTroposphericDelayModifier), &PY_TYPE_DEF(RangeTroposphericDelayModifier), module, "RangeTroposphericDelayModifier", 0);
          }

          void t_RangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeTroposphericDelayModifier), "class_", make_descriptor(RangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_RangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeTroposphericDelayModifier::wrap_Object(RangeTroposphericDelayModifier(((t_RangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeTroposphericDelayModifier_init_(t_RangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            RangeTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = RangeTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeTroposphericDelayModifier_modify(t_RangeTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeTroposphericDelayModifier *self, PyObject *arg)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/PythonTLEPropagator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *PythonTLEPropagator::class$ = NULL;
          jmethodID *PythonTLEPropagator::mids$ = NULL;
          bool PythonTLEPropagator::live$ = false;

          jclass PythonTLEPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/PythonTLEPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_11c826170d15cb79] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)V");
              mids$[mid_init$_2709a562b7f01856] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_sxpInitialize_0fa09c18fee449d5] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_17db3a65980d3441] = env->getMethodID(cls, "sxpPropagate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonTLEPropagator::PythonTLEPropagator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_11c826170d15cb79, a0.this$, a1.this$, a2)) {}

          PythonTLEPropagator::PythonTLEPropagator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_2709a562b7f01856, a0.this$, a1.this$, a2, a3.this$)) {}

          void PythonTLEPropagator::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonTLEPropagator::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonTLEPropagator::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonTLEPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonTLEPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonTLEPropagator_init_(t_PythonTLEPropagator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonTLEPropagator_finalize(t_PythonTLEPropagator *self);
          static PyObject *t_PythonTLEPropagator_pythonExtension(t_PythonTLEPropagator *self, PyObject *args);
          static void JNICALL t_PythonTLEPropagator_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTLEPropagator_sxpInitialize1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTLEPropagator_sxpPropagate2(JNIEnv *jenv, jobject jobj, jdouble a0);
          static PyObject *t_PythonTLEPropagator_get__self(t_PythonTLEPropagator *self, void *data);
          static PyGetSetDef t_PythonTLEPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_PythonTLEPropagator, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonTLEPropagator__methods_[] = {
            DECLARE_METHOD(t_PythonTLEPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTLEPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTLEPropagator, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonTLEPropagator, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonTLEPropagator)[] = {
            { Py_tp_methods, t_PythonTLEPropagator__methods_ },
            { Py_tp_init, (void *) t_PythonTLEPropagator_init_ },
            { Py_tp_getset, t_PythonTLEPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonTLEPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::TLEPropagator),
            NULL
          };

          DEFINE_TYPE(PythonTLEPropagator, t_PythonTLEPropagator, PythonTLEPropagator);

          void t_PythonTLEPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonTLEPropagator), &PY_TYPE_DEF(PythonTLEPropagator), module, "PythonTLEPropagator", 1);
          }

          void t_PythonTLEPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTLEPropagator), "class_", make_descriptor(PythonTLEPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTLEPropagator), "wrapfn_", make_descriptor(t_PythonTLEPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTLEPropagator), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonTLEPropagator::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonTLEPropagator_pythonDecRef0 },
              { "sxpInitialize", "()V", (void *) t_PythonTLEPropagator_sxpInitialize1 },
              { "sxpPropagate", "(D)V", (void *) t_PythonTLEPropagator_sxpPropagate2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonTLEPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonTLEPropagator::initializeClass, 1)))
              return NULL;
            return t_PythonTLEPropagator::wrap_Object(PythonTLEPropagator(((t_PythonTLEPropagator *) arg)->object.this$));
          }
          static PyObject *t_PythonTLEPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonTLEPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonTLEPropagator_init_(t_PythonTLEPropagator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                PythonTLEPropagator object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = PythonTLEPropagator(a0, a1, a2));
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
                PythonTLEPropagator object((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = PythonTLEPropagator(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonTLEPropagator_finalize(t_PythonTLEPropagator *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonTLEPropagator_pythonExtension(t_PythonTLEPropagator *self, PyObject *args)
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

          static void JNICALL t_PythonTLEPropagator_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonTLEPropagator_sxpInitialize1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "sxpInitialize", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonTLEPropagator_sxpPropagate2(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTLEPropagator::mids$[PythonTLEPropagator::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "sxpPropagate", "d", (double) a0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonTLEPropagator_get__self(t_PythonTLEPropagator *self, void *data)
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractAlfriend1999.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *AbstractAlfriend1999::class$ = NULL;
              jmethodID *AbstractAlfriend1999::mids$ = NULL;
              bool AbstractAlfriend1999::live$ = false;

              jclass AbstractAlfriend1999::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractAlfriend1999");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_184c2f4ec5889c74] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0ed38e7bbee7fafc] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractAlfriend1999::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_184c2f4ec5889c74], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractAlfriend1999::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_0ed38e7bbee7fafc], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_AbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractAlfriend1999_compute(t_AbstractAlfriend1999 *self, PyObject *args);

              static PyMethodDef t_AbstractAlfriend1999__methods_[] = {
                DECLARE_METHOD(t_AbstractAlfriend1999, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractAlfriend1999, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractAlfriend1999, compute, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AbstractAlfriend1999)[] = {
                { Py_tp_methods, t_AbstractAlfriend1999__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AbstractAlfriend1999)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(AbstractAlfriend1999, t_AbstractAlfriend1999, AbstractAlfriend1999);

              void t_AbstractAlfriend1999::install(PyObject *module)
              {
                installType(&PY_TYPE(AbstractAlfriend1999), &PY_TYPE_DEF(AbstractAlfriend1999), module, "AbstractAlfriend1999", 0);
              }

              void t_AbstractAlfriend1999::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlfriend1999), "class_", make_descriptor(AbstractAlfriend1999::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlfriend1999), "wrapfn_", make_descriptor(t_AbstractAlfriend1999::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlfriend1999), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AbstractAlfriend1999::initializeClass, 1)))
                  return NULL;
                return t_AbstractAlfriend1999::wrap_Object(AbstractAlfriend1999(((t_AbstractAlfriend1999 *) arg)->object.this$));
              }
              static PyObject *t_AbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AbstractAlfriend1999::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AbstractAlfriend1999_compute(t_AbstractAlfriend1999 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
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
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(AbstractAlfriend1999), (PyObject *) self, "compute", args, 2);
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
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Side::class$ = NULL;
        jmethodID *Side::mids$ = NULL;
        bool Side::live$ = false;
        Side *Side::BOTH = NULL;
        Side *Side::HYPER = NULL;
        Side *Side::MINUS = NULL;
        Side *Side::PLUS = NULL;

        jclass Side::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Side");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_ba28e458d4b57b62] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/partitioning/Side;");
            mids$[mid_values_1792e4847edb7075] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/partitioning/Side;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BOTH = new Side(env->getStaticObjectField(cls, "BOTH", "Lorg/hipparchus/geometry/partitioning/Side;"));
            HYPER = new Side(env->getStaticObjectField(cls, "HYPER", "Lorg/hipparchus/geometry/partitioning/Side;"));
            MINUS = new Side(env->getStaticObjectField(cls, "MINUS", "Lorg/hipparchus/geometry/partitioning/Side;"));
            PLUS = new Side(env->getStaticObjectField(cls, "PLUS", "Lorg/hipparchus/geometry/partitioning/Side;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Side Side::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Side(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ba28e458d4b57b62], a0.this$));
        }

        JArray< Side > Side::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Side >(env->callStaticObjectMethod(cls, mids$[mid_values_1792e4847edb7075]));
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
        static PyObject *t_Side_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Side_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Side_of_(t_Side *self, PyObject *args);
        static PyObject *t_Side_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Side_values(PyTypeObject *type);
        static PyObject *t_Side_get__parameters_(t_Side *self, void *data);
        static PyGetSetDef t_Side__fields_[] = {
          DECLARE_GET_FIELD(t_Side, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Side__methods_[] = {
          DECLARE_METHOD(t_Side, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Side, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Side, of_, METH_VARARGS),
          DECLARE_METHOD(t_Side, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Side, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Side)[] = {
          { Py_tp_methods, t_Side__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Side__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Side)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Side, t_Side, Side);
        PyObject *t_Side::wrap_Object(const Side& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Side::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Side *self = (t_Side *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Side::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Side::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Side *self = (t_Side *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Side::install(PyObject *module)
        {
          installType(&PY_TYPE(Side), &PY_TYPE_DEF(Side), module, "Side", 0);
        }

        void t_Side::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "class_", make_descriptor(Side::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "wrapfn_", make_descriptor(t_Side::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "boxfn_", make_descriptor(boxObject));
          env->getClass(Side::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "BOTH", make_descriptor(t_Side::wrap_Object(*Side::BOTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "HYPER", make_descriptor(t_Side::wrap_Object(*Side::HYPER)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "MINUS", make_descriptor(t_Side::wrap_Object(*Side::MINUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "PLUS", make_descriptor(t_Side::wrap_Object(*Side::PLUS)));
        }

        static PyObject *t_Side_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Side::initializeClass, 1)))
            return NULL;
          return t_Side::wrap_Object(Side(((t_Side *) arg)->object.this$));
        }
        static PyObject *t_Side_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Side::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Side_of_(t_Side *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Side_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Side result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Side::valueOf(a0));
            return t_Side::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Side_values(PyTypeObject *type)
        {
          JArray< Side > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Side::values());
          return JArray<jobject>(result.this$).wrap(t_Side::wrap_jobject);
        }
        static PyObject *t_Side_get__parameters_(t_Side *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}

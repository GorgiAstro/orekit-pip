#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/ComplexFormat.h"
#include "java/util/Locale.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/ComplexFormat.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexFormat::class$ = NULL;
      jmethodID *ComplexFormat::mids$ = NULL;
      bool ComplexFormat::live$ = false;

      jclass ComplexFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_327b6d3ae10b544b] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_2f8f1e4936e49b8d] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_init$_3e3719c2dd2cb337] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/text/NumberFormat;)V");
          mids$[mid_init$_14e55261fa5caed4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_ecf83385512fcb3c] = env->getMethodID(cls, "format", "(Ljava/lang/Double;)Ljava/lang/String;");
          mids$[mid_format_4371f518eaf97f6b] = env->getMethodID(cls, "format", "(Lorg/hipparchus/complex/Complex;)Ljava/lang/String;");
          mids$[mid_format_ab659826fc95e83a] = env->getMethodID(cls, "format", "(Lorg/hipparchus/complex/Complex;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_8a939fb9d04314c2] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_faf2576acf90261b] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getComplexFormat_43dfc142a69b2802] = env->getStaticMethodID(cls, "getComplexFormat", "()Lorg/hipparchus/complex/ComplexFormat;");
          mids$[mid_getComplexFormat_907dfcdf4894960e] = env->getStaticMethodID(cls, "getComplexFormat", "(Ljava/util/Locale;)Lorg/hipparchus/complex/ComplexFormat;");
          mids$[mid_getComplexFormat_65292ca77486d902] = env->getStaticMethodID(cls, "getComplexFormat", "(Ljava/lang/String;Ljava/util/Locale;)Lorg/hipparchus/complex/ComplexFormat;");
          mids$[mid_getImaginaryCharacter_d2c8eb4129821f0e] = env->getMethodID(cls, "getImaginaryCharacter", "()Ljava/lang/String;");
          mids$[mid_getImaginaryFormat_525709eb5c5b5ea6] = env->getMethodID(cls, "getImaginaryFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getRealFormat_525709eb5c5b5ea6] = env->getMethodID(cls, "getRealFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parse_ba393eca33525b34] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_parse_a925c73b2303ca11] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexFormat::ComplexFormat() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ComplexFormat::ComplexFormat(const ::java::text::NumberFormat & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_327b6d3ae10b544b, a0.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2f8f1e4936e49b8d, a0.this$, a1.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::lang::String & a0, const ::java::text::NumberFormat & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e3719c2dd2cb337, a0.this$, a1.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::lang::String & a0, const ::java::text::NumberFormat & a1, const ::java::text::NumberFormat & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_14e55261fa5caed4, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::String ComplexFormat::format(const ::java::lang::Double & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_ecf83385512fcb3c], a0.this$));
      }

      ::java::lang::String ComplexFormat::format(const ::org::hipparchus::complex::Complex & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_4371f518eaf97f6b], a0.this$));
      }

      ::java::lang::StringBuffer ComplexFormat::format(const ::org::hipparchus::complex::Complex & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_ab659826fc95e83a], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer ComplexFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_8a939fb9d04314c2], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > ComplexFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_faf2576acf90261b]));
      }

      ComplexFormat ComplexFormat::getComplexFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexFormat(env->callStaticObjectMethod(cls, mids$[mid_getComplexFormat_43dfc142a69b2802]));
      }

      ComplexFormat ComplexFormat::getComplexFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexFormat(env->callStaticObjectMethod(cls, mids$[mid_getComplexFormat_907dfcdf4894960e], a0.this$));
      }

      ComplexFormat ComplexFormat::getComplexFormat(const ::java::lang::String & a0, const ::java::util::Locale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexFormat(env->callStaticObjectMethod(cls, mids$[mid_getComplexFormat_65292ca77486d902], a0.this$, a1.this$));
      }

      ::java::lang::String ComplexFormat::getImaginaryCharacter() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImaginaryCharacter_d2c8eb4129821f0e]));
      }

      ::java::text::NumberFormat ComplexFormat::getImaginaryFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getImaginaryFormat_525709eb5c5b5ea6]));
      }

      ::java::text::NumberFormat ComplexFormat::getRealFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getRealFormat_525709eb5c5b5ea6]));
      }

      ::org::hipparchus::complex::Complex ComplexFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_parse_ba393eca33525b34], a0.this$));
      }

      ::org::hipparchus::complex::Complex ComplexFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_parse_a925c73b2303ca11], a0.this$, a1.this$));
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
      static PyObject *t_ComplexFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexFormat_init_(t_ComplexFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexFormat_format(t_ComplexFormat *self, PyObject *args);
      static PyObject *t_ComplexFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_ComplexFormat_getComplexFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_ComplexFormat_getImaginaryCharacter(t_ComplexFormat *self);
      static PyObject *t_ComplexFormat_getImaginaryFormat(t_ComplexFormat *self);
      static PyObject *t_ComplexFormat_getRealFormat(t_ComplexFormat *self);
      static PyObject *t_ComplexFormat_parse(t_ComplexFormat *self, PyObject *args);
      static PyObject *t_ComplexFormat_get__availableLocales(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__complexFormat(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__imaginaryCharacter(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__imaginaryFormat(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__realFormat(t_ComplexFormat *self, void *data);
      static PyGetSetDef t_ComplexFormat__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexFormat, availableLocales),
        DECLARE_GET_FIELD(t_ComplexFormat, complexFormat),
        DECLARE_GET_FIELD(t_ComplexFormat, imaginaryCharacter),
        DECLARE_GET_FIELD(t_ComplexFormat, imaginaryFormat),
        DECLARE_GET_FIELD(t_ComplexFormat, realFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexFormat__methods_[] = {
        DECLARE_METHOD(t_ComplexFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_ComplexFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, getComplexFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, getImaginaryCharacter, METH_NOARGS),
        DECLARE_METHOD(t_ComplexFormat, getImaginaryFormat, METH_NOARGS),
        DECLARE_METHOD(t_ComplexFormat, getRealFormat, METH_NOARGS),
        DECLARE_METHOD(t_ComplexFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexFormat)[] = {
        { Py_tp_methods, t_ComplexFormat__methods_ },
        { Py_tp_init, (void *) t_ComplexFormat_init_ },
        { Py_tp_getset, t_ComplexFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexFormat, t_ComplexFormat, ComplexFormat);

      void t_ComplexFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexFormat), &PY_TYPE_DEF(ComplexFormat), module, "ComplexFormat", 0);
      }

      void t_ComplexFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexFormat), "class_", make_descriptor(ComplexFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexFormat), "wrapfn_", make_descriptor(t_ComplexFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexFormat::initializeClass, 1)))
          return NULL;
        return t_ComplexFormat::wrap_Object(ComplexFormat(((t_ComplexFormat *) arg)->object.this$));
      }
      static PyObject *t_ComplexFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexFormat_init_(t_ComplexFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ComplexFormat object((jobject) NULL);

            INT_CALL(object = ComplexFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = ComplexFormat(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = ComplexFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ComplexFormat(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ComplexFormat(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ::java::text::NumberFormat a2((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "skk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ComplexFormat(a0, a1, a2));
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

      static PyObject *t_ComplexFormat_format(t_ComplexFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::Double a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "O", ::java::lang::PY_TYPE(Double), &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          {
            ::org::hipparchus::complex::Complex a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::complex::Complex a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
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

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_ComplexFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_ComplexFormat_getComplexFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ComplexFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getComplexFormat());
            return t_ComplexFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ComplexFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getComplexFormat(a0));
              return t_ComplexFormat::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::util::Locale a1((jobject) NULL);
            ComplexFormat result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getComplexFormat(a0, a1));
              return t_ComplexFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getComplexFormat", args);
        return NULL;
      }

      static PyObject *t_ComplexFormat_getImaginaryCharacter(t_ComplexFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginaryCharacter());
        return j2p(result);
      }

      static PyObject *t_ComplexFormat_getImaginaryFormat(t_ComplexFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginaryFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ComplexFormat_getRealFormat(t_ComplexFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getRealFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ComplexFormat_parse(t_ComplexFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_ComplexFormat_get__availableLocales(t_ComplexFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_ComplexFormat_get__complexFormat(t_ComplexFormat *self, void *data)
      {
        ComplexFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getComplexFormat());
        return t_ComplexFormat::wrap_Object(value);
      }

      static PyObject *t_ComplexFormat_get__imaginaryCharacter(t_ComplexFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginaryCharacter());
        return j2p(value);
      }

      static PyObject *t_ComplexFormat_get__imaginaryFormat(t_ComplexFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginaryFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }

      static PyObject *t_ComplexFormat_get__realFormat(t_ComplexFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonFieldAdditionalDerivativesProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonFieldAdditionalDerivativesProvider::class$ = NULL;
        jmethodID *PythonFieldAdditionalDerivativesProvider::mids$ = NULL;
        bool PythonFieldAdditionalDerivativesProvider::live$ = false;

        jclass PythonFieldAdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonFieldAdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_combinedDerivatives_1031021bd411f1f1] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/integration/FieldCombinedDerivatives;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_yields_712e981f67f3ccbe] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAdditionalDerivativesProvider::PythonFieldAdditionalDerivativesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonFieldAdditionalDerivativesProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonFieldAdditionalDerivativesProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonFieldAdditionalDerivativesProvider::pythonExtension(jlong a0) const
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
      namespace integration {
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_of_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args);
        static int t_PythonFieldAdditionalDerivativesProvider_init_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_finalize(t_PythonFieldAdditionalDerivativesProvider *self);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_pythonExtension(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jint JNICALL t_PythonFieldAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonFieldAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__self(t_PythonFieldAdditionalDerivativesProvider *self, void *data);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__parameters_(t_PythonFieldAdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_PythonFieldAdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAdditionalDerivativesProvider, self),
          DECLARE_GET_FIELD(t_PythonFieldAdditionalDerivativesProvider, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_PythonFieldAdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAdditionalDerivativesProvider_init_ },
          { Py_tp_getset, t_PythonFieldAdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldAdditionalDerivativesProvider, t_PythonFieldAdditionalDerivativesProvider, PythonFieldAdditionalDerivativesProvider);
        PyObject *t_PythonFieldAdditionalDerivativesProvider::wrap_Object(const PythonFieldAdditionalDerivativesProvider& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdditionalDerivativesProvider::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdditionalDerivativesProvider *self = (t_PythonFieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAdditionalDerivativesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdditionalDerivativesProvider::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdditionalDerivativesProvider *self = (t_PythonFieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAdditionalDerivativesProvider), &PY_TYPE_DEF(PythonFieldAdditionalDerivativesProvider), module, "PythonFieldAdditionalDerivativesProvider", 1);
        }

        void t_PythonFieldAdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalDerivativesProvider), "class_", make_descriptor(PythonFieldAdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_PythonFieldAdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAdditionalDerivativesProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "combinedDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/integration/FieldCombinedDerivatives;", (void *) t_PythonFieldAdditionalDerivativesProvider_combinedDerivatives0 },
            { "getDimension", "()I", (void *) t_PythonFieldAdditionalDerivativesProvider_getDimension1 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonFieldAdditionalDerivativesProvider_getName2 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldAdditionalDerivativesProvider_init3 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAdditionalDerivativesProvider_pythonDecRef4 },
            { "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z", (void *) t_PythonFieldAdditionalDerivativesProvider_yields5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAdditionalDerivativesProvider::wrap_Object(PythonFieldAdditionalDerivativesProvider(((t_PythonFieldAdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_of_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAdditionalDerivativesProvider_init_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldAdditionalDerivativesProvider object((jobject) NULL);

          INT_CALL(object = PythonFieldAdditionalDerivativesProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_finalize(t_PythonFieldAdditionalDerivativesProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_pythonExtension(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::FieldCombinedDerivatives value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "combinedDerivatives", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::FieldCombinedDerivatives::initializeClass, &value))
          {
            throwTypeError("combinedDerivatives", result);
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

        static jint JNICALL t_PythonFieldAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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

        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getName", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getName", result);
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

        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jboolean JNICALL t_PythonFieldAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "yields", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("yields", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__self(t_PythonFieldAdditionalDerivativesProvider *self, void *data)
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
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__parameters_(t_PythonFieldAdditionalDerivativesProvider *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CycleSlipDetectorResults::class$ = NULL;
          jmethodID *CycleSlipDetectorResults::mids$ = NULL;
          bool CycleSlipDetectorResults::live$ = false;

          jclass CycleSlipDetectorResults::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getBeginDate_4350f41a695edc03] = env->getMethodID(cls, "getBeginDate", "(Lorg/orekit/gnss/Frequency;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getCycleSlipMap_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getCycleSlipMap", "()Ljava/util/Map;");
              mids$[mid_getEndDate_4350f41a695edc03] = env->getMethodID(cls, "getEndDate", "(Lorg/orekit/gnss/Frequency;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getSatelliteName_d2c8eb4129821f0e] = env->getMethodID(cls, "getSatelliteName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::time::AbsoluteDate CycleSlipDetectorResults::getBeginDate(const ::org::orekit::gnss::Frequency & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBeginDate_4350f41a695edc03], a0.this$));
          }

          ::java::util::Map CycleSlipDetectorResults::getCycleSlipMap() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCycleSlipMap_dbcb8bbac6b35e0d]));
          }

          ::org::orekit::time::AbsoluteDate CycleSlipDetectorResults::getEndDate(const ::org::orekit::gnss::Frequency & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_4350f41a695edc03], a0.this$));
          }

          ::java::lang::String CycleSlipDetectorResults::getSatelliteName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSatelliteName_d2c8eb4129821f0e]));
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
          static PyObject *t_CycleSlipDetectorResults_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_getBeginDate(t_CycleSlipDetectorResults *self, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_getCycleSlipMap(t_CycleSlipDetectorResults *self);
          static PyObject *t_CycleSlipDetectorResults_getEndDate(t_CycleSlipDetectorResults *self, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_getSatelliteName(t_CycleSlipDetectorResults *self);
          static PyObject *t_CycleSlipDetectorResults_get__cycleSlipMap(t_CycleSlipDetectorResults *self, void *data);
          static PyObject *t_CycleSlipDetectorResults_get__satelliteName(t_CycleSlipDetectorResults *self, void *data);
          static PyGetSetDef t_CycleSlipDetectorResults__fields_[] = {
            DECLARE_GET_FIELD(t_CycleSlipDetectorResults, cycleSlipMap),
            DECLARE_GET_FIELD(t_CycleSlipDetectorResults, satelliteName),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CycleSlipDetectorResults__methods_[] = {
            DECLARE_METHOD(t_CycleSlipDetectorResults, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectorResults, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getBeginDate, METH_O),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getCycleSlipMap, METH_NOARGS),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getEndDate, METH_O),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getSatelliteName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CycleSlipDetectorResults)[] = {
            { Py_tp_methods, t_CycleSlipDetectorResults__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CycleSlipDetectorResults__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CycleSlipDetectorResults)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CycleSlipDetectorResults, t_CycleSlipDetectorResults, CycleSlipDetectorResults);

          void t_CycleSlipDetectorResults::install(PyObject *module)
          {
            installType(&PY_TYPE(CycleSlipDetectorResults), &PY_TYPE_DEF(CycleSlipDetectorResults), module, "CycleSlipDetectorResults", 0);
          }

          void t_CycleSlipDetectorResults::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectorResults), "class_", make_descriptor(CycleSlipDetectorResults::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectorResults), "wrapfn_", make_descriptor(t_CycleSlipDetectorResults::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectorResults), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CycleSlipDetectorResults_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CycleSlipDetectorResults::initializeClass, 1)))
              return NULL;
            return t_CycleSlipDetectorResults::wrap_Object(CycleSlipDetectorResults(((t_CycleSlipDetectorResults *) arg)->object.this$));
          }
          static PyObject *t_CycleSlipDetectorResults_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CycleSlipDetectorResults::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CycleSlipDetectorResults_getBeginDate(t_CycleSlipDetectorResults *self, PyObject *arg)
          {
            ::org::orekit::gnss::Frequency a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
            {
              OBJ_CALL(result = self->object.getBeginDate(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getBeginDate", arg);
            return NULL;
          }

          static PyObject *t_CycleSlipDetectorResults_getCycleSlipMap(t_CycleSlipDetectorResults *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getCycleSlipMap());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_CycleSlipDetectorResults_getEndDate(t_CycleSlipDetectorResults *self, PyObject *arg)
          {
            ::org::orekit::gnss::Frequency a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
            {
              OBJ_CALL(result = self->object.getEndDate(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEndDate", arg);
            return NULL;
          }

          static PyObject *t_CycleSlipDetectorResults_getSatelliteName(t_CycleSlipDetectorResults *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteName());
            return j2p(result);
          }

          static PyObject *t_CycleSlipDetectorResults_get__cycleSlipMap(t_CycleSlipDetectorResults *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getCycleSlipMap());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_CycleSlipDetectorResults_get__satelliteName(t_CycleSlipDetectorResults *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RectangularCholeskyDecomposition.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RectangularCholeskyDecomposition::class$ = NULL;
      jmethodID *RectangularCholeskyDecomposition::mids$ = NULL;
      bool RectangularCholeskyDecomposition::live$ = false;

      jclass RectangularCholeskyDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RectangularCholeskyDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_dc02fdb8767f32bc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getRank_d6ab429752e7c267] = env->getMethodID(cls, "getRank", "()I");
          mids$[mid_getRootMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getRootMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RectangularCholeskyDecomposition::RectangularCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

      RectangularCholeskyDecomposition::RectangularCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc02fdb8767f32bc, a0.this$, a1)) {}

      jint RectangularCholeskyDecomposition::getRank() const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::RealMatrix RectangularCholeskyDecomposition::getRootMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRootMatrix_b2eebabce70526d8]));
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
      static PyObject *t_RectangularCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RectangularCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RectangularCholeskyDecomposition_init_(t_RectangularCholeskyDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RectangularCholeskyDecomposition_getRank(t_RectangularCholeskyDecomposition *self);
      static PyObject *t_RectangularCholeskyDecomposition_getRootMatrix(t_RectangularCholeskyDecomposition *self);
      static PyObject *t_RectangularCholeskyDecomposition_get__rank(t_RectangularCholeskyDecomposition *self, void *data);
      static PyObject *t_RectangularCholeskyDecomposition_get__rootMatrix(t_RectangularCholeskyDecomposition *self, void *data);
      static PyGetSetDef t_RectangularCholeskyDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_RectangularCholeskyDecomposition, rank),
        DECLARE_GET_FIELD(t_RectangularCholeskyDecomposition, rootMatrix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RectangularCholeskyDecomposition__methods_[] = {
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, getRank, METH_NOARGS),
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, getRootMatrix, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RectangularCholeskyDecomposition)[] = {
        { Py_tp_methods, t_RectangularCholeskyDecomposition__methods_ },
        { Py_tp_init, (void *) t_RectangularCholeskyDecomposition_init_ },
        { Py_tp_getset, t_RectangularCholeskyDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RectangularCholeskyDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RectangularCholeskyDecomposition, t_RectangularCholeskyDecomposition, RectangularCholeskyDecomposition);

      void t_RectangularCholeskyDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(RectangularCholeskyDecomposition), &PY_TYPE_DEF(RectangularCholeskyDecomposition), module, "RectangularCholeskyDecomposition", 0);
      }

      void t_RectangularCholeskyDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RectangularCholeskyDecomposition), "class_", make_descriptor(RectangularCholeskyDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RectangularCholeskyDecomposition), "wrapfn_", make_descriptor(t_RectangularCholeskyDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RectangularCholeskyDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RectangularCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RectangularCholeskyDecomposition::initializeClass, 1)))
          return NULL;
        return t_RectangularCholeskyDecomposition::wrap_Object(RectangularCholeskyDecomposition(((t_RectangularCholeskyDecomposition *) arg)->object.this$));
      }
      static PyObject *t_RectangularCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RectangularCholeskyDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RectangularCholeskyDecomposition_init_(t_RectangularCholeskyDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            RectangularCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = RectangularCholeskyDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            RectangularCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RectangularCholeskyDecomposition(a0, a1));
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

      static PyObject *t_RectangularCholeskyDecomposition_getRank(t_RectangularCholeskyDecomposition *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRank());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RectangularCholeskyDecomposition_getRootMatrix(t_RectangularCholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RectangularCholeskyDecomposition_get__rank(t_RectangularCholeskyDecomposition *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRank());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RectangularCholeskyDecomposition_get__rootMatrix(t_RectangularCholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/StatUtils.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *StatUtils::class$ = NULL;
      jmethodID *StatUtils::mids$ = NULL;
      bool StatUtils::live$ = false;

      jclass StatUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/StatUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_geometricMean_a40ce4fdf6559ac0] = env->getStaticMethodID(cls, "geometricMean", "([D)D");
          mids$[mid_geometricMean_620ea098e5f0da00] = env->getStaticMethodID(cls, "geometricMean", "([DII)D");
          mids$[mid_max_a40ce4fdf6559ac0] = env->getStaticMethodID(cls, "max", "([D)D");
          mids$[mid_max_620ea098e5f0da00] = env->getStaticMethodID(cls, "max", "([DII)D");
          mids$[mid_mean_a40ce4fdf6559ac0] = env->getStaticMethodID(cls, "mean", "([D)D");
          mids$[mid_mean_620ea098e5f0da00] = env->getStaticMethodID(cls, "mean", "([DII)D");
          mids$[mid_meanDifference_b01af8a77d4df96f] = env->getStaticMethodID(cls, "meanDifference", "([D[D)D");
          mids$[mid_min_a40ce4fdf6559ac0] = env->getStaticMethodID(cls, "min", "([D)D");
          mids$[mid_min_620ea098e5f0da00] = env->getStaticMethodID(cls, "min", "([DII)D");
          mids$[mid_mode_51f624c89851da7e] = env->getStaticMethodID(cls, "mode", "([D)[D");
          mids$[mid_mode_8f6ddc643efefb02] = env->getStaticMethodID(cls, "mode", "([DII)[D");
          mids$[mid_normalize_51f624c89851da7e] = env->getStaticMethodID(cls, "normalize", "([D)[D");
          mids$[mid_percentile_02811febb145516c] = env->getStaticMethodID(cls, "percentile", "([DD)D");
          mids$[mid_percentile_764f25835195d79e] = env->getStaticMethodID(cls, "percentile", "([DIID)D");
          mids$[mid_populationVariance_a40ce4fdf6559ac0] = env->getStaticMethodID(cls, "populationVariance", "([D)D");
          mids$[mid_populationVariance_02811febb145516c] = env->getStaticMethodID(cls, "populationVariance", "([DD)D");
          mids$[mid_populationVariance_620ea098e5f0da00] = env->getStaticMethodID(cls, "populationVariance", "([DII)D");
          mids$[mid_populationVariance_be090b022ea8e24a] = env->getStaticMethodID(cls, "populationVariance", "([DDII)D");
          mids$[mid_product_a40ce4fdf6559ac0] = env->getStaticMethodID(cls, "product", "([D)D");
          mids$[mid_product_620ea098e5f0da00] = env->getStaticMethodID(cls, "product", "([DII)D");
          mids$[mid_sum_a40ce4fdf6559ac0] = env->getStaticMethodID(cls, "sum", "([D)D");
          mids$[mid_sum_620ea098e5f0da00] = env->getStaticMethodID(cls, "sum", "([DII)D");
          mids$[mid_sumDifference_b01af8a77d4df96f] = env->getStaticMethodID(cls, "sumDifference", "([D[D)D");
          mids$[mid_sumLog_a40ce4fdf6559ac0] = env->getStaticMethodID(cls, "sumLog", "([D)D");
          mids$[mid_sumLog_620ea098e5f0da00] = env->getStaticMethodID(cls, "sumLog", "([DII)D");
          mids$[mid_sumSq_a40ce4fdf6559ac0] = env->getStaticMethodID(cls, "sumSq", "([D)D");
          mids$[mid_sumSq_620ea098e5f0da00] = env->getStaticMethodID(cls, "sumSq", "([DII)D");
          mids$[mid_variance_a40ce4fdf6559ac0] = env->getStaticMethodID(cls, "variance", "([D)D");
          mids$[mid_variance_02811febb145516c] = env->getStaticMethodID(cls, "variance", "([DD)D");
          mids$[mid_variance_620ea098e5f0da00] = env->getStaticMethodID(cls, "variance", "([DII)D");
          mids$[mid_variance_be090b022ea8e24a] = env->getStaticMethodID(cls, "variance", "([DDII)D");
          mids$[mid_varianceDifference_65d620e9532c2371] = env->getStaticMethodID(cls, "varianceDifference", "([D[DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble StatUtils::geometricMean(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_geometricMean_a40ce4fdf6559ac0], a0.this$);
      }

      jdouble StatUtils::geometricMean(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_geometricMean_620ea098e5f0da00], a0.this$, a1, a2);
      }

      jdouble StatUtils::max$(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_max_a40ce4fdf6559ac0], a0.this$);
      }

      jdouble StatUtils::max$(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_max_620ea098e5f0da00], a0.this$, a1, a2);
      }

      jdouble StatUtils::mean$(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_mean_a40ce4fdf6559ac0], a0.this$);
      }

      jdouble StatUtils::mean$(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_mean_620ea098e5f0da00], a0.this$, a1, a2);
      }

      jdouble StatUtils::meanDifference(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_meanDifference_b01af8a77d4df96f], a0.this$, a1.this$);
      }

      jdouble StatUtils::min$(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_min_a40ce4fdf6559ac0], a0.this$);
      }

      jdouble StatUtils::min$(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_min_620ea098e5f0da00], a0.this$, a1, a2);
      }

      JArray< jdouble > StatUtils::mode(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_mode_51f624c89851da7e], a0.this$));
      }

      JArray< jdouble > StatUtils::mode(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_mode_8f6ddc643efefb02], a0.this$, a1, a2));
      }

      JArray< jdouble > StatUtils::normalize(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_normalize_51f624c89851da7e], a0.this$));
      }

      jdouble StatUtils::percentile(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_percentile_02811febb145516c], a0.this$, a1);
      }

      jdouble StatUtils::percentile(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_percentile_764f25835195d79e], a0.this$, a1, a2, a3);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_a40ce4fdf6559ac0], a0.this$);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_02811febb145516c], a0.this$, a1);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_620ea098e5f0da00], a0.this$, a1, a2);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_be090b022ea8e24a], a0.this$, a1, a2, a3);
      }

      jdouble StatUtils::product(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_product_a40ce4fdf6559ac0], a0.this$);
      }

      jdouble StatUtils::product(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_product_620ea098e5f0da00], a0.this$, a1, a2);
      }

      jdouble StatUtils::sum(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sum_a40ce4fdf6559ac0], a0.this$);
      }

      jdouble StatUtils::sum(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sum_620ea098e5f0da00], a0.this$, a1, a2);
      }

      jdouble StatUtils::sumDifference(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumDifference_b01af8a77d4df96f], a0.this$, a1.this$);
      }

      jdouble StatUtils::sumLog(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumLog_a40ce4fdf6559ac0], a0.this$);
      }

      jdouble StatUtils::sumLog(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumLog_620ea098e5f0da00], a0.this$, a1, a2);
      }

      jdouble StatUtils::sumSq(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumSq_a40ce4fdf6559ac0], a0.this$);
      }

      jdouble StatUtils::sumSq(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumSq_620ea098e5f0da00], a0.this$, a1, a2);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_a40ce4fdf6559ac0], a0.this$);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_02811febb145516c], a0.this$, a1);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_620ea098e5f0da00], a0.this$, a1, a2);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_be090b022ea8e24a], a0.this$, a1, a2, a3);
      }

      jdouble StatUtils::varianceDifference(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_varianceDifference_65d620e9532c2371], a0.this$, a1.this$, a2);
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
      static PyObject *t_StatUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StatUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StatUtils_geometricMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_max(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_mean(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_meanDifference(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_min(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_mode(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_normalize(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StatUtils_percentile(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_populationVariance(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_product(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sum(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sumDifference(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sumLog(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sumSq(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_variance(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_varianceDifference(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_StatUtils__methods_[] = {
        DECLARE_METHOD(t_StatUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, geometricMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, max, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, mean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, meanDifference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, min, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, mode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, normalize, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, percentile, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, populationVariance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, product, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sum, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sumDifference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sumLog, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sumSq, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, variance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, varianceDifference, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StatUtils)[] = {
        { Py_tp_methods, t_StatUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StatUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StatUtils, t_StatUtils, StatUtils);

      void t_StatUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(StatUtils), &PY_TYPE_DEF(StatUtils), module, "StatUtils", 0);
      }

      void t_StatUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StatUtils), "class_", make_descriptor(StatUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StatUtils), "wrapfn_", make_descriptor(t_StatUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StatUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StatUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StatUtils::initializeClass, 1)))
          return NULL;
        return t_StatUtils::wrap_Object(StatUtils(((t_StatUtils *) arg)->object.this$));
      }
      static PyObject *t_StatUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StatUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StatUtils_geometricMean(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::geometricMean(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::geometricMean(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "geometricMean", args);
        return NULL;
      }

      static PyObject *t_StatUtils_max(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::max$(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::max$(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "max", args);
        return NULL;
      }

      static PyObject *t_StatUtils_mean(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mean$(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mean$(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "mean", args);
        return NULL;
      }

      static PyObject *t_StatUtils_meanDifference(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::meanDifference(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "meanDifference", args);
        return NULL;
      }

      static PyObject *t_StatUtils_min(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::min$(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::min$(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "min", args);
        return NULL;
      }

      static PyObject *t_StatUtils_mode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mode(a0));
              return result.wrap();
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mode(a0, a1, a2));
              return result.wrap();
            }
          }
        }

        PyErr_SetArgsError(type, "mode", args);
        return NULL;
      }

      static PyObject *t_StatUtils_normalize(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::normalize(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "normalize", arg);
        return NULL;
      }

      static PyObject *t_StatUtils_percentile(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::percentile(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble a3;
            jdouble result;

            if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::percentile(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "percentile", args);
        return NULL;
      }

      static PyObject *t_StatUtils_populationVariance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jint a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "populationVariance", args);
        return NULL;
      }

      static PyObject *t_StatUtils_product(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::product(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::product(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "product", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sum(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sum(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sum(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sumDifference(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumDifference(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "sumDifference", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sumLog(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumLog(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumLog(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "sumLog", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sumSq(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumSq(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumSq(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "sumSq", args);
        return NULL;
      }

      static PyObject *t_StatUtils_variance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jint a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "variance", args);
        return NULL;
      }

      static PyObject *t_StatUtils_varianceDifference(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::varianceDifference(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "varianceDifference", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OutlierFilter.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OutlierFilter::class$ = NULL;
          jmethodID *OutlierFilter::mids$ = NULL;
          bool OutlierFilter::live$ = false;

          jclass OutlierFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OutlierFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_getWarmup_d6ab429752e7c267] = env->getMethodID(cls, "getWarmup", "()I");
              mids$[mid_getMaxSigma_9981f74b2d109da6] = env->getMethodID(cls, "getMaxSigma", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OutlierFilter::OutlierFilter(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

          ::java::util::List OutlierFilter::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void OutlierFilter::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_OutlierFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OutlierFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OutlierFilter_of_(t_OutlierFilter *self, PyObject *args);
          static int t_OutlierFilter_init_(t_OutlierFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OutlierFilter_getParametersDrivers(t_OutlierFilter *self);
          static PyObject *t_OutlierFilter_modifyWithoutDerivatives(t_OutlierFilter *self, PyObject *arg);
          static PyObject *t_OutlierFilter_get__parametersDrivers(t_OutlierFilter *self, void *data);
          static PyObject *t_OutlierFilter_get__parameters_(t_OutlierFilter *self, void *data);
          static PyGetSetDef t_OutlierFilter__fields_[] = {
            DECLARE_GET_FIELD(t_OutlierFilter, parametersDrivers),
            DECLARE_GET_FIELD(t_OutlierFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OutlierFilter__methods_[] = {
            DECLARE_METHOD(t_OutlierFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlierFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlierFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_OutlierFilter, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OutlierFilter, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OutlierFilter)[] = {
            { Py_tp_methods, t_OutlierFilter__methods_ },
            { Py_tp_init, (void *) t_OutlierFilter_init_ },
            { Py_tp_getset, t_OutlierFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OutlierFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OutlierFilter, t_OutlierFilter, OutlierFilter);
          PyObject *t_OutlierFilter::wrap_Object(const OutlierFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OutlierFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OutlierFilter *self = (t_OutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OutlierFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OutlierFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OutlierFilter *self = (t_OutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OutlierFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(OutlierFilter), &PY_TYPE_DEF(OutlierFilter), module, "OutlierFilter", 0);
          }

          void t_OutlierFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlierFilter), "class_", make_descriptor(OutlierFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlierFilter), "wrapfn_", make_descriptor(t_OutlierFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlierFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OutlierFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OutlierFilter::initializeClass, 1)))
              return NULL;
            return t_OutlierFilter::wrap_Object(OutlierFilter(((t_OutlierFilter *) arg)->object.this$));
          }
          static PyObject *t_OutlierFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OutlierFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OutlierFilter_of_(t_OutlierFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_OutlierFilter_init_(t_OutlierFilter *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            OutlierFilter object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OutlierFilter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OutlierFilter_getParametersDrivers(t_OutlierFilter *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OutlierFilter_modifyWithoutDerivatives(t_OutlierFilter *self, PyObject *arg)
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
          static PyObject *t_OutlierFilter_get__parameters_(t_OutlierFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OutlierFilter_get__parametersDrivers(t_OutlierFilter *self, void *data)
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
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
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
            mids$[mid_finish_8062511934471166] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_33c76379cdb8499a] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldOrekitStepHandler::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_8062511934471166], a0.this$);
        }

        void FieldOrekitStepHandler::handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_33c76379cdb8499a], a0.this$);
        }

        void FieldOrekitStepHandler::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
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
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CycleSlipDetectors::class$ = NULL;
          jmethodID *CycleSlipDetectors::mids$ = NULL;
          bool CycleSlipDetectors::live$ = false;

          jclass CycleSlipDetectors::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CycleSlipDetectors");

              mids$ = new jmethodID[max_mid];
              mids$[mid_detect_a27502c31bd75a45] = env->getMethodID(cls, "detect", "(Ljava/util/List;)Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List CycleSlipDetectors::detect(const ::java::util::List & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_detect_a27502c31bd75a45], a0.this$));
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
          static PyObject *t_CycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectors_detect(t_CycleSlipDetectors *self, PyObject *arg);

          static PyMethodDef t_CycleSlipDetectors__methods_[] = {
            DECLARE_METHOD(t_CycleSlipDetectors, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectors, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectors, detect, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CycleSlipDetectors)[] = {
            { Py_tp_methods, t_CycleSlipDetectors__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CycleSlipDetectors)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CycleSlipDetectors, t_CycleSlipDetectors, CycleSlipDetectors);

          void t_CycleSlipDetectors::install(PyObject *module)
          {
            installType(&PY_TYPE(CycleSlipDetectors), &PY_TYPE_DEF(CycleSlipDetectors), module, "CycleSlipDetectors", 0);
          }

          void t_CycleSlipDetectors::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectors), "class_", make_descriptor(CycleSlipDetectors::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectors), "wrapfn_", make_descriptor(t_CycleSlipDetectors::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectors), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CycleSlipDetectors::initializeClass, 1)))
              return NULL;
            return t_CycleSlipDetectors::wrap_Object(CycleSlipDetectors(((t_CycleSlipDetectors *) arg)->object.this$));
          }
          static PyObject *t_CycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CycleSlipDetectors::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CycleSlipDetectors_detect(t_CycleSlipDetectors *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.detect(a0));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CycleSlipDetectorResults));
            }

            PyErr_SetArgsError((PyObject *) self, "detect", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionMappingAdapter.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultivariateFunctionMappingAdapter::class$ = NULL;
          jmethodID *MultivariateFunctionMappingAdapter::mids$ = NULL;
          bool MultivariateFunctionMappingAdapter::live$ = false;

          jclass MultivariateFunctionMappingAdapter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionMappingAdapter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_32541f60a1ef8af6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateFunction;[D[D)V");
              mids$[mid_boundedToUnbounded_51f624c89851da7e] = env->getMethodID(cls, "boundedToUnbounded", "([D)[D");
              mids$[mid_unboundedToBounded_51f624c89851da7e] = env->getMethodID(cls, "unboundedToBounded", "([D)[D");
              mids$[mid_value_a40ce4fdf6559ac0] = env->getMethodID(cls, "value", "([D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultivariateFunctionMappingAdapter::MultivariateFunctionMappingAdapter(const ::org::hipparchus::analysis::MultivariateFunction & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_32541f60a1ef8af6, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > MultivariateFunctionMappingAdapter::boundedToUnbounded(const JArray< jdouble > & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_boundedToUnbounded_51f624c89851da7e], a0.this$));
          }

          JArray< jdouble > MultivariateFunctionMappingAdapter::unboundedToBounded(const JArray< jdouble > & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_unboundedToBounded_51f624c89851da7e], a0.this$));
          }

          jdouble MultivariateFunctionMappingAdapter::value(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_value_a40ce4fdf6559ac0], a0.this$);
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
          static PyObject *t_MultivariateFunctionMappingAdapter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateFunctionMappingAdapter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MultivariateFunctionMappingAdapter_init_(t_MultivariateFunctionMappingAdapter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultivariateFunctionMappingAdapter_boundedToUnbounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg);
          static PyObject *t_MultivariateFunctionMappingAdapter_unboundedToBounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg);
          static PyObject *t_MultivariateFunctionMappingAdapter_value(t_MultivariateFunctionMappingAdapter *self, PyObject *arg);

          static PyMethodDef t_MultivariateFunctionMappingAdapter__methods_[] = {
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, boundedToUnbounded, METH_O),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, unboundedToBounded, METH_O),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, value, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultivariateFunctionMappingAdapter)[] = {
            { Py_tp_methods, t_MultivariateFunctionMappingAdapter__methods_ },
            { Py_tp_init, (void *) t_MultivariateFunctionMappingAdapter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultivariateFunctionMappingAdapter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MultivariateFunctionMappingAdapter, t_MultivariateFunctionMappingAdapter, MultivariateFunctionMappingAdapter);

          void t_MultivariateFunctionMappingAdapter::install(PyObject *module)
          {
            installType(&PY_TYPE(MultivariateFunctionMappingAdapter), &PY_TYPE_DEF(MultivariateFunctionMappingAdapter), module, "MultivariateFunctionMappingAdapter", 0);
          }

          void t_MultivariateFunctionMappingAdapter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionMappingAdapter), "class_", make_descriptor(MultivariateFunctionMappingAdapter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionMappingAdapter), "wrapfn_", make_descriptor(t_MultivariateFunctionMappingAdapter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionMappingAdapter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultivariateFunctionMappingAdapter::initializeClass, 1)))
              return NULL;
            return t_MultivariateFunctionMappingAdapter::wrap_Object(MultivariateFunctionMappingAdapter(((t_MultivariateFunctionMappingAdapter *) arg)->object.this$));
          }
          static PyObject *t_MultivariateFunctionMappingAdapter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultivariateFunctionMappingAdapter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MultivariateFunctionMappingAdapter_init_(t_MultivariateFunctionMappingAdapter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            MultivariateFunctionMappingAdapter object((jobject) NULL);

            if (!parseArgs(args, "k[D[D", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MultivariateFunctionMappingAdapter(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_boundedToUnbounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.boundedToUnbounded(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "boundedToUnbounded", arg);
            return NULL;
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_unboundedToBounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.unboundedToBounded(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "unboundedToBounded", arg);
            return NULL;
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_value(t_MultivariateFunctionMappingAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "value", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeBuilder::class$ = NULL;
      jmethodID *AttitudeBuilder::mids$ = NULL;
      bool AttitudeBuilder::live$ = false;

      jclass AttitudeBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_build_16f6708eb1cda684] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_build_11d80d4c91effa8b] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldAttitude AttitudeBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::FieldPVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_build_16f6708eb1cda684], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AttitudeBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_build_11d80d4c91effa8b], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_AttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeBuilder_build(t_AttitudeBuilder *self, PyObject *args);

      static PyMethodDef t_AttitudeBuilder__methods_[] = {
        DECLARE_METHOD(t_AttitudeBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeBuilder, build, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeBuilder)[] = {
        { Py_tp_methods, t_AttitudeBuilder__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudeBuilder, t_AttitudeBuilder, AttitudeBuilder);

      void t_AttitudeBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeBuilder), &PY_TYPE_DEF(AttitudeBuilder), module, "AttitudeBuilder", 0);
      }

      void t_AttitudeBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeBuilder), "class_", make_descriptor(AttitudeBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeBuilder), "wrapfn_", make_descriptor(t_AttitudeBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeBuilder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeBuilder::initializeClass, 1)))
          return NULL;
        return t_AttitudeBuilder::wrap_Object(AttitudeBuilder(((t_AttitudeBuilder *) arg)->object.this$));
      }
      static PyObject *t_AttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeBuilder_build(t_AttitudeBuilder *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedAngularCoordinates a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinatesProvider a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::TimeStampedFieldAngularCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "build", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/DateComponents.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/Month.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *DateComponents::class$ = NULL;
      jmethodID *DateComponents::mids$ = NULL;
      bool DateComponents::live$ = false;
      DateComponents *DateComponents::BEIDOU_EPOCH = NULL;
      DateComponents *DateComponents::CCSDS_EPOCH = NULL;
      DateComponents *DateComponents::FIFTIES_EPOCH = NULL;
      DateComponents *DateComponents::GALILEO_EPOCH = NULL;
      DateComponents *DateComponents::GLONASS_EPOCH = NULL;
      DateComponents *DateComponents::GPS_EPOCH = NULL;
      DateComponents *DateComponents::IRNSS_EPOCH = NULL;
      DateComponents *DateComponents::J2000_EPOCH = NULL;
      DateComponents *DateComponents::JAVA_EPOCH = NULL;
      DateComponents *DateComponents::JULIAN_EPOCH = NULL;
      DateComponents *DateComponents::MAX_EPOCH = NULL;
      DateComponents *DateComponents::MIN_EPOCH = NULL;
      DateComponents *DateComponents::MODIFIED_JULIAN_EPOCH = NULL;
      DateComponents *DateComponents::QZSS_EPOCH = NULL;

      jclass DateComponents::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/DateComponents");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_5e81a70a44ab7b55] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;I)V");
          mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_1a20c824be86d0cc] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;I)V");
          mids$[mid_init$_48ca1125d4856a74] = env->getMethodID(cls, "<init>", "(III)V");
          mids$[mid_compareTo_d1b329613694e446] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/DateComponents;)I");
          mids$[mid_createFromWeekComponents_bda69ce54395d0e9] = env->getStaticMethodID(cls, "createFromWeekComponents", "(III)Lorg/orekit/time/DateComponents;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getCalendarWeek_d6ab429752e7c267] = env->getMethodID(cls, "getCalendarWeek", "()I");
          mids$[mid_getDay_d6ab429752e7c267] = env->getMethodID(cls, "getDay", "()I");
          mids$[mid_getDayOfWeek_d6ab429752e7c267] = env->getMethodID(cls, "getDayOfWeek", "()I");
          mids$[mid_getDayOfYear_d6ab429752e7c267] = env->getMethodID(cls, "getDayOfYear", "()I");
          mids$[mid_getJ2000Day_d6ab429752e7c267] = env->getMethodID(cls, "getJ2000Day", "()I");
          mids$[mid_getMJD_d6ab429752e7c267] = env->getMethodID(cls, "getMJD", "()I");
          mids$[mid_getMonth_d6ab429752e7c267] = env->getMethodID(cls, "getMonth", "()I");
          mids$[mid_getMonthEnum_7253b418bb77eb1a] = env->getMethodID(cls, "getMonthEnum", "()Lorg/orekit/time/Month;");
          mids$[mid_getYear_d6ab429752e7c267] = env->getMethodID(cls, "getYear", "()I");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_parseDate_b0172433977a8506] = env->getStaticMethodID(cls, "parseDate", "(Ljava/lang/String;)Lorg/orekit/time/DateComponents;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BEIDOU_EPOCH = new DateComponents(env->getStaticObjectField(cls, "BEIDOU_EPOCH", "Lorg/orekit/time/DateComponents;"));
          CCSDS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "CCSDS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          FIFTIES_EPOCH = new DateComponents(env->getStaticObjectField(cls, "FIFTIES_EPOCH", "Lorg/orekit/time/DateComponents;"));
          GALILEO_EPOCH = new DateComponents(env->getStaticObjectField(cls, "GALILEO_EPOCH", "Lorg/orekit/time/DateComponents;"));
          GLONASS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "GLONASS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          GPS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "GPS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          IRNSS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "IRNSS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          J2000_EPOCH = new DateComponents(env->getStaticObjectField(cls, "J2000_EPOCH", "Lorg/orekit/time/DateComponents;"));
          JAVA_EPOCH = new DateComponents(env->getStaticObjectField(cls, "JAVA_EPOCH", "Lorg/orekit/time/DateComponents;"));
          JULIAN_EPOCH = new DateComponents(env->getStaticObjectField(cls, "JULIAN_EPOCH", "Lorg/orekit/time/DateComponents;"));
          MAX_EPOCH = new DateComponents(env->getStaticObjectField(cls, "MAX_EPOCH", "Lorg/orekit/time/DateComponents;"));
          MIN_EPOCH = new DateComponents(env->getStaticObjectField(cls, "MIN_EPOCH", "Lorg/orekit/time/DateComponents;"));
          MODIFIED_JULIAN_EPOCH = new DateComponents(env->getStaticObjectField(cls, "MODIFIED_JULIAN_EPOCH", "Lorg/orekit/time/DateComponents;"));
          QZSS_EPOCH = new DateComponents(env->getStaticObjectField(cls, "QZSS_EPOCH", "Lorg/orekit/time/DateComponents;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DateComponents::DateComponents(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      DateComponents::DateComponents(const DateComponents & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5e81a70a44ab7b55, a0.this$, a1)) {}

      DateComponents::DateComponents(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

      DateComponents::DateComponents(jint a0, const ::org::orekit::time::Month & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1a20c824be86d0cc, a0, a1.this$, a2)) {}

      DateComponents::DateComponents(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_48ca1125d4856a74, a0, a1, a2)) {}

      jint DateComponents::compareTo(const DateComponents & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_d1b329613694e446], a0.this$);
      }

      DateComponents DateComponents::createFromWeekComponents(jint a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return DateComponents(env->callStaticObjectMethod(cls, mids$[mid_createFromWeekComponents_bda69ce54395d0e9], a0, a1, a2));
      }

      jboolean DateComponents::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      jint DateComponents::getCalendarWeek() const
      {
        return env->callIntMethod(this$, mids$[mid_getCalendarWeek_d6ab429752e7c267]);
      }

      jint DateComponents::getDay() const
      {
        return env->callIntMethod(this$, mids$[mid_getDay_d6ab429752e7c267]);
      }

      jint DateComponents::getDayOfWeek() const
      {
        return env->callIntMethod(this$, mids$[mid_getDayOfWeek_d6ab429752e7c267]);
      }

      jint DateComponents::getDayOfYear() const
      {
        return env->callIntMethod(this$, mids$[mid_getDayOfYear_d6ab429752e7c267]);
      }

      jint DateComponents::getJ2000Day() const
      {
        return env->callIntMethod(this$, mids$[mid_getJ2000Day_d6ab429752e7c267]);
      }

      jint DateComponents::getMJD() const
      {
        return env->callIntMethod(this$, mids$[mid_getMJD_d6ab429752e7c267]);
      }

      jint DateComponents::getMonth() const
      {
        return env->callIntMethod(this$, mids$[mid_getMonth_d6ab429752e7c267]);
      }

      ::org::orekit::time::Month DateComponents::getMonthEnum() const
      {
        return ::org::orekit::time::Month(env->callObjectMethod(this$, mids$[mid_getMonthEnum_7253b418bb77eb1a]));
      }

      jint DateComponents::getYear() const
      {
        return env->callIntMethod(this$, mids$[mid_getYear_d6ab429752e7c267]);
      }

      jint DateComponents::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      DateComponents DateComponents::parseDate(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DateComponents(env->callStaticObjectMethod(cls, mids$[mid_parseDate_b0172433977a8506], a0.this$));
      }

      ::java::lang::String DateComponents::toString() const
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
    namespace time {
      static PyObject *t_DateComponents_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateComponents_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DateComponents_init_(t_DateComponents *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DateComponents_compareTo(t_DateComponents *self, PyObject *arg);
      static PyObject *t_DateComponents_createFromWeekComponents(PyTypeObject *type, PyObject *args);
      static PyObject *t_DateComponents_equals(t_DateComponents *self, PyObject *args);
      static PyObject *t_DateComponents_getCalendarWeek(t_DateComponents *self);
      static PyObject *t_DateComponents_getDay(t_DateComponents *self);
      static PyObject *t_DateComponents_getDayOfWeek(t_DateComponents *self);
      static PyObject *t_DateComponents_getDayOfYear(t_DateComponents *self);
      static PyObject *t_DateComponents_getJ2000Day(t_DateComponents *self);
      static PyObject *t_DateComponents_getMJD(t_DateComponents *self);
      static PyObject *t_DateComponents_getMonth(t_DateComponents *self);
      static PyObject *t_DateComponents_getMonthEnum(t_DateComponents *self);
      static PyObject *t_DateComponents_getYear(t_DateComponents *self);
      static PyObject *t_DateComponents_hashCode(t_DateComponents *self, PyObject *args);
      static PyObject *t_DateComponents_parseDate(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateComponents_toString(t_DateComponents *self, PyObject *args);
      static PyObject *t_DateComponents_get__calendarWeek(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__day(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__dayOfWeek(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__dayOfYear(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__j2000Day(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__mJD(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__month(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__monthEnum(t_DateComponents *self, void *data);
      static PyObject *t_DateComponents_get__year(t_DateComponents *self, void *data);
      static PyGetSetDef t_DateComponents__fields_[] = {
        DECLARE_GET_FIELD(t_DateComponents, calendarWeek),
        DECLARE_GET_FIELD(t_DateComponents, day),
        DECLARE_GET_FIELD(t_DateComponents, dayOfWeek),
        DECLARE_GET_FIELD(t_DateComponents, dayOfYear),
        DECLARE_GET_FIELD(t_DateComponents, j2000Day),
        DECLARE_GET_FIELD(t_DateComponents, mJD),
        DECLARE_GET_FIELD(t_DateComponents, month),
        DECLARE_GET_FIELD(t_DateComponents, monthEnum),
        DECLARE_GET_FIELD(t_DateComponents, year),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DateComponents__methods_[] = {
        DECLARE_METHOD(t_DateComponents, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, compareTo, METH_O),
        DECLARE_METHOD(t_DateComponents, createFromWeekComponents, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, equals, METH_VARARGS),
        DECLARE_METHOD(t_DateComponents, getCalendarWeek, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getDay, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getDayOfWeek, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getDayOfYear, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getJ2000Day, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getMJD, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getMonth, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getMonthEnum, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, getYear, METH_NOARGS),
        DECLARE_METHOD(t_DateComponents, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_DateComponents, parseDate, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateComponents, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DateComponents)[] = {
        { Py_tp_methods, t_DateComponents__methods_ },
        { Py_tp_init, (void *) t_DateComponents_init_ },
        { Py_tp_getset, t_DateComponents__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DateComponents)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DateComponents, t_DateComponents, DateComponents);

      void t_DateComponents::install(PyObject *module)
      {
        installType(&PY_TYPE(DateComponents), &PY_TYPE_DEF(DateComponents), module, "DateComponents", 0);
      }

      void t_DateComponents::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "class_", make_descriptor(DateComponents::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "wrapfn_", make_descriptor(t_DateComponents::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "boxfn_", make_descriptor(boxObject));
        env->getClass(DateComponents::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "BEIDOU_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::BEIDOU_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "CCSDS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::CCSDS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "FIFTIES_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::FIFTIES_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "GALILEO_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::GALILEO_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "GLONASS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::GLONASS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "GPS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::GPS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "IRNSS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::IRNSS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "J2000_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::J2000_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "JAVA_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::JAVA_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "JULIAN_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "MAX_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::MAX_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "MIN_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::MIN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "MODIFIED_JULIAN_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::MODIFIED_JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateComponents), "QZSS_EPOCH", make_descriptor(t_DateComponents::wrap_Object(*DateComponents::QZSS_EPOCH)));
      }

      static PyObject *t_DateComponents_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DateComponents::initializeClass, 1)))
          return NULL;
        return t_DateComponents::wrap_Object(DateComponents(((t_DateComponents *) arg)->object.this$));
      }
      static PyObject *t_DateComponents_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DateComponents::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DateComponents_init_(t_DateComponents *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = DateComponents(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            DateComponents a0((jobject) NULL);
            jint a1;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "kI", DateComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DateComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = DateComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "IKI", ::org::orekit::time::Month::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2))
            {
              INT_CALL(object = DateComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            DateComponents object((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              INT_CALL(object = DateComponents(a0, a1, a2));
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

      static PyObject *t_DateComponents_compareTo(t_DateComponents *self, PyObject *arg)
      {
        DateComponents a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", DateComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_DateComponents_createFromWeekComponents(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        DateComponents result((jobject) NULL);

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::DateComponents::createFromWeekComponents(a0, a1, a2));
          return t_DateComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFromWeekComponents", args);
        return NULL;
      }

      static PyObject *t_DateComponents_equals(t_DateComponents *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DateComponents), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_DateComponents_getCalendarWeek(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCalendarWeek());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getDay(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDay());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getDayOfWeek(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDayOfWeek());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getDayOfYear(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDayOfYear());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getJ2000Day(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getJ2000Day());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getMJD(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMJD());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getMonth(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMonth());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_getMonthEnum(t_DateComponents *self)
      {
        ::org::orekit::time::Month result((jobject) NULL);
        OBJ_CALL(result = self->object.getMonthEnum());
        return ::org::orekit::time::t_Month::wrap_Object(result);
      }

      static PyObject *t_DateComponents_getYear(t_DateComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getYear());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DateComponents_hashCode(t_DateComponents *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DateComponents), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_DateComponents_parseDate(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        DateComponents result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::DateComponents::parseDate(a0));
          return t_DateComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseDate", arg);
        return NULL;
      }

      static PyObject *t_DateComponents_toString(t_DateComponents *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(DateComponents), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DateComponents_get__calendarWeek(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCalendarWeek());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__day(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDay());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__dayOfWeek(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDayOfWeek());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__dayOfYear(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDayOfYear());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__j2000Day(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getJ2000Day());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__mJD(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMJD());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__month(t_DateComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMonth());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DateComponents_get__monthEnum(t_DateComponents *self, void *data)
      {
        ::org::orekit::time::Month value((jobject) NULL);
        OBJ_CALL(value = self->object.getMonthEnum());
        return ::org::orekit::time::t_Month::wrap_Object(value);
      }

      static PyObject *t_DateComponents_get__year(t_DateComponents *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative1Field::class$ = NULL;
        jmethodID *UnivariateDerivative1Field::mids$ = NULL;
        bool UnivariateDerivative1Field::live$ = false;

        jclass UnivariateDerivative1Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative1Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getInstance_573405a3d98142e3] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1Field;");
            mids$[mid_getOne_9b106317a0967986] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_9b106317a0967986] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean UnivariateDerivative1Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        UnivariateDerivative1Field UnivariateDerivative1Field::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative1Field(env->callStaticObjectMethod(cls, mids$[mid_getInstance_573405a3d98142e3]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 UnivariateDerivative1Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getOne_9b106317a0967986]));
        }

        ::java::lang::Class UnivariateDerivative1Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 UnivariateDerivative1Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getZero_9b106317a0967986]));
        }

        jint UnivariateDerivative1Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
        static PyObject *t_UnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1Field_equals(t_UnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1Field_getInstance(PyTypeObject *type);
        static PyObject *t_UnivariateDerivative1Field_getOne(t_UnivariateDerivative1Field *self);
        static PyObject *t_UnivariateDerivative1Field_getRuntimeClass(t_UnivariateDerivative1Field *self);
        static PyObject *t_UnivariateDerivative1Field_getZero(t_UnivariateDerivative1Field *self);
        static PyObject *t_UnivariateDerivative1Field_hashCode(t_UnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1Field_get__instance(t_UnivariateDerivative1Field *self, void *data);
        static PyObject *t_UnivariateDerivative1Field_get__one(t_UnivariateDerivative1Field *self, void *data);
        static PyObject *t_UnivariateDerivative1Field_get__runtimeClass(t_UnivariateDerivative1Field *self, void *data);
        static PyObject *t_UnivariateDerivative1Field_get__zero(t_UnivariateDerivative1Field *self, void *data);
        static PyGetSetDef t_UnivariateDerivative1Field__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, instance),
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, one),
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, runtimeClass),
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative1Field__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative1Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative1Field)[] = {
          { Py_tp_methods, t_UnivariateDerivative1Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateDerivative1Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative1Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative1Field, t_UnivariateDerivative1Field, UnivariateDerivative1Field);

        void t_UnivariateDerivative1Field::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative1Field), &PY_TYPE_DEF(UnivariateDerivative1Field), module, "UnivariateDerivative1Field", 0);
        }

        void t_UnivariateDerivative1Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1Field), "class_", make_descriptor(UnivariateDerivative1Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1Field), "wrapfn_", make_descriptor(t_UnivariateDerivative1Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative1Field::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative1Field::wrap_Object(UnivariateDerivative1Field(((t_UnivariateDerivative1Field *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative1Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative1Field_equals(t_UnivariateDerivative1Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative1Field_getInstance(PyTypeObject *type)
        {
          UnivariateDerivative1Field result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field::getInstance());
          return t_UnivariateDerivative1Field::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative1Field_getOne(t_UnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative1Field_getRuntimeClass(t_UnivariateDerivative1Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
        }

        static PyObject *t_UnivariateDerivative1Field_getZero(t_UnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative1Field_hashCode(t_UnivariateDerivative1Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1Field), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative1Field_get__instance(t_UnivariateDerivative1Field *self, void *data)
        {
          UnivariateDerivative1Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_UnivariateDerivative1Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1Field_get__one(t_UnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1Field_get__runtimeClass(t_UnivariateDerivative1Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1Field_get__zero(t_UnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$Builder.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$Builder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AggregatedPVCoordinatesProvider$Builder::class$ = NULL;
      jmethodID *AggregatedPVCoordinatesProvider$Builder::mids$ = NULL;
      bool AggregatedPVCoordinatesProvider$Builder::live$ = false;

      jclass AggregatedPVCoordinatesProvider$Builder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AggregatedPVCoordinatesProvider$Builder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_478a81392f58970d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;)V");
          mids$[mid_addPVProviderAfter_ecfa93deb608008c] = env->getMethodID(cls, "addPVProviderAfter", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinatesProvider;Z)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");
          mids$[mid_addPVProviderBefore_ecfa93deb608008c] = env->getMethodID(cls, "addPVProviderBefore", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinatesProvider;Z)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");
          mids$[mid_build_3b84d0832f3228c6] = env->getMethodID(cls, "build", "()Lorg/orekit/utils/AggregatedPVCoordinatesProvider;");
          mids$[mid_invalidAfter_36d4c41e3a6db324] = env->getMethodID(cls, "invalidAfter", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");
          mids$[mid_invalidBefore_36d4c41e3a6db324] = env->getMethodID(cls, "invalidBefore", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregatedPVCoordinatesProvider$Builder::AggregatedPVCoordinatesProvider$Builder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      AggregatedPVCoordinatesProvider$Builder::AggregatedPVCoordinatesProvider$Builder(const ::org::orekit::utils::PVCoordinatesProvider & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_478a81392f58970d, a0.this$)) {}

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::addPVProviderAfter(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jboolean a2) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_addPVProviderAfter_ecfa93deb608008c], a0.this$, a1.this$, a2));
      }

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::addPVProviderBefore(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jboolean a2) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_addPVProviderBefore_ecfa93deb608008c], a0.this$, a1.this$, a2));
      }

      ::org::orekit::utils::AggregatedPVCoordinatesProvider AggregatedPVCoordinatesProvider$Builder::build() const
      {
        return ::org::orekit::utils::AggregatedPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_build_3b84d0832f3228c6]));
      }

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::invalidAfter(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_invalidAfter_36d4c41e3a6db324], a0.this$));
      }

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::invalidBefore(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_invalidBefore_36d4c41e3a6db324], a0.this$));
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
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregatedPVCoordinatesProvider$Builder_init_(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_build(t_AggregatedPVCoordinatesProvider$Builder *self);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg);

      static PyMethodDef t_AggregatedPVCoordinatesProvider$Builder__methods_[] = {
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, addPVProviderAfter, METH_VARARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, addPVProviderBefore, METH_VARARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, build, METH_NOARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, invalidAfter, METH_O),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, invalidBefore, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregatedPVCoordinatesProvider$Builder)[] = {
        { Py_tp_methods, t_AggregatedPVCoordinatesProvider$Builder__methods_ },
        { Py_tp_init, (void *) t_AggregatedPVCoordinatesProvider$Builder_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregatedPVCoordinatesProvider$Builder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregatedPVCoordinatesProvider$Builder, t_AggregatedPVCoordinatesProvider$Builder, AggregatedPVCoordinatesProvider$Builder);

      void t_AggregatedPVCoordinatesProvider$Builder::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregatedPVCoordinatesProvider$Builder), &PY_TYPE_DEF(AggregatedPVCoordinatesProvider$Builder), module, "AggregatedPVCoordinatesProvider$Builder", 0);
      }

      void t_AggregatedPVCoordinatesProvider$Builder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$Builder), "class_", make_descriptor(AggregatedPVCoordinatesProvider$Builder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$Builder), "wrapfn_", make_descriptor(t_AggregatedPVCoordinatesProvider$Builder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$Builder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregatedPVCoordinatesProvider$Builder::initializeClass, 1)))
          return NULL;
        return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(AggregatedPVCoordinatesProvider$Builder(((t_AggregatedPVCoordinatesProvider$Builder *) arg)->object.this$));
      }
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregatedPVCoordinatesProvider$Builder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregatedPVCoordinatesProvider$Builder_init_(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            AggregatedPVCoordinatesProvider$Builder object((jobject) NULL);

            INT_CALL(object = AggregatedPVCoordinatesProvider$Builder());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            AggregatedPVCoordinatesProvider$Builder object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0))
            {
              INT_CALL(object = AggregatedPVCoordinatesProvider$Builder(a0));
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

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
        jboolean a2;
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArgs(args, "kkZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addPVProviderAfter(a0, a1, a2));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addPVProviderAfter", args);
        return NULL;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
        jboolean a2;
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArgs(args, "kkZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addPVProviderBefore(a0, a1, a2));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addPVProviderBefore", args);
        return NULL;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_build(t_AggregatedPVCoordinatesProvider$Builder *self)
      {
        ::org::orekit::utils::AggregatedPVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.build());
        return ::org::orekit::utils::t_AggregatedPVCoordinatesProvider::wrap_Object(result);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.invalidAfter(a0));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "invalidAfter", arg);
        return NULL;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.invalidBefore(a0));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "invalidBefore", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/LnsCoefficients.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/util/SortedMap.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *LnsCoefficients::class$ = NULL;
            jmethodID *LnsCoefficients::mids$ = NULL;
            bool LnsCoefficients::live$ = false;

            jclass LnsCoefficients::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/LnsCoefficients");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_91456eeebdcf9dcd] = env->getMethodID(cls, "<init>", "(II[[DLjava/util/SortedMap;D)V");
                mids$[mid_getLns_6d920aab27f0a3d2] = env->getMethodID(cls, "getLns", "(II)D");
                mids$[mid_getdLnsdGamma_6d920aab27f0a3d2] = env->getMethodID(cls, "getdLnsdGamma", "(II)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LnsCoefficients::LnsCoefficients(jint a0, jint a1, const JArray< JArray< jdouble > > & a2, const ::java::util::SortedMap & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_91456eeebdcf9dcd, a0, a1, a2.this$, a3.this$, a4)) {}

            jdouble LnsCoefficients::getLns(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLns_6d920aab27f0a3d2], a0, a1);
            }

            jdouble LnsCoefficients::getdLnsdGamma(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdLnsdGamma_6d920aab27f0a3d2], a0, a1);
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
            static PyObject *t_LnsCoefficients_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LnsCoefficients_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LnsCoefficients_init_(t_LnsCoefficients *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LnsCoefficients_getLns(t_LnsCoefficients *self, PyObject *args);
            static PyObject *t_LnsCoefficients_getdLnsdGamma(t_LnsCoefficients *self, PyObject *args);

            static PyMethodDef t_LnsCoefficients__methods_[] = {
              DECLARE_METHOD(t_LnsCoefficients, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LnsCoefficients, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LnsCoefficients, getLns, METH_VARARGS),
              DECLARE_METHOD(t_LnsCoefficients, getdLnsdGamma, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LnsCoefficients)[] = {
              { Py_tp_methods, t_LnsCoefficients__methods_ },
              { Py_tp_init, (void *) t_LnsCoefficients_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LnsCoefficients)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LnsCoefficients, t_LnsCoefficients, LnsCoefficients);

            void t_LnsCoefficients::install(PyObject *module)
            {
              installType(&PY_TYPE(LnsCoefficients), &PY_TYPE_DEF(LnsCoefficients), module, "LnsCoefficients", 0);
            }

            void t_LnsCoefficients::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LnsCoefficients), "class_", make_descriptor(LnsCoefficients::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LnsCoefficients), "wrapfn_", make_descriptor(t_LnsCoefficients::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LnsCoefficients), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LnsCoefficients_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LnsCoefficients::initializeClass, 1)))
                return NULL;
              return t_LnsCoefficients::wrap_Object(LnsCoefficients(((t_LnsCoefficients *) arg)->object.this$));
            }
            static PyObject *t_LnsCoefficients_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LnsCoefficients::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LnsCoefficients_init_(t_LnsCoefficients *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jint a1;
              JArray< JArray< jdouble > > a2((jobject) NULL);
              ::java::util::SortedMap a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              LnsCoefficients object((jobject) NULL);

              if (!parseArgs(args, "II[[DKD", ::java::util::SortedMap::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_SortedMap::parameters_, &a4))
              {
                INT_CALL(object = LnsCoefficients(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_LnsCoefficients_getLns(t_LnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLns(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getLns", args);
              return NULL;
            }

            static PyObject *t_LnsCoefficients_getdLnsdGamma(t_LnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdLnsdGamma(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdLnsdGamma", args);
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey.h"
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
            namespace oem {

              ::java::lang::Class *OemMetadataKey::class$ = NULL;
              jmethodID *OemMetadataKey::mids$ = NULL;
              bool OemMetadataKey::live$ = false;
              OemMetadataKey *OemMetadataKey::INTERPOLATION = NULL;
              OemMetadataKey *OemMetadataKey::INTERPOLATION_DEGREE = NULL;
              OemMetadataKey *OemMetadataKey::START_TIME = NULL;
              OemMetadataKey *OemMetadataKey::STOP_TIME = NULL;
              OemMetadataKey *OemMetadataKey::USEABLE_START_TIME = NULL;
              OemMetadataKey *OemMetadataKey::USEABLE_STOP_TIME = NULL;

              jclass OemMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_170086173023279a] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;)Z");
                  mids$[mid_valueOf_7d5c8ba8f9b54336] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;");
                  mids$[mid_values_3c019ad81f153a46] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  INTERPOLATION = new OemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  INTERPOLATION_DEGREE = new OemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  START_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  STOP_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  USEABLE_START_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "USEABLE_START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  USEABLE_STOP_TIME = new OemMetadataKey(env->getStaticObjectField(cls, "USEABLE_STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OemMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_170086173023279a], a0.this$, a1.this$, a2.this$);
              }

              OemMetadataKey OemMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OemMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7d5c8ba8f9b54336], a0.this$));
              }

              JArray< OemMetadataKey > OemMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OemMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_3c019ad81f153a46]));
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
              static PyObject *t_OemMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemMetadataKey_of_(t_OemMetadataKey *self, PyObject *args);
              static PyObject *t_OemMetadataKey_process(t_OemMetadataKey *self, PyObject *args);
              static PyObject *t_OemMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OemMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OemMetadataKey_get__parameters_(t_OemMetadataKey *self, void *data);
              static PyGetSetDef t_OemMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OemMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OemMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OemMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OemMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OemMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemMetadataKey)[] = {
                { Py_tp_methods, t_OemMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OemMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OemMetadataKey, t_OemMetadataKey, OemMetadataKey);
              PyObject *t_OemMetadataKey::wrap_Object(const OemMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OemMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemMetadataKey *self = (t_OemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OemMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OemMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemMetadataKey *self = (t_OemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OemMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OemMetadataKey), &PY_TYPE_DEF(OemMetadataKey), module, "OemMetadataKey", 0);
              }

              void t_OemMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "class_", make_descriptor(OemMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "wrapfn_", make_descriptor(t_OemMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OemMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "INTERPOLATION", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::INTERPOLATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::INTERPOLATION_DEGREE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "START_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "STOP_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "USEABLE_START_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::USEABLE_START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadataKey), "USEABLE_STOP_TIME", make_descriptor(t_OemMetadataKey::wrap_Object(*OemMetadataKey::USEABLE_STOP_TIME)));
              }

              static PyObject *t_OemMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OemMetadataKey::wrap_Object(OemMetadataKey(((t_OemMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OemMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemMetadataKey_of_(t_OemMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OemMetadataKey_process(t_OemMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OemMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OemMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadataKey::valueOf(a0));
                  return t_OemMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OemMetadataKey_values(PyTypeObject *type)
              {
                JArray< OemMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OemMetadataKey::wrap_jobject);
              }
              static PyObject *t_OemMetadataKey_get__parameters_(t_OemMetadataKey *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesPhaseModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockInterSatellitesPhaseModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockInterSatellitesPhaseModifier::mids$ = NULL;
          bool RelativisticJ2ClockInterSatellitesPhaseModifier::live$ = false;

          jclass RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockInterSatellitesPhaseModifier::RelativisticJ2ClockInterSatellitesPhaseModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockInterSatellitesPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void RelativisticJ2ClockInterSatellitesPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockInterSatellitesPhaseModifier_init_(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockInterSatellitesPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockInterSatellitesPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockInterSatellitesPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockInterSatellitesPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockInterSatellitesPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockInterSatellitesPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockInterSatellitesPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier, t_RelativisticJ2ClockInterSatellitesPhaseModifier, RelativisticJ2ClockInterSatellitesPhaseModifier);

          void t_RelativisticJ2ClockInterSatellitesPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), &PY_TYPE_DEF(RelativisticJ2ClockInterSatellitesPhaseModifier), module, "RelativisticJ2ClockInterSatellitesPhaseModifier", 0);
          }

          void t_RelativisticJ2ClockInterSatellitesPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), "class_", make_descriptor(RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockInterSatellitesPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockInterSatellitesPhaseModifier::wrap_Object(RelativisticJ2ClockInterSatellitesPhaseModifier(((t_RelativisticJ2ClockInterSatellitesPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockInterSatellitesPhaseModifier_init_(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockInterSatellitesPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockInterSatellitesPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmParser::class$ = NULL;
              jmethodID *OcmParser::mids$ = NULL;
              bool OcmParser::live$ = false;

              jclass OcmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_7b286565d1ea90cd] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/Ocm;");
                  mids$[mid_finalizeData_eee3de00fe971136] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_eee3de00fe971136] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_eee3de00fe971136] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_662984e7008bcc88] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_eee3de00fe971136] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_eee3de00fe971136] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_eee3de00fe971136] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_13a3cd4c16ab6659] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/odm/ocm/Ocm;");
                  mids$[mid_prepareData_eee3de00fe971136] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_eee3de00fe971136] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_eee3de00fe971136] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm OcmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm(env->callObjectMethod(this$, mids$[mid_build_7b286565d1ea90cd]));
              }

              jboolean OcmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_eee3de00fe971136]);
              }

              jboolean OcmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_eee3de00fe971136]);
              }

              jboolean OcmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_eee3de00fe971136]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OcmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_662984e7008bcc88]));
              }

              ::java::util::Map OcmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d]));
              }

              jboolean OcmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_eee3de00fe971136]);
              }

              jboolean OcmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_eee3de00fe971136]);
              }

              jboolean OcmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_eee3de00fe971136]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm OcmParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm(env->callObjectMethod(this$, mids$[mid_parse_13a3cd4c16ab6659], a0.this$));
              }

              jboolean OcmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_eee3de00fe971136]);
              }

              jboolean OcmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_eee3de00fe971136]);
              }

              jboolean OcmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_eee3de00fe971136]);
              }

              void OcmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_a23f5f7531d9b583], a0.this$);
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
              static PyObject *t_OcmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmParser_of_(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_build(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_finalizeData(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_finalizeHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_finalizeMetadata(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_getHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_getSpecialXmlElementsBuilders(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_inData(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_inHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_inMetadata(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_parse(t_OcmParser *self, PyObject *arg);
              static PyObject *t_OcmParser_prepareData(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_prepareHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_prepareMetadata(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_reset(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_get__header(t_OcmParser *self, void *data);
              static PyObject *t_OcmParser_get__specialXmlElementsBuilders(t_OcmParser *self, void *data);
              static PyObject *t_OcmParser_get__parameters_(t_OcmParser *self, void *data);
              static PyGetSetDef t_OcmParser__fields_[] = {
                DECLARE_GET_FIELD(t_OcmParser, header),
                DECLARE_GET_FIELD(t_OcmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_OcmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmParser__methods_[] = {
                DECLARE_METHOD(t_OcmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, parse, METH_O),
                DECLARE_METHOD(t_OcmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmParser)[] = {
                { Py_tp_methods, t_OcmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OcmParser, t_OcmParser, OcmParser);
              PyObject *t_OcmParser::wrap_Object(const OcmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OcmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmParser *self = (t_OcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OcmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OcmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmParser *self = (t_OcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OcmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmParser), &PY_TYPE_DEF(OcmParser), module, "OcmParser", 0);
              }

              void t_OcmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmParser), "class_", make_descriptor(OcmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmParser), "wrapfn_", make_descriptor(t_OcmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OcmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmParser::initializeClass, 1)))
                  return NULL;
                return t_OcmParser::wrap_Object(OcmParser(((t_OcmParser *) arg)->object.this$));
              }
              static PyObject *t_OcmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmParser_of_(t_OcmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmParser_build(t_OcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ocm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OcmParser_finalizeData(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OcmParser_finalizeHeader(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OcmParser_finalizeMetadata(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OcmParser_getHeader(t_OcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OcmParser_getSpecialXmlElementsBuilders(t_OcmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_OcmParser_inData(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OcmParser_inHeader(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OcmParser_inMetadata(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OcmParser_parse(t_OcmParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ocm::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_OcmParser_prepareData(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OcmParser_prepareHeader(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OcmParser_prepareMetadata(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OcmParser_reset(t_OcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OcmParser_get__parameters_(t_OcmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OcmParser_get__header(t_OcmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
              }

              static PyObject *t_OcmParser_get__specialXmlElementsBuilders(t_OcmParser *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
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
#include "org/orekit/models/earth/troposphere/GlobalMappingFunctionModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *GlobalMappingFunctionModel::class$ = NULL;
          jmethodID *GlobalMappingFunctionModel::mids$ = NULL;
          bool GlobalMappingFunctionModel::live$ = false;

          jclass GlobalMappingFunctionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/GlobalMappingFunctionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_7cb2659f4799e4d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
              mids$[mid_mappingFactors_7d2717f150c68a9f] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_mappingFactors_090b631fda469acd] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalMappingFunctionModel::GlobalMappingFunctionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          GlobalMappingFunctionModel::GlobalMappingFunctionModel(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7cb2659f4799e4d2, a0.this$)) {}

          JArray< jdouble > GlobalMappingFunctionModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_7d2717f150c68a9f], a0, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > GlobalMappingFunctionModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_090b631fda469acd], a0.this$, a1.this$, a2.this$));
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
        namespace troposphere {
          static PyObject *t_GlobalMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalMappingFunctionModel_init_(t_GlobalMappingFunctionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalMappingFunctionModel_mappingFactors(t_GlobalMappingFunctionModel *self, PyObject *args);

          static PyMethodDef t_GlobalMappingFunctionModel__methods_[] = {
            DECLARE_METHOD(t_GlobalMappingFunctionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalMappingFunctionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalMappingFunctionModel, mappingFactors, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalMappingFunctionModel)[] = {
            { Py_tp_methods, t_GlobalMappingFunctionModel__methods_ },
            { Py_tp_init, (void *) t_GlobalMappingFunctionModel_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalMappingFunctionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalMappingFunctionModel, t_GlobalMappingFunctionModel, GlobalMappingFunctionModel);

          void t_GlobalMappingFunctionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalMappingFunctionModel), &PY_TYPE_DEF(GlobalMappingFunctionModel), module, "GlobalMappingFunctionModel", 0);
          }

          void t_GlobalMappingFunctionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalMappingFunctionModel), "class_", make_descriptor(GlobalMappingFunctionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalMappingFunctionModel), "wrapfn_", make_descriptor(t_GlobalMappingFunctionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalMappingFunctionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlobalMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalMappingFunctionModel::initializeClass, 1)))
              return NULL;
            return t_GlobalMappingFunctionModel::wrap_Object(GlobalMappingFunctionModel(((t_GlobalMappingFunctionModel *) arg)->object.this$));
          }
          static PyObject *t_GlobalMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalMappingFunctionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalMappingFunctionModel_init_(t_GlobalMappingFunctionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                GlobalMappingFunctionModel object((jobject) NULL);

                INT_CALL(object = GlobalMappingFunctionModel());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                GlobalMappingFunctionModel object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
                {
                  INT_CALL(object = GlobalMappingFunctionModel(a0));
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

          static PyObject *t_GlobalMappingFunctionModel_mappingFactors(t_GlobalMappingFunctionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/TurnAroundRangeTroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TurnAroundRangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *TurnAroundRangeTroposphericDelayModifier::mids$ = NULL;
          bool TurnAroundRangeTroposphericDelayModifier::live$ = false;

          jclass TurnAroundRangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TurnAroundRangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1f42633debde232b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TurnAroundRangeTroposphericDelayModifier::TurnAroundRangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1f42633debde232b, a0.this$)) {}

          ::java::util::List TurnAroundRangeTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void TurnAroundRangeTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void TurnAroundRangeTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TurnAroundRangeTroposphericDelayModifier_init_(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_getParametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modify(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_TurnAroundRangeTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TurnAroundRangeTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TurnAroundRangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TurnAroundRangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_TurnAroundRangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TurnAroundRangeTroposphericDelayModifier_init_ },
            { Py_tp_getset, t_TurnAroundRangeTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TurnAroundRangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TurnAroundRangeTroposphericDelayModifier, t_TurnAroundRangeTroposphericDelayModifier, TurnAroundRangeTroposphericDelayModifier);

          void t_TurnAroundRangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TurnAroundRangeTroposphericDelayModifier), &PY_TYPE_DEF(TurnAroundRangeTroposphericDelayModifier), module, "TurnAroundRangeTroposphericDelayModifier", 0);
          }

          void t_TurnAroundRangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeTroposphericDelayModifier), "class_", make_descriptor(TurnAroundRangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_TurnAroundRangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TurnAroundRangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TurnAroundRangeTroposphericDelayModifier::wrap_Object(TurnAroundRangeTroposphericDelayModifier(((t_TurnAroundRangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TurnAroundRangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TurnAroundRangeTroposphericDelayModifier_init_(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            TurnAroundRangeTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = TurnAroundRangeTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_getParametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modify(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self, void *data)
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
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservation::class$ = NULL;
          jmethodID *RinexObservation::mids$ = NULL;
          bool RinexObservation::live$ = false;

          jclass RinexObservation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addObservationDataSet_d75e9b743ecf20cb] = env->getMethodID(cls, "addObservationDataSet", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_getObservationDataSets_d751c1a57012b438] = env->getMethodID(cls, "getObservationDataSets", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservation::RinexObservation() : ::org::orekit::files::rinex::RinexFile(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void RinexObservation::addObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addObservationDataSet_d75e9b743ecf20cb], a0.this$);
          }

          ::java::util::List RinexObservation::getObservationDataSets() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservationDataSets_d751c1a57012b438]));
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
          static PyObject *t_RinexObservation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservation_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservation_of_(t_RinexObservation *self, PyObject *args);
          static int t_RinexObservation_init_(t_RinexObservation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservation_addObservationDataSet(t_RinexObservation *self, PyObject *arg);
          static PyObject *t_RinexObservation_getObservationDataSets(t_RinexObservation *self);
          static PyObject *t_RinexObservation_get__observationDataSets(t_RinexObservation *self, void *data);
          static PyObject *t_RinexObservation_get__parameters_(t_RinexObservation *self, void *data);
          static PyGetSetDef t_RinexObservation__fields_[] = {
            DECLARE_GET_FIELD(t_RinexObservation, observationDataSets),
            DECLARE_GET_FIELD(t_RinexObservation, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexObservation__methods_[] = {
            DECLARE_METHOD(t_RinexObservation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservation, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexObservation, addObservationDataSet, METH_O),
            DECLARE_METHOD(t_RinexObservation, getObservationDataSets, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservation)[] = {
            { Py_tp_methods, t_RinexObservation__methods_ },
            { Py_tp_init, (void *) t_RinexObservation_init_ },
            { Py_tp_getset, t_RinexObservation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservation)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::RinexFile),
            NULL
          };

          DEFINE_TYPE(RinexObservation, t_RinexObservation, RinexObservation);
          PyObject *t_RinexObservation::wrap_Object(const RinexObservation& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexObservation::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexObservation *self = (t_RinexObservation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexObservation::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexObservation::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexObservation *self = (t_RinexObservation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexObservation::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservation), &PY_TYPE_DEF(RinexObservation), module, "RinexObservation", 0);
          }

          void t_RinexObservation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservation), "class_", make_descriptor(RinexObservation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservation), "wrapfn_", make_descriptor(t_RinexObservation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexObservation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservation::initializeClass, 1)))
              return NULL;
            return t_RinexObservation::wrap_Object(RinexObservation(((t_RinexObservation *) arg)->object.this$));
          }
          static PyObject *t_RinexObservation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexObservation_of_(t_RinexObservation *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RinexObservation_init_(t_RinexObservation *self, PyObject *args, PyObject *kwds)
          {
            RinexObservation object((jobject) NULL);

            INT_CALL(object = RinexObservation());
            self->object = object;
            self->parameters[0] = ::org::orekit::files::rinex::observation::PY_TYPE(RinexObservationHeader);

            return 0;
          }

          static PyObject *t_RinexObservation_addObservationDataSet(t_RinexObservation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addObservationDataSet(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addObservationDataSet", arg);
            return NULL;
          }

          static PyObject *t_RinexObservation_getObservationDataSets(t_RinexObservation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationDataSets());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ObservationDataSet));
          }
          static PyObject *t_RinexObservation_get__parameters_(t_RinexObservation *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexObservation_get__observationDataSets(t_RinexObservation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationDataSets());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GNSSDate.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GNSSDate::class$ = NULL;
      jmethodID *GNSSDate::mids$ = NULL;
      bool GNSSDate::live$ = false;

      jclass GNSSDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GNSSDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7695923634acd0ad] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/gnss/SatelliteSystem;)V");
          mids$[mid_init$_bf7567e1d0c046a5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_init$_de88248115685977] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/gnss/SatelliteSystem;)V");
          mids$[mid_init$_acb5713e51f8e5e7] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/gnss/SatelliteSystem;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_init$_d807d8762531da61] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/gnss/SatelliteSystem;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMilliInWeek_9981f74b2d109da6] = env->getMethodID(cls, "getMilliInWeek", "()D");
          mids$[mid_getRolloverReference_70bc100457881a79] = env->getStaticMethodID(cls, "getRolloverReference", "()Lorg/orekit/time/DateComponents;");
          mids$[mid_getSecondsInWeek_9981f74b2d109da6] = env->getMethodID(cls, "getSecondsInWeek", "()D");
          mids$[mid_getWeekNumber_d6ab429752e7c267] = env->getMethodID(cls, "getWeekNumber", "()I");
          mids$[mid_setRolloverReference_badbbe8d1e1c6168] = env->getStaticMethodID(cls, "setRolloverReference", "(Lorg/orekit/time/DateComponents;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GNSSDate::GNSSDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::gnss::SatelliteSystem & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7695923634acd0ad, a0.this$, a1.this$)) {}

      GNSSDate::GNSSDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::time::TimeScales & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bf7567e1d0c046a5, a0.this$, a1.this$, a2.this$)) {}

      GNSSDate::GNSSDate(jint a0, jdouble a1, const ::org::orekit::gnss::SatelliteSystem & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de88248115685977, a0, a1, a2.this$)) {}

      GNSSDate::GNSSDate(jint a0, jdouble a1, const ::org::orekit::gnss::SatelliteSystem & a2, const ::org::orekit::time::TimeScales & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_acb5713e51f8e5e7, a0, a1, a2.this$, a3.this$)) {}

      GNSSDate::GNSSDate(jint a0, jdouble a1, const ::org::orekit::gnss::SatelliteSystem & a2, const ::org::orekit::time::DateComponents & a3, const ::org::orekit::time::TimeScales & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d807d8762531da61, a0, a1, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::time::AbsoluteDate GNSSDate::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      jdouble GNSSDate::getMilliInWeek() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMilliInWeek_9981f74b2d109da6]);
      }

      ::org::orekit::time::DateComponents GNSSDate::getRolloverReference()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::DateComponents(env->callStaticObjectMethod(cls, mids$[mid_getRolloverReference_70bc100457881a79]));
      }

      jdouble GNSSDate::getSecondsInWeek() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecondsInWeek_9981f74b2d109da6]);
      }

      jint GNSSDate::getWeekNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getWeekNumber_d6ab429752e7c267]);
      }

      void GNSSDate::setRolloverReference(const ::org::orekit::time::DateComponents & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setRolloverReference_badbbe8d1e1c6168], a0.this$);
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
      static PyObject *t_GNSSDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GNSSDate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GNSSDate_init_(t_GNSSDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GNSSDate_getDate(t_GNSSDate *self);
      static PyObject *t_GNSSDate_getMilliInWeek(t_GNSSDate *self);
      static PyObject *t_GNSSDate_getRolloverReference(PyTypeObject *type);
      static PyObject *t_GNSSDate_getSecondsInWeek(t_GNSSDate *self);
      static PyObject *t_GNSSDate_getWeekNumber(t_GNSSDate *self);
      static PyObject *t_GNSSDate_setRolloverReference(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GNSSDate_get__date(t_GNSSDate *self, void *data);
      static PyObject *t_GNSSDate_get__milliInWeek(t_GNSSDate *self, void *data);
      static PyObject *t_GNSSDate_get__rolloverReference(t_GNSSDate *self, void *data);
      static int t_GNSSDate_set__rolloverReference(t_GNSSDate *self, PyObject *arg, void *data);
      static PyObject *t_GNSSDate_get__secondsInWeek(t_GNSSDate *self, void *data);
      static PyObject *t_GNSSDate_get__weekNumber(t_GNSSDate *self, void *data);
      static PyGetSetDef t_GNSSDate__fields_[] = {
        DECLARE_GET_FIELD(t_GNSSDate, date),
        DECLARE_GET_FIELD(t_GNSSDate, milliInWeek),
        DECLARE_GETSET_FIELD(t_GNSSDate, rolloverReference),
        DECLARE_GET_FIELD(t_GNSSDate, secondsInWeek),
        DECLARE_GET_FIELD(t_GNSSDate, weekNumber),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GNSSDate__methods_[] = {
        DECLARE_METHOD(t_GNSSDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GNSSDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GNSSDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, getMilliInWeek, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, getRolloverReference, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_GNSSDate, getSecondsInWeek, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, getWeekNumber, METH_NOARGS),
        DECLARE_METHOD(t_GNSSDate, setRolloverReference, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GNSSDate)[] = {
        { Py_tp_methods, t_GNSSDate__methods_ },
        { Py_tp_init, (void *) t_GNSSDate_init_ },
        { Py_tp_getset, t_GNSSDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GNSSDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GNSSDate, t_GNSSDate, GNSSDate);

      void t_GNSSDate::install(PyObject *module)
      {
        installType(&PY_TYPE(GNSSDate), &PY_TYPE_DEF(GNSSDate), module, "GNSSDate", 0);
      }

      void t_GNSSDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSDate), "class_", make_descriptor(GNSSDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSDate), "wrapfn_", make_descriptor(t_GNSSDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSDate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GNSSDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GNSSDate::initializeClass, 1)))
          return NULL;
        return t_GNSSDate::wrap_Object(GNSSDate(((t_GNSSDate *) arg)->object.this$));
      }
      static PyObject *t_GNSSDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GNSSDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GNSSDate_init_(t_GNSSDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = GNSSDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::TimeScales a3((jobject) NULL);
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "IDKk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a3))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            ::org::orekit::time::TimeScales a4((jobject) NULL);
            GNSSDate object((jobject) NULL);

            if (!parseArgs(args, "IDKkk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a3, &a4))
            {
              INT_CALL(object = GNSSDate(a0, a1, a2, a3, a4));
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

      static PyObject *t_GNSSDate_getDate(t_GNSSDate *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_GNSSDate_getMilliInWeek(t_GNSSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMilliInWeek());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GNSSDate_getRolloverReference(PyTypeObject *type)
      {
        ::org::orekit::time::DateComponents result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::GNSSDate::getRolloverReference());
        return ::org::orekit::time::t_DateComponents::wrap_Object(result);
      }

      static PyObject *t_GNSSDate_getSecondsInWeek(t_GNSSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecondsInWeek());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GNSSDate_getWeekNumber(t_GNSSDate *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getWeekNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GNSSDate_setRolloverReference(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &a0))
        {
          OBJ_CALL(::org::orekit::time::GNSSDate::setRolloverReference(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setRolloverReference", arg);
        return NULL;
      }

      static PyObject *t_GNSSDate_get__date(t_GNSSDate *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_GNSSDate_get__milliInWeek(t_GNSSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMilliInWeek());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GNSSDate_get__rolloverReference(t_GNSSDate *self, void *data)
      {
        ::org::orekit::time::DateComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getRolloverReference());
        return ::org::orekit::time::t_DateComponents::wrap_Object(value);
      }
      static int t_GNSSDate_set__rolloverReference(t_GNSSDate *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::time::DateComponents value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &value))
          {
            INT_CALL(self->object.setRolloverReference(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "rolloverReference", arg);
        return -1;
      }

      static PyObject *t_GNSSDate_get__secondsInWeek(t_GNSSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecondsInWeek());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GNSSDate_get__weekNumber(t_GNSSDate *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getWeekNumber());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/Covariance.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *Covariance::class$ = NULL;
        jmethodID *Covariance::mids$ = NULL;
        bool Covariance::live$ = false;

        jclass Covariance::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/Covariance");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_11ecdbb5af7ed67d] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_1abb553ff9db34ff] = env->getMethodID(cls, "<init>", "([[DZ)V");
            mids$[mid_init$_40961afdecb20a23] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Z)V");
            mids$[mid_covariance_b01af8a77d4df96f] = env->getMethodID(cls, "covariance", "([D[D)D");
            mids$[mid_covariance_2cf76703ce30b165] = env->getMethodID(cls, "covariance", "([D[DZ)D");
            mids$[mid_getCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getN_d6ab429752e7c267] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_computeCovarianceMatrix_5a8a8185eb309db7] = env->getMethodID(cls, "computeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCovarianceMatrix_04e001ecedde68c6] = env->getMethodID(cls, "computeCovarianceMatrix", "([[DZ)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCovarianceMatrix_a50478fa84afaa43] = env->getMethodID(cls, "computeCovarianceMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCovarianceMatrix_62872d3e890d4114] = env->getMethodID(cls, "computeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;Z)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Covariance::Covariance() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        Covariance::Covariance(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11ecdbb5af7ed67d, a0.this$)) {}

        Covariance::Covariance(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

        Covariance::Covariance(const JArray< JArray< jdouble > > & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1abb553ff9db34ff, a0.this$, a1)) {}

        Covariance::Covariance(const ::org::hipparchus::linear::RealMatrix & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_40961afdecb20a23, a0.this$, a1)) {}

        jdouble Covariance::covariance(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_covariance_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble Covariance::covariance(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_covariance_2cf76703ce30b165], a0.this$, a1.this$, a2);
        }

        ::org::hipparchus::linear::RealMatrix Covariance::getCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_b2eebabce70526d8]));
        }

        jint Covariance::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_d6ab429752e7c267]);
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
      namespace correlation {
        static PyObject *t_Covariance_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Covariance_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Covariance_init_(t_Covariance *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Covariance_covariance(t_Covariance *self, PyObject *args);
        static PyObject *t_Covariance_getCovarianceMatrix(t_Covariance *self);
        static PyObject *t_Covariance_getN(t_Covariance *self);
        static PyObject *t_Covariance_get__covarianceMatrix(t_Covariance *self, void *data);
        static PyObject *t_Covariance_get__n(t_Covariance *self, void *data);
        static PyGetSetDef t_Covariance__fields_[] = {
          DECLARE_GET_FIELD(t_Covariance, covarianceMatrix),
          DECLARE_GET_FIELD(t_Covariance, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Covariance__methods_[] = {
          DECLARE_METHOD(t_Covariance, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Covariance, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Covariance, covariance, METH_VARARGS),
          DECLARE_METHOD(t_Covariance, getCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_Covariance, getN, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Covariance)[] = {
          { Py_tp_methods, t_Covariance__methods_ },
          { Py_tp_init, (void *) t_Covariance_init_ },
          { Py_tp_getset, t_Covariance__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Covariance)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Covariance, t_Covariance, Covariance);

        void t_Covariance::install(PyObject *module)
        {
          installType(&PY_TYPE(Covariance), &PY_TYPE_DEF(Covariance), module, "Covariance", 0);
        }

        void t_Covariance::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Covariance), "class_", make_descriptor(Covariance::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Covariance), "wrapfn_", make_descriptor(t_Covariance::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Covariance), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Covariance_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Covariance::initializeClass, 1)))
            return NULL;
          return t_Covariance::wrap_Object(Covariance(((t_Covariance *) arg)->object.this$));
        }
        static PyObject *t_Covariance_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Covariance::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Covariance_init_(t_Covariance *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Covariance object((jobject) NULL);

              INT_CALL(object = Covariance());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                INT_CALL(object = Covariance(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = Covariance(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              jboolean a1;
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "[[DZ", &a0, &a1))
              {
                INT_CALL(object = Covariance(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              jboolean a1;
              Covariance object((jobject) NULL);

              if (!parseArgs(args, "kZ", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                INT_CALL(object = Covariance(a0, a1));
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

        static PyObject *t_Covariance_covariance(t_Covariance *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.covariance(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.covariance(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "covariance", args);
          return NULL;
        }

        static PyObject *t_Covariance_getCovarianceMatrix(t_Covariance *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_Covariance_getN(t_Covariance *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Covariance_get__covarianceMatrix(t_Covariance *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_Covariance_get__n(t_Covariance *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/BoxAndSolarArraySpacecraft.h"
#include "org/orekit/forces/Panel.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *BoxAndSolarArraySpacecraft::class$ = NULL;
      jmethodID *BoxAndSolarArraySpacecraft::mids$ = NULL;
      bool BoxAndSolarArraySpacecraft::live$ = false;

      jclass BoxAndSolarArraySpacecraft::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/BoxAndSolarArraySpacecraft");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_aa335fea495d60e0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_init$_30e355b97c9283c7] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDD)V");
          mids$[mid_buildBox_cc97e73ecd766053] = env->getStaticMethodID(cls, "buildBox", "(DDDDDDD)Ljava/util/List;");
          mids$[mid_buildPanels_59acc07da4226951] = env->getStaticMethodID(cls, "buildPanels", "(DDDLorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDD)Ljava/util/List;");
          mids$[mid_dragAcceleration_73bcdbeb8ff641bb] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_dragAcceleration_4a6ab2502c320936] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getDragParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");
          mids$[mid_getPanels_d751c1a57012b438] = env->getMethodID(cls, "getPanels", "()Ljava/util/List;");
          mids$[mid_getRadiationParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
          mids$[mid_radiationPressureAcceleration_8ba97ba2fcb659fc] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_radiationPressureAcceleration_b5d2cc91db5ad4cb] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BoxAndSolarArraySpacecraft::BoxAndSolarArraySpacecraft(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa335fea495d60e0, a0.this$)) {}

      BoxAndSolarArraySpacecraft::BoxAndSolarArraySpacecraft(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, jdouble a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30e355b97c9283c7, a0, a1, a2, a3.this$, a4, a5.this$, a6, a7, a8, a9)) {}

      ::java::util::List BoxAndSolarArraySpacecraft::buildBox(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_buildBox_cc97e73ecd766053], a0, a1, a2, a3, a4, a5, a6));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::buildPanels(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, jdouble a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_buildPanels_59acc07da4226951], a0, a1, a2, a3.this$, a4, a5.this$, a6, a7, a8, a9));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BoxAndSolarArraySpacecraft::dragAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_73bcdbeb8ff641bb], a0.this$, a1, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BoxAndSolarArraySpacecraft::dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_4a6ab2502c320936], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::getDragParametersDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDragParametersDrivers_d751c1a57012b438]));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::getPanels() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPanels_d751c1a57012b438]));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::getRadiationParametersDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_d751c1a57012b438]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BoxAndSolarArraySpacecraft::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_8ba97ba2fcb659fc], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BoxAndSolarArraySpacecraft::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_b5d2cc91db5ad4cb], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_BoxAndSolarArraySpacecraft_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoxAndSolarArraySpacecraft_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BoxAndSolarArraySpacecraft_init_(t_BoxAndSolarArraySpacecraft *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BoxAndSolarArraySpacecraft_buildBox(PyTypeObject *type, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_buildPanels(PyTypeObject *type, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_dragAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_getDragParametersDrivers(t_BoxAndSolarArraySpacecraft *self);
      static PyObject *t_BoxAndSolarArraySpacecraft_getPanels(t_BoxAndSolarArraySpacecraft *self);
      static PyObject *t_BoxAndSolarArraySpacecraft_getRadiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self);
      static PyObject *t_BoxAndSolarArraySpacecraft_radiationPressureAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_get__dragParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data);
      static PyObject *t_BoxAndSolarArraySpacecraft_get__panels(t_BoxAndSolarArraySpacecraft *self, void *data);
      static PyObject *t_BoxAndSolarArraySpacecraft_get__radiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data);
      static PyGetSetDef t_BoxAndSolarArraySpacecraft__fields_[] = {
        DECLARE_GET_FIELD(t_BoxAndSolarArraySpacecraft, dragParametersDrivers),
        DECLARE_GET_FIELD(t_BoxAndSolarArraySpacecraft, panels),
        DECLARE_GET_FIELD(t_BoxAndSolarArraySpacecraft, radiationParametersDrivers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BoxAndSolarArraySpacecraft__methods_[] = {
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, buildBox, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, buildPanels, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, dragAcceleration, METH_VARARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, getDragParametersDrivers, METH_NOARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, getPanels, METH_NOARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, getRadiationParametersDrivers, METH_NOARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, radiationPressureAcceleration, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BoxAndSolarArraySpacecraft)[] = {
        { Py_tp_methods, t_BoxAndSolarArraySpacecraft__methods_ },
        { Py_tp_init, (void *) t_BoxAndSolarArraySpacecraft_init_ },
        { Py_tp_getset, t_BoxAndSolarArraySpacecraft__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BoxAndSolarArraySpacecraft)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BoxAndSolarArraySpacecraft, t_BoxAndSolarArraySpacecraft, BoxAndSolarArraySpacecraft);

      void t_BoxAndSolarArraySpacecraft::install(PyObject *module)
      {
        installType(&PY_TYPE(BoxAndSolarArraySpacecraft), &PY_TYPE_DEF(BoxAndSolarArraySpacecraft), module, "BoxAndSolarArraySpacecraft", 0);
      }

      void t_BoxAndSolarArraySpacecraft::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoxAndSolarArraySpacecraft), "class_", make_descriptor(BoxAndSolarArraySpacecraft::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoxAndSolarArraySpacecraft), "wrapfn_", make_descriptor(t_BoxAndSolarArraySpacecraft::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoxAndSolarArraySpacecraft), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BoxAndSolarArraySpacecraft::initializeClass, 1)))
          return NULL;
        return t_BoxAndSolarArraySpacecraft::wrap_Object(BoxAndSolarArraySpacecraft(((t_BoxAndSolarArraySpacecraft *) arg)->object.this$));
      }
      static PyObject *t_BoxAndSolarArraySpacecraft_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BoxAndSolarArraySpacecraft::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BoxAndSolarArraySpacecraft_init_(t_BoxAndSolarArraySpacecraft *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            BoxAndSolarArraySpacecraft object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = BoxAndSolarArraySpacecraft(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
            jdouble a4;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            BoxAndSolarArraySpacecraft object((jobject) NULL);

            if (!parseArgs(args, "DDDkDkDDDD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
            {
              INT_CALL(object = BoxAndSolarArraySpacecraft(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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

      static PyObject *t_BoxAndSolarArraySpacecraft_buildBox(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "DDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          OBJ_CALL(result = ::org::orekit::forces::BoxAndSolarArraySpacecraft::buildBox(a0, a1, a2, a3, a4, a5, a6));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(Panel));
        }

        PyErr_SetArgsError(type, "buildBox", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_buildPanels(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
        jdouble a4;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "DDDkDkDDDD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
        {
          OBJ_CALL(result = ::org::orekit::forces::BoxAndSolarArraySpacecraft::buildPanels(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(Panel));
        }

        PyErr_SetArgsError(type, "buildPanels", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_dragAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kDk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "dragAcceleration", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_getDragParametersDrivers(t_BoxAndSolarArraySpacecraft *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getDragParametersDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_getPanels(t_BoxAndSolarArraySpacecraft *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPanels());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(Panel));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_getRadiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getRadiationParametersDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_radiationPressureAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_get__dragParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getDragParametersDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_get__panels(t_BoxAndSolarArraySpacecraft *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPanels());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_get__radiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getRadiationParametersDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Logistic$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logistic$Parametric::class$ = NULL;
        jmethodID *Logistic$Parametric::mids$ = NULL;
        bool Logistic$Parametric::live$ = false;

        jclass Logistic$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logistic$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_bfc955188bf36f2c] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_4f42c7a8793320e4] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logistic$Parametric::Logistic$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        JArray< jdouble > Logistic$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_bfc955188bf36f2c], a0, a1.this$));
        }

        jdouble Logistic$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_4f42c7a8793320e4], a0, a1.this$);
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
        static PyObject *t_Logistic$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logistic$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logistic$Parametric_init_(t_Logistic$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logistic$Parametric_gradient(t_Logistic$Parametric *self, PyObject *args);
        static PyObject *t_Logistic$Parametric_value(t_Logistic$Parametric *self, PyObject *args);

        static PyMethodDef t_Logistic$Parametric__methods_[] = {
          DECLARE_METHOD(t_Logistic$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Logistic$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logistic$Parametric)[] = {
          { Py_tp_methods, t_Logistic$Parametric__methods_ },
          { Py_tp_init, (void *) t_Logistic$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logistic$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logistic$Parametric, t_Logistic$Parametric, Logistic$Parametric);

        void t_Logistic$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Logistic$Parametric), &PY_TYPE_DEF(Logistic$Parametric), module, "Logistic$Parametric", 0);
        }

        void t_Logistic$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic$Parametric), "class_", make_descriptor(Logistic$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic$Parametric), "wrapfn_", make_descriptor(t_Logistic$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logistic$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logistic$Parametric::initializeClass, 1)))
            return NULL;
          return t_Logistic$Parametric::wrap_Object(Logistic$Parametric(((t_Logistic$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Logistic$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logistic$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logistic$Parametric_init_(t_Logistic$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Logistic$Parametric object((jobject) NULL);

          INT_CALL(object = Logistic$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Logistic$Parametric_gradient(t_Logistic$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gradient(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_Logistic$Parametric_value(t_Logistic$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
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
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
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
            mids$[mid_init$_8b4bd2f35d45ec76] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDIIZDD)V");
            mids$[mid_getAzimuth_9981f74b2d109da6] = env->getMethodID(cls, "getAzimuth", "()D");
            mids$[mid_getAzimuthRate_9981f74b2d109da6] = env->getMethodID(cls, "getAzimuthRate", "()D");
            mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDirectionFlag_d6ab429752e7c267] = env->getMethodID(cls, "getDirectionFlag", "()I");
            mids$[mid_getElevation_9981f74b2d109da6] = env->getMethodID(cls, "getElevation", "()D");
            mids$[mid_getElevationRate_9981f74b2d109da6] = env->getMethodID(cls, "getElevationRate", "()D");
            mids$[mid_getOriginIndicator_d6ab429752e7c267] = env->getMethodID(cls, "getOriginIndicator", "()I");
            mids$[mid_isRefractionCorrected_eee3de00fe971136] = env->getMethodID(cls, "isRefractionCorrected", "()Z");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$AnglesMeasurement::CRD$AnglesMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jint a3, jint a4, jboolean a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8b4bd2f35d45ec76, a0.this$, a1, a2, a3, a4, a5, a6, a7)) {}

        jdouble CRD$AnglesMeasurement::getAzimuth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAzimuth_9981f74b2d109da6]);
        }

        jdouble CRD$AnglesMeasurement::getAzimuthRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAzimuthRate_9981f74b2d109da6]);
        }

        ::org::orekit::time::AbsoluteDate CRD$AnglesMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
        }

        jint CRD$AnglesMeasurement::getDirectionFlag() const
        {
          return env->callIntMethod(this$, mids$[mid_getDirectionFlag_d6ab429752e7c267]);
        }

        jdouble CRD$AnglesMeasurement::getElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_9981f74b2d109da6]);
        }

        jdouble CRD$AnglesMeasurement::getElevationRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevationRate_9981f74b2d109da6]);
        }

        jint CRD$AnglesMeasurement::getOriginIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getOriginIndicator_d6ab429752e7c267]);
        }

        jboolean CRD$AnglesMeasurement::isRefractionCorrected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isRefractionCorrected_eee3de00fe971136]);
        }

        ::java::lang::String CRD$AnglesMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRD$AnglesMeasurement::toString() const
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
#include "org/orekit/gnss/metric/ntrip/CasterRecord.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *CasterRecord::class$ = NULL;
          jmethodID *CasterRecord::mids$ = NULL;
          bool CasterRecord::live$ = false;

          jclass CasterRecord::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/CasterRecord");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_canReceiveNMEA_eee3de00fe971136] = env->getMethodID(cls, "canReceiveNMEA", "()Z");
              mids$[mid_getCountry_d2c8eb4129821f0e] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
              mids$[mid_getFallbackHostOrIPAddress_d2c8eb4129821f0e] = env->getMethodID(cls, "getFallbackHostOrIPAddress", "()Ljava/lang/String;");
              mids$[mid_getFallbackPort_d6ab429752e7c267] = env->getMethodID(cls, "getFallbackPort", "()I");
              mids$[mid_getHostOrIPAddress_d2c8eb4129821f0e] = env->getMethodID(cls, "getHostOrIPAddress", "()Ljava/lang/String;");
              mids$[mid_getLatitude_9981f74b2d109da6] = env->getMethodID(cls, "getLatitude", "()D");
              mids$[mid_getLongitude_9981f74b2d109da6] = env->getMethodID(cls, "getLongitude", "()D");
              mids$[mid_getOperator_d2c8eb4129821f0e] = env->getMethodID(cls, "getOperator", "()Ljava/lang/String;");
              mids$[mid_getPort_d6ab429752e7c267] = env->getMethodID(cls, "getPort", "()I");
              mids$[mid_getRecordType_6b1d5e4fef5a106c] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getSourceIdentifier_d2c8eb4129821f0e] = env->getMethodID(cls, "getSourceIdentifier", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CasterRecord::CasterRecord(const ::java::lang::String & a0) : ::org::orekit::gnss::metric::ntrip::Record(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

          jboolean CasterRecord::canReceiveNMEA() const
          {
            return env->callBooleanMethod(this$, mids$[mid_canReceiveNMEA_eee3de00fe971136]);
          }

          ::java::lang::String CasterRecord::getCountry() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_d2c8eb4129821f0e]));
          }

          ::java::lang::String CasterRecord::getFallbackHostOrIPAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFallbackHostOrIPAddress_d2c8eb4129821f0e]));
          }

          jint CasterRecord::getFallbackPort() const
          {
            return env->callIntMethod(this$, mids$[mid_getFallbackPort_d6ab429752e7c267]);
          }

          ::java::lang::String CasterRecord::getHostOrIPAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHostOrIPAddress_d2c8eb4129821f0e]));
          }

          jdouble CasterRecord::getLatitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLatitude_9981f74b2d109da6]);
          }

          jdouble CasterRecord::getLongitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLongitude_9981f74b2d109da6]);
          }

          ::java::lang::String CasterRecord::getOperator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperator_d2c8eb4129821f0e]));
          }

          jint CasterRecord::getPort() const
          {
            return env->callIntMethod(this$, mids$[mid_getPort_d6ab429752e7c267]);
          }

          ::org::orekit::gnss::metric::ntrip::RecordType CasterRecord::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_6b1d5e4fef5a106c]));
          }

          ::java::lang::String CasterRecord::getSourceIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceIdentifier_d2c8eb4129821f0e]));
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
          static PyObject *t_CasterRecord_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CasterRecord_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CasterRecord_init_(t_CasterRecord *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CasterRecord_canReceiveNMEA(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getCountry(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getFallbackHostOrIPAddress(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getFallbackPort(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getHostOrIPAddress(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getLatitude(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getLongitude(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getOperator(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getPort(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getRecordType(t_CasterRecord *self, PyObject *args);
          static PyObject *t_CasterRecord_getSourceIdentifier(t_CasterRecord *self);
          static PyObject *t_CasterRecord_get__country(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__fallbackHostOrIPAddress(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__fallbackPort(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__hostOrIPAddress(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__latitude(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__longitude(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__operator(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__port(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__recordType(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__sourceIdentifier(t_CasterRecord *self, void *data);
          static PyGetSetDef t_CasterRecord__fields_[] = {
            DECLARE_GET_FIELD(t_CasterRecord, country),
            DECLARE_GET_FIELD(t_CasterRecord, fallbackHostOrIPAddress),
            DECLARE_GET_FIELD(t_CasterRecord, fallbackPort),
            DECLARE_GET_FIELD(t_CasterRecord, hostOrIPAddress),
            DECLARE_GET_FIELD(t_CasterRecord, latitude),
            DECLARE_GET_FIELD(t_CasterRecord, longitude),
            DECLARE_GET_FIELD(t_CasterRecord, operator),
            DECLARE_GET_FIELD(t_CasterRecord, port),
            DECLARE_GET_FIELD(t_CasterRecord, recordType),
            DECLARE_GET_FIELD(t_CasterRecord, sourceIdentifier),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CasterRecord__methods_[] = {
            DECLARE_METHOD(t_CasterRecord, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CasterRecord, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CasterRecord, canReceiveNMEA, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getCountry, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getFallbackHostOrIPAddress, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getFallbackPort, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getHostOrIPAddress, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getLatitude, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getLongitude, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getOperator, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getPort, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getRecordType, METH_VARARGS),
            DECLARE_METHOD(t_CasterRecord, getSourceIdentifier, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CasterRecord)[] = {
            { Py_tp_methods, t_CasterRecord__methods_ },
            { Py_tp_init, (void *) t_CasterRecord_init_ },
            { Py_tp_getset, t_CasterRecord__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CasterRecord)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::ntrip::Record),
            NULL
          };

          DEFINE_TYPE(CasterRecord, t_CasterRecord, CasterRecord);

          void t_CasterRecord::install(PyObject *module)
          {
            installType(&PY_TYPE(CasterRecord), &PY_TYPE_DEF(CasterRecord), module, "CasterRecord", 0);
          }

          void t_CasterRecord::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CasterRecord), "class_", make_descriptor(CasterRecord::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CasterRecord), "wrapfn_", make_descriptor(t_CasterRecord::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CasterRecord), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CasterRecord_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CasterRecord::initializeClass, 1)))
              return NULL;
            return t_CasterRecord::wrap_Object(CasterRecord(((t_CasterRecord *) arg)->object.this$));
          }
          static PyObject *t_CasterRecord_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CasterRecord::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CasterRecord_init_(t_CasterRecord *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            CasterRecord object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = CasterRecord(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CasterRecord_canReceiveNMEA(t_CasterRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.canReceiveNMEA());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_CasterRecord_getCountry(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCountry());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getFallbackHostOrIPAddress(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getFallbackHostOrIPAddress());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getFallbackPort(t_CasterRecord *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getFallbackPort());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CasterRecord_getHostOrIPAddress(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getHostOrIPAddress());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getLatitude(t_CasterRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLatitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CasterRecord_getLongitude(t_CasterRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLongitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CasterRecord_getOperator(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getOperator());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getPort(t_CasterRecord *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPort());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CasterRecord_getRecordType(t_CasterRecord *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getRecordType());
              return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(CasterRecord), (PyObject *) self, "getRecordType", args, 2);
          }

          static PyObject *t_CasterRecord_getSourceIdentifier(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSourceIdentifier());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_get__country(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCountry());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__fallbackHostOrIPAddress(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getFallbackHostOrIPAddress());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__fallbackPort(t_CasterRecord *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getFallbackPort());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CasterRecord_get__hostOrIPAddress(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getHostOrIPAddress());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__latitude(t_CasterRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLatitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CasterRecord_get__longitude(t_CasterRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLongitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CasterRecord_get__operator(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getOperator());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__port(t_CasterRecord *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPort());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CasterRecord_get__recordType(t_CasterRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }

          static PyObject *t_CasterRecord_get__sourceIdentifier(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSourceIdentifier());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PolynomialNutation.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PolynomialNutation::class$ = NULL;
      jmethodID *PolynomialNutation::mids$ = NULL;
      bool PolynomialNutation::live$ = false;

      jclass PolynomialNutation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PolynomialNutation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_derivative_bf28ed64d6e8576b] = env->getMethodID(cls, "derivative", "(D)D");
          mids$[mid_derivative_a3b854adede8eaaa] = env->getMethodID(cls, "derivative", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
          mids$[mid_value_a3b854adede8eaaa] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PolynomialNutation::PolynomialNutation(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

      jdouble PolynomialNutation::derivative(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_derivative_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement PolynomialNutation::derivative(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_derivative_a3b854adede8eaaa], a0.this$));
      }

      jdouble PolynomialNutation::value(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement PolynomialNutation::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a3b854adede8eaaa], a0.this$));
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
      static PyObject *t_PolynomialNutation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialNutation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PolynomialNutation_init_(t_PolynomialNutation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PolynomialNutation_derivative(t_PolynomialNutation *self, PyObject *args);
      static PyObject *t_PolynomialNutation_value(t_PolynomialNutation *self, PyObject *args);

      static PyMethodDef t_PolynomialNutation__methods_[] = {
        DECLARE_METHOD(t_PolynomialNutation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialNutation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialNutation, derivative, METH_VARARGS),
        DECLARE_METHOD(t_PolynomialNutation, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialNutation)[] = {
        { Py_tp_methods, t_PolynomialNutation__methods_ },
        { Py_tp_init, (void *) t_PolynomialNutation_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialNutation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PolynomialNutation, t_PolynomialNutation, PolynomialNutation);

      void t_PolynomialNutation::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialNutation), &PY_TYPE_DEF(PolynomialNutation), module, "PolynomialNutation", 0);
      }

      void t_PolynomialNutation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialNutation), "class_", make_descriptor(PolynomialNutation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialNutation), "wrapfn_", make_descriptor(t_PolynomialNutation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialNutation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PolynomialNutation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialNutation::initializeClass, 1)))
          return NULL;
        return t_PolynomialNutation::wrap_Object(PolynomialNutation(((t_PolynomialNutation *) arg)->object.this$));
      }
      static PyObject *t_PolynomialNutation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialNutation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PolynomialNutation_init_(t_PolynomialNutation *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        PolynomialNutation object((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          INT_CALL(object = PolynomialNutation(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PolynomialNutation_derivative(t_PolynomialNutation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "derivative", args);
        return NULL;
      }

      static PyObject *t_PolynomialNutation_value(t_PolynomialNutation *self, PyObject *args)
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
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/TidalDisplacement.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *TidalDisplacement::class$ = NULL;
          jmethodID *TidalDisplacement::mids$ = NULL;
          bool TidalDisplacement::live$ = false;

          jclass TidalDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/TidalDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9183f349e4f291b0] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/IERSConventions;Z)V");
              mids$[mid_displacement_44ddfc2adc2cc28a] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TidalDisplacement::TidalDisplacement(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::utils::PVCoordinatesProvider & a3, const ::org::orekit::utils::PVCoordinatesProvider & a4, const ::org::orekit::utils::IERSConventions & a5, jboolean a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9183f349e4f291b0, a0, a1, a2, a3.this$, a4.this$, a5.this$, a6)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D TidalDisplacement::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_44ddfc2adc2cc28a], a0.this$, a1.this$, a2.this$));
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
        namespace displacement {
          static PyObject *t_TidalDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TidalDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TidalDisplacement_init_(t_TidalDisplacement *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TidalDisplacement_displacement(t_TidalDisplacement *self, PyObject *args);

          static PyMethodDef t_TidalDisplacement__methods_[] = {
            DECLARE_METHOD(t_TidalDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TidalDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TidalDisplacement, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TidalDisplacement)[] = {
            { Py_tp_methods, t_TidalDisplacement__methods_ },
            { Py_tp_init, (void *) t_TidalDisplacement_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TidalDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TidalDisplacement, t_TidalDisplacement, TidalDisplacement);

          void t_TidalDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(TidalDisplacement), &PY_TYPE_DEF(TidalDisplacement), module, "TidalDisplacement", 0);
          }

          void t_TidalDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TidalDisplacement), "class_", make_descriptor(TidalDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TidalDisplacement), "wrapfn_", make_descriptor(t_TidalDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TidalDisplacement), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TidalDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TidalDisplacement::initializeClass, 1)))
              return NULL;
            return t_TidalDisplacement::wrap_Object(TidalDisplacement(((t_TidalDisplacement *) arg)->object.this$));
          }
          static PyObject *t_TidalDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TidalDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TidalDisplacement_init_(t_TidalDisplacement *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            ::org::orekit::utils::PVCoordinatesProvider a3((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a4((jobject) NULL);
            ::org::orekit::utils::IERSConventions a5((jobject) NULL);
            PyTypeObject **p5;
            jboolean a6;
            TidalDisplacement object((jobject) NULL);

            if (!parseArgs(args, "DDDkkKZ", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::utils::t_IERSConventions::parameters_, &a6))
            {
              INT_CALL(object = TidalDisplacement(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TidalDisplacement_displacement(t_TidalDisplacement *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::data::BodiesElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.displacement(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "displacement", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldPropagator::class$ = NULL;
      jmethodID *FieldPropagator::mids$ = NULL;
      bool FieldPropagator::live$ = false;
      jdouble FieldPropagator::DEFAULT_MASS = (jdouble) 0;

      jclass FieldPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_546488029ed6e282] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_addEventDetector_bb8991c4a46cf56d] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_clearStepHandlers_ff7cb6c242604316] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getAdditionalStateProviders_d751c1a57012b438] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_96c2c30a0b0ad9e4] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_3bfef5c77ceb081a] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_a74be2e38786f3b6] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_f81c0644d57ae495] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_8da2e06aa361bf03] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_fb689a9c0f30b938] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_propagate_bcf793a6168805e3] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_resetInitialState_8062511934471166] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setStepHandler_a9c3be9ee399328f] = env->getMethodID(cls, "setStepHandler", "(Lorg/orekit/propagation/sampling/FieldOrekitStepHandler;)V");
          mids$[mid_setStepHandler_b6d4e0fa68ea09a5] = env->getMethodID(cls, "setStepHandler", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_MASS = env->getStaticDoubleField(cls, "DEFAULT_MASS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldPropagator::addAdditionalStateProvider(const ::org::orekit::propagation::FieldAdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_546488029ed6e282], a0.this$);
      }

      void FieldPropagator::addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_bb8991c4a46cf56d], a0.this$);
      }

      void FieldPropagator::clearEventsDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_ff7cb6c242604316]);
      }

      void FieldPropagator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_ff7cb6c242604316]);
      }

      ::java::util::List FieldPropagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_d751c1a57012b438]));
      }

      ::org::orekit::attitudes::AttitudeProvider FieldPropagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c]));
      }

      ::org::orekit::propagation::FieldEphemerisGenerator FieldPropagator::getEphemerisGenerator() const
      {
        return ::org::orekit::propagation::FieldEphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_96c2c30a0b0ad9e4]));
      }

      ::java::util::Collection FieldPropagator::getEventsDetectors() const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_3bfef5c77ceb081a]));
      }

      ::org::orekit::frames::Frame FieldPropagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldPropagator::getInitialState() const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_a74be2e38786f3b6]));
      }

      JArray< ::java::lang::String > FieldPropagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_f81c0644d57ae495]));
      }

      ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer FieldPropagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_8da2e06aa361bf03]));
      }

      jboolean FieldPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41], a0.this$);
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_fb689a9c0f30b938], a0.this$));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_bcf793a6168805e3], a0.this$, a1.this$));
      }

      void FieldPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_8062511934471166], a0.this$);
      }

      void FieldPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
      }

      void FieldPropagator::setStepHandler(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_a9c3be9ee399328f], a0.this$);
      }

      void FieldPropagator::setStepHandler(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_b6d4e0fa68ea09a5], a0.this$, a1.this$);
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
      static PyObject *t_FieldPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPropagator_of_(t_FieldPropagator *self, PyObject *args);
      static PyObject *t_FieldPropagator_addAdditionalStateProvider(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_addEventDetector(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_clearEventsDetectors(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_clearStepHandlers(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getAdditionalStateProviders(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getAttitudeProvider(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getEphemerisGenerator(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getEventsDetectors(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getFrame(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getInitialState(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getManagedAdditionalStates(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getMultiplexer(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_isAdditionalStateManaged(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_propagate(t_FieldPropagator *self, PyObject *args);
      static PyObject *t_FieldPropagator_resetInitialState(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_setAttitudeProvider(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_setStepHandler(t_FieldPropagator *self, PyObject *args);
      static PyObject *t_FieldPropagator_get__additionalStateProviders(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__attitudeProvider(t_FieldPropagator *self, void *data);
      static int t_FieldPropagator_set__attitudeProvider(t_FieldPropagator *self, PyObject *arg, void *data);
      static PyObject *t_FieldPropagator_get__ephemerisGenerator(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__eventsDetectors(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__frame(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__initialState(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__managedAdditionalStates(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__multiplexer(t_FieldPropagator *self, void *data);
      static int t_FieldPropagator_set__stepHandler(t_FieldPropagator *self, PyObject *arg, void *data);
      static PyObject *t_FieldPropagator_get__parameters_(t_FieldPropagator *self, void *data);
      static PyGetSetDef t_FieldPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPropagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_FieldPropagator, attitudeProvider),
        DECLARE_GET_FIELD(t_FieldPropagator, ephemerisGenerator),
        DECLARE_GET_FIELD(t_FieldPropagator, eventsDetectors),
        DECLARE_GET_FIELD(t_FieldPropagator, frame),
        DECLARE_GET_FIELD(t_FieldPropagator, initialState),
        DECLARE_GET_FIELD(t_FieldPropagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_FieldPropagator, multiplexer),
        DECLARE_SET_FIELD(t_FieldPropagator, stepHandler),
        DECLARE_GET_FIELD(t_FieldPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPropagator__methods_[] = {
        DECLARE_METHOD(t_FieldPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPropagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_FieldPropagator, addEventDetector, METH_O),
        DECLARE_METHOD(t_FieldPropagator, clearEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getEphemerisGenerator, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_FieldPropagator, propagate, METH_VARARGS),
        DECLARE_METHOD(t_FieldPropagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_FieldPropagator, setAttitudeProvider, METH_O),
        DECLARE_METHOD(t_FieldPropagator, setStepHandler, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPropagator)[] = {
        { Py_tp_methods, t_FieldPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::FieldPVCoordinatesProvider),
        NULL
      };

      DEFINE_TYPE(FieldPropagator, t_FieldPropagator, FieldPropagator);
      PyObject *t_FieldPropagator::wrap_Object(const FieldPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPropagator *self = (t_FieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPropagator *self = (t_FieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPropagator), &PY_TYPE_DEF(FieldPropagator), module, "FieldPropagator", 0);
      }

      void t_FieldPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "class_", make_descriptor(FieldPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "wrapfn_", make_descriptor(t_FieldPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "boxfn_", make_descriptor(boxObject));
        env->getClass(FieldPropagator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "DEFAULT_MASS", make_descriptor(FieldPropagator::DEFAULT_MASS));
      }

      static PyObject *t_FieldPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPropagator::initializeClass, 1)))
          return NULL;
        return t_FieldPropagator::wrap_Object(FieldPropagator(((t_FieldPropagator *) arg)->object.this$));
      }
      static PyObject *t_FieldPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPropagator_of_(t_FieldPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldPropagator_addAdditionalStateProvider(t_FieldPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldAdditionalStateProvider a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldAdditionalStateProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldAdditionalStateProvider::parameters_))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_addEventDetector(t_FieldPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_clearEventsDetectors(t_FieldPropagator *self)
      {
        OBJ_CALL(self->object.clearEventsDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldPropagator_clearStepHandlers(t_FieldPropagator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldPropagator_getAdditionalStateProviders(t_FieldPropagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getAttitudeProvider(t_FieldPropagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getEphemerisGenerator(t_FieldPropagator *self)
      {
        ::org::orekit::propagation::FieldEphemerisGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPropagator_getEventsDetectors(t_FieldPropagator *self)
      {
        ::java::util::Collection result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getFrame(t_FieldPropagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getInitialState(t_FieldPropagator *self)
      {
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPropagator_getManagedAdditionalStates(t_FieldPropagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_FieldPropagator_getMultiplexer(t_FieldPropagator *self)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPropagator_isAdditionalStateManaged(t_FieldPropagator *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAdditionalStateManaged", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_propagate(t_FieldPropagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.propagate(a0));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.propagate(a0, a1));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", args);
        return NULL;
      }

      static PyObject *t_FieldPropagator_resetInitialState(t_FieldPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_setAttitudeProvider(t_FieldPropagator *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setAttitudeProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_setStepHandler(t_FieldPropagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::sampling::FieldOrekitStepHandler a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepHandler::parameters_))
            {
              OBJ_CALL(self->object.setStepHandler(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
            {
              OBJ_CALL(self->object.setStepHandler(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setStepHandler", args);
        return NULL;
      }
      static PyObject *t_FieldPropagator_get__parameters_(t_FieldPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldPropagator_get__additionalStateProviders(t_FieldPropagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__attitudeProvider(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_FieldPropagator_set__attitudeProvider(t_FieldPropagator *self, PyObject *arg, void *data)
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

      static PyObject *t_FieldPropagator_get__ephemerisGenerator(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__eventsDetectors(t_FieldPropagator *self, void *data)
      {
        ::java::util::Collection value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__frame(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__initialState(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__managedAdditionalStates(t_FieldPropagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_FieldPropagator_get__multiplexer(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(value);
      }

      static int t_FieldPropagator_set__stepHandler(t_FieldPropagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepHandler value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &value))
          {
            INT_CALL(self->object.setStepHandler(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "stepHandler", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/LofOffset.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *LofOffset::class$ = NULL;
      jmethodID *LofOffset::mids$ = NULL;
      bool LofOffset::live$ = false;

      jclass LofOffset::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/LofOffset");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_01fbcbffb2ba401e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;)V");
          mids$[mid_init$_cd5879bef7a29ce5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;DDD)V");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_494718838b66cf03] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_267252ddff45220c] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LofOffset::LofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_01fbcbffb2ba401e, a0.this$, a1.this$)) {}

      LofOffset::LofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd5879bef7a29ce5, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

      ::org::orekit::attitudes::FieldAttitude LofOffset::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude LofOffset::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LofOffset::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_494718838b66cf03], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LofOffset::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_267252ddff45220c], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_LofOffset_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LofOffset_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LofOffset_init_(t_LofOffset *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LofOffset_getAttitude(t_LofOffset *self, PyObject *args);
      static PyObject *t_LofOffset_getAttitudeRotation(t_LofOffset *self, PyObject *args);

      static PyMethodDef t_LofOffset__methods_[] = {
        DECLARE_METHOD(t_LofOffset, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffset, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffset, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_LofOffset, getAttitudeRotation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LofOffset)[] = {
        { Py_tp_methods, t_LofOffset__methods_ },
        { Py_tp_init, (void *) t_LofOffset_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LofOffset)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LofOffset, t_LofOffset, LofOffset);

      void t_LofOffset::install(PyObject *module)
      {
        installType(&PY_TYPE(LofOffset), &PY_TYPE_DEF(LofOffset), module, "LofOffset", 0);
      }

      void t_LofOffset::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffset), "class_", make_descriptor(LofOffset::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffset), "wrapfn_", make_descriptor(t_LofOffset::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffset), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LofOffset_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LofOffset::initializeClass, 1)))
          return NULL;
        return t_LofOffset::wrap_Object(LofOffset(((t_LofOffset *) arg)->object.this$));
      }
      static PyObject *t_LofOffset_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LofOffset::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LofOffset_init_(t_LofOffset *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            LofOffset object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LofOffset(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            LofOffset object((jobject) NULL);

            if (!parseArgs(args, "kkKDDD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4, &a5))
            {
              INT_CALL(object = LofOffset(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_LofOffset_getAttitude(t_LofOffset *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_LofOffset_getAttitudeRotation(t_LofOffset *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/GradientFunction.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *GradientFunction::class$ = NULL;
        jmethodID *GradientFunction::mids$ = NULL;
        bool GradientFunction::live$ = false;

        jclass GradientFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/GradientFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b0b788d4b5b79345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction;)V");
            mids$[mid_value_51f624c89851da7e] = env->getMethodID(cls, "value", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GradientFunction::GradientFunction(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0b788d4b5b79345, a0.this$)) {}

        JArray< jdouble > GradientFunction::value(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_51f624c89851da7e], a0.this$));
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
        static PyObject *t_GradientFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GradientFunction_init_(t_GradientFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GradientFunction_value(t_GradientFunction *self, PyObject *arg);

        static PyMethodDef t_GradientFunction__methods_[] = {
          DECLARE_METHOD(t_GradientFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientFunction, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GradientFunction)[] = {
          { Py_tp_methods, t_GradientFunction__methods_ },
          { Py_tp_init, (void *) t_GradientFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GradientFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GradientFunction, t_GradientFunction, GradientFunction);

        void t_GradientFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(GradientFunction), &PY_TYPE_DEF(GradientFunction), module, "GradientFunction", 0);
        }

        void t_GradientFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientFunction), "class_", make_descriptor(GradientFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientFunction), "wrapfn_", make_descriptor(t_GradientFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GradientFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GradientFunction::initializeClass, 1)))
            return NULL;
          return t_GradientFunction::wrap_Object(GradientFunction(((t_GradientFunction *) arg)->object.this$));
        }
        static PyObject *t_GradientFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GradientFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GradientFunction_init_(t_GradientFunction *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction a0((jobject) NULL);
          GradientFunction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction::initializeClass, &a0))
          {
            INT_CALL(object = GradientFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GradientFunction_value(t_GradientFunction *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/StandardDeviation.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/moment/StandardDeviation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *StandardDeviation::class$ = NULL;
          jmethodID *StandardDeviation::mids$ = NULL;
          bool StandardDeviation::live$ = false;

          jclass StandardDeviation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/StandardDeviation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_4f0cd4b99215b675] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_init$_b35db77cae58639e] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_init$_afd6aa27b7bb12b4] = env->getMethodID(cls, "<init>", "(ZLorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_5f0732edec832d7b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/StandardDeviation;");
              mids$[mid_evaluate_02811febb145516c] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_be090b022ea8e24a] = env->getMethodID(cls, "evaluate", "([DDII)D");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_isBiasCorrected_eee3de00fe971136] = env->getMethodID(cls, "isBiasCorrected", "()Z");
              mids$[mid_withBiasCorrection_a58c238729124c9c] = env->getMethodID(cls, "withBiasCorrection", "(Z)Lorg/hipparchus/stat/descriptive/moment/StandardDeviation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StandardDeviation::StandardDeviation() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          StandardDeviation::StandardDeviation(const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_4f0cd4b99215b675, a0.this$)) {}

          StandardDeviation::StandardDeviation(jboolean a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_b35db77cae58639e, a0)) {}

          StandardDeviation::StandardDeviation(jboolean a0, const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a1) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_afd6aa27b7bb12b4, a0, a1.this$)) {}

          void StandardDeviation::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          StandardDeviation StandardDeviation::copy() const
          {
            return StandardDeviation(env->callObjectMethod(this$, mids$[mid_copy_5f0732edec832d7b]));
          }

          jdouble StandardDeviation::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_02811febb145516c], a0.this$, a1);
          }

          jdouble StandardDeviation::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          jdouble StandardDeviation::evaluate(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_be090b022ea8e24a], a0.this$, a1, a2, a3);
          }

          jlong StandardDeviation::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          jdouble StandardDeviation::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          void StandardDeviation::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_1ad26e8c8c0cd65b], a0);
          }

          jboolean StandardDeviation::isBiasCorrected() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isBiasCorrected_eee3de00fe971136]);
          }

          StandardDeviation StandardDeviation::withBiasCorrection(jboolean a0) const
          {
            return StandardDeviation(env->callObjectMethod(this$, mids$[mid_withBiasCorrection_a58c238729124c9c], a0));
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
          static PyObject *t_StandardDeviation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StandardDeviation_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StandardDeviation_init_(t_StandardDeviation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StandardDeviation_clear(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_copy(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_evaluate(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_getN(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_getResult(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_increment(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_isBiasCorrected(t_StandardDeviation *self);
          static PyObject *t_StandardDeviation_withBiasCorrection(t_StandardDeviation *self, PyObject *arg);
          static PyObject *t_StandardDeviation_get__biasCorrected(t_StandardDeviation *self, void *data);
          static PyObject *t_StandardDeviation_get__n(t_StandardDeviation *self, void *data);
          static PyObject *t_StandardDeviation_get__result(t_StandardDeviation *self, void *data);
          static PyGetSetDef t_StandardDeviation__fields_[] = {
            DECLARE_GET_FIELD(t_StandardDeviation, biasCorrected),
            DECLARE_GET_FIELD(t_StandardDeviation, n),
            DECLARE_GET_FIELD(t_StandardDeviation, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StandardDeviation__methods_[] = {
            DECLARE_METHOD(t_StandardDeviation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StandardDeviation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StandardDeviation, clear, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, copy, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, getN, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, getResult, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, increment, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, isBiasCorrected, METH_NOARGS),
            DECLARE_METHOD(t_StandardDeviation, withBiasCorrection, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StandardDeviation)[] = {
            { Py_tp_methods, t_StandardDeviation__methods_ },
            { Py_tp_init, (void *) t_StandardDeviation_init_ },
            { Py_tp_getset, t_StandardDeviation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StandardDeviation)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(StandardDeviation, t_StandardDeviation, StandardDeviation);

          void t_StandardDeviation::install(PyObject *module)
          {
            installType(&PY_TYPE(StandardDeviation), &PY_TYPE_DEF(StandardDeviation), module, "StandardDeviation", 0);
          }

          void t_StandardDeviation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StandardDeviation), "class_", make_descriptor(StandardDeviation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StandardDeviation), "wrapfn_", make_descriptor(t_StandardDeviation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StandardDeviation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StandardDeviation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StandardDeviation::initializeClass, 1)))
              return NULL;
            return t_StandardDeviation::wrap_Object(StandardDeviation(((t_StandardDeviation *) arg)->object.this$));
          }
          static PyObject *t_StandardDeviation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StandardDeviation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StandardDeviation_init_(t_StandardDeviation *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                StandardDeviation object((jobject) NULL);

                INT_CALL(object = StandardDeviation());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a0((jobject) NULL);
                StandardDeviation object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0))
                {
                  INT_CALL(object = StandardDeviation(a0));
                  self->object = object;
                  break;
                }
              }
              {
                jboolean a0;
                StandardDeviation object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = StandardDeviation(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jboolean a0;
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a1((jobject) NULL);
                StandardDeviation object((jobject) NULL);

                if (!parseArgs(args, "Zk", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = StandardDeviation(a0, a1));
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

          static PyObject *t_StandardDeviation_clear(t_StandardDeviation *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_StandardDeviation_copy(t_StandardDeviation *self, PyObject *args)
          {
            StandardDeviation result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_StandardDeviation::wrap_Object(result);
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_StandardDeviation_evaluate(t_StandardDeviation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "[DD", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
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
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_StandardDeviation_getN(t_StandardDeviation *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_StandardDeviation_getResult(t_StandardDeviation *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_StandardDeviation_increment(t_StandardDeviation *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_StandardDeviation_isBiasCorrected(t_StandardDeviation *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isBiasCorrected());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_StandardDeviation_withBiasCorrection(t_StandardDeviation *self, PyObject *arg)
          {
            jboolean a0;
            StandardDeviation result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withBiasCorrection(a0));
              return t_StandardDeviation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withBiasCorrection", arg);
            return NULL;
          }

          static PyObject *t_StandardDeviation_get__biasCorrected(t_StandardDeviation *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isBiasCorrected());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_StandardDeviation_get__n(t_StandardDeviation *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_StandardDeviation_get__result(t_StandardDeviation *self, void *data)
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

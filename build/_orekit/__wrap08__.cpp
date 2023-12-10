#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersGroundReceiverBaseModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersGroundReceiverBaseModifier::class$ = NULL;
          jmethodID *PhaseCentersGroundReceiverBaseModifier::mids$ = NULL;
          bool PhaseCentersGroundReceiverBaseModifier::live$ = false;

          jclass PhaseCentersGroundReceiverBaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersGroundReceiverBaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a2ed374ecf8bf34a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_oneWayDistanceModification_b358632edcce3ae8] = env->getMethodID(cls, "oneWayDistanceModification", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");
              mids$[mid_twoWayDistanceModification_b358632edcce3ae8] = env->getMethodID(cls, "twoWayDistanceModification", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersGroundReceiverBaseModifier::PhaseCentersGroundReceiverBaseModifier(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a2ed374ecf8bf34a, a0.this$, a1.this$)) {}

          jdouble PhaseCentersGroundReceiverBaseModifier::oneWayDistanceModification(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_oneWayDistanceModification_b358632edcce3ae8], a0.this$);
          }

          jdouble PhaseCentersGroundReceiverBaseModifier::twoWayDistanceModification(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_twoWayDistanceModification_b358632edcce3ae8], a0.this$);
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
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_of_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args);
          static int t_PhaseCentersGroundReceiverBaseModifier_init_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_oneWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_twoWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_get__parameters_(t_PhaseCentersGroundReceiverBaseModifier *self, void *data);
          static PyGetSetDef t_PhaseCentersGroundReceiverBaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseCentersGroundReceiverBaseModifier, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseCentersGroundReceiverBaseModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, of_, METH_VARARGS),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, oneWayDistanceModification, METH_O),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, twoWayDistanceModification, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersGroundReceiverBaseModifier)[] = {
            { Py_tp_methods, t_PhaseCentersGroundReceiverBaseModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersGroundReceiverBaseModifier_init_ },
            { Py_tp_getset, t_PhaseCentersGroundReceiverBaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersGroundReceiverBaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersGroundReceiverBaseModifier, t_PhaseCentersGroundReceiverBaseModifier, PhaseCentersGroundReceiverBaseModifier);
          PyObject *t_PhaseCentersGroundReceiverBaseModifier::wrap_Object(const PhaseCentersGroundReceiverBaseModifier& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseCentersGroundReceiverBaseModifier::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseCentersGroundReceiverBaseModifier *self = (t_PhaseCentersGroundReceiverBaseModifier *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PhaseCentersGroundReceiverBaseModifier::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseCentersGroundReceiverBaseModifier::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseCentersGroundReceiverBaseModifier *self = (t_PhaseCentersGroundReceiverBaseModifier *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PhaseCentersGroundReceiverBaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersGroundReceiverBaseModifier), &PY_TYPE_DEF(PhaseCentersGroundReceiverBaseModifier), module, "PhaseCentersGroundReceiverBaseModifier", 0);
          }

          void t_PhaseCentersGroundReceiverBaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersGroundReceiverBaseModifier), "class_", make_descriptor(PhaseCentersGroundReceiverBaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersGroundReceiverBaseModifier), "wrapfn_", make_descriptor(t_PhaseCentersGroundReceiverBaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersGroundReceiverBaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersGroundReceiverBaseModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersGroundReceiverBaseModifier::wrap_Object(PhaseCentersGroundReceiverBaseModifier(((t_PhaseCentersGroundReceiverBaseModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersGroundReceiverBaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_of_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PhaseCentersGroundReceiverBaseModifier_init_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersGroundReceiverBaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersGroundReceiverBaseModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_oneWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(result = self->object.oneWayDistanceModification(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "oneWayDistanceModification", arg);
            return NULL;
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_twoWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(result = self->object.twoWayDistanceModification(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "twoWayDistanceModification", arg);
            return NULL;
          }
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_get__parameters_(t_PhaseCentersGroundReceiverBaseModifier *self, void *data)
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
#include "java/io/PrintStream.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/util/Locale.h"
#include "java/io/FileNotFoundException.h"
#include "java/lang/CharSequence.h"
#include "java/io/OutputStream.h"
#include "java/io/File.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *PrintStream::class$ = NULL;
    jmethodID *PrintStream::mids$ = NULL;
    bool PrintStream::live$ = false;

    jclass PrintStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/PrintStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0613af62f2ba5dba] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_fd7cb6689cfa6eeb] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_94ced6352b9e37c8] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
        mids$[mid_init$_6a2001eff0605f71] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_91fa247883002c58] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;Z)V");
        mids$[mid_init$_e2328c2458390b01] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;ZLjava/lang/String;)V");
        mids$[mid_append_f651c37cfe755030] = env->getMethodID(cls, "append", "(C)Ljava/io/PrintStream;");
        mids$[mid_append_facd8e19ee14efd5] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintStream;");
        mids$[mid_append_b87828872129844f] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintStream;");
        mids$[mid_checkError_b108b35ef48e27bd] = env->getMethodID(cls, "checkError", "()Z");
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_0fa09c18fee449d5] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_format_02b89e48e7e4c6fd] = env->getMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_format_b18b969c71bc0850] = env->getMethodID(cls, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_print_3534e8e092c162a5] = env->getMethodID(cls, "print", "([C)V");
        mids$[mid_print_d0bc48d5b00dc40c] = env->getMethodID(cls, "print", "(Ljava/lang/String;)V");
        mids$[mid_print_bd04c9335fb9e4cf] = env->getMethodID(cls, "print", "(Z)V");
        mids$[mid_print_636c0bbb96cab723] = env->getMethodID(cls, "print", "(C)V");
        mids$[mid_print_17db3a65980d3441] = env->getMethodID(cls, "print", "(D)V");
        mids$[mid_print_f63147a1690942cc] = env->getMethodID(cls, "print", "(F)V");
        mids$[mid_print_99803b0791f320ff] = env->getMethodID(cls, "print", "(I)V");
        mids$[mid_print_2990946c992aafed] = env->getMethodID(cls, "print", "(Ljava/lang/Object;)V");
        mids$[mid_print_3a8e7649f31fdb20] = env->getMethodID(cls, "print", "(J)V");
        mids$[mid_printf_02b89e48e7e4c6fd] = env->getMethodID(cls, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_printf_b18b969c71bc0850] = env->getMethodID(cls, "printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_println_0fa09c18fee449d5] = env->getMethodID(cls, "println", "()V");
        mids$[mid_println_3534e8e092c162a5] = env->getMethodID(cls, "println", "([C)V");
        mids$[mid_println_d0bc48d5b00dc40c] = env->getMethodID(cls, "println", "(Ljava/lang/String;)V");
        mids$[mid_println_bd04c9335fb9e4cf] = env->getMethodID(cls, "println", "(Z)V");
        mids$[mid_println_636c0bbb96cab723] = env->getMethodID(cls, "println", "(C)V");
        mids$[mid_println_17db3a65980d3441] = env->getMethodID(cls, "println", "(D)V");
        mids$[mid_println_f63147a1690942cc] = env->getMethodID(cls, "println", "(F)V");
        mids$[mid_println_99803b0791f320ff] = env->getMethodID(cls, "println", "(I)V");
        mids$[mid_println_2990946c992aafed] = env->getMethodID(cls, "println", "(Ljava/lang/Object;)V");
        mids$[mid_println_3a8e7649f31fdb20] = env->getMethodID(cls, "println", "(J)V");
        mids$[mid_write_99803b0791f320ff] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_d7af9aedcdd3845b] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_setError_0fa09c18fee449d5] = env->getMethodID(cls, "setError", "()V");
        mids$[mid_clearError_0fa09c18fee449d5] = env->getMethodID(cls, "clearError", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    PrintStream::PrintStream(const ::java::io::File & a0) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_0613af62f2ba5dba, a0.this$)) {}

    PrintStream::PrintStream(const ::java::io::OutputStream & a0) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_fd7cb6689cfa6eeb, a0.this$)) {}

    PrintStream::PrintStream(const ::java::lang::String & a0) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    PrintStream::PrintStream(const ::java::io::File & a0, const ::java::lang::String & a1) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_94ced6352b9e37c8, a0.this$, a1.this$)) {}

    PrintStream::PrintStream(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_6a2001eff0605f71, a0.this$, a1.this$)) {}

    PrintStream::PrintStream(const ::java::io::OutputStream & a0, jboolean a1) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_91fa247883002c58, a0.this$, a1)) {}

    PrintStream::PrintStream(const ::java::io::OutputStream & a0, jboolean a1, const ::java::lang::String & a2) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_e2328c2458390b01, a0.this$, a1, a2.this$)) {}

    PrintStream PrintStream::append(jchar a0) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_append_f651c37cfe755030], a0));
    }

    PrintStream PrintStream::append(const ::java::lang::CharSequence & a0) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_append_facd8e19ee14efd5], a0.this$));
    }

    PrintStream PrintStream::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_append_b87828872129844f], a0.this$, a1, a2));
    }

    jboolean PrintStream::checkError() const
    {
      return env->callBooleanMethod(this$, mids$[mid_checkError_b108b35ef48e27bd]);
    }

    void PrintStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    void PrintStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0fa09c18fee449d5]);
    }

    PrintStream PrintStream::format(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_format_02b89e48e7e4c6fd], a0.this$, a1.this$));
    }

    PrintStream PrintStream::format(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_format_b18b969c71bc0850], a0.this$, a1.this$, a2.this$));
    }

    void PrintStream::print(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_3534e8e092c162a5], a0.this$);
    }

    void PrintStream::print(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_d0bc48d5b00dc40c], a0.this$);
    }

    void PrintStream::print(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_bd04c9335fb9e4cf], a0);
    }

    void PrintStream::print(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_636c0bbb96cab723], a0);
    }

    void PrintStream::print(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_17db3a65980d3441], a0);
    }

    void PrintStream::print(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_f63147a1690942cc], a0);
    }

    void PrintStream::print(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_99803b0791f320ff], a0);
    }

    void PrintStream::print(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_2990946c992aafed], a0.this$);
    }

    void PrintStream::print(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_3a8e7649f31fdb20], a0);
    }

    PrintStream PrintStream::printf(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_printf_02b89e48e7e4c6fd], a0.this$, a1.this$));
    }

    PrintStream PrintStream::printf(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_printf_b18b969c71bc0850], a0.this$, a1.this$, a2.this$));
    }

    void PrintStream::println() const
    {
      env->callVoidMethod(this$, mids$[mid_println_0fa09c18fee449d5]);
    }

    void PrintStream::println(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_3534e8e092c162a5], a0.this$);
    }

    void PrintStream::println(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_d0bc48d5b00dc40c], a0.this$);
    }

    void PrintStream::println(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_bd04c9335fb9e4cf], a0);
    }

    void PrintStream::println(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_636c0bbb96cab723], a0);
    }

    void PrintStream::println(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_17db3a65980d3441], a0);
    }

    void PrintStream::println(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_f63147a1690942cc], a0);
    }

    void PrintStream::println(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_99803b0791f320ff], a0);
    }

    void PrintStream::println(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_2990946c992aafed], a0.this$);
    }

    void PrintStream::println(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_3a8e7649f31fdb20], a0);
    }

    void PrintStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_99803b0791f320ff], a0);
    }

    void PrintStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
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
    static PyObject *t_PrintStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_PrintStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_PrintStream_init_(t_PrintStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_PrintStream_append(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_checkError(t_PrintStream *self);
    static PyObject *t_PrintStream_close(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_flush(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_format(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_print(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_printf(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_println(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_write(t_PrintStream *self, PyObject *args);

    static PyMethodDef t_PrintStream__methods_[] = {
      DECLARE_METHOD(t_PrintStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintStream, append, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, checkError, METH_NOARGS),
      DECLARE_METHOD(t_PrintStream, close, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, flush, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, format, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, print, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, printf, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, println, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(PrintStream)[] = {
      { Py_tp_methods, t_PrintStream__methods_ },
      { Py_tp_init, (void *) t_PrintStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(PrintStream)[] = {
      &PY_TYPE_DEF(::java::io::FilterOutputStream),
      NULL
    };

    DEFINE_TYPE(PrintStream, t_PrintStream, PrintStream);

    void t_PrintStream::install(PyObject *module)
    {
      installType(&PY_TYPE(PrintStream), &PY_TYPE_DEF(PrintStream), module, "PrintStream", 0);
    }

    void t_PrintStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintStream), "class_", make_descriptor(PrintStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintStream), "wrapfn_", make_descriptor(t_PrintStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_PrintStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, PrintStream::initializeClass, 1)))
        return NULL;
      return t_PrintStream::wrap_Object(PrintStream(((t_PrintStream *) arg)->object.this$));
    }
    static PyObject *t_PrintStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, PrintStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_PrintStream_init_(t_PrintStream *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = PrintStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
          {
            INT_CALL(object = PrintStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = PrintStream(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::File a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintStream(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = PrintStream(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          jboolean a1;
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintStream(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          jboolean a1;
          ::java::lang::String a2((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "kZs", ::java::io::OutputStream::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PrintStream(a0, a1, a2));
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

    static PyObject *t_PrintStream_append(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintStream::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_PrintStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "append", args);
      return NULL;
    }

    static PyObject *t_PrintStream_checkError(t_PrintStream *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.checkError());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_PrintStream_close(t_PrintStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_PrintStream_flush(t_PrintStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintStream), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_PrintStream_format(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.format(a0, a1));
            return t_PrintStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return t_PrintStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "format", args);
      return NULL;
    }

    static PyObject *t_PrintStream_print(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "print", args);
      return NULL;
    }

    static PyObject *t_PrintStream_printf(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.printf(a0, a1));
            return t_PrintStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.printf(a0, a1, a2));
            return t_PrintStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "printf", args);
      return NULL;
    }

    static PyObject *t_PrintStream_println(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.println());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "println", args);
      return NULL;
    }

    static PyObject *t_PrintStream_write(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
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

      return callSuper(PY_TYPE(PrintStream), (PyObject *) self, "write", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/OrphanFrame.h"
#include "org/orekit/frames/OrphanFrame.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/Transform.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_addChild_74682fd3440466c6] = env->getMethodID(cls, "addChild", "(Lorg/orekit/frames/OrphanFrame;Lorg/orekit/frames/Transform;Z)V");
          mids$[mid_addChild_e3cd872d552272ec] = env->getMethodID(cls, "addChild", "(Lorg/orekit/frames/OrphanFrame;Lorg/orekit/frames/TransformProvider;Z)V");
          mids$[mid_attachTo_b7b2e14d2a23701d] = env->getMethodID(cls, "attachTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Z)V");
          mids$[mid_attachTo_faa407a92cccaadd] = env->getMethodID(cls, "attachTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;Z)V");
          mids$[mid_getChildren_2afa36052df4765d] = env->getMethodID(cls, "getChildren", "()Ljava/util/List;");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrphanFrame::OrphanFrame(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

      void OrphanFrame::addChild(const OrphanFrame & a0, const ::org::orekit::frames::Transform & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addChild_74682fd3440466c6], a0.this$, a1.this$, a2);
      }

      void OrphanFrame::addChild(const OrphanFrame & a0, const ::org::orekit::frames::TransformProvider & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addChild_e3cd872d552272ec], a0.this$, a1.this$, a2);
      }

      void OrphanFrame::attachTo(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Transform & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_attachTo_b7b2e14d2a23701d], a0.this$, a1.this$, a2);
      }

      void OrphanFrame::attachTo(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::TransformProvider & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_attachTo_faa407a92cccaadd], a0.this$, a1.this$, a2);
      }

      ::java::util::List OrphanFrame::getChildren() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getChildren_2afa36052df4765d]));
      }

      ::org::orekit::frames::Frame OrphanFrame::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      ::java::lang::String OrphanFrame::toString() const
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
#include "org/orekit/propagation/conversion/AbstractLimitedVariableStepFieldIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractLimitedVariableStepFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractLimitedVariableStepFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractLimitedVariableStepFieldIntegratorBuilder::live$ = false;

        jclass AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractLimitedVariableStepFieldIntegratorBuilder");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_of_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractLimitedVariableStepFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractLimitedVariableStepFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractLimitedVariableStepFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractLimitedVariableStepFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractLimitedVariableStepFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractLimitedVariableStepFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder, t_AbstractLimitedVariableStepFieldIntegratorBuilder, AbstractLimitedVariableStepFieldIntegratorBuilder);
        PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_Object(const AbstractLimitedVariableStepFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractLimitedVariableStepFieldIntegratorBuilder *self = (t_AbstractLimitedVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractLimitedVariableStepFieldIntegratorBuilder *self = (t_AbstractLimitedVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractLimitedVariableStepFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractLimitedVariableStepFieldIntegratorBuilder), module, "AbstractLimitedVariableStepFieldIntegratorBuilder", 0);
        }

        void t_AbstractLimitedVariableStepFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), "class_", make_descriptor(AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_Object(AbstractLimitedVariableStepFieldIntegratorBuilder(((t_AbstractLimitedVariableStepFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_of_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/NetworkCrawler.h"
#include "java/lang/Class.h"
#include "java/net/URL.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *NetworkCrawler::class$ = NULL;
      jmethodID *NetworkCrawler::mids$ = NULL;
      bool NetworkCrawler::live$ = false;

      jclass NetworkCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/NetworkCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7a76f99591aeac7f] = env->getMethodID(cls, "<init>", "([Ljava/net/URL;)V");
          mids$[mid_setTimeout_99803b0791f320ff] = env->getMethodID(cls, "setTimeout", "(I)V");
          mids$[mid_getStream_f31356623a08e42e] = env->getMethodID(cls, "getStream", "(Ljava/net/URL;)Ljava/io/InputStream;");
          mids$[mid_getZipJarCrawler_04f0e233865a533b] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/net/URL;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_getBaseName_2762746aab6c04be] = env->getMethodID(cls, "getBaseName", "(Ljava/net/URL;)Ljava/lang/String;");
          mids$[mid_getCompleteName_2762746aab6c04be] = env->getMethodID(cls, "getCompleteName", "(Ljava/net/URL;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      NetworkCrawler::NetworkCrawler(const JArray< ::java::net::URL > & a0) : ::org::orekit::data::AbstractListCrawler(env->newObject(initializeClass, &mids$, mid_init$_7a76f99591aeac7f, a0.this$)) {}

      void NetworkCrawler::setTimeout(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setTimeout_99803b0791f320ff], a0);
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
      static PyObject *t_NetworkCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NetworkCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NetworkCrawler_of_(t_NetworkCrawler *self, PyObject *args);
      static int t_NetworkCrawler_init_(t_NetworkCrawler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_NetworkCrawler_setTimeout(t_NetworkCrawler *self, PyObject *arg);
      static int t_NetworkCrawler_set__timeout(t_NetworkCrawler *self, PyObject *arg, void *data);
      static PyObject *t_NetworkCrawler_get__parameters_(t_NetworkCrawler *self, void *data);
      static PyGetSetDef t_NetworkCrawler__fields_[] = {
        DECLARE_SET_FIELD(t_NetworkCrawler, timeout),
        DECLARE_GET_FIELD(t_NetworkCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_NetworkCrawler__methods_[] = {
        DECLARE_METHOD(t_NetworkCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NetworkCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NetworkCrawler, of_, METH_VARARGS),
        DECLARE_METHOD(t_NetworkCrawler, setTimeout, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NetworkCrawler)[] = {
        { Py_tp_methods, t_NetworkCrawler__methods_ },
        { Py_tp_init, (void *) t_NetworkCrawler_init_ },
        { Py_tp_getset, t_NetworkCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NetworkCrawler)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractListCrawler),
        NULL
      };

      DEFINE_TYPE(NetworkCrawler, t_NetworkCrawler, NetworkCrawler);
      PyObject *t_NetworkCrawler::wrap_Object(const NetworkCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_NetworkCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_NetworkCrawler *self = (t_NetworkCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_NetworkCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_NetworkCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_NetworkCrawler *self = (t_NetworkCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_NetworkCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(NetworkCrawler), &PY_TYPE_DEF(NetworkCrawler), module, "NetworkCrawler", 0);
      }

      void t_NetworkCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkCrawler), "class_", make_descriptor(NetworkCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkCrawler), "wrapfn_", make_descriptor(t_NetworkCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NetworkCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NetworkCrawler::initializeClass, 1)))
          return NULL;
        return t_NetworkCrawler::wrap_Object(NetworkCrawler(((t_NetworkCrawler *) arg)->object.this$));
      }
      static PyObject *t_NetworkCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NetworkCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_NetworkCrawler_of_(t_NetworkCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_NetworkCrawler_init_(t_NetworkCrawler *self, PyObject *args, PyObject *kwds)
      {
        JArray< ::java::net::URL > a0((jobject) NULL);
        NetworkCrawler object((jobject) NULL);

        if (!parseArgs(args, "[k", ::java::net::URL::initializeClass, &a0))
        {
          INT_CALL(object = NetworkCrawler(a0));
          self->object = object;
          self->parameters[0] = ::java::net::PY_TYPE(URL);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_NetworkCrawler_setTimeout(t_NetworkCrawler *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setTimeout(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setTimeout", arg);
        return NULL;
      }
      static PyObject *t_NetworkCrawler_get__parameters_(t_NetworkCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static int t_NetworkCrawler_set__timeout(t_NetworkCrawler *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setTimeout(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "timeout", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/FieldBracketingNthOrderBrentSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *FieldBracketingNthOrderBrentSolver::class$ = NULL;
        jmethodID *FieldBracketingNthOrderBrentSolver::mids$ = NULL;
        bool FieldBracketingNthOrderBrentSolver::live$ = false;

        jclass FieldBracketingNthOrderBrentSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/FieldBracketingNthOrderBrentSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8b527037de2479ac] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_getAbsoluteAccuracy_eba8e72a22c984ac] = env->getMethodID(cls, "getAbsoluteAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_eba8e72a22c984ac] = env->getMethodID(cls, "getFunctionValueAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMaxEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxEvaluations", "()I");
            mids$[mid_getMaximalOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getMaximalOrder", "()I");
            mids$[mid_getRelativeAccuracy_eba8e72a22c984ac] = env->getMethodID(cls, "getRelativeAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_6172cc3975e8c981] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_2641ca05b8af2367] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solveInterval_6c3f0bd7fafc24ed] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldBracketingNthOrderBrentSolver::FieldBracketingNthOrderBrentSolver(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8b527037de2479ac, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::getAbsoluteAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbsoluteAccuracy_eba8e72a22c984ac]));
        }

        jint FieldBracketingNthOrderBrentSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::getFunctionValueAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFunctionValueAccuracy_eba8e72a22c984ac]));
        }

        jint FieldBracketingNthOrderBrentSolver::getMaxEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_570ce0828f81a2c1]);
        }

        jint FieldBracketingNthOrderBrentSolver::getMaximalOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalOrder_570ce0828f81a2c1]);
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::getRelativeAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRelativeAccuracy_eba8e72a22c984ac]));
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_6172cc3975e8c981], a0, a1.this$, a2.this$, a3.this$, a4.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_2641ca05b8af2367], a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval FieldBracketingNthOrderBrentSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_6c3f0bd7fafc24ed], a0, a1.this$, a2.this$, a3.this$, a4.this$));
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
        static PyObject *t_FieldBracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_of_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args);
        static int t_FieldBracketingNthOrderBrentSolver_init_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getAbsoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getEvaluations(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getFunctionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaxEvaluations(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaximalOrder(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getRelativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_solve(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_solveInterval(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__absoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__evaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__functionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maxEvaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maximalOrder(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__relativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__parameters_(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyGetSetDef t_FieldBracketingNthOrderBrentSolver__fields_[] = {
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, evaluations),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, maxEvaluations),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, maximalOrder),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldBracketingNthOrderBrentSolver__methods_[] = {
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getMaxEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getMaximalOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldBracketingNthOrderBrentSolver)[] = {
          { Py_tp_methods, t_FieldBracketingNthOrderBrentSolver__methods_ },
          { Py_tp_init, (void *) t_FieldBracketingNthOrderBrentSolver_init_ },
          { Py_tp_getset, t_FieldBracketingNthOrderBrentSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldBracketingNthOrderBrentSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldBracketingNthOrderBrentSolver, t_FieldBracketingNthOrderBrentSolver, FieldBracketingNthOrderBrentSolver);
        PyObject *t_FieldBracketingNthOrderBrentSolver::wrap_Object(const FieldBracketingNthOrderBrentSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBracketingNthOrderBrentSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBracketingNthOrderBrentSolver *self = (t_FieldBracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldBracketingNthOrderBrentSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBracketingNthOrderBrentSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBracketingNthOrderBrentSolver *self = (t_FieldBracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldBracketingNthOrderBrentSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldBracketingNthOrderBrentSolver), &PY_TYPE_DEF(FieldBracketingNthOrderBrentSolver), module, "FieldBracketingNthOrderBrentSolver", 0);
        }

        void t_FieldBracketingNthOrderBrentSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBracketingNthOrderBrentSolver), "class_", make_descriptor(FieldBracketingNthOrderBrentSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBracketingNthOrderBrentSolver), "wrapfn_", make_descriptor(t_FieldBracketingNthOrderBrentSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBracketingNthOrderBrentSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldBracketingNthOrderBrentSolver::initializeClass, 1)))
            return NULL;
          return t_FieldBracketingNthOrderBrentSolver::wrap_Object(FieldBracketingNthOrderBrentSolver(((t_FieldBracketingNthOrderBrentSolver *) arg)->object.this$));
        }
        static PyObject *t_FieldBracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldBracketingNthOrderBrentSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_of_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldBracketingNthOrderBrentSolver_init_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          jint a3;
          FieldBracketingNthOrderBrentSolver object((jobject) NULL);

          if (!parseArgs(args, "KKKI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
          {
            INT_CALL(object = FieldBracketingNthOrderBrentSolver(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getAbsoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getEvaluations(t_FieldBracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getFunctionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaxEvaluations(t_FieldBracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaximalOrder(t_FieldBracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getRelativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_solve(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_solveInterval(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval result((jobject) NULL);

          if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
            return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__parameters_(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__absoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__evaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__functionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maxEvaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maximalOrder(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__relativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalGradientConverter.h"
#include "java/util/List.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonAbstractAnalyticalGradientConverter::class$ = NULL;
        jmethodID *PythonAbstractAnalyticalGradientConverter::mids$ = NULL;
        bool PythonAbstractAnalyticalGradientConverter::live$ = false;

        jclass PythonAbstractAnalyticalGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonAbstractAnalyticalGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_29f61eb85403b118] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/AbstractAnalyticalPropagator;DI)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getPropagator_bfdeffa87b393212] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractAnalyticalGradientConverter::PythonAbstractAnalyticalGradientConverter(const ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator & a0, jdouble a1, jint a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter(env->newObject(initializeClass, &mids$, mid_init$_29f61eb85403b118, a0.this$, a1, a2)) {}

        void PythonAbstractAnalyticalGradientConverter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAbstractAnalyticalGradientConverter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAbstractAnalyticalGradientConverter::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace analytical {
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractAnalyticalGradientConverter_init_(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_finalize(t_PythonAbstractAnalyticalGradientConverter *self);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_pythonExtension(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getPropagator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAbstractAnalyticalGradientConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_get__self(t_PythonAbstractAnalyticalGradientConverter *self, void *data);
        static PyGetSetDef t_PythonAbstractAnalyticalGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractAnalyticalGradientConverter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractAnalyticalGradientConverter__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAnalyticalGradientConverter)[] = {
          { Py_tp_methods, t_PythonAbstractAnalyticalGradientConverter__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractAnalyticalGradientConverter_init_ },
          { Py_tp_getset, t_PythonAbstractAnalyticalGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractAnalyticalGradientConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter),
          NULL
        };

        DEFINE_TYPE(PythonAbstractAnalyticalGradientConverter, t_PythonAbstractAnalyticalGradientConverter, PythonAbstractAnalyticalGradientConverter);

        void t_PythonAbstractAnalyticalGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractAnalyticalGradientConverter), &PY_TYPE_DEF(PythonAbstractAnalyticalGradientConverter), module, "PythonAbstractAnalyticalGradientConverter", 1);
        }

        void t_PythonAbstractAnalyticalGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalGradientConverter), "class_", make_descriptor(PythonAbstractAnalyticalGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalGradientConverter), "wrapfn_", make_descriptor(t_PythonAbstractAnalyticalGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalGradientConverter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractAnalyticalGradientConverter::initializeClass);
          JNINativeMethod methods[] = {
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractAnalyticalGradientConverter_getParametersDrivers0 },
            { "getPropagator", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;", (void *) t_PythonAbstractAnalyticalGradientConverter_getPropagator1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractAnalyticalGradientConverter_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractAnalyticalGradientConverter::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractAnalyticalGradientConverter::wrap_Object(PythonAbstractAnalyticalGradientConverter(((t_PythonAbstractAnalyticalGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractAnalyticalGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractAnalyticalGradientConverter_init_(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator a0((jobject) NULL);
          jdouble a1;
          jint a2;
          PythonAbstractAnalyticalGradientConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PythonAbstractAnalyticalGradientConverter(a0, a1, a2));
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

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_finalize(t_PythonAbstractAnalyticalGradientConverter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_pythonExtension(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_492808a339bfa35f]);
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

        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getPropagator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "getPropagator", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator::initializeClass, &value))
          {
            throwTypeError("getPropagator", result);
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

        static void JNICALL t_PythonAbstractAnalyticalGradientConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_get__self(t_PythonAbstractAnalyticalGradientConverter *self, void *data)
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
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile$STKEphemeris::class$ = NULL;
        jmethodID *STKEphemerisFile$STKEphemeris::mids$ = NULL;
        bool STKEphemerisFile$STKEphemeris::live$ = false;

        jclass STKEphemerisFile$STKEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile$STKEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_659ce81fb27f7feb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLjava/util/List;)V");
            mids$[mid_getId_11b109bd155ca898] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile$STKEphemeris::STKEphemerisFile$STKEphemeris(const ::java::lang::String & a0, jdouble a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_659ce81fb27f7feb, a0.this$, a1, a2.this$)) {}

        ::java::lang::String STKEphemerisFile$STKEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_11b109bd155ca898]));
        }

        jdouble STKEphemerisFile$STKEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        ::java::util::List STKEphemerisFile$STKEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_2afa36052df4765d]));
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
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
        static PyObject *t_STKEphemerisFile$STKEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFile$STKEphemeris_init_(t_STKEphemerisFile$STKEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getId(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getMu(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getSegments(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getStart(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getStop(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__id(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__mu(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__segments(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__start(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__stop(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyGetSetDef t_STKEphemerisFile$STKEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, id),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, mu),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, segments),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, start),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile$STKEphemeris__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile$STKEphemeris)[] = {
          { Py_tp_methods, t_STKEphemerisFile$STKEphemeris__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFile$STKEphemeris_init_ },
          { Py_tp_getset, t_STKEphemerisFile$STKEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile$STKEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile$STKEphemeris, t_STKEphemerisFile$STKEphemeris, STKEphemerisFile$STKEphemeris);

        void t_STKEphemerisFile$STKEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile$STKEphemeris), &PY_TYPE_DEF(STKEphemerisFile$STKEphemeris), module, "STKEphemerisFile$STKEphemeris", 0);
        }

        void t_STKEphemerisFile$STKEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemeris), "class_", make_descriptor(STKEphemerisFile$STKEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemeris), "wrapfn_", make_descriptor(t_STKEphemerisFile$STKEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile$STKEphemeris::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile$STKEphemeris::wrap_Object(STKEphemerisFile$STKEphemeris(((t_STKEphemerisFile$STKEphemeris *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile$STKEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile$STKEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFile$STKEphemeris_init_(t_STKEphemerisFile$STKEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::java::util::List a2((jobject) NULL);
          PyTypeObject **p2;
          STKEphemerisFile$STKEphemeris object((jobject) NULL);

          if (!parseArgs(args, "sDK", ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = STKEphemerisFile$STKEphemeris(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getId(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getMu(t_STKEphemerisFile$STKEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getSegments(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::stk::PY_TYPE(STKEphemerisFile$STKEphemerisSegment));
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getStart(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getStop(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__id(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__mu(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__segments(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__start(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__stop(t_STKEphemerisFile$STKEphemeris *self, void *data)
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
#include "org/orekit/gnss/attitude/Galileo.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *Galileo::class$ = NULL;
        jmethodID *Galileo::mids$ = NULL;
        bool Galileo::live$ = false;
        jdouble Galileo::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass Galileo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/Galileo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ffdc3ec10e7d4912] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_64e3133ed57cb807] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_dbb16eda5c9f6b1d] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Galileo::Galileo(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_ffdc3ec10e7d4912, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
      namespace attitude {
        static PyObject *t_Galileo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Galileo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Galileo_init_(t_Galileo *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_Galileo__methods_[] = {
          DECLARE_METHOD(t_Galileo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Galileo, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Galileo)[] = {
          { Py_tp_methods, t_Galileo__methods_ },
          { Py_tp_init, (void *) t_Galileo_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Galileo)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(Galileo, t_Galileo, Galileo);

        void t_Galileo::install(PyObject *module)
        {
          installType(&PY_TYPE(Galileo), &PY_TYPE_DEF(Galileo), module, "Galileo", 0);
        }

        void t_Galileo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "class_", make_descriptor(Galileo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "wrapfn_", make_descriptor(t_Galileo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "boxfn_", make_descriptor(boxObject));
          env->getClass(Galileo::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "DEFAULT_YAW_RATE", make_descriptor(Galileo::DEFAULT_YAW_RATE));
        }

        static PyObject *t_Galileo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Galileo::initializeClass, 1)))
            return NULL;
          return t_Galileo::wrap_Object(Galileo(((t_Galileo *) arg)->object.this$));
        }
        static PyObject *t_Galileo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Galileo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Galileo_init_(t_Galileo *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          ::org::orekit::frames::Frame a4((jobject) NULL);
          Galileo object((jobject) NULL);

          if (!parseArgs(args, "Dkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Galileo(a0, a1, a2, a3, a4));
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
#include "org/orekit/time/TCBScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TCBScale::class$ = NULL;
      jmethodID *TCBScale::mids$ = NULL;
      bool TCBScale::live$ = false;

      jclass TCBScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TCBScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TCBScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jdouble TCBScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TCBScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      ::java::lang::String TCBScale::toString() const
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
      static PyObject *t_TCBScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCBScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCBScale_getName(t_TCBScale *self);
      static PyObject *t_TCBScale_offsetFromTAI(t_TCBScale *self, PyObject *args);
      static PyObject *t_TCBScale_toString(t_TCBScale *self, PyObject *args);
      static PyObject *t_TCBScale_get__name(t_TCBScale *self, void *data);
      static PyGetSetDef t_TCBScale__fields_[] = {
        DECLARE_GET_FIELD(t_TCBScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TCBScale__methods_[] = {
        DECLARE_METHOD(t_TCBScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCBScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCBScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TCBScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TCBScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TCBScale)[] = {
        { Py_tp_methods, t_TCBScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TCBScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TCBScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TCBScale, t_TCBScale, TCBScale);

      void t_TCBScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TCBScale), &PY_TYPE_DEF(TCBScale), module, "TCBScale", 0);
      }

      void t_TCBScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCBScale), "class_", make_descriptor(TCBScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCBScale), "wrapfn_", make_descriptor(t_TCBScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCBScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TCBScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TCBScale::initializeClass, 1)))
          return NULL;
        return t_TCBScale::wrap_Object(TCBScale(((t_TCBScale *) arg)->object.this$));
      }
      static PyObject *t_TCBScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TCBScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TCBScale_getName(t_TCBScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TCBScale_offsetFromTAI(t_TCBScale *self, PyObject *args)
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

      static PyObject *t_TCBScale_toString(t_TCBScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TCBScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TCBScale_get__name(t_TCBScale *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/LinearInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *LinearInterpolator::class$ = NULL;
        jmethodID *LinearInterpolator::mids$ = NULL;
        bool LinearInterpolator::live$ = false;

        jclass LinearInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/LinearInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_3eacf1659c4c06b1] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_interpolate_84261a97b5ff9d54] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearInterpolator::LinearInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction LinearInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_3eacf1659c4c06b1], a0.this$, a1.this$));
        }

        ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction LinearInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_84261a97b5ff9d54], a0.this$, a1.this$));
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
        static PyObject *t_LinearInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearInterpolator_init_(t_LinearInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearInterpolator_interpolate(t_LinearInterpolator *self, PyObject *args);

        static PyMethodDef t_LinearInterpolator__methods_[] = {
          DECLARE_METHOD(t_LinearInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearInterpolator)[] = {
          { Py_tp_methods, t_LinearInterpolator__methods_ },
          { Py_tp_init, (void *) t_LinearInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearInterpolator, t_LinearInterpolator, LinearInterpolator);

        void t_LinearInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearInterpolator), &PY_TYPE_DEF(LinearInterpolator), module, "LinearInterpolator", 0);
        }

        void t_LinearInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearInterpolator), "class_", make_descriptor(LinearInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearInterpolator), "wrapfn_", make_descriptor(t_LinearInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearInterpolator::initializeClass, 1)))
            return NULL;
          return t_LinearInterpolator::wrap_Object(LinearInterpolator(((t_LinearInterpolator *) arg)->object.this$));
        }
        static PyObject *t_LinearInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearInterpolator_init_(t_LinearInterpolator *self, PyObject *args, PyObject *kwds)
        {
          LinearInterpolator object((jobject) NULL);

          INT_CALL(object = LinearInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_LinearInterpolator_interpolate(t_LinearInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_FieldPolynomialSplineFunction::wrap_Object(result);
              }
            }
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
#include "org/orekit/estimation/measurements/gnss/PythonAmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAmbiguityAcceptance::class$ = NULL;
          jmethodID *PythonAmbiguityAcceptance::mids$ = NULL;
          bool PythonAmbiguityAcceptance::live$ = false;

          jclass PythonAmbiguityAcceptance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAmbiguityAcceptance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_accept_9b257df6a366a6ba] = env->getMethodID(cls, "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_numberOfCandidates_570ce0828f81a2c1] = env->getMethodID(cls, "numberOfCandidates", "()I");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAmbiguityAcceptance::PythonAmbiguityAcceptance() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonAmbiguityAcceptance::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonAmbiguityAcceptance::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonAmbiguityAcceptance::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PythonAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAmbiguityAcceptance_init_(t_PythonAmbiguityAcceptance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAmbiguityAcceptance_finalize(t_PythonAmbiguityAcceptance *self);
          static PyObject *t_PythonAmbiguityAcceptance_pythonExtension(t_PythonAmbiguityAcceptance *self, PyObject *args);
          static jobject JNICALL t_PythonAmbiguityAcceptance_accept0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jint JNICALL t_PythonAmbiguityAcceptance_numberOfCandidates1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAmbiguityAcceptance_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAmbiguityAcceptance_get__self(t_PythonAmbiguityAcceptance *self, void *data);
          static PyGetSetDef t_PythonAmbiguityAcceptance__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAmbiguityAcceptance, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAmbiguityAcceptance__methods_[] = {
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAmbiguityAcceptance)[] = {
            { Py_tp_methods, t_PythonAmbiguityAcceptance__methods_ },
            { Py_tp_init, (void *) t_PythonAmbiguityAcceptance_init_ },
            { Py_tp_getset, t_PythonAmbiguityAcceptance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAmbiguityAcceptance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonAmbiguityAcceptance, t_PythonAmbiguityAcceptance, PythonAmbiguityAcceptance);

          void t_PythonAmbiguityAcceptance::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAmbiguityAcceptance), &PY_TYPE_DEF(PythonAmbiguityAcceptance), module, "PythonAmbiguityAcceptance", 1);
          }

          void t_PythonAmbiguityAcceptance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAmbiguityAcceptance), "class_", make_descriptor(PythonAmbiguityAcceptance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAmbiguityAcceptance), "wrapfn_", make_descriptor(t_PythonAmbiguityAcceptance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAmbiguityAcceptance), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAmbiguityAcceptance::initializeClass);
            JNINativeMethod methods[] = {
              { "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;", (void *) t_PythonAmbiguityAcceptance_accept0 },
              { "numberOfCandidates", "()I", (void *) t_PythonAmbiguityAcceptance_numberOfCandidates1 },
              { "pythonDecRef", "()V", (void *) t_PythonAmbiguityAcceptance_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAmbiguityAcceptance::initializeClass, 1)))
              return NULL;
            return t_PythonAmbiguityAcceptance::wrap_Object(PythonAmbiguityAcceptance(((t_PythonAmbiguityAcceptance *) arg)->object.this$));
          }
          static PyObject *t_PythonAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAmbiguityAcceptance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAmbiguityAcceptance_init_(t_PythonAmbiguityAcceptance *self, PyObject *args, PyObject *kwds)
          {
            PythonAmbiguityAcceptance object((jobject) NULL);

            INT_CALL(object = PythonAmbiguityAcceptance());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAmbiguityAcceptance_finalize(t_PythonAmbiguityAcceptance *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAmbiguityAcceptance_pythonExtension(t_PythonAmbiguityAcceptance *self, PyObject *args)
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

          static jobject JNICALL t_PythonAmbiguityAcceptance_accept0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution value((jobject) NULL);
            PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "accept", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &value))
            {
              throwTypeError("accept", result);
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

          static jint JNICALL t_PythonAmbiguityAcceptance_numberOfCandidates1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "numberOfCandidates", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("numberOfCandidates", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static void JNICALL t_PythonAmbiguityAcceptance_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAmbiguityAcceptance_get__self(t_PythonAmbiguityAcceptance *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmQuaternionKey::class$ = NULL;
              jmethodID *ApmQuaternionKey::mids$ = NULL;
              bool ApmQuaternionKey::live$ = false;
              ApmQuaternionKey *ApmQuaternionKey::COMMENT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::EPOCH = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q1 = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q1_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q2 = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q2_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q3 = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q3_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::QC = NULL;
              ApmQuaternionKey *ApmQuaternionKey::QC_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q_DIR = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q_FRAME_A = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q_FRAME_B = NULL;
              ApmQuaternionKey *ApmQuaternionKey::REF_FRAME_A = NULL;
              ApmQuaternionKey *ApmQuaternionKey::REF_FRAME_B = NULL;
              ApmQuaternionKey *ApmQuaternionKey::quaternion = NULL;
              ApmQuaternionKey *ApmQuaternionKey::quaternionDot = NULL;
              ApmQuaternionKey *ApmQuaternionKey::quaternionRate = NULL;

              jclass ApmQuaternionKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_7f37563f0ff7ce16] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer;)Z");
                  mids$[mid_valueOf_1c0143591c9009d3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;");
                  mids$[mid_values_3a50282c288fb5d2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new ApmQuaternionKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  EPOCH = new ApmQuaternionKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q1 = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q1", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q1_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q1_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q2 = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q2", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q2_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q2_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q3 = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q3", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q3_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q3_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  QC = new ApmQuaternionKey(env->getStaticObjectField(cls, "QC", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  QC_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "QC_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q_DIR = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q_DIR", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q_FRAME_A = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q_FRAME_B = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  REF_FRAME_A = new ApmQuaternionKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  REF_FRAME_B = new ApmQuaternionKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  quaternion = new ApmQuaternionKey(env->getStaticObjectField(cls, "quaternion", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  quaternionDot = new ApmQuaternionKey(env->getStaticObjectField(cls, "quaternionDot", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  quaternionRate = new ApmQuaternionKey(env->getStaticObjectField(cls, "quaternionRate", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean ApmQuaternionKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer & a3) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_7f37563f0ff7ce16], a0.this$, a1.this$, a2.this$, a3.this$);
              }

              ApmQuaternionKey ApmQuaternionKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ApmQuaternionKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1c0143591c9009d3], a0.this$));
              }

              JArray< ApmQuaternionKey > ApmQuaternionKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ApmQuaternionKey >(env->callStaticObjectMethod(cls, mids$[mid_values_3a50282c288fb5d2]));
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
              static PyObject *t_ApmQuaternionKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmQuaternionKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmQuaternionKey_of_(t_ApmQuaternionKey *self, PyObject *args);
              static PyObject *t_ApmQuaternionKey_process(t_ApmQuaternionKey *self, PyObject *args);
              static PyObject *t_ApmQuaternionKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ApmQuaternionKey_values(PyTypeObject *type);
              static PyObject *t_ApmQuaternionKey_get__parameters_(t_ApmQuaternionKey *self, void *data);
              static PyGetSetDef t_ApmQuaternionKey__fields_[] = {
                DECLARE_GET_FIELD(t_ApmQuaternionKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmQuaternionKey__methods_[] = {
                DECLARE_METHOD(t_ApmQuaternionKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternionKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternionKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternionKey, process, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternionKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternionKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmQuaternionKey)[] = {
                { Py_tp_methods, t_ApmQuaternionKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ApmQuaternionKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmQuaternionKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ApmQuaternionKey, t_ApmQuaternionKey, ApmQuaternionKey);
              PyObject *t_ApmQuaternionKey::wrap_Object(const ApmQuaternionKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ApmQuaternionKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmQuaternionKey *self = (t_ApmQuaternionKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ApmQuaternionKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ApmQuaternionKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmQuaternionKey *self = (t_ApmQuaternionKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ApmQuaternionKey::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmQuaternionKey), &PY_TYPE_DEF(ApmQuaternionKey), module, "ApmQuaternionKey", 0);
              }

              void t_ApmQuaternionKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "class_", make_descriptor(ApmQuaternionKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "wrapfn_", make_descriptor(t_ApmQuaternionKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(ApmQuaternionKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "COMMENT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "EPOCH", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q1", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q1_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q1_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q2", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q2_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q2_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q3", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q3_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q3_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "QC", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::QC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "QC_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::QC_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q_DIR", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q_FRAME_A", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q_FRAME_B", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "REF_FRAME_A", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "REF_FRAME_B", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "quaternion", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::quaternion)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "quaternionDot", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::quaternionDot)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "quaternionRate", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::quaternionRate)));
              }

              static PyObject *t_ApmQuaternionKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmQuaternionKey::initializeClass, 1)))
                  return NULL;
                return t_ApmQuaternionKey::wrap_Object(ApmQuaternionKey(((t_ApmQuaternionKey *) arg)->object.this$));
              }
              static PyObject *t_ApmQuaternionKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmQuaternionKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ApmQuaternionKey_of_(t_ApmQuaternionKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ApmQuaternionKey_process(t_ApmQuaternionKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion a2((jobject) NULL);
                ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer a3((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2, a3));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ApmQuaternionKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ApmQuaternionKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternionKey::valueOf(a0));
                  return t_ApmQuaternionKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ApmQuaternionKey_values(PyTypeObject *type)
              {
                JArray< ApmQuaternionKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternionKey::values());
                return JArray<jobject>(result.this$).wrap(t_ApmQuaternionKey::wrap_jobject);
              }
              static PyObject *t_ApmQuaternionKey_get__parameters_(t_ApmQuaternionKey *self, void *data)
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
#include "org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventsLogger$FieldLoggedEvent::class$ = NULL;
        jmethodID *FieldEventsLogger$FieldLoggedEvent::mids$ = NULL;
        bool FieldEventsLogger$FieldLoggedEvent::live$ = false;

        jclass FieldEventsLogger$FieldLoggedEvent::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEventDetector_4fe06ecc019ea51d] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_getState_02cea343d9f71933] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_isIncreasing_b108b35ef48e27bd] = env->getMethodID(cls, "isIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventsLogger$FieldLoggedEvent::getEventDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_4fe06ecc019ea51d]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldEventsLogger$FieldLoggedEvent::getState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_02cea343d9f71933]));
        }

        jboolean FieldEventsLogger$FieldLoggedEvent::isIncreasing() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isIncreasing_b108b35ef48e27bd]);
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
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_of_(t_FieldEventsLogger$FieldLoggedEvent *self, PyObject *args);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getEventDetector(t_FieldEventsLogger$FieldLoggedEvent *self);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getState(t_FieldEventsLogger$FieldLoggedEvent *self);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_isIncreasing(t_FieldEventsLogger$FieldLoggedEvent *self);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__eventDetector(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__increasing(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__state(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__parameters_(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyGetSetDef t_FieldEventsLogger$FieldLoggedEvent__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, eventDetector),
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, increasing),
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, state),
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventsLogger$FieldLoggedEvent__methods_[] = {
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, getState, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, isIncreasing, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventsLogger$FieldLoggedEvent)[] = {
          { Py_tp_methods, t_FieldEventsLogger$FieldLoggedEvent__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventsLogger$FieldLoggedEvent__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventsLogger$FieldLoggedEvent)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventsLogger$FieldLoggedEvent, t_FieldEventsLogger$FieldLoggedEvent, FieldEventsLogger$FieldLoggedEvent);
        PyObject *t_FieldEventsLogger$FieldLoggedEvent::wrap_Object(const FieldEventsLogger$FieldLoggedEvent& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger$FieldLoggedEvent::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger$FieldLoggedEvent *self = (t_FieldEventsLogger$FieldLoggedEvent *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventsLogger$FieldLoggedEvent::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger$FieldLoggedEvent::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger$FieldLoggedEvent *self = (t_FieldEventsLogger$FieldLoggedEvent *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventsLogger$FieldLoggedEvent::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventsLogger$FieldLoggedEvent), &PY_TYPE_DEF(FieldEventsLogger$FieldLoggedEvent), module, "FieldEventsLogger$FieldLoggedEvent", 0);
        }

        void t_FieldEventsLogger$FieldLoggedEvent::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger$FieldLoggedEvent), "class_", make_descriptor(FieldEventsLogger$FieldLoggedEvent::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger$FieldLoggedEvent), "wrapfn_", make_descriptor(t_FieldEventsLogger$FieldLoggedEvent::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger$FieldLoggedEvent), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventsLogger$FieldLoggedEvent::initializeClass, 1)))
            return NULL;
          return t_FieldEventsLogger$FieldLoggedEvent::wrap_Object(FieldEventsLogger$FieldLoggedEvent(((t_FieldEventsLogger$FieldLoggedEvent *) arg)->object.this$));
        }
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventsLogger$FieldLoggedEvent::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_of_(t_FieldEventsLogger$FieldLoggedEvent *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getEventDetector(t_FieldEventsLogger$FieldLoggedEvent *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getState(t_FieldEventsLogger$FieldLoggedEvent *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_isIncreasing(t_FieldEventsLogger$FieldLoggedEvent *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isIncreasing());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__parameters_(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__eventDetector(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__increasing(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isIncreasing());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__state(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/JacobianPropagatorConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *JacobianPropagatorConverter::class$ = NULL;
        jmethodID *JacobianPropagatorConverter::mids$ = NULL;
        bool JacobianPropagatorConverter::live$ = false;

        jclass JacobianPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/JacobianPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d85ff7ef518673fb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/conversion/NumericalPropagatorBuilder;DI)V");
            mids$[mid_getModel_9751b2e3b68b45ea] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getObjectiveFunction_18d8e6aab2238577] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JacobianPropagatorConverter::JacobianPropagatorConverter(const ::org::orekit::propagation::conversion::NumericalPropagatorBuilder & a0, jdouble a1, jint a2) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(env->newObject(initializeClass, &mids$, mid_init$_d85ff7ef518673fb, a0.this$, a1, a2)) {}
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
        static PyObject *t_JacobianPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_JacobianPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_JacobianPropagatorConverter_init_(t_JacobianPropagatorConverter *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_JacobianPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_JacobianPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_JacobianPropagatorConverter, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(JacobianPropagatorConverter)[] = {
          { Py_tp_methods, t_JacobianPropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_JacobianPropagatorConverter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(JacobianPropagatorConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorConverter),
          NULL
        };

        DEFINE_TYPE(JacobianPropagatorConverter, t_JacobianPropagatorConverter, JacobianPropagatorConverter);

        void t_JacobianPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(JacobianPropagatorConverter), &PY_TYPE_DEF(JacobianPropagatorConverter), module, "JacobianPropagatorConverter", 0);
        }

        void t_JacobianPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianPropagatorConverter), "class_", make_descriptor(JacobianPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianPropagatorConverter), "wrapfn_", make_descriptor(t_JacobianPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianPropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_JacobianPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, JacobianPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_JacobianPropagatorConverter::wrap_Object(JacobianPropagatorConverter(((t_JacobianPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_JacobianPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, JacobianPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_JacobianPropagatorConverter_init_(t_JacobianPropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::conversion::NumericalPropagatorBuilder a0((jobject) NULL);
          jdouble a1;
          jint a2;
          JacobianPropagatorConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::conversion::NumericalPropagatorBuilder::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = JacobianPropagatorConverter(a0, a1, a2));
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
#include "org/orekit/propagation/StateCovarianceKeplerianHermiteInterpolator.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovarianceKeplerianHermiteInterpolator::class$ = NULL;
      jmethodID *StateCovarianceKeplerianHermiteInterpolator::mids$ = NULL;
      bool StateCovarianceKeplerianHermiteInterpolator::live$ = false;

      jclass StateCovarianceKeplerianHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovarianceKeplerianHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a44ffd8bb5f49e75] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_5b1ae7e6cbac560c] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_b69d69c1cc177acf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_init$_3197a714f98d582f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_b2f48658e3eb96bd] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_init$_6d7c27d7647a298a] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_616c3b4472c86982] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_init$_0c7e2c00747b2207] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_getFilter_16e9a7b5414faf2d] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_computeInterpolatedCovarianceInOrbitFrame_b3673400c0fde69a] = env->getMethodID(cls, "computeInterpolatedCovarianceInOrbitFrame", "(Ljava/util/List;Lorg/orekit/orbits/Orbit;)Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(const ::org::orekit::time::TimeInterpolator & a0, const ::org::orekit::frames::LOFType & a1) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a44ffd8bb5f49e75, a0.this$, a1.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::LOFType & a2) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_5b1ae7e6cbac560c, a0, a1.this$, a2.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(const ::org::orekit::time::TimeInterpolator & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b69d69c1cc177acf, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2, const ::org::orekit::frames::LOFType & a3) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_3197a714f98d582f, a0, a1.this$, a2.this$, a3.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b2f48658e3eb96bd, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::org::orekit::frames::LOFType & a4) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_6d7c27d7647a298a, a0, a1, a2.this$, a3.this$, a4.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::orbits::OrbitType & a4, const ::org::orekit::orbits::PositionAngleType & a5) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_616c3b4472c86982, a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::org::orekit::frames::Frame & a4, const ::org::orekit::orbits::OrbitType & a5, const ::org::orekit::orbits::PositionAngleType & a6) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0c7e2c00747b2207, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter StateCovarianceKeplerianHermiteInterpolator::getFilter() const
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
    namespace propagation {
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_of_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args);
      static int t_StateCovarianceKeplerianHermiteInterpolator_init_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_getFilter(t_StateCovarianceKeplerianHermiteInterpolator *self);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__filter(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__parameters_(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data);
      static PyGetSetDef t_StateCovarianceKeplerianHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovarianceKeplerianHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_StateCovarianceKeplerianHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovarianceKeplerianHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovarianceKeplerianHermiteInterpolator)[] = {
        { Py_tp_methods, t_StateCovarianceKeplerianHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_StateCovarianceKeplerianHermiteInterpolator_init_ },
        { Py_tp_getset, t_StateCovarianceKeplerianHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovarianceKeplerianHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractStateCovarianceInterpolator),
        NULL
      };

      DEFINE_TYPE(StateCovarianceKeplerianHermiteInterpolator, t_StateCovarianceKeplerianHermiteInterpolator, StateCovarianceKeplerianHermiteInterpolator);
      PyObject *t_StateCovarianceKeplerianHermiteInterpolator::wrap_Object(const StateCovarianceKeplerianHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceKeplerianHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceKeplerianHermiteInterpolator *self = (t_StateCovarianceKeplerianHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_StateCovarianceKeplerianHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceKeplerianHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceKeplerianHermiteInterpolator *self = (t_StateCovarianceKeplerianHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_StateCovarianceKeplerianHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), &PY_TYPE_DEF(StateCovarianceKeplerianHermiteInterpolator), module, "StateCovarianceKeplerianHermiteInterpolator", 0);
      }

      void t_StateCovarianceKeplerianHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), "class_", make_descriptor(StateCovarianceKeplerianHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), "wrapfn_", make_descriptor(t_StateCovarianceKeplerianHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovarianceKeplerianHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_StateCovarianceKeplerianHermiteInterpolator::wrap_Object(StateCovarianceKeplerianHermiteInterpolator(((t_StateCovarianceKeplerianHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovarianceKeplerianHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_of_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_StateCovarianceKeplerianHermiteInterpolator_init_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeInterpolator a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::LOFType a1((jobject) NULL);
            PyTypeObject **p1;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &p0, ::org::orekit::time::t_TimeInterpolator::parameters_, &a1, &p1, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::LOFType a2((jobject) NULL);
            PyTypeObject **p2;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::TimeInterpolator a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::orbits::OrbitType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
            PyTypeObject **p3;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::time::t_TimeInterpolator::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::LOFType a3((jobject) NULL);
            PyTypeObject **p3;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a3, &p3, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::frames::LOFType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::orbits::OrbitType a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::orbits::PositionAngleType a5((jobject) NULL);
            PyTypeObject **p5;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a3, &a4, &p4, ::org::orekit::orbits::t_OrbitType::parameters_, &a5, &p5, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::frames::Frame a4((jobject) NULL);
            ::org::orekit::orbits::OrbitType a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &a5, &p5, ::org::orekit::orbits::t_OrbitType::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_getFilter(t_StateCovarianceKeplerianHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__parameters_(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__filter(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *InterpolatingMicrosphere2D::class$ = NULL;
        jmethodID *InterpolatingMicrosphere2D::mids$ = NULL;
        bool InterpolatingMicrosphere2D::live$ = false;

        jclass InterpolatingMicrosphere2D::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2e15f46ce2042002] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_copy_faad0bc365040058] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterpolatingMicrosphere2D::InterpolatingMicrosphere2D(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere(env->newObject(initializeClass, &mids$, mid_init$_2e15f46ce2042002, a0, a1, a2, a3)) {}

        InterpolatingMicrosphere2D InterpolatingMicrosphere2D::copy() const
        {
          return InterpolatingMicrosphere2D(env->callObjectMethod(this$, mids$[mid_copy_faad0bc365040058]));
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
        static PyObject *t_InterpolatingMicrosphere2D_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterpolatingMicrosphere2D_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InterpolatingMicrosphere2D_init_(t_InterpolatingMicrosphere2D *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterpolatingMicrosphere2D_copy(t_InterpolatingMicrosphere2D *self, PyObject *args);

        static PyMethodDef t_InterpolatingMicrosphere2D__methods_[] = {
          DECLARE_METHOD(t_InterpolatingMicrosphere2D, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere2D, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere2D, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterpolatingMicrosphere2D)[] = {
          { Py_tp_methods, t_InterpolatingMicrosphere2D__methods_ },
          { Py_tp_init, (void *) t_InterpolatingMicrosphere2D_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterpolatingMicrosphere2D)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::interpolation::InterpolatingMicrosphere),
          NULL
        };

        DEFINE_TYPE(InterpolatingMicrosphere2D, t_InterpolatingMicrosphere2D, InterpolatingMicrosphere2D);

        void t_InterpolatingMicrosphere2D::install(PyObject *module)
        {
          installType(&PY_TYPE(InterpolatingMicrosphere2D), &PY_TYPE_DEF(InterpolatingMicrosphere2D), module, "InterpolatingMicrosphere2D", 0);
        }

        void t_InterpolatingMicrosphere2D::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere2D), "class_", make_descriptor(InterpolatingMicrosphere2D::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere2D), "wrapfn_", make_descriptor(t_InterpolatingMicrosphere2D::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere2D), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterpolatingMicrosphere2D_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterpolatingMicrosphere2D::initializeClass, 1)))
            return NULL;
          return t_InterpolatingMicrosphere2D::wrap_Object(InterpolatingMicrosphere2D(((t_InterpolatingMicrosphere2D *) arg)->object.this$));
        }
        static PyObject *t_InterpolatingMicrosphere2D_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterpolatingMicrosphere2D::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InterpolatingMicrosphere2D_init_(t_InterpolatingMicrosphere2D *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          InterpolatingMicrosphere2D object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = InterpolatingMicrosphere2D(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterpolatingMicrosphere2D_copy(t_InterpolatingMicrosphere2D *self, PyObject *args)
        {
          InterpolatingMicrosphere2D result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_InterpolatingMicrosphere2D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(InterpolatingMicrosphere2D), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *AccuracyProvider::class$ = NULL;
            jmethodID *AccuracyProvider::mids$ = NULL;
            bool AccuracyProvider::live$ = false;

            jclass AccuracyProvider::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/AccuracyProvider");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble AccuracyProvider::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_dff5885c2c873297]);
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
            static PyObject *t_AccuracyProvider_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AccuracyProvider_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AccuracyProvider_getAccuracy(t_AccuracyProvider *self);
            static PyObject *t_AccuracyProvider_get__accuracy(t_AccuracyProvider *self, void *data);
            static PyGetSetDef t_AccuracyProvider__fields_[] = {
              DECLARE_GET_FIELD(t_AccuracyProvider, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AccuracyProvider__methods_[] = {
              DECLARE_METHOD(t_AccuracyProvider, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AccuracyProvider, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AccuracyProvider, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AccuracyProvider)[] = {
              { Py_tp_methods, t_AccuracyProvider__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AccuracyProvider__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AccuracyProvider)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AccuracyProvider, t_AccuracyProvider, AccuracyProvider);

            void t_AccuracyProvider::install(PyObject *module)
            {
              installType(&PY_TYPE(AccuracyProvider), &PY_TYPE_DEF(AccuracyProvider), module, "AccuracyProvider", 0);
            }

            void t_AccuracyProvider::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AccuracyProvider), "class_", make_descriptor(AccuracyProvider::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AccuracyProvider), "wrapfn_", make_descriptor(t_AccuracyProvider::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AccuracyProvider), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AccuracyProvider_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AccuracyProvider::initializeClass, 1)))
                return NULL;
              return t_AccuracyProvider::wrap_Object(AccuracyProvider(((t_AccuracyProvider *) arg)->object.this$));
            }
            static PyObject *t_AccuracyProvider_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AccuracyProvider::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AccuracyProvider_getAccuracy(t_AccuracyProvider *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AccuracyProvider_get__accuracy(t_AccuracyProvider *self, void *data)
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
#include "org/orekit/gnss/antenna/OneDVariation.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *OneDVariation::class$ = NULL;
        jmethodID *OneDVariation::mids$ = NULL;
        bool OneDVariation::live$ = false;

        jclass OneDVariation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/OneDVariation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7e28ac3886d489af] = env->getMethodID(cls, "<init>", "(DD[D)V");
            mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OneDVariation::OneDVariation(jdouble a0, jdouble a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7e28ac3886d489af, a0, a1, a2.this$)) {}

        jdouble OneDVariation::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_86ffecc08a63eff0], a0, a1);
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
      namespace antenna {
        static PyObject *t_OneDVariation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OneDVariation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OneDVariation_init_(t_OneDVariation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OneDVariation_value(t_OneDVariation *self, PyObject *args);

        static PyMethodDef t_OneDVariation__methods_[] = {
          DECLARE_METHOD(t_OneDVariation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneDVariation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneDVariation, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OneDVariation)[] = {
          { Py_tp_methods, t_OneDVariation__methods_ },
          { Py_tp_init, (void *) t_OneDVariation_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OneDVariation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OneDVariation, t_OneDVariation, OneDVariation);

        void t_OneDVariation::install(PyObject *module)
        {
          installType(&PY_TYPE(OneDVariation), &PY_TYPE_DEF(OneDVariation), module, "OneDVariation", 0);
        }

        void t_OneDVariation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneDVariation), "class_", make_descriptor(OneDVariation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneDVariation), "wrapfn_", make_descriptor(t_OneDVariation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneDVariation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OneDVariation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OneDVariation::initializeClass, 1)))
            return NULL;
          return t_OneDVariation::wrap_Object(OneDVariation(((t_OneDVariation *) arg)->object.this$));
        }
        static PyObject *t_OneDVariation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OneDVariation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OneDVariation_init_(t_OneDVariation *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          JArray< jdouble > a2((jobject) NULL);
          OneDVariation object((jobject) NULL);

          if (!parseArgs(args, "DD[D", &a0, &a1, &a2))
          {
            INT_CALL(object = OneDVariation(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OneDVariation_value(t_OneDVariation *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
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
#include "org/hipparchus/ode/sampling/FieldODEFixedStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldODEFixedStepHandler::class$ = NULL;
        jmethodID *FieldODEFixedStepHandler::mids$ = NULL;
        bool FieldODEFixedStepHandler::live$ = false;

        jclass FieldODEFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldODEFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_handleStep_e3880ccdd72f7f23] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Z)V");
            mids$[mid_init_81b5dd1fb920fdc1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldODEFixedStepHandler::handleStep(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, jboolean a1) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_e3880ccdd72f7f23], a0.this$, a1);
        }

        void FieldODEFixedStepHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_81b5dd1fb920fdc1], a0.this$, a1.this$);
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
        static PyObject *t_FieldODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEFixedStepHandler_of_(t_FieldODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEFixedStepHandler_handleStep(t_FieldODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEFixedStepHandler_init(t_FieldODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEFixedStepHandler_get__parameters_(t_FieldODEFixedStepHandler *self, void *data);
        static PyGetSetDef t_FieldODEFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEFixedStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, handleStep, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEFixedStepHandler)[] = {
          { Py_tp_methods, t_FieldODEFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEFixedStepHandler, t_FieldODEFixedStepHandler, FieldODEFixedStepHandler);
        PyObject *t_FieldODEFixedStepHandler::wrap_Object(const FieldODEFixedStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEFixedStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEFixedStepHandler *self = (t_FieldODEFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEFixedStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEFixedStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEFixedStepHandler *self = (t_FieldODEFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEFixedStepHandler), &PY_TYPE_DEF(FieldODEFixedStepHandler), module, "FieldODEFixedStepHandler", 0);
        }

        void t_FieldODEFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEFixedStepHandler), "class_", make_descriptor(FieldODEFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEFixedStepHandler), "wrapfn_", make_descriptor(t_FieldODEFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEFixedStepHandler::wrap_Object(FieldODEFixedStepHandler(((t_FieldODEFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEFixedStepHandler_of_(t_FieldODEFixedStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEFixedStepHandler_handleStep(t_FieldODEFixedStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean a1;

          if (!parseArgs(args, "KZ", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1))
          {
            OBJ_CALL(self->object.handleStep(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", args);
          return NULL;
        }

        static PyObject *t_FieldODEFixedStepHandler_init(t_FieldODEFixedStepHandler *self, PyObject *args)
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
        static PyObject *t_FieldODEFixedStepHandler_get__parameters_(t_FieldODEFixedStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundReceiverCommonParametersWithoutDerivatives.h"
#include "org/orekit/frames/Transform.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
            mids$[mid_init$_e793b63d9cc45475] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/Transform;Lorg/orekit/utils/TimeStampedPVCoordinates;DLorg/orekit/propagation/SpacecraftState;Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
            mids$[mid_getOffsetToInertialDownlink_09afc11266121652] = env->getMethodID(cls, "getOffsetToInertialDownlink", "()Lorg/orekit/frames/Transform;");
            mids$[mid_getState_c6311115fea01a34] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStationDownlink_c204436deca11d94] = env->getMethodID(cls, "getStationDownlink", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getTauD_dff5885c2c873297] = env->getMethodID(cls, "getTauD", "()D");
            mids$[mid_getTransitPV_c204436deca11d94] = env->getMethodID(cls, "getTransitPV", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getTransitState_c6311115fea01a34] = env->getMethodID(cls, "getTransitState", "()Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundReceiverCommonParametersWithoutDerivatives::GroundReceiverCommonParametersWithoutDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::Transform & a1, const ::org::orekit::utils::TimeStampedPVCoordinates & a2, jdouble a3, const ::org::orekit::propagation::SpacecraftState & a4, const ::org::orekit::utils::TimeStampedPVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e793b63d9cc45475, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5.this$)) {}

        ::org::orekit::frames::Transform GroundReceiverCommonParametersWithoutDerivatives::getOffsetToInertialDownlink() const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertialDownlink_09afc11266121652]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithoutDerivatives::getState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_c6311115fea01a34]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates GroundReceiverCommonParametersWithoutDerivatives::getStationDownlink() const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getStationDownlink_c204436deca11d94]));
        }

        jdouble GroundReceiverCommonParametersWithoutDerivatives::getTauD() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTauD_dff5885c2c873297]);
        }

        ::org::orekit::utils::TimeStampedPVCoordinates GroundReceiverCommonParametersWithoutDerivatives::getTransitPV() const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTransitPV_c204436deca11d94]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithoutDerivatives::getTransitState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getTransitState_c6311115fea01a34]));
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
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_ea69641e3fe74dd6] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
          mids$[mid_create_a5c1ad0a4a768dd2] = env->getStaticMethodID(cls, "create", "(Ljava/lang/Object;Ljava/lang/Object;)Lorg/hipparchus/util/Pair;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getFirst_4d26fd885228c716] = env->getMethodID(cls, "getFirst", "()Ljava/lang/Object;");
          mids$[mid_getKey_4d26fd885228c716] = env->getMethodID(cls, "getKey", "()Ljava/lang/Object;");
          mids$[mid_getSecond_4d26fd885228c716] = env->getMethodID(cls, "getSecond", "()Ljava/lang/Object;");
          mids$[mid_getValue_4d26fd885228c716] = env->getMethodID(cls, "getValue", "()Ljava/lang/Object;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Pair::Pair(const ::java::lang::Object & a0, const ::java::lang::Object & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ea69641e3fe74dd6, a0.this$, a1.this$)) {}

      Pair Pair::create(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Pair(env->callStaticObjectMethod(cls, mids$[mid_create_a5c1ad0a4a768dd2], a0.this$, a1.this$));
      }

      jboolean Pair::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      ::java::lang::Object Pair::getFirst() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getFirst_4d26fd885228c716]));
      }

      ::java::lang::Object Pair::getKey() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getKey_4d26fd885228c716]));
      }

      ::java::lang::Object Pair::getSecond() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getSecond_4d26fd885228c716]));
      }

      ::java::lang::Object Pair::getValue() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getValue_4d26fd885228c716]));
      }

      jint Pair::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      ::java::lang::String Pair::toString() const
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
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Euclidean1D$NoSubSpaceException::class$ = NULL;
          jmethodID *Euclidean1D$NoSubSpaceException::mids$ = NULL;
          bool Euclidean1D$NoSubSpaceException::live$ = false;

          jclass Euclidean1D$NoSubSpaceException::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Euclidean1D$NoSubSpaceException::Euclidean1D$NoSubSpaceException() : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
          static PyObject *t_Euclidean1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Euclidean1D$NoSubSpaceException_init_(t_Euclidean1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_Euclidean1D$NoSubSpaceException__methods_[] = {
            DECLARE_METHOD(t_Euclidean1D$NoSubSpaceException, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D$NoSubSpaceException, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean1D$NoSubSpaceException)[] = {
            { Py_tp_methods, t_Euclidean1D$NoSubSpaceException__methods_ },
            { Py_tp_init, (void *) t_Euclidean1D$NoSubSpaceException_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean1D$NoSubSpaceException)[] = {
            &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
            NULL
          };

          DEFINE_TYPE(Euclidean1D$NoSubSpaceException, t_Euclidean1D$NoSubSpaceException, Euclidean1D$NoSubSpaceException);

          void t_Euclidean1D$NoSubSpaceException::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean1D$NoSubSpaceException), &PY_TYPE_DEF(Euclidean1D$NoSubSpaceException), module, "Euclidean1D$NoSubSpaceException", 0);
          }

          void t_Euclidean1D$NoSubSpaceException::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D$NoSubSpaceException), "class_", make_descriptor(Euclidean1D$NoSubSpaceException::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D$NoSubSpaceException), "wrapfn_", make_descriptor(t_Euclidean1D$NoSubSpaceException::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D$NoSubSpaceException), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean1D$NoSubSpaceException::initializeClass, 1)))
              return NULL;
            return t_Euclidean1D$NoSubSpaceException::wrap_Object(Euclidean1D$NoSubSpaceException(((t_Euclidean1D$NoSubSpaceException *) arg)->object.this$));
          }
          static PyObject *t_Euclidean1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean1D$NoSubSpaceException::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Euclidean1D$NoSubSpaceException_init_(t_Euclidean1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds)
          {
            Euclidean1D$NoSubSpaceException object((jobject) NULL);

            INT_CALL(object = Euclidean1D$NoSubSpaceException());
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
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitEphemerisFile$OrekitEphemerisSegment::class$ = NULL;
        jmethodID *OrekitEphemerisFile$OrekitEphemerisSegment::mids$ = NULL;
        bool OrekitEphemerisFile$OrekitEphemerisSegment::live$ = false;

        jclass OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_586a31fa94512a39] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/frames/Frame;DI)V");
            mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_2afa36052df4765d] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInertialFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitEphemerisFile$OrekitEphemerisSegment::OrekitEphemerisFile$OrekitEphemerisSegment(const ::java::util::List & a0, const ::org::orekit::frames::Frame & a1, jdouble a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_586a31fa94512a39, a0.this$, a1.this$, a2, a3)) {}

        ::org::orekit::utils::CartesianDerivativesFilter OrekitEphemerisFile$OrekitEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d]));
        }

        ::java::util::List OrekitEphemerisFile$OrekitEphemerisSegment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_2afa36052df4765d]));
        }

        ::org::orekit::frames::Frame OrekitEphemerisFile$OrekitEphemerisSegment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
        }

        ::org::orekit::frames::Frame OrekitEphemerisFile$OrekitEphemerisSegment::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_b86f9f61d97a7244]));
        }

        jint OrekitEphemerisFile$OrekitEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_570ce0828f81a2c1]);
        }

        jdouble OrekitEphemerisFile$OrekitEphemerisSegment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitEphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
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
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitEphemerisFile$OrekitEphemerisSegment_init_(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getAvailableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getCoordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInterpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getMu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStart(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__availableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__coordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__frame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__inertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__interpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__mu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__start(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__stop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data);
        static PyGetSetDef t_OrekitEphemerisFile$OrekitEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, coordinates),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, frame),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, inertialFrame),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, mu),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, start),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitEphemerisSegment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitEphemerisFile$OrekitEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitEphemerisFile$OrekitEphemerisSegment)[] = {
          { Py_tp_methods, t_OrekitEphemerisFile$OrekitEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_OrekitEphemerisFile$OrekitEphemerisSegment_init_ },
          { Py_tp_getset, t_OrekitEphemerisFile$OrekitEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitEphemerisFile$OrekitEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment, t_OrekitEphemerisFile$OrekitEphemerisSegment, OrekitEphemerisFile$OrekitEphemerisSegment);

        void t_OrekitEphemerisFile$OrekitEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), &PY_TYPE_DEF(OrekitEphemerisFile$OrekitEphemerisSegment), module, "OrekitEphemerisFile$OrekitEphemerisSegment", 0);
        }

        void t_OrekitEphemerisFile$OrekitEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), "class_", make_descriptor(OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), "wrapfn_", make_descriptor(t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(OrekitEphemerisFile$OrekitEphemerisSegment(((t_OrekitEphemerisFile$OrekitEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitEphemerisFile$OrekitEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitEphemerisFile$OrekitEphemerisSegment_init_(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          jdouble a2;
          jint a3;
          OrekitEphemerisFile$OrekitEphemerisSegment object((jobject) NULL);

          if (!parseArgs(args, "KkDI", ::java::util::List::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3))
          {
            INT_CALL(object = OrekitEphemerisFile$OrekitEphemerisSegment(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getAvailableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getCoordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getInterpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getMu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStart(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_getStop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__availableDerivatives(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__coordinates(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__frame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__inertialFrame(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__interpolationSamples(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__mu(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__start(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitEphemerisSegment_get__stop(t_OrekitEphemerisFile$OrekitEphemerisSegment *self, void *data)
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
#include "org/orekit/propagation/conversion/AdamsBashforthIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AdamsBashforthIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsBashforthIntegratorBuilder::mids$ = NULL;
        bool AdamsBashforthIntegratorBuilder::live$ = false;

        jclass AdamsBashforthIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsBashforthIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2e15f46ce2042002] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_65049cf04139ef04] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthIntegratorBuilder::AdamsBashforthIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2e15f46ce2042002, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractIntegrator AdamsBashforthIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_65049cf04139ef04], a0.this$, a1.this$));
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
        static PyObject *t_AdamsBashforthIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsBashforthIntegratorBuilder_init_(t_AdamsBashforthIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsBashforthIntegratorBuilder_buildIntegrator(t_AdamsBashforthIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_AdamsBashforthIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsBashforthIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthIntegratorBuilder, t_AdamsBashforthIntegratorBuilder, AdamsBashforthIntegratorBuilder);

        void t_AdamsBashforthIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthIntegratorBuilder), &PY_TYPE_DEF(AdamsBashforthIntegratorBuilder), module, "AdamsBashforthIntegratorBuilder", 0);
        }

        void t_AdamsBashforthIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegratorBuilder), "class_", make_descriptor(AdamsBashforthIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsBashforthIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthIntegratorBuilder::wrap_Object(AdamsBashforthIntegratorBuilder(((t_AdamsBashforthIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsBashforthIntegratorBuilder_init_(t_AdamsBashforthIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsBashforthIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsBashforthIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsBashforthIntegratorBuilder_buildIntegrator(t_AdamsBashforthIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *SpacecraftBodyFrame::class$ = NULL;
          jmethodID *SpacecraftBodyFrame::mids$ = NULL;
          bool SpacecraftBodyFrame::live$ = false;

          jclass SpacecraftBodyFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/SpacecraftBodyFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bb8382b31d31cc2d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;Ljava/lang/String;)V");
              mids$[mid_getBaseEquipment_69047e61c289d777] = env->getMethodID(cls, "getBaseEquipment", "()Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;");
              mids$[mid_getLabel_11b109bd155ca898] = env->getMethodID(cls, "getLabel", "()Ljava/lang/String;");
              mids$[mid_parse_6f7b89a4206c1930] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;");
              mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SpacecraftBodyFrame::SpacecraftBodyFrame(const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb8382b31d31cc2d, a0.this$, a1.this$)) {}

          ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment SpacecraftBodyFrame::getBaseEquipment() const
          {
            return ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment(env->callObjectMethod(this$, mids$[mid_getBaseEquipment_69047e61c289d777]));
          }

          ::java::lang::String SpacecraftBodyFrame::getLabel() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLabel_11b109bd155ca898]));
          }

          SpacecraftBodyFrame SpacecraftBodyFrame::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SpacecraftBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_parse_6f7b89a4206c1930], a0.this$));
          }

          ::java::lang::String SpacecraftBodyFrame::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
          static PyObject *t_SpacecraftBodyFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SpacecraftBodyFrame_init_(t_SpacecraftBodyFrame *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SpacecraftBodyFrame_getBaseEquipment(t_SpacecraftBodyFrame *self);
          static PyObject *t_SpacecraftBodyFrame_getLabel(t_SpacecraftBodyFrame *self);
          static PyObject *t_SpacecraftBodyFrame_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame_toString(t_SpacecraftBodyFrame *self, PyObject *args);
          static PyObject *t_SpacecraftBodyFrame_get__baseEquipment(t_SpacecraftBodyFrame *self, void *data);
          static PyObject *t_SpacecraftBodyFrame_get__label(t_SpacecraftBodyFrame *self, void *data);
          static PyGetSetDef t_SpacecraftBodyFrame__fields_[] = {
            DECLARE_GET_FIELD(t_SpacecraftBodyFrame, baseEquipment),
            DECLARE_GET_FIELD(t_SpacecraftBodyFrame, label),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SpacecraftBodyFrame__methods_[] = {
            DECLARE_METHOD(t_SpacecraftBodyFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, getBaseEquipment, METH_NOARGS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, getLabel, METH_NOARGS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, parse, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SpacecraftBodyFrame)[] = {
            { Py_tp_methods, t_SpacecraftBodyFrame__methods_ },
            { Py_tp_init, (void *) t_SpacecraftBodyFrame_init_ },
            { Py_tp_getset, t_SpacecraftBodyFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SpacecraftBodyFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SpacecraftBodyFrame, t_SpacecraftBodyFrame, SpacecraftBodyFrame);

          void t_SpacecraftBodyFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(SpacecraftBodyFrame), &PY_TYPE_DEF(SpacecraftBodyFrame), module, "SpacecraftBodyFrame", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "BaseEquipment", make_descriptor(&PY_TYPE_DEF(SpacecraftBodyFrame$BaseEquipment)));
          }

          void t_SpacecraftBodyFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "class_", make_descriptor(SpacecraftBodyFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "wrapfn_", make_descriptor(t_SpacecraftBodyFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SpacecraftBodyFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SpacecraftBodyFrame::initializeClass, 1)))
              return NULL;
            return t_SpacecraftBodyFrame::wrap_Object(SpacecraftBodyFrame(((t_SpacecraftBodyFrame *) arg)->object.this$));
          }
          static PyObject *t_SpacecraftBodyFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SpacecraftBodyFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SpacecraftBodyFrame_init_(t_SpacecraftBodyFrame *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::String a1((jobject) NULL);
            SpacecraftBodyFrame object((jobject) NULL);

            if (!parseArgs(args, "Ks", ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame$BaseEquipment::parameters_, &a1))
            {
              INT_CALL(object = SpacecraftBodyFrame(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SpacecraftBodyFrame_getBaseEquipment(t_SpacecraftBodyFrame *self)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment result((jobject) NULL);
            OBJ_CALL(result = self->object.getBaseEquipment());
            return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(result);
          }

          static PyObject *t_SpacecraftBodyFrame_getLabel(t_SpacecraftBodyFrame *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLabel());
            return j2p(result);
          }

          static PyObject *t_SpacecraftBodyFrame_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            SpacecraftBodyFrame result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::parse(a0));
              return t_SpacecraftBodyFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_SpacecraftBodyFrame_toString(t_SpacecraftBodyFrame *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(SpacecraftBodyFrame), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_SpacecraftBodyFrame_get__baseEquipment(t_SpacecraftBodyFrame *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment value((jobject) NULL);
            OBJ_CALL(value = self->object.getBaseEquipment());
            return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(value);
          }

          static PyObject *t_SpacecraftBodyFrame_get__label(t_SpacecraftBodyFrame *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLabel());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Euclidean1D::class$ = NULL;
          jmethodID *Euclidean1D::mids$ = NULL;
          bool Euclidean1D::live$ = false;

          jclass Euclidean1D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Euclidean1D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_dc026f3a7e9402dd] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/euclidean/oned/Euclidean1D;");
              mids$[mid_getSubSpace_ebbd6b2d39ab0e4f] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/Space;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint Euclidean1D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
          }

          Euclidean1D Euclidean1D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Euclidean1D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_dc026f3a7e9402dd]));
          }

          ::org::hipparchus::geometry::Space Euclidean1D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSubSpace_ebbd6b2d39ab0e4f]));
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
          static PyObject *t_Euclidean1D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean1D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean1D_getDimension(t_Euclidean1D *self);
          static PyObject *t_Euclidean1D_getInstance(PyTypeObject *type);
          static PyObject *t_Euclidean1D_getSubSpace(t_Euclidean1D *self);
          static PyObject *t_Euclidean1D_get__dimension(t_Euclidean1D *self, void *data);
          static PyObject *t_Euclidean1D_get__instance(t_Euclidean1D *self, void *data);
          static PyObject *t_Euclidean1D_get__subSpace(t_Euclidean1D *self, void *data);
          static PyGetSetDef t_Euclidean1D__fields_[] = {
            DECLARE_GET_FIELD(t_Euclidean1D, dimension),
            DECLARE_GET_FIELD(t_Euclidean1D, instance),
            DECLARE_GET_FIELD(t_Euclidean1D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Euclidean1D__methods_[] = {
            DECLARE_METHOD(t_Euclidean1D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Euclidean1D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean1D)[] = {
            { Py_tp_methods, t_Euclidean1D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Euclidean1D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean1D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Euclidean1D, t_Euclidean1D, Euclidean1D);

          void t_Euclidean1D::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean1D), &PY_TYPE_DEF(Euclidean1D), module, "Euclidean1D", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "NoSubSpaceException", make_descriptor(&PY_TYPE_DEF(Euclidean1D$NoSubSpaceException)));
          }

          void t_Euclidean1D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "class_", make_descriptor(Euclidean1D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "wrapfn_", make_descriptor(t_Euclidean1D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean1D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean1D::initializeClass, 1)))
              return NULL;
            return t_Euclidean1D::wrap_Object(Euclidean1D(((t_Euclidean1D *) arg)->object.this$));
          }
          static PyObject *t_Euclidean1D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean1D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Euclidean1D_getDimension(t_Euclidean1D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Euclidean1D_getInstance(PyTypeObject *type)
          {
            Euclidean1D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Euclidean1D::getInstance());
            return t_Euclidean1D::wrap_Object(result);
          }

          static PyObject *t_Euclidean1D_getSubSpace(t_Euclidean1D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Euclidean1D_get__dimension(t_Euclidean1D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Euclidean1D_get__instance(t_Euclidean1D *self, void *data)
          {
            Euclidean1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Euclidean1D::wrap_Object(value);
          }

          static PyObject *t_Euclidean1D_get__subSpace(t_Euclidean1D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PolynomialParser.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
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
          mids$[mid_init$_8e95c0449cdf4a7e] = env->getMethodID(cls, "<init>", "(CLorg/orekit/data/PolynomialParser$Unit;)V");
          mids$[mid_parse_f87e5f45128c2827] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PolynomialParser::PolynomialParser(jchar a0, const ::org::orekit::data::PolynomialParser$Unit & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8e95c0449cdf4a7e, a0, a1.this$)) {}

      JArray< jdouble > PolynomialParser::parse(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_parse_f87e5f45128c2827], a0.this$));
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
#include "org/orekit/propagation/conversion/AdamsBashforthFieldIntegratorBuilder.h"
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

        ::java::lang::Class *AdamsBashforthFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsBashforthFieldIntegratorBuilder::mids$ = NULL;
        bool AdamsBashforthFieldIntegratorBuilder::live$ = false;

        jclass AdamsBashforthFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsBashforthFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2e15f46ce2042002] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_048f7039a7622a2b] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthFieldIntegratorBuilder::AdamsBashforthFieldIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_2e15f46ce2042002, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator AdamsBashforthFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_of_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args);
        static int t_AdamsBashforthFieldIntegratorBuilder_init_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_buildIntegrator(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_get__parameters_(t_AdamsBashforthFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AdamsBashforthFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsBashforthFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsBashforthFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsBashforthFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_AdamsBashforthFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthFieldIntegratorBuilder, t_AdamsBashforthFieldIntegratorBuilder, AdamsBashforthFieldIntegratorBuilder);
        PyObject *t_AdamsBashforthFieldIntegratorBuilder::wrap_Object(const AdamsBashforthFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegratorBuilder *self = (t_AdamsBashforthFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsBashforthFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegratorBuilder *self = (t_AdamsBashforthFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsBashforthFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthFieldIntegratorBuilder), &PY_TYPE_DEF(AdamsBashforthFieldIntegratorBuilder), module, "AdamsBashforthFieldIntegratorBuilder", 0);
        }

        void t_AdamsBashforthFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegratorBuilder), "class_", make_descriptor(AdamsBashforthFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsBashforthFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthFieldIntegratorBuilder::wrap_Object(AdamsBashforthFieldIntegratorBuilder(((t_AdamsBashforthFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_of_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsBashforthFieldIntegratorBuilder_init_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsBashforthFieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsBashforthFieldIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_buildIntegrator(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(AdamsBashforthFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_get__parameters_(t_AdamsBashforthFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}

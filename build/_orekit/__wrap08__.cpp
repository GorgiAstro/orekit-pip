#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "java/lang/String.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimation$StrengthLevel::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimation$StrengthLevel::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimation$StrengthLevel::live$ = false;
            MarshallSolarActivityFutureEstimation$StrengthLevel *MarshallSolarActivityFutureEstimation$StrengthLevel::AVERAGE = NULL;
            MarshallSolarActivityFutureEstimation$StrengthLevel *MarshallSolarActivityFutureEstimation$StrengthLevel::STRONG = NULL;
            MarshallSolarActivityFutureEstimation$StrengthLevel *MarshallSolarActivityFutureEstimation$StrengthLevel::WEAK = NULL;

            jclass MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_62df8fd2953b0dfa] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;");
                mids$[mid_values_5a2e18a919376664] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                AVERAGE = new MarshallSolarActivityFutureEstimation$StrengthLevel(env->getStaticObjectField(cls, "AVERAGE", "Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;"));
                STRONG = new MarshallSolarActivityFutureEstimation$StrengthLevel(env->getStaticObjectField(cls, "STRONG", "Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;"));
                WEAK = new MarshallSolarActivityFutureEstimation$StrengthLevel(env->getStaticObjectField(cls, "WEAK", "Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MarshallSolarActivityFutureEstimation$StrengthLevel MarshallSolarActivityFutureEstimation$StrengthLevel::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return MarshallSolarActivityFutureEstimation$StrengthLevel(env->callStaticObjectMethod(cls, mids$[mid_valueOf_62df8fd2953b0dfa], a0.this$));
            }

            JArray< MarshallSolarActivityFutureEstimation$StrengthLevel > MarshallSolarActivityFutureEstimation$StrengthLevel::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< MarshallSolarActivityFutureEstimation$StrengthLevel >(env->callStaticObjectMethod(cls, mids$[mid_values_5a2e18a919376664]));
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
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_of_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_values(PyTypeObject *type);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_get__parameters_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimation$StrengthLevel__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimation$StrengthLevel__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimation$StrengthLevel)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimation$StrengthLevel__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimation$StrengthLevel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimation$StrengthLevel)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel, t_MarshallSolarActivityFutureEstimation$StrengthLevel, MarshallSolarActivityFutureEstimation$StrengthLevel);
            PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(const MarshallSolarActivityFutureEstimation$StrengthLevel& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation$StrengthLevel *self = (t_MarshallSolarActivityFutureEstimation$StrengthLevel *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation$StrengthLevel *self = (t_MarshallSolarActivityFutureEstimation$StrengthLevel *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimation$StrengthLevel::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimation$StrengthLevel), module, "MarshallSolarActivityFutureEstimation$StrengthLevel", 0);
            }

            void t_MarshallSolarActivityFutureEstimation$StrengthLevel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "class_", make_descriptor(MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "boxfn_", make_descriptor(boxObject));
              env->getClass(MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "AVERAGE", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(*MarshallSolarActivityFutureEstimation$StrengthLevel::AVERAGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "STRONG", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(*MarshallSolarActivityFutureEstimation$StrengthLevel::STRONG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "WEAK", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(*MarshallSolarActivityFutureEstimation$StrengthLevel::WEAK)));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(MarshallSolarActivityFutureEstimation$StrengthLevel(((t_MarshallSolarActivityFutureEstimation$StrengthLevel *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_of_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              MarshallSolarActivityFutureEstimation$StrengthLevel result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::valueOf(a0));
                return t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_values(PyTypeObject *type)
            {
              JArray< MarshallSolarActivityFutureEstimation$StrengthLevel > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::values());
              return JArray<jobject>(result.this$).wrap(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_get__parameters_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, void *data)
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
#include "java/io/PrintStream.h"
#include "java/util/Locale.h"
#include "java/lang/CharSequence.h"
#include "java/io/OutputStream.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/File.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/io/UnsupportedEncodingException.h"
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
        mids$[mid_init$_46e66c77c82c9a6b] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_255f64cf1272816f] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_94be9c6310e15013] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
        mids$[mid_init$_96073c87872b7a97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_50d10d496ad84231] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;Z)V");
        mids$[mid_init$_f4c1b5b660f432c1] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;ZLjava/lang/String;)V");
        mids$[mid_append_b4a29e5b1832be06] = env->getMethodID(cls, "append", "(C)Ljava/io/PrintStream;");
        mids$[mid_append_a625692949f008d0] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintStream;");
        mids$[mid_append_cfd922c78b5c4ae5] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintStream;");
        mids$[mid_checkError_e470b6d9e0d979db] = env->getMethodID(cls, "checkError", "()Z");
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_7ae3461a92a43152] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_format_7ebe1682194bec75] = env->getMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_format_f3cc9b4235667f5d] = env->getMethodID(cls, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_print_819ed274952f967e] = env->getMethodID(cls, "print", "([C)V");
        mids$[mid_print_e939c6558ae8d313] = env->getMethodID(cls, "print", "(Ljava/lang/String;)V");
        mids$[mid_print_50a2e0b139e80a58] = env->getMethodID(cls, "print", "(Z)V");
        mids$[mid_print_be0046d7f7239695] = env->getMethodID(cls, "print", "(C)V");
        mids$[mid_print_77e0f9a1f260e2e5] = env->getMethodID(cls, "print", "(D)V");
        mids$[mid_print_ca234f4580d28ea3] = env->getMethodID(cls, "print", "(F)V");
        mids$[mid_print_0a2a1ac2721c0336] = env->getMethodID(cls, "print", "(I)V");
        mids$[mid_print_7ca0d9438822cb0b] = env->getMethodID(cls, "print", "(Ljava/lang/Object;)V");
        mids$[mid_print_fefb08975c10f0a1] = env->getMethodID(cls, "print", "(J)V");
        mids$[mid_printf_7ebe1682194bec75] = env->getMethodID(cls, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_printf_f3cc9b4235667f5d] = env->getMethodID(cls, "printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_println_7ae3461a92a43152] = env->getMethodID(cls, "println", "()V");
        mids$[mid_println_819ed274952f967e] = env->getMethodID(cls, "println", "([C)V");
        mids$[mid_println_e939c6558ae8d313] = env->getMethodID(cls, "println", "(Ljava/lang/String;)V");
        mids$[mid_println_50a2e0b139e80a58] = env->getMethodID(cls, "println", "(Z)V");
        mids$[mid_println_be0046d7f7239695] = env->getMethodID(cls, "println", "(C)V");
        mids$[mid_println_77e0f9a1f260e2e5] = env->getMethodID(cls, "println", "(D)V");
        mids$[mid_println_ca234f4580d28ea3] = env->getMethodID(cls, "println", "(F)V");
        mids$[mid_println_0a2a1ac2721c0336] = env->getMethodID(cls, "println", "(I)V");
        mids$[mid_println_7ca0d9438822cb0b] = env->getMethodID(cls, "println", "(Ljava/lang/Object;)V");
        mids$[mid_println_fefb08975c10f0a1] = env->getMethodID(cls, "println", "(J)V");
        mids$[mid_write_0a2a1ac2721c0336] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_125b1e9f043b29f8] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_setError_7ae3461a92a43152] = env->getMethodID(cls, "setError", "()V");
        mids$[mid_clearError_7ae3461a92a43152] = env->getMethodID(cls, "clearError", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    PrintStream::PrintStream(const ::java::io::File & a0) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_46e66c77c82c9a6b, a0.this$)) {}

    PrintStream::PrintStream(const ::java::io::OutputStream & a0) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_255f64cf1272816f, a0.this$)) {}

    PrintStream::PrintStream(const ::java::lang::String & a0) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    PrintStream::PrintStream(const ::java::io::File & a0, const ::java::lang::String & a1) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_94be9c6310e15013, a0.this$, a1.this$)) {}

    PrintStream::PrintStream(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_96073c87872b7a97, a0.this$, a1.this$)) {}

    PrintStream::PrintStream(const ::java::io::OutputStream & a0, jboolean a1) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_50d10d496ad84231, a0.this$, a1)) {}

    PrintStream::PrintStream(const ::java::io::OutputStream & a0, jboolean a1, const ::java::lang::String & a2) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_f4c1b5b660f432c1, a0.this$, a1, a2.this$)) {}

    PrintStream PrintStream::append(jchar a0) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_append_b4a29e5b1832be06], a0));
    }

    PrintStream PrintStream::append(const ::java::lang::CharSequence & a0) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_append_a625692949f008d0], a0.this$));
    }

    PrintStream PrintStream::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_append_cfd922c78b5c4ae5], a0.this$, a1, a2));
    }

    jboolean PrintStream::checkError() const
    {
      return env->callBooleanMethod(this$, mids$[mid_checkError_e470b6d9e0d979db]);
    }

    void PrintStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    void PrintStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_7ae3461a92a43152]);
    }

    PrintStream PrintStream::format(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_format_7ebe1682194bec75], a0.this$, a1.this$));
    }

    PrintStream PrintStream::format(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_format_f3cc9b4235667f5d], a0.this$, a1.this$, a2.this$));
    }

    void PrintStream::print(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_819ed274952f967e], a0.this$);
    }

    void PrintStream::print(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_e939c6558ae8d313], a0.this$);
    }

    void PrintStream::print(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_50a2e0b139e80a58], a0);
    }

    void PrintStream::print(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_be0046d7f7239695], a0);
    }

    void PrintStream::print(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_77e0f9a1f260e2e5], a0);
    }

    void PrintStream::print(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_ca234f4580d28ea3], a0);
    }

    void PrintStream::print(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_0a2a1ac2721c0336], a0);
    }

    void PrintStream::print(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_7ca0d9438822cb0b], a0.this$);
    }

    void PrintStream::print(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_fefb08975c10f0a1], a0);
    }

    PrintStream PrintStream::printf(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_printf_7ebe1682194bec75], a0.this$, a1.this$));
    }

    PrintStream PrintStream::printf(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_printf_f3cc9b4235667f5d], a0.this$, a1.this$, a2.this$));
    }

    void PrintStream::println() const
    {
      env->callVoidMethod(this$, mids$[mid_println_7ae3461a92a43152]);
    }

    void PrintStream::println(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_819ed274952f967e], a0.this$);
    }

    void PrintStream::println(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_e939c6558ae8d313], a0.this$);
    }

    void PrintStream::println(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_50a2e0b139e80a58], a0);
    }

    void PrintStream::println(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_be0046d7f7239695], a0);
    }

    void PrintStream::println(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_77e0f9a1f260e2e5], a0);
    }

    void PrintStream::println(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_ca234f4580d28ea3], a0);
    }

    void PrintStream::println(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_0a2a1ac2721c0336], a0);
    }

    void PrintStream::println(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_7ca0d9438822cb0b], a0.this$);
    }

    void PrintStream::println(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_fefb08975c10f0a1], a0);
    }

    void PrintStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_0a2a1ac2721c0336], a0);
    }

    void PrintStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_125b1e9f043b29f8], a0.this$, a1, a2);
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
#include "org/orekit/annotation/DefaultDataContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace annotation {

      ::java::lang::Class *DefaultDataContext::class$ = NULL;
      jmethodID *DefaultDataContext::mids$ = NULL;
      bool DefaultDataContext::live$ = false;

      jclass DefaultDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/annotation/DefaultDataContext");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace annotation {
      static PyObject *t_DefaultDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultDataContext_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_DefaultDataContext__methods_[] = {
        DECLARE_METHOD(t_DefaultDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultDataContext, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultDataContext)[] = {
        { Py_tp_methods, t_DefaultDataContext__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultDataContext, t_DefaultDataContext, DefaultDataContext);

      void t_DefaultDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultDataContext), &PY_TYPE_DEF(DefaultDataContext), module, "DefaultDataContext", 0);
      }

      void t_DefaultDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultDataContext), "class_", make_descriptor(DefaultDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultDataContext), "wrapfn_", make_descriptor(t_DefaultDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultDataContext::initializeClass, 1)))
          return NULL;
        return t_DefaultDataContext::wrap_Object(DefaultDataContext(((t_DefaultDataContext *) arg)->object.this$));
      }
      static PyObject *t_DefaultDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/LibrationOrbit.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LibrationOrbit::class$ = NULL;
      jmethodID *LibrationOrbit::mids$ = NULL;
      bool LibrationOrbit::live$ = false;

      jclass LibrationOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LibrationOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_applyDifferentialCorrection_7ae3461a92a43152] = env->getMethodID(cls, "applyDifferentialCorrection", "()V");
          mids$[mid_getInitialPV_6761e3f334368d44] = env->getMethodID(cls, "getInitialPV", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getManifolds_37bb16b2b1d99da6] = env->getMethodID(cls, "getManifolds", "(Lorg/orekit/propagation/SpacecraftState;Z)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getOrbitalPeriod_456d9a2f64d6b28d] = env->getMethodID(cls, "getOrbitalPeriod", "()D");
          mids$[mid_applyCorrectionOnPV_b7336fc2717b0a2c] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void LibrationOrbit::applyDifferentialCorrection() const
      {
        env->callVoidMethod(this$, mids$[mid_applyDifferentialCorrection_7ae3461a92a43152]);
      }

      ::org::orekit::utils::PVCoordinates LibrationOrbit::getInitialPV() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getInitialPV_6761e3f334368d44]));
      }

      ::org::orekit::utils::PVCoordinates LibrationOrbit::getManifolds(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getManifolds_37bb16b2b1d99da6], a0.this$, a1));
      }

      jdouble LibrationOrbit::getOrbitalPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOrbitalPeriod_456d9a2f64d6b28d]);
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
      static PyObject *t_LibrationOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbit_applyDifferentialCorrection(t_LibrationOrbit *self);
      static PyObject *t_LibrationOrbit_getInitialPV(t_LibrationOrbit *self);
      static PyObject *t_LibrationOrbit_getManifolds(t_LibrationOrbit *self, PyObject *args);
      static PyObject *t_LibrationOrbit_getOrbitalPeriod(t_LibrationOrbit *self);
      static PyObject *t_LibrationOrbit_get__initialPV(t_LibrationOrbit *self, void *data);
      static PyObject *t_LibrationOrbit_get__orbitalPeriod(t_LibrationOrbit *self, void *data);
      static PyGetSetDef t_LibrationOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_LibrationOrbit, initialPV),
        DECLARE_GET_FIELD(t_LibrationOrbit, orbitalPeriod),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LibrationOrbit__methods_[] = {
        DECLARE_METHOD(t_LibrationOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbit, applyDifferentialCorrection, METH_NOARGS),
        DECLARE_METHOD(t_LibrationOrbit, getInitialPV, METH_NOARGS),
        DECLARE_METHOD(t_LibrationOrbit, getManifolds, METH_VARARGS),
        DECLARE_METHOD(t_LibrationOrbit, getOrbitalPeriod, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LibrationOrbit)[] = {
        { Py_tp_methods, t_LibrationOrbit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LibrationOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LibrationOrbit)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LibrationOrbit, t_LibrationOrbit, LibrationOrbit);

      void t_LibrationOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(LibrationOrbit), &PY_TYPE_DEF(LibrationOrbit), module, "LibrationOrbit", 0);
      }

      void t_LibrationOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbit), "class_", make_descriptor(LibrationOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbit), "wrapfn_", make_descriptor(t_LibrationOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LibrationOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LibrationOrbit::initializeClass, 1)))
          return NULL;
        return t_LibrationOrbit::wrap_Object(LibrationOrbit(((t_LibrationOrbit *) arg)->object.this$));
      }
      static PyObject *t_LibrationOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LibrationOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LibrationOrbit_applyDifferentialCorrection(t_LibrationOrbit *self)
      {
        OBJ_CALL(self->object.applyDifferentialCorrection());
        Py_RETURN_NONE;
      }

      static PyObject *t_LibrationOrbit_getInitialPV(t_LibrationOrbit *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialPV());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_LibrationOrbit_getManifolds(t_LibrationOrbit *self, PyObject *args)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        jboolean a1;
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kZ", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getManifolds(a0, a1));
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getManifolds", args);
        return NULL;
      }

      static PyObject *t_LibrationOrbit_getOrbitalPeriod(t_LibrationOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOrbitalPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_LibrationOrbit_get__initialPV(t_LibrationOrbit *self, void *data)
      {
        ::org::orekit::utils::PVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialPV());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
      }

      static PyObject *t_LibrationOrbit_get__orbitalPeriod(t_LibrationOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOrbitalPeriod());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedDoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedDoubleConsumer::mids$ = NULL;
            bool ParseToken$IndexedDoubleConsumer::live$ = false;

            jclass ParseToken$IndexedDoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_987a5fb872043b12] = env->getMethodID(cls, "accept", "(ID)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedDoubleConsumer::accept(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_987a5fb872043b12], a0, a1);
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
            static PyObject *t_ParseToken$IndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleConsumer_accept(t_ParseToken$IndexedDoubleConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedDoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedDoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedDoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedDoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedDoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedDoubleConsumer, t_ParseToken$IndexedDoubleConsumer, ParseToken$IndexedDoubleConsumer);

            void t_ParseToken$IndexedDoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedDoubleConsumer), &PY_TYPE_DEF(ParseToken$IndexedDoubleConsumer), module, "ParseToken$IndexedDoubleConsumer", 0);
            }

            void t_ParseToken$IndexedDoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleConsumer), "class_", make_descriptor(ParseToken$IndexedDoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedDoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedDoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedDoubleConsumer::wrap_Object(ParseToken$IndexedDoubleConsumer(((t_ParseToken$IndexedDoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedDoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedDoubleConsumer_accept(t_ParseToken$IndexedDoubleConsumer *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
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
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Vector3D::class$ = NULL;
          jmethodID *Vector3D::mids$ = NULL;
          bool Vector3D::live$ = false;
          Vector3D *Vector3D::MINUS_I = NULL;
          Vector3D *Vector3D::MINUS_J = NULL;
          Vector3D *Vector3D::MINUS_K = NULL;
          Vector3D *Vector3D::NEGATIVE_INFINITY = NULL;
          Vector3D *Vector3D::NaN = NULL;
          Vector3D *Vector3D::PLUS_I = NULL;
          Vector3D *Vector3D::PLUS_J = NULL;
          Vector3D *Vector3D::PLUS_K = NULL;
          Vector3D *Vector3D::POSITIVE_INFINITY = NULL;
          Vector3D *Vector3D::ZERO = NULL;

          jclass Vector3D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Vector3D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
              mids$[mid_init$_6396b2b628f2a4f4] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_init$_751bf0b5ceb330cd] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_d0a713a4687418d4] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_27da48ed94d263cb] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_add_7a21411cb28c8c28] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_add_2acd0f562b727d04] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_angle_5fd980386f9c0459] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_crossProduct_7a21411cb28c8c28] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_crossProduct_ccf2ee059c93e01e] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_distance_726dc963fac3505e] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_5fd980386f9c0459] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_distance1_05fa5f52db18503d] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distance1_5fd980386f9c0459] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_distanceInf_05fa5f52db18503d] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_5fd980386f9c0459] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_distanceSq_05fa5f52db18503d] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceSq_5fd980386f9c0459] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_dotProduct_05fa5f52db18503d] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_dotProduct_5fd980386f9c0459] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_229c87223f486349] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getAlpha_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlpha", "()D");
              mids$[mid_getDelta_456d9a2f64d6b28d] = env->getMethodID(cls, "getDelta", "()D");
              mids$[mid_getNorm_456d9a2f64d6b28d] = env->getMethodID(cls, "getNorm", "()D");
              mids$[mid_getNorm1_456d9a2f64d6b28d] = env->getMethodID(cls, "getNorm1", "()D");
              mids$[mid_getNormInf_456d9a2f64d6b28d] = env->getMethodID(cls, "getNormInf", "()D");
              mids$[mid_getNormSq_456d9a2f64d6b28d] = env->getMethodID(cls, "getNormSq", "()D");
              mids$[mid_getSpace_0438ef5f9a5edb53] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getX_456d9a2f64d6b28d] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getY_456d9a2f64d6b28d] = env->getMethodID(cls, "getY", "()D");
              mids$[mid_getZ_456d9a2f64d6b28d] = env->getMethodID(cls, "getZ", "()D");
              mids$[mid_getZero_17a952530a808943] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_17a952530a808943] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_orthogonal_17a952530a808943] = env->getMethodID(cls, "orthogonal", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_scalarMultiply_5f993a721a1d8c59] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_subtract_7a21411cb28c8c28] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_subtract_2acd0f562b727d04] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toArray_7cdc325af0834901] = env->getMethodID(cls, "toArray", "()[D");
              mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_aed149be89fb33b9] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MINUS_I = new Vector3D(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              MINUS_J = new Vector3D(env->getStaticObjectField(cls, "MINUS_J", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              MINUS_K = new Vector3D(env->getStaticObjectField(cls, "MINUS_K", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              NEGATIVE_INFINITY = new Vector3D(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              NaN = new Vector3D(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              PLUS_I = new Vector3D(env->getStaticObjectField(cls, "PLUS_I", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              PLUS_J = new Vector3D(env->getStaticObjectField(cls, "PLUS_J", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              PLUS_K = new Vector3D(env->getStaticObjectField(cls, "PLUS_K", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              POSITIVE_INFINITY = new Vector3D(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              ZERO = new Vector3D(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector3D::Vector3D(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6396b2b628f2a4f4, a0, a1.this$)) {}

          Vector3D::Vector3D(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

          Vector3D::Vector3D(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1, jdouble a2, const Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_751bf0b5ceb330cd, a0, a1.this$, a2, a3.this$)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1, jdouble a2, const Vector3D & a3, jdouble a4, const Vector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0a713a4687418d4, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1, jdouble a2, const Vector3D & a3, jdouble a4, const Vector3D & a5, jdouble a6, const Vector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_27da48ed94d263cb, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          Vector3D Vector3D::add(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_add_7a21411cb28c8c28], a0.this$));
          }

          Vector3D Vector3D::add(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_add_2acd0f562b727d04], a0, a1.this$));
          }

          jdouble Vector3D::angle(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_angle_5fd980386f9c0459], a0.this$, a1.this$);
          }

          Vector3D Vector3D::crossProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_crossProduct_7a21411cb28c8c28], a0.this$));
          }

          Vector3D Vector3D::crossProduct(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_ccf2ee059c93e01e], a0.this$, a1.this$));
          }

          jdouble Vector3D::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_726dc963fac3505e], a0.this$);
          }

          jdouble Vector3D::distance(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_5fd980386f9c0459], a0.this$, a1.this$);
          }

          jdouble Vector3D::distance1(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance1_05fa5f52db18503d], a0.this$);
          }

          jdouble Vector3D::distance1(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance1_5fd980386f9c0459], a0.this$, a1.this$);
          }

          jdouble Vector3D::distanceInf(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceInf_05fa5f52db18503d], a0.this$);
          }

          jdouble Vector3D::distanceInf(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_5fd980386f9c0459], a0.this$, a1.this$);
          }

          jdouble Vector3D::distanceSq(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceSq_05fa5f52db18503d], a0.this$);
          }

          jdouble Vector3D::distanceSq(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceSq_5fd980386f9c0459], a0.this$, a1.this$);
          }

          jdouble Vector3D::dotProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_dotProduct_05fa5f52db18503d], a0.this$);
          }

          jdouble Vector3D::dotProduct(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_dotProduct_5fd980386f9c0459], a0.this$, a1.this$);
          }

          jboolean Vector3D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
          }

          jboolean Vector3D::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_229c87223f486349], a0.this$);
          }

          jdouble Vector3D::getAlpha() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha_456d9a2f64d6b28d]);
          }

          jdouble Vector3D::getDelta() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDelta_456d9a2f64d6b28d]);
          }

          jdouble Vector3D::getNorm() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm_456d9a2f64d6b28d]);
          }

          jdouble Vector3D::getNorm1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm1_456d9a2f64d6b28d]);
          }

          jdouble Vector3D::getNormInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormInf_456d9a2f64d6b28d]);
          }

          jdouble Vector3D::getNormSq() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormSq_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::Space Vector3D::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_0438ef5f9a5edb53]));
          }

          jdouble Vector3D::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_456d9a2f64d6b28d]);
          }

          jdouble Vector3D::getY() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY_456d9a2f64d6b28d]);
          }

          jdouble Vector3D::getZ() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZ_456d9a2f64d6b28d]);
          }

          Vector3D Vector3D::getZero() const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_getZero_17a952530a808943]));
          }

          jint Vector3D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
          }

          jboolean Vector3D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
          }

          jboolean Vector3D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
          }

          Vector3D Vector3D::negate() const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_negate_17a952530a808943]));
          }

          Vector3D Vector3D::orthogonal() const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_orthogonal_17a952530a808943]));
          }

          Vector3D Vector3D::scalarMultiply(jdouble a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_5f993a721a1d8c59], a0));
          }

          Vector3D Vector3D::subtract(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_subtract_7a21411cb28c8c28], a0.this$));
          }

          Vector3D Vector3D::subtract(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_subtract_2acd0f562b727d04], a0, a1.this$));
          }

          JArray< jdouble > Vector3D::toArray() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_7cdc325af0834901]));
          }

          ::java::lang::String Vector3D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
          }

          ::java::lang::String Vector3D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_aed149be89fb33b9], a0.this$));
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
          static PyObject *t_Vector3D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector3D_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Vector3D_init_(t_Vector3D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector3D_add(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_crossProduct(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_crossProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distance(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distance1(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distanceInf(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distanceSq(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_dotProduct(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_dotProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_equals(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_equalsIeee754(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_getAlpha(t_Vector3D *self);
          static PyObject *t_Vector3D_getDelta(t_Vector3D *self);
          static PyObject *t_Vector3D_getNorm(t_Vector3D *self);
          static PyObject *t_Vector3D_getNorm1(t_Vector3D *self);
          static PyObject *t_Vector3D_getNormInf(t_Vector3D *self);
          static PyObject *t_Vector3D_getNormSq(t_Vector3D *self);
          static PyObject *t_Vector3D_getSpace(t_Vector3D *self);
          static PyObject *t_Vector3D_getX(t_Vector3D *self);
          static PyObject *t_Vector3D_getY(t_Vector3D *self);
          static PyObject *t_Vector3D_getZ(t_Vector3D *self);
          static PyObject *t_Vector3D_getZero(t_Vector3D *self);
          static PyObject *t_Vector3D_hashCode(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_isInfinite(t_Vector3D *self);
          static PyObject *t_Vector3D_isNaN(t_Vector3D *self);
          static PyObject *t_Vector3D_negate(t_Vector3D *self);
          static PyObject *t_Vector3D_orthogonal(t_Vector3D *self);
          static PyObject *t_Vector3D_scalarMultiply(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_subtract(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_toArray(t_Vector3D *self);
          static PyObject *t_Vector3D_toString(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_get__alpha(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__delta(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__infinite(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__naN(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__norm(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__norm1(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__normInf(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__normSq(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__space(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__x(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__y(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__z(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__zero(t_Vector3D *self, void *data);
          static PyGetSetDef t_Vector3D__fields_[] = {
            DECLARE_GET_FIELD(t_Vector3D, alpha),
            DECLARE_GET_FIELD(t_Vector3D, delta),
            DECLARE_GET_FIELD(t_Vector3D, infinite),
            DECLARE_GET_FIELD(t_Vector3D, naN),
            DECLARE_GET_FIELD(t_Vector3D, norm),
            DECLARE_GET_FIELD(t_Vector3D, norm1),
            DECLARE_GET_FIELD(t_Vector3D, normInf),
            DECLARE_GET_FIELD(t_Vector3D, normSq),
            DECLARE_GET_FIELD(t_Vector3D, space),
            DECLARE_GET_FIELD(t_Vector3D, x),
            DECLARE_GET_FIELD(t_Vector3D, y),
            DECLARE_GET_FIELD(t_Vector3D, z),
            DECLARE_GET_FIELD(t_Vector3D, zero),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector3D__methods_[] = {
            DECLARE_METHOD(t_Vector3D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, add, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, crossProduct, METH_O),
            DECLARE_METHOD(t_Vector3D, crossProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distance, METH_O),
            DECLARE_METHOD(t_Vector3D, distance1, METH_O),
            DECLARE_METHOD(t_Vector3D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distanceInf, METH_O),
            DECLARE_METHOD(t_Vector3D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distanceSq, METH_O),
            DECLARE_METHOD(t_Vector3D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, dotProduct, METH_O),
            DECLARE_METHOD(t_Vector3D, dotProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, equals, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, equalsIeee754, METH_O),
            DECLARE_METHOD(t_Vector3D, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getDelta, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getX, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getY, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getZ, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getZero, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, negate, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, orthogonal, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, scalarMultiply, METH_O),
            DECLARE_METHOD(t_Vector3D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector3D)[] = {
            { Py_tp_methods, t_Vector3D__methods_ },
            { Py_tp_init, (void *) t_Vector3D_init_ },
            { Py_tp_getset, t_Vector3D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector3D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vector3D, t_Vector3D, Vector3D);

          void t_Vector3D::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector3D), &PY_TYPE_DEF(Vector3D), module, "Vector3D", 0);
          }

          void t_Vector3D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "class_", make_descriptor(Vector3D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "wrapfn_", make_descriptor(t_Vector3D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Vector3D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "MINUS_I", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::MINUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "MINUS_J", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::MINUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "MINUS_K", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::MINUS_K)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "NEGATIVE_INFINITY", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::NEGATIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "NaN", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "PLUS_I", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::PLUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "PLUS_J", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::PLUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "PLUS_K", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::PLUS_K)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "POSITIVE_INFINITY", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::POSITIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "ZERO", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::ZERO)));
          }

          static PyObject *t_Vector3D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector3D::initializeClass, 1)))
              return NULL;
            return t_Vector3D::wrap_Object(Vector3D(((t_Vector3D *) arg)->object.this$));
          }
          static PyObject *t_Vector3D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector3D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Vector3D_init_(t_Vector3D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  INT_CALL(object = Vector3D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "Dk", Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Vector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                jdouble a0;
                jdouble a1;
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  INT_CALL(object = Vector3D(a0, a1));
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
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                jdouble a2;
                Vector3D a3((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DkDk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                jdouble a2;
                Vector3D a3((jobject) NULL);
                jdouble a4;
                Vector3D a5((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDk", Vector3D::initializeClass, Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                jdouble a2;
                Vector3D a3((jobject) NULL);
                jdouble a4;
                Vector3D a5((jobject) NULL);
                jdouble a6;
                Vector3D a7((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDkDk", Vector3D::initializeClass, Vector3D::initializeClass, Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_Vector3D_add(t_Vector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_Vector3D_angle(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::angle(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_Vector3D_crossProduct(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            Vector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.crossProduct(a0));
              return t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_crossProduct_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::crossProduct(a0, a1));
              return t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "crossProduct_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distance(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_distance1(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distance1(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_distance1_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distance1(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distanceInf(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceInf(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distanceSq(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceSq(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distanceSq(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distance_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_dotProduct(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_dotProduct_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::dotProduct(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "dotProduct_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_equals(t_Vector3D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Vector3D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Vector3D_equalsIeee754(t_Vector3D *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_getAlpha(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getDelta(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDelta());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNorm(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNorm1(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNormInf(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNormSq(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormSq());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getSpace(t_Vector3D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Vector3D_getX(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getY(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getY());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getZ(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getZ());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getZero(t_Vector3D *self)
          {
            Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getZero());
            return t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Vector3D_hashCode(t_Vector3D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Vector3D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Vector3D_isInfinite(t_Vector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector3D_isNaN(t_Vector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector3D_negate(t_Vector3D *self)
          {
            Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Vector3D_orthogonal(t_Vector3D *self)
          {
            Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.orthogonal());
            return t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Vector3D_scalarMultiply(t_Vector3D *self, PyObject *arg)
          {
            jdouble a0;
            Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.scalarMultiply(a0));
              return t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_subtract(t_Vector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_Vector3D_toArray(t_Vector3D *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return result.wrap();
          }

          static PyObject *t_Vector3D_toString(t_Vector3D *self, PyObject *args)
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
                ::java::text::NumberFormat a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.toString(a0));
                  return j2p(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector3D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_Vector3D_get__alpha(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__delta(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDelta());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__infinite(t_Vector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector3D_get__naN(t_Vector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector3D_get__norm(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__norm1(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__normInf(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__normSq(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormSq());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__space(t_Vector3D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_Vector3D_get__x(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__y(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getY());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__z(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getZ());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__zero(t_Vector3D *self, void *data)
          {
            Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getZero());
            return t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/text/ParseException.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PotentialCoefficientsReader::class$ = NULL;
          jmethodID *PotentialCoefficientsReader::mids$ = NULL;
          bool PotentialCoefficientsReader::live$ = false;

          jclass PotentialCoefficientsReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PotentialCoefficientsReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMaxAvailableDegree_f2f64475e4580546] = env->getMethodID(cls, "getMaxAvailableDegree", "()I");
              mids$[mid_getMaxAvailableOrder_f2f64475e4580546] = env->getMethodID(cls, "getMaxAvailableOrder", "()I");
              mids$[mid_getMaxParseDegree_f2f64475e4580546] = env->getMethodID(cls, "getMaxParseDegree", "()I");
              mids$[mid_getMaxParseOrder_f2f64475e4580546] = env->getMethodID(cls, "getMaxParseOrder", "()I");
              mids$[mid_getProvider_086897fc27688c23] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_getSupportedNames_0090f7797e403f43] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_missingCoefficientsAllowed_e470b6d9e0d979db] = env->getMethodID(cls, "missingCoefficientsAllowed", "()Z");
              mids$[mid_setMaxParseDegree_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaxParseDegree", "(I)V");
              mids$[mid_setMaxParseOrder_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaxParseOrder", "(I)V");
              mids$[mid_stillAcceptsData_e470b6d9e0d979db] = env->getMethodID(cls, "stillAcceptsData", "()Z");
              mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getAe_456d9a2f64d6b28d] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getTideSystem_b3b39360f3c8a6ac] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_rescale_603395f9c9d40754] = env->getMethodID(cls, "rescale", "(DZLorg/orekit/forces/gravity/potential/Flattener;Lorg/orekit/forces/gravity/potential/Flattener;[D)[D");
              mids$[mid_rescale_c0bac7c5b0ea5f9b] = env->getMethodID(cls, "rescale", "(ZLorg/orekit/forces/gravity/potential/Flattener;Lorg/orekit/forces/gravity/potential/Flattener;[Lorg/orekit/forces/gravity/potential/TimeDependentHarmonic;)[Lorg/orekit/forces/gravity/potential/TimeDependentHarmonic;");
              mids$[mid_setMu_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMu", "(D)V");
              mids$[mid_toDate_5e0af9b6a38de143] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_toDate_a6298298e8300bc3] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/DateComponents;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_buildFlatArray_787b397a6d306d3e] = env->getStaticMethodID(cls, "buildFlatArray", "(Lorg/orekit/forces/gravity/potential/Flattener;D)[D");
              mids$[mid_buildRow_752de4f2ebe33c25] = env->getStaticMethodID(cls, "buildRow", "(IID)[D");
              mids$[mid_setReadComplete_50a2e0b139e80a58] = env->getMethodID(cls, "setReadComplete", "(Z)V");
              mids$[mid_setAe_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAe", "(D)V");
              mids$[mid_setTideSystem_e24b20eb26eb22bd] = env->getMethodID(cls, "setTideSystem", "(Lorg/orekit/forces/gravity/potential/TideSystem;)V");
              mids$[mid_parseCoefficient_43c7e8e4ff38596a] = env->getMethodID(cls, "parseCoefficient", "(Ljava/lang/String;Lorg/orekit/forces/gravity/potential/Flattener;[DIILjava/lang/String;Ljava/lang/String;)V");
              mids$[mid_setRawCoefficients_9ba7c4948102f888] = env->getMethodID(cls, "setRawCoefficients", "(ZLorg/orekit/forces/gravity/potential/Flattener;[D[DLjava/lang/String;)V");
              mids$[mid_getBaseProvider_bd2bf0402b184c8a] = env->getMethodID(cls, "getBaseProvider", "(ZII)Lorg/orekit/forces/gravity/potential/ConstantSphericalHarmonics;");
              mids$[mid_parseDouble_531dcf669f2059aa] = env->getStaticMethodID(cls, "parseDouble", "(Ljava/lang/String;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint PotentialCoefficientsReader::getMaxAvailableDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxAvailableDegree_f2f64475e4580546]);
          }

          jint PotentialCoefficientsReader::getMaxAvailableOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxAvailableOrder_f2f64475e4580546]);
          }

          jint PotentialCoefficientsReader::getMaxParseDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseDegree_f2f64475e4580546]);
          }

          jint PotentialCoefficientsReader::getMaxParseOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseOrder_f2f64475e4580546]);
          }

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider PotentialCoefficientsReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_086897fc27688c23], a0, a1, a2));
          }

          ::java::lang::String PotentialCoefficientsReader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_0090f7797e403f43]));
          }

          void PotentialCoefficientsReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
          }

          jboolean PotentialCoefficientsReader::missingCoefficientsAllowed() const
          {
            return env->callBooleanMethod(this$, mids$[mid_missingCoefficientsAllowed_e470b6d9e0d979db]);
          }

          void PotentialCoefficientsReader::setMaxParseDegree(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseDegree_0a2a1ac2721c0336], a0);
          }

          void PotentialCoefficientsReader::setMaxParseOrder(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseOrder_0a2a1ac2721c0336], a0);
          }

          jboolean PotentialCoefficientsReader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_e470b6d9e0d979db]);
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
          static PyObject *t_PotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableDegree(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableOrder(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getMaxParseDegree(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getMaxParseOrder(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getProvider(t_PotentialCoefficientsReader *self, PyObject *args);
          static PyObject *t_PotentialCoefficientsReader_getSupportedNames(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_loadData(t_PotentialCoefficientsReader *self, PyObject *args);
          static PyObject *t_PotentialCoefficientsReader_missingCoefficientsAllowed(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_setMaxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_setMaxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_stillAcceptsData(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableDegree(t_PotentialCoefficientsReader *self, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableOrder(t_PotentialCoefficientsReader *self, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__maxParseDegree(t_PotentialCoefficientsReader *self, void *data);
          static int t_PotentialCoefficientsReader_set__maxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__maxParseOrder(t_PotentialCoefficientsReader *self, void *data);
          static int t_PotentialCoefficientsReader_set__maxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__supportedNames(t_PotentialCoefficientsReader *self, void *data);
          static PyGetSetDef t_PotentialCoefficientsReader__fields_[] = {
            DECLARE_GET_FIELD(t_PotentialCoefficientsReader, maxAvailableDegree),
            DECLARE_GET_FIELD(t_PotentialCoefficientsReader, maxAvailableOrder),
            DECLARE_GETSET_FIELD(t_PotentialCoefficientsReader, maxParseDegree),
            DECLARE_GETSET_FIELD(t_PotentialCoefficientsReader, maxParseOrder),
            DECLARE_GET_FIELD(t_PotentialCoefficientsReader, supportedNames),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PotentialCoefficientsReader__methods_[] = {
            DECLARE_METHOD(t_PotentialCoefficientsReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxAvailableDegree, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxAvailableOrder, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxParseDegree, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxParseOrder, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, missingCoefficientsAllowed, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, setMaxParseDegree, METH_O),
            DECLARE_METHOD(t_PotentialCoefficientsReader, setMaxParseOrder, METH_O),
            DECLARE_METHOD(t_PotentialCoefficientsReader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PotentialCoefficientsReader)[] = {
            { Py_tp_methods, t_PotentialCoefficientsReader__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PotentialCoefficientsReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PotentialCoefficientsReader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PotentialCoefficientsReader, t_PotentialCoefficientsReader, PotentialCoefficientsReader);

          void t_PotentialCoefficientsReader::install(PyObject *module)
          {
            installType(&PY_TYPE(PotentialCoefficientsReader), &PY_TYPE_DEF(PotentialCoefficientsReader), module, "PotentialCoefficientsReader", 0);
          }

          void t_PotentialCoefficientsReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PotentialCoefficientsReader), "class_", make_descriptor(PotentialCoefficientsReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PotentialCoefficientsReader), "wrapfn_", make_descriptor(t_PotentialCoefficientsReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PotentialCoefficientsReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PotentialCoefficientsReader::initializeClass, 1)))
              return NULL;
            return t_PotentialCoefficientsReader::wrap_Object(PotentialCoefficientsReader(((t_PotentialCoefficientsReader *) arg)->object.this$));
          }
          static PyObject *t_PotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PotentialCoefficientsReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableDegree(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxAvailableDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableOrder(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxAvailableOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxParseDegree(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxParseOrder(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getProvider(t_PotentialCoefficientsReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getProvider", args);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_getSupportedNames(t_PotentialCoefficientsReader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_PotentialCoefficientsReader_loadData(t_PotentialCoefficientsReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "loadData", args);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_missingCoefficientsAllowed(t_PotentialCoefficientsReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.missingCoefficientsAllowed());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_PotentialCoefficientsReader_setMaxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseDegree(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseDegree", arg);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_setMaxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseOrder(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseOrder", arg);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_stillAcceptsData(t_PotentialCoefficientsReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableDegree(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxAvailableDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableOrder(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxAvailableOrder());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxParseDegree(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) value);
          }
          static int t_PotentialCoefficientsReader_set__maxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseDegree(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseDegree", arg);
            return -1;
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxParseOrder(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) value);
          }
          static int t_PotentialCoefficientsReader_set__maxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseOrder(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseOrder", arg);
            return -1;
          }

          static PyObject *t_PotentialCoefficientsReader_get__supportedNames(t_PotentialCoefficientsReader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/IllinoisSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *IllinoisSolver::class$ = NULL;
        jmethodID *IllinoisSolver::mids$ = NULL;
        bool IllinoisSolver::live$ = false;

        jclass IllinoisSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/IllinoisSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IllinoisSolver::IllinoisSolver() : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        IllinoisSolver::IllinoisSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        IllinoisSolver::IllinoisSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        IllinoisSolver::IllinoisSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}
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
        static PyObject *t_IllinoisSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IllinoisSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IllinoisSolver_of_(t_IllinoisSolver *self, PyObject *args);
        static int t_IllinoisSolver_init_(t_IllinoisSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IllinoisSolver_get__parameters_(t_IllinoisSolver *self, void *data);
        static PyGetSetDef t_IllinoisSolver__fields_[] = {
          DECLARE_GET_FIELD(t_IllinoisSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IllinoisSolver__methods_[] = {
          DECLARE_METHOD(t_IllinoisSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IllinoisSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IllinoisSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IllinoisSolver)[] = {
          { Py_tp_methods, t_IllinoisSolver__methods_ },
          { Py_tp_init, (void *) t_IllinoisSolver_init_ },
          { Py_tp_getset, t_IllinoisSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IllinoisSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseSecantSolver),
          NULL
        };

        DEFINE_TYPE(IllinoisSolver, t_IllinoisSolver, IllinoisSolver);
        PyObject *t_IllinoisSolver::wrap_Object(const IllinoisSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IllinoisSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IllinoisSolver *self = (t_IllinoisSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_IllinoisSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IllinoisSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IllinoisSolver *self = (t_IllinoisSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_IllinoisSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(IllinoisSolver), &PY_TYPE_DEF(IllinoisSolver), module, "IllinoisSolver", 0);
        }

        void t_IllinoisSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IllinoisSolver), "class_", make_descriptor(IllinoisSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IllinoisSolver), "wrapfn_", make_descriptor(t_IllinoisSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IllinoisSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IllinoisSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IllinoisSolver::initializeClass, 1)))
            return NULL;
          return t_IllinoisSolver::wrap_Object(IllinoisSolver(((t_IllinoisSolver *) arg)->object.this$));
        }
        static PyObject *t_IllinoisSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IllinoisSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_IllinoisSolver_of_(t_IllinoisSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_IllinoisSolver_init_(t_IllinoisSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              IllinoisSolver object((jobject) NULL);

              INT_CALL(object = IllinoisSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              IllinoisSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = IllinoisSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              IllinoisSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = IllinoisSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              IllinoisSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = IllinoisSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_IllinoisSolver_get__parameters_(t_IllinoisSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldODEStateAndDerivative::class$ = NULL;
      jmethodID *FieldODEStateAndDerivative::mids$ = NULL;
      bool FieldODEStateAndDerivative::live$ = false;

      jclass FieldODEStateAndDerivative::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldODEStateAndDerivative");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d5e6b14cb4905804] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_83ba5f45f2b3b0ef] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getCompleteDerivative_01c7d10e96d5cf94] = env->getMethodID(cls, "getCompleteDerivative", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPrimaryDerivative_01c7d10e96d5cf94] = env->getMethodID(cls, "getPrimaryDerivative", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSecondaryDerivative_5b8578526a4f7e83] = env->getMethodID(cls, "getSecondaryDerivative", "(I)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldODEStateAndDerivative::FieldODEStateAndDerivative(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) : ::org::hipparchus::ode::FieldODEState(env->newObject(initializeClass, &mids$, mid_init$_d5e6b14cb4905804, a0.this$, a1.this$, a2.this$)) {}

      FieldODEStateAndDerivative::FieldODEStateAndDerivative(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a3, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a4) : ::org::hipparchus::ode::FieldODEState(env->newObject(initializeClass, &mids$, mid_init$_83ba5f45f2b3b0ef, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEStateAndDerivative::getCompleteDerivative() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getCompleteDerivative_01c7d10e96d5cf94]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEStateAndDerivative::getPrimaryDerivative() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getPrimaryDerivative_01c7d10e96d5cf94]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEStateAndDerivative::getSecondaryDerivative(jint a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getSecondaryDerivative_5b8578526a4f7e83], a0));
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
      static PyObject *t_FieldODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEStateAndDerivative_of_(t_FieldODEStateAndDerivative *self, PyObject *args);
      static int t_FieldODEStateAndDerivative_init_(t_FieldODEStateAndDerivative *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldODEStateAndDerivative_getCompleteDerivative(t_FieldODEStateAndDerivative *self);
      static PyObject *t_FieldODEStateAndDerivative_getPrimaryDerivative(t_FieldODEStateAndDerivative *self);
      static PyObject *t_FieldODEStateAndDerivative_getSecondaryDerivative(t_FieldODEStateAndDerivative *self, PyObject *arg);
      static PyObject *t_FieldODEStateAndDerivative_get__completeDerivative(t_FieldODEStateAndDerivative *self, void *data);
      static PyObject *t_FieldODEStateAndDerivative_get__primaryDerivative(t_FieldODEStateAndDerivative *self, void *data);
      static PyObject *t_FieldODEStateAndDerivative_get__parameters_(t_FieldODEStateAndDerivative *self, void *data);
      static PyGetSetDef t_FieldODEStateAndDerivative__fields_[] = {
        DECLARE_GET_FIELD(t_FieldODEStateAndDerivative, completeDerivative),
        DECLARE_GET_FIELD(t_FieldODEStateAndDerivative, primaryDerivative),
        DECLARE_GET_FIELD(t_FieldODEStateAndDerivative, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldODEStateAndDerivative__methods_[] = {
        DECLARE_METHOD(t_FieldODEStateAndDerivative, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, getCompleteDerivative, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, getPrimaryDerivative, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, getSecondaryDerivative, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldODEStateAndDerivative)[] = {
        { Py_tp_methods, t_FieldODEStateAndDerivative__methods_ },
        { Py_tp_init, (void *) t_FieldODEStateAndDerivative_init_ },
        { Py_tp_getset, t_FieldODEStateAndDerivative__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldODEStateAndDerivative)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::FieldODEState),
        NULL
      };

      DEFINE_TYPE(FieldODEStateAndDerivative, t_FieldODEStateAndDerivative, FieldODEStateAndDerivative);
      PyObject *t_FieldODEStateAndDerivative::wrap_Object(const FieldODEStateAndDerivative& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEStateAndDerivative::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEStateAndDerivative *self = (t_FieldODEStateAndDerivative *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldODEStateAndDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEStateAndDerivative::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEStateAndDerivative *self = (t_FieldODEStateAndDerivative *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldODEStateAndDerivative::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldODEStateAndDerivative), &PY_TYPE_DEF(FieldODEStateAndDerivative), module, "FieldODEStateAndDerivative", 0);
      }

      void t_FieldODEStateAndDerivative::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateAndDerivative), "class_", make_descriptor(FieldODEStateAndDerivative::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateAndDerivative), "wrapfn_", make_descriptor(t_FieldODEStateAndDerivative::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateAndDerivative), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldODEStateAndDerivative::initializeClass, 1)))
          return NULL;
        return t_FieldODEStateAndDerivative::wrap_Object(FieldODEStateAndDerivative(((t_FieldODEStateAndDerivative *) arg)->object.this$));
      }
      static PyObject *t_FieldODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldODEStateAndDerivative::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldODEStateAndDerivative_of_(t_FieldODEStateAndDerivative *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldODEStateAndDerivative_init_(t_FieldODEStateAndDerivative *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            FieldODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "K[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEStateAndDerivative(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a3((jobject) NULL);
            PyTypeObject **p3;
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a4((jobject) NULL);
            PyTypeObject **p4;
            FieldODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "K[K[K[[K[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEStateAndDerivative(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldODEStateAndDerivative_getCompleteDerivative(t_FieldODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEStateAndDerivative_getPrimaryDerivative(t_FieldODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEStateAndDerivative_getSecondaryDerivative(t_FieldODEStateAndDerivative *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryDerivative(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryDerivative", arg);
        return NULL;
      }
      static PyObject *t_FieldODEStateAndDerivative_get__parameters_(t_FieldODEStateAndDerivative *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldODEStateAndDerivative_get__completeDerivative(t_FieldODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEStateAndDerivative_get__primaryDerivative(t_FieldODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedMeasurementBase::class$ = NULL;
        jmethodID *EstimatedMeasurementBase::mids$ = NULL;
        bool EstimatedMeasurementBase::live$ = false;

        jclass EstimatedMeasurementBase::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedMeasurementBase");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_928a9f4df476de65] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;II[Lorg/orekit/propagation/SpacecraftState;[Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
            mids$[mid_getCount_f2f64475e4580546] = env->getMethodID(cls, "getCount", "()I");
            mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEstimatedValue_7cdc325af0834901] = env->getMethodID(cls, "getEstimatedValue", "()[D");
            mids$[mid_getIteration_f2f64475e4580546] = env->getMethodID(cls, "getIteration", "()I");
            mids$[mid_getObservedMeasurement_cad4d6aea977e795] = env->getMethodID(cls, "getObservedMeasurement", "()Lorg/orekit/estimation/measurements/ObservedMeasurement;");
            mids$[mid_getObservedValue_7cdc325af0834901] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_getParticipants_4e88474af2ad6bb8] = env->getMethodID(cls, "getParticipants", "()[Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getStates_a4eb258dd7a1e164] = env->getMethodID(cls, "getStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStatus_0136d00f07a6d9f8] = env->getMethodID(cls, "getStatus", "()Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;");
            mids$[mid_getTimeOffset_456d9a2f64d6b28d] = env->getMethodID(cls, "getTimeOffset", "()D");
            mids$[mid_setEstimatedValue_ebc26dcaf4761286] = env->getMethodID(cls, "setEstimatedValue", "([D)V");
            mids$[mid_setStatus_4406454e8781a429] = env->getMethodID(cls, "setStatus", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedMeasurementBase::EstimatedMeasurementBase(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, jint a1, jint a2, const JArray< ::org::orekit::propagation::SpacecraftState > & a3, const JArray< ::org::orekit::utils::TimeStampedPVCoordinates > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_928a9f4df476de65, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        jint EstimatedMeasurementBase::getCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getCount_f2f64475e4580546]);
        }

        ::org::orekit::time::AbsoluteDate EstimatedMeasurementBase::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
        }

        JArray< jdouble > EstimatedMeasurementBase::getEstimatedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getEstimatedValue_7cdc325af0834901]));
        }

        jint EstimatedMeasurementBase::getIteration() const
        {
          return env->callIntMethod(this$, mids$[mid_getIteration_f2f64475e4580546]);
        }

        ::org::orekit::estimation::measurements::ObservedMeasurement EstimatedMeasurementBase::getObservedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::ObservedMeasurement(env->callObjectMethod(this$, mids$[mid_getObservedMeasurement_cad4d6aea977e795]));
        }

        JArray< jdouble > EstimatedMeasurementBase::getObservedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getObservedValue_7cdc325af0834901]));
        }

        JArray< ::org::orekit::utils::TimeStampedPVCoordinates > EstimatedMeasurementBase::getParticipants() const
        {
          return JArray< ::org::orekit::utils::TimeStampedPVCoordinates >(env->callObjectMethod(this$, mids$[mid_getParticipants_4e88474af2ad6bb8]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > EstimatedMeasurementBase::getStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getStates_a4eb258dd7a1e164]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status EstimatedMeasurementBase::getStatus() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status(env->callObjectMethod(this$, mids$[mid_getStatus_0136d00f07a6d9f8]));
        }

        jdouble EstimatedMeasurementBase::getTimeOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTimeOffset_456d9a2f64d6b28d]);
        }

        void EstimatedMeasurementBase::setEstimatedValue(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEstimatedValue_ebc26dcaf4761286], a0.this$);
        }

        void EstimatedMeasurementBase::setStatus(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStatus_4406454e8781a429], a0.this$);
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
        static PyObject *t_EstimatedMeasurementBase_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_of_(t_EstimatedMeasurementBase *self, PyObject *args);
        static int t_EstimatedMeasurementBase_init_(t_EstimatedMeasurementBase *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EstimatedMeasurementBase_getCount(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getDate(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getEstimatedValue(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getIteration(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getObservedMeasurement(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getObservedValue(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getParticipants(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getStates(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getStatus(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getTimeOffset(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_setEstimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_setStatus(t_EstimatedMeasurementBase *self, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_get__count(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__date(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__estimatedValue(t_EstimatedMeasurementBase *self, void *data);
        static int t_EstimatedMeasurementBase_set__estimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__iteration(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__observedMeasurement(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__observedValue(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__participants(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__states(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__status(t_EstimatedMeasurementBase *self, void *data);
        static int t_EstimatedMeasurementBase_set__status(t_EstimatedMeasurementBase *self, PyObject *arg, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__timeOffset(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__parameters_(t_EstimatedMeasurementBase *self, void *data);
        static PyGetSetDef t_EstimatedMeasurementBase__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, count),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, date),
          DECLARE_GETSET_FIELD(t_EstimatedMeasurementBase, estimatedValue),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, iteration),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, observedMeasurement),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, observedValue),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, participants),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, states),
          DECLARE_GETSET_FIELD(t_EstimatedMeasurementBase, status),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, timeOffset),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedMeasurementBase__methods_[] = {
          DECLARE_METHOD(t_EstimatedMeasurementBase, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getCount, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getDate, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getEstimatedValue, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getIteration, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getObservedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getObservedValue, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getParticipants, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getStates, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getStatus, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getTimeOffset, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, setEstimatedValue, METH_O),
          DECLARE_METHOD(t_EstimatedMeasurementBase, setStatus, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedMeasurementBase)[] = {
          { Py_tp_methods, t_EstimatedMeasurementBase__methods_ },
          { Py_tp_init, (void *) t_EstimatedMeasurementBase_init_ },
          { Py_tp_getset, t_EstimatedMeasurementBase__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedMeasurementBase)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EstimatedMeasurementBase, t_EstimatedMeasurementBase, EstimatedMeasurementBase);
        PyObject *t_EstimatedMeasurementBase::wrap_Object(const EstimatedMeasurementBase& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase *self = (t_EstimatedMeasurementBase *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimatedMeasurementBase::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase *self = (t_EstimatedMeasurementBase *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimatedMeasurementBase::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedMeasurementBase), &PY_TYPE_DEF(EstimatedMeasurementBase), module, "EstimatedMeasurementBase", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "Status", make_descriptor(&PY_TYPE_DEF(EstimatedMeasurementBase$Status)));
        }

        void t_EstimatedMeasurementBase::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "class_", make_descriptor(EstimatedMeasurementBase::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "wrapfn_", make_descriptor(t_EstimatedMeasurementBase::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimatedMeasurementBase_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedMeasurementBase::initializeClass, 1)))
            return NULL;
          return t_EstimatedMeasurementBase::wrap_Object(EstimatedMeasurementBase(((t_EstimatedMeasurementBase *) arg)->object.this$));
        }
        static PyObject *t_EstimatedMeasurementBase_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedMeasurementBase::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimatedMeasurementBase_of_(t_EstimatedMeasurementBase *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EstimatedMeasurementBase_init_(t_EstimatedMeasurementBase *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          JArray< ::org::orekit::propagation::SpacecraftState > a3((jobject) NULL);
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > a4((jobject) NULL);
          EstimatedMeasurementBase object((jobject) NULL);

          if (!parseArgs(args, "KII[k[k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = EstimatedMeasurementBase(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EstimatedMeasurementBase_getCount(t_EstimatedMeasurementBase *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimatedMeasurementBase_getDate(t_EstimatedMeasurementBase *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EstimatedMeasurementBase_getEstimatedValue(t_EstimatedMeasurementBase *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedValue());
          return result.wrap();
        }

        static PyObject *t_EstimatedMeasurementBase_getIteration(t_EstimatedMeasurementBase *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIteration());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimatedMeasurementBase_getObservedMeasurement(t_EstimatedMeasurementBase *self)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedMeasurement());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(result);
        }

        static PyObject *t_EstimatedMeasurementBase_getObservedValue(t_EstimatedMeasurementBase *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedValue());
          return result.wrap();
        }

        static PyObject *t_EstimatedMeasurementBase_getParticipants(t_EstimatedMeasurementBase *self)
        {
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParticipants());
          return JArray<jobject>(result.this$).wrap(::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_getStates(t_EstimatedMeasurementBase *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_getStatus(t_EstimatedMeasurementBase *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status result((jobject) NULL);
          OBJ_CALL(result = self->object.getStatus());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase$Status::wrap_Object(result);
        }

        static PyObject *t_EstimatedMeasurementBase_getTimeOffset(t_EstimatedMeasurementBase *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTimeOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EstimatedMeasurementBase_setEstimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.setEstimatedValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEstimatedValue", arg);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurementBase_setStatus(t_EstimatedMeasurementBase *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase$Status::parameters_))
          {
            OBJ_CALL(self->object.setStatus(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStatus", arg);
          return NULL;
        }
        static PyObject *t_EstimatedMeasurementBase_get__parameters_(t_EstimatedMeasurementBase *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EstimatedMeasurementBase_get__count(t_EstimatedMeasurementBase *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__date(t_EstimatedMeasurementBase *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__estimatedValue(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedValue());
          return value.wrap();
        }
        static int t_EstimatedMeasurementBase_set__estimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg, void *data)
        {
          {
            JArray< jdouble > value((jobject) NULL);
            if (!parseArg(arg, "[D", &value))
            {
              INT_CALL(self->object.setEstimatedValue(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "estimatedValue", arg);
          return -1;
        }

        static PyObject *t_EstimatedMeasurementBase_get__iteration(t_EstimatedMeasurementBase *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIteration());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__observedMeasurement(t_EstimatedMeasurementBase *self, void *data)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedMeasurement());
          return ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__observedValue(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedValue());
          return value.wrap();
        }

        static PyObject *t_EstimatedMeasurementBase_get__participants(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParticipants());
          return JArray<jobject>(value.this$).wrap(::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_get__states(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_get__status(t_EstimatedMeasurementBase *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status value((jobject) NULL);
          OBJ_CALL(value = self->object.getStatus());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase$Status::wrap_Object(value);
        }
        static int t_EstimatedMeasurementBase_set__status(t_EstimatedMeasurementBase *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::initializeClass, &value))
            {
              INT_CALL(self->object.setStatus(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "status", arg);
          return -1;
        }

        static PyObject *t_EstimatedMeasurementBase_get__timeOffset(t_EstimatedMeasurementBase *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTimeOffset());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "java/util/Collection.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
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
          mids$[mid_addAdditionalStateProvider_a97b38ef37f9ad9f] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_addEventDetector_1843b26af41f9c8e] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_clearStepHandlers_7ae3461a92a43152] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getAdditionalStateProviders_a6156df500549a58] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_a9ea70419e870eb4] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_cfcfd130f9013e3e] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_a553824829fc2514] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_e40bff2c3349a3fd] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_isAdditionalStateManaged_6b161f495ea569b8] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_85b5a3e9101d7c1f] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_propagate_195e701ebc75aca3] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_resetInitialState_52154b94d63e10ed] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setStepHandler_94968e6ff3f0c115] = env->getMethodID(cls, "setStepHandler", "(Lorg/orekit/propagation/sampling/FieldOrekitStepHandler;)V");
          mids$[mid_setStepHandler_d41b45a1d6944ab5] = env->getMethodID(cls, "setStepHandler", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_MASS = env->getStaticDoubleField(cls, "DEFAULT_MASS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldPropagator::addAdditionalStateProvider(const ::org::orekit::propagation::FieldAdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_a97b38ef37f9ad9f], a0.this$);
      }

      void FieldPropagator::addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_1843b26af41f9c8e], a0.this$);
      }

      void FieldPropagator::clearEventsDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_7ae3461a92a43152]);
      }

      void FieldPropagator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_7ae3461a92a43152]);
      }

      ::java::util::List FieldPropagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_a6156df500549a58]));
      }

      ::org::orekit::attitudes::AttitudeProvider FieldPropagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_5cce95036ae870ba]));
      }

      ::org::orekit::propagation::FieldEphemerisGenerator FieldPropagator::getEphemerisGenerator() const
      {
        return ::org::orekit::propagation::FieldEphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_a9ea70419e870eb4]));
      }

      ::java::util::Collection FieldPropagator::getEventsDetectors() const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_cfcfd130f9013e3e]));
      }

      ::org::orekit::frames::Frame FieldPropagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldPropagator::getInitialState() const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_a553824829fc2514]));
      }

      JArray< ::java::lang::String > FieldPropagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924]));
      }

      ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer FieldPropagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_e40bff2c3349a3fd]));
      }

      jboolean FieldPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_6b161f495ea569b8], a0.this$);
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_85b5a3e9101d7c1f], a0.this$));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_195e701ebc75aca3], a0.this$, a1.this$));
      }

      void FieldPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_52154b94d63e10ed], a0.this$);
      }

      void FieldPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8109c1a27d4471d3], a0.this$);
      }

      void FieldPropagator::setStepHandler(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_94968e6ff3f0c115], a0.this$);
      }

      void FieldPropagator::setStepHandler(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_d41b45a1d6944ab5], a0.this$, a1.this$);
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
#include "org/orekit/gnss/attitude/GenericGNSS.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GenericGNSS::class$ = NULL;
        jmethodID *GenericGNSS::mids$ = NULL;
        bool GenericGNSS::live$ = false;

        jclass GenericGNSS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GenericGNSS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_65fb710ff0be7da1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_89a7d6ae4e1f14a2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_70e28bc10c6688c2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GenericGNSS::GenericGNSS(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_65fb710ff0be7da1, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
        static PyObject *t_GenericGNSS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GenericGNSS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GenericGNSS_init_(t_GenericGNSS *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_GenericGNSS__methods_[] = {
          DECLARE_METHOD(t_GenericGNSS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GenericGNSS, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GenericGNSS)[] = {
          { Py_tp_methods, t_GenericGNSS__methods_ },
          { Py_tp_init, (void *) t_GenericGNSS_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GenericGNSS)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GenericGNSS, t_GenericGNSS, GenericGNSS);

        void t_GenericGNSS::install(PyObject *module)
        {
          installType(&PY_TYPE(GenericGNSS), &PY_TYPE_DEF(GenericGNSS), module, "GenericGNSS", 0);
        }

        void t_GenericGNSS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GenericGNSS), "class_", make_descriptor(GenericGNSS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GenericGNSS), "wrapfn_", make_descriptor(t_GenericGNSS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GenericGNSS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GenericGNSS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GenericGNSS::initializeClass, 1)))
            return NULL;
          return t_GenericGNSS::wrap_Object(GenericGNSS(((t_GenericGNSS *) arg)->object.this$));
        }
        static PyObject *t_GenericGNSS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GenericGNSS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GenericGNSS_init_(t_GenericGNSS *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          GenericGNSS object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = GenericGNSS(a0, a1, a2, a3));
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
#include "org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *Sphere1D$NoSubSpaceException::class$ = NULL;
          jmethodID *Sphere1D$NoSubSpaceException::mids$ = NULL;
          bool Sphere1D$NoSubSpaceException::live$ = false;

          jclass Sphere1D$NoSubSpaceException::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Sphere1D$NoSubSpaceException::Sphere1D$NoSubSpaceException() : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
          static PyObject *t_Sphere1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Sphere1D$NoSubSpaceException_init_(t_Sphere1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_Sphere1D$NoSubSpaceException__methods_[] = {
            DECLARE_METHOD(t_Sphere1D$NoSubSpaceException, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D$NoSubSpaceException, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sphere1D$NoSubSpaceException)[] = {
            { Py_tp_methods, t_Sphere1D$NoSubSpaceException__methods_ },
            { Py_tp_init, (void *) t_Sphere1D$NoSubSpaceException_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sphere1D$NoSubSpaceException)[] = {
            &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
            NULL
          };

          DEFINE_TYPE(Sphere1D$NoSubSpaceException, t_Sphere1D$NoSubSpaceException, Sphere1D$NoSubSpaceException);

          void t_Sphere1D$NoSubSpaceException::install(PyObject *module)
          {
            installType(&PY_TYPE(Sphere1D$NoSubSpaceException), &PY_TYPE_DEF(Sphere1D$NoSubSpaceException), module, "Sphere1D$NoSubSpaceException", 0);
          }

          void t_Sphere1D$NoSubSpaceException::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D$NoSubSpaceException), "class_", make_descriptor(Sphere1D$NoSubSpaceException::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D$NoSubSpaceException), "wrapfn_", make_descriptor(t_Sphere1D$NoSubSpaceException::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D$NoSubSpaceException), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Sphere1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sphere1D$NoSubSpaceException::initializeClass, 1)))
              return NULL;
            return t_Sphere1D$NoSubSpaceException::wrap_Object(Sphere1D$NoSubSpaceException(((t_Sphere1D$NoSubSpaceException *) arg)->object.this$));
          }
          static PyObject *t_Sphere1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sphere1D$NoSubSpaceException::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Sphere1D$NoSubSpaceException_init_(t_Sphere1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds)
          {
            Sphere1D$NoSubSpaceException object((jobject) NULL);

            INT_CALL(object = Sphere1D$NoSubSpaceException());
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
#include "org/orekit/gnss/antenna/AntexLoader.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScale.h"
#include "java/util/List.h"
#include "org/orekit/gnss/antenna/SatelliteAntenna.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/gnss/antenna/ReceiverAntenna.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *AntexLoader::class$ = NULL;
        jmethodID *AntexLoader::mids$ = NULL;
        bool AntexLoader::live$ = false;
        ::java::lang::String *AntexLoader::DEFAULT_ANTEX_SUPPORTED_NAMES = NULL;

        jclass AntexLoader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/AntexLoader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_init$_b4e6e392672e7dfd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_init$_c3298cacdeeaf7cf] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_findSatelliteAntenna_d3972a3ac63ca120] = env->getMethodID(cls, "findSatelliteAntenna", "(Lorg/orekit/gnss/SatelliteSystem;I)Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_getReceiversAntennas_a6156df500549a58] = env->getMethodID(cls, "getReceiversAntennas", "()Ljava/util/List;");
            mids$[mid_getSatellitesAntennas_a6156df500549a58] = env->getMethodID(cls, "getSatellitesAntennas", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ANTEX_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ANTEX_SUPPORTED_NAMES", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AntexLoader::AntexLoader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

        AntexLoader::AntexLoader(const ::org::orekit::data::DataSource & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b4e6e392672e7dfd, a0.this$, a1.this$)) {}

        AntexLoader::AntexLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3298cacdeeaf7cf, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::utils::TimeSpanMap AntexLoader::findSatelliteAntenna(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1) const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_findSatelliteAntenna_d3972a3ac63ca120], a0.this$, a1));
        }

        ::java::util::List AntexLoader::getReceiversAntennas() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getReceiversAntennas_a6156df500549a58]));
        }

        ::java::util::List AntexLoader::getSatellitesAntennas() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellitesAntennas_a6156df500549a58]));
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
        static PyObject *t_AntexLoader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AntexLoader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AntexLoader_init_(t_AntexLoader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AntexLoader_findSatelliteAntenna(t_AntexLoader *self, PyObject *args);
        static PyObject *t_AntexLoader_getReceiversAntennas(t_AntexLoader *self);
        static PyObject *t_AntexLoader_getSatellitesAntennas(t_AntexLoader *self);
        static PyObject *t_AntexLoader_get__receiversAntennas(t_AntexLoader *self, void *data);
        static PyObject *t_AntexLoader_get__satellitesAntennas(t_AntexLoader *self, void *data);
        static PyGetSetDef t_AntexLoader__fields_[] = {
          DECLARE_GET_FIELD(t_AntexLoader, receiversAntennas),
          DECLARE_GET_FIELD(t_AntexLoader, satellitesAntennas),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AntexLoader__methods_[] = {
          DECLARE_METHOD(t_AntexLoader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AntexLoader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AntexLoader, findSatelliteAntenna, METH_VARARGS),
          DECLARE_METHOD(t_AntexLoader, getReceiversAntennas, METH_NOARGS),
          DECLARE_METHOD(t_AntexLoader, getSatellitesAntennas, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AntexLoader)[] = {
          { Py_tp_methods, t_AntexLoader__methods_ },
          { Py_tp_init, (void *) t_AntexLoader_init_ },
          { Py_tp_getset, t_AntexLoader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AntexLoader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AntexLoader, t_AntexLoader, AntexLoader);

        void t_AntexLoader::install(PyObject *module)
        {
          installType(&PY_TYPE(AntexLoader), &PY_TYPE_DEF(AntexLoader), module, "AntexLoader", 0);
        }

        void t_AntexLoader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "class_", make_descriptor(AntexLoader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "wrapfn_", make_descriptor(t_AntexLoader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "boxfn_", make_descriptor(boxObject));
          env->getClass(AntexLoader::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "DEFAULT_ANTEX_SUPPORTED_NAMES", make_descriptor(j2p(*AntexLoader::DEFAULT_ANTEX_SUPPORTED_NAMES)));
        }

        static PyObject *t_AntexLoader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AntexLoader::initializeClass, 1)))
            return NULL;
          return t_AntexLoader::wrap_Object(AntexLoader(((t_AntexLoader *) arg)->object.this$));
        }
        static PyObject *t_AntexLoader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AntexLoader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AntexLoader_init_(t_AntexLoader *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              AntexLoader object((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                INT_CALL(object = AntexLoader(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              AntexLoader object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
              {
                INT_CALL(object = AntexLoader(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
              ::org::orekit::time::TimeScale a2((jobject) NULL);
              AntexLoader object((jobject) NULL);

              if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = AntexLoader(a0, a1, a2));
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

        static PyObject *t_AntexLoader_findSatelliteAntenna(t_AntexLoader *self, PyObject *args)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.findSatelliteAntenna(a0, a1));
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::orekit::gnss::antenna::PY_TYPE(SatelliteAntenna));
          }

          PyErr_SetArgsError((PyObject *) self, "findSatelliteAntenna", args);
          return NULL;
        }

        static PyObject *t_AntexLoader_getReceiversAntennas(t_AntexLoader *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getReceiversAntennas());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::antenna::PY_TYPE(ReceiverAntenna));
        }

        static PyObject *t_AntexLoader_getSatellitesAntennas(t_AntexLoader *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellitesAntennas());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_AntexLoader_get__receiversAntennas(t_AntexLoader *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getReceiversAntennas());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AntexLoader_get__satellitesAntennas(t_AntexLoader *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellitesAntennas());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/OsculatingToMeanElementsConverter.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *OsculatingToMeanElementsConverter::class$ = NULL;
        jmethodID *OsculatingToMeanElementsConverter::mids$ = NULL;
        bool OsculatingToMeanElementsConverter::live$ = false;

        jclass OsculatingToMeanElementsConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/OsculatingToMeanElementsConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_650308b767a18dcf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;ILorg/orekit/propagation/Propagator;D)V");
            mids$[mid_convert_dd3e4a8d51055f1f] = env->getMethodID(cls, "convert", "()Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OsculatingToMeanElementsConverter::OsculatingToMeanElementsConverter(const ::org::orekit::propagation::SpacecraftState & a0, jint a1, const ::org::orekit::propagation::Propagator & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_650308b767a18dcf, a0.this$, a1, a2.this$, a3)) {}

        ::org::orekit::propagation::SpacecraftState OsculatingToMeanElementsConverter::convert() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_convert_dd3e4a8d51055f1f]));
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
        static PyObject *t_OsculatingToMeanElementsConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OsculatingToMeanElementsConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OsculatingToMeanElementsConverter_init_(t_OsculatingToMeanElementsConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OsculatingToMeanElementsConverter_convert(t_OsculatingToMeanElementsConverter *self);

        static PyMethodDef t_OsculatingToMeanElementsConverter__methods_[] = {
          DECLARE_METHOD(t_OsculatingToMeanElementsConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OsculatingToMeanElementsConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OsculatingToMeanElementsConverter, convert, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OsculatingToMeanElementsConverter)[] = {
          { Py_tp_methods, t_OsculatingToMeanElementsConverter__methods_ },
          { Py_tp_init, (void *) t_OsculatingToMeanElementsConverter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OsculatingToMeanElementsConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OsculatingToMeanElementsConverter, t_OsculatingToMeanElementsConverter, OsculatingToMeanElementsConverter);

        void t_OsculatingToMeanElementsConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(OsculatingToMeanElementsConverter), &PY_TYPE_DEF(OsculatingToMeanElementsConverter), module, "OsculatingToMeanElementsConverter", 0);
        }

        void t_OsculatingToMeanElementsConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OsculatingToMeanElementsConverter), "class_", make_descriptor(OsculatingToMeanElementsConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OsculatingToMeanElementsConverter), "wrapfn_", make_descriptor(t_OsculatingToMeanElementsConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OsculatingToMeanElementsConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OsculatingToMeanElementsConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OsculatingToMeanElementsConverter::initializeClass, 1)))
            return NULL;
          return t_OsculatingToMeanElementsConverter::wrap_Object(OsculatingToMeanElementsConverter(((t_OsculatingToMeanElementsConverter *) arg)->object.this$));
        }
        static PyObject *t_OsculatingToMeanElementsConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OsculatingToMeanElementsConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OsculatingToMeanElementsConverter_init_(t_OsculatingToMeanElementsConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jint a1;
          ::org::orekit::propagation::Propagator a2((jobject) NULL);
          jdouble a3;
          OsculatingToMeanElementsConverter object((jobject) NULL);

          if (!parseArgs(args, "kIkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = OsculatingToMeanElementsConverter(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OsculatingToMeanElementsConverter_convert(t_OsculatingToMeanElementsConverter *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.convert());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/PythonPartialsObserver.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *PythonPartialsObserver::class$ = NULL;
        jmethodID *PythonPartialsObserver::mids$ = NULL;
        bool PythonPartialsObserver::live$ = false;

        jclass PythonPartialsObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/PythonPartialsObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_partialsComputed_32d762d958cb6960] = env->getMethodID(cls, "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPartialsObserver::PythonPartialsObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonPartialsObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonPartialsObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonPartialsObserver::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace numerical {
        static PyObject *t_PythonPartialsObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPartialsObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPartialsObserver_init_(t_PythonPartialsObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPartialsObserver_finalize(t_PythonPartialsObserver *self);
        static PyObject *t_PythonPartialsObserver_pythonExtension(t_PythonPartialsObserver *self, PyObject *args);
        static void JNICALL t_PythonPartialsObserver_partialsComputed0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonPartialsObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonPartialsObserver_get__self(t_PythonPartialsObserver *self, void *data);
        static PyGetSetDef t_PythonPartialsObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPartialsObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPartialsObserver__methods_[] = {
          DECLARE_METHOD(t_PythonPartialsObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPartialsObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPartialsObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPartialsObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPartialsObserver)[] = {
          { Py_tp_methods, t_PythonPartialsObserver__methods_ },
          { Py_tp_init, (void *) t_PythonPartialsObserver_init_ },
          { Py_tp_getset, t_PythonPartialsObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPartialsObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPartialsObserver, t_PythonPartialsObserver, PythonPartialsObserver);

        void t_PythonPartialsObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPartialsObserver), &PY_TYPE_DEF(PythonPartialsObserver), module, "PythonPartialsObserver", 1);
        }

        void t_PythonPartialsObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPartialsObserver), "class_", make_descriptor(PythonPartialsObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPartialsObserver), "wrapfn_", make_descriptor(t_PythonPartialsObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPartialsObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPartialsObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V", (void *) t_PythonPartialsObserver_partialsComputed0 },
            { "pythonDecRef", "()V", (void *) t_PythonPartialsObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonPartialsObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPartialsObserver::initializeClass, 1)))
            return NULL;
          return t_PythonPartialsObserver::wrap_Object(PythonPartialsObserver(((t_PythonPartialsObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonPartialsObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPartialsObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPartialsObserver_init_(t_PythonPartialsObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonPartialsObserver object((jobject) NULL);

          INT_CALL(object = PythonPartialsObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPartialsObserver_finalize(t_PythonPartialsObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPartialsObserver_pythonExtension(t_PythonPartialsObserver *self, PyObject *args)
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

        static void JNICALL t_PythonPartialsObserver_partialsComputed0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPartialsObserver::mids$[PythonPartialsObserver::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "partialsComputed", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonPartialsObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPartialsObserver::mids$[PythonPartialsObserver::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPartialsObserver::mids$[PythonPartialsObserver::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonPartialsObserver_get__self(t_PythonPartialsObserver *self, void *data)
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
#include "org/hipparchus/analysis/solvers/BisectionSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BisectionSolver::class$ = NULL;
        jmethodID *BisectionSolver::mids$ = NULL;
        bool BisectionSolver::live$ = false;

        jclass BisectionSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BisectionSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_456d9a2f64d6b28d] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BisectionSolver::BisectionSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        BisectionSolver::BisectionSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        BisectionSolver::BisectionSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}
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
        static PyObject *t_BisectionSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BisectionSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BisectionSolver_of_(t_BisectionSolver *self, PyObject *args);
        static int t_BisectionSolver_init_(t_BisectionSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BisectionSolver_get__parameters_(t_BisectionSolver *self, void *data);
        static PyGetSetDef t_BisectionSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BisectionSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BisectionSolver__methods_[] = {
          DECLARE_METHOD(t_BisectionSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BisectionSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BisectionSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BisectionSolver)[] = {
          { Py_tp_methods, t_BisectionSolver__methods_ },
          { Py_tp_init, (void *) t_BisectionSolver_init_ },
          { Py_tp_getset, t_BisectionSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BisectionSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BisectionSolver, t_BisectionSolver, BisectionSolver);
        PyObject *t_BisectionSolver::wrap_Object(const BisectionSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BisectionSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BisectionSolver *self = (t_BisectionSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BisectionSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BisectionSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BisectionSolver *self = (t_BisectionSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BisectionSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BisectionSolver), &PY_TYPE_DEF(BisectionSolver), module, "BisectionSolver", 0);
        }

        void t_BisectionSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BisectionSolver), "class_", make_descriptor(BisectionSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BisectionSolver), "wrapfn_", make_descriptor(t_BisectionSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BisectionSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BisectionSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BisectionSolver::initializeClass, 1)))
            return NULL;
          return t_BisectionSolver::wrap_Object(BisectionSolver(((t_BisectionSolver *) arg)->object.this$));
        }
        static PyObject *t_BisectionSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BisectionSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BisectionSolver_of_(t_BisectionSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BisectionSolver_init_(t_BisectionSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BisectionSolver object((jobject) NULL);

              INT_CALL(object = BisectionSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              BisectionSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = BisectionSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BisectionSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BisectionSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_BisectionSolver_get__parameters_(t_BisectionSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmSatelliteEphemeris.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *Acm::class$ = NULL;
              jmethodID *Acm::mids$ = NULL;
              bool Acm::live$ = false;
              ::java::lang::String *Acm::ATT_LINE = NULL;
              ::java::lang::String *Acm::COV_LINE = NULL;
              ::java::lang::String *Acm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Acm::ROOT = NULL;
              ::java::lang::String *Acm::UNKNOWN_OBJECT = NULL;

              jclass Acm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/Acm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ebab4e4b79b3ed3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getData_5495d4cfd318eeec] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmData;");
                  mids$[mid_getMetadata_1f3498d58ace0c4b] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadata;");
                  mids$[mid_getSatellites_d6753b7055940a54] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ATT_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "ATT_LINE", "Ljava/lang/String;"));
                  COV_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "COV_LINE", "Ljava/lang/String;"));
                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  UNKNOWN_OBJECT = new ::java::lang::String(env->getStaticObjectField(cls, "UNKNOWN_OBJECT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Acm::Acm(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_7ebab4e4b79b3ed3, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::files::ccsds::ndm::adm::acm::AcmData Acm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AcmData(env->callObjectMethod(this$, mids$[mid_getData_5495d4cfd318eeec]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata Acm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_1f3498d58ace0c4b]));
              }

              ::java::util::Map Acm::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_d6753b7055940a54]));
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
              static PyObject *t_Acm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Acm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Acm_of_(t_Acm *self, PyObject *args);
              static int t_Acm_init_(t_Acm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Acm_getData(t_Acm *self);
              static PyObject *t_Acm_getMetadata(t_Acm *self);
              static PyObject *t_Acm_getSatellites(t_Acm *self);
              static PyObject *t_Acm_get__data(t_Acm *self, void *data);
              static PyObject *t_Acm_get__metadata(t_Acm *self, void *data);
              static PyObject *t_Acm_get__satellites(t_Acm *self, void *data);
              static PyObject *t_Acm_get__parameters_(t_Acm *self, void *data);
              static PyGetSetDef t_Acm__fields_[] = {
                DECLARE_GET_FIELD(t_Acm, data),
                DECLARE_GET_FIELD(t_Acm, metadata),
                DECLARE_GET_FIELD(t_Acm, satellites),
                DECLARE_GET_FIELD(t_Acm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Acm__methods_[] = {
                DECLARE_METHOD(t_Acm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Acm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Acm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Acm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Acm, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_Acm, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Acm)[] = {
                { Py_tp_methods, t_Acm__methods_ },
                { Py_tp_init, (void *) t_Acm_init_ },
                { Py_tp_getset, t_Acm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Acm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Acm, t_Acm, Acm);
              PyObject *t_Acm::wrap_Object(const Acm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Acm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Acm *self = (t_Acm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Acm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Acm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Acm *self = (t_Acm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Acm::install(PyObject *module)
              {
                installType(&PY_TYPE(Acm), &PY_TYPE_DEF(Acm), module, "Acm", 0);
              }

              void t_Acm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "class_", make_descriptor(Acm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "wrapfn_", make_descriptor(t_Acm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Acm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "ATT_LINE", make_descriptor(j2p(*Acm::ATT_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "COV_LINE", make_descriptor(j2p(*Acm::COV_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Acm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "ROOT", make_descriptor(j2p(*Acm::ROOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "UNKNOWN_OBJECT", make_descriptor(j2p(*Acm::UNKNOWN_OBJECT)));
              }

              static PyObject *t_Acm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Acm::initializeClass, 1)))
                  return NULL;
                return t_Acm::wrap_Object(Acm(((t_Acm *) arg)->object.this$));
              }
              static PyObject *t_Acm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Acm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Acm_of_(t_Acm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Acm_init_(t_Acm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Acm object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Acm(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Acm_getData(t_Acm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmData::wrap_Object(result);
              }

              static PyObject *t_Acm_getMetadata(t_Acm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmMetadata::wrap_Object(result);
              }

              static PyObject *t_Acm_getSatellites(t_Acm *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AcmSatelliteEphemeris));
              }
              static PyObject *t_Acm_get__parameters_(t_Acm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Acm_get__data(t_Acm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmData::wrap_Object(value);
              }

              static PyObject *t_Acm_get__metadata(t_Acm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmMetadata::wrap_Object(value);
              }

              static PyObject *t_Acm_get__satellites(t_Acm *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockOneWayGNSSPhaseModifier::mids$ = NULL;
          bool RelativisticJ2ClockOneWayGNSSPhaseModifier::live$ = false;

          jclass RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockOneWayGNSSPhaseModifier::RelativisticJ2ClockOneWayGNSSPhaseModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void RelativisticJ2ClockOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockOneWayGNSSPhaseModifier_init_(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier, t_RelativisticJ2ClockOneWayGNSSPhaseModifier, RelativisticJ2ClockOneWayGNSSPhaseModifier);

          void t_RelativisticJ2ClockOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), &PY_TYPE_DEF(RelativisticJ2ClockOneWayGNSSPhaseModifier), module, "RelativisticJ2ClockOneWayGNSSPhaseModifier", 0);
          }

          void t_RelativisticJ2ClockOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), "class_", make_descriptor(RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockOneWayGNSSPhaseModifier::wrap_Object(RelativisticJ2ClockOneWayGNSSPhaseModifier(((t_RelativisticJ2ClockOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockOneWayGNSSPhaseModifier_init_(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockOneWayGNSSPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockOneWayGNSSPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *SubHyperplane$SplitSubHyperplane::class$ = NULL;
        jmethodID *SubHyperplane$SplitSubHyperplane::mids$ = NULL;
        bool SubHyperplane$SplitSubHyperplane::live$ = false;

        jclass SubHyperplane$SplitSubHyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2399a333b492915e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;Lorg/hipparchus/geometry/partitioning/SubHyperplane;)V");
            mids$[mid_getMinus_a66e04f05d5608cc] = env->getMethodID(cls, "getMinus", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getPlus_a66e04f05d5608cc] = env->getMethodID(cls, "getPlus", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getSide_930ceaef64a5a9be] = env->getMethodID(cls, "getSide", "()Lorg/hipparchus/geometry/partitioning/Side;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SubHyperplane$SplitSubHyperplane::SubHyperplane$SplitSubHyperplane(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0, const ::org::hipparchus::geometry::partitioning::SubHyperplane & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2399a333b492915e, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::partitioning::SubHyperplane SubHyperplane$SplitSubHyperplane::getMinus() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getMinus_a66e04f05d5608cc]));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane SubHyperplane$SplitSubHyperplane::getPlus() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getPlus_a66e04f05d5608cc]));
        }

        ::org::hipparchus::geometry::partitioning::Side SubHyperplane$SplitSubHyperplane::getSide() const
        {
          return ::org::hipparchus::geometry::partitioning::Side(env->callObjectMethod(this$, mids$[mid_getSide_930ceaef64a5a9be]));
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
        static PyObject *t_SubHyperplane$SplitSubHyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_of_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args);
        static int t_SubHyperplane$SplitSubHyperplane_init_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_getMinus(t_SubHyperplane$SplitSubHyperplane *self);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_getPlus(t_SubHyperplane$SplitSubHyperplane *self);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_getSide(t_SubHyperplane$SplitSubHyperplane *self);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__minus(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__plus(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__side(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__parameters_(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyGetSetDef t_SubHyperplane$SplitSubHyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, minus),
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, plus),
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, side),
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SubHyperplane$SplitSubHyperplane__methods_[] = {
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, getMinus, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, getPlus, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, getSide, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SubHyperplane$SplitSubHyperplane)[] = {
          { Py_tp_methods, t_SubHyperplane$SplitSubHyperplane__methods_ },
          { Py_tp_init, (void *) t_SubHyperplane$SplitSubHyperplane_init_ },
          { Py_tp_getset, t_SubHyperplane$SplitSubHyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SubHyperplane$SplitSubHyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SubHyperplane$SplitSubHyperplane, t_SubHyperplane$SplitSubHyperplane, SubHyperplane$SplitSubHyperplane);
        PyObject *t_SubHyperplane$SplitSubHyperplane::wrap_Object(const SubHyperplane$SplitSubHyperplane& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane$SplitSubHyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane$SplitSubHyperplane *self = (t_SubHyperplane$SplitSubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SubHyperplane$SplitSubHyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane$SplitSubHyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane$SplitSubHyperplane *self = (t_SubHyperplane$SplitSubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SubHyperplane$SplitSubHyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(SubHyperplane$SplitSubHyperplane), &PY_TYPE_DEF(SubHyperplane$SplitSubHyperplane), module, "SubHyperplane$SplitSubHyperplane", 0);
        }

        void t_SubHyperplane$SplitSubHyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane$SplitSubHyperplane), "class_", make_descriptor(SubHyperplane$SplitSubHyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane$SplitSubHyperplane), "wrapfn_", make_descriptor(t_SubHyperplane$SplitSubHyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane$SplitSubHyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SubHyperplane$SplitSubHyperplane::initializeClass, 1)))
            return NULL;
          return t_SubHyperplane$SplitSubHyperplane::wrap_Object(SubHyperplane$SplitSubHyperplane(((t_SubHyperplane$SplitSubHyperplane *) arg)->object.this$));
        }
        static PyObject *t_SubHyperplane$SplitSubHyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SubHyperplane$SplitSubHyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_of_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SubHyperplane$SplitSubHyperplane_init_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane a1((jobject) NULL);
          PyTypeObject **p1;
          SubHyperplane$SplitSubHyperplane object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            INT_CALL(object = SubHyperplane$SplitSubHyperplane(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_getMinus(t_SubHyperplane$SplitSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_getPlus(t_SubHyperplane$SplitSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_getSide(t_SubHyperplane$SplitSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Side result((jobject) NULL);
          OBJ_CALL(result = self->object.getSide());
          return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(result);
        }
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__parameters_(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__minus(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__plus(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__side(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Side value((jobject) NULL);
          OBJ_CALL(value = self->object.getSide());
          return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonBoundedAttitudeProvider.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonBoundedAttitudeProvider::class$ = NULL;
      jmethodID *PythonBoundedAttitudeProvider::mids$ = NULL;
      bool PythonBoundedAttitudeProvider::live$ = false;

      jclass PythonBoundedAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonBoundedAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonBoundedAttitudeProvider::PythonBoundedAttitudeProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonBoundedAttitudeProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonBoundedAttitudeProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonBoundedAttitudeProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonBoundedAttitudeProvider_init_(t_PythonBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonBoundedAttitudeProvider_finalize(t_PythonBoundedAttitudeProvider *self);
      static PyObject *t_PythonBoundedAttitudeProvider_pythonExtension(t_PythonBoundedAttitudeProvider *self, PyObject *args);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMaxDate2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMinDate3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonBoundedAttitudeProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonBoundedAttitudeProvider_get__self(t_PythonBoundedAttitudeProvider *self, void *data);
      static PyGetSetDef t_PythonBoundedAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonBoundedAttitudeProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonBoundedAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonBoundedAttitudeProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonBoundedAttitudeProvider)[] = {
        { Py_tp_methods, t_PythonBoundedAttitudeProvider__methods_ },
        { Py_tp_init, (void *) t_PythonBoundedAttitudeProvider_init_ },
        { Py_tp_getset, t_PythonBoundedAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonBoundedAttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonBoundedAttitudeProvider, t_PythonBoundedAttitudeProvider, PythonBoundedAttitudeProvider);

      void t_PythonBoundedAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonBoundedAttitudeProvider), &PY_TYPE_DEF(PythonBoundedAttitudeProvider), module, "PythonBoundedAttitudeProvider", 1);
      }

      void t_PythonBoundedAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedAttitudeProvider), "class_", make_descriptor(PythonBoundedAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedAttitudeProvider), "wrapfn_", make_descriptor(t_PythonBoundedAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonBoundedAttitudeProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonBoundedAttitudeProvider_getAttitude0 },
          { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonBoundedAttitudeProvider_getAttitude1 },
          { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedAttitudeProvider_getMaxDate2 },
          { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedAttitudeProvider_getMinDate3 },
          { "pythonDecRef", "()V", (void *) t_PythonBoundedAttitudeProvider_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonBoundedAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_PythonBoundedAttitudeProvider::wrap_Object(PythonBoundedAttitudeProvider(((t_PythonBoundedAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonBoundedAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonBoundedAttitudeProvider_init_(t_PythonBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonBoundedAttitudeProvider object((jobject) NULL);

        INT_CALL(object = PythonBoundedAttitudeProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonBoundedAttitudeProvider_finalize(t_PythonBoundedAttitudeProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonBoundedAttitudeProvider_pythonExtension(t_PythonBoundedAttitudeProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMaxDate2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_a27fc9afd27e559d]);
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

      static jobject JNICALL t_PythonBoundedAttitudeProvider_getMinDate3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_a27fc9afd27e559d]);
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

      static void JNICALL t_PythonBoundedAttitudeProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonBoundedAttitudeProvider::mids$[PythonBoundedAttitudeProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonBoundedAttitudeProvider_get__self(t_PythonBoundedAttitudeProvider *self, void *data)
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
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedRealFieldUnivariateSolver$Interval::class$ = NULL;
        jmethodID *BracketedRealFieldUnivariateSolver$Interval::mids$ = NULL;
        bool BracketedRealFieldUnivariateSolver$Interval::live$ = false;

        jclass BracketedRealFieldUnivariateSolver$Interval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9cabefcf88bb1df4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getLeftAbscissa_e6d4d3215c30992a] = env->getMethodID(cls, "getLeftAbscissa", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getLeftValue_e6d4d3215c30992a] = env->getMethodID(cls, "getLeftValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getRightAbscissa_e6d4d3215c30992a] = env->getMethodID(cls, "getRightAbscissa", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getRightValue_e6d4d3215c30992a] = env->getMethodID(cls, "getRightValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getSide_04df0bfa22583b14] = env->getMethodID(cls, "getSide", "(Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketedRealFieldUnivariateSolver$Interval::BracketedRealFieldUnivariateSolver$Interval(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9cabefcf88bb1df4, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getLeftAbscissa() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeftAbscissa_e6d4d3215c30992a]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getLeftValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeftValue_e6d4d3215c30992a]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getRightAbscissa() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAbscissa_e6d4d3215c30992a]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getRightValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightValue_e6d4d3215c30992a]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getSide(const ::org::hipparchus::analysis::solvers::AllowedSolution & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSide_04df0bfa22583b14], a0.this$));
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
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_of_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args);
        static int t_BracketedRealFieldUnivariateSolver$Interval_init_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftValue(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightValue(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getSide(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__parameters_(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyGetSetDef t_BracketedRealFieldUnivariateSolver$Interval__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, leftAbscissa),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, leftValue),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, rightAbscissa),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, rightValue),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedRealFieldUnivariateSolver$Interval__methods_[] = {
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getLeftAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getLeftValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getRightAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getRightValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getSide, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedRealFieldUnivariateSolver$Interval)[] = {
          { Py_tp_methods, t_BracketedRealFieldUnivariateSolver$Interval__methods_ },
          { Py_tp_init, (void *) t_BracketedRealFieldUnivariateSolver$Interval_init_ },
          { Py_tp_getset, t_BracketedRealFieldUnivariateSolver$Interval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedRealFieldUnivariateSolver$Interval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketedRealFieldUnivariateSolver$Interval, t_BracketedRealFieldUnivariateSolver$Interval, BracketedRealFieldUnivariateSolver$Interval);
        PyObject *t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(const BracketedRealFieldUnivariateSolver$Interval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver$Interval *self = (t_BracketedRealFieldUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedRealFieldUnivariateSolver$Interval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver$Interval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver$Interval *self = (t_BracketedRealFieldUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedRealFieldUnivariateSolver$Interval::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), &PY_TYPE_DEF(BracketedRealFieldUnivariateSolver$Interval), module, "BracketedRealFieldUnivariateSolver$Interval", 0);
        }

        void t_BracketedRealFieldUnivariateSolver$Interval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), "class_", make_descriptor(BracketedRealFieldUnivariateSolver$Interval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), "wrapfn_", make_descriptor(t_BracketedRealFieldUnivariateSolver$Interval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedRealFieldUnivariateSolver$Interval::initializeClass, 1)))
            return NULL;
          return t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(BracketedRealFieldUnivariateSolver$Interval(((t_BracketedRealFieldUnivariateSolver$Interval *) arg)->object.this$));
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedRealFieldUnivariateSolver$Interval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_of_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BracketedRealFieldUnivariateSolver$Interval_init_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          BracketedRealFieldUnivariateSolver$Interval object((jobject) NULL);

          if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = BracketedRealFieldUnivariateSolver$Interval(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getLeftAbscissa());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftValue(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getLeftValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRightAbscissa());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightValue(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRightValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getSide(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::AllowedSolution a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
          {
            OBJ_CALL(result = self->object.getSide(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSide", arg);
          return NULL;
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__parameters_(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getLeftAbscissa());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getLeftValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRightAbscissa());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRightValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersWriter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *SpacecraftParametersWriter::class$ = NULL;
            jmethodID *SpacecraftParametersWriter::mids$ = NULL;
            bool SpacecraftParametersWriter::live$ = false;

            jclass SpacecraftParametersWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/SpacecraftParametersWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b5de015f921e0ed2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;)V");
                mids$[mid_writeContent_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SpacecraftParametersWriter::SpacecraftParametersWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a2) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_b5de015f921e0ed2, a0.this$, a1.this$, a2.this$)) {}
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
            static PyObject *t_SpacecraftParametersWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParametersWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SpacecraftParametersWriter_init_(t_SpacecraftParametersWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_SpacecraftParametersWriter__methods_[] = {
              DECLARE_METHOD(t_SpacecraftParametersWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SpacecraftParametersWriter)[] = {
              { Py_tp_methods, t_SpacecraftParametersWriter__methods_ },
              { Py_tp_init, (void *) t_SpacecraftParametersWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SpacecraftParametersWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(SpacecraftParametersWriter, t_SpacecraftParametersWriter, SpacecraftParametersWriter);

            void t_SpacecraftParametersWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(SpacecraftParametersWriter), &PY_TYPE_DEF(SpacecraftParametersWriter), module, "SpacecraftParametersWriter", 0);
            }

            void t_SpacecraftParametersWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersWriter), "class_", make_descriptor(SpacecraftParametersWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersWriter), "wrapfn_", make_descriptor(t_SpacecraftParametersWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SpacecraftParametersWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SpacecraftParametersWriter::initializeClass, 1)))
                return NULL;
              return t_SpacecraftParametersWriter::wrap_Object(SpacecraftParametersWriter(((t_SpacecraftParametersWriter *) arg)->object.this$));
            }
            static PyObject *t_SpacecraftParametersWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SpacecraftParametersWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SpacecraftParametersWriter_init_(t_SpacecraftParametersWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a2((jobject) NULL);
              SpacecraftParametersWriter object((jobject) NULL);

              if (!parseArgs(args, "ssk", ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SpacecraftParametersWriter(a0, a1, a2));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractDualFrequencyCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractDualFrequencyCombination::class$ = NULL;
          jmethodID *AbstractDualFrequencyCombination::mids$ = NULL;
          bool AbstractDualFrequencyCombination::live$ = false;
          jdouble AbstractDualFrequencyCombination::MHZ_TO_HZ = (jdouble) 0;

          jclass AbstractDualFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractDualFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_d8c8276403544c3f] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_combine_f366866d8f2f42c5] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationData;");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getCombinedValue_17aea80d13f83b81] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_f4c99548ccdd1967] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MHZ_TO_HZ = env->getStaticDoubleField(cls, "MHZ_TO_HZ");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet AbstractDualFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_d8c8276403544c3f], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationData AbstractDualFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationData(env->callObjectMethod(this$, mids$[mid_combine_f366866d8f2f42c5], a0.this$, a1.this$));
          }

          ::java::lang::String AbstractDualFrequencyCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
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
          static PyObject *t_AbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractDualFrequencyCombination_combine(t_AbstractDualFrequencyCombination *self, PyObject *args);
          static PyObject *t_AbstractDualFrequencyCombination_getName(t_AbstractDualFrequencyCombination *self);
          static PyObject *t_AbstractDualFrequencyCombination_get__name(t_AbstractDualFrequencyCombination *self, void *data);
          static PyGetSetDef t_AbstractDualFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractDualFrequencyCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractDualFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, combine, METH_VARARGS),
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractDualFrequencyCombination)[] = {
            { Py_tp_methods, t_AbstractDualFrequencyCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractDualFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractDualFrequencyCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractDualFrequencyCombination, t_AbstractDualFrequencyCombination, AbstractDualFrequencyCombination);

          void t_AbstractDualFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractDualFrequencyCombination), &PY_TYPE_DEF(AbstractDualFrequencyCombination), module, "AbstractDualFrequencyCombination", 0);
          }

          void t_AbstractDualFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "class_", make_descriptor(AbstractDualFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "wrapfn_", make_descriptor(t_AbstractDualFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "boxfn_", make_descriptor(boxObject));
            env->getClass(AbstractDualFrequencyCombination::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "MHZ_TO_HZ", make_descriptor(AbstractDualFrequencyCombination::MHZ_TO_HZ));
          }

          static PyObject *t_AbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractDualFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_AbstractDualFrequencyCombination::wrap_Object(AbstractDualFrequencyCombination(((t_AbstractDualFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_AbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractDualFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractDualFrequencyCombination_combine(t_AbstractDualFrequencyCombination *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.combine(a0));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
                ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationData result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.combine(a0, a1));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationData::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "combine", args);
            return NULL;
          }

          static PyObject *t_AbstractDualFrequencyCombination_getName(t_AbstractDualFrequencyCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_AbstractDualFrequencyCombination_get__name(t_AbstractDualFrequencyCombination *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/NetworkRecord.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *NetworkRecord::class$ = NULL;
          jmethodID *NetworkRecord::mids$ = NULL;
          bool NetworkRecord::live$ = false;

          jclass NetworkRecord::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/NetworkRecord");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_areFeesRequired_e470b6d9e0d979db] = env->getMethodID(cls, "areFeesRequired", "()Z");
              mids$[mid_getAuthentication_5f15d37696ebc041] = env->getMethodID(cls, "getAuthentication", "()Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_getNetworkIdentifier_0090f7797e403f43] = env->getMethodID(cls, "getNetworkIdentifier", "()Ljava/lang/String;");
              mids$[mid_getNetworkInfoAddress_0090f7797e403f43] = env->getMethodID(cls, "getNetworkInfoAddress", "()Ljava/lang/String;");
              mids$[mid_getOperator_0090f7797e403f43] = env->getMethodID(cls, "getOperator", "()Ljava/lang/String;");
              mids$[mid_getRecordType_9f311496246ad578] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getRegistrationAddress_0090f7797e403f43] = env->getMethodID(cls, "getRegistrationAddress", "()Ljava/lang/String;");
              mids$[mid_getStreamInfoAddress_0090f7797e403f43] = env->getMethodID(cls, "getStreamInfoAddress", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NetworkRecord::NetworkRecord(const ::java::lang::String & a0) : ::org::orekit::gnss::metric::ntrip::Record(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

          jboolean NetworkRecord::areFeesRequired() const
          {
            return env->callBooleanMethod(this$, mids$[mid_areFeesRequired_e470b6d9e0d979db]);
          }

          ::org::orekit::gnss::metric::ntrip::Authentication NetworkRecord::getAuthentication() const
          {
            return ::org::orekit::gnss::metric::ntrip::Authentication(env->callObjectMethod(this$, mids$[mid_getAuthentication_5f15d37696ebc041]));
          }

          ::java::lang::String NetworkRecord::getNetworkIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNetworkIdentifier_0090f7797e403f43]));
          }

          ::java::lang::String NetworkRecord::getNetworkInfoAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNetworkInfoAddress_0090f7797e403f43]));
          }

          ::java::lang::String NetworkRecord::getOperator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperator_0090f7797e403f43]));
          }

          ::org::orekit::gnss::metric::ntrip::RecordType NetworkRecord::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_9f311496246ad578]));
          }

          ::java::lang::String NetworkRecord::getRegistrationAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRegistrationAddress_0090f7797e403f43]));
          }

          ::java::lang::String NetworkRecord::getStreamInfoAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStreamInfoAddress_0090f7797e403f43]));
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
          static PyObject *t_NetworkRecord_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NetworkRecord_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NetworkRecord_init_(t_NetworkRecord *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NetworkRecord_areFeesRequired(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getAuthentication(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getNetworkIdentifier(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getNetworkInfoAddress(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getOperator(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getRecordType(t_NetworkRecord *self, PyObject *args);
          static PyObject *t_NetworkRecord_getRegistrationAddress(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getStreamInfoAddress(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_get__authentication(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__networkIdentifier(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__networkInfoAddress(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__operator(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__recordType(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__registrationAddress(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__streamInfoAddress(t_NetworkRecord *self, void *data);
          static PyGetSetDef t_NetworkRecord__fields_[] = {
            DECLARE_GET_FIELD(t_NetworkRecord, authentication),
            DECLARE_GET_FIELD(t_NetworkRecord, networkIdentifier),
            DECLARE_GET_FIELD(t_NetworkRecord, networkInfoAddress),
            DECLARE_GET_FIELD(t_NetworkRecord, operator),
            DECLARE_GET_FIELD(t_NetworkRecord, recordType),
            DECLARE_GET_FIELD(t_NetworkRecord, registrationAddress),
            DECLARE_GET_FIELD(t_NetworkRecord, streamInfoAddress),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NetworkRecord__methods_[] = {
            DECLARE_METHOD(t_NetworkRecord, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NetworkRecord, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NetworkRecord, areFeesRequired, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getAuthentication, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getNetworkIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getNetworkInfoAddress, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getOperator, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getRecordType, METH_VARARGS),
            DECLARE_METHOD(t_NetworkRecord, getRegistrationAddress, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getStreamInfoAddress, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NetworkRecord)[] = {
            { Py_tp_methods, t_NetworkRecord__methods_ },
            { Py_tp_init, (void *) t_NetworkRecord_init_ },
            { Py_tp_getset, t_NetworkRecord__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NetworkRecord)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::ntrip::Record),
            NULL
          };

          DEFINE_TYPE(NetworkRecord, t_NetworkRecord, NetworkRecord);

          void t_NetworkRecord::install(PyObject *module)
          {
            installType(&PY_TYPE(NetworkRecord), &PY_TYPE_DEF(NetworkRecord), module, "NetworkRecord", 0);
          }

          void t_NetworkRecord::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkRecord), "class_", make_descriptor(NetworkRecord::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkRecord), "wrapfn_", make_descriptor(t_NetworkRecord::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkRecord), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NetworkRecord_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NetworkRecord::initializeClass, 1)))
              return NULL;
            return t_NetworkRecord::wrap_Object(NetworkRecord(((t_NetworkRecord *) arg)->object.this$));
          }
          static PyObject *t_NetworkRecord_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NetworkRecord::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NetworkRecord_init_(t_NetworkRecord *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            NetworkRecord object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = NetworkRecord(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NetworkRecord_areFeesRequired(t_NetworkRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.areFeesRequired());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_NetworkRecord_getAuthentication(t_NetworkRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication result((jobject) NULL);
            OBJ_CALL(result = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(result);
          }

          static PyObject *t_NetworkRecord_getNetworkIdentifier(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetworkIdentifier());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getNetworkInfoAddress(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetworkInfoAddress());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getOperator(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getOperator());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getRecordType(t_NetworkRecord *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getRecordType());
              return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(NetworkRecord), (PyObject *) self, "getRecordType", args, 2);
          }

          static PyObject *t_NetworkRecord_getRegistrationAddress(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRegistrationAddress());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getStreamInfoAddress(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStreamInfoAddress());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_get__authentication(t_NetworkRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication value((jobject) NULL);
            OBJ_CALL(value = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(value);
          }

          static PyObject *t_NetworkRecord_get__networkIdentifier(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetworkIdentifier());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__networkInfoAddress(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetworkInfoAddress());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__operator(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getOperator());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__recordType(t_NetworkRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }

          static PyObject *t_NetworkRecord_get__registrationAddress(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRegistrationAddress());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__streamInfoAddress(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStreamInfoAddress());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldGradientField::class$ = NULL;
        jmethodID *FieldGradientField::mids$ = NULL;
        bool FieldGradientField::live$ = false;

        jclass FieldGradientField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldGradientField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getField_f3ab988ef264f671] = env->getStaticMethodID(cls, "getField", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/analysis/differentiation/FieldGradientField;");
            mids$[mid_getOne_851fced738c97d02] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_851fced738c97d02] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldGradientField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        FieldGradientField FieldGradientField::getField(const ::org::hipparchus::Field & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradientField(env->callStaticObjectMethod(cls, mids$[mid_getField_f3ab988ef264f671], a0.this$, a1));
        }

        ::org::hipparchus::analysis::differentiation::FieldGradient FieldGradientField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldGradient(env->callObjectMethod(this$, mids$[mid_getOne_851fced738c97d02]));
        }

        ::java::lang::Class FieldGradientField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
        }

        ::org::hipparchus::analysis::differentiation::FieldGradient FieldGradientField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldGradient(env->callObjectMethod(this$, mids$[mid_getZero_851fced738c97d02]));
        }

        jint FieldGradientField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
        static PyObject *t_FieldGradientField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradientField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradientField_of_(t_FieldGradientField *self, PyObject *args);
        static PyObject *t_FieldGradientField_equals(t_FieldGradientField *self, PyObject *args);
        static PyObject *t_FieldGradientField_getField(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradientField_getOne(t_FieldGradientField *self);
        static PyObject *t_FieldGradientField_getRuntimeClass(t_FieldGradientField *self);
        static PyObject *t_FieldGradientField_getZero(t_FieldGradientField *self);
        static PyObject *t_FieldGradientField_hashCode(t_FieldGradientField *self, PyObject *args);
        static PyObject *t_FieldGradientField_get__one(t_FieldGradientField *self, void *data);
        static PyObject *t_FieldGradientField_get__runtimeClass(t_FieldGradientField *self, void *data);
        static PyObject *t_FieldGradientField_get__zero(t_FieldGradientField *self, void *data);
        static PyObject *t_FieldGradientField_get__parameters_(t_FieldGradientField *self, void *data);
        static PyGetSetDef t_FieldGradientField__fields_[] = {
          DECLARE_GET_FIELD(t_FieldGradientField, one),
          DECLARE_GET_FIELD(t_FieldGradientField, runtimeClass),
          DECLARE_GET_FIELD(t_FieldGradientField, zero),
          DECLARE_GET_FIELD(t_FieldGradientField, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldGradientField__methods_[] = {
          DECLARE_METHOD(t_FieldGradientField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradientField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradientField, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradientField, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradientField, getField, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldGradientField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradientField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradientField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradientField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldGradientField)[] = {
          { Py_tp_methods, t_FieldGradientField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldGradientField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldGradientField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldGradientField, t_FieldGradientField, FieldGradientField);
        PyObject *t_FieldGradientField::wrap_Object(const FieldGradientField& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradientField::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradientField *self = (t_FieldGradientField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldGradientField::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradientField::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradientField *self = (t_FieldGradientField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldGradientField::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldGradientField), &PY_TYPE_DEF(FieldGradientField), module, "FieldGradientField", 0);
        }

        void t_FieldGradientField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradientField), "class_", make_descriptor(FieldGradientField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradientField), "wrapfn_", make_descriptor(t_FieldGradientField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradientField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldGradientField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldGradientField::initializeClass, 1)))
            return NULL;
          return t_FieldGradientField::wrap_Object(FieldGradientField(((t_FieldGradientField *) arg)->object.this$));
        }
        static PyObject *t_FieldGradientField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldGradientField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldGradientField_of_(t_FieldGradientField *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldGradientField_equals(t_FieldGradientField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldGradientField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldGradientField_getField(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          FieldGradientField result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradientField::getField(a0, a1));
            return t_FieldGradientField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getField", args);
          return NULL;
        }

        static PyObject *t_FieldGradientField_getOne(t_FieldGradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradientField_getRuntimeClass(t_FieldGradientField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FieldGradientField_getZero(t_FieldGradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradientField_hashCode(t_FieldGradientField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldGradientField), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FieldGradientField_get__parameters_(t_FieldGradientField *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldGradientField_get__one(t_FieldGradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(value);
        }

        static PyObject *t_FieldGradientField_get__runtimeClass(t_FieldGradientField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FieldGradientField_get__zero(t_FieldGradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTZonalContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTZonalContext::class$ = NULL;
            jmethodID *DSSTZonalContext::mids$ = NULL;
            bool DSSTZonalContext::live$ = false;

            jclass DSSTZonalContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTZonalContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getBB_456d9a2f64d6b28d] = env->getMethodID(cls, "getBB", "()D");
                mids$[mid_getBoA_456d9a2f64d6b28d] = env->getMethodID(cls, "getBoA", "()D");
                mids$[mid_getBoABpo_456d9a2f64d6b28d] = env->getMethodID(cls, "getBoABpo", "()D");
                mids$[mid_getCXO2N2A2_456d9a2f64d6b28d] = env->getMethodID(cls, "getCXO2N2A2", "()D");
                mids$[mid_getHK_456d9a2f64d6b28d] = env->getMethodID(cls, "getHK", "()D");
                mids$[mid_getK2MH2_456d9a2f64d6b28d] = env->getMethodID(cls, "getK2MH2", "()D");
                mids$[mid_getK2MH2O2_456d9a2f64d6b28d] = env->getMethodID(cls, "getK2MH2O2", "()D");
                mids$[mid_getM2aoA_456d9a2f64d6b28d] = env->getMethodID(cls, "getM2aoA", "()D");
                mids$[mid_getMCo2AB_456d9a2f64d6b28d] = env->getMethodID(cls, "getMCo2AB", "()D");
                mids$[mid_getMeanMotion_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMuoa_456d9a2f64d6b28d] = env->getMethodID(cls, "getMuoa", "()D");
                mids$[mid_getOON2A2_456d9a2f64d6b28d] = env->getMethodID(cls, "getOON2A2", "()D");
                mids$[mid_getOoAB_456d9a2f64d6b28d] = env->getMethodID(cls, "getOoAB", "()D");
                mids$[mid_getRoa_456d9a2f64d6b28d] = env->getMethodID(cls, "getRoa", "()D");
                mids$[mid_getX_456d9a2f64d6b28d] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getX2ON2A2XP1_456d9a2f64d6b28d] = env->getMethodID(cls, "getX2ON2A2XP1", "()D");
                mids$[mid_getX3ON2A_456d9a2f64d6b28d] = env->getMethodID(cls, "getX3ON2A", "()D");
                mids$[mid_getXON2A2_456d9a2f64d6b28d] = env->getMethodID(cls, "getXON2A2", "()D");
                mids$[mid_getXX_456d9a2f64d6b28d] = env->getMethodID(cls, "getXX", "()D");
                mids$[mid_getXXX_456d9a2f64d6b28d] = env->getMethodID(cls, "getXXX", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble DSSTZonalContext::getBB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBB_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getBoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoA_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getBoABpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoABpo_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getCXO2N2A2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCXO2N2A2_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getHK() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHK_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getK2MH2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getK2MH2_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getK2MH2O2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getK2MH2O2_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getM2aoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM2aoA_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getMCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMCo2AB_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getMuoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMuoa_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getOON2A2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOON2A2_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getOoAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoAB_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getRoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRoa_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getX2ON2A2XP1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX2ON2A2XP1_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getX3ON2A() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX3ON2A_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getXON2A2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXON2A2_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXX_456d9a2f64d6b28d]);
            }

            jdouble DSSTZonalContext::getXXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXXX_456d9a2f64d6b28d]);
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
            static PyObject *t_DSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTZonalContext_getBB(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getBoA(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getBoABpo(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getCXO2N2A2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getHK(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getK2MH2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getK2MH2O2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getM2aoA(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getMCo2AB(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getMeanMotion(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getMuoa(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getOON2A2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getOoAB(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getRoa(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getX(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getX2ON2A2XP1(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getX3ON2A(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getXON2A2(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getXX(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_getXXX(t_DSSTZonalContext *self);
            static PyObject *t_DSSTZonalContext_get__bB(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__boA(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__boABpo(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__cXO2N2A2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__hK(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__k2MH2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__k2MH2O2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__m2aoA(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__mCo2AB(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__meanMotion(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__muoa(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__oON2A2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__ooAB(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__roa(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__x(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__x2ON2A2XP1(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__x3ON2A(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__xON2A2(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__xX(t_DSSTZonalContext *self, void *data);
            static PyObject *t_DSSTZonalContext_get__xXX(t_DSSTZonalContext *self, void *data);
            static PyGetSetDef t_DSSTZonalContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTZonalContext, bB),
              DECLARE_GET_FIELD(t_DSSTZonalContext, boA),
              DECLARE_GET_FIELD(t_DSSTZonalContext, boABpo),
              DECLARE_GET_FIELD(t_DSSTZonalContext, cXO2N2A2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, hK),
              DECLARE_GET_FIELD(t_DSSTZonalContext, k2MH2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, k2MH2O2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, m2aoA),
              DECLARE_GET_FIELD(t_DSSTZonalContext, mCo2AB),
              DECLARE_GET_FIELD(t_DSSTZonalContext, meanMotion),
              DECLARE_GET_FIELD(t_DSSTZonalContext, muoa),
              DECLARE_GET_FIELD(t_DSSTZonalContext, oON2A2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, ooAB),
              DECLARE_GET_FIELD(t_DSSTZonalContext, roa),
              DECLARE_GET_FIELD(t_DSSTZonalContext, x),
              DECLARE_GET_FIELD(t_DSSTZonalContext, x2ON2A2XP1),
              DECLARE_GET_FIELD(t_DSSTZonalContext, x3ON2A),
              DECLARE_GET_FIELD(t_DSSTZonalContext, xON2A2),
              DECLARE_GET_FIELD(t_DSSTZonalContext, xX),
              DECLARE_GET_FIELD(t_DSSTZonalContext, xXX),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTZonalContext__methods_[] = {
              DECLARE_METHOD(t_DSSTZonalContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonalContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTZonalContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getCXO2N2A2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getHK, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getK2MH2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getK2MH2O2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getMuoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getOON2A2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getX2ON2A2XP1, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getX3ON2A, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getXON2A2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTZonalContext, getXXX, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTZonalContext)[] = {
              { Py_tp_methods, t_DSSTZonalContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DSSTZonalContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTZonalContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTZonalContext, t_DSSTZonalContext, DSSTZonalContext);

            void t_DSSTZonalContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTZonalContext), &PY_TYPE_DEF(DSSTZonalContext), module, "DSSTZonalContext", 0);
            }

            void t_DSSTZonalContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonalContext), "class_", make_descriptor(DSSTZonalContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonalContext), "wrapfn_", make_descriptor(t_DSSTZonalContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTZonalContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTZonalContext::initializeClass, 1)))
                return NULL;
              return t_DSSTZonalContext::wrap_Object(DSSTZonalContext(((t_DSSTZonalContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTZonalContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DSSTZonalContext_getBB(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getBoA(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getBoABpo(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoABpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getCXO2N2A2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCXO2N2A2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getHK(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHK());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getK2MH2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getK2MH2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getK2MH2O2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getK2MH2O2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getM2aoA(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM2aoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getMCo2AB(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getMeanMotion(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getMuoa(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMuoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getOON2A2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOON2A2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getOoAB(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getRoa(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getX(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getX2ON2A2XP1(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX2ON2A2XP1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getX3ON2A(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX3ON2A());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getXON2A2(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXON2A2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getXX(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_getXXX(t_DSSTZonalContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTZonalContext_get__bB(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__boA(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__boABpo(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoABpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__cXO2N2A2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCXO2N2A2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__hK(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHK());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__k2MH2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getK2MH2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__k2MH2O2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getK2MH2O2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__m2aoA(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM2aoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__mCo2AB(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__meanMotion(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__muoa(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMuoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__oON2A2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOON2A2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__ooAB(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__roa(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__x(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__x2ON2A2XP1(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX2ON2A2XP1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__x3ON2A(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX3ON2A());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__xON2A2(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXON2A2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__xX(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTZonalContext_get__xXX(t_DSSTZonalContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXXX());
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
#include "org/orekit/propagation/events/FieldDateDetector.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/FieldDateDetector.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldDateDetector::class$ = NULL;
        jmethodID *FieldDateDetector::mids$ = NULL;
        bool FieldDateDetector::live$ = false;
        jdouble FieldDateDetector::DEFAULT_MAX_CHECK = (jdouble) 0;
        jdouble FieldDateDetector::DEFAULT_MIN_GAP = (jdouble) 0;
        jdouble FieldDateDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass FieldDateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldDateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_36135f97f98426a6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/orekit/time/FieldTimeStamped;)V");
            mids$[mid_addEventDate_fa8a1245db18b643] = env->getMethodID(cls, "addEventDate", "(Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDate_09b0a926600dfc14] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getDates_a6156df500549a58] = env->getMethodID(cls, "getDates", "()Ljava/util/List;");
            mids$[mid_withMinGap_7730a71290f27301] = env->getMethodID(cls, "withMinGap", "(D)Lorg/orekit/propagation/events/FieldDateDetector;");
            mids$[mid_create_f856446407278f77] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldDateDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAX_CHECK = env->getStaticDoubleField(cls, "DEFAULT_MAX_CHECK");
            DEFAULT_MIN_GAP = env->getStaticDoubleField(cls, "DEFAULT_MIN_GAP");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldDateDetector::FieldDateDetector(const ::org::hipparchus::Field & a0, const JArray< ::org::orekit::time::FieldTimeStamped > & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_36135f97f98426a6, a0.this$, a1.this$)) {}

        void FieldDateDetector::addEventDate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDate_fa8a1245db18b643], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement FieldDateDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldDateDetector::getDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_09b0a926600dfc14]));
        }

        ::java::util::List FieldDateDetector::getDates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDates_a6156df500549a58]));
        }

        FieldDateDetector FieldDateDetector::withMinGap(jdouble a0) const
        {
          return FieldDateDetector(env->callObjectMethod(this$, mids$[mid_withMinGap_7730a71290f27301], a0));
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
        static PyObject *t_FieldDateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDateDetector_of_(t_FieldDateDetector *self, PyObject *args);
        static int t_FieldDateDetector_init_(t_FieldDateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldDateDetector_addEventDate(t_FieldDateDetector *self, PyObject *arg);
        static PyObject *t_FieldDateDetector_g(t_FieldDateDetector *self, PyObject *args);
        static PyObject *t_FieldDateDetector_getDate(t_FieldDateDetector *self);
        static PyObject *t_FieldDateDetector_getDates(t_FieldDateDetector *self);
        static PyObject *t_FieldDateDetector_withMinGap(t_FieldDateDetector *self, PyObject *arg);
        static PyObject *t_FieldDateDetector_get__date(t_FieldDateDetector *self, void *data);
        static PyObject *t_FieldDateDetector_get__dates(t_FieldDateDetector *self, void *data);
        static PyObject *t_FieldDateDetector_get__parameters_(t_FieldDateDetector *self, void *data);
        static PyGetSetDef t_FieldDateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDateDetector, date),
          DECLARE_GET_FIELD(t_FieldDateDetector, dates),
          DECLARE_GET_FIELD(t_FieldDateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDateDetector__methods_[] = {
          DECLARE_METHOD(t_FieldDateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDateDetector, addEventDate, METH_O),
          DECLARE_METHOD(t_FieldDateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldDateDetector, getDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldDateDetector, getDates, METH_NOARGS),
          DECLARE_METHOD(t_FieldDateDetector, withMinGap, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDateDetector)[] = {
          { Py_tp_methods, t_FieldDateDetector__methods_ },
          { Py_tp_init, (void *) t_FieldDateDetector_init_ },
          { Py_tp_getset, t_FieldDateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldDateDetector, t_FieldDateDetector, FieldDateDetector);
        PyObject *t_FieldDateDetector::wrap_Object(const FieldDateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDateDetector *self = (t_FieldDateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldDateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDateDetector *self = (t_FieldDateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldDateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDateDetector), &PY_TYPE_DEF(FieldDateDetector), module, "FieldDateDetector", 0);
        }

        void t_FieldDateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "class_", make_descriptor(FieldDateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "wrapfn_", make_descriptor(t_FieldDateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldDateDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "DEFAULT_MAX_CHECK", make_descriptor(FieldDateDetector::DEFAULT_MAX_CHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "DEFAULT_MIN_GAP", make_descriptor(FieldDateDetector::DEFAULT_MIN_GAP));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "DEFAULT_THRESHOLD", make_descriptor(FieldDateDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_FieldDateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDateDetector::initializeClass, 1)))
            return NULL;
          return t_FieldDateDetector::wrap_Object(FieldDateDetector(((t_FieldDateDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldDateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDateDetector_of_(t_FieldDateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldDateDetector_init_(t_FieldDateDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::time::FieldTimeStamped > a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDateDetector object((jobject) NULL);

          if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
          {
            INT_CALL(object = FieldDateDetector(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldDateDetector_addEventDate(t_FieldDateDetector *self, PyObject *arg)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.addEventDate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addEventDate", arg);
          return NULL;
        }

        static PyObject *t_FieldDateDetector_g(t_FieldDateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldDateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldDateDetector_getDate(t_FieldDateDetector *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDateDetector_getDates(t_FieldDateDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDates());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldDateDetector_withMinGap(t_FieldDateDetector *self, PyObject *arg)
        {
          jdouble a0;
          FieldDateDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMinGap(a0));
            return t_FieldDateDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withMinGap", arg);
          return NULL;
        }
        static PyObject *t_FieldDateDetector_get__parameters_(t_FieldDateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDateDetector_get__date(t_FieldDateDetector *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldDateDetector_get__dates(t_FieldDateDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDates());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryStateHistoryMetadata::class$ = NULL;
              jmethodID *TrajectoryStateHistoryMetadata::mids$ = NULL;
              bool TrajectoryStateHistoryMetadata::live$ = false;
              jint TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_DEGREE = (jint) 0;
              ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod *TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_METHOD = NULL;

              jclass TrajectoryStateHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d85fec4345815bba] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_copy_ccbf61d9f503b7f4] = env->getMethodID(cls, "copy", "(D)Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;");
                  mids$[mid_getCenter_78375ee64056f203] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                  mids$[mid_getInterpolationDegree_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                  mids$[mid_getInterpolationMethod_2bc2530179f8bab2] = env->getMethodID(cls, "getInterpolationMethod", "()Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");
                  mids$[mid_getOrbAveraging_0090f7797e403f43] = env->getMethodID(cls, "getOrbAveraging", "()Ljava/lang/String;");
                  mids$[mid_getOrbRevNum_f2f64475e4580546] = env->getMethodID(cls, "getOrbRevNum", "()I");
                  mids$[mid_getOrbRevNumBasis_f2f64475e4580546] = env->getMethodID(cls, "getOrbRevNumBasis", "()I");
                  mids$[mid_getPropagator_0090f7797e403f43] = env->getMethodID(cls, "getPropagator", "()Ljava/lang/String;");
                  mids$[mid_getTrajBasis_0090f7797e403f43] = env->getMethodID(cls, "getTrajBasis", "()Ljava/lang/String;");
                  mids$[mid_getTrajBasisID_0090f7797e403f43] = env->getMethodID(cls, "getTrajBasisID", "()Ljava/lang/String;");
                  mids$[mid_getTrajFrameEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getTrajFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTrajID_0090f7797e403f43] = env->getMethodID(cls, "getTrajID", "()Ljava/lang/String;");
                  mids$[mid_getTrajNextID_0090f7797e403f43] = env->getMethodID(cls, "getTrajNextID", "()Ljava/lang/String;");
                  mids$[mid_getTrajPrevID_0090f7797e403f43] = env->getMethodID(cls, "getTrajPrevID", "()Ljava/lang/String;");
                  mids$[mid_getTrajReferenceFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getTrajReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getTrajType_89f4b16f0349faa4] = env->getMethodID(cls, "getTrajType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");
                  mids$[mid_getTrajUnits_a6156df500549a58] = env->getMethodID(cls, "getTrajUnits", "()Ljava/util/List;");
                  mids$[mid_getUseableStartTime_aaa854c403487cf3] = env->getMethodID(cls, "getUseableStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStopTime_aaa854c403487cf3] = env->getMethodID(cls, "getUseableStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_incrementTrajID_43625fc1c3d86afe] = env->getStaticMethodID(cls, "incrementTrajID", "(Ljava/lang/String;)Ljava/lang/String;");
                  mids$[mid_setCenter_4937bc9292f008b1] = env->getMethodID(cls, "setCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                  mids$[mid_setInterpolationDegree_0a2a1ac2721c0336] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                  mids$[mid_setInterpolationMethod_db94d5019ae505d8] = env->getMethodID(cls, "setInterpolationMethod", "(Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;)V");
                  mids$[mid_setOrbAveraging_e939c6558ae8d313] = env->getMethodID(cls, "setOrbAveraging", "(Ljava/lang/String;)V");
                  mids$[mid_setOrbRevNum_0a2a1ac2721c0336] = env->getMethodID(cls, "setOrbRevNum", "(I)V");
                  mids$[mid_setOrbRevNumBasis_0a2a1ac2721c0336] = env->getMethodID(cls, "setOrbRevNumBasis", "(I)V");
                  mids$[mid_setPropagator_e939c6558ae8d313] = env->getMethodID(cls, "setPropagator", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajBasis_e939c6558ae8d313] = env->getMethodID(cls, "setTrajBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajBasisID_e939c6558ae8d313] = env->getMethodID(cls, "setTrajBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajFrameEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setTrajFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setTrajID_e939c6558ae8d313] = env->getMethodID(cls, "setTrajID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajNextID_e939c6558ae8d313] = env->getMethodID(cls, "setTrajNextID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajPrevID_e939c6558ae8d313] = env->getMethodID(cls, "setTrajPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setTrajReferenceFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setTrajReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setTrajType_871e4887d93fc936] = env->getMethodID(cls, "setTrajType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;)V");
                  mids$[mid_setTrajUnits_65de9727799c5641] = env->getMethodID(cls, "setTrajUnits", "(Ljava/util/List;)V");
                  mids$[mid_setUseableStartTime_e82d68cd9f886886] = env->getMethodID(cls, "setUseableStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStopTime_e82d68cd9f886886] = env->getMethodID(cls, "setUseableStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_INTERPOLATION_DEGREE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_DEGREE");
                  DEFAULT_INTERPOLATION_METHOD = new ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod(env->getStaticObjectField(cls, "DEFAULT_INTERPOLATION_METHOD", "Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              TrajectoryStateHistoryMetadata::TrajectoryStateHistoryMetadata(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::data::DataContext & a1) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_d85fec4345815bba, a0.this$, a1.this$)) {}

              TrajectoryStateHistoryMetadata TrajectoryStateHistoryMetadata::copy(jdouble a0) const
              {
                return TrajectoryStateHistoryMetadata(env->callObjectMethod(this$, mids$[mid_copy_ccbf61d9f503b7f4], a0));
              }

              ::org::orekit::files::ccsds::definitions::BodyFacade TrajectoryStateHistoryMetadata::getCenter() const
              {
                return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getCenter_78375ee64056f203]));
              }

              jint TrajectoryStateHistoryMetadata::getInterpolationDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_f2f64475e4580546]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod TrajectoryStateHistoryMetadata::getInterpolationMethod() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_2bc2530179f8bab2]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getOrbAveraging() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOrbAveraging_0090f7797e403f43]));
              }

              jint TrajectoryStateHistoryMetadata::getOrbRevNum() const
              {
                return env->callIntMethod(this$, mids$[mid_getOrbRevNum_f2f64475e4580546]);
              }

              jint TrajectoryStateHistoryMetadata::getOrbRevNumBasis() const
              {
                return env->callIntMethod(this$, mids$[mid_getOrbRevNumBasis_f2f64475e4580546]);
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getPropagator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPropagator_0090f7797e403f43]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajBasis_0090f7797e403f43]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajBasisID_0090f7797e403f43]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistoryMetadata::getTrajFrameEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTrajFrameEpoch_aaa854c403487cf3]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajID_0090f7797e403f43]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajNextID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajNextID_0090f7797e403f43]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::getTrajPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrajPrevID_0090f7797e403f43]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade TrajectoryStateHistoryMetadata::getTrajReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getTrajReferenceFrame_aa70fdb14ae9305f]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType TrajectoryStateHistoryMetadata::getTrajType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getTrajType_89f4b16f0349faa4]));
              }

              ::java::util::List TrajectoryStateHistoryMetadata::getTrajUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTrajUnits_a6156df500549a58]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistoryMetadata::getUseableStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStartTime_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistoryMetadata::getUseableStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStopTime_aaa854c403487cf3]));
              }

              ::java::lang::String TrajectoryStateHistoryMetadata::incrementTrajID(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_incrementTrajID_43625fc1c3d86afe], a0.this$));
              }

              void TrajectoryStateHistoryMetadata::setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCenter_4937bc9292f008b1], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setInterpolationDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_0a2a1ac2721c0336], a0);
              }

              void TrajectoryStateHistoryMetadata::setInterpolationMethod(const ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_db94d5019ae505d8], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setOrbAveraging(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbAveraging_e939c6558ae8d313], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setOrbRevNum(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbRevNum_0a2a1ac2721c0336], a0);
              }

              void TrajectoryStateHistoryMetadata::setOrbRevNumBasis(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbRevNumBasis_0a2a1ac2721c0336], a0);
              }

              void TrajectoryStateHistoryMetadata::setPropagator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPropagator_e939c6558ae8d313], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajBasis_e939c6558ae8d313], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajBasisID_e939c6558ae8d313], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajFrameEpoch_e82d68cd9f886886], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajID_e939c6558ae8d313], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajNextID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajNextID_e939c6558ae8d313], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajPrevID_e939c6558ae8d313], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajReferenceFrame_a455f3ff24eb0b47], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajType(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajType_871e4887d93fc936], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setTrajUnits(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTrajUnits_65de9727799c5641], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setUseableStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStartTime_e82d68cd9f886886], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::setUseableStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStopTime_e82d68cd9f886886], a0.this$);
              }

              void TrajectoryStateHistoryMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
              static PyObject *t_TrajectoryStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_TrajectoryStateHistoryMetadata_init_(t_TrajectoryStateHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_TrajectoryStateHistoryMetadata_copy(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_getCenter(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationDegree(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationMethod(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbAveraging(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNum(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getPropagator(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasis(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasisID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajNextID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajPrevID(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajType(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajUnits(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStartTime(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStopTime(t_TrajectoryStateHistoryMetadata *self);
              static PyObject *t_TrajectoryStateHistoryMetadata_incrementTrajID(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setCenter(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setPropagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadata_validate(t_TrajectoryStateHistoryMetadata *self, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__center(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__center(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbAveraging(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__orbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNum(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__propagator(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__propagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasis(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasisID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajNextID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajPrevID(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajType(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajUnits(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__trajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStartTime(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__useableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStopTime(t_TrajectoryStateHistoryMetadata *self, void *data);
              static int t_TrajectoryStateHistoryMetadata_set__useableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_TrajectoryStateHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, center),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, interpolationDegree),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, interpolationMethod),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, orbAveraging),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, orbRevNum),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, orbRevNumBasis),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, propagator),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajBasis),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajBasisID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajFrameEpoch),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajNextID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajPrevID),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajReferenceFrame),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajType),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, trajUnits),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, useableStartTime),
                DECLARE_GETSET_FIELD(t_TrajectoryStateHistoryMetadata, useableStopTime),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryStateHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, copy, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getCenter, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getInterpolationDegree, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getOrbAveraging, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getOrbRevNum, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getOrbRevNumBasis, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getPropagator, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajBasis, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajBasisID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajFrameEpoch, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajNextID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajPrevID, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajType, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getTrajUnits, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getUseableStartTime, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, getUseableStopTime, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, incrementTrajID, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setCenter, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setInterpolationDegree, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setInterpolationMethod, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setOrbAveraging, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setOrbRevNum, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setOrbRevNumBasis, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setPropagator, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajBasis, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajBasisID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajFrameEpoch, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajNextID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajPrevID, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajReferenceFrame, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajType, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setTrajUnits, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setUseableStartTime, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, setUseableStopTime, METH_O),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryStateHistoryMetadata)[] = {
                { Py_tp_methods, t_TrajectoryStateHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_TrajectoryStateHistoryMetadata_init_ },
                { Py_tp_getset, t_TrajectoryStateHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryStateHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(TrajectoryStateHistoryMetadata, t_TrajectoryStateHistoryMetadata, TrajectoryStateHistoryMetadata);

              void t_TrajectoryStateHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryStateHistoryMetadata), &PY_TYPE_DEF(TrajectoryStateHistoryMetadata), module, "TrajectoryStateHistoryMetadata", 0);
              }

              void t_TrajectoryStateHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "class_", make_descriptor(TrajectoryStateHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "wrapfn_", make_descriptor(t_TrajectoryStateHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(TrajectoryStateHistoryMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "DEFAULT_INTERPOLATION_DEGREE", make_descriptor(TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_DEGREE));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadata), "DEFAULT_INTERPOLATION_METHOD", make_descriptor(::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(*TrajectoryStateHistoryMetadata::DEFAULT_INTERPOLATION_METHOD)));
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryStateHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryStateHistoryMetadata::wrap_Object(TrajectoryStateHistoryMetadata(((t_TrajectoryStateHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryStateHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryStateHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_TrajectoryStateHistoryMetadata_init_(t_TrajectoryStateHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::orekit::data::DataContext a1((jobject) NULL);
                TrajectoryStateHistoryMetadata object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = TrajectoryStateHistoryMetadata(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_copy(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;
                TrajectoryStateHistoryMetadata result((jobject) NULL);

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(result = self->object.copy(a0));
                  return t_TrajectoryStateHistoryMetadata::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "copy", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getCenter(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCenter());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationDegree(t_TrajectoryStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getInterpolationMethod(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbAveraging(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbAveraging());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNum(t_TrajectoryStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getOrbRevNum());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getOrbRevNumBasis());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getPropagator(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPropagator());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasis(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajBasis());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajBasisID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajBasisID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajNextID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajNextID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajPrevID(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajPrevID());
                return j2p(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajType(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getTrajUnits(t_TrajectoryStateHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStartTime(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_getUseableStopTime(t_TrajectoryStateHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_incrementTrajID(PyTypeObject *type, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::incrementTrajID(a0));
                  return j2p(result);
                }

                PyErr_SetArgsError(type, "incrementTrajID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setCenter(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
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

              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setInterpolationDegree(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setInterpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::parameters_))
                {
                  OBJ_CALL(self->object.setInterpolationMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOrbAveraging(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbAveraging", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setOrbRevNum(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbRevNum", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setOrbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setOrbRevNumBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbRevNumBasis", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setPropagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPropagator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPropagator", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajBasis", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajBasisID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTrajFrameEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajFrameEpoch", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajNextID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajNextID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setTrajPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajPrevID", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTrajReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setTrajType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajType", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setTrajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setTrajUnits(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTrajUnits", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStartTime", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_setUseableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStopTime", arg);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_validate(t_TrajectoryStateHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(TrajectoryStateHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__center(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCenter());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__center(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__interpolationDegree(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setInterpolationDegree(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__interpolationMethod(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &value))
                  {
                    INT_CALL(self->object.setInterpolationMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbAveraging(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbAveraging());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__orbAveraging(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOrbAveraging(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbAveraging", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNum(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getOrbRevNum());
                return PyLong_FromLong((long) value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNum(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setOrbRevNum(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbRevNum", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getOrbRevNumBasis());
                return PyLong_FromLong((long) value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__orbRevNumBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setOrbRevNumBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbRevNumBasis", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__propagator(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPropagator());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__propagator(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPropagator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "propagator", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasis(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajBasis());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajBasis(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajBasis", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajBasisID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajBasisID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajBasisID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajBasisID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajFrameEpoch(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajFrameEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajFrameEpoch", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajNextID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajNextID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajNextID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajNextID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajNextID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajPrevID(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajPrevID());
                return j2p(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajPrevID(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setTrajPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajPrevID", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajReferenceFrame(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajType(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajType(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajType", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__trajUnits(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajUnits());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__trajUnits(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTrajUnits(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "trajUnits", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStartTime(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__useableStartTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStartTime", arg);
                return -1;
              }

              static PyObject *t_TrajectoryStateHistoryMetadata_get__useableStopTime(t_TrajectoryStateHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_TrajectoryStateHistoryMetadata_set__useableStopTime(t_TrajectoryStateHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStopTime", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}

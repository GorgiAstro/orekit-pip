#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/NegateDetector.h"
#include "org/orekit/propagation/events/NegateDetector.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *NegateDetector::class$ = NULL;
        jmethodID *NegateDetector::mids$ = NULL;
        bool NegateDetector::live$ = false;

        jclass NegateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/NegateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e13564f833403504] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getOriginal_9ada55f07f5a223c] = env->getMethodID(cls, "getOriginal", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_b636b8e6ef44d5d7] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/NegateDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NegateDetector::NegateDetector(const ::org::orekit::propagation::events::EventDetector & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_e13564f833403504, a0.this$)) {}

        jdouble NegateDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector NegateDetector::getOriginal() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getOriginal_9ada55f07f5a223c]));
        }

        void NegateDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
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
        static PyObject *t_NegateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NegateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NegateDetector_of_(t_NegateDetector *self, PyObject *args);
        static int t_NegateDetector_init_(t_NegateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NegateDetector_g(t_NegateDetector *self, PyObject *args);
        static PyObject *t_NegateDetector_getOriginal(t_NegateDetector *self);
        static PyObject *t_NegateDetector_init(t_NegateDetector *self, PyObject *args);
        static PyObject *t_NegateDetector_get__original(t_NegateDetector *self, void *data);
        static PyObject *t_NegateDetector_get__parameters_(t_NegateDetector *self, void *data);
        static PyGetSetDef t_NegateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_NegateDetector, original),
          DECLARE_GET_FIELD(t_NegateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NegateDetector__methods_[] = {
          DECLARE_METHOD(t_NegateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NegateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NegateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_NegateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_NegateDetector, getOriginal, METH_NOARGS),
          DECLARE_METHOD(t_NegateDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NegateDetector)[] = {
          { Py_tp_methods, t_NegateDetector__methods_ },
          { Py_tp_init, (void *) t_NegateDetector_init_ },
          { Py_tp_getset, t_NegateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NegateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(NegateDetector, t_NegateDetector, NegateDetector);
        PyObject *t_NegateDetector::wrap_Object(const NegateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NegateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NegateDetector *self = (t_NegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NegateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NegateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NegateDetector *self = (t_NegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NegateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(NegateDetector), &PY_TYPE_DEF(NegateDetector), module, "NegateDetector", 0);
        }

        void t_NegateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NegateDetector), "class_", make_descriptor(NegateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NegateDetector), "wrapfn_", make_descriptor(t_NegateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NegateDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NegateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NegateDetector::initializeClass, 1)))
            return NULL;
          return t_NegateDetector::wrap_Object(NegateDetector(((t_NegateDetector *) arg)->object.this$));
        }
        static PyObject *t_NegateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NegateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NegateDetector_of_(t_NegateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NegateDetector_init_(t_NegateDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          NegateDetector object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            INT_CALL(object = NegateDetector(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NegateDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NegateDetector_g(t_NegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NegateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_NegateDetector_getOriginal(t_NegateDetector *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_NegateDetector_init(t_NegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(NegateDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_NegateDetector_get__parameters_(t_NegateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_NegateDetector_get__original(t_NegateDetector *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
                mids$[mid_init$_0009325064542aa1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;)V");
                mids$[mid_writeContent_fb222e851cd27682] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SpacecraftParametersWriter::SpacecraftParametersWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a2) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_0009325064542aa1, a0.this$, a1.this$, a2.this$)) {}
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
#include "java/text/Format.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "java/io/Serializable.h"
#include "java/text/ParseException.h"
#include "java/lang/StringBuffer.h"
#include "java/text/AttributedCharacterIterator.h"
#include "java/lang/Class.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *Format::class$ = NULL;
    jmethodID *Format::mids$ = NULL;
    bool Format::live$ = false;

    jclass Format::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/Format");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_format_9a3ac03d9f8571c6] = env->getMethodID(cls, "format", "(Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_format_b972afa1d89f0ad4] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_formatToCharacterIterator_1e9e330ed3e6edfe] = env->getMethodID(cls, "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;");
        mids$[mid_parseObject_b5bfd4959be00bde] = env->getMethodID(cls, "parseObject", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_parseObject_ad5444510b7b5820] = env->getMethodID(cls, "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object Format::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_541690f9ee81d3ad]));
    }

    ::java::lang::String Format::format(const ::java::lang::Object & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_9a3ac03d9f8571c6], a0.this$));
    }

    ::java::lang::StringBuffer Format::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_b972afa1d89f0ad4], a0.this$, a1.this$, a2.this$));
    }

    ::java::text::AttributedCharacterIterator Format::formatToCharacterIterator(const ::java::lang::Object & a0) const
    {
      return ::java::text::AttributedCharacterIterator(env->callObjectMethod(this$, mids$[mid_formatToCharacterIterator_1e9e330ed3e6edfe], a0.this$));
    }

    ::java::lang::Object Format::parseObject(const ::java::lang::String & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseObject_b5bfd4959be00bde], a0.this$));
    }

    ::java::lang::Object Format::parseObject(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseObject_ad5444510b7b5820], a0.this$, a1.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_Format_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Format_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Format_clone(t_Format *self);
    static PyObject *t_Format_format(t_Format *self, PyObject *args);
    static PyObject *t_Format_formatToCharacterIterator(t_Format *self, PyObject *arg);
    static PyObject *t_Format_parseObject(t_Format *self, PyObject *args);

    static PyMethodDef t_Format__methods_[] = {
      DECLARE_METHOD(t_Format, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Format, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Format, clone, METH_NOARGS),
      DECLARE_METHOD(t_Format, format, METH_VARARGS),
      DECLARE_METHOD(t_Format, formatToCharacterIterator, METH_O),
      DECLARE_METHOD(t_Format, parseObject, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Format)[] = {
      { Py_tp_methods, t_Format__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Format)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Format, t_Format, Format);

    void t_Format::install(PyObject *module)
    {
      installType(&PY_TYPE(Format), &PY_TYPE_DEF(Format), module, "Format", 0);
    }

    void t_Format::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format), "class_", make_descriptor(Format::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format), "wrapfn_", make_descriptor(t_Format::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Format), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Format_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Format::initializeClass, 1)))
        return NULL;
      return t_Format::wrap_Object(Format(((t_Format *) arg)->object.this$));
    }
    static PyObject *t_Format_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Format::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Format_clone(t_Format *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Format_format(t_Format *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.format(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
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

    static PyObject *t_Format_formatToCharacterIterator(t_Format *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::text::AttributedCharacterIterator result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.formatToCharacterIterator(a0));
        return ::java::text::t_AttributedCharacterIterator::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "formatToCharacterIterator", arg);
      return NULL;
    }

    static PyObject *t_Format_parseObject(t_Format *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.parseObject(a0));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::text::ParsePosition a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.parseObject(a0, a1));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "parseObject", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/PythonIonosphericModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *PythonIonosphericModel::class$ = NULL;
          jmethodID *PythonIonosphericModel::mids$ = NULL;
          bool PythonIonosphericModel::live$ = false;

          jclass PythonIonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/PythonIonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParameters_25e1757a36c4dde2] = env->getMethodID(cls, "getParameters", "()[D");
              mids$[mid_getParameters_5286daa2a5b3d227] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_5e4bace87c721642] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_0c51f26f37c66719] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIonosphericModel::PythonIonosphericModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonIonosphericModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonIonosphericModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonIonosphericModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        namespace ionosphere {
          static PyObject *t_PythonIonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonIonosphericModel_init_(t_PythonIonosphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIonosphericModel_finalize(t_PythonIonosphericModel *self);
          static PyObject *t_PythonIonosphericModel_pythonExtension(t_PythonIonosphericModel *self, PyObject *args);
          static jobject JNICALL t_PythonIonosphericModel_getParameters0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonIonosphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonIonosphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonIonosphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3);
          static jdouble JNICALL t_PythonIonosphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3);
          static void JNICALL t_PythonIonosphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonIonosphericModel_get__self(t_PythonIonosphericModel *self, void *data);
          static PyGetSetDef t_PythonIonosphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIonosphericModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIonosphericModel__methods_[] = {
            DECLARE_METHOD(t_PythonIonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIonosphericModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIonosphericModel)[] = {
            { Py_tp_methods, t_PythonIonosphericModel__methods_ },
            { Py_tp_init, (void *) t_PythonIonosphericModel_init_ },
            { Py_tp_getset, t_PythonIonosphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIonosphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonIonosphericModel, t_PythonIonosphericModel, PythonIonosphericModel);

          void t_PythonIonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIonosphericModel), &PY_TYPE_DEF(PythonIonosphericModel), module, "PythonIonosphericModel", 1);
          }

          void t_PythonIonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericModel), "class_", make_descriptor(PythonIonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericModel), "wrapfn_", make_descriptor(t_PythonIonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIonosphericModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getParameters", "()[D", (void *) t_PythonIonosphericModel_getParameters0 },
              { "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericModel_getParameters1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonIonosphericModel_getParametersDrivers2 },
              { "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericModel_pathDelay3 },
              { "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D", (void *) t_PythonIonosphericModel_pathDelay4 },
              { "pythonDecRef", "()V", (void *) t_PythonIonosphericModel_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonIonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIonosphericModel::initializeClass, 1)))
              return NULL;
            return t_PythonIonosphericModel::wrap_Object(PythonIonosphericModel(((t_PythonIonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_PythonIonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonIonosphericModel_init_(t_PythonIonosphericModel *self, PyObject *args, PyObject *kwds)
          {
            PythonIonosphericModel object((jobject) NULL);

            INT_CALL(object = PythonIonosphericModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonIonosphericModel_finalize(t_PythonIonosphericModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIonosphericModel_pythonExtension(t_PythonIonosphericModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonIonosphericModel_getParameters0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonIonosphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonIonosphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_6c0ce7e438e5ded4]);
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

          static jobject JNICALL t_PythonIonosphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::frames::t_TopocentricFrame::wrap_Object(::org::orekit::frames::TopocentricFrame(a1));
            PyObject *o3 = JArray<jobject>(a3).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "OOdO", o0, o1, (double) a2, o3);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("pathDelay", result);
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

          static jdouble JNICALL t_PythonIonosphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::frames::t_TopocentricFrame::wrap_Object(::org::orekit::frames::TopocentricFrame(a1));
            PyObject *o3 = JArray<jdouble>(a3).wrap();
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "OOdO", o0, o1, (double) a2, o3);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("pathDelay", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonIonosphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonIonosphericModel_get__self(t_PythonIonosphericModel *self, void *data)
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
#include "org/orekit/utils/ParameterFunction.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterFunction::class$ = NULL;
      jmethodID *ParameterFunction::mids$ = NULL;
      bool ParameterFunction::live$ = false;

      jclass ParameterFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_863711af540c36c0] = env->getMethodID(cls, "value", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ParameterFunction::value(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_863711af540c36c0], a0.this$, a1.this$);
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
      static PyObject *t_ParameterFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterFunction_value(t_ParameterFunction *self, PyObject *args);

      static PyMethodDef t_ParameterFunction__methods_[] = {
        DECLARE_METHOD(t_ParameterFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterFunction)[] = {
        { Py_tp_methods, t_ParameterFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterFunction, t_ParameterFunction, ParameterFunction);

      void t_ParameterFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterFunction), &PY_TYPE_DEF(ParameterFunction), module, "ParameterFunction", 0);
      }

      void t_ParameterFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterFunction), "class_", make_descriptor(ParameterFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterFunction), "wrapfn_", make_descriptor(t_ParameterFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterFunction::initializeClass, 1)))
          return NULL;
        return t_ParameterFunction::wrap_Object(ParameterFunction(((t_ParameterFunction *) arg)->object.this$));
      }
      static PyObject *t_ParameterFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterFunction_value(t_ParameterFunction *self, PyObject *args)
      {
        ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/OutlineExtractor.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *OutlineExtractor::class$ = NULL;
          jmethodID *OutlineExtractor::mids$ = NULL;
          bool OutlineExtractor::live$ = false;

          jclass OutlineExtractor::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/OutlineExtractor");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b651b5ef96594ce8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getOutline_3ffaf49dddc43bee] = env->getMethodID(cls, "getOutline", "(Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;)[[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OutlineExtractor::OutlineExtractor(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b651b5ef96594ce8, a0.this$, a1.this$)) {}

          JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > OutlineExtractor::getOutline(const ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet & a0) const
          {
            return JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > >(env->callObjectMethod(this$, mids$[mid_getOutline_3ffaf49dddc43bee], a0.this$));
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
          static PyObject *t_OutlineExtractor_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OutlineExtractor_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OutlineExtractor_init_(t_OutlineExtractor *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OutlineExtractor_getOutline(t_OutlineExtractor *self, PyObject *arg);

          static PyMethodDef t_OutlineExtractor__methods_[] = {
            DECLARE_METHOD(t_OutlineExtractor, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlineExtractor, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlineExtractor, getOutline, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OutlineExtractor)[] = {
            { Py_tp_methods, t_OutlineExtractor__methods_ },
            { Py_tp_init, (void *) t_OutlineExtractor_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OutlineExtractor)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OutlineExtractor, t_OutlineExtractor, OutlineExtractor);

          void t_OutlineExtractor::install(PyObject *module)
          {
            installType(&PY_TYPE(OutlineExtractor), &PY_TYPE_DEF(OutlineExtractor), module, "OutlineExtractor", 0);
          }

          void t_OutlineExtractor::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlineExtractor), "class_", make_descriptor(OutlineExtractor::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlineExtractor), "wrapfn_", make_descriptor(t_OutlineExtractor::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlineExtractor), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OutlineExtractor_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OutlineExtractor::initializeClass, 1)))
              return NULL;
            return t_OutlineExtractor::wrap_Object(OutlineExtractor(((t_OutlineExtractor *) arg)->object.this$));
          }
          static PyObject *t_OutlineExtractor_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OutlineExtractor::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OutlineExtractor_init_(t_OutlineExtractor *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            OutlineExtractor object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OutlineExtractor(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OutlineExtractor_getOutline(t_OutlineExtractor *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet::parameters_))
            {
              OBJ_CALL(result = self->object.getOutline(a0));
              return JArray<jobject>(result.this$).wrap(NULL);
            }

            PyErr_SetArgsError((PyObject *) self, "getOutline", arg);
            return NULL;
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
                mids$[mid_init$_9127f23cedcce237] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
                mids$[mid_getGridPoints_396bc2ac62d7d47a] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldFixedNumberInterpolationGrid::FieldFixedNumberInterpolationGrid(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9127f23cedcce237, a0.this$, a1)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > FieldFixedNumberInterpolationGrid::getGridPoints(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGridPoints_396bc2ac62d7d47a], a0.this$, a1.this$));
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
                mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getGridPoints_eaf2da2173f3569e] = env->getMethodID(cls, "getGridPoints", "(DD)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FixedNumberInterpolationGrid::FixedNumberInterpolationGrid(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

            JArray< jdouble > FixedNumberInterpolationGrid::getGridPoints(jdouble a0, jdouble a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGridPoints_eaf2da2173f3569e], a0, a1));
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
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/util/SortedSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *Scheduler::class$ = NULL;
          jmethodID *Scheduler::mids$ = NULL;
          bool Scheduler::live$ = false;

          jclass Scheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/Scheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_generate_3d5d4740e56d31ff] = env->getMethodID(cls, "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;");
              mids$[mid_getBuilder_45574e80a4b0eb29] = env->getMethodID(cls, "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;");
              mids$[mid_init_f89af00fc113b524] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::SortedSet Scheduler::generate(const ::java::util::Map & a0) const
          {
            return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_generate_3d5d4740e56d31ff], a0.this$));
          }

          ::org::orekit::estimation::measurements::generation::MeasurementBuilder Scheduler::getBuilder() const
          {
            return ::org::orekit::estimation::measurements::generation::MeasurementBuilder(env->callObjectMethod(this$, mids$[mid_getBuilder_45574e80a4b0eb29]));
          }

          void Scheduler::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_f89af00fc113b524], a0.this$, a1.this$);
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
          static PyObject *t_Scheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Scheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Scheduler_of_(t_Scheduler *self, PyObject *args);
          static PyObject *t_Scheduler_generate(t_Scheduler *self, PyObject *arg);
          static PyObject *t_Scheduler_getBuilder(t_Scheduler *self);
          static PyObject *t_Scheduler_init(t_Scheduler *self, PyObject *args);
          static PyObject *t_Scheduler_get__builder(t_Scheduler *self, void *data);
          static PyObject *t_Scheduler_get__parameters_(t_Scheduler *self, void *data);
          static PyGetSetDef t_Scheduler__fields_[] = {
            DECLARE_GET_FIELD(t_Scheduler, builder),
            DECLARE_GET_FIELD(t_Scheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Scheduler__methods_[] = {
            DECLARE_METHOD(t_Scheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Scheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Scheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_Scheduler, generate, METH_O),
            DECLARE_METHOD(t_Scheduler, getBuilder, METH_NOARGS),
            DECLARE_METHOD(t_Scheduler, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Scheduler)[] = {
            { Py_tp_methods, t_Scheduler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Scheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Scheduler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Scheduler, t_Scheduler, Scheduler);
          PyObject *t_Scheduler::wrap_Object(const Scheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Scheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Scheduler *self = (t_Scheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Scheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Scheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Scheduler *self = (t_Scheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Scheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(Scheduler), &PY_TYPE_DEF(Scheduler), module, "Scheduler", 0);
          }

          void t_Scheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Scheduler), "class_", make_descriptor(Scheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Scheduler), "wrapfn_", make_descriptor(t_Scheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Scheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Scheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Scheduler::initializeClass, 1)))
              return NULL;
            return t_Scheduler::wrap_Object(Scheduler(((t_Scheduler *) arg)->object.this$));
          }
          static PyObject *t_Scheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Scheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Scheduler_of_(t_Scheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Scheduler_generate(t_Scheduler *self, PyObject *arg)
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::SortedSet result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.generate(a0));
              return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "generate", arg);
            return NULL;
          }

          static PyObject *t_Scheduler_getBuilder(t_Scheduler *self)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder result((jobject) NULL);
            OBJ_CALL(result = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_Scheduler_init(t_Scheduler *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }
          static PyObject *t_Scheduler_get__parameters_(t_Scheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Scheduler_get__builder(t_Scheduler *self, void *data)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder value((jobject) NULL);
            OBJ_CALL(value = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/Antenna.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *Antenna::class$ = NULL;
        jmethodID *Antenna::mids$ = NULL;
        bool Antenna::live$ = false;

        jclass Antenna::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/Antenna");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEccentricities_d0488333e6550601] = env->getMethodID(cls, "getEccentricities", "(Lorg/orekit/gnss/Frequency;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getFrequencies_e62d3bb06d56d7e3] = env->getMethodID(cls, "getFrequencies", "()Ljava/util/List;");
            mids$[mid_getPattern_653181fb59ddf806] = env->getMethodID(cls, "getPattern", "(Lorg/orekit/gnss/Frequency;)Lorg/orekit/gnss/antenna/FrequencyPattern;");
            mids$[mid_getPhaseCenterVariation_3f5cfe9e5195b182] = env->getMethodID(cls, "getPhaseCenterVariation", "(Lorg/orekit/gnss/Frequency;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
            mids$[mid_getSinexCode_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSinexCode", "()Ljava/lang/String;");
            mids$[mid_getType_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getType", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Antenna::getEccentricities(const ::org::orekit::gnss::Frequency & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEccentricities_d0488333e6550601], a0.this$));
        }

        ::java::util::List Antenna::getFrequencies() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFrequencies_e62d3bb06d56d7e3]));
        }

        ::org::orekit::gnss::antenna::FrequencyPattern Antenna::getPattern(const ::org::orekit::gnss::Frequency & a0) const
        {
          return ::org::orekit::gnss::antenna::FrequencyPattern(env->callObjectMethod(this$, mids$[mid_getPattern_653181fb59ddf806], a0.this$));
        }

        jdouble Antenna::getPhaseCenterVariation(const ::org::orekit::gnss::Frequency & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPhaseCenterVariation_3f5cfe9e5195b182], a0.this$, a1.this$);
        }

        ::java::lang::String Antenna::getSinexCode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSinexCode_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String Antenna::getType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getType_1c1fa1e935d6cdcf]));
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
        static PyObject *t_Antenna_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Antenna_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Antenna_getEccentricities(t_Antenna *self, PyObject *arg);
        static PyObject *t_Antenna_getFrequencies(t_Antenna *self);
        static PyObject *t_Antenna_getPattern(t_Antenna *self, PyObject *arg);
        static PyObject *t_Antenna_getPhaseCenterVariation(t_Antenna *self, PyObject *args);
        static PyObject *t_Antenna_getSinexCode(t_Antenna *self);
        static PyObject *t_Antenna_getType(t_Antenna *self);
        static PyObject *t_Antenna_get__frequencies(t_Antenna *self, void *data);
        static PyObject *t_Antenna_get__sinexCode(t_Antenna *self, void *data);
        static PyObject *t_Antenna_get__type(t_Antenna *self, void *data);
        static PyGetSetDef t_Antenna__fields_[] = {
          DECLARE_GET_FIELD(t_Antenna, frequencies),
          DECLARE_GET_FIELD(t_Antenna, sinexCode),
          DECLARE_GET_FIELD(t_Antenna, type),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Antenna__methods_[] = {
          DECLARE_METHOD(t_Antenna, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Antenna, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Antenna, getEccentricities, METH_O),
          DECLARE_METHOD(t_Antenna, getFrequencies, METH_NOARGS),
          DECLARE_METHOD(t_Antenna, getPattern, METH_O),
          DECLARE_METHOD(t_Antenna, getPhaseCenterVariation, METH_VARARGS),
          DECLARE_METHOD(t_Antenna, getSinexCode, METH_NOARGS),
          DECLARE_METHOD(t_Antenna, getType, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Antenna)[] = {
          { Py_tp_methods, t_Antenna__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Antenna__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Antenna)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Antenna, t_Antenna, Antenna);

        void t_Antenna::install(PyObject *module)
        {
          installType(&PY_TYPE(Antenna), &PY_TYPE_DEF(Antenna), module, "Antenna", 0);
        }

        void t_Antenna::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Antenna), "class_", make_descriptor(Antenna::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Antenna), "wrapfn_", make_descriptor(t_Antenna::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Antenna), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Antenna_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Antenna::initializeClass, 1)))
            return NULL;
          return t_Antenna::wrap_Object(Antenna(((t_Antenna *) arg)->object.this$));
        }
        static PyObject *t_Antenna_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Antenna::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Antenna_getEccentricities(t_Antenna *self, PyObject *arg)
        {
          ::org::orekit::gnss::Frequency a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
          {
            OBJ_CALL(result = self->object.getEccentricities(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEccentricities", arg);
          return NULL;
        }

        static PyObject *t_Antenna_getFrequencies(t_Antenna *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrequencies());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(Frequency));
        }

        static PyObject *t_Antenna_getPattern(t_Antenna *self, PyObject *arg)
        {
          ::org::orekit::gnss::Frequency a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::gnss::antenna::FrequencyPattern result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
          {
            OBJ_CALL(result = self->object.getPattern(a0));
            return ::org::orekit::gnss::antenna::t_FrequencyPattern::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPattern", arg);
          return NULL;
        }

        static PyObject *t_Antenna_getPhaseCenterVariation(t_Antenna *self, PyObject *args)
        {
          ::org::orekit::gnss::Frequency a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "Kk", ::org::orekit::gnss::Frequency::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPhaseCenterVariation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPhaseCenterVariation", args);
          return NULL;
        }

        static PyObject *t_Antenna_getSinexCode(t_Antenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSinexCode());
          return j2p(result);
        }

        static PyObject *t_Antenna_getType(t_Antenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getType());
          return j2p(result);
        }

        static PyObject *t_Antenna_get__frequencies(t_Antenna *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrequencies());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_Antenna_get__sinexCode(t_Antenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSinexCode());
          return j2p(value);
        }

        static PyObject *t_Antenna_get__type(t_Antenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getType());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/RinexNavigation.h"
#include "org/orekit/files/rinex/navigation/IonosphereKlobucharMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
#include "org/orekit/files/rinex/navigation/SystemTimeOffsetMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage.h"
#include "org/orekit/files/rinex/navigation/IonosphereNequickGMessage.h"
#include "org/orekit/files/rinex/navigation/RinexNavigationHeader.h"
#include "org/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage.h"
#include "org/orekit/files/rinex/navigation/EarthOrientationParameterMessage.h"
#include "org/orekit/files/rinex/navigation/IonosphereBDGIMMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RinexNavigation::class$ = NULL;
          jmethodID *RinexNavigation::mids$ = NULL;
          bool RinexNavigation::live$ = false;

          jclass RinexNavigation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RinexNavigation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addBDGIMMessage_e0cc60ecaf228f26] = env->getMethodID(cls, "addBDGIMMessage", "(Lorg/orekit/files/rinex/navigation/IonosphereBDGIMMessage;)V");
              mids$[mid_addBeidouCivilianNavigationMessage_dc4b2b87521f0d2f] = env->getMethodID(cls, "addBeidouCivilianNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage;)V");
              mids$[mid_addBeidouLegacyNavigationMessage_3bdf636f6ee36324] = env->getMethodID(cls, "addBeidouLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;)V");
              mids$[mid_addEarthOrientationParameter_ec3134e016f50825] = env->getMethodID(cls, "addEarthOrientationParameter", "(Lorg/orekit/files/rinex/navigation/EarthOrientationParameterMessage;)V");
              mids$[mid_addGPSLegacyNavigationMessage_a6d83e70838563e9] = env->getMethodID(cls, "addGPSLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage;)V");
              mids$[mid_addGPSLegacyNavigationMessage_cfa2ffa15867e7bd] = env->getMethodID(cls, "addGPSLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;)V");
              mids$[mid_addGalileoNavigationMessage_4e33736c19a56ff8] = env->getMethodID(cls, "addGalileoNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;)V");
              mids$[mid_addGlonassNavigationMessage_1538465e20a8ec53] = env->getMethodID(cls, "addGlonassNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;)V");
              mids$[mid_addIRNSSNavigationMessage_993e2ed3b326e678] = env->getMethodID(cls, "addIRNSSNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage;)V");
              mids$[mid_addKlobucharMessage_0187013ef57837e3] = env->getMethodID(cls, "addKlobucharMessage", "(Lorg/orekit/files/rinex/navigation/IonosphereKlobucharMessage;)V");
              mids$[mid_addNequickGMessage_c5d10c9ee17a794f] = env->getMethodID(cls, "addNequickGMessage", "(Lorg/orekit/files/rinex/navigation/IonosphereNequickGMessage;)V");
              mids$[mid_addQZSSCivilianNavigationMessage_e3e4e4fc9a7a0633] = env->getMethodID(cls, "addQZSSCivilianNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage;)V");
              mids$[mid_addQZSSLegacyNavigationMessage_a62013e28777a8da] = env->getMethodID(cls, "addQZSSLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;)V");
              mids$[mid_addSBASNavigationMessage_cd2240912f930701] = env->getMethodID(cls, "addSBASNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/SBASNavigationMessage;)V");
              mids$[mid_addSystemTimeOffset_78d212e8e726d9aa] = env->getMethodID(cls, "addSystemTimeOffset", "(Lorg/orekit/files/rinex/navigation/SystemTimeOffsetMessage;)V");
              mids$[mid_getBDGIMMessages_e62d3bb06d56d7e3] = env->getMethodID(cls, "getBDGIMMessages", "()Ljava/util/List;");
              mids$[mid_getBeidouCivilianNavigationMessages_810bed48fafb0b9a] = env->getMethodID(cls, "getBeidouCivilianNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getBeidouCivilianNavigationMessages_abe6e889bc24795d] = env->getMethodID(cls, "getBeidouCivilianNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getBeidouLegacyNavigationMessages_810bed48fafb0b9a] = env->getMethodID(cls, "getBeidouLegacyNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getBeidouLegacyNavigationMessages_abe6e889bc24795d] = env->getMethodID(cls, "getBeidouLegacyNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getEarthOrientationParameters_e62d3bb06d56d7e3] = env->getMethodID(cls, "getEarthOrientationParameters", "()Ljava/util/List;");
              mids$[mid_getGPSCivilianNavigationMessages_810bed48fafb0b9a] = env->getMethodID(cls, "getGPSCivilianNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGPSCivilianNavigationMessages_abe6e889bc24795d] = env->getMethodID(cls, "getGPSCivilianNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getGPSLegacyNavigationMessages_810bed48fafb0b9a] = env->getMethodID(cls, "getGPSLegacyNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGPSLegacyNavigationMessages_abe6e889bc24795d] = env->getMethodID(cls, "getGPSLegacyNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getGalileoNavigationMessages_810bed48fafb0b9a] = env->getMethodID(cls, "getGalileoNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGalileoNavigationMessages_abe6e889bc24795d] = env->getMethodID(cls, "getGalileoNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getGlonassNavigationMessages_810bed48fafb0b9a] = env->getMethodID(cls, "getGlonassNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGlonassNavigationMessages_abe6e889bc24795d] = env->getMethodID(cls, "getGlonassNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getIRNSSNavigationMessages_810bed48fafb0b9a] = env->getMethodID(cls, "getIRNSSNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getIRNSSNavigationMessages_abe6e889bc24795d] = env->getMethodID(cls, "getIRNSSNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getKlobucharAlpha_25e1757a36c4dde2] = env->getMethodID(cls, "getKlobucharAlpha", "()[D");
              mids$[mid_getKlobucharBeta_25e1757a36c4dde2] = env->getMethodID(cls, "getKlobucharBeta", "()[D");
              mids$[mid_getKlobucharMessages_e62d3bb06d56d7e3] = env->getMethodID(cls, "getKlobucharMessages", "()Ljava/util/List;");
              mids$[mid_getNeQuickAlpha_25e1757a36c4dde2] = env->getMethodID(cls, "getNeQuickAlpha", "()[D");
              mids$[mid_getNequickGMessages_e62d3bb06d56d7e3] = env->getMethodID(cls, "getNequickGMessages", "()Ljava/util/List;");
              mids$[mid_getQZSSCivilianNavigationMessages_810bed48fafb0b9a] = env->getMethodID(cls, "getQZSSCivilianNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getQZSSCivilianNavigationMessages_abe6e889bc24795d] = env->getMethodID(cls, "getQZSSCivilianNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getQZSSLegacyNavigationMessages_810bed48fafb0b9a] = env->getMethodID(cls, "getQZSSLegacyNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getQZSSLegacyNavigationMessages_abe6e889bc24795d] = env->getMethodID(cls, "getQZSSLegacyNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getSBASNavigationMessages_810bed48fafb0b9a] = env->getMethodID(cls, "getSBASNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getSBASNavigationMessages_abe6e889bc24795d] = env->getMethodID(cls, "getSBASNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getSystemTimeOffsets_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSystemTimeOffsets", "()Ljava/util/List;");
              mids$[mid_setKlobucharAlpha_ab69da052b88f50c] = env->getMethodID(cls, "setKlobucharAlpha", "([D)V");
              mids$[mid_setKlobucharBeta_ab69da052b88f50c] = env->getMethodID(cls, "setKlobucharBeta", "([D)V");
              mids$[mid_setNeQuickAlpha_ab69da052b88f50c] = env->getMethodID(cls, "setNeQuickAlpha", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexNavigation::RinexNavigation() : ::org::orekit::files::rinex::RinexFile(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void RinexNavigation::addBDGIMMessage(const ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addBDGIMMessage_e0cc60ecaf228f26], a0.this$);
          }

          void RinexNavigation::addBeidouCivilianNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addBeidouCivilianNavigationMessage_dc4b2b87521f0d2f], a0.this$);
          }

          void RinexNavigation::addBeidouLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addBeidouLegacyNavigationMessage_3bdf636f6ee36324], a0.this$);
          }

          void RinexNavigation::addEarthOrientationParameter(const ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addEarthOrientationParameter_ec3134e016f50825], a0.this$);
          }

          void RinexNavigation::addGPSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGPSLegacyNavigationMessage_a6d83e70838563e9], a0.this$);
          }

          void RinexNavigation::addGPSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGPSLegacyNavigationMessage_cfa2ffa15867e7bd], a0.this$);
          }

          void RinexNavigation::addGalileoNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGalileoNavigationMessage_4e33736c19a56ff8], a0.this$);
          }

          void RinexNavigation::addGlonassNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGlonassNavigationMessage_1538465e20a8ec53], a0.this$);
          }

          void RinexNavigation::addIRNSSNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addIRNSSNavigationMessage_993e2ed3b326e678], a0.this$);
          }

          void RinexNavigation::addKlobucharMessage(const ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addKlobucharMessage_0187013ef57837e3], a0.this$);
          }

          void RinexNavigation::addNequickGMessage(const ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addNequickGMessage_c5d10c9ee17a794f], a0.this$);
          }

          void RinexNavigation::addQZSSCivilianNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addQZSSCivilianNavigationMessage_e3e4e4fc9a7a0633], a0.this$);
          }

          void RinexNavigation::addQZSSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addQZSSLegacyNavigationMessage_a62013e28777a8da], a0.this$);
          }

          void RinexNavigation::addSBASNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSBASNavigationMessage_cd2240912f930701], a0.this$);
          }

          void RinexNavigation::addSystemTimeOffset(const ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSystemTimeOffset_78d212e8e726d9aa], a0.this$);
          }

          ::java::util::List RinexNavigation::getBDGIMMessages() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBDGIMMessages_e62d3bb06d56d7e3]));
          }

          ::java::util::Map RinexNavigation::getBeidouCivilianNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getBeidouCivilianNavigationMessages_810bed48fafb0b9a]));
          }

          ::java::util::List RinexNavigation::getBeidouCivilianNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBeidouCivilianNavigationMessages_abe6e889bc24795d], a0.this$));
          }

          ::java::util::Map RinexNavigation::getBeidouLegacyNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getBeidouLegacyNavigationMessages_810bed48fafb0b9a]));
          }

          ::java::util::List RinexNavigation::getBeidouLegacyNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBeidouLegacyNavigationMessages_abe6e889bc24795d], a0.this$));
          }

          ::java::util::List RinexNavigation::getEarthOrientationParameters() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEarthOrientationParameters_e62d3bb06d56d7e3]));
          }

          ::java::util::Map RinexNavigation::getGPSCivilianNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGPSCivilianNavigationMessages_810bed48fafb0b9a]));
          }

          ::java::util::List RinexNavigation::getGPSCivilianNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGPSCivilianNavigationMessages_abe6e889bc24795d], a0.this$));
          }

          ::java::util::Map RinexNavigation::getGPSLegacyNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGPSLegacyNavigationMessages_810bed48fafb0b9a]));
          }

          ::java::util::List RinexNavigation::getGPSLegacyNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGPSLegacyNavigationMessages_abe6e889bc24795d], a0.this$));
          }

          ::java::util::Map RinexNavigation::getGalileoNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessages_810bed48fafb0b9a]));
          }

          ::java::util::List RinexNavigation::getGalileoNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessages_abe6e889bc24795d], a0.this$));
          }

          ::java::util::Map RinexNavigation::getGlonassNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessages_810bed48fafb0b9a]));
          }

          ::java::util::List RinexNavigation::getGlonassNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessages_abe6e889bc24795d], a0.this$));
          }

          ::java::util::Map RinexNavigation::getIRNSSNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getIRNSSNavigationMessages_810bed48fafb0b9a]));
          }

          ::java::util::List RinexNavigation::getIRNSSNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getIRNSSNavigationMessages_abe6e889bc24795d], a0.this$));
          }

          JArray< jdouble > RinexNavigation::getKlobucharAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getKlobucharAlpha_25e1757a36c4dde2]));
          }

          JArray< jdouble > RinexNavigation::getKlobucharBeta() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getKlobucharBeta_25e1757a36c4dde2]));
          }

          ::java::util::List RinexNavigation::getKlobucharMessages() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getKlobucharMessages_e62d3bb06d56d7e3]));
          }

          JArray< jdouble > RinexNavigation::getNeQuickAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNeQuickAlpha_25e1757a36c4dde2]));
          }

          ::java::util::List RinexNavigation::getNequickGMessages() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNequickGMessages_e62d3bb06d56d7e3]));
          }

          ::java::util::Map RinexNavigation::getQZSSCivilianNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getQZSSCivilianNavigationMessages_810bed48fafb0b9a]));
          }

          ::java::util::List RinexNavigation::getQZSSCivilianNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getQZSSCivilianNavigationMessages_abe6e889bc24795d], a0.this$));
          }

          ::java::util::Map RinexNavigation::getQZSSLegacyNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getQZSSLegacyNavigationMessages_810bed48fafb0b9a]));
          }

          ::java::util::List RinexNavigation::getQZSSLegacyNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getQZSSLegacyNavigationMessages_abe6e889bc24795d], a0.this$));
          }

          ::java::util::Map RinexNavigation::getSBASNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSBASNavigationMessages_810bed48fafb0b9a]));
          }

          ::java::util::List RinexNavigation::getSBASNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSBASNavigationMessages_abe6e889bc24795d], a0.this$));
          }

          ::java::util::List RinexNavigation::getSystemTimeOffsets() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSystemTimeOffsets_e62d3bb06d56d7e3]));
          }

          void RinexNavigation::setKlobucharAlpha(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setKlobucharAlpha_ab69da052b88f50c], a0.this$);
          }

          void RinexNavigation::setKlobucharBeta(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setKlobucharBeta_ab69da052b88f50c], a0.this$);
          }

          void RinexNavigation::setNeQuickAlpha(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNeQuickAlpha_ab69da052b88f50c], a0.this$);
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
        namespace navigation {
          static PyObject *t_RinexNavigation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigation_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigation_of_(t_RinexNavigation *self, PyObject *args);
          static int t_RinexNavigation_init_(t_RinexNavigation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexNavigation_addBDGIMMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addBeidouCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addBeidouLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addEarthOrientationParameter(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addGPSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_addGalileoNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addGlonassNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addIRNSSNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addKlobucharMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addNequickGMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addQZSSCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addQZSSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addSBASNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addSystemTimeOffset(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_getBDGIMMessages(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getBeidouCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getBeidouLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getEarthOrientationParameters(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getGPSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getGPSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getGalileoNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getGlonassNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getIRNSSNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getKlobucharAlpha(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getKlobucharBeta(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getKlobucharMessages(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getNeQuickAlpha(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getNequickGMessages(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getQZSSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getQZSSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getSBASNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getSystemTimeOffsets(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_setKlobucharAlpha(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_setKlobucharBeta(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_setNeQuickAlpha(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_get__bDGIMMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__beidouCivilianNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__beidouLegacyNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__earthOrientationParameters(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__gPSCivilianNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__gPSLegacyNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__galileoNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__glonassNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__iRNSSNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__klobucharAlpha(t_RinexNavigation *self, void *data);
          static int t_RinexNavigation_set__klobucharAlpha(t_RinexNavigation *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigation_get__klobucharBeta(t_RinexNavigation *self, void *data);
          static int t_RinexNavigation_set__klobucharBeta(t_RinexNavigation *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigation_get__klobucharMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__neQuickAlpha(t_RinexNavigation *self, void *data);
          static int t_RinexNavigation_set__neQuickAlpha(t_RinexNavigation *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigation_get__nequickGMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__qZSSCivilianNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__qZSSLegacyNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__sBASNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__systemTimeOffsets(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__parameters_(t_RinexNavigation *self, void *data);
          static PyGetSetDef t_RinexNavigation__fields_[] = {
            DECLARE_GET_FIELD(t_RinexNavigation, bDGIMMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, beidouCivilianNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, beidouLegacyNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, earthOrientationParameters),
            DECLARE_GET_FIELD(t_RinexNavigation, gPSCivilianNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, gPSLegacyNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, galileoNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, glonassNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, iRNSSNavigationMessages),
            DECLARE_GETSET_FIELD(t_RinexNavigation, klobucharAlpha),
            DECLARE_GETSET_FIELD(t_RinexNavigation, klobucharBeta),
            DECLARE_GET_FIELD(t_RinexNavigation, klobucharMessages),
            DECLARE_GETSET_FIELD(t_RinexNavigation, neQuickAlpha),
            DECLARE_GET_FIELD(t_RinexNavigation, nequickGMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, qZSSCivilianNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, qZSSLegacyNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, sBASNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, systemTimeOffsets),
            DECLARE_GET_FIELD(t_RinexNavigation, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexNavigation__methods_[] = {
            DECLARE_METHOD(t_RinexNavigation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigation, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, addBDGIMMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addBeidouCivilianNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addBeidouLegacyNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addEarthOrientationParameter, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addGPSLegacyNavigationMessage, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, addGalileoNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addGlonassNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addIRNSSNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addKlobucharMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addNequickGMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addQZSSCivilianNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addQZSSLegacyNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addSBASNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addSystemTimeOffset, METH_O),
            DECLARE_METHOD(t_RinexNavigation, getBDGIMMessages, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getBeidouCivilianNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getBeidouLegacyNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getEarthOrientationParameters, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getGPSCivilianNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getGPSLegacyNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getGalileoNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getGlonassNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getIRNSSNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getKlobucharAlpha, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getKlobucharBeta, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getKlobucharMessages, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getNeQuickAlpha, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getNequickGMessages, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getQZSSCivilianNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getQZSSLegacyNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getSBASNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getSystemTimeOffsets, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, setKlobucharAlpha, METH_O),
            DECLARE_METHOD(t_RinexNavigation, setKlobucharBeta, METH_O),
            DECLARE_METHOD(t_RinexNavigation, setNeQuickAlpha, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexNavigation)[] = {
            { Py_tp_methods, t_RinexNavigation__methods_ },
            { Py_tp_init, (void *) t_RinexNavigation_init_ },
            { Py_tp_getset, t_RinexNavigation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexNavigation)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::RinexFile),
            NULL
          };

          DEFINE_TYPE(RinexNavigation, t_RinexNavigation, RinexNavigation);
          PyObject *t_RinexNavigation::wrap_Object(const RinexNavigation& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexNavigation::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexNavigation *self = (t_RinexNavigation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexNavigation::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexNavigation::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexNavigation *self = (t_RinexNavigation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexNavigation::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexNavigation), &PY_TYPE_DEF(RinexNavigation), module, "RinexNavigation", 0);
          }

          void t_RinexNavigation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigation), "class_", make_descriptor(RinexNavigation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigation), "wrapfn_", make_descriptor(t_RinexNavigation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexNavigation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexNavigation::initializeClass, 1)))
              return NULL;
            return t_RinexNavigation::wrap_Object(RinexNavigation(((t_RinexNavigation *) arg)->object.this$));
          }
          static PyObject *t_RinexNavigation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexNavigation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexNavigation_of_(t_RinexNavigation *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RinexNavigation_init_(t_RinexNavigation *self, PyObject *args, PyObject *kwds)
          {
            RinexNavigation object((jobject) NULL);

            INT_CALL(object = RinexNavigation());
            self->object = object;
            self->parameters[0] = ::org::orekit::files::rinex::navigation::PY_TYPE(RinexNavigationHeader);

            return 0;
          }

          static PyObject *t_RinexNavigation_addBDGIMMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addBDGIMMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addBDGIMMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addBeidouCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addBeidouCivilianNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addBeidouCivilianNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addBeidouLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addBeidouLegacyNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addBeidouLegacyNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addEarthOrientationParameter(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addEarthOrientationParameter(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addEarthOrientationParameter", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addGPSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addGPSLegacyNavigationMessage(a0));
                  Py_RETURN_NONE;
                }
              }
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addGPSLegacyNavigationMessage(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addGPSLegacyNavigationMessage", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addGalileoNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGalileoNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGalileoNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addGlonassNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGlonassNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGlonassNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addIRNSSNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addIRNSSNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addIRNSSNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addKlobucharMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addKlobucharMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addKlobucharMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addNequickGMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addNequickGMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addNequickGMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addQZSSCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addQZSSCivilianNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addQZSSCivilianNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addQZSSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addQZSSLegacyNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addQZSSLegacyNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addSBASNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addSBASNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSBASNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addSystemTimeOffset(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addSystemTimeOffset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSystemTimeOffset", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getBDGIMMessages(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getBDGIMMessages());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(IonosphereBDGIMMessage));
          }

          static PyObject *t_RinexNavigation_getBeidouCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getBeidouCivilianNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getBeidouCivilianNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(BeidouCivilianNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getBeidouCivilianNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getBeidouLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getBeidouLegacyNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getBeidouLegacyNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(BeidouLegacyNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getBeidouLegacyNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getEarthOrientationParameters(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getEarthOrientationParameters());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(EarthOrientationParameterMessage));
          }

          static PyObject *t_RinexNavigation_getGPSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGPSCivilianNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGPSCivilianNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSCivilianNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGPSCivilianNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getGPSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGPSLegacyNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGPSLegacyNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSLegacyNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGPSLegacyNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getGalileoNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGalileoNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGalileoNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GalileoNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGalileoNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getGlonassNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGlonassNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGlonassNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GLONASSNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGlonassNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getIRNSSNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getIRNSSNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getIRNSSNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(IRNSSNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getIRNSSNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getKlobucharAlpha(t_RinexNavigation *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getKlobucharAlpha());
            return result.wrap();
          }

          static PyObject *t_RinexNavigation_getKlobucharBeta(t_RinexNavigation *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getKlobucharBeta());
            return result.wrap();
          }

          static PyObject *t_RinexNavigation_getKlobucharMessages(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getKlobucharMessages());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(IonosphereKlobucharMessage));
          }

          static PyObject *t_RinexNavigation_getNeQuickAlpha(t_RinexNavigation *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getNeQuickAlpha());
            return result.wrap();
          }

          static PyObject *t_RinexNavigation_getNequickGMessages(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getNequickGMessages());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(IonosphereNequickGMessage));
          }

          static PyObject *t_RinexNavigation_getQZSSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getQZSSCivilianNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getQZSSCivilianNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(QZSSCivilianNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getQZSSCivilianNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getQZSSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getQZSSLegacyNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getQZSSLegacyNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(QZSSLegacyNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getQZSSLegacyNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getSBASNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSBASNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getSBASNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(SBASNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getSBASNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getSystemTimeOffsets(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSystemTimeOffsets());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(SystemTimeOffsetMessage));
          }

          static PyObject *t_RinexNavigation_setKlobucharAlpha(t_RinexNavigation *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setKlobucharAlpha(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setKlobucharAlpha", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_setKlobucharBeta(t_RinexNavigation *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setKlobucharBeta(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setKlobucharBeta", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_setNeQuickAlpha(t_RinexNavigation *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setNeQuickAlpha(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNeQuickAlpha", arg);
            return NULL;
          }
          static PyObject *t_RinexNavigation_get__parameters_(t_RinexNavigation *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexNavigation_get__bDGIMMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getBDGIMMessages());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__beidouCivilianNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeidouCivilianNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__beidouLegacyNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeidouLegacyNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__earthOrientationParameters(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getEarthOrientationParameters());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__gPSCivilianNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGPSCivilianNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__gPSLegacyNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGPSLegacyNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__galileoNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGalileoNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__glonassNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGlonassNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__iRNSSNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getIRNSSNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__klobucharAlpha(t_RinexNavigation *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getKlobucharAlpha());
            return value.wrap();
          }
          static int t_RinexNavigation_set__klobucharAlpha(t_RinexNavigation *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setKlobucharAlpha(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "klobucharAlpha", arg);
            return -1;
          }

          static PyObject *t_RinexNavigation_get__klobucharBeta(t_RinexNavigation *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getKlobucharBeta());
            return value.wrap();
          }
          static int t_RinexNavigation_set__klobucharBeta(t_RinexNavigation *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setKlobucharBeta(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "klobucharBeta", arg);
            return -1;
          }

          static PyObject *t_RinexNavigation_get__klobucharMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getKlobucharMessages());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__neQuickAlpha(t_RinexNavigation *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getNeQuickAlpha());
            return value.wrap();
          }
          static int t_RinexNavigation_set__neQuickAlpha(t_RinexNavigation *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setNeQuickAlpha(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "neQuickAlpha", arg);
            return -1;
          }

          static PyObject *t_RinexNavigation_get__nequickGMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getNequickGMessages());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__qZSSCivilianNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getQZSSCivilianNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__qZSSLegacyNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getQZSSLegacyNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__sBASNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getSBASNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__systemTimeOffsets(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSystemTimeOffsets());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ObjectType::class$ = NULL;
              jmethodID *ObjectType::mids$ = NULL;
              bool ObjectType::live$ = false;
              ObjectType *ObjectType::DEBRIS = NULL;
              ObjectType *ObjectType::OTHER = NULL;
              ObjectType *ObjectType::PAYLOAD = NULL;
              ObjectType *ObjectType::ROCKET_BODY = NULL;
              ObjectType *ObjectType::UNKNOWN = NULL;

              jclass ObjectType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ObjectType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_bb7c5d17a870fb26] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");
                  mids$[mid_values_5230abe0387ea31f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEBRIS = new ObjectType(env->getStaticObjectField(cls, "DEBRIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  OTHER = new ObjectType(env->getStaticObjectField(cls, "OTHER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  PAYLOAD = new ObjectType(env->getStaticObjectField(cls, "PAYLOAD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  ROCKET_BODY = new ObjectType(env->getStaticObjectField(cls, "ROCKET_BODY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  UNKNOWN = new ObjectType(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ObjectType ObjectType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ObjectType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bb7c5d17a870fb26], a0.this$));
              }

              JArray< ObjectType > ObjectType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ObjectType >(env->callStaticObjectMethod(cls, mids$[mid_values_5230abe0387ea31f]));
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
              static PyObject *t_ObjectType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ObjectType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ObjectType_of_(t_ObjectType *self, PyObject *args);
              static PyObject *t_ObjectType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ObjectType_values(PyTypeObject *type);
              static PyObject *t_ObjectType_get__parameters_(t_ObjectType *self, void *data);
              static PyGetSetDef t_ObjectType__fields_[] = {
                DECLARE_GET_FIELD(t_ObjectType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ObjectType__methods_[] = {
                DECLARE_METHOD(t_ObjectType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ObjectType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ObjectType, of_, METH_VARARGS),
                DECLARE_METHOD(t_ObjectType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ObjectType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ObjectType)[] = {
                { Py_tp_methods, t_ObjectType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ObjectType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ObjectType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ObjectType, t_ObjectType, ObjectType);
              PyObject *t_ObjectType::wrap_Object(const ObjectType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ObjectType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ObjectType *self = (t_ObjectType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ObjectType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ObjectType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ObjectType *self = (t_ObjectType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ObjectType::install(PyObject *module)
              {
                installType(&PY_TYPE(ObjectType), &PY_TYPE_DEF(ObjectType), module, "ObjectType", 0);
              }

              void t_ObjectType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "class_", make_descriptor(ObjectType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "wrapfn_", make_descriptor(t_ObjectType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "boxfn_", make_descriptor(boxObject));
                env->getClass(ObjectType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "DEBRIS", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::DEBRIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "OTHER", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::OTHER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "PAYLOAD", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::PAYLOAD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "ROCKET_BODY", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::ROCKET_BODY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "UNKNOWN", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::UNKNOWN)));
              }

              static PyObject *t_ObjectType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ObjectType::initializeClass, 1)))
                  return NULL;
                return t_ObjectType::wrap_Object(ObjectType(((t_ObjectType *) arg)->object.this$));
              }
              static PyObject *t_ObjectType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ObjectType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ObjectType_of_(t_ObjectType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ObjectType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ObjectType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::valueOf(a0));
                  return t_ObjectType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ObjectType_values(PyTypeObject *type)
              {
                JArray< ObjectType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::values());
                return JArray<jobject>(result.this$).wrap(t_ObjectType::wrap_jobject);
              }
              static PyObject *t_ObjectType_get__parameters_(t_ObjectType *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/NevilleInterpolator.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *NevilleInterpolator::class$ = NULL;
        jmethodID *NevilleInterpolator::mids$ = NULL;
        bool NevilleInterpolator::live$ = false;

        jclass NevilleInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/NevilleInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_239fa6a8b11bdf62] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NevilleInterpolator::NevilleInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm NevilleInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm(env->callObjectMethod(this$, mids$[mid_interpolate_239fa6a8b11bdf62], a0.this$, a1.this$));
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
        static PyObject *t_NevilleInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NevilleInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NevilleInterpolator_init_(t_NevilleInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NevilleInterpolator_interpolate(t_NevilleInterpolator *self, PyObject *args);

        static PyMethodDef t_NevilleInterpolator__methods_[] = {
          DECLARE_METHOD(t_NevilleInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NevilleInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NevilleInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NevilleInterpolator)[] = {
          { Py_tp_methods, t_NevilleInterpolator__methods_ },
          { Py_tp_init, (void *) t_NevilleInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NevilleInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NevilleInterpolator, t_NevilleInterpolator, NevilleInterpolator);

        void t_NevilleInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(NevilleInterpolator), &PY_TYPE_DEF(NevilleInterpolator), module, "NevilleInterpolator", 0);
        }

        void t_NevilleInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NevilleInterpolator), "class_", make_descriptor(NevilleInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NevilleInterpolator), "wrapfn_", make_descriptor(t_NevilleInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NevilleInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NevilleInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NevilleInterpolator::initializeClass, 1)))
            return NULL;
          return t_NevilleInterpolator::wrap_Object(NevilleInterpolator(((t_NevilleInterpolator *) arg)->object.this$));
        }
        static PyObject *t_NevilleInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NevilleInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NevilleInterpolator_init_(t_NevilleInterpolator *self, PyObject *args, PyObject *kwds)
        {
          NevilleInterpolator object((jobject) NULL);

          INT_CALL(object = NevilleInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_NevilleInterpolator_interpolate(t_NevilleInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunctionLagrangeForm::wrap_Object(result);
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
#include "org/hipparchus/linear/DefaultFieldMatrixChangingVisitor.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultFieldMatrixChangingVisitor::class$ = NULL;
      jmethodID *DefaultFieldMatrixChangingVisitor::mids$ = NULL;
      bool DefaultFieldMatrixChangingVisitor::live$ = false;

      jclass DefaultFieldMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultFieldMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8d8d85cc6e14d2f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_end_2ff8de927fda4153] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_ea412797eafea800] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_52bb8aebd493cd71] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultFieldMatrixChangingVisitor::DefaultFieldMatrixChangingVisitor(const ::org::hipparchus::FieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8d8d85cc6e14d2f7, a0.this$)) {}

      ::org::hipparchus::FieldElement DefaultFieldMatrixChangingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_2ff8de927fda4153]));
      }

      void DefaultFieldMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ea412797eafea800], a0, a1, a2, a3, a4, a5);
      }

      ::org::hipparchus::FieldElement DefaultFieldMatrixChangingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_visit_52bb8aebd493cd71], a0, a1, a2.this$));
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
      static PyObject *t_DefaultFieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_of_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args);
      static int t_DefaultFieldMatrixChangingVisitor_init_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_end(t_DefaultFieldMatrixChangingVisitor *self);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_start(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_visit(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_get__parameters_(t_DefaultFieldMatrixChangingVisitor *self, void *data);
      static PyGetSetDef t_DefaultFieldMatrixChangingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_DefaultFieldMatrixChangingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DefaultFieldMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultFieldMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_DefaultFieldMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultFieldMatrixChangingVisitor_init_ },
        { Py_tp_getset, t_DefaultFieldMatrixChangingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultFieldMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultFieldMatrixChangingVisitor, t_DefaultFieldMatrixChangingVisitor, DefaultFieldMatrixChangingVisitor);
      PyObject *t_DefaultFieldMatrixChangingVisitor::wrap_Object(const DefaultFieldMatrixChangingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixChangingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixChangingVisitor *self = (t_DefaultFieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DefaultFieldMatrixChangingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixChangingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixChangingVisitor *self = (t_DefaultFieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DefaultFieldMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultFieldMatrixChangingVisitor), &PY_TYPE_DEF(DefaultFieldMatrixChangingVisitor), module, "DefaultFieldMatrixChangingVisitor", 0);
      }

      void t_DefaultFieldMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixChangingVisitor), "class_", make_descriptor(DefaultFieldMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixChangingVisitor), "wrapfn_", make_descriptor(t_DefaultFieldMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultFieldMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultFieldMatrixChangingVisitor::wrap_Object(DefaultFieldMatrixChangingVisitor(((t_DefaultFieldMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultFieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultFieldMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_of_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_DefaultFieldMatrixChangingVisitor_init_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        DefaultFieldMatrixChangingVisitor object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          INT_CALL(object = DefaultFieldMatrixChangingVisitor(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_end(t_DefaultFieldMatrixChangingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_start(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_visit(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_DefaultFieldMatrixChangingVisitor_get__parameters_(t_DefaultFieldMatrixChangingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUpFactory.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUp.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *InterSatellitesWindUpFactory::class$ = NULL;
          jmethodID *InterSatellitesWindUpFactory::mids$ = NULL;
          bool InterSatellitesWindUpFactory::live$ = false;

          jclass InterSatellitesWindUpFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/InterSatellitesWindUpFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getWindUp_d43e329098b8b3ea] = env->getMethodID(cls, "getWindUp", "(Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/estimation/measurements/gnss/Dipole;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/estimation/measurements/gnss/Dipole;)Lorg/orekit/estimation/measurements/gnss/InterSatellitesWindUp;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesWindUpFactory::InterSatellitesWindUpFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp InterSatellitesWindUpFactory::getWindUp(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::org::orekit::estimation::measurements::gnss::Dipole & a2, const ::org::orekit::gnss::SatelliteSystem & a3, jint a4, const ::org::orekit::estimation::measurements::gnss::Dipole & a5) const
          {
            return ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp(env->callObjectMethod(this$, mids$[mid_getWindUp_d43e329098b8b3ea], a0.this$, a1, a2.this$, a3.this$, a4, a5.this$));
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
          static PyObject *t_InterSatellitesWindUpFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesWindUpFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_InterSatellitesWindUpFactory_init_(t_InterSatellitesWindUpFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesWindUpFactory_getWindUp(t_InterSatellitesWindUpFactory *self, PyObject *args);

          static PyMethodDef t_InterSatellitesWindUpFactory__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesWindUpFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUpFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUpFactory, getWindUp, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesWindUpFactory)[] = {
            { Py_tp_methods, t_InterSatellitesWindUpFactory__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesWindUpFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesWindUpFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(InterSatellitesWindUpFactory, t_InterSatellitesWindUpFactory, InterSatellitesWindUpFactory);

          void t_InterSatellitesWindUpFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesWindUpFactory), &PY_TYPE_DEF(InterSatellitesWindUpFactory), module, "InterSatellitesWindUpFactory", 0);
          }

          void t_InterSatellitesWindUpFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUpFactory), "class_", make_descriptor(InterSatellitesWindUpFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUpFactory), "wrapfn_", make_descriptor(t_InterSatellitesWindUpFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUpFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesWindUpFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesWindUpFactory::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesWindUpFactory::wrap_Object(InterSatellitesWindUpFactory(((t_InterSatellitesWindUpFactory *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesWindUpFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesWindUpFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_InterSatellitesWindUpFactory_init_(t_InterSatellitesWindUpFactory *self, PyObject *args, PyObject *kwds)
          {
            InterSatellitesWindUpFactory object((jobject) NULL);

            INT_CALL(object = InterSatellitesWindUpFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_InterSatellitesWindUpFactory_getWindUp(t_InterSatellitesWindUpFactory *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::estimation::measurements::gnss::Dipole a2((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a3((jobject) NULL);
            PyTypeObject **p3;
            jint a4;
            ::org::orekit::estimation::measurements::gnss::Dipole a5((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp result((jobject) NULL);

            if (!parseArgs(args, "KIkKIk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a4, &a5))
            {
              OBJ_CALL(result = self->object.getWindUp(a0, a1, a2, a3, a4, a5));
              return ::org::orekit::estimation::measurements::gnss::t_InterSatellitesWindUp::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWindUp", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TTScale::class$ = NULL;
      jmethodID *TTScale::mids$ = NULL;
      bool TTScale::live$ = false;

      jclass TTScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TTScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e7a49f02c43fd893] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TTScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jdouble TTScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TTScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      jdouble TTScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e7a49f02c43fd893], a0.this$, a1.this$);
      }

      ::java::lang::String TTScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
      static PyObject *t_TTScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TTScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TTScale_getName(t_TTScale *self);
      static PyObject *t_TTScale_offsetFromTAI(t_TTScale *self, PyObject *args);
      static PyObject *t_TTScale_offsetToTAI(t_TTScale *self, PyObject *args);
      static PyObject *t_TTScale_toString(t_TTScale *self, PyObject *args);
      static PyObject *t_TTScale_get__name(t_TTScale *self, void *data);
      static PyGetSetDef t_TTScale__fields_[] = {
        DECLARE_GET_FIELD(t_TTScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TTScale__methods_[] = {
        DECLARE_METHOD(t_TTScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TTScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TTScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TTScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TTScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_TTScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TTScale)[] = {
        { Py_tp_methods, t_TTScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TTScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TTScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TTScale, t_TTScale, TTScale);

      void t_TTScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TTScale), &PY_TYPE_DEF(TTScale), module, "TTScale", 0);
      }

      void t_TTScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TTScale), "class_", make_descriptor(TTScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TTScale), "wrapfn_", make_descriptor(t_TTScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TTScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TTScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TTScale::initializeClass, 1)))
          return NULL;
        return t_TTScale::wrap_Object(TTScale(((t_TTScale *) arg)->object.this$));
      }
      static PyObject *t_TTScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TTScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TTScale_getName(t_TTScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TTScale_offsetFromTAI(t_TTScale *self, PyObject *args)
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

      static PyObject *t_TTScale_offsetToTAI(t_TTScale *self, PyObject *args)
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

      static PyObject *t_TTScale_toString(t_TTScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TTScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TTScale_get__name(t_TTScale *self, void *data)
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
#include "java/util/HashMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *HashMap::class$ = NULL;
    jmethodID *HashMap::mids$ = NULL;
    bool HashMap::live$ = false;

    jclass HashMap::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/HashMap");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_6648520b18d8ef1d] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
        mids$[mid_init$_71c8ec50293ab209] = env->getMethodID(cls, "<init>", "(IF)V");
        mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_containsKey_460c5e2d9d51c6cc] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_460c5e2d9d51c6cc] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_entrySet_7e8f11dd23d1142c] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_get_5804c890f94a02b6] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_2329cf24e33e570d] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_7e8f11dd23d1142c] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_put_2329cf24e33e570d] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_6648520b18d8ef1d] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_2329cf24e33e570d] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_5804c890f94a02b6] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_b13624253707cc45] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_2329cf24e33e570d] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_9e90e99288cb1520] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
        mids$[mid_values_cb666ea1a15f5210] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    HashMap::HashMap() : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    HashMap::HashMap(jint a0) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

    HashMap::HashMap(const ::java::util::Map & a0) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_6648520b18d8ef1d, a0.this$)) {}

    HashMap::HashMap(jint a0, jfloat a1) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_71c8ec50293ab209, a0, a1)) {}

    void HashMap::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
    }

    ::java::lang::Object HashMap::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_541690f9ee81d3ad]));
    }

    jboolean HashMap::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean HashMap::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::util::Set HashMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_7e8f11dd23d1142c]));
    }

    ::java::lang::Object HashMap::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_5804c890f94a02b6], a0.this$));
    }

    ::java::lang::Object HashMap::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_2329cf24e33e570d], a0.this$, a1.this$));
    }

    jboolean HashMap::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    ::java::util::Set HashMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_7e8f11dd23d1142c]));
    }

    ::java::lang::Object HashMap::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_2329cf24e33e570d], a0.this$, a1.this$));
    }

    void HashMap::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_6648520b18d8ef1d], a0.this$);
    }

    ::java::lang::Object HashMap::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_2329cf24e33e570d], a0.this$, a1.this$));
    }

    ::java::lang::Object HashMap::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_5804c890f94a02b6], a0.this$));
    }

    jboolean HashMap::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_b13624253707cc45], a0.this$, a1.this$);
    }

    ::java::lang::Object HashMap::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_2329cf24e33e570d], a0.this$, a1.this$));
    }

    jboolean HashMap::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_9e90e99288cb1520], a0.this$, a1.this$, a2.this$);
    }

    jint HashMap::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
    }

    ::java::util::Collection HashMap::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_cb666ea1a15f5210]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_HashMap_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashMap_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashMap_of_(t_HashMap *self, PyObject *args);
    static int t_HashMap_init_(t_HashMap *self, PyObject *args, PyObject *kwds);
    static PyObject *t_HashMap_clear(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_clone(t_HashMap *self);
    static PyObject *t_HashMap_containsKey(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_containsValue(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_entrySet(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_get(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_getOrDefault(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_isEmpty(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_keySet(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_put(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_putAll(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_putIfAbsent(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_remove(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_replace(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_size(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_values(t_HashMap *self, PyObject *args);
    static PyObject *t_HashMap_get__empty(t_HashMap *self, void *data);
    static PyObject *t_HashMap_get__parameters_(t_HashMap *self, void *data);
    static PyGetSetDef t_HashMap__fields_[] = {
      DECLARE_GET_FIELD(t_HashMap, empty),
      DECLARE_GET_FIELD(t_HashMap, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_HashMap__methods_[] = {
      DECLARE_METHOD(t_HashMap, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashMap, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashMap, of_, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, clear, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, clone, METH_NOARGS),
      DECLARE_METHOD(t_HashMap, containsKey, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, containsValue, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, entrySet, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, get, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, getOrDefault, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, keySet, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, put, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, putAll, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, putIfAbsent, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, remove, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, replace, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, size, METH_VARARGS),
      DECLARE_METHOD(t_HashMap, values, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(HashMap)[] = {
      { Py_tp_methods, t_HashMap__methods_ },
      { Py_tp_init, (void *) t_HashMap_init_ },
      { Py_tp_getset, t_HashMap__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(HashMap)[] = {
      &PY_TYPE_DEF(::java::util::AbstractMap),
      NULL
    };

    DEFINE_TYPE(HashMap, t_HashMap, HashMap);
    PyObject *t_HashMap::wrap_Object(const HashMap& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_HashMap::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashMap *self = (t_HashMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_HashMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_HashMap::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashMap *self = (t_HashMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_HashMap::install(PyObject *module)
    {
      installType(&PY_TYPE(HashMap), &PY_TYPE_DEF(HashMap), module, "HashMap", 0);
    }

    void t_HashMap::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashMap), "class_", make_descriptor(HashMap::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashMap), "wrapfn_", make_descriptor(t_HashMap::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashMap), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_HashMap_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, HashMap::initializeClass, 1)))
        return NULL;
      return t_HashMap::wrap_Object(HashMap(((t_HashMap *) arg)->object.this$));
    }
    static PyObject *t_HashMap_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, HashMap::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_HashMap_of_(t_HashMap *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_HashMap_init_(t_HashMap *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          HashMap object((jobject) NULL);

          INT_CALL(object = HashMap());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          HashMap object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = HashMap(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Map a0((jobject) NULL);
          PyTypeObject **p0;
          HashMap object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
          {
            INT_CALL(object = HashMap(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          jint a0;
          jfloat a1;
          HashMap object((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            INT_CALL(object = HashMap(a0, a1));
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

    static PyObject *t_HashMap_clear(t_HashMap *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_HashMap_clone(t_HashMap *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_HashMap_containsKey(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "containsKey", args, 2);
    }

    static PyObject *t_HashMap_containsValue(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "containsValue", args, 2);
    }

    static PyObject *t_HashMap_entrySet(t_HashMap *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.entrySet());
        return ::java::util::t_Set::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "entrySet", args, 2);
    }

    static PyObject *t_HashMap_get(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_HashMap_getOrDefault(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oO", self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.getOrDefault(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "getOrDefault", args, 2);
    }

    static PyObject *t_HashMap_isEmpty(t_HashMap *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_HashMap_keySet(t_HashMap *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keySet());
        return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "keySet", args, 2);
    }

    static PyObject *t_HashMap_put(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "put", args, 2);
    }

    static PyObject *t_HashMap_putAll(t_HashMap *self, PyObject *args)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "putAll", args, 2);
    }

    static PyObject *t_HashMap_putIfAbsent(t_HashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.putIfAbsent(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "putIfAbsent", args, 2);
    }

    static PyObject *t_HashMap_remove(t_HashMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.remove(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_HashMap_replace(t_HashMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "OOO", self->parameters[0], self->parameters[1], self->parameters[1], &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.replace(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "replace", args, 2);
    }

    static PyObject *t_HashMap_size(t_HashMap *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_HashMap_values(t_HashMap *self, PyObject *args)
    {
      ::java::util::Collection result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.values());
        return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
      }

      return callSuper(PY_TYPE(HashMap), (PyObject *) self, "values", args, 2);
    }
    static PyObject *t_HashMap_get__parameters_(t_HashMap *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_HashMap_get__empty(t_HashMap *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultFieldMatrixPreservingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultFieldMatrixPreservingVisitor::class$ = NULL;
      jmethodID *DefaultFieldMatrixPreservingVisitor::mids$ = NULL;
      bool DefaultFieldMatrixPreservingVisitor::live$ = false;

      jclass DefaultFieldMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultFieldMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8d8d85cc6e14d2f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_end_2ff8de927fda4153] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_ea412797eafea800] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_c2695120fce254e7] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultFieldMatrixPreservingVisitor::DefaultFieldMatrixPreservingVisitor(const ::org::hipparchus::FieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8d8d85cc6e14d2f7, a0.this$)) {}

      ::org::hipparchus::FieldElement DefaultFieldMatrixPreservingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_2ff8de927fda4153]));
      }

      void DefaultFieldMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ea412797eafea800], a0, a1, a2, a3, a4, a5);
      }

      void DefaultFieldMatrixPreservingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_c2695120fce254e7], a0, a1, a2.this$);
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
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_of_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args);
      static int t_DefaultFieldMatrixPreservingVisitor_init_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_end(t_DefaultFieldMatrixPreservingVisitor *self);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_start(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_visit(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_get__parameters_(t_DefaultFieldMatrixPreservingVisitor *self, void *data);
      static PyGetSetDef t_DefaultFieldMatrixPreservingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_DefaultFieldMatrixPreservingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DefaultFieldMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultFieldMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_DefaultFieldMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultFieldMatrixPreservingVisitor_init_ },
        { Py_tp_getset, t_DefaultFieldMatrixPreservingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultFieldMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultFieldMatrixPreservingVisitor, t_DefaultFieldMatrixPreservingVisitor, DefaultFieldMatrixPreservingVisitor);
      PyObject *t_DefaultFieldMatrixPreservingVisitor::wrap_Object(const DefaultFieldMatrixPreservingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixPreservingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixPreservingVisitor *self = (t_DefaultFieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DefaultFieldMatrixPreservingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixPreservingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixPreservingVisitor *self = (t_DefaultFieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DefaultFieldMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultFieldMatrixPreservingVisitor), &PY_TYPE_DEF(DefaultFieldMatrixPreservingVisitor), module, "DefaultFieldMatrixPreservingVisitor", 0);
      }

      void t_DefaultFieldMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixPreservingVisitor), "class_", make_descriptor(DefaultFieldMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_DefaultFieldMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultFieldMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultFieldMatrixPreservingVisitor::wrap_Object(DefaultFieldMatrixPreservingVisitor(((t_DefaultFieldMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultFieldMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_of_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_DefaultFieldMatrixPreservingVisitor_init_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        DefaultFieldMatrixPreservingVisitor object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          INT_CALL(object = DefaultFieldMatrixPreservingVisitor(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_end(t_DefaultFieldMatrixPreservingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_start(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_visit(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_get__parameters_(t_DefaultFieldMatrixPreservingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/function/IntConsumer.h"
#include "java/util/function/IntConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *IntConsumer::class$ = NULL;
      jmethodID *IntConsumer::mids$ = NULL;
      bool IntConsumer::live$ = false;

      jclass IntConsumer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/IntConsumer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_accept_44ed599e93e8a30c] = env->getMethodID(cls, "accept", "(I)V");
          mids$[mid_andThen_1933106f8483b048] = env->getMethodID(cls, "andThen", "(Ljava/util/function/IntConsumer;)Ljava/util/function/IntConsumer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void IntConsumer::accept(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_accept_44ed599e93e8a30c], a0);
      }

      IntConsumer IntConsumer::andThen(const IntConsumer & a0) const
      {
        return IntConsumer(env->callObjectMethod(this$, mids$[mid_andThen_1933106f8483b048], a0.this$));
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
      static PyObject *t_IntConsumer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntConsumer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntConsumer_accept(t_IntConsumer *self, PyObject *arg);
      static PyObject *t_IntConsumer_andThen(t_IntConsumer *self, PyObject *arg);

      static PyMethodDef t_IntConsumer__methods_[] = {
        DECLARE_METHOD(t_IntConsumer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntConsumer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntConsumer, accept, METH_O),
        DECLARE_METHOD(t_IntConsumer, andThen, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IntConsumer)[] = {
        { Py_tp_methods, t_IntConsumer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IntConsumer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IntConsumer, t_IntConsumer, IntConsumer);

      void t_IntConsumer::install(PyObject *module)
      {
        installType(&PY_TYPE(IntConsumer), &PY_TYPE_DEF(IntConsumer), module, "IntConsumer", 0);
      }

      void t_IntConsumer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntConsumer), "class_", make_descriptor(IntConsumer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntConsumer), "wrapfn_", make_descriptor(t_IntConsumer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntConsumer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IntConsumer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IntConsumer::initializeClass, 1)))
          return NULL;
        return t_IntConsumer::wrap_Object(IntConsumer(((t_IntConsumer *) arg)->object.this$));
      }
      static PyObject *t_IntConsumer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IntConsumer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IntConsumer_accept(t_IntConsumer *self, PyObject *arg)
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

      static PyObject *t_IntConsumer_andThen(t_IntConsumer *self, PyObject *arg)
      {
        IntConsumer a0((jobject) NULL);
        IntConsumer result((jobject) NULL);

        if (!parseArg(arg, "k", IntConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.andThen(a0));
          return t_IntConsumer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "andThen", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          ::java::lang::Class *MinMaxTreeTile::class$ = NULL;
          jmethodID *MinMaxTreeTile::mids$ = NULL;
          bool MinMaxTreeTile::live$ = false;

          jclass MinMaxTreeTile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCrossedBoundaryColumns_f556b53ccd261e0b] = env->getMethodID(cls, "getCrossedBoundaryColumns", "(III)[I");
              mids$[mid_getCrossedBoundaryRows_f556b53ccd261e0b] = env->getMethodID(cls, "getCrossedBoundaryRows", "(III)[I");
              mids$[mid_getLevels_55546ef6a647f39b] = env->getMethodID(cls, "getLevels", "()I");
              mids$[mid_getMaxElevation_2f53baea9459d443] = env->getMethodID(cls, "getMaxElevation", "(III)D");
              mids$[mid_getMergeLevel_aad24acd6036a6f1] = env->getMethodID(cls, "getMergeLevel", "(IIII)I");
              mids$[mid_getMinElevation_2f53baea9459d443] = env->getMethodID(cls, "getMinElevation", "(III)D");
              mids$[mid_isColumnMerging_96f51a3f36d3a2a7] = env->getMethodID(cls, "isColumnMerging", "(I)Z");
              mids$[mid_locateMax_f556b53ccd261e0b] = env->getMethodID(cls, "locateMax", "(III)[I");
              mids$[mid_locateMin_f556b53ccd261e0b] = env->getMethodID(cls, "locateMin", "(III)[I");
              mids$[mid_processUpdatedElevation_ab69da052b88f50c] = env->getMethodID(cls, "processUpdatedElevation", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< jint > MinMaxTreeTile::getCrossedBoundaryColumns(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCrossedBoundaryColumns_f556b53ccd261e0b], a0, a1, a2));
          }

          JArray< jint > MinMaxTreeTile::getCrossedBoundaryRows(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCrossedBoundaryRows_f556b53ccd261e0b], a0, a1, a2));
          }

          jint MinMaxTreeTile::getLevels() const
          {
            return env->callIntMethod(this$, mids$[mid_getLevels_55546ef6a647f39b]);
          }

          jdouble MinMaxTreeTile::getMaxElevation(jint a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxElevation_2f53baea9459d443], a0, a1, a2);
          }

          jint MinMaxTreeTile::getMergeLevel(jint a0, jint a1, jint a2, jint a3) const
          {
            return env->callIntMethod(this$, mids$[mid_getMergeLevel_aad24acd6036a6f1], a0, a1, a2, a3);
          }

          jdouble MinMaxTreeTile::getMinElevation(jint a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMinElevation_2f53baea9459d443], a0, a1, a2);
          }

          jboolean MinMaxTreeTile::isColumnMerging(jint a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isColumnMerging_96f51a3f36d3a2a7], a0);
          }

          JArray< jint > MinMaxTreeTile::locateMax(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_locateMax_f556b53ccd261e0b], a0, a1, a2));
          }

          JArray< jint > MinMaxTreeTile::locateMin(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_locateMin_f556b53ccd261e0b], a0, a1, a2));
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
      namespace intersection {
        namespace duvenhage {
          static PyObject *t_MinMaxTreeTile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MinMaxTreeTile_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryColumns(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryRows(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getLevels(t_MinMaxTreeTile *self);
          static PyObject *t_MinMaxTreeTile_getMaxElevation(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getMergeLevel(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getMinElevation(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_isColumnMerging(t_MinMaxTreeTile *self, PyObject *arg);
          static PyObject *t_MinMaxTreeTile_locateMax(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_locateMin(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_get__levels(t_MinMaxTreeTile *self, void *data);
          static PyGetSetDef t_MinMaxTreeTile__fields_[] = {
            DECLARE_GET_FIELD(t_MinMaxTreeTile, levels),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MinMaxTreeTile__methods_[] = {
            DECLARE_METHOD(t_MinMaxTreeTile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTile, getCrossedBoundaryColumns, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getCrossedBoundaryRows, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getLevels, METH_NOARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getMaxElevation, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getMergeLevel, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getMinElevation, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, isColumnMerging, METH_O),
            DECLARE_METHOD(t_MinMaxTreeTile, locateMax, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, locateMin, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MinMaxTreeTile)[] = {
            { Py_tp_methods, t_MinMaxTreeTile__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MinMaxTreeTile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MinMaxTreeTile)[] = {
            &PY_TYPE_DEF(::org::orekit::rugged::raster::SimpleTile),
            NULL
          };

          DEFINE_TYPE(MinMaxTreeTile, t_MinMaxTreeTile, MinMaxTreeTile);

          void t_MinMaxTreeTile::install(PyObject *module)
          {
            installType(&PY_TYPE(MinMaxTreeTile), &PY_TYPE_DEF(MinMaxTreeTile), module, "MinMaxTreeTile", 0);
          }

          void t_MinMaxTreeTile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTile), "class_", make_descriptor(MinMaxTreeTile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTile), "wrapfn_", make_descriptor(t_MinMaxTreeTile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MinMaxTreeTile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MinMaxTreeTile::initializeClass, 1)))
              return NULL;
            return t_MinMaxTreeTile::wrap_Object(MinMaxTreeTile(((t_MinMaxTreeTile *) arg)->object.this$));
          }
          static PyObject *t_MinMaxTreeTile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MinMaxTreeTile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryColumns(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getCrossedBoundaryColumns(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getCrossedBoundaryColumns", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryRows(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getCrossedBoundaryRows(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getCrossedBoundaryRows", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_getLevels(t_MinMaxTreeTile *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLevels());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_MinMaxTreeTile_getMaxElevation(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getMaxElevation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(MinMaxTreeTile), (PyObject *) self, "getMaxElevation", args, 2);
          }

          static PyObject *t_MinMaxTreeTile_getMergeLevel(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint result;

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getMergeLevel(a0, a1, a2, a3));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getMergeLevel", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_getMinElevation(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getMinElevation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(MinMaxTreeTile), (PyObject *) self, "getMinElevation", args, 2);
          }

          static PyObject *t_MinMaxTreeTile_isColumnMerging(t_MinMaxTreeTile *self, PyObject *arg)
          {
            jint a0;
            jboolean result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.isColumnMerging(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isColumnMerging", arg);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_locateMax(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.locateMax(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "locateMax", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_locateMin(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.locateMin(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "locateMin", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_get__levels(t_MinMaxTreeTile *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLevels());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Incrementor::class$ = NULL;
      jmethodID *Incrementor::mids$ = NULL;
      bool Incrementor::live$ = false;

      jclass Incrementor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Incrementor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_435c21a2398bab3e] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/util/Incrementor$MaxCountExceededCallback;)V");
          mids$[mid_canIncrement_9ab94ac1dc23b105] = env->getMethodID(cls, "canIncrement", "()Z");
          mids$[mid_canIncrement_96f51a3f36d3a2a7] = env->getMethodID(cls, "canIncrement", "(I)Z");
          mids$[mid_getCount_55546ef6a647f39b] = env->getMethodID(cls, "getCount", "()I");
          mids$[mid_getMaximalCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaximalCount", "()I");
          mids$[mid_increment_a1fa5dae97ea5ed2] = env->getMethodID(cls, "increment", "()V");
          mids$[mid_increment_44ed599e93e8a30c] = env->getMethodID(cls, "increment", "(I)V");
          mids$[mid_reset_a1fa5dae97ea5ed2] = env->getMethodID(cls, "reset", "()V");
          mids$[mid_withCallback_9888a6776bef88ed] = env->getMethodID(cls, "withCallback", "(Lorg/hipparchus/util/Incrementor$MaxCountExceededCallback;)Lorg/hipparchus/util/Incrementor;");
          mids$[mid_withCount_260714b254a0ceb0] = env->getMethodID(cls, "withCount", "(I)Lorg/hipparchus/util/Incrementor;");
          mids$[mid_withMaximalCount_260714b254a0ceb0] = env->getMethodID(cls, "withMaximalCount", "(I)Lorg/hipparchus/util/Incrementor;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Incrementor::Incrementor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      Incrementor::Incrementor(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      Incrementor::Incrementor(jint a0, const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_435c21a2398bab3e, a0, a1.this$)) {}

      jboolean Incrementor::canIncrement() const
      {
        return env->callBooleanMethod(this$, mids$[mid_canIncrement_9ab94ac1dc23b105]);
      }

      jboolean Incrementor::canIncrement(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_canIncrement_96f51a3f36d3a2a7], a0);
      }

      jint Incrementor::getCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_55546ef6a647f39b]);
      }

      jint Incrementor::getMaximalCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaximalCount_55546ef6a647f39b]);
      }

      void Incrementor::increment() const
      {
        env->callVoidMethod(this$, mids$[mid_increment_a1fa5dae97ea5ed2]);
      }

      void Incrementor::increment(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_44ed599e93e8a30c], a0);
      }

      void Incrementor::reset() const
      {
        env->callVoidMethod(this$, mids$[mid_reset_a1fa5dae97ea5ed2]);
      }

      Incrementor Incrementor::withCallback(const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback & a0) const
      {
        return Incrementor(env->callObjectMethod(this$, mids$[mid_withCallback_9888a6776bef88ed], a0.this$));
      }

      Incrementor Incrementor::withCount(jint a0) const
      {
        return Incrementor(env->callObjectMethod(this$, mids$[mid_withCount_260714b254a0ceb0], a0));
      }

      Incrementor Incrementor::withMaximalCount(jint a0) const
      {
        return Incrementor(env->callObjectMethod(this$, mids$[mid_withMaximalCount_260714b254a0ceb0], a0));
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
      static PyObject *t_Incrementor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Incrementor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Incrementor_init_(t_Incrementor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Incrementor_canIncrement(t_Incrementor *self, PyObject *args);
      static PyObject *t_Incrementor_getCount(t_Incrementor *self);
      static PyObject *t_Incrementor_getMaximalCount(t_Incrementor *self);
      static PyObject *t_Incrementor_increment(t_Incrementor *self, PyObject *args);
      static PyObject *t_Incrementor_reset(t_Incrementor *self);
      static PyObject *t_Incrementor_withCallback(t_Incrementor *self, PyObject *arg);
      static PyObject *t_Incrementor_withCount(t_Incrementor *self, PyObject *arg);
      static PyObject *t_Incrementor_withMaximalCount(t_Incrementor *self, PyObject *arg);
      static PyObject *t_Incrementor_get__count(t_Incrementor *self, void *data);
      static PyObject *t_Incrementor_get__maximalCount(t_Incrementor *self, void *data);
      static PyGetSetDef t_Incrementor__fields_[] = {
        DECLARE_GET_FIELD(t_Incrementor, count),
        DECLARE_GET_FIELD(t_Incrementor, maximalCount),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Incrementor__methods_[] = {
        DECLARE_METHOD(t_Incrementor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor, canIncrement, METH_VARARGS),
        DECLARE_METHOD(t_Incrementor, getCount, METH_NOARGS),
        DECLARE_METHOD(t_Incrementor, getMaximalCount, METH_NOARGS),
        DECLARE_METHOD(t_Incrementor, increment, METH_VARARGS),
        DECLARE_METHOD(t_Incrementor, reset, METH_NOARGS),
        DECLARE_METHOD(t_Incrementor, withCallback, METH_O),
        DECLARE_METHOD(t_Incrementor, withCount, METH_O),
        DECLARE_METHOD(t_Incrementor, withMaximalCount, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Incrementor)[] = {
        { Py_tp_methods, t_Incrementor__methods_ },
        { Py_tp_init, (void *) t_Incrementor_init_ },
        { Py_tp_getset, t_Incrementor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Incrementor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Incrementor, t_Incrementor, Incrementor);

      void t_Incrementor::install(PyObject *module)
      {
        installType(&PY_TYPE(Incrementor), &PY_TYPE_DEF(Incrementor), module, "Incrementor", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "MaxCountExceededCallback", make_descriptor(&PY_TYPE_DEF(Incrementor$MaxCountExceededCallback)));
      }

      void t_Incrementor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "class_", make_descriptor(Incrementor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "wrapfn_", make_descriptor(t_Incrementor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Incrementor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Incrementor::initializeClass, 1)))
          return NULL;
        return t_Incrementor::wrap_Object(Incrementor(((t_Incrementor *) arg)->object.this$));
      }
      static PyObject *t_Incrementor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Incrementor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Incrementor_init_(t_Incrementor *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Incrementor object((jobject) NULL);

            INT_CALL(object = Incrementor());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            Incrementor object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Incrementor(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::hipparchus::util::Incrementor$MaxCountExceededCallback a1((jobject) NULL);
            Incrementor object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::util::Incrementor$MaxCountExceededCallback::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Incrementor(a0, a1));
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

      static PyObject *t_Incrementor_canIncrement(t_Incrementor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jboolean result;
            OBJ_CALL(result = self->object.canIncrement());
            Py_RETURN_BOOL(result);
          }
          break;
         case 1:
          {
            jint a0;
            jboolean result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.canIncrement(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "canIncrement", args);
        return NULL;
      }

      static PyObject *t_Incrementor_getCount(t_Incrementor *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Incrementor_getMaximalCount(t_Incrementor *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaximalCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Incrementor_increment(t_Incrementor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.increment());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "increment", args);
        return NULL;
      }

      static PyObject *t_Incrementor_reset(t_Incrementor *self)
      {
        OBJ_CALL(self->object.reset());
        Py_RETURN_NONE;
      }

      static PyObject *t_Incrementor_withCallback(t_Incrementor *self, PyObject *arg)
      {
        ::org::hipparchus::util::Incrementor$MaxCountExceededCallback a0((jobject) NULL);
        Incrementor result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor$MaxCountExceededCallback::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withCallback(a0));
          return t_Incrementor::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withCallback", arg);
        return NULL;
      }

      static PyObject *t_Incrementor_withCount(t_Incrementor *self, PyObject *arg)
      {
        jint a0;
        Incrementor result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withCount(a0));
          return t_Incrementor::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withCount", arg);
        return NULL;
      }

      static PyObject *t_Incrementor_withMaximalCount(t_Incrementor *self, PyObject *arg)
      {
        jint a0;
        Incrementor result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaximalCount(a0));
          return t_Incrementor::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaximalCount", arg);
        return NULL;
      }

      static PyObject *t_Incrementor_get__count(t_Incrementor *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCount());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Incrementor_get__maximalCount(t_Incrementor *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaximalCount());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$LeafMerger.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTree::class$ = NULL;
        jmethodID *BSPTree::mids$ = NULL;
        bool BSPTree::live$ = false;

        jclass BSPTree::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTree");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_55f3c894852c27a3] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;)V");
            mids$[mid_init$_935c58c45f94c5fa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree;Ljava/lang/Object;)V");
            mids$[mid_copySelf_f839a360566776b0] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getAttribute_541690f9ee81d3ad] = env->getMethodID(cls, "getAttribute", "()Ljava/lang/Object;");
            mids$[mid_getCell_2cf328ec4679b7e5] = env->getMethodID(cls, "getCell", "(Lorg/hipparchus/geometry/Point;D)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getCloseCuts_d02a7a3faed5cf00] = env->getMethodID(cls, "getCloseCuts", "(Lorg/hipparchus/geometry/Point;D)Ljava/util/List;");
            mids$[mid_getCut_0417f9f9ce6ee466] = env->getMethodID(cls, "getCut", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getMinus_f839a360566776b0] = env->getMethodID(cls, "getMinus", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getParent_f839a360566776b0] = env->getMethodID(cls, "getParent", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getPlus_f839a360566776b0] = env->getMethodID(cls, "getPlus", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_insertCut_806ecfbca1984226] = env->getMethodID(cls, "insertCut", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
            mids$[mid_insertInTree_9946f3d4e49f1069] = env->getMethodID(cls, "insertInTree", "(Lorg/hipparchus/geometry/partitioning/BSPTree;ZLorg/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler;)V");
            mids$[mid_merge_e39f58f6e5885e63] = env->getMethodID(cls, "merge", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree$LeafMerger;)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_pruneAroundConvexCell_c149c90734e740da] = env->getMethodID(cls, "pruneAroundConvexCell", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_setAttribute_55f3c894852c27a3] = env->getMethodID(cls, "setAttribute", "(Ljava/lang/Object;)V");
            mids$[mid_split_056ecd249b79ab3d] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_visit_ad25ba9d976eb6ad] = env->getMethodID(cls, "visit", "(Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BSPTree::BSPTree() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        BSPTree::BSPTree(const ::java::lang::Object & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_55f3c894852c27a3, a0.this$)) {}

        BSPTree::BSPTree(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0, const BSPTree & a1, const BSPTree & a2, const ::java::lang::Object & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_935c58c45f94c5fa, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        BSPTree BSPTree::copySelf() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_copySelf_f839a360566776b0]));
        }

        ::java::lang::Object BSPTree::getAttribute() const
        {
          return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAttribute_541690f9ee81d3ad]));
        }

        BSPTree BSPTree::getCell(const ::org::hipparchus::geometry::Point & a0, jdouble a1) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getCell_2cf328ec4679b7e5], a0.this$, a1));
        }

        ::java::util::List BSPTree::getCloseCuts(const ::org::hipparchus::geometry::Point & a0, jdouble a1) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCloseCuts_d02a7a3faed5cf00], a0.this$, a1));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane BSPTree::getCut() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getCut_0417f9f9ce6ee466]));
        }

        BSPTree BSPTree::getMinus() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getMinus_f839a360566776b0]));
        }

        BSPTree BSPTree::getParent() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getParent_f839a360566776b0]));
        }

        BSPTree BSPTree::getPlus() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getPlus_f839a360566776b0]));
        }

        jboolean BSPTree::insertCut(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_insertCut_806ecfbca1984226], a0.this$);
        }

        void BSPTree::insertInTree(const BSPTree & a0, jboolean a1, const ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_insertInTree_9946f3d4e49f1069], a0.this$, a1, a2.this$);
        }

        BSPTree BSPTree::merge(const BSPTree & a0, const ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger & a1) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_merge_e39f58f6e5885e63], a0.this$, a1.this$));
        }

        BSPTree BSPTree::pruneAroundConvexCell(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_pruneAroundConvexCell_c149c90734e740da], a0.this$, a1.this$, a2.this$));
        }

        void BSPTree::setAttribute(const ::java::lang::Object & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttribute_55f3c894852c27a3], a0.this$);
        }

        BSPTree BSPTree::split(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_split_056ecd249b79ab3d], a0.this$));
        }

        void BSPTree::visit(const ::org::hipparchus::geometry::partitioning::BSPTreeVisitor & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_visit_ad25ba9d976eb6ad], a0.this$);
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
        static PyObject *t_BSPTree_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree_of_(t_BSPTree *self, PyObject *args);
        static int t_BSPTree_init_(t_BSPTree *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BSPTree_copySelf(t_BSPTree *self);
        static PyObject *t_BSPTree_getAttribute(t_BSPTree *self);
        static PyObject *t_BSPTree_getCell(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_getCloseCuts(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_getCut(t_BSPTree *self);
        static PyObject *t_BSPTree_getMinus(t_BSPTree *self);
        static PyObject *t_BSPTree_getParent(t_BSPTree *self);
        static PyObject *t_BSPTree_getPlus(t_BSPTree *self);
        static PyObject *t_BSPTree_insertCut(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_insertInTree(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_merge(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_pruneAroundConvexCell(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_setAttribute(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_split(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_visit(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_get__attribute(t_BSPTree *self, void *data);
        static int t_BSPTree_set__attribute(t_BSPTree *self, PyObject *arg, void *data);
        static PyObject *t_BSPTree_get__cut(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__minus(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__parent(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__plus(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__parameters_(t_BSPTree *self, void *data);
        static PyGetSetDef t_BSPTree__fields_[] = {
          DECLARE_GETSET_FIELD(t_BSPTree, attribute),
          DECLARE_GET_FIELD(t_BSPTree, cut),
          DECLARE_GET_FIELD(t_BSPTree, minus),
          DECLARE_GET_FIELD(t_BSPTree, parent),
          DECLARE_GET_FIELD(t_BSPTree, plus),
          DECLARE_GET_FIELD(t_BSPTree, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTree__methods_[] = {
          DECLARE_METHOD(t_BSPTree, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getAttribute, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getCell, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, getCloseCuts, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, getCut, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getMinus, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getParent, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getPlus, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, insertCut, METH_O),
          DECLARE_METHOD(t_BSPTree, insertInTree, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, merge, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, pruneAroundConvexCell, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, setAttribute, METH_O),
          DECLARE_METHOD(t_BSPTree, split, METH_O),
          DECLARE_METHOD(t_BSPTree, visit, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTree)[] = {
          { Py_tp_methods, t_BSPTree__methods_ },
          { Py_tp_init, (void *) t_BSPTree_init_ },
          { Py_tp_getset, t_BSPTree__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTree)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTree, t_BSPTree, BSPTree);
        PyObject *t_BSPTree::wrap_Object(const BSPTree& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree *self = (t_BSPTree *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTree::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree *self = (t_BSPTree *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTree::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTree), &PY_TYPE_DEF(BSPTree), module, "BSPTree", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "VanishingCutHandler", make_descriptor(&PY_TYPE_DEF(BSPTree$VanishingCutHandler)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "LeafMerger", make_descriptor(&PY_TYPE_DEF(BSPTree$LeafMerger)));
        }

        void t_BSPTree::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "class_", make_descriptor(BSPTree::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "wrapfn_", make_descriptor(t_BSPTree::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTree_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTree::initializeClass, 1)))
            return NULL;
          return t_BSPTree::wrap_Object(BSPTree(((t_BSPTree *) arg)->object.this$));
        }
        static PyObject *t_BSPTree_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTree::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTree_of_(t_BSPTree *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BSPTree_init_(t_BSPTree *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BSPTree object((jobject) NULL);

              INT_CALL(object = BSPTree());
              self->object = object;
              break;
            }
           case 1:
            {
              ::java::lang::Object a0((jobject) NULL);
              BSPTree object((jobject) NULL);

              if (!parseArgs(args, "o", &a0))
              {
                INT_CALL(object = BSPTree(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
              PyTypeObject **p0;
              BSPTree a1((jobject) NULL);
              PyTypeObject **p1;
              BSPTree a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::lang::Object a3((jobject) NULL);
              BSPTree object((jobject) NULL);

              if (!parseArgs(args, "KKKo", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, BSPTree::initializeClass, BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_, &a1, &p1, t_BSPTree::parameters_, &a2, &p2, t_BSPTree::parameters_, &a3))
              {
                INT_CALL(object = BSPTree(a0, a1, a2, a3));
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

        static PyObject *t_BSPTree_copySelf(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getAttribute(t_BSPTree *self)
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttribute());
          return ::java::lang::t_Object::wrap_Object(result);
        }

        static PyObject *t_BSPTree_getCell(t_BSPTree *self, PyObject *args)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          BSPTree result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getCell(a0, a1));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getCell", args);
          return NULL;
        }

        static PyObject *t_BSPTree_getCloseCuts(t_BSPTree *self, PyObject *args)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getCloseCuts(a0, a1));
            return ::java::util::t_List::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCloseCuts", args);
          return NULL;
        }

        static PyObject *t_BSPTree_getCut(t_BSPTree *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getCut());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getMinus(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinus());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getParent(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.getParent());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getPlus(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlus());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_insertCut(t_BSPTree *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.insertCut(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "insertCut", arg);
          return NULL;
        }

        static PyObject *t_BSPTree_insertInTree(t_BSPTree *self, PyObject *args)
        {
          BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean a1;
          ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "KZK", BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler::initializeClass, &a0, &p0, t_BSPTree::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::partitioning::t_BSPTree$VanishingCutHandler::parameters_))
          {
            OBJ_CALL(self->object.insertInTree(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "insertInTree", args);
          return NULL;
        }

        static PyObject *t_BSPTree_merge(t_BSPTree *self, PyObject *args)
        {
          BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger a1((jobject) NULL);
          PyTypeObject **p1;
          BSPTree result((jobject) NULL);

          if (!parseArgs(args, "KK", BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger::initializeClass, &a0, &p0, t_BSPTree::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_BSPTree$LeafMerger::parameters_))
          {
            OBJ_CALL(result = self->object.merge(a0, a1));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "merge", args);
          return NULL;
        }

        static PyObject *t_BSPTree_pruneAroundConvexCell(t_BSPTree *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          BSPTree result((jobject) NULL);

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pruneAroundConvexCell(a0, a1, a2));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "pruneAroundConvexCell", args);
          return NULL;
        }

        static PyObject *t_BSPTree_setAttribute(t_BSPTree *self, PyObject *arg)
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArg(arg, "o", &a0))
          {
            OBJ_CALL(self->object.setAttribute(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAttribute", arg);
          return NULL;
        }

        static PyObject *t_BSPTree_split(t_BSPTree *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          BSPTree result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.split(a0));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "split", arg);
          return NULL;
        }

        static PyObject *t_BSPTree_visit(t_BSPTree *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTreeVisitor a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTreeVisitor::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTreeVisitor::parameters_))
          {
            OBJ_CALL(self->object.visit(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "visit", arg);
          return NULL;
        }
        static PyObject *t_BSPTree_get__parameters_(t_BSPTree *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BSPTree_get__attribute(t_BSPTree *self, void *data)
        {
          ::java::lang::Object value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttribute());
          return ::java::lang::t_Object::wrap_Object(value);
        }
        static int t_BSPTree_set__attribute(t_BSPTree *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::Object value((jobject) NULL);
            if (!parseArg(arg, "o", &value))
            {
              INT_CALL(self->object.setAttribute(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attribute", arg);
          return -1;
        }

        static PyObject *t_BSPTree_get__cut(t_BSPTree *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getCut());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_BSPTree_get__minus(t_BSPTree *self, void *data)
        {
          BSPTree value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinus());
          return t_BSPTree::wrap_Object(value);
        }

        static PyObject *t_BSPTree_get__parent(t_BSPTree *self, void *data)
        {
          BSPTree value((jobject) NULL);
          OBJ_CALL(value = self->object.getParent());
          return t_BSPTree::wrap_Object(value);
        }

        static PyObject *t_BSPTree_get__plus(t_BSPTree *self, void *data)
        {
          BSPTree value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlus());
          return t_BSPTree::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Combinations.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Combinations::class$ = NULL;
      jmethodID *Combinations::mids$ = NULL;
      bool Combinations::live$ = false;

      jclass Combinations::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Combinations");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_comparator_127b1bec8b0c3ae1] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
          mids$[mid_getK_55546ef6a647f39b] = env->getMethodID(cls, "getK", "()I");
          mids$[mid_getN_55546ef6a647f39b] = env->getMethodID(cls, "getN", "()I");
          mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Combinations::Combinations(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

      ::java::util::Comparator Combinations::comparator() const
      {
        return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_127b1bec8b0c3ae1]));
      }

      jint Combinations::getK() const
      {
        return env->callIntMethod(this$, mids$[mid_getK_55546ef6a647f39b]);
      }

      jint Combinations::getN() const
      {
        return env->callIntMethod(this$, mids$[mid_getN_55546ef6a647f39b]);
      }

      ::java::util::Iterator Combinations::iterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
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
      static PyObject *t_Combinations_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Combinations_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Combinations_init_(t_Combinations *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Combinations_comparator(t_Combinations *self);
      static PyObject *t_Combinations_getK(t_Combinations *self);
      static PyObject *t_Combinations_getN(t_Combinations *self);
      static PyObject *t_Combinations_iterator(t_Combinations *self);
      static PyObject *t_Combinations_get__k(t_Combinations *self, void *data);
      static PyObject *t_Combinations_get__n(t_Combinations *self, void *data);
      static PyGetSetDef t_Combinations__fields_[] = {
        DECLARE_GET_FIELD(t_Combinations, k),
        DECLARE_GET_FIELD(t_Combinations, n),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Combinations__methods_[] = {
        DECLARE_METHOD(t_Combinations, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Combinations, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Combinations, comparator, METH_NOARGS),
        DECLARE_METHOD(t_Combinations, getK, METH_NOARGS),
        DECLARE_METHOD(t_Combinations, getN, METH_NOARGS),
        DECLARE_METHOD(t_Combinations, iterator, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Combinations)[] = {
        { Py_tp_methods, t_Combinations__methods_ },
        { Py_tp_init, (void *) t_Combinations_init_ },
        { Py_tp_getset, t_Combinations__fields_ },
        { Py_tp_iter, (void *) ((PyObject *(*)(t_Combinations *)) get_iterator< t_Combinations >) },
        { Py_tp_iternext, (void *) 0 },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Combinations)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Combinations, t_Combinations, Combinations);

      void t_Combinations::install(PyObject *module)
      {
        installType(&PY_TYPE(Combinations), &PY_TYPE_DEF(Combinations), module, "Combinations", 0);
      }

      void t_Combinations::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Combinations), "class_", make_descriptor(Combinations::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Combinations), "wrapfn_", make_descriptor(t_Combinations::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Combinations), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Combinations_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Combinations::initializeClass, 1)))
          return NULL;
        return t_Combinations::wrap_Object(Combinations(((t_Combinations *) arg)->object.this$));
      }
      static PyObject *t_Combinations_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Combinations::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Combinations_init_(t_Combinations *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        Combinations object((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          INT_CALL(object = Combinations(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Combinations_comparator(t_Combinations *self)
      {
        ::java::util::Comparator result((jobject) NULL);
        OBJ_CALL(result = self->object.comparator());
        return ::java::util::t_Comparator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      static PyObject *t_Combinations_getK(t_Combinations *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getK());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Combinations_getN(t_Combinations *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getN());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Combinations_iterator(t_Combinations *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      static PyObject *t_Combinations_get__k(t_Combinations *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getK());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Combinations_get__n(t_Combinations *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getN());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AbstractShapiroBaseModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractShapiroBaseModifier::class$ = NULL;
          jmethodID *AbstractShapiroBaseModifier::mids$ = NULL;
          bool AbstractShapiroBaseModifier::live$ = false;

          jclass AbstractShapiroBaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractShapiroBaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_doModify_308087fabc1d7f66] = env->getMethodID(cls, "doModify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_shapiroCorrection_9a611232e4e09c11] = env->getMethodID(cls, "shapiroCorrection", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/utils/TimeStampedPVCoordinates;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractShapiroBaseModifier::AbstractShapiroBaseModifier(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}
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
          static PyObject *t_AbstractShapiroBaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractShapiroBaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractShapiroBaseModifier_init_(t_AbstractShapiroBaseModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractShapiroBaseModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractShapiroBaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractShapiroBaseModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractShapiroBaseModifier)[] = {
            { Py_tp_methods, t_AbstractShapiroBaseModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractShapiroBaseModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractShapiroBaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractShapiroBaseModifier, t_AbstractShapiroBaseModifier, AbstractShapiroBaseModifier);

          void t_AbstractShapiroBaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractShapiroBaseModifier), &PY_TYPE_DEF(AbstractShapiroBaseModifier), module, "AbstractShapiroBaseModifier", 0);
          }

          void t_AbstractShapiroBaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShapiroBaseModifier), "class_", make_descriptor(AbstractShapiroBaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShapiroBaseModifier), "wrapfn_", make_descriptor(t_AbstractShapiroBaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShapiroBaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractShapiroBaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractShapiroBaseModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractShapiroBaseModifier::wrap_Object(AbstractShapiroBaseModifier(((t_AbstractShapiroBaseModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractShapiroBaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractShapiroBaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractShapiroBaseModifier_init_(t_AbstractShapiroBaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            AbstractShapiroBaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = AbstractShapiroBaseModifier(a0));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FieldDelaunayArguments.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
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
          mids$[mid_init$_c20d8d65da2ce077] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getD_81520b552cb3fa26] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDDot_81520b552cb3fa26] = env->getMethodID(cls, "getDDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getF_81520b552cb3fa26] = env->getMethodID(cls, "getF", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getFDot_81520b552cb3fa26] = env->getMethodID(cls, "getFDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getGamma_81520b552cb3fa26] = env->getMethodID(cls, "getGamma", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getGammaDot_81520b552cb3fa26] = env->getMethodID(cls, "getGammaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getL_81520b552cb3fa26] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLDot_81520b552cb3fa26] = env->getMethodID(cls, "getLDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLPrime_81520b552cb3fa26] = env->getMethodID(cls, "getLPrime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLPrimeDot_81520b552cb3fa26] = env->getMethodID(cls, "getLPrimeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOmega_81520b552cb3fa26] = env->getMethodID(cls, "getOmega", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOmegaDot_81520b552cb3fa26] = env->getMethodID(cls, "getOmegaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getTC_81520b552cb3fa26] = env->getMethodID(cls, "getTC", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldDelaunayArguments::FieldDelaunayArguments(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c20d8d65da2ce077, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getD() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getD_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getDDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDDot_81520b552cb3fa26]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldDelaunayArguments::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_fa23a4301b9c83e7]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getF() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getF_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getFDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getGamma() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGamma_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getGammaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGammaDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getL() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getL_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getLDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getLPrime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLPrime_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getLPrimeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLPrimeDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getOmega() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOmega_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getOmegaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOmegaDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getTC() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTC_81520b552cb3fa26]));
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
#include "org/orekit/files/ccsds/section/XmlStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/section/XmlStructureKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *XmlStructureKey::class$ = NULL;
          jmethodID *XmlStructureKey::mids$ = NULL;
          bool XmlStructureKey::live$ = false;
          XmlStructureKey *XmlStructureKey::body = NULL;
          XmlStructureKey *XmlStructureKey::data = NULL;
          XmlStructureKey *XmlStructureKey::header = NULL;
          XmlStructureKey *XmlStructureKey::metadata = NULL;
          XmlStructureKey *XmlStructureKey::segment = NULL;

          jclass XmlStructureKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/XmlStructureKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_c095c1ee2f4787f7] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)Z");
              mids$[mid_valueOf_0b9382c41a0848a3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/XmlStructureKey;");
              mids$[mid_values_e3aca9dd761c678c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/XmlStructureKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              body = new XmlStructureKey(env->getStaticObjectField(cls, "body", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              data = new XmlStructureKey(env->getStaticObjectField(cls, "data", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              header = new XmlStructureKey(env->getStaticObjectField(cls, "header", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              metadata = new XmlStructureKey(env->getStaticObjectField(cls, "metadata", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              segment = new XmlStructureKey(env->getStaticObjectField(cls, "segment", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean XmlStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_c095c1ee2f4787f7], a0.this$, a1.this$);
          }

          XmlStructureKey XmlStructureKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return XmlStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0b9382c41a0848a3], a0.this$));
          }

          JArray< XmlStructureKey > XmlStructureKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< XmlStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_e3aca9dd761c678c]));
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
          static PyObject *t_XmlStructureKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_XmlStructureKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_XmlStructureKey_of_(t_XmlStructureKey *self, PyObject *args);
          static PyObject *t_XmlStructureKey_process(t_XmlStructureKey *self, PyObject *args);
          static PyObject *t_XmlStructureKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_XmlStructureKey_values(PyTypeObject *type);
          static PyObject *t_XmlStructureKey_get__parameters_(t_XmlStructureKey *self, void *data);
          static PyGetSetDef t_XmlStructureKey__fields_[] = {
            DECLARE_GET_FIELD(t_XmlStructureKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_XmlStructureKey__methods_[] = {
            DECLARE_METHOD(t_XmlStructureKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_XmlStructureKey, process, METH_VARARGS),
            DECLARE_METHOD(t_XmlStructureKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(XmlStructureKey)[] = {
            { Py_tp_methods, t_XmlStructureKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_XmlStructureKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(XmlStructureKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(XmlStructureKey, t_XmlStructureKey, XmlStructureKey);
          PyObject *t_XmlStructureKey::wrap_Object(const XmlStructureKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_XmlStructureKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_XmlStructureKey *self = (t_XmlStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_XmlStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_XmlStructureKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_XmlStructureKey *self = (t_XmlStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_XmlStructureKey::install(PyObject *module)
          {
            installType(&PY_TYPE(XmlStructureKey), &PY_TYPE_DEF(XmlStructureKey), module, "XmlStructureKey", 0);
          }

          void t_XmlStructureKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "class_", make_descriptor(XmlStructureKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "wrapfn_", make_descriptor(t_XmlStructureKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(XmlStructureKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "body", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::body)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "data", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::data)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "header", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::header)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "metadata", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::metadata)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "segment", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::segment)));
          }

          static PyObject *t_XmlStructureKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, XmlStructureKey::initializeClass, 1)))
              return NULL;
            return t_XmlStructureKey::wrap_Object(XmlStructureKey(((t_XmlStructureKey *) arg)->object.this$));
          }
          static PyObject *t_XmlStructureKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, XmlStructureKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_XmlStructureKey_of_(t_XmlStructureKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_XmlStructureKey_process(t_XmlStructureKey *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean result;

            if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              OBJ_CALL(result = self->object.process(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "process", args);
            return NULL;
          }

          static PyObject *t_XmlStructureKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            XmlStructureKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::XmlStructureKey::valueOf(a0));
              return t_XmlStructureKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_XmlStructureKey_values(PyTypeObject *type)
          {
            JArray< XmlStructureKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::XmlStructureKey::values());
            return JArray<jobject>(result.this$).wrap(t_XmlStructureKey::wrap_jobject);
          }
          static PyObject *t_XmlStructureKey_get__parameters_(t_XmlStructureKey *self, void *data)
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
#include "org/orekit/models/earth/troposphere/PythonDiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *PythonDiscreteTroposphericModel::class$ = NULL;
          jmethodID *PythonDiscreteTroposphericModel::mids$ = NULL;
          bool PythonDiscreteTroposphericModel::live$ = false;

          jclass PythonDiscreteTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/PythonDiscreteTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParameters_25e1757a36c4dde2] = env->getMethodID(cls, "getParameters", "()[D");
              mids$[mid_getParameters_5286daa2a5b3d227] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_2edbfa177156ee09] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_6f66c6b7094d6f08] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonDiscreteTroposphericModel::PythonDiscreteTroposphericModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonDiscreteTroposphericModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonDiscreteTroposphericModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonDiscreteTroposphericModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonDiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonDiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonDiscreteTroposphericModel_init_(t_PythonDiscreteTroposphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonDiscreteTroposphericModel_finalize(t_PythonDiscreteTroposphericModel *self);
          static PyObject *t_PythonDiscreteTroposphericModel_pythonExtension(t_PythonDiscreteTroposphericModel *self, PyObject *args);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
          static jdouble JNICALL t_PythonDiscreteTroposphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2, jobject a3);
          static void JNICALL t_PythonDiscreteTroposphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonDiscreteTroposphericModel_get__self(t_PythonDiscreteTroposphericModel *self, void *data);
          static PyGetSetDef t_PythonDiscreteTroposphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonDiscreteTroposphericModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonDiscreteTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonDiscreteTroposphericModel)[] = {
            { Py_tp_methods, t_PythonDiscreteTroposphericModel__methods_ },
            { Py_tp_init, (void *) t_PythonDiscreteTroposphericModel_init_ },
            { Py_tp_getset, t_PythonDiscreteTroposphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonDiscreteTroposphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonDiscreteTroposphericModel, t_PythonDiscreteTroposphericModel, PythonDiscreteTroposphericModel);

          void t_PythonDiscreteTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonDiscreteTroposphericModel), &PY_TYPE_DEF(PythonDiscreteTroposphericModel), module, "PythonDiscreteTroposphericModel", 1);
          }

          void t_PythonDiscreteTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDiscreteTroposphericModel), "class_", make_descriptor(PythonDiscreteTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDiscreteTroposphericModel), "wrapfn_", make_descriptor(t_PythonDiscreteTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDiscreteTroposphericModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonDiscreteTroposphericModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getParameters", "()[D", (void *) t_PythonDiscreteTroposphericModel_getParameters0 },
              { "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonDiscreteTroposphericModel_getParameters1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonDiscreteTroposphericModel_getParametersDrivers2 },
              { "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonDiscreteTroposphericModel_pathDelay3 },
              { "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDiscreteTroposphericModel_pathDelay4 },
              { "pythonDecRef", "()V", (void *) t_PythonDiscreteTroposphericModel_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonDiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonDiscreteTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_PythonDiscreteTroposphericModel::wrap_Object(PythonDiscreteTroposphericModel(((t_PythonDiscreteTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_PythonDiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonDiscreteTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonDiscreteTroposphericModel_init_(t_PythonDiscreteTroposphericModel *self, PyObject *args, PyObject *kwds)
          {
            PythonDiscreteTroposphericModel object((jobject) NULL);

            INT_CALL(object = PythonDiscreteTroposphericModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonDiscreteTroposphericModel_finalize(t_PythonDiscreteTroposphericModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonDiscreteTroposphericModel_pythonExtension(t_PythonDiscreteTroposphericModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_6c0ce7e438e5ded4]);
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *o1 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a1));
            PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *o3 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a3));
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "OOOO", o0, o1, o2, o3);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("pathDelay", result);
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

          static jdouble JNICALL t_PythonDiscreteTroposphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o1 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a1));
            PyObject *o2 = JArray<jdouble>(a2).wrap();
            PyObject *o3 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a3));
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "dOOO", (double) a0, o1, o2, o3);
            Py_DECREF(o1);
            Py_DECREF(o2);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("pathDelay", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonDiscreteTroposphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonDiscreteTroposphericModel_get__self(t_PythonDiscreteTroposphericModel *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *OpmWriter::class$ = NULL;
              jmethodID *OpmWriter::mids$ = NULL;
              bool OpmWriter::live$ = false;
              jdouble OpmWriter::CCSDS_OPM_VERS = (jdouble) 0;
              jint OpmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OpmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/OpmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_751257c373115a80] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_309d7ce7156c8c23] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OPM_VERS = env->getStaticDoubleField(cls, "CCSDS_OPM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OpmWriter::OpmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_751257c373115a80, a0.this$, a1.this$, a2.this$)) {}
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
              static PyObject *t_OpmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmWriter_of_(t_OpmWriter *self, PyObject *args);
              static int t_OpmWriter_init_(t_OpmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OpmWriter_get__parameters_(t_OpmWriter *self, void *data);
              static PyGetSetDef t_OpmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OpmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpmWriter__methods_[] = {
                DECLARE_METHOD(t_OpmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpmWriter)[] = {
                { Py_tp_methods, t_OpmWriter__methods_ },
                { Py_tp_init, (void *) t_OpmWriter_init_ },
                { Py_tp_getset, t_OpmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OpmWriter, t_OpmWriter, OpmWriter);
              PyObject *t_OpmWriter::wrap_Object(const OpmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OpmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmWriter *self = (t_OpmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OpmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OpmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmWriter *self = (t_OpmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OpmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OpmWriter), &PY_TYPE_DEF(OpmWriter), module, "OpmWriter", 0);
              }

              void t_OpmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "class_", make_descriptor(OpmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "wrapfn_", make_descriptor(t_OpmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OpmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "CCSDS_OPM_VERS", make_descriptor(OpmWriter::CCSDS_OPM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "KVN_PADDING_WIDTH", make_descriptor(OpmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OpmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpmWriter::initializeClass, 1)))
                  return NULL;
                return t_OpmWriter::wrap_Object(OpmWriter(((t_OpmWriter *) arg)->object.this$));
              }
              static PyObject *t_OpmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OpmWriter_of_(t_OpmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OpmWriter_init_(t_OpmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                OpmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = OpmWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::opm::PY_TYPE(Opm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_OpmWriter_get__parameters_(t_OpmWriter *self, void *data)
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
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPBasedTransformProvider::class$ = NULL;
      jmethodID *EOPBasedTransformProvider::mids$ = NULL;
      bool EOPBasedTransformProvider::live$ = false;

      jclass EOPBasedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPBasedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEOPHistory_f9d30be358d43685] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getNonInterpolatingProvider_8b3864a3bd1af1da] = env->getMethodID(cls, "getNonInterpolatingProvider", "()Lorg/orekit/frames/EOPBasedTransformProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::EOPHistory EOPBasedTransformProvider::getEOPHistory() const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_f9d30be358d43685]));
      }

      EOPBasedTransformProvider EOPBasedTransformProvider::getNonInterpolatingProvider() const
      {
        return EOPBasedTransformProvider(env->callObjectMethod(this$, mids$[mid_getNonInterpolatingProvider_8b3864a3bd1af1da]));
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
      static PyObject *t_EOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPBasedTransformProvider_getEOPHistory(t_EOPBasedTransformProvider *self);
      static PyObject *t_EOPBasedTransformProvider_getNonInterpolatingProvider(t_EOPBasedTransformProvider *self);
      static PyObject *t_EOPBasedTransformProvider_get__eOPHistory(t_EOPBasedTransformProvider *self, void *data);
      static PyObject *t_EOPBasedTransformProvider_get__nonInterpolatingProvider(t_EOPBasedTransformProvider *self, void *data);
      static PyGetSetDef t_EOPBasedTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_EOPBasedTransformProvider, eOPHistory),
        DECLARE_GET_FIELD(t_EOPBasedTransformProvider, nonInterpolatingProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPBasedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_EOPBasedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPBasedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPBasedTransformProvider, getEOPHistory, METH_NOARGS),
        DECLARE_METHOD(t_EOPBasedTransformProvider, getNonInterpolatingProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPBasedTransformProvider)[] = {
        { Py_tp_methods, t_EOPBasedTransformProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_EOPBasedTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPBasedTransformProvider)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::TransformProvider),
        NULL
      };

      DEFINE_TYPE(EOPBasedTransformProvider, t_EOPBasedTransformProvider, EOPBasedTransformProvider);

      void t_EOPBasedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPBasedTransformProvider), &PY_TYPE_DEF(EOPBasedTransformProvider), module, "EOPBasedTransformProvider", 0);
      }

      void t_EOPBasedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPBasedTransformProvider), "class_", make_descriptor(EOPBasedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPBasedTransformProvider), "wrapfn_", make_descriptor(t_EOPBasedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPBasedTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPBasedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_EOPBasedTransformProvider::wrap_Object(EOPBasedTransformProvider(((t_EOPBasedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_EOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPBasedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EOPBasedTransformProvider_getEOPHistory(t_EOPBasedTransformProvider *self)
      {
        ::org::orekit::frames::EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_EOPBasedTransformProvider_getNonInterpolatingProvider(t_EOPBasedTransformProvider *self)
      {
        EOPBasedTransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getNonInterpolatingProvider());
        return t_EOPBasedTransformProvider::wrap_Object(result);
      }

      static PyObject *t_EOPBasedTransformProvider_get__eOPHistory(t_EOPBasedTransformProvider *self, void *data)
      {
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_EOPBasedTransformProvider_get__nonInterpolatingProvider(t_EOPBasedTransformProvider *self, void *data)
      {
        EOPBasedTransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getNonInterpolatingProvider());
        return t_EOPBasedTransformProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RiccatiEquationSolverImpl.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RiccatiEquationSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RiccatiEquationSolverImpl::class$ = NULL;
      jmethodID *RiccatiEquationSolverImpl::mids$ = NULL;
      bool RiccatiEquationSolverImpl::live$ = false;

      jclass RiccatiEquationSolverImpl::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RiccatiEquationSolverImpl");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0a36fe92b0c241cb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_getK_f77d745f2128c391] = env->getMethodID(cls, "getK", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_f77d745f2128c391] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RiccatiEquationSolverImpl::RiccatiEquationSolverImpl(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::hipparchus::linear::RealMatrix & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a36fe92b0c241cb, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolverImpl::getK() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getK_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolverImpl::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_f77d745f2128c391]));
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
      static PyObject *t_RiccatiEquationSolverImpl_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RiccatiEquationSolverImpl_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RiccatiEquationSolverImpl_init_(t_RiccatiEquationSolverImpl *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RiccatiEquationSolverImpl_getK(t_RiccatiEquationSolverImpl *self);
      static PyObject *t_RiccatiEquationSolverImpl_getP(t_RiccatiEquationSolverImpl *self);
      static PyObject *t_RiccatiEquationSolverImpl_get__k(t_RiccatiEquationSolverImpl *self, void *data);
      static PyObject *t_RiccatiEquationSolverImpl_get__p(t_RiccatiEquationSolverImpl *self, void *data);
      static PyGetSetDef t_RiccatiEquationSolverImpl__fields_[] = {
        DECLARE_GET_FIELD(t_RiccatiEquationSolverImpl, k),
        DECLARE_GET_FIELD(t_RiccatiEquationSolverImpl, p),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RiccatiEquationSolverImpl__methods_[] = {
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, getK, METH_NOARGS),
        DECLARE_METHOD(t_RiccatiEquationSolverImpl, getP, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RiccatiEquationSolverImpl)[] = {
        { Py_tp_methods, t_RiccatiEquationSolverImpl__methods_ },
        { Py_tp_init, (void *) t_RiccatiEquationSolverImpl_init_ },
        { Py_tp_getset, t_RiccatiEquationSolverImpl__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RiccatiEquationSolverImpl)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RiccatiEquationSolverImpl, t_RiccatiEquationSolverImpl, RiccatiEquationSolverImpl);

      void t_RiccatiEquationSolverImpl::install(PyObject *module)
      {
        installType(&PY_TYPE(RiccatiEquationSolverImpl), &PY_TYPE_DEF(RiccatiEquationSolverImpl), module, "RiccatiEquationSolverImpl", 0);
      }

      void t_RiccatiEquationSolverImpl::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolverImpl), "class_", make_descriptor(RiccatiEquationSolverImpl::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolverImpl), "wrapfn_", make_descriptor(t_RiccatiEquationSolverImpl::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolverImpl), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RiccatiEquationSolverImpl_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RiccatiEquationSolverImpl::initializeClass, 1)))
          return NULL;
        return t_RiccatiEquationSolverImpl::wrap_Object(RiccatiEquationSolverImpl(((t_RiccatiEquationSolverImpl *) arg)->object.this$));
      }
      static PyObject *t_RiccatiEquationSolverImpl_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RiccatiEquationSolverImpl::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RiccatiEquationSolverImpl_init_(t_RiccatiEquationSolverImpl *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
        RiccatiEquationSolverImpl object((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = RiccatiEquationSolverImpl(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RiccatiEquationSolverImpl_getK(t_RiccatiEquationSolverImpl *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolverImpl_getP(t_RiccatiEquationSolverImpl *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolverImpl_get__k(t_RiccatiEquationSolverImpl *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_RiccatiEquationSolverImpl_get__p(t_RiccatiEquationSolverImpl *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm02Header::class$ = NULL;
              jmethodID *SsrIgm02Header::mids$ = NULL;
              bool SsrIgm02Header::live$ = false;

              jclass SsrIgm02Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm02Header::SsrIgm02Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
              static PyObject *t_SsrIgm02Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm02Header_init_(t_SsrIgm02Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm02Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm02Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm02Header)[] = {
                { Py_tp_methods, t_SsrIgm02Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm02Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm02Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm02Header, t_SsrIgm02Header, SsrIgm02Header);

              void t_SsrIgm02Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm02Header), &PY_TYPE_DEF(SsrIgm02Header), module, "SsrIgm02Header", 0);
              }

              void t_SsrIgm02Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Header), "class_", make_descriptor(SsrIgm02Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Header), "wrapfn_", make_descriptor(t_SsrIgm02Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm02Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm02Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm02Header::wrap_Object(SsrIgm02Header(((t_SsrIgm02Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm02Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm02Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm02Header_init_(t_SsrIgm02Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm02Header object((jobject) NULL);

                INT_CALL(object = SsrIgm02Header());
                self->object = object;

                return 0;
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
#include "org/hipparchus/analysis/interpolation/GridAxis.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *GridAxis::class$ = NULL;
        jmethodID *GridAxis::mids$ = NULL;
        bool GridAxis::live$ = false;

        jclass GridAxis::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/GridAxis");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d15a39e204aa8e61] = env->getMethodID(cls, "<init>", "([DI)V");
            mids$[mid_getN_55546ef6a647f39b] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_interpolationIndex_2af4736545087009] = env->getMethodID(cls, "interpolationIndex", "(D)I");
            mids$[mid_node_2afcbc21f4e57ab2] = env->getMethodID(cls, "node", "(I)D");
            mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GridAxis::GridAxis(const JArray< jdouble > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d15a39e204aa8e61, a0.this$, a1)) {}

        jint GridAxis::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_55546ef6a647f39b]);
        }

        jint GridAxis::interpolationIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_interpolationIndex_2af4736545087009], a0);
        }

        jdouble GridAxis::node(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_node_2afcbc21f4e57ab2], a0);
        }

        jint GridAxis::size() const
        {
          return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
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
        static PyObject *t_GridAxis_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GridAxis_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GridAxis_init_(t_GridAxis *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GridAxis_getN(t_GridAxis *self);
        static PyObject *t_GridAxis_interpolationIndex(t_GridAxis *self, PyObject *arg);
        static PyObject *t_GridAxis_node(t_GridAxis *self, PyObject *arg);
        static PyObject *t_GridAxis_size(t_GridAxis *self);
        static PyObject *t_GridAxis_get__n(t_GridAxis *self, void *data);
        static PyGetSetDef t_GridAxis__fields_[] = {
          DECLARE_GET_FIELD(t_GridAxis, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GridAxis__methods_[] = {
          DECLARE_METHOD(t_GridAxis, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridAxis, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridAxis, getN, METH_NOARGS),
          DECLARE_METHOD(t_GridAxis, interpolationIndex, METH_O),
          DECLARE_METHOD(t_GridAxis, node, METH_O),
          DECLARE_METHOD(t_GridAxis, size, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GridAxis)[] = {
          { Py_tp_methods, t_GridAxis__methods_ },
          { Py_tp_init, (void *) t_GridAxis_init_ },
          { Py_tp_getset, t_GridAxis__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GridAxis)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GridAxis, t_GridAxis, GridAxis);

        void t_GridAxis::install(PyObject *module)
        {
          installType(&PY_TYPE(GridAxis), &PY_TYPE_DEF(GridAxis), module, "GridAxis", 0);
        }

        void t_GridAxis::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridAxis), "class_", make_descriptor(GridAxis::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridAxis), "wrapfn_", make_descriptor(t_GridAxis::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridAxis), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GridAxis_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GridAxis::initializeClass, 1)))
            return NULL;
          return t_GridAxis::wrap_Object(GridAxis(((t_GridAxis *) arg)->object.this$));
        }
        static PyObject *t_GridAxis_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GridAxis::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GridAxis_init_(t_GridAxis *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          GridAxis object((jobject) NULL);

          if (!parseArgs(args, "[DI", &a0, &a1))
          {
            INT_CALL(object = GridAxis(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GridAxis_getN(t_GridAxis *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_GridAxis_interpolationIndex(t_GridAxis *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.interpolationIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolationIndex", arg);
          return NULL;
        }

        static PyObject *t_GridAxis_node(t_GridAxis *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.node(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "node", arg);
          return NULL;
        }

        static PyObject *t_GridAxis_size(t_GridAxis *self)
        {
          jint result;
          OBJ_CALL(result = self->object.size());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_GridAxis_get__n(t_GridAxis *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}

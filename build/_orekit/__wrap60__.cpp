#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonAbstractEopParser.h"
#include "org/orekit/frames/EOPEntry.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonAbstractEopParser::class$ = NULL;
      jmethodID *PythonAbstractEopParser::mids$ = NULL;
      bool PythonAbstractEopParser::live$ = false;

      jclass PythonAbstractEopParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonAbstractEopParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_15263d7ae605a6b6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_parse_0fd0d48912c66ce3] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/Collection;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractEopParser::PythonAbstractEopParser(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::frames::AbstractEopParser(env->newObject(initializeClass, &mids$, mid_init$_15263d7ae605a6b6, a0.this$, a1.this$, a2.this$)) {}

      void PythonAbstractEopParser::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonAbstractEopParser::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonAbstractEopParser::pythonExtension(jlong a0) const
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
    namespace frames {
      static PyObject *t_PythonAbstractEopParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractEopParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractEopParser_init_(t_PythonAbstractEopParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractEopParser_finalize(t_PythonAbstractEopParser *self);
      static PyObject *t_PythonAbstractEopParser_pythonExtension(t_PythonAbstractEopParser *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractEopParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonAbstractEopParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractEopParser_get__self(t_PythonAbstractEopParser *self, void *data);
      static PyGetSetDef t_PythonAbstractEopParser__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractEopParser, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractEopParser__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractEopParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractEopParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractEopParser, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractEopParser, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractEopParser)[] = {
        { Py_tp_methods, t_PythonAbstractEopParser__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractEopParser_init_ },
        { Py_tp_getset, t_PythonAbstractEopParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractEopParser)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::AbstractEopParser),
        NULL
      };

      DEFINE_TYPE(PythonAbstractEopParser, t_PythonAbstractEopParser, PythonAbstractEopParser);

      void t_PythonAbstractEopParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractEopParser), &PY_TYPE_DEF(PythonAbstractEopParser), module, "PythonAbstractEopParser", 1);
      }

      void t_PythonAbstractEopParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEopParser), "class_", make_descriptor(PythonAbstractEopParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEopParser), "wrapfn_", make_descriptor(t_PythonAbstractEopParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEopParser), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractEopParser::initializeClass);
        JNINativeMethod methods[] = {
          { "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/Collection;", (void *) t_PythonAbstractEopParser_parse0 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractEopParser_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonAbstractEopParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractEopParser::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractEopParser::wrap_Object(PythonAbstractEopParser(((t_PythonAbstractEopParser *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractEopParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractEopParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractEopParser_init_(t_PythonAbstractEopParser *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        PythonAbstractEopParser object((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &a2))
        {
          INT_CALL(object = PythonAbstractEopParser(a0, a1, a2));
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

      static PyObject *t_PythonAbstractEopParser_finalize(t_PythonAbstractEopParser *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractEopParser_pythonExtension(t_PythonAbstractEopParser *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractEopParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEopParser::mids$[PythonAbstractEopParser::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
        PyObject *o1 = env->fromJString((jstring) a1, 0);
        PyObject *result = PyObject_CallMethod(obj, "parse", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("parse", result);
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

      static void JNICALL t_PythonAbstractEopParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEopParser::mids$[PythonAbstractEopParser::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractEopParser::mids$[PythonAbstractEopParser::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractEopParser_get__self(t_PythonAbstractEopParser *self, void *data)
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
#include "org/orekit/utils/units/UnitsConverter.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/utils/units/UnitsConverter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *UnitsConverter::class$ = NULL;
        jmethodID *UnitsConverter::mids$ = NULL;
        bool UnitsConverter::live$ = false;
        UnitsConverter *UnitsConverter::ARC_SECONDS_TO_RADIANS = NULL;
        UnitsConverter *UnitsConverter::DAYS_TO_SECONDS = NULL;
        UnitsConverter *UnitsConverter::IDENTITY = NULL;
        UnitsConverter *UnitsConverter::KILOMETRES_2_TO_METRES_2 = NULL;
        UnitsConverter *UnitsConverter::KILOMETRES_TO_METRES = NULL;
        UnitsConverter *UnitsConverter::KM3_P_S2_TO_M3_P_S2 = NULL;
        UnitsConverter *UnitsConverter::MILLI_ARC_SECONDS_TO_RADIANS = NULL;
        UnitsConverter *UnitsConverter::MILLI_SECONDS_TO_SECONDS = NULL;
        UnitsConverter *UnitsConverter::NANO_TESLAS_TO_TESLAS = NULL;
        UnitsConverter *UnitsConverter::PERCENTS_TO_UNIT = NULL;

        jclass UnitsConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/UnitsConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_41b87a6cf64869ff] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/utils/units/Unit;)V");
            mids$[mid_convert_dcbc7ce2902fa136] = env->getMethodID(cls, "convert", "(D)D");
            mids$[mid_getFrom_de9b417ee3c58e2e] = env->getMethodID(cls, "getFrom", "()Lorg/orekit/utils/units/Unit;");
            mids$[mid_getTo_de9b417ee3c58e2e] = env->getMethodID(cls, "getTo", "()Lorg/orekit/utils/units/Unit;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ARC_SECONDS_TO_RADIANS = new UnitsConverter(env->getStaticObjectField(cls, "ARC_SECONDS_TO_RADIANS", "Lorg/orekit/utils/units/UnitsConverter;"));
            DAYS_TO_SECONDS = new UnitsConverter(env->getStaticObjectField(cls, "DAYS_TO_SECONDS", "Lorg/orekit/utils/units/UnitsConverter;"));
            IDENTITY = new UnitsConverter(env->getStaticObjectField(cls, "IDENTITY", "Lorg/orekit/utils/units/UnitsConverter;"));
            KILOMETRES_2_TO_METRES_2 = new UnitsConverter(env->getStaticObjectField(cls, "KILOMETRES_2_TO_METRES_2", "Lorg/orekit/utils/units/UnitsConverter;"));
            KILOMETRES_TO_METRES = new UnitsConverter(env->getStaticObjectField(cls, "KILOMETRES_TO_METRES", "Lorg/orekit/utils/units/UnitsConverter;"));
            KM3_P_S2_TO_M3_P_S2 = new UnitsConverter(env->getStaticObjectField(cls, "KM3_P_S2_TO_M3_P_S2", "Lorg/orekit/utils/units/UnitsConverter;"));
            MILLI_ARC_SECONDS_TO_RADIANS = new UnitsConverter(env->getStaticObjectField(cls, "MILLI_ARC_SECONDS_TO_RADIANS", "Lorg/orekit/utils/units/UnitsConverter;"));
            MILLI_SECONDS_TO_SECONDS = new UnitsConverter(env->getStaticObjectField(cls, "MILLI_SECONDS_TO_SECONDS", "Lorg/orekit/utils/units/UnitsConverter;"));
            NANO_TESLAS_TO_TESLAS = new UnitsConverter(env->getStaticObjectField(cls, "NANO_TESLAS_TO_TESLAS", "Lorg/orekit/utils/units/UnitsConverter;"));
            PERCENTS_TO_UNIT = new UnitsConverter(env->getStaticObjectField(cls, "PERCENTS_TO_UNIT", "Lorg/orekit/utils/units/UnitsConverter;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnitsConverter::UnitsConverter(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::utils::units::Unit & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_41b87a6cf64869ff, a0.this$, a1.this$)) {}

        jdouble UnitsConverter::convert(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_convert_dcbc7ce2902fa136], a0);
        }

        ::org::orekit::utils::units::Unit UnitsConverter::getFrom() const
        {
          return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getFrom_de9b417ee3c58e2e]));
        }

        ::org::orekit::utils::units::Unit UnitsConverter::getTo() const
        {
          return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getTo_de9b417ee3c58e2e]));
        }

        ::java::lang::String UnitsConverter::toString() const
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
    namespace utils {
      namespace units {
        static PyObject *t_UnitsConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnitsConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnitsConverter_init_(t_UnitsConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnitsConverter_convert(t_UnitsConverter *self, PyObject *arg);
        static PyObject *t_UnitsConverter_getFrom(t_UnitsConverter *self);
        static PyObject *t_UnitsConverter_getTo(t_UnitsConverter *self);
        static PyObject *t_UnitsConverter_toString(t_UnitsConverter *self, PyObject *args);
        static PyObject *t_UnitsConverter_get__from(t_UnitsConverter *self, void *data);
        static PyObject *t_UnitsConverter_get__to(t_UnitsConverter *self, void *data);
        static PyGetSetDef t_UnitsConverter__fields_[] = {
          DECLARE_GET_FIELD(t_UnitsConverter, from),
          DECLARE_GET_FIELD(t_UnitsConverter, to),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnitsConverter__methods_[] = {
          DECLARE_METHOD(t_UnitsConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsConverter, convert, METH_O),
          DECLARE_METHOD(t_UnitsConverter, getFrom, METH_NOARGS),
          DECLARE_METHOD(t_UnitsConverter, getTo, METH_NOARGS),
          DECLARE_METHOD(t_UnitsConverter, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnitsConverter)[] = {
          { Py_tp_methods, t_UnitsConverter__methods_ },
          { Py_tp_init, (void *) t_UnitsConverter_init_ },
          { Py_tp_getset, t_UnitsConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnitsConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnitsConverter, t_UnitsConverter, UnitsConverter);

        void t_UnitsConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(UnitsConverter), &PY_TYPE_DEF(UnitsConverter), module, "UnitsConverter", 0);
        }

        void t_UnitsConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "class_", make_descriptor(UnitsConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "wrapfn_", make_descriptor(t_UnitsConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnitsConverter::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "ARC_SECONDS_TO_RADIANS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::ARC_SECONDS_TO_RADIANS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "DAYS_TO_SECONDS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::DAYS_TO_SECONDS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "IDENTITY", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::IDENTITY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "KILOMETRES_2_TO_METRES_2", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::KILOMETRES_2_TO_METRES_2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "KILOMETRES_TO_METRES", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::KILOMETRES_TO_METRES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "KM3_P_S2_TO_M3_P_S2", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::KM3_P_S2_TO_M3_P_S2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "MILLI_ARC_SECONDS_TO_RADIANS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::MILLI_ARC_SECONDS_TO_RADIANS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "MILLI_SECONDS_TO_SECONDS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::MILLI_SECONDS_TO_SECONDS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "NANO_TESLAS_TO_TESLAS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::NANO_TESLAS_TO_TESLAS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "PERCENTS_TO_UNIT", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::PERCENTS_TO_UNIT)));
        }

        static PyObject *t_UnitsConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnitsConverter::initializeClass, 1)))
            return NULL;
          return t_UnitsConverter::wrap_Object(UnitsConverter(((t_UnitsConverter *) arg)->object.this$));
        }
        static PyObject *t_UnitsConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnitsConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnitsConverter_init_(t_UnitsConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::units::Unit a0((jobject) NULL);
          ::org::orekit::utils::units::Unit a1((jobject) NULL);
          UnitsConverter object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1))
          {
            INT_CALL(object = UnitsConverter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UnitsConverter_convert(t_UnitsConverter *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.convert(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "convert", arg);
          return NULL;
        }

        static PyObject *t_UnitsConverter_getFrom(t_UnitsConverter *self)
        {
          ::org::orekit::utils::units::Unit result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrom());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
        }

        static PyObject *t_UnitsConverter_getTo(t_UnitsConverter *self)
        {
          ::org::orekit::utils::units::Unit result((jobject) NULL);
          OBJ_CALL(result = self->object.getTo());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
        }

        static PyObject *t_UnitsConverter_toString(t_UnitsConverter *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(UnitsConverter), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_UnitsConverter_get__from(t_UnitsConverter *self, void *data)
        {
          ::org::orekit::utils::units::Unit value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrom());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
        }

        static PyObject *t_UnitsConverter_get__to(t_UnitsConverter *self, void *data)
        {
          ::org::orekit::utils::units::Unit value((jobject) NULL);
          OBJ_CALL(value = self->object.getTo());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1243.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1243::class$ = NULL;
              jmethodID *Rtcm1243::mids$ = NULL;
              bool Rtcm1243::live$ = false;

              jclass Rtcm1243::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1243");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c862bfeb63a17bd5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1243::Rtcm1243(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_c862bfeb63a17bd5, a0, a1.this$, a2.this$)) {}
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
            namespace correction {
              static PyObject *t_Rtcm1243_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1243_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1243_of_(t_Rtcm1243 *self, PyObject *args);
              static int t_Rtcm1243_init_(t_Rtcm1243 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1243_get__parameters_(t_Rtcm1243 *self, void *data);
              static PyGetSetDef t_Rtcm1243__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1243, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1243__methods_[] = {
                DECLARE_METHOD(t_Rtcm1243, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1243, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1243, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1243)[] = {
                { Py_tp_methods, t_Rtcm1243__methods_ },
                { Py_tp_init, (void *) t_Rtcm1243_init_ },
                { Py_tp_getset, t_Rtcm1243__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1243)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1243, t_Rtcm1243, Rtcm1243);
              PyObject *t_Rtcm1243::wrap_Object(const Rtcm1243& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1243::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1243 *self = (t_Rtcm1243 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1243::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1243::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1243 *self = (t_Rtcm1243 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1243::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1243), &PY_TYPE_DEF(Rtcm1243), module, "Rtcm1243", 0);
              }

              void t_Rtcm1243::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1243), "class_", make_descriptor(Rtcm1243::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1243), "wrapfn_", make_descriptor(t_Rtcm1243::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1243), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1243_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1243::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1243::wrap_Object(Rtcm1243(((t_Rtcm1243 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1243_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1243::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1243_of_(t_Rtcm1243 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1243_init_(t_Rtcm1243 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1243 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1243(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCombinedCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1243_get__parameters_(t_Rtcm1243 *self, void *data)
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
#include "org/orekit/forces/maneuvers/FieldImpulseManeuver.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *FieldImpulseManeuver::class$ = NULL;
        jmethodID *FieldImpulseManeuver::mids$ = NULL;
        bool FieldImpulseManeuver::live$ = false;

        jclass FieldImpulseManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/FieldImpulseManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9fd07713d88b584d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_2e00d63537056507] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_d7504c83b8d83efa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getAttitudeOverride_a904f3d015a354a0] = env->getMethodID(cls, "getAttitudeOverride", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getControl3DVectorCostType_67739b20d9566a8c] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_getDeltaVSat_716f50c86ffc8da7] = env->getMethodID(cls, "getDeltaVSat", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getIsp_eba8e72a22c984ac] = env->getMethodID(cls, "getIsp", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getTrigger_4fe06ecc019ea51d] = env->getMethodID(cls, "getTrigger", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_fb23fbb396cac7fb] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/forces/maneuvers/FieldImpulseManeuver;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldImpulseManeuver::FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_9fd07713d88b584d, a0.this$, a1.this$, a2.this$)) {}

        FieldImpulseManeuver::FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2e00d63537056507, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        FieldImpulseManeuver::FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a4) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_d7504c83b8d83efa, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldImpulseManeuver::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::orekit::attitudes::AttitudeProvider FieldImpulseManeuver::getAttitudeOverride() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeOverride_a904f3d015a354a0]));
        }

        ::org::orekit::forces::maneuvers::Control3DVectorCostType FieldImpulseManeuver::getControl3DVectorCostType() const
        {
          return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_67739b20d9566a8c]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldImpulseManeuver::getDeltaVSat() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getDeltaVSat_716f50c86ffc8da7]));
        }

        ::org::hipparchus::CalculusFieldElement FieldImpulseManeuver::getIsp() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIsp_eba8e72a22c984ac]));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldImpulseManeuver::getTrigger() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getTrigger_4fe06ecc019ea51d]));
        }

        void FieldImpulseManeuver::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
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
      namespace maneuvers {
        static PyObject *t_FieldImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldImpulseManeuver_of_(t_FieldImpulseManeuver *self, PyObject *args);
        static int t_FieldImpulseManeuver_init_(t_FieldImpulseManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldImpulseManeuver_g(t_FieldImpulseManeuver *self, PyObject *args);
        static PyObject *t_FieldImpulseManeuver_getAttitudeOverride(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getControl3DVectorCostType(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getDeltaVSat(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getIsp(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getTrigger(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_init(t_FieldImpulseManeuver *self, PyObject *args);
        static PyObject *t_FieldImpulseManeuver_get__attitudeOverride(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__control3DVectorCostType(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__deltaVSat(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__isp(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__trigger(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__parameters_(t_FieldImpulseManeuver *self, void *data);
        static PyGetSetDef t_FieldImpulseManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, attitudeOverride),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, control3DVectorCostType),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, deltaVSat),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, isp),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, trigger),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldImpulseManeuver__methods_[] = {
          DECLARE_METHOD(t_FieldImpulseManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldImpulseManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldImpulseManeuver, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getAttitudeOverride, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getControl3DVectorCostType, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getDeltaVSat, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getIsp, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getTrigger, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldImpulseManeuver)[] = {
          { Py_tp_methods, t_FieldImpulseManeuver__methods_ },
          { Py_tp_init, (void *) t_FieldImpulseManeuver_init_ },
          { Py_tp_getset, t_FieldImpulseManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldImpulseManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldImpulseManeuver, t_FieldImpulseManeuver, FieldImpulseManeuver);
        PyObject *t_FieldImpulseManeuver::wrap_Object(const FieldImpulseManeuver& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldImpulseManeuver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldImpulseManeuver *self = (t_FieldImpulseManeuver *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldImpulseManeuver::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldImpulseManeuver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldImpulseManeuver *self = (t_FieldImpulseManeuver *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldImpulseManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldImpulseManeuver), &PY_TYPE_DEF(FieldImpulseManeuver), module, "FieldImpulseManeuver", 0);
        }

        void t_FieldImpulseManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldImpulseManeuver), "class_", make_descriptor(FieldImpulseManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldImpulseManeuver), "wrapfn_", make_descriptor(t_FieldImpulseManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldImpulseManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldImpulseManeuver::initializeClass, 1)))
            return NULL;
          return t_FieldImpulseManeuver::wrap_Object(FieldImpulseManeuver(((t_FieldImpulseManeuver *) arg)->object.this$));
        }
        static PyObject *t_FieldImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldImpulseManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldImpulseManeuver_of_(t_FieldImpulseManeuver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldImpulseManeuver_init_(t_FieldImpulseManeuver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldImpulseManeuver(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              FieldImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "KkKK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldImpulseManeuver(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::forces::maneuvers::Control3DVectorCostType a4((jobject) NULL);
              PyTypeObject **p4;
              FieldImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "KkKKK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_))
              {
                INT_CALL(object = FieldImpulseManeuver(a0, a1, a2, a3, a4));
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

        static PyObject *t_FieldImpulseManeuver_g(t_FieldImpulseManeuver *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldImpulseManeuver), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldImpulseManeuver_getAttitudeOverride(t_FieldImpulseManeuver *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_FieldImpulseManeuver_getControl3DVectorCostType(t_FieldImpulseManeuver *self)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
          OBJ_CALL(result = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
        }

        static PyObject *t_FieldImpulseManeuver_getDeltaVSat(t_FieldImpulseManeuver *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldImpulseManeuver_getIsp(t_FieldImpulseManeuver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getIsp());
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldImpulseManeuver_getTrigger(t_FieldImpulseManeuver *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldImpulseManeuver_init(t_FieldImpulseManeuver *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldImpulseManeuver), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldImpulseManeuver_get__parameters_(t_FieldImpulseManeuver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldImpulseManeuver_get__attitudeOverride(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__control3DVectorCostType(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
          OBJ_CALL(value = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__deltaVSat(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__isp(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getIsp());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__trigger(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *AbstractAnalyticalPropagator::mids$ = NULL;
        bool AbstractAnalyticalPropagator::live$ = false;

        jclass AbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addEventDetector_efb7003d866d4523] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_clearEventsDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getEphemerisGenerator_18d439b26e70ccd0] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
            mids$[mid_getEventsDetectors_37528d110cff6b74] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getPvProvider_903aca6bb4523e29] = env->getMethodID(cls, "getPvProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_propagate_a69ef29c3ea1e1fa] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_acceptStep_a63e58b9dfde9ac7] = env->getMethodID(cls, "acceptStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_propagateOrbit_7a8f4c854607bed6] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_getMass_bf1d7732f1acb697] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_33f4696e4edaa03c] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_basicPropagate_fbff2ff5554d95e1] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getJacobiansColumnsNames_2afa36052df4765d] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractAnalyticalPropagator::addEventDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_efb7003d866d4523], a0.this$);
        }

        void AbstractAnalyticalPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_0fa09c18fee449d5]);
        }

        ::org::orekit::propagation::EphemerisGenerator AbstractAnalyticalPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::EphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_18d439b26e70ccd0]));
        }

        ::java::util::Collection AbstractAnalyticalPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_37528d110cff6b74]));
        }

        ::org::orekit::utils::PVCoordinatesProvider AbstractAnalyticalPropagator::getPvProvider() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPvProvider_903aca6bb4523e29]));
        }

        ::org::orekit::propagation::SpacecraftState AbstractAnalyticalPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_a69ef29c3ea1e1fa], a0.this$, a1.this$));
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
        static PyObject *t_AbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalPropagator_addEventDetector(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_clearEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_getEphemerisGenerator(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_getEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_getPvProvider(t_AbstractAnalyticalPropagator *self);
        static PyObject *t_AbstractAnalyticalPropagator_propagate(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_get__ephemerisGenerator(t_AbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_AbstractAnalyticalPropagator_get__eventsDetectors(t_AbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_AbstractAnalyticalPropagator_get__pvProvider(t_AbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_AbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractAnalyticalPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_AbstractAnalyticalPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_AbstractAnalyticalPropagator, pvProvider),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, getPvProvider, METH_NOARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, propagate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_AbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::AbstractPropagator),
          NULL
        };

        DEFINE_TYPE(AbstractAnalyticalPropagator, t_AbstractAnalyticalPropagator, AbstractAnalyticalPropagator);

        void t_AbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractAnalyticalPropagator), &PY_TYPE_DEF(AbstractAnalyticalPropagator), module, "AbstractAnalyticalPropagator", 0);
        }

        void t_AbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalPropagator), "class_", make_descriptor(AbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_AbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_AbstractAnalyticalPropagator::wrap_Object(AbstractAnalyticalPropagator(((t_AbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_AbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractAnalyticalPropagator_addEventDetector(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_clearEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_getEphemerisGenerator(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::EphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_getEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_getPvProvider(t_AbstractAnalyticalPropagator *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPvProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AbstractAnalyticalPropagator_propagate(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.propagate(a0, a1));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_get__ephemerisGenerator(t_AbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalPropagator_get__eventsDetectors(t_AbstractAnalyticalPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalPropagator_get__pvProvider(t_AbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPvProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$StringListConsumer::class$ = NULL;
            jmethodID *ParseToken$StringListConsumer::mids$ = NULL;
            bool ParseToken$StringListConsumer::live$ = false;

            jclass ParseToken$StringListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_de3e021e7266b71e] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$StringListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_de3e021e7266b71e], a0.this$);
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
            static PyObject *t_ParseToken$StringListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringListConsumer_accept(t_ParseToken$StringListConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$StringListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$StringListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$StringListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$StringListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$StringListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$StringListConsumer, t_ParseToken$StringListConsumer, ParseToken$StringListConsumer);

            void t_ParseToken$StringListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$StringListConsumer), &PY_TYPE_DEF(ParseToken$StringListConsumer), module, "ParseToken$StringListConsumer", 0);
            }

            void t_ParseToken$StringListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringListConsumer), "class_", make_descriptor(ParseToken$StringListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringListConsumer), "wrapfn_", make_descriptor(t_ParseToken$StringListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$StringListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$StringListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$StringListConsumer::wrap_Object(ParseToken$StringListConsumer(((t_ParseToken$StringListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$StringListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$StringListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$StringListConsumer_accept(t_ParseToken$StringListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/GHmsjPolynomials.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *GHmsjPolynomials::class$ = NULL;
            jmethodID *GHmsjPolynomials::mids$ = NULL;
            bool GHmsjPolynomials::live$ = false;

            jclass GHmsjPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/GHmsjPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_12428deb464a7a30] = env->getMethodID(cls, "<init>", "(DDDDI)V");
                mids$[mid_getGmsj_3d407e6a8cf9e8ca] = env->getMethodID(cls, "getGmsj", "(III)D");
                mids$[mid_getHmsj_3d407e6a8cf9e8ca] = env->getMethodID(cls, "getHmsj", "(III)D");
                mids$[mid_getdGmsdAlpha_3d407e6a8cf9e8ca] = env->getMethodID(cls, "getdGmsdAlpha", "(III)D");
                mids$[mid_getdGmsdBeta_3d407e6a8cf9e8ca] = env->getMethodID(cls, "getdGmsdBeta", "(III)D");
                mids$[mid_getdGmsdh_3d407e6a8cf9e8ca] = env->getMethodID(cls, "getdGmsdh", "(III)D");
                mids$[mid_getdGmsdk_3d407e6a8cf9e8ca] = env->getMethodID(cls, "getdGmsdk", "(III)D");
                mids$[mid_getdHmsdAlpha_3d407e6a8cf9e8ca] = env->getMethodID(cls, "getdHmsdAlpha", "(III)D");
                mids$[mid_getdHmsdBeta_3d407e6a8cf9e8ca] = env->getMethodID(cls, "getdHmsdBeta", "(III)D");
                mids$[mid_getdHmsdh_3d407e6a8cf9e8ca] = env->getMethodID(cls, "getdHmsdh", "(III)D");
                mids$[mid_getdHmsdk_3d407e6a8cf9e8ca] = env->getMethodID(cls, "getdHmsdk", "(III)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GHmsjPolynomials::GHmsjPolynomials(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_12428deb464a7a30, a0, a1, a2, a3, a4)) {}

            jdouble GHmsjPolynomials::getGmsj(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGmsj_3d407e6a8cf9e8ca], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getHmsj(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHmsj_3d407e6a8cf9e8ca], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdAlpha_3d407e6a8cf9e8ca], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdBeta(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdBeta_3d407e6a8cf9e8ca], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdh(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdh_3d407e6a8cf9e8ca], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdk(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdk_3d407e6a8cf9e8ca], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdAlpha_3d407e6a8cf9e8ca], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdBeta(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdBeta_3d407e6a8cf9e8ca], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdh(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdh_3d407e6a8cf9e8ca], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdk(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdk_3d407e6a8cf9e8ca], a0, a1, a2);
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
            static PyObject *t_GHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GHmsjPolynomials_init_(t_GHmsjPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GHmsjPolynomials_getGmsj(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getHmsj(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdAlpha(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdBeta(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdh(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdk(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdAlpha(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdBeta(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdh(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdk(t_GHmsjPolynomials *self, PyObject *args);

            static PyMethodDef t_GHmsjPolynomials__methods_[] = {
              DECLARE_METHOD(t_GHmsjPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHmsjPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHmsjPolynomials, getGmsj, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getHmsj, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GHmsjPolynomials)[] = {
              { Py_tp_methods, t_GHmsjPolynomials__methods_ },
              { Py_tp_init, (void *) t_GHmsjPolynomials_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GHmsjPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GHmsjPolynomials, t_GHmsjPolynomials, GHmsjPolynomials);

            void t_GHmsjPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(GHmsjPolynomials), &PY_TYPE_DEF(GHmsjPolynomials), module, "GHmsjPolynomials", 0);
            }

            void t_GHmsjPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHmsjPolynomials), "class_", make_descriptor(GHmsjPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHmsjPolynomials), "wrapfn_", make_descriptor(t_GHmsjPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHmsjPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GHmsjPolynomials::initializeClass, 1)))
                return NULL;
              return t_GHmsjPolynomials::wrap_Object(GHmsjPolynomials(((t_GHmsjPolynomials *) arg)->object.this$));
            }
            static PyObject *t_GHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GHmsjPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GHmsjPolynomials_init_(t_GHmsjPolynomials *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              GHmsjPolynomials object((jobject) NULL);

              if (!parseArgs(args, "DDDDI", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = GHmsjPolynomials(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GHmsjPolynomials_getGmsj(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getGmsj(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGmsj", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getHmsj(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getHmsj(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHmsj", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdAlpha(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdAlpha(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdBeta(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdBeta(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdh(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdh(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdh", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdk(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdk(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdk", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdAlpha(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdAlpha(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdBeta(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdBeta(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdh(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdh(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdh", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdk(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdk(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdk", args);
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
#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AbstractGradientConverter::class$ = NULL;
        jmethodID *AbstractGradientConverter::mids$ = NULL;
        bool AbstractGradientConverter::live$ = false;

        jclass AbstractGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AbstractGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFreeStateParameters_570ce0828f81a2c1] = env->getMethodID(cls, "getFreeStateParameters", "()I");
            mids$[mid_getParameters_ae4ed06808ba0600] = env->getMethodID(cls, "getParameters", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/utils/ParameterDriversProvider;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getParametersAtStateDate_ae4ed06808ba0600] = env->getMethodID(cls, "getParametersAtStateDate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/utils/ParameterDriversProvider;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getState_61ad2f60830fa51e] = env->getMethodID(cls, "getState", "(Lorg/orekit/utils/ParameterDriversProvider;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_extend_7b4bd5ccbcf5cc53] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_extend_a54ef65bb7e1aa32] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_extend_b582dc064d70ed6d] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/analysis/differentiation/Gradient;I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_initStates_1463d3d0d52f94dd] = env->getMethodID(cls, "initStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_buildBasicGradientSpacecraftState_18ad1df060901e68] = env->getStaticMethodID(cls, "buildBasicGradientSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;ILorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/FieldSpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint AbstractGradientConverter::getFreeStateParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeStateParameters_570ce0828f81a2c1]);
        }

        JArray< ::org::hipparchus::analysis::differentiation::Gradient > AbstractGradientConverter::getParameters(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::utils::ParameterDriversProvider & a1) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callObjectMethod(this$, mids$[mid_getParameters_ae4ed06808ba0600], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Gradient > AbstractGradientConverter::getParametersAtStateDate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::utils::ParameterDriversProvider & a1) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callObjectMethod(this$, mids$[mid_getParametersAtStateDate_ae4ed06808ba0600], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState AbstractGradientConverter::getState(const ::org::orekit::utils::ParameterDriversProvider & a0) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_61ad2f60830fa51e], a0.this$));
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
        static PyObject *t_AbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGradientConverter_getFreeStateParameters(t_AbstractGradientConverter *self);
        static PyObject *t_AbstractGradientConverter_getParameters(t_AbstractGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractGradientConverter_getParametersAtStateDate(t_AbstractGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractGradientConverter_getState(t_AbstractGradientConverter *self, PyObject *arg);
        static PyObject *t_AbstractGradientConverter_get__freeStateParameters(t_AbstractGradientConverter *self, void *data);
        static PyGetSetDef t_AbstractGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractGradientConverter, freeStateParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractGradientConverter__methods_[] = {
          DECLARE_METHOD(t_AbstractGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGradientConverter, getFreeStateParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractGradientConverter, getParameters, METH_VARARGS),
          DECLARE_METHOD(t_AbstractGradientConverter, getParametersAtStateDate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractGradientConverter, getState, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractGradientConverter)[] = {
          { Py_tp_methods, t_AbstractGradientConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractGradientConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractGradientConverter, t_AbstractGradientConverter, AbstractGradientConverter);

        void t_AbstractGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractGradientConverter), &PY_TYPE_DEF(AbstractGradientConverter), module, "AbstractGradientConverter", 0);
        }

        void t_AbstractGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGradientConverter), "class_", make_descriptor(AbstractGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGradientConverter), "wrapfn_", make_descriptor(t_AbstractGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGradientConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractGradientConverter::initializeClass, 1)))
            return NULL;
          return t_AbstractGradientConverter::wrap_Object(AbstractGradientConverter(((t_AbstractGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_AbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractGradientConverter_getFreeStateParameters(t_AbstractGradientConverter *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeStateParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractGradientConverter_getParameters(t_AbstractGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::ParameterDriversProvider a1((jobject) NULL);
          JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::utils::ParameterDriversProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getParameters(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getParameters", args);
          return NULL;
        }

        static PyObject *t_AbstractGradientConverter_getParametersAtStateDate(t_AbstractGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::ParameterDriversProvider a1((jobject) NULL);
          JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::utils::ParameterDriversProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getParametersAtStateDate(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getParametersAtStateDate", args);
          return NULL;
        }

        static PyObject *t_AbstractGradientConverter_getState(t_AbstractGradientConverter *self, PyObject *arg)
        {
          ::org::orekit::utils::ParameterDriversProvider a0((jobject) NULL);
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriversProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getState(a0));
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          PyErr_SetArgsError((PyObject *) self, "getState", arg);
          return NULL;
        }

        static PyObject *t_AbstractGradientConverter_get__freeStateParameters(t_AbstractGradientConverter *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeStateParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudesSequence$SwitchHandler::class$ = NULL;
      jmethodID *AttitudesSequence$SwitchHandler::mids$ = NULL;
      bool AttitudesSequence$SwitchHandler::live$ = false;

      jclass AttitudesSequence$SwitchHandler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudesSequence$SwitchHandler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_switchOccurred_0bf4342ddf7e9645] = env->getMethodID(cls, "switchOccurred", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AttitudesSequence$SwitchHandler::switchOccurred(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::propagation::SpacecraftState & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_switchOccurred_0bf4342ddf7e9645], a0.this$, a1.this$, a2.this$);
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
      static PyObject *t_AttitudesSequence$SwitchHandler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudesSequence$SwitchHandler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudesSequence$SwitchHandler_switchOccurred(t_AttitudesSequence$SwitchHandler *self, PyObject *args);

      static PyMethodDef t_AttitudesSequence$SwitchHandler__methods_[] = {
        DECLARE_METHOD(t_AttitudesSequence$SwitchHandler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence$SwitchHandler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence$SwitchHandler, switchOccurred, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudesSequence$SwitchHandler)[] = {
        { Py_tp_methods, t_AttitudesSequence$SwitchHandler__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudesSequence$SwitchHandler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudesSequence$SwitchHandler, t_AttitudesSequence$SwitchHandler, AttitudesSequence$SwitchHandler);

      void t_AttitudesSequence$SwitchHandler::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudesSequence$SwitchHandler), &PY_TYPE_DEF(AttitudesSequence$SwitchHandler), module, "AttitudesSequence$SwitchHandler", 0);
      }

      void t_AttitudesSequence$SwitchHandler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence$SwitchHandler), "class_", make_descriptor(AttitudesSequence$SwitchHandler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence$SwitchHandler), "wrapfn_", make_descriptor(t_AttitudesSequence$SwitchHandler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence$SwitchHandler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudesSequence$SwitchHandler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudesSequence$SwitchHandler::initializeClass, 1)))
          return NULL;
        return t_AttitudesSequence$SwitchHandler::wrap_Object(AttitudesSequence$SwitchHandler(((t_AttitudesSequence$SwitchHandler *) arg)->object.this$));
      }
      static PyObject *t_AttitudesSequence$SwitchHandler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudesSequence$SwitchHandler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudesSequence$SwitchHandler_switchOccurred(t_AttitudesSequence$SwitchHandler *self, PyObject *args)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
        ::org::orekit::propagation::SpacecraftState a2((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.switchOccurred(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "switchOccurred", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/ComplexFormat.h"
#include "java/util/Locale.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/complex/ComplexFormat.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/text/ParsePosition.h"
#include "java/lang/Double.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_256f36a22c0d0f55] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_e2028a486c5b97a5] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_init$_4f25566dcb220520] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/text/NumberFormat;)V");
          mids$[mid_init$_8db4b6f129d3dd87] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_29f1b93744775b94] = env->getMethodID(cls, "format", "(Ljava/lang/Double;)Ljava/lang/String;");
          mids$[mid_format_25cc0288c0c0b8ed] = env->getMethodID(cls, "format", "(Lorg/hipparchus/complex/Complex;)Ljava/lang/String;");
          mids$[mid_format_ffd5cf5906ec2ab3] = env->getMethodID(cls, "format", "(Lorg/hipparchus/complex/Complex;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_f5c3717ad7292c63] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_c5ed07ebd55821bb] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getComplexFormat_0b252931508f6d4e] = env->getStaticMethodID(cls, "getComplexFormat", "()Lorg/hipparchus/complex/ComplexFormat;");
          mids$[mid_getComplexFormat_1e232ce2e7570743] = env->getStaticMethodID(cls, "getComplexFormat", "(Ljava/util/Locale;)Lorg/hipparchus/complex/ComplexFormat;");
          mids$[mid_getComplexFormat_37105b18a0225257] = env->getStaticMethodID(cls, "getComplexFormat", "(Ljava/lang/String;Ljava/util/Locale;)Lorg/hipparchus/complex/ComplexFormat;");
          mids$[mid_getImaginaryCharacter_11b109bd155ca898] = env->getMethodID(cls, "getImaginaryCharacter", "()Ljava/lang/String;");
          mids$[mid_getImaginaryFormat_24f83dea4a8657b1] = env->getMethodID(cls, "getImaginaryFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getRealFormat_24f83dea4a8657b1] = env->getMethodID(cls, "getRealFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parse_32a35bb7fb909be7] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_parse_dc6a5fb6090ca71d] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexFormat::ComplexFormat() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ComplexFormat::ComplexFormat(const ::java::text::NumberFormat & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_256f36a22c0d0f55, a0.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e2028a486c5b97a5, a0.this$, a1.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::lang::String & a0, const ::java::text::NumberFormat & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f25566dcb220520, a0.this$, a1.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::lang::String & a0, const ::java::text::NumberFormat & a1, const ::java::text::NumberFormat & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8db4b6f129d3dd87, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::String ComplexFormat::format(const ::java::lang::Double & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_29f1b93744775b94], a0.this$));
      }

      ::java::lang::String ComplexFormat::format(const ::org::hipparchus::complex::Complex & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_25cc0288c0c0b8ed], a0.this$));
      }

      ::java::lang::StringBuffer ComplexFormat::format(const ::org::hipparchus::complex::Complex & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_ffd5cf5906ec2ab3], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer ComplexFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_f5c3717ad7292c63], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > ComplexFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_c5ed07ebd55821bb]));
      }

      ComplexFormat ComplexFormat::getComplexFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexFormat(env->callStaticObjectMethod(cls, mids$[mid_getComplexFormat_0b252931508f6d4e]));
      }

      ComplexFormat ComplexFormat::getComplexFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexFormat(env->callStaticObjectMethod(cls, mids$[mid_getComplexFormat_1e232ce2e7570743], a0.this$));
      }

      ComplexFormat ComplexFormat::getComplexFormat(const ::java::lang::String & a0, const ::java::util::Locale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexFormat(env->callStaticObjectMethod(cls, mids$[mid_getComplexFormat_37105b18a0225257], a0.this$, a1.this$));
      }

      ::java::lang::String ComplexFormat::getImaginaryCharacter() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImaginaryCharacter_11b109bd155ca898]));
      }

      ::java::text::NumberFormat ComplexFormat::getImaginaryFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getImaginaryFormat_24f83dea4a8657b1]));
      }

      ::java::text::NumberFormat ComplexFormat::getRealFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getRealFormat_24f83dea4a8657b1]));
      }

      ::org::hipparchus::complex::Complex ComplexFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_parse_32a35bb7fb909be7], a0.this$));
      }

      ::org::hipparchus::complex::Complex ComplexFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_parse_dc6a5fb6090ca71d], a0.this$, a1.this$));
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
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimation::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimation::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimation::live$ = false;
            ::java::lang::String *MarshallSolarActivityFutureEstimation::DEFAULT_SUPPORTED_NAMES = NULL;

            jclass MarshallSolarActivityFutureEstimation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_63237fb16192c43e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;)V");
                mids$[mid_init$_49087018f9ef4b50] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;)V");
                mids$[mid_init$_1def1b70c873513f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_10d47b13d66f2d64] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_d5e607b5def59a14] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_init$_cc5ba78e41fbaf15] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_get24HoursKp_bf1d7732f1acb697] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getAp_2b9aa40de0a696a4] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_getAverageFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getDailyFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getFileDate_21e8cae7789f5d8a] = env->getMethodID(cls, "getFileDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/DateComponents;");
                mids$[mid_getInstantFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMeanFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getStrengthLevel_d8093aa01452ce71] = env->getMethodID(cls, "getStrengthLevel", "()Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;");
                mids$[mid_getThreeHourlyKP_bf1d7732f1acb697] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_63237fb16192c43e, a0.this$, a1.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_49087018f9ef4b50, a0.this$, a1.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_1def1b70c873513f, a0.this$, a1.this$, a2.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_10d47b13d66f2d64, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::time::TimeScale & a2, jint a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_d5e607b5def59a14, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3, jint a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_cc5ba78e41fbaf15, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7)) {}

            jdouble MarshallSolarActivityFutureEstimation::get24HoursKp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_get24HoursKp_bf1d7732f1acb697], a0.this$);
            }

            JArray< jdouble > MarshallSolarActivityFutureEstimation::getAp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAp_2b9aa40de0a696a4], a0.this$));
            }

            jdouble MarshallSolarActivityFutureEstimation::getAverageFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAverageFlux_bf1d7732f1acb697], a0.this$);
            }

            jdouble MarshallSolarActivityFutureEstimation::getDailyFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDailyFlux_bf1d7732f1acb697], a0.this$);
            }

            ::org::orekit::time::DateComponents MarshallSolarActivityFutureEstimation::getFileDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getFileDate_21e8cae7789f5d8a], a0.this$));
            }

            jdouble MarshallSolarActivityFutureEstimation::getInstantFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInstantFlux_bf1d7732f1acb697], a0.this$);
            }

            jdouble MarshallSolarActivityFutureEstimation::getMeanFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanFlux_bf1d7732f1acb697], a0.this$);
            }

            ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel MarshallSolarActivityFutureEstimation::getStrengthLevel() const
            {
              return ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel(env->callObjectMethod(this$, mids$[mid_getStrengthLevel_d8093aa01452ce71]));
            }

            jdouble MarshallSolarActivityFutureEstimation::getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKP_bf1d7732f1acb697], a0.this$);
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
            static PyObject *t_MarshallSolarActivityFutureEstimation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation_of_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static int t_MarshallSolarActivityFutureEstimation_init_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MarshallSolarActivityFutureEstimation_get24HoursKp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getAp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getAverageFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getDailyFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getFileDate(t_MarshallSolarActivityFutureEstimation *self, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getInstantFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getMeanFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getStrengthLevel(t_MarshallSolarActivityFutureEstimation *self);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getThreeHourlyKP(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_get__strengthLevel(t_MarshallSolarActivityFutureEstimation *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimation_get__parameters_(t_MarshallSolarActivityFutureEstimation *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimation__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimation, strengthLevel),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimation, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimation__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, get24HoursKp, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getAp, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getAverageFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getDailyFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getFileDate, METH_O),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getInstantFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getMeanFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getStrengthLevel, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getThreeHourlyKP, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimation)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimation__methods_ },
              { Py_tp_init, (void *) t_MarshallSolarActivityFutureEstimation_init_ },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimation)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimation, t_MarshallSolarActivityFutureEstimation, MarshallSolarActivityFutureEstimation);
            PyObject *t_MarshallSolarActivityFutureEstimation::wrap_Object(const MarshallSolarActivityFutureEstimation& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation *self = (t_MarshallSolarActivityFutureEstimation *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimation::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation *self = (t_MarshallSolarActivityFutureEstimation *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimation::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimation), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimation), module, "MarshallSolarActivityFutureEstimation", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "StrengthLevel", make_descriptor(&PY_TYPE_DEF(MarshallSolarActivityFutureEstimation$StrengthLevel)));
            }

            void t_MarshallSolarActivityFutureEstimation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "class_", make_descriptor(MarshallSolarActivityFutureEstimation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "boxfn_", make_descriptor(boxObject));
              env->getClass(MarshallSolarActivityFutureEstimation::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*MarshallSolarActivityFutureEstimation::DEFAULT_SUPPORTED_NAMES)));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimation::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimation::wrap_Object(MarshallSolarActivityFutureEstimation(((t_MarshallSolarActivityFutureEstimation *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_of_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_MarshallSolarActivityFutureEstimation_init_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "sK", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "kK", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "kKk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "sKkk", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2, &a3))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2, a3));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  jint a3;
                  jdouble a4;
                  jdouble a5;
                  jdouble a6;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "kKkIDDD", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 8:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "sKkkIDDD", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2, &a3, &a4, &a5, &a6, &a7))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2, a3, a4, a5, a6, a7));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
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

            static PyObject *t_MarshallSolarActivityFutureEstimation_get24HoursKp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.get24HoursKp(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "get24HoursKp", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getAp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAp(a0));
                return result.wrap();
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getAp", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getAverageFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAverageFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getAverageFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getDailyFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDailyFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getDailyFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getFileDate(t_MarshallSolarActivityFutureEstimation *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::time::DateComponents result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getFileDate(a0));
                return ::org::orekit::time::t_DateComponents::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getFileDate", arg);
              return NULL;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getInstantFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getInstantFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getInstantFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getMeanFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMeanFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getMeanFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getStrengthLevel(t_MarshallSolarActivityFutureEstimation *self)
            {
              ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel result((jobject) NULL);
              OBJ_CALL(result = self->object.getStrengthLevel());
              return ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getThreeHourlyKP(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThreeHourlyKP(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getThreeHourlyKP", args, 2);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation_get__parameters_(t_MarshallSolarActivityFutureEstimation *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_get__strengthLevel(t_MarshallSolarActivityFutureEstimation *self, void *data)
            {
              ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel value((jobject) NULL);
              OBJ_CALL(value = self->object.getStrengthLevel());
              return ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *PivotingStrategy::class$ = NULL;
      jmethodID *PivotingStrategy::mids$ = NULL;
      bool PivotingStrategy::live$ = false;
      PivotingStrategy *PivotingStrategy::CENTRAL = NULL;
      PivotingStrategy *PivotingStrategy::MEDIAN_OF_3 = NULL;

      jclass PivotingStrategy::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/PivotingStrategy");

          mids$ = new jmethodID[max_mid];
          mids$[mid_pivotIndex_925e9454c94270d3] = env->getMethodID(cls, "pivotIndex", "([DII)I");
          mids$[mid_valueOf_f844976ca8ca2074] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/PivotingStrategy;");
          mids$[mid_values_fc3f15af90c31595] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/PivotingStrategy;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CENTRAL = new PivotingStrategy(env->getStaticObjectField(cls, "CENTRAL", "Lorg/hipparchus/util/PivotingStrategy;"));
          MEDIAN_OF_3 = new PivotingStrategy(env->getStaticObjectField(cls, "MEDIAN_OF_3", "Lorg/hipparchus/util/PivotingStrategy;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint PivotingStrategy::pivotIndex(const JArray< jdouble > & a0, jint a1, jint a2) const
      {
        return env->callIntMethod(this$, mids$[mid_pivotIndex_925e9454c94270d3], a0.this$, a1, a2);
      }

      PivotingStrategy PivotingStrategy::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PivotingStrategy(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f844976ca8ca2074], a0.this$));
      }

      JArray< PivotingStrategy > PivotingStrategy::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PivotingStrategy >(env->callStaticObjectMethod(cls, mids$[mid_values_fc3f15af90c31595]));
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
      static PyObject *t_PivotingStrategy_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PivotingStrategy_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PivotingStrategy_of_(t_PivotingStrategy *self, PyObject *args);
      static PyObject *t_PivotingStrategy_pivotIndex(t_PivotingStrategy *self, PyObject *args);
      static PyObject *t_PivotingStrategy_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PivotingStrategy_values(PyTypeObject *type);
      static PyObject *t_PivotingStrategy_get__parameters_(t_PivotingStrategy *self, void *data);
      static PyGetSetDef t_PivotingStrategy__fields_[] = {
        DECLARE_GET_FIELD(t_PivotingStrategy, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PivotingStrategy__methods_[] = {
        DECLARE_METHOD(t_PivotingStrategy, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PivotingStrategy, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PivotingStrategy, of_, METH_VARARGS),
        DECLARE_METHOD(t_PivotingStrategy, pivotIndex, METH_VARARGS),
        DECLARE_METHOD(t_PivotingStrategy, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PivotingStrategy, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PivotingStrategy)[] = {
        { Py_tp_methods, t_PivotingStrategy__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PivotingStrategy__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PivotingStrategy)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PivotingStrategy, t_PivotingStrategy, PivotingStrategy);
      PyObject *t_PivotingStrategy::wrap_Object(const PivotingStrategy& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PivotingStrategy::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PivotingStrategy *self = (t_PivotingStrategy *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PivotingStrategy::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PivotingStrategy::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PivotingStrategy *self = (t_PivotingStrategy *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PivotingStrategy::install(PyObject *module)
      {
        installType(&PY_TYPE(PivotingStrategy), &PY_TYPE_DEF(PivotingStrategy), module, "PivotingStrategy", 0);
      }

      void t_PivotingStrategy::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "class_", make_descriptor(PivotingStrategy::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "wrapfn_", make_descriptor(t_PivotingStrategy::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "boxfn_", make_descriptor(boxObject));
        env->getClass(PivotingStrategy::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "CENTRAL", make_descriptor(t_PivotingStrategy::wrap_Object(*PivotingStrategy::CENTRAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "MEDIAN_OF_3", make_descriptor(t_PivotingStrategy::wrap_Object(*PivotingStrategy::MEDIAN_OF_3)));
      }

      static PyObject *t_PivotingStrategy_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PivotingStrategy::initializeClass, 1)))
          return NULL;
        return t_PivotingStrategy::wrap_Object(PivotingStrategy(((t_PivotingStrategy *) arg)->object.this$));
      }
      static PyObject *t_PivotingStrategy_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PivotingStrategy::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PivotingStrategy_of_(t_PivotingStrategy *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PivotingStrategy_pivotIndex(t_PivotingStrategy *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        jint a1;
        jint a2;
        jint result;

        if (!parseArgs(args, "[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.pivotIndex(a0, a1, a2));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "pivotIndex", args);
        return NULL;
      }

      static PyObject *t_PivotingStrategy_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PivotingStrategy result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::PivotingStrategy::valueOf(a0));
          return t_PivotingStrategy::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PivotingStrategy_values(PyTypeObject *type)
      {
        JArray< PivotingStrategy > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::PivotingStrategy::values());
        return JArray<jobject>(result.this$).wrap(t_PivotingStrategy::wrap_jobject);
      }
      static PyObject *t_PivotingStrategy_get__parameters_(t_PivotingStrategy *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UT1Scale::class$ = NULL;
      jmethodID *UT1Scale::mids$ = NULL;
      bool UT1Scale::live$ = false;

      jclass UT1Scale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UT1Scale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEOPHistory_a75a6d9d92c81a5e] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getUTCScale_4611f4f4ac7b3711] = env->getMethodID(cls, "getUTCScale", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::EOPHistory UT1Scale::getEOPHistory() const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_a75a6d9d92c81a5e]));
      }

      ::java::lang::String UT1Scale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      ::org::orekit::time::UTCScale UT1Scale::getUTCScale() const
      {
        return ::org::orekit::time::UTCScale(env->callObjectMethod(this$, mids$[mid_getUTCScale_4611f4f4ac7b3711]));
      }

      jdouble UT1Scale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UT1Scale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      ::java::lang::String UT1Scale::toString() const
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
      static PyObject *t_UT1Scale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UT1Scale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UT1Scale_getEOPHistory(t_UT1Scale *self);
      static PyObject *t_UT1Scale_getName(t_UT1Scale *self);
      static PyObject *t_UT1Scale_getUTCScale(t_UT1Scale *self);
      static PyObject *t_UT1Scale_offsetFromTAI(t_UT1Scale *self, PyObject *args);
      static PyObject *t_UT1Scale_toString(t_UT1Scale *self, PyObject *args);
      static PyObject *t_UT1Scale_get__eOPHistory(t_UT1Scale *self, void *data);
      static PyObject *t_UT1Scale_get__name(t_UT1Scale *self, void *data);
      static PyObject *t_UT1Scale_get__uTCScale(t_UT1Scale *self, void *data);
      static PyGetSetDef t_UT1Scale__fields_[] = {
        DECLARE_GET_FIELD(t_UT1Scale, eOPHistory),
        DECLARE_GET_FIELD(t_UT1Scale, name),
        DECLARE_GET_FIELD(t_UT1Scale, uTCScale),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UT1Scale__methods_[] = {
        DECLARE_METHOD(t_UT1Scale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UT1Scale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UT1Scale, getEOPHistory, METH_NOARGS),
        DECLARE_METHOD(t_UT1Scale, getName, METH_NOARGS),
        DECLARE_METHOD(t_UT1Scale, getUTCScale, METH_NOARGS),
        DECLARE_METHOD(t_UT1Scale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_UT1Scale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UT1Scale)[] = {
        { Py_tp_methods, t_UT1Scale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UT1Scale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UT1Scale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UT1Scale, t_UT1Scale, UT1Scale);

      void t_UT1Scale::install(PyObject *module)
      {
        installType(&PY_TYPE(UT1Scale), &PY_TYPE_DEF(UT1Scale), module, "UT1Scale", 0);
      }

      void t_UT1Scale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UT1Scale), "class_", make_descriptor(UT1Scale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UT1Scale), "wrapfn_", make_descriptor(t_UT1Scale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UT1Scale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UT1Scale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UT1Scale::initializeClass, 1)))
          return NULL;
        return t_UT1Scale::wrap_Object(UT1Scale(((t_UT1Scale *) arg)->object.this$));
      }
      static PyObject *t_UT1Scale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UT1Scale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UT1Scale_getEOPHistory(t_UT1Scale *self)
      {
        ::org::orekit::frames::EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_UT1Scale_getName(t_UT1Scale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_UT1Scale_getUTCScale(t_UT1Scale *self)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getUTCScale());
        return ::org::orekit::time::t_UTCScale::wrap_Object(result);
      }

      static PyObject *t_UT1Scale_offsetFromTAI(t_UT1Scale *self, PyObject *args)
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

      static PyObject *t_UT1Scale_toString(t_UT1Scale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(UT1Scale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_UT1Scale_get__eOPHistory(t_UT1Scale *self, void *data)
      {
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_UT1Scale_get__name(t_UT1Scale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_UT1Scale_get__uTCScale(t_UT1Scale *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTCScale());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "java/lang/String.h"
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
                mids$[mid_valueOf_661e99684588dd4e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;");
                mids$[mid_values_118374f5a126c283] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;");

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
              return MarshallSolarActivityFutureEstimation$StrengthLevel(env->callStaticObjectMethod(cls, mids$[mid_valueOf_661e99684588dd4e], a0.this$));
            }

            JArray< MarshallSolarActivityFutureEstimation$StrengthLevel > MarshallSolarActivityFutureEstimation$StrengthLevel::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< MarshallSolarActivityFutureEstimation$StrengthLevel >(env->callStaticObjectMethod(cls, mids$[mid_values_118374f5a126c283]));
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
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_1b5e9254fb70ca20] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_dff5885c2c873297] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MIDPOINT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "MIDPOINT_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidPointIntegrator::MidPointIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        MidPointIntegrator::MidPointIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

        MidPointIntegrator::MidPointIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_1b5e9254fb70ca20, a0, a1, a2, a3)) {}
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm01Header::class$ = NULL;
              jmethodID *SsrIgm01Header::mids$ = NULL;
              bool SsrIgm01Header::live$ = false;

              jclass SsrIgm01Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCrsIndicator_570ce0828f81a2c1] = env->getMethodID(cls, "getCrsIndicator", "()I");
                  mids$[mid_setCrsIndicator_99803b0791f320ff] = env->getMethodID(cls, "setCrsIndicator", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm01Header::SsrIgm01Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jint SsrIgm01Header::getCrsIndicator() const
              {
                return env->callIntMethod(this$, mids$[mid_getCrsIndicator_570ce0828f81a2c1]);
              }

              void SsrIgm01Header::setCrsIndicator(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCrsIndicator_99803b0791f320ff], a0);
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
              static PyObject *t_SsrIgm01Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm01Header_init_(t_SsrIgm01Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm01Header_getCrsIndicator(t_SsrIgm01Header *self);
              static PyObject *t_SsrIgm01Header_setCrsIndicator(t_SsrIgm01Header *self, PyObject *arg);
              static PyObject *t_SsrIgm01Header_get__crsIndicator(t_SsrIgm01Header *self, void *data);
              static int t_SsrIgm01Header_set__crsIndicator(t_SsrIgm01Header *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm01Header__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm01Header, crsIndicator),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm01Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm01Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Header, getCrsIndicator, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm01Header, setCrsIndicator, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm01Header)[] = {
                { Py_tp_methods, t_SsrIgm01Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm01Header_init_ },
                { Py_tp_getset, t_SsrIgm01Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm01Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm01Header, t_SsrIgm01Header, SsrIgm01Header);

              void t_SsrIgm01Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm01Header), &PY_TYPE_DEF(SsrIgm01Header), module, "SsrIgm01Header", 0);
              }

              void t_SsrIgm01Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Header), "class_", make_descriptor(SsrIgm01Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Header), "wrapfn_", make_descriptor(t_SsrIgm01Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm01Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm01Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm01Header::wrap_Object(SsrIgm01Header(((t_SsrIgm01Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm01Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm01Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm01Header_init_(t_SsrIgm01Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm01Header object((jobject) NULL);

                INT_CALL(object = SsrIgm01Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm01Header_getCrsIndicator(t_SsrIgm01Header *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getCrsIndicator());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm01Header_setCrsIndicator(t_SsrIgm01Header *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setCrsIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCrsIndicator", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm01Header_get__crsIndicator(t_SsrIgm01Header *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getCrsIndicator());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm01Header_set__crsIndicator(t_SsrIgm01Header *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setCrsIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "crsIndicator", arg);
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
#include "org/hipparchus/ode/nonstiff/AdamsBashforthFieldIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsBashforthFieldIntegrator::class$ = NULL;
        jmethodID *AdamsBashforthFieldIntegrator::mids$ = NULL;
        bool AdamsBashforthFieldIntegrator::live$ = false;

        jclass AdamsBashforthFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsBashforthFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7f69364f82b72251] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDD[D[D)V");
            mids$[mid_init$_b6677f3cac38e98d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDDDD)V");
            mids$[mid_errorEstimation_41f9dcc5eb20f1cb] = env->getMethodID(cls, "errorEstimation", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/FieldMatrix;)D");
            mids$[mid_finalizeStep_cf78fb7ef1b60a21] = env->getMethodID(cls, "finalizeStep", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthFieldIntegrator::AdamsBashforthFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_7f69364f82b72251, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        AdamsBashforthFieldIntegrator::AdamsBashforthFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b6677f3cac38e98d, a0.this$, a1, a2, a3, a4, a5)) {}
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
        static PyObject *t_AdamsBashforthFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegrator_of_(t_AdamsBashforthFieldIntegrator *self, PyObject *args);
        static int t_AdamsBashforthFieldIntegrator_init_(t_AdamsBashforthFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsBashforthFieldIntegrator_get__parameters_(t_AdamsBashforthFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdamsBashforthFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsBashforthFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsBashforthFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthFieldIntegrator)[] = {
          { Py_tp_methods, t_AdamsBashforthFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthFieldIntegrator_init_ },
          { Py_tp_getset, t_AdamsBashforthFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthFieldIntegrator, t_AdamsBashforthFieldIntegrator, AdamsBashforthFieldIntegrator);
        PyObject *t_AdamsBashforthFieldIntegrator::wrap_Object(const AdamsBashforthFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegrator *self = (t_AdamsBashforthFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsBashforthFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegrator *self = (t_AdamsBashforthFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsBashforthFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthFieldIntegrator), &PY_TYPE_DEF(AdamsBashforthFieldIntegrator), module, "AdamsBashforthFieldIntegrator", 0);
        }

        void t_AdamsBashforthFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegrator), "class_", make_descriptor(AdamsBashforthFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegrator), "wrapfn_", make_descriptor(t_AdamsBashforthFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthFieldIntegrator::wrap_Object(AdamsBashforthFieldIntegrator(((t_AdamsBashforthFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsBashforthFieldIntegrator_of_(t_AdamsBashforthFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsBashforthFieldIntegrator_init_(t_AdamsBashforthFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              AdamsBashforthFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsBashforthFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              AdamsBashforthFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsBashforthFieldIntegrator(a0, a1, a2, a3, a4, a5));
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
        static PyObject *t_AdamsBashforthFieldIntegrator_get__parameters_(t_AdamsBashforthFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgmData::class$ = NULL;
              jmethodID *SsrIgmData::mids$ = NULL;
              bool SsrIgmData::live$ = false;

              jclass SsrIgmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSatelliteID_570ce0828f81a2c1] = env->getMethodID(cls, "getSatelliteID", "()I");
                  mids$[mid_setSatelliteID_99803b0791f320ff] = env->getMethodID(cls, "setSatelliteID", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgmData::SsrIgmData() : ::org::orekit::gnss::metric::messages::ssr::SsrData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jint SsrIgmData::getSatelliteID() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteID_570ce0828f81a2c1]);
              }

              void SsrIgmData::setSatelliteID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteID_99803b0791f320ff], a0);
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
              static PyObject *t_SsrIgmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgmData_init_(t_SsrIgmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgmData_getSatelliteID(t_SsrIgmData *self);
              static PyObject *t_SsrIgmData_setSatelliteID(t_SsrIgmData *self, PyObject *arg);
              static PyObject *t_SsrIgmData_get__satelliteID(t_SsrIgmData *self, void *data);
              static int t_SsrIgmData_set__satelliteID(t_SsrIgmData *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgmData__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgmData, satelliteID),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgmData__methods_[] = {
                DECLARE_METHOD(t_SsrIgmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmData, getSatelliteID, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgmData, setSatelliteID, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgmData)[] = {
                { Py_tp_methods, t_SsrIgmData__methods_ },
                { Py_tp_init, (void *) t_SsrIgmData_init_ },
                { Py_tp_getset, t_SsrIgmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgmData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrData),
                NULL
              };

              DEFINE_TYPE(SsrIgmData, t_SsrIgmData, SsrIgmData);

              void t_SsrIgmData::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgmData), &PY_TYPE_DEF(SsrIgmData), module, "SsrIgmData", 0);
              }

              void t_SsrIgmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmData), "class_", make_descriptor(SsrIgmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmData), "wrapfn_", make_descriptor(t_SsrIgmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgmData::initializeClass, 1)))
                  return NULL;
                return t_SsrIgmData::wrap_Object(SsrIgmData(((t_SsrIgmData *) arg)->object.this$));
              }
              static PyObject *t_SsrIgmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgmData_init_(t_SsrIgmData *self, PyObject *args, PyObject *kwds)
              {
                SsrIgmData object((jobject) NULL);

                INT_CALL(object = SsrIgmData());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgmData_getSatelliteID(t_SsrIgmData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgmData_setSatelliteID(t_SsrIgmData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSatelliteID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSatelliteID", arg);
                return NULL;
              }

              static PyObject *t_SsrIgmData_get__satelliteID(t_SsrIgmData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteID());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgmData_set__satelliteID(t_SsrIgmData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSatelliteID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "satelliteID", arg);
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
#include "org/orekit/data/PythonReaderOpener.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "java/io/Reader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonReaderOpener::class$ = NULL;
      jmethodID *PythonReaderOpener::mids$ = NULL;
      bool PythonReaderOpener::live$ = false;

      jclass PythonReaderOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonReaderOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_openOnce_26c6a3f16521a493] = env->getMethodID(cls, "openOnce", "()Ljava/io/Reader;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonReaderOpener::PythonReaderOpener() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonReaderOpener::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonReaderOpener::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonReaderOpener::pythonExtension(jlong a0) const
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
    namespace data {
      static PyObject *t_PythonReaderOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonReaderOpener_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonReaderOpener_init_(t_PythonReaderOpener *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonReaderOpener_finalize(t_PythonReaderOpener *self);
      static PyObject *t_PythonReaderOpener_pythonExtension(t_PythonReaderOpener *self, PyObject *args);
      static jobject JNICALL t_PythonReaderOpener_openOnce0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonReaderOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonReaderOpener_get__self(t_PythonReaderOpener *self, void *data);
      static PyGetSetDef t_PythonReaderOpener__fields_[] = {
        DECLARE_GET_FIELD(t_PythonReaderOpener, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonReaderOpener__methods_[] = {
        DECLARE_METHOD(t_PythonReaderOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonReaderOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonReaderOpener, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonReaderOpener, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonReaderOpener)[] = {
        { Py_tp_methods, t_PythonReaderOpener__methods_ },
        { Py_tp_init, (void *) t_PythonReaderOpener_init_ },
        { Py_tp_getset, t_PythonReaderOpener__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonReaderOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonReaderOpener, t_PythonReaderOpener, PythonReaderOpener);

      void t_PythonReaderOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonReaderOpener), &PY_TYPE_DEF(PythonReaderOpener), module, "PythonReaderOpener", 1);
      }

      void t_PythonReaderOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonReaderOpener), "class_", make_descriptor(PythonReaderOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonReaderOpener), "wrapfn_", make_descriptor(t_PythonReaderOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonReaderOpener), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonReaderOpener::initializeClass);
        JNINativeMethod methods[] = {
          { "openOnce", "()Ljava/io/Reader;", (void *) t_PythonReaderOpener_openOnce0 },
          { "pythonDecRef", "()V", (void *) t_PythonReaderOpener_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonReaderOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonReaderOpener::initializeClass, 1)))
          return NULL;
        return t_PythonReaderOpener::wrap_Object(PythonReaderOpener(((t_PythonReaderOpener *) arg)->object.this$));
      }
      static PyObject *t_PythonReaderOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonReaderOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonReaderOpener_init_(t_PythonReaderOpener *self, PyObject *args, PyObject *kwds)
      {
        PythonReaderOpener object((jobject) NULL);

        INT_CALL(object = PythonReaderOpener());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonReaderOpener_finalize(t_PythonReaderOpener *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonReaderOpener_pythonExtension(t_PythonReaderOpener *self, PyObject *args)
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

      static jobject JNICALL t_PythonReaderOpener_openOnce0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonReaderOpener::mids$[PythonReaderOpener::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::io::Reader value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "openOnce", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::io::Reader::initializeClass, &value))
        {
          throwTypeError("openOnce", result);
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

      static void JNICALL t_PythonReaderOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonReaderOpener::mids$[PythonReaderOpener::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonReaderOpener::mids$[PythonReaderOpener::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonReaderOpener_get__self(t_PythonReaderOpener *self, void *data)
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
#include "org/hipparchus/ode/events/FieldEventSlopeFilter.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldEventSlopeFilter::class$ = NULL;
        jmethodID *FieldEventSlopeFilter::mids$ = NULL;
        bool FieldEventSlopeFilter::live$ = false;

        jclass FieldEventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldEventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8edc6a8bb7ed5c55] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/events/FieldODEEventDetector;Lorg/hipparchus/ode/events/FilterType;)V");
            mids$[mid_g_2fe24792561bd145] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_ef99357700ee5799] = env->getMethodID(cls, "getDetector", "()Lorg/hipparchus/ode/events/FieldODEEventDetector;");
            mids$[mid_init_81b5dd1fb920fdc1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_create_e6c26a872f3eba32] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/FieldAdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;Lorg/hipparchus/ode/events/FieldODEEventHandler;)Lorg/hipparchus/ode/events/FieldEventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventSlopeFilter::FieldEventSlopeFilter(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::events::FieldODEEventDetector & a1, const ::org::hipparchus::ode::events::FilterType & a2) : ::org::hipparchus::ode::events::AbstractFieldODEDetector(env->newObject(initializeClass, &mids$, mid_init$_8edc6a8bb7ed5c55, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEventSlopeFilter::g(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2fe24792561bd145], a0.this$));
        }

        ::org::hipparchus::ode::events::FieldODEEventDetector FieldEventSlopeFilter::getDetector() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_ef99357700ee5799]));
        }

        void FieldEventSlopeFilter::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
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
      namespace events {
        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args);
        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self);
        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data);
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data);
        static PyGetSetDef t_FieldEventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_FieldEventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventSlopeFilter)[] = {
          { Py_tp_methods, t_FieldEventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_FieldEventSlopeFilter_init_ },
          { Py_tp_getset, t_FieldEventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::events::AbstractFieldODEDetector),
          NULL
        };

        DEFINE_TYPE(FieldEventSlopeFilter, t_FieldEventSlopeFilter, FieldEventSlopeFilter);
        PyObject *t_FieldEventSlopeFilter::wrap_Object(const FieldEventSlopeFilter& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldEventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldEventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventSlopeFilter), &PY_TYPE_DEF(FieldEventSlopeFilter), module, "FieldEventSlopeFilter", 0);
        }

        void t_FieldEventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "class_", make_descriptor(FieldEventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "wrapfn_", make_descriptor(t_FieldEventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_FieldEventSlopeFilter::wrap_Object(FieldEventSlopeFilter(((t_FieldEventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldODEEventDetector a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::events::FilterType a2((jobject) NULL);
          PyTypeObject **p2;
          FieldEventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, ::org::hipparchus::ode::events::FilterType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_, &a2, &p2, ::org::hipparchus::ode::events::t_FilterType::parameters_))
          {
            INT_CALL(object = FieldEventSlopeFilter(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(result);
        }

        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/ByteArrayEncodedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *ByteArrayEncodedMessage::class$ = NULL;
          jmethodID *ByteArrayEncodedMessage::mids$ = NULL;
          bool ByteArrayEncodedMessage::live$ = false;

          jclass ByteArrayEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/ByteArrayEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_20012b3010a39c05] = env->getMethodID(cls, "<init>", "([B)V");
              mids$[mid_start_0fa09c18fee449d5] = env->getMethodID(cls, "start", "()V");
              mids$[mid_fetchByte_570ce0828f81a2c1] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ByteArrayEncodedMessage::ByteArrayEncodedMessage(const JArray< jbyte > & a0) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_20012b3010a39c05, a0.this$)) {}

          void ByteArrayEncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_0fa09c18fee449d5]);
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
        namespace parser {
          static PyObject *t_ByteArrayEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ByteArrayEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ByteArrayEncodedMessage_init_(t_ByteArrayEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ByteArrayEncodedMessage_start(t_ByteArrayEncodedMessage *self, PyObject *args);

          static PyMethodDef t_ByteArrayEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_ByteArrayEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ByteArrayEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ByteArrayEncodedMessage, start, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ByteArrayEncodedMessage)[] = {
            { Py_tp_methods, t_ByteArrayEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_ByteArrayEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ByteArrayEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(ByteArrayEncodedMessage, t_ByteArrayEncodedMessage, ByteArrayEncodedMessage);

          void t_ByteArrayEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(ByteArrayEncodedMessage), &PY_TYPE_DEF(ByteArrayEncodedMessage), module, "ByteArrayEncodedMessage", 0);
          }

          void t_ByteArrayEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ByteArrayEncodedMessage), "class_", make_descriptor(ByteArrayEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ByteArrayEncodedMessage), "wrapfn_", make_descriptor(t_ByteArrayEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ByteArrayEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ByteArrayEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ByteArrayEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_ByteArrayEncodedMessage::wrap_Object(ByteArrayEncodedMessage(((t_ByteArrayEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_ByteArrayEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ByteArrayEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ByteArrayEncodedMessage_init_(t_ByteArrayEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            JArray< jbyte > a0((jobject) NULL);
            ByteArrayEncodedMessage object((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              INT_CALL(object = ByteArrayEncodedMessage(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ByteArrayEncodedMessage_start(t_ByteArrayEncodedMessage *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.start());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(ByteArrayEncodedMessage), (PyObject *) self, "start", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/complex/ComplexField.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *Complex::class$ = NULL;
      jmethodID *Complex::mids$ = NULL;
      bool Complex::live$ = false;
      Complex *Complex::I = NULL;
      Complex *Complex::INF = NULL;
      Complex *Complex::MINUS_I = NULL;
      Complex *Complex::MINUS_ONE = NULL;
      Complex *Complex::NaN = NULL;
      Complex *Complex::ONE = NULL;
      Complex *Complex::PI = NULL;
      Complex *Complex::ZERO = NULL;

      jclass Complex::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/Complex");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_abs_a6784e0b89dedf02] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_acos_a6784e0b89dedf02] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_acosh_a6784e0b89dedf02] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_add_db05c4121ab4cf9b] = env->getMethodID(cls, "add", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_add_f404cec7be8f51e5] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_asin_a6784e0b89dedf02] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_asinh_a6784e0b89dedf02] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_atan_a6784e0b89dedf02] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_atan2_db05c4121ab4cf9b] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_atanh_a6784e0b89dedf02] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_cbrt_a6784e0b89dedf02] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_ceil_a6784e0b89dedf02] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_compareTo_fae750cc0e19576c] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/complex/Complex;)I");
          mids$[mid_conjugate_a6784e0b89dedf02] = env->getMethodID(cls, "conjugate", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_copySign_db05c4121ab4cf9b] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_copySign_f404cec7be8f51e5] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_cos_a6784e0b89dedf02] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_cosh_a6784e0b89dedf02] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_divide_db05c4121ab4cf9b] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_divide_f404cec7be8f51e5] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_equals_18cffd5529c0b318] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Z");
          mids$[mid_equals_1977686a9a85c063] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;D)Z");
          mids$[mid_equals_ce480e84fb1bfdfe] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;I)Z");
          mids$[mid_equalsWithRelativeTolerance_1977686a9a85c063] = env->getStaticMethodID(cls, "equalsWithRelativeTolerance", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;D)Z");
          mids$[mid_exp_a6784e0b89dedf02] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_expm1_a6784e0b89dedf02] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_floor_a6784e0b89dedf02] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getArgument_dff5885c2c873297] = env->getMethodID(cls, "getArgument", "()D");
          mids$[mid_getField_f304aeb797b96d24] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/complex/ComplexField;");
          mids$[mid_getImaginary_dff5885c2c873297] = env->getMethodID(cls, "getImaginary", "()D");
          mids$[mid_getImaginaryPart_dff5885c2c873297] = env->getMethodID(cls, "getImaginaryPart", "()D");
          mids$[mid_getPi_a6784e0b89dedf02] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getRealPart_dff5885c2c873297] = env->getMethodID(cls, "getRealPart", "()D");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_db05c4121ab4cf9b] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isMathematicalInteger_b108b35ef48e27bd] = env->getMethodID(cls, "isMathematicalInteger", "()Z");
          mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isReal_b108b35ef48e27bd] = env->getMethodID(cls, "isReal", "()Z");
          mids$[mid_isZero_b108b35ef48e27bd] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_linearCombination_113b783bb5f6aa6a] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_768c966419db50f1] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_e4b62d9a92e5b076] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_3284425167f1af30] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_9a02c530712f3724] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_b8e2a7ca27846946] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_734aa9c379e40267] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_d32979eadaaef3e4] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_log_a6784e0b89dedf02] = env->getMethodID(cls, "log", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_log10_a6784e0b89dedf02] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_log1p_a6784e0b89dedf02] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiply_db05c4121ab4cf9b] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiply_f404cec7be8f51e5] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiply_7ff716ce003a9897] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiplyMinusI_a6784e0b89dedf02] = env->getMethodID(cls, "multiplyMinusI", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiplyPlusI_a6784e0b89dedf02] = env->getMethodID(cls, "multiplyPlusI", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_negate_a6784e0b89dedf02] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_newInstance_f404cec7be8f51e5] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_norm_dff5885c2c873297] = env->getMethodID(cls, "norm", "()D");
          mids$[mid_nthRoot_9c3e1c79a080a476] = env->getMethodID(cls, "nthRoot", "(I)Ljava/util/List;");
          mids$[mid_pow_db05c4121ab4cf9b] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_pow_f404cec7be8f51e5] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_pow_7ff716ce003a9897] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_reciprocal_a6784e0b89dedf02] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_remainder_db05c4121ab4cf9b] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_remainder_f404cec7be8f51e5] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_rint_a6784e0b89dedf02] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_rootN_7ff716ce003a9897] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_scalb_7ff716ce003a9897] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_sign_a6784e0b89dedf02] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sin_a6784e0b89dedf02] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_a6784e0b89dedf02] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_a6784e0b89dedf02] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sqrt1z_a6784e0b89dedf02] = env->getMethodID(cls, "sqrt1z", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_subtract_db05c4121ab4cf9b] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_subtract_f404cec7be8f51e5] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_tan_a6784e0b89dedf02] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_tanh_a6784e0b89dedf02] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_toDegrees_a6784e0b89dedf02] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_toRadians_a6784e0b89dedf02] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_a6784e0b89dedf02] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_valueOf_f404cec7be8f51e5] = env->getStaticMethodID(cls, "valueOf", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_valueOf_b9232ea66d045a31] = env->getStaticMethodID(cls, "valueOf", "(DD)Lorg/hipparchus/complex/Complex;");
          mids$[mid_createComplex_b9232ea66d045a31] = env->getMethodID(cls, "createComplex", "(DD)Lorg/hipparchus/complex/Complex;");
          mids$[mid_readResolve_4d26fd885228c716] = env->getMethodID(cls, "readResolve", "()Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          I = new Complex(env->getStaticObjectField(cls, "I", "Lorg/hipparchus/complex/Complex;"));
          INF = new Complex(env->getStaticObjectField(cls, "INF", "Lorg/hipparchus/complex/Complex;"));
          MINUS_I = new Complex(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/complex/Complex;"));
          MINUS_ONE = new Complex(env->getStaticObjectField(cls, "MINUS_ONE", "Lorg/hipparchus/complex/Complex;"));
          NaN = new Complex(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/complex/Complex;"));
          ONE = new Complex(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/complex/Complex;"));
          PI = new Complex(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/complex/Complex;"));
          ZERO = new Complex(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/complex/Complex;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Complex::Complex(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

      Complex::Complex(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

      Complex Complex::abs() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_abs_a6784e0b89dedf02]));
      }

      Complex Complex::acos() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_acos_a6784e0b89dedf02]));
      }

      Complex Complex::acosh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_acosh_a6784e0b89dedf02]));
      }

      Complex Complex::add(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_add_db05c4121ab4cf9b], a0.this$));
      }

      Complex Complex::add(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_add_f404cec7be8f51e5], a0));
      }

      Complex Complex::asin() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_asin_a6784e0b89dedf02]));
      }

      Complex Complex::asinh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_asinh_a6784e0b89dedf02]));
      }

      Complex Complex::atan() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_atan_a6784e0b89dedf02]));
      }

      Complex Complex::atan2(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_atan2_db05c4121ab4cf9b], a0.this$));
      }

      Complex Complex::atanh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_atanh_a6784e0b89dedf02]));
      }

      Complex Complex::cbrt() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_cbrt_a6784e0b89dedf02]));
      }

      Complex Complex::ceil() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_ceil_a6784e0b89dedf02]));
      }

      jint Complex::compareTo(const Complex & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_fae750cc0e19576c], a0.this$);
      }

      Complex Complex::conjugate() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_conjugate_a6784e0b89dedf02]));
      }

      Complex Complex::copySign(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_copySign_db05c4121ab4cf9b], a0.this$));
      }

      Complex Complex::copySign(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_copySign_f404cec7be8f51e5], a0));
      }

      Complex Complex::cos() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_cos_a6784e0b89dedf02]));
      }

      Complex Complex::cosh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_cosh_a6784e0b89dedf02]));
      }

      Complex Complex::divide(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_divide_db05c4121ab4cf9b], a0.this$));
      }

      Complex Complex::divide(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_divide_f404cec7be8f51e5], a0));
      }

      jboolean Complex::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      jboolean Complex::equals(const Complex & a0, const Complex & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_18cffd5529c0b318], a0.this$, a1.this$);
      }

      jboolean Complex::equals(const Complex & a0, const Complex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_1977686a9a85c063], a0.this$, a1.this$, a2);
      }

      jboolean Complex::equals(const Complex & a0, const Complex & a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_ce480e84fb1bfdfe], a0.this$, a1.this$, a2);
      }

      jboolean Complex::equalsWithRelativeTolerance(const Complex & a0, const Complex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsWithRelativeTolerance_1977686a9a85c063], a0.this$, a1.this$, a2);
      }

      Complex Complex::exp() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_exp_a6784e0b89dedf02]));
      }

      Complex Complex::expm1() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_expm1_a6784e0b89dedf02]));
      }

      Complex Complex::floor() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_floor_a6784e0b89dedf02]));
      }

      jdouble Complex::getArgument() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getArgument_dff5885c2c873297]);
      }

      ::org::hipparchus::complex::ComplexField Complex::getField() const
      {
        return ::org::hipparchus::complex::ComplexField(env->callObjectMethod(this$, mids$[mid_getField_f304aeb797b96d24]));
      }

      jdouble Complex::getImaginary() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginary_dff5885c2c873297]);
      }

      jdouble Complex::getImaginaryPart() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginaryPart_dff5885c2c873297]);
      }

      Complex Complex::getPi() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_getPi_a6784e0b89dedf02]));
      }

      jdouble Complex::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
      }

      jdouble Complex::getRealPart() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRealPart_dff5885c2c873297]);
      }

      jint Complex::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      Complex Complex::hypot(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_hypot_db05c4121ab4cf9b], a0.this$));
      }

      jboolean Complex::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
      }

      jboolean Complex::isMathematicalInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isMathematicalInteger_b108b35ef48e27bd]);
      }

      jboolean Complex::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
      }

      jboolean Complex::isReal() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isReal_b108b35ef48e27bd]);
      }

      jboolean Complex::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_b108b35ef48e27bd]);
      }

      Complex Complex::linearCombination(const JArray< jdouble > & a0, const JArray< Complex > & a1) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_113b783bb5f6aa6a], a0.this$, a1.this$));
      }

      Complex Complex::linearCombination(const JArray< Complex > & a0, const JArray< Complex > & a1) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_768c966419db50f1], a0.this$, a1.this$));
      }

      Complex Complex::linearCombination(const Complex & a0, const Complex & a1, const Complex & a2, const Complex & a3) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_e4b62d9a92e5b076], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Complex Complex::linearCombination(jdouble a0, const Complex & a1, jdouble a2, const Complex & a3) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_3284425167f1af30], a0, a1.this$, a2, a3.this$));
      }

      Complex Complex::linearCombination(const Complex & a0, const Complex & a1, const Complex & a2, const Complex & a3, const Complex & a4, const Complex & a5) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_9a02c530712f3724], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Complex Complex::linearCombination(jdouble a0, const Complex & a1, jdouble a2, const Complex & a3, jdouble a4, const Complex & a5) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_b8e2a7ca27846946], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Complex Complex::linearCombination(const Complex & a0, const Complex & a1, const Complex & a2, const Complex & a3, const Complex & a4, const Complex & a5, const Complex & a6, const Complex & a7) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_734aa9c379e40267], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Complex Complex::linearCombination(jdouble a0, const Complex & a1, jdouble a2, const Complex & a3, jdouble a4, const Complex & a5, jdouble a6, const Complex & a7) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_d32979eadaaef3e4], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Complex Complex::log() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_log_a6784e0b89dedf02]));
      }

      Complex Complex::log10() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_log10_a6784e0b89dedf02]));
      }

      Complex Complex::log1p() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_log1p_a6784e0b89dedf02]));
      }

      Complex Complex::multiply(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiply_db05c4121ab4cf9b], a0.this$));
      }

      Complex Complex::multiply(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiply_f404cec7be8f51e5], a0));
      }

      Complex Complex::multiply(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiply_7ff716ce003a9897], a0));
      }

      Complex Complex::multiplyMinusI() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiplyMinusI_a6784e0b89dedf02]));
      }

      Complex Complex::multiplyPlusI() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiplyPlusI_a6784e0b89dedf02]));
      }

      Complex Complex::negate() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_negate_a6784e0b89dedf02]));
      }

      Complex Complex::newInstance(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_newInstance_f404cec7be8f51e5], a0));
      }

      jdouble Complex::norm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_norm_dff5885c2c873297]);
      }

      ::java::util::List Complex::nthRoot(jint a0) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_nthRoot_9c3e1c79a080a476], a0));
      }

      Complex Complex::pow(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_pow_db05c4121ab4cf9b], a0.this$));
      }

      Complex Complex::pow(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_pow_f404cec7be8f51e5], a0));
      }

      Complex Complex::pow(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_pow_7ff716ce003a9897], a0));
      }

      Complex Complex::reciprocal() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_reciprocal_a6784e0b89dedf02]));
      }

      Complex Complex::remainder(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_remainder_db05c4121ab4cf9b], a0.this$));
      }

      Complex Complex::remainder(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_remainder_f404cec7be8f51e5], a0));
      }

      Complex Complex::rint() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_rint_a6784e0b89dedf02]));
      }

      Complex Complex::rootN(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_rootN_7ff716ce003a9897], a0));
      }

      Complex Complex::scalb(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_scalb_7ff716ce003a9897], a0));
      }

      Complex Complex::sign() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sign_a6784e0b89dedf02]));
      }

      Complex Complex::sin() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sin_a6784e0b89dedf02]));
      }

      ::org::hipparchus::util::FieldSinCos Complex::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
      }

      Complex Complex::sinh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sinh_a6784e0b89dedf02]));
      }

      ::org::hipparchus::util::FieldSinhCosh Complex::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
      }

      Complex Complex::sqrt() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sqrt_a6784e0b89dedf02]));
      }

      Complex Complex::sqrt1z() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sqrt1z_a6784e0b89dedf02]));
      }

      Complex Complex::subtract(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_subtract_db05c4121ab4cf9b], a0.this$));
      }

      Complex Complex::subtract(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_subtract_f404cec7be8f51e5], a0));
      }

      Complex Complex::tan() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_tan_a6784e0b89dedf02]));
      }

      Complex Complex::tanh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_tanh_a6784e0b89dedf02]));
      }

      Complex Complex::toDegrees() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_toDegrees_a6784e0b89dedf02]));
      }

      Complex Complex::toRadians() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_toRadians_a6784e0b89dedf02]));
      }

      ::java::lang::String Complex::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      Complex Complex::ulp() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_ulp_a6784e0b89dedf02]));
      }

      Complex Complex::valueOf(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Complex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f404cec7be8f51e5], a0));
      }

      Complex Complex::valueOf(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Complex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b9232ea66d045a31], a0, a1));
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
      static PyObject *t_Complex_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Complex_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Complex_init_(t_Complex *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Complex_abs(t_Complex *self);
      static PyObject *t_Complex_acos(t_Complex *self);
      static PyObject *t_Complex_acosh(t_Complex *self);
      static PyObject *t_Complex_add(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_asin(t_Complex *self);
      static PyObject *t_Complex_asinh(t_Complex *self);
      static PyObject *t_Complex_atan(t_Complex *self);
      static PyObject *t_Complex_atan2(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_atanh(t_Complex *self);
      static PyObject *t_Complex_cbrt(t_Complex *self);
      static PyObject *t_Complex_ceil(t_Complex *self);
      static PyObject *t_Complex_compareTo(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_conjugate(t_Complex *self);
      static PyObject *t_Complex_copySign(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_cos(t_Complex *self);
      static PyObject *t_Complex_cosh(t_Complex *self);
      static PyObject *t_Complex_divide(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_equals(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args);
      static PyObject *t_Complex_equals_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Complex_exp(t_Complex *self);
      static PyObject *t_Complex_expm1(t_Complex *self);
      static PyObject *t_Complex_floor(t_Complex *self);
      static PyObject *t_Complex_getArgument(t_Complex *self);
      static PyObject *t_Complex_getField(t_Complex *self);
      static PyObject *t_Complex_getImaginary(t_Complex *self);
      static PyObject *t_Complex_getImaginaryPart(t_Complex *self);
      static PyObject *t_Complex_getPi(t_Complex *self);
      static PyObject *t_Complex_getReal(t_Complex *self);
      static PyObject *t_Complex_getRealPart(t_Complex *self);
      static PyObject *t_Complex_hashCode(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_hypot(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_isInfinite(t_Complex *self);
      static PyObject *t_Complex_isMathematicalInteger(t_Complex *self);
      static PyObject *t_Complex_isNaN(t_Complex *self);
      static PyObject *t_Complex_isReal(t_Complex *self);
      static PyObject *t_Complex_isZero(t_Complex *self);
      static PyObject *t_Complex_linearCombination(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_log(t_Complex *self);
      static PyObject *t_Complex_log10(t_Complex *self);
      static PyObject *t_Complex_log1p(t_Complex *self);
      static PyObject *t_Complex_multiply(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_multiplyMinusI(t_Complex *self);
      static PyObject *t_Complex_multiplyPlusI(t_Complex *self);
      static PyObject *t_Complex_negate(t_Complex *self);
      static PyObject *t_Complex_newInstance(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_norm(t_Complex *self);
      static PyObject *t_Complex_nthRoot(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_pow(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_reciprocal(t_Complex *self);
      static PyObject *t_Complex_remainder(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_rint(t_Complex *self);
      static PyObject *t_Complex_rootN(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_scalb(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_sign(t_Complex *self);
      static PyObject *t_Complex_sin(t_Complex *self);
      static PyObject *t_Complex_sinCos(t_Complex *self);
      static PyObject *t_Complex_sinh(t_Complex *self);
      static PyObject *t_Complex_sinhCosh(t_Complex *self);
      static PyObject *t_Complex_sqrt(t_Complex *self);
      static PyObject *t_Complex_sqrt1z(t_Complex *self);
      static PyObject *t_Complex_subtract(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_tan(t_Complex *self);
      static PyObject *t_Complex_tanh(t_Complex *self);
      static PyObject *t_Complex_toDegrees(t_Complex *self);
      static PyObject *t_Complex_toRadians(t_Complex *self);
      static PyObject *t_Complex_toString(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_ulp(t_Complex *self);
      static PyObject *t_Complex_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Complex_get__argument(t_Complex *self, void *data);
      static PyObject *t_Complex_get__field(t_Complex *self, void *data);
      static PyObject *t_Complex_get__imaginary(t_Complex *self, void *data);
      static PyObject *t_Complex_get__imaginaryPart(t_Complex *self, void *data);
      static PyObject *t_Complex_get__infinite(t_Complex *self, void *data);
      static PyObject *t_Complex_get__mathematicalInteger(t_Complex *self, void *data);
      static PyObject *t_Complex_get__naN(t_Complex *self, void *data);
      static PyObject *t_Complex_get__pi(t_Complex *self, void *data);
      static PyObject *t_Complex_get__real(t_Complex *self, void *data);
      static PyObject *t_Complex_get__realPart(t_Complex *self, void *data);
      static PyObject *t_Complex_get__zero(t_Complex *self, void *data);
      static PyGetSetDef t_Complex__fields_[] = {
        DECLARE_GET_FIELD(t_Complex, argument),
        DECLARE_GET_FIELD(t_Complex, field),
        DECLARE_GET_FIELD(t_Complex, imaginary),
        DECLARE_GET_FIELD(t_Complex, imaginaryPart),
        DECLARE_GET_FIELD(t_Complex, infinite),
        DECLARE_GET_FIELD(t_Complex, mathematicalInteger),
        DECLARE_GET_FIELD(t_Complex, naN),
        DECLARE_GET_FIELD(t_Complex, pi),
        DECLARE_GET_FIELD(t_Complex, real),
        DECLARE_GET_FIELD(t_Complex, realPart),
        DECLARE_GET_FIELD(t_Complex, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Complex__methods_[] = {
        DECLARE_METHOD(t_Complex, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Complex, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Complex, abs, METH_NOARGS),
        DECLARE_METHOD(t_Complex, acos, METH_NOARGS),
        DECLARE_METHOD(t_Complex, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, add, METH_VARARGS),
        DECLARE_METHOD(t_Complex, asin, METH_NOARGS),
        DECLARE_METHOD(t_Complex, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, atan, METH_NOARGS),
        DECLARE_METHOD(t_Complex, atan2, METH_O),
        DECLARE_METHOD(t_Complex, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Complex, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Complex, compareTo, METH_O),
        DECLARE_METHOD(t_Complex, conjugate, METH_NOARGS),
        DECLARE_METHOD(t_Complex, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Complex, cos, METH_NOARGS),
        DECLARE_METHOD(t_Complex, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, divide, METH_VARARGS),
        DECLARE_METHOD(t_Complex, equals, METH_VARARGS),
        DECLARE_METHOD(t_Complex, equalsWithRelativeTolerance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Complex, equals_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Complex, exp, METH_NOARGS),
        DECLARE_METHOD(t_Complex, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Complex, floor, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getArgument, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getField, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getImaginary, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getImaginaryPart, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getRealPart, METH_NOARGS),
        DECLARE_METHOD(t_Complex, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Complex, hypot, METH_O),
        DECLARE_METHOD(t_Complex, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isMathematicalInteger, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isReal, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isZero, METH_NOARGS),
        DECLARE_METHOD(t_Complex, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Complex, log, METH_NOARGS),
        DECLARE_METHOD(t_Complex, log10, METH_NOARGS),
        DECLARE_METHOD(t_Complex, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Complex, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Complex, multiplyMinusI, METH_NOARGS),
        DECLARE_METHOD(t_Complex, multiplyPlusI, METH_NOARGS),
        DECLARE_METHOD(t_Complex, negate, METH_NOARGS),
        DECLARE_METHOD(t_Complex, newInstance, METH_O),
        DECLARE_METHOD(t_Complex, norm, METH_NOARGS),
        DECLARE_METHOD(t_Complex, nthRoot, METH_O),
        DECLARE_METHOD(t_Complex, pow, METH_VARARGS),
        DECLARE_METHOD(t_Complex, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Complex, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Complex, rint, METH_NOARGS),
        DECLARE_METHOD(t_Complex, rootN, METH_O),
        DECLARE_METHOD(t_Complex, scalb, METH_O),
        DECLARE_METHOD(t_Complex, sign, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sin, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sqrt1z, METH_NOARGS),
        DECLARE_METHOD(t_Complex, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Complex, tan, METH_NOARGS),
        DECLARE_METHOD(t_Complex, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Complex, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Complex, toString, METH_VARARGS),
        DECLARE_METHOD(t_Complex, ulp, METH_NOARGS),
        DECLARE_METHOD(t_Complex, valueOf, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Complex)[] = {
        { Py_tp_methods, t_Complex__methods_ },
        { Py_tp_init, (void *) t_Complex_init_ },
        { Py_tp_getset, t_Complex__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Complex)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Complex, t_Complex, Complex);

      void t_Complex::install(PyObject *module)
      {
        installType(&PY_TYPE(Complex), &PY_TYPE_DEF(Complex), module, "Complex", 0);
      }

      void t_Complex::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "class_", make_descriptor(Complex::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "wrapfn_", make_descriptor(t_Complex::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "boxfn_", make_descriptor(boxObject));
        env->getClass(Complex::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "I", make_descriptor(t_Complex::wrap_Object(*Complex::I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "INF", make_descriptor(t_Complex::wrap_Object(*Complex::INF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "MINUS_I", make_descriptor(t_Complex::wrap_Object(*Complex::MINUS_I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "MINUS_ONE", make_descriptor(t_Complex::wrap_Object(*Complex::MINUS_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "NaN", make_descriptor(t_Complex::wrap_Object(*Complex::NaN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "ONE", make_descriptor(t_Complex::wrap_Object(*Complex::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "PI", make_descriptor(t_Complex::wrap_Object(*Complex::PI)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "ZERO", make_descriptor(t_Complex::wrap_Object(*Complex::ZERO)));
      }

      static PyObject *t_Complex_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Complex::initializeClass, 1)))
          return NULL;
        return t_Complex::wrap_Object(Complex(((t_Complex *) arg)->object.this$));
      }
      static PyObject *t_Complex_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Complex::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Complex_init_(t_Complex *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            Complex object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = Complex(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            Complex object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = Complex(a0, a1));
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

      static PyObject *t_Complex_abs(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_acos(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_acosh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_add(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Complex_asin(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_asinh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_atan(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_atan2(t_Complex *self, PyObject *arg)
      {
        Complex a0((jobject) NULL);
        Complex result((jobject) NULL);

        if (!parseArg(arg, "k", Complex::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Complex_atanh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_cbrt(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_ceil(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_compareTo(t_Complex *self, PyObject *arg)
      {
        Complex a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", Complex::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_Complex_conjugate(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.conjugate());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_copySign(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Complex_cos(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_cosh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_divide(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Complex_equals(t_Complex *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Complex), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Complex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args)
      {
        Complex a0((jobject) NULL);
        Complex a1((jobject) NULL);
        jdouble a2;
        jboolean result;

        if (!parseArgs(args, "kkD", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Complex::equalsWithRelativeTolerance(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "equalsWithRelativeTolerance", args);
        return NULL;
      }

      static PyObject *t_Complex_equals_(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "kk", Complex::initializeClass, Complex::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "kkD", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            jint a2;
            jboolean result;

            if (!parseArgs(args, "kkI", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equals_", args);
        return NULL;
      }

      static PyObject *t_Complex_exp(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_expm1(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_floor(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_getArgument(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getArgument());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getField(t_Complex *self)
      {
        ::org::hipparchus::complex::ComplexField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::complex::t_ComplexField::wrap_Object(result);
      }

      static PyObject *t_Complex_getImaginary(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getImaginary());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getImaginaryPart(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getImaginaryPart());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getPi(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_getReal(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getRealPart(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRealPart());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_hashCode(t_Complex *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Complex), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Complex_hypot(t_Complex *self, PyObject *arg)
      {
        Complex a0((jobject) NULL);
        Complex result((jobject) NULL);

        if (!parseArg(arg, "k", Complex::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Complex_isInfinite(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isMathematicalInteger(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isNaN(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isReal(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isReal());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isZero(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_linearCombination(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Complex > a1((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Complex::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            JArray< Complex > a0((jobject) NULL);
            JArray< Complex > a1((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Complex::initializeClass, Complex::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            Complex a2((jobject) NULL);
            Complex a3((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex a1((jobject) NULL);
            jdouble a2;
            Complex a3((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            Complex a2((jobject) NULL);
            Complex a3((jobject) NULL);
            Complex a4((jobject) NULL);
            Complex a5((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex a1((jobject) NULL);
            jdouble a2;
            Complex a3((jobject) NULL);
            jdouble a4;
            Complex a5((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            Complex a2((jobject) NULL);
            Complex a3((jobject) NULL);
            Complex a4((jobject) NULL);
            Complex a5((jobject) NULL);
            Complex a6((jobject) NULL);
            Complex a7((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex a1((jobject) NULL);
            jdouble a2;
            Complex a3((jobject) NULL);
            jdouble a4;
            Complex a5((jobject) NULL);
            jdouble a6;
            Complex a7((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Complex_log(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_log10(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_log1p(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_multiply(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jint a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Complex_multiplyMinusI(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyMinusI());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_multiplyPlusI(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyPlusI());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_negate(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_newInstance(t_Complex *self, PyObject *arg)
      {
        jdouble a0;
        Complex result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_Complex_norm(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.norm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_nthRoot(t_Complex *self, PyObject *arg)
      {
        jint a0;
        ::java::util::List result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.nthRoot(a0));
          return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        PyErr_SetArgsError((PyObject *) self, "nthRoot", arg);
        return NULL;
      }

      static PyObject *t_Complex_pow(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jint a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Complex_reciprocal(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_remainder(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Complex_rint(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_rootN(t_Complex *self, PyObject *arg)
      {
        jint a0;
        Complex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Complex_scalb(t_Complex *self, PyObject *arg)
      {
        jint a0;
        Complex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Complex_sign(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sin(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sinCos(t_Complex *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_Complex_sinh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sinhCosh(t_Complex *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_Complex_sqrt(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sqrt1z(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt1z());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_subtract(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Complex_tan(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_tanh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_toDegrees(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_toRadians(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_toString(t_Complex *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Complex), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Complex_ulp(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_valueOf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::valueOf(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::valueOf(a0, a1));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "valueOf", args);
        return NULL;
      }

      static PyObject *t_Complex_get__argument(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getArgument());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__field(t_Complex *self, void *data)
      {
        ::org::hipparchus::complex::ComplexField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::complex::t_ComplexField::wrap_Object(value);
      }

      static PyObject *t_Complex_get__imaginary(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getImaginary());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__imaginaryPart(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getImaginaryPart());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__infinite(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Complex_get__mathematicalInteger(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Complex_get__naN(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Complex_get__pi(t_Complex *self, void *data)
      {
        Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Complex::wrap_Object(value);
      }

      static PyObject *t_Complex_get__real(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__realPart(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRealPart());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__zero(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isZero());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/AbstractMeasurementBuilder.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AbstractMeasurementBuilder::class$ = NULL;
          jmethodID *AbstractMeasurementBuilder::mids$ = NULL;
          bool AbstractMeasurementBuilder::live$ = false;

          jclass AbstractMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AbstractMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addModifier_baf3397e6fffc21d] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_getModifiers_2afa36052df4765d] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_f81b672126a6576d] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_a9e71d848b81c8f8] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getEnd_85703d13e302437e] = env->getMethodID(cls, "getEnd", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTheoreticalStandardDeviation_60c7040667a7dc5c] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
              mids$[mid_getBaseWeight_60c7040667a7dc5c] = env->getMethodID(cls, "getBaseWeight", "()[D");
              mids$[mid_getNoise_60c7040667a7dc5c] = env->getMethodID(cls, "getNoise", "()[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractMeasurementBuilder::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addModifier_baf3397e6fffc21d], a0.this$);
          }

          ::java::util::List AbstractMeasurementBuilder::getModifiers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_2afa36052df4765d]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > AbstractMeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_f81b672126a6576d]));
          }

          void AbstractMeasurementBuilder::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_a9e71d848b81c8f8], a0.this$, a1.this$);
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
          static PyObject *t_AbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractMeasurementBuilder_of_(t_AbstractMeasurementBuilder *self, PyObject *args);
          static PyObject *t_AbstractMeasurementBuilder_addModifier(t_AbstractMeasurementBuilder *self, PyObject *arg);
          static PyObject *t_AbstractMeasurementBuilder_getModifiers(t_AbstractMeasurementBuilder *self);
          static PyObject *t_AbstractMeasurementBuilder_getSatellites(t_AbstractMeasurementBuilder *self);
          static PyObject *t_AbstractMeasurementBuilder_init(t_AbstractMeasurementBuilder *self, PyObject *args);
          static PyObject *t_AbstractMeasurementBuilder_get__modifiers(t_AbstractMeasurementBuilder *self, void *data);
          static PyObject *t_AbstractMeasurementBuilder_get__satellites(t_AbstractMeasurementBuilder *self, void *data);
          static PyObject *t_AbstractMeasurementBuilder_get__parameters_(t_AbstractMeasurementBuilder *self, void *data);
          static PyGetSetDef t_AbstractMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractMeasurementBuilder, modifiers),
            DECLARE_GET_FIELD(t_AbstractMeasurementBuilder, satellites),
            DECLARE_GET_FIELD(t_AbstractMeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_AbstractMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, addModifier, METH_O),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, getModifiers, METH_NOARGS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractMeasurementBuilder)[] = {
            { Py_tp_methods, t_AbstractMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractMeasurementBuilder, t_AbstractMeasurementBuilder, AbstractMeasurementBuilder);
          PyObject *t_AbstractMeasurementBuilder::wrap_Object(const AbstractMeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractMeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractMeasurementBuilder *self = (t_AbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractMeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractMeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractMeasurementBuilder *self = (t_AbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractMeasurementBuilder), &PY_TYPE_DEF(AbstractMeasurementBuilder), module, "AbstractMeasurementBuilder", 0);
          }

          void t_AbstractMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurementBuilder), "class_", make_descriptor(AbstractMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurementBuilder), "wrapfn_", make_descriptor(t_AbstractMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_AbstractMeasurementBuilder::wrap_Object(AbstractMeasurementBuilder(((t_AbstractMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_AbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractMeasurementBuilder_of_(t_AbstractMeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractMeasurementBuilder_addModifier(t_AbstractMeasurementBuilder *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
            {
              OBJ_CALL(self->object.addModifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
            return NULL;
          }

          static PyObject *t_AbstractMeasurementBuilder_getModifiers(t_AbstractMeasurementBuilder *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_AbstractMeasurementBuilder_getSatellites(t_AbstractMeasurementBuilder *self)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_AbstractMeasurementBuilder_init(t_AbstractMeasurementBuilder *self, PyObject *args)
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
          static PyObject *t_AbstractMeasurementBuilder_get__parameters_(t_AbstractMeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractMeasurementBuilder_get__modifiers(t_AbstractMeasurementBuilder *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_AbstractMeasurementBuilder_get__satellites(t_AbstractMeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/Duration.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *Duration::class$ = NULL;
          jmethodID *Duration::mids$ = NULL;
          bool Duration::live$ = false;

          jclass Duration::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/Duration");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3c57e287341c9288] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_getAdditionalState_cb44069ef445f941] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_yields_680f8463a473c3cb] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Duration::Duration(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c57e287341c9288, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > Duration::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_cb44069ef445f941], a0.this$));
          }

          ::java::lang::String Duration::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          jboolean Duration::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_yields_680f8463a473c3cb], a0.this$);
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
      namespace maneuvers {
        namespace jacobians {
          static PyObject *t_Duration_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Duration_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Duration_init_(t_Duration *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Duration_getAdditionalState(t_Duration *self, PyObject *arg);
          static PyObject *t_Duration_getName(t_Duration *self);
          static PyObject *t_Duration_yields(t_Duration *self, PyObject *arg);
          static PyObject *t_Duration_get__name(t_Duration *self, void *data);
          static PyGetSetDef t_Duration__fields_[] = {
            DECLARE_GET_FIELD(t_Duration, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Duration__methods_[] = {
            DECLARE_METHOD(t_Duration, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Duration, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Duration, getAdditionalState, METH_O),
            DECLARE_METHOD(t_Duration, getName, METH_NOARGS),
            DECLARE_METHOD(t_Duration, yields, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Duration)[] = {
            { Py_tp_methods, t_Duration__methods_ },
            { Py_tp_init, (void *) t_Duration_init_ },
            { Py_tp_getset, t_Duration__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Duration)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Duration, t_Duration, Duration);

          void t_Duration::install(PyObject *module)
          {
            installType(&PY_TYPE(Duration), &PY_TYPE_DEF(Duration), module, "Duration", 0);
          }

          void t_Duration::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Duration), "class_", make_descriptor(Duration::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Duration), "wrapfn_", make_descriptor(t_Duration::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Duration), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Duration_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Duration::initializeClass, 1)))
              return NULL;
            return t_Duration::wrap_Object(Duration(((t_Duration *) arg)->object.this$));
          }
          static PyObject *t_Duration_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Duration::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Duration_init_(t_Duration *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            Duration object((jobject) NULL);

            if (!parseArgs(args, "sss", &a0, &a1, &a2))
            {
              INT_CALL(object = Duration(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Duration_getAdditionalState(t_Duration *self, PyObject *arg)
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

          static PyObject *t_Duration_getName(t_Duration *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_Duration_yields(t_Duration *self, PyObject *arg)
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

          static PyObject *t_Duration_get__name(t_Duration *self, void *data)
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
#include "org/hipparchus/Field.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {

    ::java::lang::Class *Field::class$ = NULL;
    jmethodID *Field::mids$ = NULL;
    bool Field::live$ = false;

    jclass Field::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("org/hipparchus/Field");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getOne_99097cb60cf2d774] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
        mids$[mid_getZero_99097cb60cf2d774] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/FieldElement;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::org::hipparchus::FieldElement Field::getOne() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getOne_99097cb60cf2d774]));
    }

    ::java::lang::Class Field::getRuntimeClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
    }

    ::org::hipparchus::FieldElement Field::getZero() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getZero_99097cb60cf2d774]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    static PyObject *t_Field_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Field_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Field_of_(t_Field *self, PyObject *args);
    static PyObject *t_Field_getOne(t_Field *self);
    static PyObject *t_Field_getRuntimeClass(t_Field *self);
    static PyObject *t_Field_getZero(t_Field *self);
    static PyObject *t_Field_get__one(t_Field *self, void *data);
    static PyObject *t_Field_get__runtimeClass(t_Field *self, void *data);
    static PyObject *t_Field_get__zero(t_Field *self, void *data);
    static PyObject *t_Field_get__parameters_(t_Field *self, void *data);
    static PyGetSetDef t_Field__fields_[] = {
      DECLARE_GET_FIELD(t_Field, one),
      DECLARE_GET_FIELD(t_Field, runtimeClass),
      DECLARE_GET_FIELD(t_Field, zero),
      DECLARE_GET_FIELD(t_Field, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Field__methods_[] = {
      DECLARE_METHOD(t_Field, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Field, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Field, of_, METH_VARARGS),
      DECLARE_METHOD(t_Field, getOne, METH_NOARGS),
      DECLARE_METHOD(t_Field, getRuntimeClass, METH_NOARGS),
      DECLARE_METHOD(t_Field, getZero, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Field)[] = {
      { Py_tp_methods, t_Field__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Field__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Field)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Field, t_Field, Field);
    PyObject *t_Field::wrap_Object(const Field& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Field::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Field *self = (t_Field *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Field::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Field::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Field *self = (t_Field *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Field::install(PyObject *module)
    {
      installType(&PY_TYPE(Field), &PY_TYPE_DEF(Field), module, "Field", 0);
    }

    void t_Field::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Field), "class_", make_descriptor(Field::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Field), "wrapfn_", make_descriptor(t_Field::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Field), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Field_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Field::initializeClass, 1)))
        return NULL;
      return t_Field::wrap_Object(Field(((t_Field *) arg)->object.this$));
    }
    static PyObject *t_Field_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Field::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Field_of_(t_Field *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Field_getOne(t_Field *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.getOne());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_Field_getRuntimeClass(t_Field *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getRuntimeClass());
      return ::java::lang::t_Class::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Field_getZero(t_Field *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.getZero());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }
    static PyObject *t_Field_get__parameters_(t_Field *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Field_get__one(t_Field *self, void *data)
    {
      ::org::hipparchus::FieldElement value((jobject) NULL);
      OBJ_CALL(value = self->object.getOne());
      return ::org::hipparchus::t_FieldElement::wrap_Object(value);
    }

    static PyObject *t_Field_get__runtimeClass(t_Field *self, void *data)
    {
      ::java::lang::Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getRuntimeClass());
      return ::java::lang::t_Class::wrap_Object(value);
    }

    static PyObject *t_Field_get__zero(t_Field *self, void *data)
    {
      ::org::hipparchus::FieldElement value((jobject) NULL);
      OBJ_CALL(value = self->object.getZero());
      return ::org::hipparchus::t_FieldElement::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/IRNSSAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *IRNSSAlmanac::class$ = NULL;
            jmethodID *IRNSSAlmanac::mids$ = NULL;
            bool IRNSSAlmanac::live$ = false;

            jclass IRNSSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/IRNSSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_setSqrtA_17db3a65980d3441] = env->getMethodID(cls, "setSqrtA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IRNSSAlmanac::IRNSSAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void IRNSSAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_17db3a65980d3441], a0);
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
            static PyObject *t_IRNSSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IRNSSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_IRNSSAlmanac_init_(t_IRNSSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_IRNSSAlmanac_setSqrtA(t_IRNSSAlmanac *self, PyObject *arg);
            static int t_IRNSSAlmanac_set__sqrtA(t_IRNSSAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_IRNSSAlmanac__fields_[] = {
              DECLARE_SET_FIELD(t_IRNSSAlmanac, sqrtA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_IRNSSAlmanac__methods_[] = {
              DECLARE_METHOD(t_IRNSSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSAlmanac, setSqrtA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IRNSSAlmanac)[] = {
              { Py_tp_methods, t_IRNSSAlmanac__methods_ },
              { Py_tp_init, (void *) t_IRNSSAlmanac_init_ },
              { Py_tp_getset, t_IRNSSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IRNSSAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(IRNSSAlmanac, t_IRNSSAlmanac, IRNSSAlmanac);

            void t_IRNSSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(IRNSSAlmanac), &PY_TYPE_DEF(IRNSSAlmanac), module, "IRNSSAlmanac", 0);
            }

            void t_IRNSSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSAlmanac), "class_", make_descriptor(IRNSSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSAlmanac), "wrapfn_", make_descriptor(t_IRNSSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_IRNSSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IRNSSAlmanac::initializeClass, 1)))
                return NULL;
              return t_IRNSSAlmanac::wrap_Object(IRNSSAlmanac(((t_IRNSSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_IRNSSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IRNSSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_IRNSSAlmanac_init_(t_IRNSSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              IRNSSAlmanac object((jobject) NULL);

              INT_CALL(object = IRNSSAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_IRNSSAlmanac_setSqrtA(t_IRNSSAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static int t_IRNSSAlmanac_set__sqrtA(t_IRNSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
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
#include "org/hipparchus/util/MultidimensionalCounter.h"
#include "java/lang/Iterable.h"
#include "java/lang/Integer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/MultidimensionalCounter$Iterator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MultidimensionalCounter::class$ = NULL;
      jmethodID *MultidimensionalCounter::mids$ = NULL;
      bool MultidimensionalCounter::live$ = false;

      jclass MultidimensionalCounter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MultidimensionalCounter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d147d7ce001e2d45] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_getCount_5741cb0fe93805c9] = env->getMethodID(cls, "getCount", "([I)I");
          mids$[mid_getCounts_10b428b076a044c1] = env->getMethodID(cls, "getCounts", "(I)[I");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getSize_570ce0828f81a2c1] = env->getMethodID(cls, "getSize", "()I");
          mids$[mid_getSizes_d0635cea09dc178c] = env->getMethodID(cls, "getSizes", "()[I");
          mids$[mid_iterator_4e94d3b41fa0685f] = env->getMethodID(cls, "iterator", "()Lorg/hipparchus/util/MultidimensionalCounter$Iterator;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MultidimensionalCounter::MultidimensionalCounter(const JArray< jint > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d147d7ce001e2d45, a0.this$)) {}

      jint MultidimensionalCounter::getCount(const JArray< jint > & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_5741cb0fe93805c9], a0.this$);
      }

      JArray< jint > MultidimensionalCounter::getCounts(jint a0) const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCounts_10b428b076a044c1], a0));
      }

      jint MultidimensionalCounter::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      jint MultidimensionalCounter::getSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getSize_570ce0828f81a2c1]);
      }

      JArray< jint > MultidimensionalCounter::getSizes() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getSizes_d0635cea09dc178c]));
      }

      ::org::hipparchus::util::MultidimensionalCounter$Iterator MultidimensionalCounter::iterator() const
      {
        return ::org::hipparchus::util::MultidimensionalCounter$Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4e94d3b41fa0685f]));
      }

      ::java::lang::String MultidimensionalCounter::toString() const
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
      static PyObject *t_MultidimensionalCounter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultidimensionalCounter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MultidimensionalCounter_init_(t_MultidimensionalCounter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MultidimensionalCounter_getCount(t_MultidimensionalCounter *self, PyObject *arg);
      static PyObject *t_MultidimensionalCounter_getCounts(t_MultidimensionalCounter *self, PyObject *arg);
      static PyObject *t_MultidimensionalCounter_getDimension(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_getSize(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_getSizes(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_iterator(t_MultidimensionalCounter *self);
      static PyObject *t_MultidimensionalCounter_toString(t_MultidimensionalCounter *self, PyObject *args);
      static PyObject *t_MultidimensionalCounter_get__dimension(t_MultidimensionalCounter *self, void *data);
      static PyObject *t_MultidimensionalCounter_get__size(t_MultidimensionalCounter *self, void *data);
      static PyObject *t_MultidimensionalCounter_get__sizes(t_MultidimensionalCounter *self, void *data);
      static PyGetSetDef t_MultidimensionalCounter__fields_[] = {
        DECLARE_GET_FIELD(t_MultidimensionalCounter, dimension),
        DECLARE_GET_FIELD(t_MultidimensionalCounter, size),
        DECLARE_GET_FIELD(t_MultidimensionalCounter, sizes),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultidimensionalCounter__methods_[] = {
        DECLARE_METHOD(t_MultidimensionalCounter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter, getCount, METH_O),
        DECLARE_METHOD(t_MultidimensionalCounter, getCounts, METH_O),
        DECLARE_METHOD(t_MultidimensionalCounter, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, getSize, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, getSizes, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, iterator, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultidimensionalCounter)[] = {
        { Py_tp_methods, t_MultidimensionalCounter__methods_ },
        { Py_tp_init, (void *) t_MultidimensionalCounter_init_ },
        { Py_tp_getset, t_MultidimensionalCounter__fields_ },
        { Py_tp_iter, (void *) ((PyObject *(*)(t_MultidimensionalCounter *)) get_iterator< t_MultidimensionalCounter >) },
        { Py_tp_iternext, (void *) 0 },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultidimensionalCounter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultidimensionalCounter, t_MultidimensionalCounter, MultidimensionalCounter);

      void t_MultidimensionalCounter::install(PyObject *module)
      {
        installType(&PY_TYPE(MultidimensionalCounter), &PY_TYPE_DEF(MultidimensionalCounter), module, "MultidimensionalCounter", 0);
      }

      void t_MultidimensionalCounter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter), "class_", make_descriptor(MultidimensionalCounter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter), "wrapfn_", make_descriptor(t_MultidimensionalCounter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultidimensionalCounter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultidimensionalCounter::initializeClass, 1)))
          return NULL;
        return t_MultidimensionalCounter::wrap_Object(MultidimensionalCounter(((t_MultidimensionalCounter *) arg)->object.this$));
      }
      static PyObject *t_MultidimensionalCounter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultidimensionalCounter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MultidimensionalCounter_init_(t_MultidimensionalCounter *self, PyObject *args, PyObject *kwds)
      {
        JArray< jint > a0((jobject) NULL);
        MultidimensionalCounter object((jobject) NULL);

        if (!parseArgs(args, "[I", &a0))
        {
          INT_CALL(object = MultidimensionalCounter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MultidimensionalCounter_getCount(t_MultidimensionalCounter *self, PyObject *arg)
      {
        JArray< jint > a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "[I", &a0))
        {
          OBJ_CALL(result = self->object.getCount(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCount", arg);
        return NULL;
      }

      static PyObject *t_MultidimensionalCounter_getCounts(t_MultidimensionalCounter *self, PyObject *arg)
      {
        jint a0;
        JArray< jint > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCounts(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getCounts", arg);
        return NULL;
      }

      static PyObject *t_MultidimensionalCounter_getDimension(t_MultidimensionalCounter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultidimensionalCounter_getSize(t_MultidimensionalCounter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultidimensionalCounter_getSizes(t_MultidimensionalCounter *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getSizes());
        return result.wrap();
      }

      static PyObject *t_MultidimensionalCounter_iterator(t_MultidimensionalCounter *self)
      {
        ::org::hipparchus::util::MultidimensionalCounter$Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::org::hipparchus::util::t_MultidimensionalCounter$Iterator::wrap_Object(result);
      }

      static PyObject *t_MultidimensionalCounter_toString(t_MultidimensionalCounter *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(MultidimensionalCounter), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_MultidimensionalCounter_get__dimension(t_MultidimensionalCounter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultidimensionalCounter_get__size(t_MultidimensionalCounter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSize());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultidimensionalCounter_get__sizes(t_MultidimensionalCounter *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getSizes());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/SubLimitAngle.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *SubLimitAngle::class$ = NULL;
          jmethodID *SubLimitAngle::mids$ = NULL;
          bool SubLimitAngle::live$ = false;

          jclass SubLimitAngle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/SubLimitAngle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10e1fbe5774bfd91] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_getSize_dff5885c2c873297] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
              mids$[mid_split_905725a56f20360c] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_802b885e8f150523] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubLimitAngle::SubLimitAngle(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_10e1fbe5774bfd91, a0.this$, a1.this$)) {}

          jdouble SubLimitAngle::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_dff5885c2c873297]);
          }

          jboolean SubLimitAngle::isEmpty() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubLimitAngle::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_905725a56f20360c], a0.this$));
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
          static PyObject *t_SubLimitAngle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLimitAngle_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLimitAngle_of_(t_SubLimitAngle *self, PyObject *args);
          static int t_SubLimitAngle_init_(t_SubLimitAngle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubLimitAngle_getSize(t_SubLimitAngle *self, PyObject *args);
          static PyObject *t_SubLimitAngle_isEmpty(t_SubLimitAngle *self, PyObject *args);
          static PyObject *t_SubLimitAngle_split(t_SubLimitAngle *self, PyObject *args);
          static PyObject *t_SubLimitAngle_get__empty(t_SubLimitAngle *self, void *data);
          static PyObject *t_SubLimitAngle_get__size(t_SubLimitAngle *self, void *data);
          static PyObject *t_SubLimitAngle_get__parameters_(t_SubLimitAngle *self, void *data);
          static PyGetSetDef t_SubLimitAngle__fields_[] = {
            DECLARE_GET_FIELD(t_SubLimitAngle, empty),
            DECLARE_GET_FIELD(t_SubLimitAngle, size),
            DECLARE_GET_FIELD(t_SubLimitAngle, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubLimitAngle__methods_[] = {
            DECLARE_METHOD(t_SubLimitAngle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLimitAngle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLimitAngle, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubLimitAngle, getSize, METH_VARARGS),
            DECLARE_METHOD(t_SubLimitAngle, isEmpty, METH_VARARGS),
            DECLARE_METHOD(t_SubLimitAngle, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubLimitAngle)[] = {
            { Py_tp_methods, t_SubLimitAngle__methods_ },
            { Py_tp_init, (void *) t_SubLimitAngle_init_ },
            { Py_tp_getset, t_SubLimitAngle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubLimitAngle)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubLimitAngle, t_SubLimitAngle, SubLimitAngle);
          PyObject *t_SubLimitAngle::wrap_Object(const SubLimitAngle& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLimitAngle::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLimitAngle *self = (t_SubLimitAngle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubLimitAngle::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLimitAngle::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLimitAngle *self = (t_SubLimitAngle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubLimitAngle::install(PyObject *module)
          {
            installType(&PY_TYPE(SubLimitAngle), &PY_TYPE_DEF(SubLimitAngle), module, "SubLimitAngle", 0);
          }

          void t_SubLimitAngle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLimitAngle), "class_", make_descriptor(SubLimitAngle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLimitAngle), "wrapfn_", make_descriptor(t_SubLimitAngle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLimitAngle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubLimitAngle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubLimitAngle::initializeClass, 1)))
              return NULL;
            return t_SubLimitAngle::wrap_Object(SubLimitAngle(((t_SubLimitAngle *) arg)->object.this$));
          }
          static PyObject *t_SubLimitAngle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubLimitAngle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubLimitAngle_of_(t_SubLimitAngle *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubLimitAngle_init_(t_SubLimitAngle *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubLimitAngle object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubLimitAngle(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
              self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubLimitAngle_getSize(t_SubLimitAngle *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSize());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SubLimitAngle), (PyObject *) self, "getSize", args, 2);
          }

          static PyObject *t_SubLimitAngle_isEmpty(t_SubLimitAngle *self, PyObject *args)
          {
            jboolean result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(SubLimitAngle), (PyObject *) self, "isEmpty", args, 2);
          }

          static PyObject *t_SubLimitAngle_split(t_SubLimitAngle *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            return callSuper(PY_TYPE(SubLimitAngle), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubLimitAngle_get__parameters_(t_SubLimitAngle *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SubLimitAngle_get__empty(t_SubLimitAngle *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEmpty());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_SubLimitAngle_get__size(t_SubLimitAngle *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *StateVector::class$ = NULL;
            jmethodID *StateVector::mids$ = NULL;
            bool StateVector::live$ = false;

            jclass StateVector::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/StateVector");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getEpoch_85703d13e302437e] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_hasAcceleration_b108b35ef48e27bd] = env->getMethodID(cls, "hasAcceleration", "()Z");
                mids$[mid_setA_bb79ca80d85d0a66] = env->getMethodID(cls, "setA", "(ID)V");
                mids$[mid_setEpoch_600a2a61652bc473] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setP_bb79ca80d85d0a66] = env->getMethodID(cls, "setP", "(ID)V");
                mids$[mid_setV_bb79ca80d85d0a66] = env->getMethodID(cls, "setV", "(ID)V");
                mids$[mid_toTimeStampedPVCoordinates_c204436deca11d94] = env->getMethodID(cls, "toTimeStampedPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            StateVector::StateVector() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            ::org::orekit::time::AbsoluteDate StateVector::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_85703d13e302437e]));
            }

            jboolean StateVector::hasAcceleration() const
            {
              return env->callBooleanMethod(this$, mids$[mid_hasAcceleration_b108b35ef48e27bd]);
            }

            void StateVector::setA(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setA_bb79ca80d85d0a66], a0, a1);
            }

            void StateVector::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpoch_600a2a61652bc473], a0.this$);
            }

            void StateVector::setP(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setP_bb79ca80d85d0a66], a0, a1);
            }

            void StateVector::setV(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setV_bb79ca80d85d0a66], a0, a1);
            }

            ::org::orekit::utils::TimeStampedPVCoordinates StateVector::toTimeStampedPVCoordinates() const
            {
              return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toTimeStampedPVCoordinates_c204436deca11d94]));
            }

            void StateVector::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg);
            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds);
            static PyObject *t_StateVector_getEpoch(t_StateVector *self);
            static PyObject *t_StateVector_hasAcceleration(t_StateVector *self);
            static PyObject *t_StateVector_setA(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_setEpoch(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setP(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_setV(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_toTimeStampedPVCoordinates(t_StateVector *self);
            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_get__epoch(t_StateVector *self, void *data);
            static int t_StateVector_set__epoch(t_StateVector *self, PyObject *arg, void *data);
            static PyGetSetDef t_StateVector__fields_[] = {
              DECLARE_GETSET_FIELD(t_StateVector, epoch),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVector__methods_[] = {
              DECLARE_METHOD(t_StateVector, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, hasAcceleration, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, setA, METH_VARARGS),
              DECLARE_METHOD(t_StateVector, setEpoch, METH_O),
              DECLARE_METHOD(t_StateVector, setP, METH_VARARGS),
              DECLARE_METHOD(t_StateVector, setV, METH_VARARGS),
              DECLARE_METHOD(t_StateVector, toTimeStampedPVCoordinates, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVector)[] = {
              { Py_tp_methods, t_StateVector__methods_ },
              { Py_tp_init, (void *) t_StateVector_init_ },
              { Py_tp_getset, t_StateVector__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVector)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(StateVector, t_StateVector, StateVector);

            void t_StateVector::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVector), &PY_TYPE_DEF(StateVector), module, "StateVector", 0);
            }

            void t_StateVector::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "class_", make_descriptor(StateVector::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "wrapfn_", make_descriptor(t_StateVector::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVector::initializeClass, 1)))
                return NULL;
              return t_StateVector::wrap_Object(StateVector(((t_StateVector *) arg)->object.this$));
            }
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVector::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds)
            {
              StateVector object((jobject) NULL);

              INT_CALL(object = StateVector());
              self->object = object;

              return 0;
            }

            static PyObject *t_StateVector_getEpoch(t_StateVector *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_StateVector_hasAcceleration(t_StateVector *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.hasAcceleration());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_StateVector_setA(t_StateVector *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.setA(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setA", args);
              return NULL;
            }

            static PyObject *t_StateVector_setEpoch(t_StateVector *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setP(t_StateVector *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.setP(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setP", args);
              return NULL;
            }

            static PyObject *t_StateVector_setV(t_StateVector *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.setV(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setV", args);
              return NULL;
            }

            static PyObject *t_StateVector_toTimeStampedPVCoordinates(t_StateVector *self)
            {
              ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
              OBJ_CALL(result = self->object.toTimeStampedPVCoordinates());
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }

            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(StateVector), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_StateVector_get__epoch(t_StateVector *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_StateVector_set__epoch(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epoch", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}

#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClockParser.h"
#include "java/io/IOException.h"
#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "java/io/InputStream.h"
#include "java/io/BufferedReader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClockParser::class$ = NULL;
          jmethodID *RinexClockParser::mids$ = NULL;
          bool RinexClockParser::live$ = false;

          jclass RinexClockParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClockParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_parse_0c256fbf5ddc78d6] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;)Lorg/orekit/files/rinex/clock/RinexClock;");
              mids$[mid_parse_ee571963ac020be9] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock;");
              mids$[mid_parse_8778e32eca7ab9b2] = env->getMethodID(cls, "parse", "(Ljava/io/BufferedReader;Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClockParser::RinexClockParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::orekit::files::rinex::clock::RinexClock RinexClockParser::parse(const ::java::io::InputStream & a0) const
          {
            return ::org::orekit::files::rinex::clock::RinexClock(env->callObjectMethod(this$, mids$[mid_parse_0c256fbf5ddc78d6], a0.this$));
          }

          ::org::orekit::files::rinex::clock::RinexClock RinexClockParser::parse(const ::java::lang::String & a0) const
          {
            return ::org::orekit::files::rinex::clock::RinexClock(env->callObjectMethod(this$, mids$[mid_parse_ee571963ac020be9], a0.this$));
          }

          ::org::orekit::files::rinex::clock::RinexClock RinexClockParser::parse(const ::java::io::BufferedReader & a0, const ::java::lang::String & a1) const
          {
            return ::org::orekit::files::rinex::clock::RinexClock(env->callObjectMethod(this$, mids$[mid_parse_8778e32eca7ab9b2], a0.this$, a1.this$));
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
          static PyObject *t_RinexClockParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClockParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClockParser_init_(t_RinexClockParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClockParser_parse(t_RinexClockParser *self, PyObject *args);

          static PyMethodDef t_RinexClockParser__methods_[] = {
            DECLARE_METHOD(t_RinexClockParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClockParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClockParser, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClockParser)[] = {
            { Py_tp_methods, t_RinexClockParser__methods_ },
            { Py_tp_init, (void *) t_RinexClockParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClockParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClockParser, t_RinexClockParser, RinexClockParser);

          void t_RinexClockParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClockParser), &PY_TYPE_DEF(RinexClockParser), module, "RinexClockParser", 0);
          }

          void t_RinexClockParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClockParser), "class_", make_descriptor(RinexClockParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClockParser), "wrapfn_", make_descriptor(t_RinexClockParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClockParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClockParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClockParser::initializeClass, 1)))
              return NULL;
            return t_RinexClockParser::wrap_Object(RinexClockParser(((t_RinexClockParser *) arg)->object.this$));
          }
          static PyObject *t_RinexClockParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClockParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClockParser_init_(t_RinexClockParser *self, PyObject *args, PyObject *kwds)
          {
            RinexClockParser object((jobject) NULL);

            INT_CALL(object = RinexClockParser());
            self->object = object;

            return 0;
          }

          static PyObject *t_RinexClockParser_parse(t_RinexClockParser *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::io::InputStream a0((jobject) NULL);
                ::org::orekit::files::rinex::clock::RinexClock result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::rinex::clock::t_RinexClock::wrap_Object(result);
                }
              }
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::files::rinex::clock::RinexClock result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::rinex::clock::t_RinexClock::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::io::BufferedReader a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::org::orekit::files::rinex::clock::RinexClock result((jobject) NULL);

                if (!parseArgs(args, "ks", ::java::io::BufferedReader::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::orekit::files::rinex::clock::t_RinexClock::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "parse", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonFieldTimeStampedCache.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonFieldTimeStampedCache::class$ = NULL;
      jmethodID *PythonFieldTimeStampedCache::mids$ = NULL;
      bool PythonFieldTimeStampedCache::live$ = false;

      jclass PythonFieldTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonFieldTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEarliest_2ac58ed946476d4e] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getLatest_2ac58ed946476d4e] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getNeighbors_a39ee104977ad16b] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighborsSize_f2f64475e4580546] = env->getMethodID(cls, "getNeighborsSize", "()I");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeStampedCache::PythonFieldTimeStampedCache() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonFieldTimeStampedCache::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonFieldTimeStampedCache::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonFieldTimeStampedCache::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStampedCache_of_(t_PythonFieldTimeStampedCache *self, PyObject *args);
      static int t_PythonFieldTimeStampedCache_init_(t_PythonFieldTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeStampedCache_finalize(t_PythonFieldTimeStampedCache *self);
      static PyObject *t_PythonFieldTimeStampedCache_pythonExtension(t_PythonFieldTimeStampedCache *self, PyObject *args);
      static jobject JNICALL t_PythonFieldTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeStampedCache_getNeighbors2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jint JNICALL t_PythonFieldTimeStampedCache_getNeighborsSize3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldTimeStampedCache_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldTimeStampedCache_get__self(t_PythonFieldTimeStampedCache *self, void *data);
      static PyObject *t_PythonFieldTimeStampedCache_get__parameters_(t_PythonFieldTimeStampedCache *self, void *data);
      static PyGetSetDef t_PythonFieldTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeStampedCache, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeStampedCache)[] = {
        { Py_tp_methods, t_PythonFieldTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeStampedCache_init_ },
        { Py_tp_getset, t_PythonFieldTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeStampedCache, t_PythonFieldTimeStampedCache, PythonFieldTimeStampedCache);
      PyObject *t_PythonFieldTimeStampedCache::wrap_Object(const PythonFieldTimeStampedCache& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStampedCache *self = (t_PythonFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStampedCache *self = (t_PythonFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFieldTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeStampedCache), &PY_TYPE_DEF(PythonFieldTimeStampedCache), module, "PythonFieldTimeStampedCache", 1);
      }

      void t_PythonFieldTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStampedCache), "class_", make_descriptor(PythonFieldTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStampedCache), "wrapfn_", make_descriptor(t_PythonFieldTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStampedCache), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeStampedCache::initializeClass);
        JNINativeMethod methods[] = {
          { "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;", (void *) t_PythonFieldTimeStampedCache_getEarliest0 },
          { "getLatest", "()Lorg/orekit/time/FieldTimeStamped;", (void *) t_PythonFieldTimeStampedCache_getLatest1 },
          { "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;", (void *) t_PythonFieldTimeStampedCache_getNeighbors2 },
          { "getNeighborsSize", "()I", (void *) t_PythonFieldTimeStampedCache_getNeighborsSize3 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeStampedCache_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeStampedCache::wrap_Object(PythonFieldTimeStampedCache(((t_PythonFieldTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeStampedCache_of_(t_PythonFieldTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeStampedCache_init_(t_PythonFieldTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeStampedCache object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeStampedCache());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeStampedCache_finalize(t_PythonFieldTimeStampedCache *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeStampedCache_pythonExtension(t_PythonFieldTimeStampedCache *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarliest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeStamped::initializeClass, &value))
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

      static jobject JNICALL t_PythonFieldTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getLatest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeStamped::initializeClass, &value))
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

      static jobject JNICALL t_PythonFieldTimeStampedCache_getNeighbors2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::stream::Stream value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
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

      static jint JNICALL t_PythonFieldTimeStampedCache_getNeighborsSize3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getNeighborsSize", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getNeighborsSize", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static void JNICALL t_PythonFieldTimeStampedCache_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldTimeStampedCache_get__self(t_PythonFieldTimeStampedCache *self, void *data)
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
      static PyObject *t_PythonFieldTimeStampedCache_get__parameters_(t_PythonFieldTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectOutputStream.h"
#include "java/io/IOException.h"
#include "java/io/ObjectStreamConstants.h"
#include "java/io/ObjectOutput.h"
#include "java/io/ObjectOutputStream$PutField.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectOutputStream::class$ = NULL;
    jmethodID *ObjectOutputStream::mids$ = NULL;
    bool ObjectOutputStream::live$ = false;

    jclass ObjectOutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectOutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_255f64cf1272816f] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_defaultWriteObject_7ae3461a92a43152] = env->getMethodID(cls, "defaultWriteObject", "()V");
        mids$[mid_flush_7ae3461a92a43152] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_putFields_8d2b60411fbc7765] = env->getMethodID(cls, "putFields", "()Ljava/io/ObjectOutputStream$PutField;");
        mids$[mid_reset_7ae3461a92a43152] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_useProtocolVersion_0a2a1ac2721c0336] = env->getMethodID(cls, "useProtocolVersion", "(I)V");
        mids$[mid_write_9c4b35f0a6dc87f3] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_0a2a1ac2721c0336] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_125b1e9f043b29f8] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_writeBoolean_50a2e0b139e80a58] = env->getMethodID(cls, "writeBoolean", "(Z)V");
        mids$[mid_writeByte_0a2a1ac2721c0336] = env->getMethodID(cls, "writeByte", "(I)V");
        mids$[mid_writeBytes_e939c6558ae8d313] = env->getMethodID(cls, "writeBytes", "(Ljava/lang/String;)V");
        mids$[mid_writeChar_0a2a1ac2721c0336] = env->getMethodID(cls, "writeChar", "(I)V");
        mids$[mid_writeChars_e939c6558ae8d313] = env->getMethodID(cls, "writeChars", "(Ljava/lang/String;)V");
        mids$[mid_writeDouble_77e0f9a1f260e2e5] = env->getMethodID(cls, "writeDouble", "(D)V");
        mids$[mid_writeFields_7ae3461a92a43152] = env->getMethodID(cls, "writeFields", "()V");
        mids$[mid_writeFloat_ca234f4580d28ea3] = env->getMethodID(cls, "writeFloat", "(F)V");
        mids$[mid_writeInt_0a2a1ac2721c0336] = env->getMethodID(cls, "writeInt", "(I)V");
        mids$[mid_writeLong_fefb08975c10f0a1] = env->getMethodID(cls, "writeLong", "(J)V");
        mids$[mid_writeObject_7ca0d9438822cb0b] = env->getMethodID(cls, "writeObject", "(Ljava/lang/Object;)V");
        mids$[mid_writeShort_0a2a1ac2721c0336] = env->getMethodID(cls, "writeShort", "(I)V");
        mids$[mid_writeUTF_e939c6558ae8d313] = env->getMethodID(cls, "writeUTF", "(Ljava/lang/String;)V");
        mids$[mid_writeUnshared_7ca0d9438822cb0b] = env->getMethodID(cls, "writeUnshared", "(Ljava/lang/Object;)V");
        mids$[mid_writeStreamHeader_7ae3461a92a43152] = env->getMethodID(cls, "writeStreamHeader", "()V");
        mids$[mid_writeObjectOverride_7ca0d9438822cb0b] = env->getMethodID(cls, "writeObjectOverride", "(Ljava/lang/Object;)V");
        mids$[mid_annotateClass_f9fd73a09eca27dc] = env->getMethodID(cls, "annotateClass", "(Ljava/lang/Class;)V");
        mids$[mid_annotateProxyClass_f9fd73a09eca27dc] = env->getMethodID(cls, "annotateProxyClass", "(Ljava/lang/Class;)V");
        mids$[mid_replaceObject_ed50a8b49b8274dc] = env->getMethodID(cls, "replaceObject", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_enableReplaceObject_677f083a4e44dce2] = env->getMethodID(cls, "enableReplaceObject", "(Z)Z");
        mids$[mid_writeClassDescriptor_e72f1073b8397bb6] = env->getMethodID(cls, "writeClassDescriptor", "(Ljava/io/ObjectStreamClass;)V");
        mids$[mid_drain_7ae3461a92a43152] = env->getMethodID(cls, "drain", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectOutputStream::ObjectOutputStream(const ::java::io::OutputStream & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_255f64cf1272816f, a0.this$)) {}

    void ObjectOutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    void ObjectOutputStream::defaultWriteObject() const
    {
      env->callVoidMethod(this$, mids$[mid_defaultWriteObject_7ae3461a92a43152]);
    }

    void ObjectOutputStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_7ae3461a92a43152]);
    }

    ::java::io::ObjectOutputStream$PutField ObjectOutputStream::putFields() const
    {
      return ::java::io::ObjectOutputStream$PutField(env->callObjectMethod(this$, mids$[mid_putFields_8d2b60411fbc7765]));
    }

    void ObjectOutputStream::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_7ae3461a92a43152]);
    }

    void ObjectOutputStream::useProtocolVersion(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_useProtocolVersion_0a2a1ac2721c0336], a0);
    }

    void ObjectOutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_9c4b35f0a6dc87f3], a0.this$);
    }

    void ObjectOutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_0a2a1ac2721c0336], a0);
    }

    void ObjectOutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_125b1e9f043b29f8], a0.this$, a1, a2);
    }

    void ObjectOutputStream::writeBoolean(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBoolean_50a2e0b139e80a58], a0);
    }

    void ObjectOutputStream::writeByte(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeByte_0a2a1ac2721c0336], a0);
    }

    void ObjectOutputStream::writeBytes(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBytes_e939c6558ae8d313], a0.this$);
    }

    void ObjectOutputStream::writeChar(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChar_0a2a1ac2721c0336], a0);
    }

    void ObjectOutputStream::writeChars(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChars_e939c6558ae8d313], a0.this$);
    }

    void ObjectOutputStream::writeDouble(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeDouble_77e0f9a1f260e2e5], a0);
    }

    void ObjectOutputStream::writeFields() const
    {
      env->callVoidMethod(this$, mids$[mid_writeFields_7ae3461a92a43152]);
    }

    void ObjectOutputStream::writeFloat(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeFloat_ca234f4580d28ea3], a0);
    }

    void ObjectOutputStream::writeInt(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeInt_0a2a1ac2721c0336], a0);
    }

    void ObjectOutputStream::writeLong(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeLong_fefb08975c10f0a1], a0);
    }

    void ObjectOutputStream::writeObject(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeObject_7ca0d9438822cb0b], a0.this$);
    }

    void ObjectOutputStream::writeShort(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeShort_0a2a1ac2721c0336], a0);
    }

    void ObjectOutputStream::writeUTF(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeUTF_e939c6558ae8d313], a0.this$);
    }

    void ObjectOutputStream::writeUnshared(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeUnshared_7ca0d9438822cb0b], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectOutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectOutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ObjectOutputStream_init_(t_ObjectOutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ObjectOutputStream_close(t_ObjectOutputStream *self, PyObject *args);
    static PyObject *t_ObjectOutputStream_defaultWriteObject(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_flush(t_ObjectOutputStream *self, PyObject *args);
    static PyObject *t_ObjectOutputStream_putFields(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_reset(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_useProtocolVersion(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_write(t_ObjectOutputStream *self, PyObject *args);
    static PyObject *t_ObjectOutputStream_writeBoolean(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeByte(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeBytes(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeChar(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeChars(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeDouble(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeFields(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_writeFloat(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeInt(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeLong(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeObject(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeShort(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeUTF(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeUnshared(t_ObjectOutputStream *self, PyObject *arg);

    static PyMethodDef t_ObjectOutputStream__methods_[] = {
      DECLARE_METHOD(t_ObjectOutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream, defaultWriteObject, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, flush, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream, putFields, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, reset, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, useProtocolVersion, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, write, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream, writeBoolean, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeByte, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeBytes, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeChar, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeChars, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeDouble, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeFields, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, writeFloat, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeInt, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeLong, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeObject, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeShort, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeUTF, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeUnshared, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectOutputStream)[] = {
      { Py_tp_methods, t_ObjectOutputStream__methods_ },
      { Py_tp_init, (void *) t_ObjectOutputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectOutputStream)[] = {
      &PY_TYPE_DEF(::java::io::OutputStream),
      NULL
    };

    DEFINE_TYPE(ObjectOutputStream, t_ObjectOutputStream, ObjectOutputStream);

    void t_ObjectOutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectOutputStream), &PY_TYPE_DEF(ObjectOutputStream), module, "ObjectOutputStream", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "PutField", make_descriptor(&PY_TYPE_DEF(ObjectOutputStream$PutField)));
    }

    void t_ObjectOutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "class_", make_descriptor(ObjectOutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "wrapfn_", make_descriptor(t_ObjectOutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectOutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectOutputStream::initializeClass, 1)))
        return NULL;
      return t_ObjectOutputStream::wrap_Object(ObjectOutputStream(((t_ObjectOutputStream *) arg)->object.this$));
    }
    static PyObject *t_ObjectOutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectOutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ObjectOutputStream_init_(t_ObjectOutputStream *self, PyObject *args, PyObject *kwds)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      ObjectOutputStream object((jobject) NULL);

      if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
      {
        INT_CALL(object = ObjectOutputStream(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ObjectOutputStream_close(t_ObjectOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ObjectOutputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_ObjectOutputStream_defaultWriteObject(t_ObjectOutputStream *self)
    {
      OBJ_CALL(self->object.defaultWriteObject());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutputStream_flush(t_ObjectOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ObjectOutputStream), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_ObjectOutputStream_putFields(t_ObjectOutputStream *self)
    {
      ::java::io::ObjectOutputStream$PutField result((jobject) NULL);
      OBJ_CALL(result = self->object.putFields());
      return ::java::io::t_ObjectOutputStream$PutField::wrap_Object(result);
    }

    static PyObject *t_ObjectOutputStream_reset(t_ObjectOutputStream *self)
    {
      OBJ_CALL(self->object.reset());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutputStream_useProtocolVersion(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.useProtocolVersion(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "useProtocolVersion", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_write(t_ObjectOutputStream *self, PyObject *args)
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

      return callSuper(PY_TYPE(ObjectOutputStream), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_ObjectOutputStream_writeBoolean(t_ObjectOutputStream *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.writeBoolean(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeBoolean", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeByte(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeByte(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeByte", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeBytes(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeBytes(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeBytes", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeChar(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeChar(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeChar", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeChars(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeChars(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeChars", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeDouble(t_ObjectOutputStream *self, PyObject *arg)
    {
      jdouble a0;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(self->object.writeDouble(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeDouble", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeFields(t_ObjectOutputStream *self)
    {
      OBJ_CALL(self->object.writeFields());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutputStream_writeFloat(t_ObjectOutputStream *self, PyObject *arg)
    {
      jfloat a0;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(self->object.writeFloat(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeFloat", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeInt(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeInt(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeInt", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeLong(t_ObjectOutputStream *self, PyObject *arg)
    {
      jlong a0;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(self->object.writeLong(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeLong", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeObject(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(self->object.writeObject(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeObject", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeShort(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeShort(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeShort", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeUTF(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeUTF(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeUTF", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeUnshared(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(self->object.writeUnshared(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeUnshared", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/DynamicOutlierFilter.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *DynamicOutlierFilter::class$ = NULL;
          jmethodID *DynamicOutlierFilter::mids$ = NULL;
          bool DynamicOutlierFilter::live$ = false;

          jclass DynamicOutlierFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/DynamicOutlierFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getSigma_7cdc325af0834901] = env->getMethodID(cls, "getSigma", "()[D");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_setSigma_ebc26dcaf4761286] = env->getMethodID(cls, "setSigma", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DynamicOutlierFilter::DynamicOutlierFilter(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::OutlierFilter(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

          JArray< jdouble > DynamicOutlierFilter::getSigma() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSigma_7cdc325af0834901]));
          }

          void DynamicOutlierFilter::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void DynamicOutlierFilter::setSigma(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSigma_ebc26dcaf4761286], a0.this$);
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
          static PyObject *t_DynamicOutlierFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DynamicOutlierFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DynamicOutlierFilter_of_(t_DynamicOutlierFilter *self, PyObject *args);
          static int t_DynamicOutlierFilter_init_(t_DynamicOutlierFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DynamicOutlierFilter_getSigma(t_DynamicOutlierFilter *self);
          static PyObject *t_DynamicOutlierFilter_modify(t_DynamicOutlierFilter *self, PyObject *args);
          static PyObject *t_DynamicOutlierFilter_setSigma(t_DynamicOutlierFilter *self, PyObject *arg);
          static PyObject *t_DynamicOutlierFilter_get__sigma(t_DynamicOutlierFilter *self, void *data);
          static int t_DynamicOutlierFilter_set__sigma(t_DynamicOutlierFilter *self, PyObject *arg, void *data);
          static PyObject *t_DynamicOutlierFilter_get__parameters_(t_DynamicOutlierFilter *self, void *data);
          static PyGetSetDef t_DynamicOutlierFilter__fields_[] = {
            DECLARE_GETSET_FIELD(t_DynamicOutlierFilter, sigma),
            DECLARE_GET_FIELD(t_DynamicOutlierFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DynamicOutlierFilter__methods_[] = {
            DECLARE_METHOD(t_DynamicOutlierFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DynamicOutlierFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DynamicOutlierFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_DynamicOutlierFilter, getSigma, METH_NOARGS),
            DECLARE_METHOD(t_DynamicOutlierFilter, modify, METH_VARARGS),
            DECLARE_METHOD(t_DynamicOutlierFilter, setSigma, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DynamicOutlierFilter)[] = {
            { Py_tp_methods, t_DynamicOutlierFilter__methods_ },
            { Py_tp_init, (void *) t_DynamicOutlierFilter_init_ },
            { Py_tp_getset, t_DynamicOutlierFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DynamicOutlierFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::OutlierFilter),
            NULL
          };

          DEFINE_TYPE(DynamicOutlierFilter, t_DynamicOutlierFilter, DynamicOutlierFilter);
          PyObject *t_DynamicOutlierFilter::wrap_Object(const DynamicOutlierFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DynamicOutlierFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DynamicOutlierFilter *self = (t_DynamicOutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DynamicOutlierFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DynamicOutlierFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DynamicOutlierFilter *self = (t_DynamicOutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DynamicOutlierFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(DynamicOutlierFilter), &PY_TYPE_DEF(DynamicOutlierFilter), module, "DynamicOutlierFilter", 0);
          }

          void t_DynamicOutlierFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DynamicOutlierFilter), "class_", make_descriptor(DynamicOutlierFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DynamicOutlierFilter), "wrapfn_", make_descriptor(t_DynamicOutlierFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DynamicOutlierFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DynamicOutlierFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DynamicOutlierFilter::initializeClass, 1)))
              return NULL;
            return t_DynamicOutlierFilter::wrap_Object(DynamicOutlierFilter(((t_DynamicOutlierFilter *) arg)->object.this$));
          }
          static PyObject *t_DynamicOutlierFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DynamicOutlierFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DynamicOutlierFilter_of_(t_DynamicOutlierFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_DynamicOutlierFilter_init_(t_DynamicOutlierFilter *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            DynamicOutlierFilter object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = DynamicOutlierFilter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DynamicOutlierFilter_getSigma(t_DynamicOutlierFilter *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSigma());
            return result.wrap();
          }

          static PyObject *t_DynamicOutlierFilter_modify(t_DynamicOutlierFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DynamicOutlierFilter), (PyObject *) self, "modify", args, 2);
          }

          static PyObject *t_DynamicOutlierFilter_setSigma(t_DynamicOutlierFilter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setSigma(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSigma", arg);
            return NULL;
          }
          static PyObject *t_DynamicOutlierFilter_get__parameters_(t_DynamicOutlierFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_DynamicOutlierFilter_get__sigma(t_DynamicOutlierFilter *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSigma());
            return value.wrap();
          }
          static int t_DynamicOutlierFilter_set__sigma(t_DynamicOutlierFilter *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setSigma(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "sigma", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *TLEPropagator::class$ = NULL;
          jmethodID *TLEPropagator::mids$ = NULL;
          bool TLEPropagator::live$ = false;

          jclass TLEPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/TLEPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDefaultTleGenerationAlgorithm_d25864ee2083e4eb] = env->getStaticMethodID(cls, "getDefaultTleGenerationAlgorithm", "(Lorg/orekit/time/TimeScale;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;");
              mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_456d9a2f64d6b28d] = env->getStaticMethodID(cls, "getMU", "()D");
              mids$[mid_getPVCoordinates_72289093b5ce53a7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_getTLE_32ddbfc0b67883b1] = env->getMethodID(cls, "getTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");
              mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_selectExtrapolator_cc293ce4386ce2da] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_selectExtrapolator_24b30465a6824e32] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_selectExtrapolator_47c4d67773bcb869] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_selectExtrapolator_ce405822864d851d] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_getMass_e912d21057defe63] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_sxpInitialize_7ae3461a92a43152] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_77e0f9a1f260e2e5] = env->getMethodID(cls, "sxpPropagate", "(D)V");
              mids$[mid_resetIntermediateState_9658cf3eaef14ef5] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_propagateOrbit_6f58641238e8a9c4] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
              mids$[mid_createHarvester_d3d4ea925a699046] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
              mids$[mid_getJacobiansColumnsNames_a6156df500549a58] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm TLEPropagator::getDefaultTleGenerationAlgorithm(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::frames::Frame & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm(env->callStaticObjectMethod(cls, mids$[mid_getDefaultTleGenerationAlgorithm_d25864ee2083e4eb], a0.this$, a1.this$));
          }

          ::org::orekit::frames::Frame TLEPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
          }

          jdouble TLEPropagator::getMU()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMU_456d9a2f64d6b28d]);
          }

          ::org::orekit::utils::PVCoordinates TLEPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_72289093b5ce53a7], a0.this$));
          }

          ::org::orekit::propagation::analytical::tle::TLE TLEPropagator::getTLE() const
          {
            return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_getTLE_32ddbfc0b67883b1]));
          }

          void TLEPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_2b88003f931f70a7], a0.this$);
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_cc293ce4386ce2da], a0.this$));
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::frames::Frame & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_24b30465a6824e32], a0.this$, a1.this$));
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_47c4d67773bcb869], a0.this$, a1.this$, a2));
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_ce405822864d851d], a0.this$, a1.this$, a2, a3.this$));
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
          static PyObject *t_TLEPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLEPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLEPropagator_getDefaultTleGenerationAlgorithm(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLEPropagator_getFrame(t_TLEPropagator *self, PyObject *args);
          static PyObject *t_TLEPropagator_getMU(PyTypeObject *type);
          static PyObject *t_TLEPropagator_getPVCoordinates(t_TLEPropagator *self, PyObject *args);
          static PyObject *t_TLEPropagator_getTLE(t_TLEPropagator *self);
          static PyObject *t_TLEPropagator_resetInitialState(t_TLEPropagator *self, PyObject *args);
          static PyObject *t_TLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLEPropagator_get__frame(t_TLEPropagator *self, void *data);
          static PyObject *t_TLEPropagator_get__mU(t_TLEPropagator *self, void *data);
          static PyObject *t_TLEPropagator_get__tLE(t_TLEPropagator *self, void *data);
          static PyGetSetDef t_TLEPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_TLEPropagator, frame),
            DECLARE_GET_FIELD(t_TLEPropagator, mU),
            DECLARE_GET_FIELD(t_TLEPropagator, tLE),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TLEPropagator__methods_[] = {
            DECLARE_METHOD(t_TLEPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, getDefaultTleGenerationAlgorithm, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_TLEPropagator, getMU, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, getPVCoordinates, METH_VARARGS),
            DECLARE_METHOD(t_TLEPropagator, getTLE, METH_NOARGS),
            DECLARE_METHOD(t_TLEPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_TLEPropagator, selectExtrapolator, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TLEPropagator)[] = {
            { Py_tp_methods, t_TLEPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TLEPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TLEPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(TLEPropagator, t_TLEPropagator, TLEPropagator);

          void t_TLEPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(TLEPropagator), &PY_TYPE_DEF(TLEPropagator), module, "TLEPropagator", 0);
          }

          void t_TLEPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagator), "class_", make_descriptor(TLEPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagator), "wrapfn_", make_descriptor(t_TLEPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TLEPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TLEPropagator::initializeClass, 1)))
              return NULL;
            return t_TLEPropagator::wrap_Object(TLEPropagator(((t_TLEPropagator *) arg)->object.this$));
          }
          static PyObject *t_TLEPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TLEPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TLEPropagator_getDefaultTleGenerationAlgorithm(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::getDefaultTleGenerationAlgorithm(a0, a1));
              return ::org::orekit::propagation::analytical::tle::generation::t_TleGenerationAlgorithm::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getDefaultTleGenerationAlgorithm", args);
            return NULL;
          }

          static PyObject *t_TLEPropagator_getFrame(t_TLEPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TLEPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_TLEPropagator_getMU(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLEPropagator_getPVCoordinates(t_TLEPropagator *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TLEPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
          }

          static PyObject *t_TLEPropagator_getTLE(t_TLEPropagator *self)
          {
            ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
            OBJ_CALL(result = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
          }

          static PyObject *t_TLEPropagator_resetInitialState(t_TLEPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(TLEPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_TLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::frames::Frame a1((jobject) NULL);
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0, a1));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0, a1, a2));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0, a1, a2, a3));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "selectExtrapolator", args);
            return NULL;
          }

          static PyObject *t_TLEPropagator_get__frame(t_TLEPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_TLEPropagator_get__mU(t_TLEPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLEPropagator_get__tLE(t_TLEPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::tle::TLE value((jobject) NULL);
            OBJ_CALL(value = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame45.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame45::class$ = NULL;
          jmethodID *SubFrame45::mids$ = NULL;
          bool SubFrame45::live$ = false;

          jclass SubFrame45::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame45");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDataId_f2f64475e4580546] = env->getMethodID(cls, "getDataId", "()I");
              mids$[mid_getSvId_f2f64475e4580546] = env->getMethodID(cls, "getSvId", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame45::getDataId() const
          {
            return env->callIntMethod(this$, mids$[mid_getDataId_f2f64475e4580546]);
          }

          jint SubFrame45::getSvId() const
          {
            return env->callIntMethod(this$, mids$[mid_getSvId_f2f64475e4580546]);
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
          static PyObject *t_SubFrame45_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame45_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame45_getDataId(t_SubFrame45 *self);
          static PyObject *t_SubFrame45_getSvId(t_SubFrame45 *self);
          static PyObject *t_SubFrame45_get__dataId(t_SubFrame45 *self, void *data);
          static PyObject *t_SubFrame45_get__svId(t_SubFrame45 *self, void *data);
          static PyGetSetDef t_SubFrame45__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame45, dataId),
            DECLARE_GET_FIELD(t_SubFrame45, svId),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame45__methods_[] = {
            DECLARE_METHOD(t_SubFrame45, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame45, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame45, getDataId, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame45, getSvId, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame45)[] = {
            { Py_tp_methods, t_SubFrame45__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame45__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame45)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame45, t_SubFrame45, SubFrame45);

          void t_SubFrame45::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame45), &PY_TYPE_DEF(SubFrame45), module, "SubFrame45", 0);
          }

          void t_SubFrame45::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame45), "class_", make_descriptor(SubFrame45::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame45), "wrapfn_", make_descriptor(t_SubFrame45::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame45), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame45_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame45::initializeClass, 1)))
              return NULL;
            return t_SubFrame45::wrap_Object(SubFrame45(((t_SubFrame45 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame45_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame45::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame45_getDataId(t_SubFrame45 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDataId());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame45_getSvId(t_SubFrame45 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSvId());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame45_get__dataId(t_SubFrame45 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDataId());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame45_get__svId(t_SubFrame45 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSvId());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *StateVector::class$ = NULL;
            jmethodID *StateVector::mids$ = NULL;
            bool StateVector::live$ = false;

            jclass StateVector::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/StateVector");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getPositionVector_17a952530a808943] = env->getMethodID(cls, "getPositionVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getVelocityVector_17a952530a808943] = env->getMethodID(cls, "getVelocityVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_setX_77e0f9a1f260e2e5] = env->getMethodID(cls, "setX", "(D)V");
                mids$[mid_setXdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setXdot", "(D)V");
                mids$[mid_setY_77e0f9a1f260e2e5] = env->getMethodID(cls, "setY", "(D)V");
                mids$[mid_setYdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setYdot", "(D)V");
                mids$[mid_setZ_77e0f9a1f260e2e5] = env->getMethodID(cls, "setZ", "(D)V");
                mids$[mid_setZdot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setZdot", "(D)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            StateVector::StateVector() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            ::org::hipparchus::geometry::euclidean::threed::Vector3D StateVector::getPositionVector() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPositionVector_17a952530a808943]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D StateVector::getVelocityVector() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocityVector_17a952530a808943]));
            }

            void StateVector::setX(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setX_77e0f9a1f260e2e5], a0);
            }

            void StateVector::setXdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setXdot_77e0f9a1f260e2e5], a0);
            }

            void StateVector::setY(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setY_77e0f9a1f260e2e5], a0);
            }

            void StateVector::setYdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setYdot_77e0f9a1f260e2e5], a0);
            }

            void StateVector::setZ(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZ_77e0f9a1f260e2e5], a0);
            }

            void StateVector::setZdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZdot_77e0f9a1f260e2e5], a0);
            }

            void StateVector::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
          namespace cdm {
            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg);
            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds);
            static PyObject *t_StateVector_getPositionVector(t_StateVector *self);
            static PyObject *t_StateVector_getVelocityVector(t_StateVector *self);
            static PyObject *t_StateVector_setX(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setXdot(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setY(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setYdot(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setZ(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setZdot(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_get__positionVector(t_StateVector *self, void *data);
            static PyObject *t_StateVector_get__velocityVector(t_StateVector *self, void *data);
            static int t_StateVector_set__x(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__xdot(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__y(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__ydot(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__z(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__zdot(t_StateVector *self, PyObject *arg, void *data);
            static PyGetSetDef t_StateVector__fields_[] = {
              DECLARE_GET_FIELD(t_StateVector, positionVector),
              DECLARE_GET_FIELD(t_StateVector, velocityVector),
              DECLARE_SET_FIELD(t_StateVector, x),
              DECLARE_SET_FIELD(t_StateVector, xdot),
              DECLARE_SET_FIELD(t_StateVector, y),
              DECLARE_SET_FIELD(t_StateVector, ydot),
              DECLARE_SET_FIELD(t_StateVector, z),
              DECLARE_SET_FIELD(t_StateVector, zdot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVector__methods_[] = {
              DECLARE_METHOD(t_StateVector, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, getPositionVector, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, getVelocityVector, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, setX, METH_O),
              DECLARE_METHOD(t_StateVector, setXdot, METH_O),
              DECLARE_METHOD(t_StateVector, setY, METH_O),
              DECLARE_METHOD(t_StateVector, setYdot, METH_O),
              DECLARE_METHOD(t_StateVector, setZ, METH_O),
              DECLARE_METHOD(t_StateVector, setZdot, METH_O),
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

            static PyObject *t_StateVector_getPositionVector(t_StateVector *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getPositionVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_StateVector_getVelocityVector(t_StateVector *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVelocityVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_StateVector_setX(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setX(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setX", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setXdot(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setXdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setXdot", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setY(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setY(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setY", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setYdot(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setYdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setYdot", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setZ(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZ(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZ", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setZdot(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZdot", arg);
              return NULL;
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

            static PyObject *t_StateVector_get__positionVector(t_StateVector *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getPositionVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_StateVector_get__velocityVector(t_StateVector *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVelocityVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static int t_StateVector_set__x(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setX(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "x", arg);
              return -1;
            }

            static int t_StateVector_set__xdot(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setXdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "xdot", arg);
              return -1;
            }

            static int t_StateVector_set__y(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setY(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "y", arg);
              return -1;
            }

            static int t_StateVector_set__ydot(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setYdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ydot", arg);
              return -1;
            }

            static int t_StateVector_set__z(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZ(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "z", arg);
              return -1;
            }

            static int t_StateVector_set__zdot(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "zdot", arg);
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
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *KeplerianElementsKey::class$ = NULL;
            jmethodID *KeplerianElementsKey::mids$ = NULL;
            bool KeplerianElementsKey::live$ = false;
            KeplerianElementsKey *KeplerianElementsKey::ARG_OF_PERICENTER = NULL;
            KeplerianElementsKey *KeplerianElementsKey::COMMENT = NULL;
            KeplerianElementsKey *KeplerianElementsKey::ECCENTRICITY = NULL;
            KeplerianElementsKey *KeplerianElementsKey::EPOCH = NULL;
            KeplerianElementsKey *KeplerianElementsKey::GM = NULL;
            KeplerianElementsKey *KeplerianElementsKey::INCLINATION = NULL;
            KeplerianElementsKey *KeplerianElementsKey::MEAN_ANOMALY = NULL;
            KeplerianElementsKey *KeplerianElementsKey::MEAN_MOTION = NULL;
            KeplerianElementsKey *KeplerianElementsKey::RA_OF_ASC_NODE = NULL;
            KeplerianElementsKey *KeplerianElementsKey::SEMI_MAJOR_AXIS = NULL;
            KeplerianElementsKey *KeplerianElementsKey::TRUE_ANOMALY = NULL;

            jclass KeplerianElementsKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_204b232a067f0da2] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;)Z");
                mids$[mid_valueOf_5ebea0bbc011f95b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;");
                mids$[mid_values_8be06236407d0236] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ARG_OF_PERICENTER = new KeplerianElementsKey(env->getStaticObjectField(cls, "ARG_OF_PERICENTER", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                COMMENT = new KeplerianElementsKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                ECCENTRICITY = new KeplerianElementsKey(env->getStaticObjectField(cls, "ECCENTRICITY", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                EPOCH = new KeplerianElementsKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                GM = new KeplerianElementsKey(env->getStaticObjectField(cls, "GM", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                INCLINATION = new KeplerianElementsKey(env->getStaticObjectField(cls, "INCLINATION", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                MEAN_ANOMALY = new KeplerianElementsKey(env->getStaticObjectField(cls, "MEAN_ANOMALY", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                MEAN_MOTION = new KeplerianElementsKey(env->getStaticObjectField(cls, "MEAN_MOTION", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                RA_OF_ASC_NODE = new KeplerianElementsKey(env->getStaticObjectField(cls, "RA_OF_ASC_NODE", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                SEMI_MAJOR_AXIS = new KeplerianElementsKey(env->getStaticObjectField(cls, "SEMI_MAJOR_AXIS", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                TRUE_ANOMALY = new KeplerianElementsKey(env->getStaticObjectField(cls, "TRUE_ANOMALY", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean KeplerianElementsKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_204b232a067f0da2], a0.this$, a1.this$, a2.this$);
            }

            KeplerianElementsKey KeplerianElementsKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return KeplerianElementsKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5ebea0bbc011f95b], a0.this$));
            }

            JArray< KeplerianElementsKey > KeplerianElementsKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< KeplerianElementsKey >(env->callStaticObjectMethod(cls, mids$[mid_values_8be06236407d0236]));
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
            static PyObject *t_KeplerianElementsKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KeplerianElementsKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KeplerianElementsKey_of_(t_KeplerianElementsKey *self, PyObject *args);
            static PyObject *t_KeplerianElementsKey_process(t_KeplerianElementsKey *self, PyObject *args);
            static PyObject *t_KeplerianElementsKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_KeplerianElementsKey_values(PyTypeObject *type);
            static PyObject *t_KeplerianElementsKey_get__parameters_(t_KeplerianElementsKey *self, void *data);
            static PyGetSetDef t_KeplerianElementsKey__fields_[] = {
              DECLARE_GET_FIELD(t_KeplerianElementsKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_KeplerianElementsKey__methods_[] = {
              DECLARE_METHOD(t_KeplerianElementsKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElementsKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElementsKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_KeplerianElementsKey, process, METH_VARARGS),
              DECLARE_METHOD(t_KeplerianElementsKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElementsKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KeplerianElementsKey)[] = {
              { Py_tp_methods, t_KeplerianElementsKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_KeplerianElementsKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KeplerianElementsKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(KeplerianElementsKey, t_KeplerianElementsKey, KeplerianElementsKey);
            PyObject *t_KeplerianElementsKey::wrap_Object(const KeplerianElementsKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_KeplerianElementsKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_KeplerianElementsKey *self = (t_KeplerianElementsKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_KeplerianElementsKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_KeplerianElementsKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_KeplerianElementsKey *self = (t_KeplerianElementsKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_KeplerianElementsKey::install(PyObject *module)
            {
              installType(&PY_TYPE(KeplerianElementsKey), &PY_TYPE_DEF(KeplerianElementsKey), module, "KeplerianElementsKey", 0);
            }

            void t_KeplerianElementsKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "class_", make_descriptor(KeplerianElementsKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "wrapfn_", make_descriptor(t_KeplerianElementsKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(KeplerianElementsKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "ARG_OF_PERICENTER", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::ARG_OF_PERICENTER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "COMMENT", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "ECCENTRICITY", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::ECCENTRICITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "EPOCH", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "GM", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::GM)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "INCLINATION", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::INCLINATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "MEAN_ANOMALY", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::MEAN_ANOMALY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "MEAN_MOTION", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::MEAN_MOTION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "RA_OF_ASC_NODE", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::RA_OF_ASC_NODE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "SEMI_MAJOR_AXIS", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::SEMI_MAJOR_AXIS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "TRUE_ANOMALY", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::TRUE_ANOMALY)));
            }

            static PyObject *t_KeplerianElementsKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KeplerianElementsKey::initializeClass, 1)))
                return NULL;
              return t_KeplerianElementsKey::wrap_Object(KeplerianElementsKey(((t_KeplerianElementsKey *) arg)->object.this$));
            }
            static PyObject *t_KeplerianElementsKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KeplerianElementsKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_KeplerianElementsKey_of_(t_KeplerianElementsKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_KeplerianElementsKey_process(t_KeplerianElementsKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::KeplerianElements a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::KeplerianElements::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_KeplerianElementsKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              KeplerianElementsKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::KeplerianElementsKey::valueOf(a0));
                return t_KeplerianElementsKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_KeplerianElementsKey_values(PyTypeObject *type)
            {
              JArray< KeplerianElementsKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::KeplerianElementsKey::values());
              return JArray<jobject>(result.this$).wrap(t_KeplerianElementsKey::wrap_jobject);
            }
            static PyObject *t_KeplerianElementsKey_get__parameters_(t_KeplerianElementsKey *self, void *data)
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
#include "org/orekit/models/earth/PythonEarthShape.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *PythonEarthShape::class$ = NULL;
        jmethodID *PythonEarthShape::mids$ = NULL;
        bool PythonEarthShape::live$ = false;

        jclass PythonEarthShape::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/PythonEarthShape");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getBodyFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getEllipsoid_1eef7b7a6c58a550] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIntersectionPoint_9dbbe2475f1298d4] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_getIntersectionPoint_4a2d37785a37d918] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_projectToGround_6b6c0bf817ea4492] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_projectToGround_a871d6772929c652] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_transform_2637885099554561] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_transform_393fcc10540ff032] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_d471208f838d1a3d] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_transform_588d378a3b637077] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEarthShape::PythonEarthShape() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonEarthShape::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonEarthShape::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonEarthShape::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        static PyObject *t_PythonEarthShape_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEarthShape_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEarthShape_init_(t_PythonEarthShape *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEarthShape_finalize(t_PythonEarthShape *self);
        static PyObject *t_PythonEarthShape_pythonExtension(t_PythonEarthShape *self, PyObject *args);
        static jobject JNICALL t_PythonEarthShape_getBodyFrame0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEarthShape_getEllipsoid1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonEarthShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonEarthShape_projectToGround5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonEarthShape_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEarthShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEarthShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEarthShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonEarthShape_transform10(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonEarthShape_get__self(t_PythonEarthShape *self, void *data);
        static PyGetSetDef t_PythonEarthShape__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEarthShape, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEarthShape__methods_[] = {
          DECLARE_METHOD(t_PythonEarthShape, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEarthShape, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEarthShape, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEarthShape, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEarthShape)[] = {
          { Py_tp_methods, t_PythonEarthShape__methods_ },
          { Py_tp_init, (void *) t_PythonEarthShape_init_ },
          { Py_tp_getset, t_PythonEarthShape__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEarthShape)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEarthShape, t_PythonEarthShape, PythonEarthShape);

        void t_PythonEarthShape::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEarthShape), &PY_TYPE_DEF(PythonEarthShape), module, "PythonEarthShape", 1);
        }

        void t_PythonEarthShape::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEarthShape), "class_", make_descriptor(PythonEarthShape::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEarthShape), "wrapfn_", make_descriptor(t_PythonEarthShape::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEarthShape), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEarthShape::initializeClass);
          JNINativeMethod methods[] = {
            { "getBodyFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonEarthShape_getBodyFrame0 },
            { "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;", (void *) t_PythonEarthShape_getEllipsoid1 },
            { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonEarthShape_getIntersectionPoint2 },
            { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonEarthShape_getIntersectionPoint3 },
            { "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonEarthShape_projectToGround4 },
            { "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonEarthShape_projectToGround5 },
            { "pythonDecRef", "()V", (void *) t_PythonEarthShape_pythonDecRef6 },
            { "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonEarthShape_transform7 },
            { "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonEarthShape_transform8 },
            { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonEarthShape_transform9 },
            { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonEarthShape_transform10 },
          };
          env->registerNatives(cls, methods, 11);
        }

        static PyObject *t_PythonEarthShape_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEarthShape::initializeClass, 1)))
            return NULL;
          return t_PythonEarthShape::wrap_Object(PythonEarthShape(((t_PythonEarthShape *) arg)->object.this$));
        }
        static PyObject *t_PythonEarthShape_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEarthShape::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEarthShape_init_(t_PythonEarthShape *self, PyObject *args, PyObject *kwds)
        {
          PythonEarthShape object((jobject) NULL);

          INT_CALL(object = PythonEarthShape());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEarthShape_finalize(t_PythonEarthShape *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEarthShape_pythonExtension(t_PythonEarthShape *self, PyObject *args)
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

        static jobject JNICALL t_PythonEarthShape_getBodyFrame0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::frames::Frame value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getBodyFrame", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
          {
            throwTypeError("getBodyFrame", result);
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

        static jobject JNICALL t_PythonEarthShape_getEllipsoid1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::models::earth::ReferenceEllipsoid value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEllipsoid", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::models::earth::ReferenceEllipsoid::initializeClass, &value))
          {
            throwTypeError("getEllipsoid", result);
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

        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Line(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *o3 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a3));
          PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
          {
            throwTypeError("getIntersectionPoint", result);
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

        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldLine(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *o3 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a3));
          PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
          {
            throwTypeError("getIntersectionPoint", result);
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

        static jobject JNICALL t_PythonEarthShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(::org::orekit::utils::TimeStampedPVCoordinates(a0));
          PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
          PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
          {
            throwTypeError("projectToGround", result);
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

        static jobject JNICALL t_PythonEarthShape_projectToGround5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToGround", result);
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

        static void JNICALL t_PythonEarthShape_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonEarthShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a0));
          PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static jobject JNICALL t_PythonEarthShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a0));
          PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static jobject JNICALL t_PythonEarthShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
          PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
          PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static jobject JNICALL t_PythonEarthShape_transform10(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a0));
          PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
          PyObject *o2 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a2));
          PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
          {
            throwTypeError("transform", result);
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

        static PyObject *t_PythonEarthShape_get__self(t_PythonEarthShape *self, void *data)
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
#include "org/orekit/time/UTCTAIBulletinAFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIBulletinAFilesLoader::class$ = NULL;
      jmethodID *UTCTAIBulletinAFilesLoader::mids$ = NULL;
      bool UTCTAIBulletinAFilesLoader::live$ = false;

      jclass UTCTAIBulletinAFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIBulletinAFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_2a9119a84e92f14a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_a6156df500549a58] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTCTAIBulletinAFilesLoader::UTCTAIBulletinAFilesLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

      UTCTAIBulletinAFilesLoader::UTCTAIBulletinAFilesLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_2a9119a84e92f14a, a0.this$, a1.this$)) {}

      ::java::util::List UTCTAIBulletinAFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_a6156df500549a58]));
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
      static PyObject *t_UTCTAIBulletinAFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIBulletinAFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTCTAIBulletinAFilesLoader_init_(t_UTCTAIBulletinAFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTCTAIBulletinAFilesLoader_loadOffsets(t_UTCTAIBulletinAFilesLoader *self);

      static PyMethodDef t_UTCTAIBulletinAFilesLoader__methods_[] = {
        DECLARE_METHOD(t_UTCTAIBulletinAFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIBulletinAFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIBulletinAFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIBulletinAFilesLoader)[] = {
        { Py_tp_methods, t_UTCTAIBulletinAFilesLoader__methods_ },
        { Py_tp_init, (void *) t_UTCTAIBulletinAFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIBulletinAFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(UTCTAIBulletinAFilesLoader, t_UTCTAIBulletinAFilesLoader, UTCTAIBulletinAFilesLoader);

      void t_UTCTAIBulletinAFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIBulletinAFilesLoader), &PY_TYPE_DEF(UTCTAIBulletinAFilesLoader), module, "UTCTAIBulletinAFilesLoader", 0);
      }

      void t_UTCTAIBulletinAFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIBulletinAFilesLoader), "class_", make_descriptor(UTCTAIBulletinAFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIBulletinAFilesLoader), "wrapfn_", make_descriptor(t_UTCTAIBulletinAFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIBulletinAFilesLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIBulletinAFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIBulletinAFilesLoader::initializeClass, 1)))
          return NULL;
        return t_UTCTAIBulletinAFilesLoader::wrap_Object(UTCTAIBulletinAFilesLoader(((t_UTCTAIBulletinAFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIBulletinAFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIBulletinAFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTCTAIBulletinAFilesLoader_init_(t_UTCTAIBulletinAFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            UTCTAIBulletinAFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = UTCTAIBulletinAFilesLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            UTCTAIBulletinAFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = UTCTAIBulletinAFilesLoader(a0, a1));
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

      static PyObject *t_UTCTAIBulletinAFilesLoader_loadOffsets(t_UTCTAIBulletinAFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
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
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getNbSensorNoiseCovariance_f2f64475e4580546] = env->getMethodID(cls, "getNbSensorNoiseCovariance", "()I");
                  mids$[mid_getSensorFrequency_456d9a2f64d6b28d] = env->getMethodID(cls, "getSensorFrequency", "()D");
                  mids$[mid_getSensorNoiseCovariance_7cdc325af0834901] = env->getMethodID(cls, "getSensorNoiseCovariance", "()[D");
                  mids$[mid_getSensorNumber_f2f64475e4580546] = env->getMethodID(cls, "getSensorNumber", "()I");
                  mids$[mid_getSensorUsed_0090f7797e403f43] = env->getMethodID(cls, "getSensorUsed", "()Ljava/lang/String;");
                  mids$[mid_setNbSensorNoiseCovariance_0a2a1ac2721c0336] = env->getMethodID(cls, "setNbSensorNoiseCovariance", "(I)V");
                  mids$[mid_setSensorFrequency_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSensorFrequency", "(D)V");
                  mids$[mid_setSensorNoiseCovariance_ebc26dcaf4761286] = env->getMethodID(cls, "setSensorNoiseCovariance", "([D)V");
                  mids$[mid_setSensorNumber_0a2a1ac2721c0336] = env->getMethodID(cls, "setSensorNumber", "(I)V");
                  mids$[mid_setSensorUsed_e939c6558ae8d313] = env->getMethodID(cls, "setSensorUsed", "(Ljava/lang/String;)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeDeterminationSensor::AttitudeDeterminationSensor() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jint AttitudeDeterminationSensor::getNbSensorNoiseCovariance() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbSensorNoiseCovariance_f2f64475e4580546]);
              }

              jdouble AttitudeDeterminationSensor::getSensorFrequency() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSensorFrequency_456d9a2f64d6b28d]);
              }

              JArray< jdouble > AttitudeDeterminationSensor::getSensorNoiseCovariance() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSensorNoiseCovariance_7cdc325af0834901]));
              }

              jint AttitudeDeterminationSensor::getSensorNumber() const
              {
                return env->callIntMethod(this$, mids$[mid_getSensorNumber_f2f64475e4580546]);
              }

              ::java::lang::String AttitudeDeterminationSensor::getSensorUsed() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorUsed_0090f7797e403f43]));
              }

              void AttitudeDeterminationSensor::setNbSensorNoiseCovariance(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNbSensorNoiseCovariance_0a2a1ac2721c0336], a0);
              }

              void AttitudeDeterminationSensor::setSensorFrequency(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorFrequency_77e0f9a1f260e2e5], a0);
              }

              void AttitudeDeterminationSensor::setSensorNoiseCovariance(const JArray< jdouble > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorNoiseCovariance_ebc26dcaf4761286], a0.this$);
              }

              void AttitudeDeterminationSensor::setSensorNumber(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorNumber_0a2a1ac2721c0336], a0);
              }

              void AttitudeDeterminationSensor::setSensorUsed(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorUsed_e939c6558ae8d313], a0.this$);
              }

              void AttitudeDeterminationSensor::validate(jdouble a0) const
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
#include "java/util/ArrayDeque.h"
#include "java/util/Iterator.h"
#include "java/lang/Cloneable.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "java/util/Deque.h"
#include "java/util/ArrayDeque.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ArrayDeque::class$ = NULL;
    jmethodID *ArrayDeque::mids$ = NULL;
    bool ArrayDeque::live$ = false;

    jclass ArrayDeque::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ArrayDeque");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_26b3669ec54017ce] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_add_229c87223f486349] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_d88dbdb69255b770] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addFirst_7ca0d9438822cb0b] = env->getMethodID(cls, "addFirst", "(Ljava/lang/Object;)V");
        mids$[mid_addLast_7ca0d9438822cb0b] = env->getMethodID(cls, "addLast", "(Ljava/lang/Object;)V");
        mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_28f8ecb84dc53c6a] = env->getMethodID(cls, "clone", "()Ljava/util/ArrayDeque;");
        mids$[mid_contains_229c87223f486349] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_descendingIterator_035c6167e6569aac] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_element_dfd7647d9110ac9f] = env->getMethodID(cls, "element", "()Ljava/lang/Object;");
        mids$[mid_getFirst_dfd7647d9110ac9f] = env->getMethodID(cls, "getFirst", "()Ljava/lang/Object;");
        mids$[mid_getLast_dfd7647d9110ac9f] = env->getMethodID(cls, "getLast", "()Ljava/lang/Object;");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_offer_229c87223f486349] = env->getMethodID(cls, "offer", "(Ljava/lang/Object;)Z");
        mids$[mid_offerFirst_229c87223f486349] = env->getMethodID(cls, "offerFirst", "(Ljava/lang/Object;)Z");
        mids$[mid_offerLast_229c87223f486349] = env->getMethodID(cls, "offerLast", "(Ljava/lang/Object;)Z");
        mids$[mid_peek_dfd7647d9110ac9f] = env->getMethodID(cls, "peek", "()Ljava/lang/Object;");
        mids$[mid_peekFirst_dfd7647d9110ac9f] = env->getMethodID(cls, "peekFirst", "()Ljava/lang/Object;");
        mids$[mid_peekLast_dfd7647d9110ac9f] = env->getMethodID(cls, "peekLast", "()Ljava/lang/Object;");
        mids$[mid_poll_dfd7647d9110ac9f] = env->getMethodID(cls, "poll", "()Ljava/lang/Object;");
        mids$[mid_pollFirst_dfd7647d9110ac9f] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_dfd7647d9110ac9f] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_pop_dfd7647d9110ac9f] = env->getMethodID(cls, "pop", "()Ljava/lang/Object;");
        mids$[mid_push_7ca0d9438822cb0b] = env->getMethodID(cls, "push", "(Ljava/lang/Object;)V");
        mids$[mid_remove_dfd7647d9110ac9f] = env->getMethodID(cls, "remove", "()Ljava/lang/Object;");
        mids$[mid_remove_229c87223f486349] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_d88dbdb69255b770] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_removeFirst_dfd7647d9110ac9f] = env->getMethodID(cls, "removeFirst", "()Ljava/lang/Object;");
        mids$[mid_removeFirstOccurrence_229c87223f486349] = env->getMethodID(cls, "removeFirstOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_removeLast_dfd7647d9110ac9f] = env->getMethodID(cls, "removeLast", "()Ljava/lang/Object;");
        mids$[mid_removeLastOccurrence_229c87223f486349] = env->getMethodID(cls, "removeLastOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_retainAll_d88dbdb69255b770] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_df0341cda53d4d48] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_toArray_e81d7907eea7e008] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_66041b51ef6ee21d] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ArrayDeque::ArrayDeque() : ::java::util::AbstractCollection(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    ArrayDeque::ArrayDeque(jint a0) : ::java::util::AbstractCollection(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

    ArrayDeque::ArrayDeque(const ::java::util::Collection & a0) : ::java::util::AbstractCollection(env->newObject(initializeClass, &mids$, mid_init$_26b3669ec54017ce, a0.this$)) {}

    jboolean ArrayDeque::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_229c87223f486349], a0.this$);
    }

    jboolean ArrayDeque::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_d88dbdb69255b770], a0.this$);
    }

    void ArrayDeque::addFirst(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addFirst_7ca0d9438822cb0b], a0.this$);
    }

    void ArrayDeque::addLast(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addLast_7ca0d9438822cb0b], a0.this$);
    }

    void ArrayDeque::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
    }

    ArrayDeque ArrayDeque::clone() const
    {
      return ArrayDeque(env->callObjectMethod(this$, mids$[mid_clone_28f8ecb84dc53c6a]));
    }

    jboolean ArrayDeque::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_229c87223f486349], a0.this$);
    }

    ::java::util::Iterator ArrayDeque::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_035c6167e6569aac]));
    }

    ::java::lang::Object ArrayDeque::element() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_element_dfd7647d9110ac9f]));
    }

    ::java::lang::Object ArrayDeque::getFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getFirst_dfd7647d9110ac9f]));
    }

    ::java::lang::Object ArrayDeque::getLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getLast_dfd7647d9110ac9f]));
    }

    jboolean ArrayDeque::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    ::java::util::Iterator ArrayDeque::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
    }

    jboolean ArrayDeque::offer(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offer_229c87223f486349], a0.this$);
    }

    jboolean ArrayDeque::offerFirst(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerFirst_229c87223f486349], a0.this$);
    }

    jboolean ArrayDeque::offerLast(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerLast_229c87223f486349], a0.this$);
    }

    ::java::lang::Object ArrayDeque::peek() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peek_dfd7647d9110ac9f]));
    }

    ::java::lang::Object ArrayDeque::peekFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekFirst_dfd7647d9110ac9f]));
    }

    ::java::lang::Object ArrayDeque::peekLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekLast_dfd7647d9110ac9f]));
    }

    ::java::lang::Object ArrayDeque::poll() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_poll_dfd7647d9110ac9f]));
    }

    ::java::lang::Object ArrayDeque::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_dfd7647d9110ac9f]));
    }

    ::java::lang::Object ArrayDeque::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_dfd7647d9110ac9f]));
    }

    ::java::lang::Object ArrayDeque::pop() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pop_dfd7647d9110ac9f]));
    }

    void ArrayDeque::push(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_push_7ca0d9438822cb0b], a0.this$);
    }

    ::java::lang::Object ArrayDeque::remove() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_dfd7647d9110ac9f]));
    }

    jboolean ArrayDeque::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_229c87223f486349], a0.this$);
    }

    jboolean ArrayDeque::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_d88dbdb69255b770], a0.this$);
    }

    ::java::lang::Object ArrayDeque::removeFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeFirst_dfd7647d9110ac9f]));
    }

    jboolean ArrayDeque::removeFirstOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeFirstOccurrence_229c87223f486349], a0.this$);
    }

    ::java::lang::Object ArrayDeque::removeLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeLast_dfd7647d9110ac9f]));
    }

    jboolean ArrayDeque::removeLastOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeLastOccurrence_229c87223f486349], a0.this$);
    }

    jboolean ArrayDeque::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_d88dbdb69255b770], a0.this$);
    }

    jint ArrayDeque::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
    }

    ::java::util::Spliterator ArrayDeque::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_df0341cda53d4d48]));
    }

    JArray< ::java::lang::Object > ArrayDeque::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_e81d7907eea7e008]));
    }

    JArray< ::java::lang::Object > ArrayDeque::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_66041b51ef6ee21d], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ArrayDeque_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayDeque_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayDeque_of_(t_ArrayDeque *self, PyObject *args);
    static int t_ArrayDeque_init_(t_ArrayDeque *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ArrayDeque_add(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_addAll(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_addFirst(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_addLast(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_clear(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_clone(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_contains(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_descendingIterator(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_element(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_getFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_getLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_isEmpty(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_iterator(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_offer(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_offerFirst(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_offerLast(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_peek(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_peekFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_peekLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_poll(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_pollFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_pollLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_pop(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_push(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_remove(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_removeAll(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_removeFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_removeFirstOccurrence(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_removeLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_removeLastOccurrence(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_retainAll(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_size(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_spliterator(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_toArray(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_get__empty(t_ArrayDeque *self, void *data);
    static PyObject *t_ArrayDeque_get__first(t_ArrayDeque *self, void *data);
    static PyObject *t_ArrayDeque_get__last(t_ArrayDeque *self, void *data);
    static PyObject *t_ArrayDeque_get__parameters_(t_ArrayDeque *self, void *data);
    static PyGetSetDef t_ArrayDeque__fields_[] = {
      DECLARE_GET_FIELD(t_ArrayDeque, empty),
      DECLARE_GET_FIELD(t_ArrayDeque, first),
      DECLARE_GET_FIELD(t_ArrayDeque, last),
      DECLARE_GET_FIELD(t_ArrayDeque, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ArrayDeque__methods_[] = {
      DECLARE_METHOD(t_ArrayDeque, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayDeque, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayDeque, of_, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, add, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, addAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, addFirst, METH_O),
      DECLARE_METHOD(t_ArrayDeque, addLast, METH_O),
      DECLARE_METHOD(t_ArrayDeque, clear, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, clone, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, contains, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, element, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, getFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, getLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, iterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, offer, METH_O),
      DECLARE_METHOD(t_ArrayDeque, offerFirst, METH_O),
      DECLARE_METHOD(t_ArrayDeque, offerLast, METH_O),
      DECLARE_METHOD(t_ArrayDeque, peek, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, peekFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, peekLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, poll, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, pop, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, push, METH_O),
      DECLARE_METHOD(t_ArrayDeque, remove, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, removeFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, removeFirstOccurrence, METH_O),
      DECLARE_METHOD(t_ArrayDeque, removeLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, removeLastOccurrence, METH_O),
      DECLARE_METHOD(t_ArrayDeque, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, size, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ArrayDeque)[] = {
      { Py_tp_methods, t_ArrayDeque__methods_ },
      { Py_tp_init, (void *) t_ArrayDeque_init_ },
      { Py_tp_getset, t_ArrayDeque__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_ArrayDeque *)) get_generic_iterator< t_ArrayDeque >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ArrayDeque)[] = {
      &PY_TYPE_DEF(::java::util::AbstractCollection),
      NULL
    };

    DEFINE_TYPE(ArrayDeque, t_ArrayDeque, ArrayDeque);
    PyObject *t_ArrayDeque::wrap_Object(const ArrayDeque& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayDeque::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayDeque *self = (t_ArrayDeque *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_ArrayDeque::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayDeque::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayDeque *self = (t_ArrayDeque *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_ArrayDeque::install(PyObject *module)
    {
      installType(&PY_TYPE(ArrayDeque), &PY_TYPE_DEF(ArrayDeque), module, "ArrayDeque", 0);
    }

    void t_ArrayDeque::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayDeque), "class_", make_descriptor(ArrayDeque::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayDeque), "wrapfn_", make_descriptor(t_ArrayDeque::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayDeque), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ArrayDeque_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ArrayDeque::initializeClass, 1)))
        return NULL;
      return t_ArrayDeque::wrap_Object(ArrayDeque(((t_ArrayDeque *) arg)->object.this$));
    }
    static PyObject *t_ArrayDeque_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ArrayDeque::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ArrayDeque_of_(t_ArrayDeque *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_ArrayDeque_init_(t_ArrayDeque *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ArrayDeque object((jobject) NULL);

          INT_CALL(object = ArrayDeque());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          ArrayDeque object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = ArrayDeque(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ArrayDeque object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = ArrayDeque(a0));
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

    static PyObject *t_ArrayDeque_add(t_ArrayDeque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_ArrayDeque_addAll(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_ArrayDeque_addFirst(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.addFirst(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addFirst", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_addLast(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.addLast(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addLast", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_clear(t_ArrayDeque *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_ArrayDeque_clone(t_ArrayDeque *self)
    {
      ArrayDeque result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return t_ArrayDeque::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_ArrayDeque_contains(t_ArrayDeque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_ArrayDeque_descendingIterator(t_ArrayDeque *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_ArrayDeque_element(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.element());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_getFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_getLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_isEmpty(t_ArrayDeque *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_ArrayDeque_iterator(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_ArrayDeque_offer(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offer(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offer", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_offerFirst(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offerFirst(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offerFirst", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_offerLast(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offerLast(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offerLast", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_peek(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peek());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_peekFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peekFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_peekLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peekLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_poll(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.poll());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_pollFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_pollLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_pop(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pop());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_push(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.push(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "push", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_remove(t_ArrayDeque *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.remove());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_ArrayDeque_removeAll(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_ArrayDeque_removeFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.removeFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_removeFirstOccurrence(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.removeFirstOccurrence(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeFirstOccurrence", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_removeLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.removeLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_removeLastOccurrence(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.removeLastOccurrence(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeLastOccurrence", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_retainAll(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_ArrayDeque_size(t_ArrayDeque *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_ArrayDeque_spliterator(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_ArrayDeque_toArray(t_ArrayDeque *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "toArray", args, 2);
    }
    static PyObject *t_ArrayDeque_get__parameters_(t_ArrayDeque *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_ArrayDeque_get__empty(t_ArrayDeque *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_ArrayDeque_get__first(t_ArrayDeque *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getFirst());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_ArrayDeque_get__last(t_ArrayDeque *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getLast());
      return ::java::lang::t_Object::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeStampedPair.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeStampedPair::class$ = NULL;
      jmethodID *FieldTimeStampedPair::mids$ = NULL;
      bool FieldTimeStampedPair::live$ = false;
      jdouble FieldTimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD = (jdouble) 0;

      jclass FieldTimeStampedPair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeStampedPair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_486ad96262764383] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)V");
          mids$[mid_init$_0d343f41b92140e6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;D)V");
          mids$[mid_getDate_09b0a926600dfc14] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getFirst_2ac58ed946476d4e] = env->getMethodID(cls, "getFirst", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getSecond_2ac58ed946476d4e] = env->getMethodID(cls, "getSecond", "()Lorg/orekit/time/FieldTimeStamped;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_DATE_EQUALITY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_DATE_EQUALITY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTimeStampedPair::FieldTimeStampedPair(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_486ad96262764383, a0.this$, a1.this$)) {}

      FieldTimeStampedPair::FieldTimeStampedPair(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d343f41b92140e6, a0.this$, a1.this$, a2)) {}

      ::org::orekit::time::FieldAbsoluteDate FieldTimeStampedPair::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_09b0a926600dfc14]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedPair::getFirst() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getFirst_2ac58ed946476d4e]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedPair::getSecond() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getSecond_2ac58ed946476d4e]));
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
      static PyObject *t_FieldTimeStampedPair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedPair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedPair_of_(t_FieldTimeStampedPair *self, PyObject *args);
      static int t_FieldTimeStampedPair_init_(t_FieldTimeStampedPair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTimeStampedPair_getDate(t_FieldTimeStampedPair *self);
      static PyObject *t_FieldTimeStampedPair_getFirst(t_FieldTimeStampedPair *self);
      static PyObject *t_FieldTimeStampedPair_getSecond(t_FieldTimeStampedPair *self);
      static PyObject *t_FieldTimeStampedPair_get__date(t_FieldTimeStampedPair *self, void *data);
      static PyObject *t_FieldTimeStampedPair_get__first(t_FieldTimeStampedPair *self, void *data);
      static PyObject *t_FieldTimeStampedPair_get__second(t_FieldTimeStampedPair *self, void *data);
      static PyObject *t_FieldTimeStampedPair_get__parameters_(t_FieldTimeStampedPair *self, void *data);
      static PyGetSetDef t_FieldTimeStampedPair__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, date),
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, first),
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, second),
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeStampedPair__methods_[] = {
        DECLARE_METHOD(t_FieldTimeStampedPair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedPair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedPair, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeStampedPair, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedPair, getFirst, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedPair, getSecond, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeStampedPair)[] = {
        { Py_tp_methods, t_FieldTimeStampedPair__methods_ },
        { Py_tp_init, (void *) t_FieldTimeStampedPair_init_ },
        { Py_tp_getset, t_FieldTimeStampedPair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeStampedPair)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeStampedPair, t_FieldTimeStampedPair, FieldTimeStampedPair);
      PyObject *t_FieldTimeStampedPair::wrap_Object(const FieldTimeStampedPair& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
      {
        PyObject *obj = t_FieldTimeStampedPair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedPair *self = (t_FieldTimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
          self->parameters[2] = p2;
        }
        return obj;
      }

      PyObject *t_FieldTimeStampedPair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
      {
        PyObject *obj = t_FieldTimeStampedPair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedPair *self = (t_FieldTimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
          self->parameters[2] = p2;
        }
        return obj;
      }

      void t_FieldTimeStampedPair::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeStampedPair), &PY_TYPE_DEF(FieldTimeStampedPair), module, "FieldTimeStampedPair", 0);
      }

      void t_FieldTimeStampedPair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "class_", make_descriptor(FieldTimeStampedPair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "wrapfn_", make_descriptor(t_FieldTimeStampedPair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "boxfn_", make_descriptor(boxObject));
        env->getClass(FieldTimeStampedPair::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "DEFAULT_DATE_EQUALITY_THRESHOLD", make_descriptor(FieldTimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD));
      }

      static PyObject *t_FieldTimeStampedPair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeStampedPair::initializeClass, 1)))
          return NULL;
        return t_FieldTimeStampedPair::wrap_Object(FieldTimeStampedPair(((t_FieldTimeStampedPair *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeStampedPair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeStampedPair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeStampedPair_of_(t_FieldTimeStampedPair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 3, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTimeStampedPair_init_(t_FieldTimeStampedPair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
            {
              INT_CALL(object = FieldTimeStampedPair(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "KKD", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a2))
            {
              INT_CALL(object = FieldTimeStampedPair(a0, a1, a2));
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

      static PyObject *t_FieldTimeStampedPair_getDate(t_FieldTimeStampedPair *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[2]);
      }

      static PyObject *t_FieldTimeStampedPair_getFirst(t_FieldTimeStampedPair *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirst());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_FieldTimeStampedPair_getSecond(t_FieldTimeStampedPair *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecond());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }
      static PyObject *t_FieldTimeStampedPair_get__parameters_(t_FieldTimeStampedPair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeStampedPair_get__date(t_FieldTimeStampedPair *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedPair_get__first(t_FieldTimeStampedPair *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirst());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedPair_get__second(t_FieldTimeStampedPair *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecond());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/EulerIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EulerIntegrator::class$ = NULL;
        jmethodID *EulerIntegrator::mids$ = NULL;
        bool EulerIntegrator::live$ = false;

        jclass EulerIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EulerIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_43de1192439efa92] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_7cdc325af0834901] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_7cdc325af0834901] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_3e86721b5d422989] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/EulerStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerIntegrator::EulerIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        JArray< JArray< jdouble > > EulerIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_43de1192439efa92]));
        }

        JArray< jdouble > EulerIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_7cdc325af0834901]));
        }

        JArray< jdouble > EulerIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_7cdc325af0834901]));
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
        static PyObject *t_EulerIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EulerIntegrator_init_(t_EulerIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerIntegrator_getA(t_EulerIntegrator *self, PyObject *args);
        static PyObject *t_EulerIntegrator_getB(t_EulerIntegrator *self, PyObject *args);
        static PyObject *t_EulerIntegrator_getC(t_EulerIntegrator *self, PyObject *args);
        static PyObject *t_EulerIntegrator_get__a(t_EulerIntegrator *self, void *data);
        static PyObject *t_EulerIntegrator_get__b(t_EulerIntegrator *self, void *data);
        static PyObject *t_EulerIntegrator_get__c(t_EulerIntegrator *self, void *data);
        static PyGetSetDef t_EulerIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_EulerIntegrator, a),
          DECLARE_GET_FIELD(t_EulerIntegrator, b),
          DECLARE_GET_FIELD(t_EulerIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EulerIntegrator__methods_[] = {
          DECLARE_METHOD(t_EulerIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_EulerIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_EulerIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerIntegrator)[] = {
          { Py_tp_methods, t_EulerIntegrator__methods_ },
          { Py_tp_init, (void *) t_EulerIntegrator_init_ },
          { Py_tp_getset, t_EulerIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(EulerIntegrator, t_EulerIntegrator, EulerIntegrator);

        void t_EulerIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerIntegrator), &PY_TYPE_DEF(EulerIntegrator), module, "EulerIntegrator", 0);
        }

        void t_EulerIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegrator), "class_", make_descriptor(EulerIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegrator), "wrapfn_", make_descriptor(t_EulerIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerIntegrator::initializeClass, 1)))
            return NULL;
          return t_EulerIntegrator::wrap_Object(EulerIntegrator(((t_EulerIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EulerIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EulerIntegrator_init_(t_EulerIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          EulerIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = EulerIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EulerIntegrator_getA(t_EulerIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(EulerIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_EulerIntegrator_getB(t_EulerIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(EulerIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_EulerIntegrator_getC(t_EulerIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(EulerIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_EulerIntegrator_get__a(t_EulerIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_EulerIntegrator_get__b(t_EulerIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_EulerIntegrator_get__c(t_EulerIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PythonFieldOfView.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Throwable.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PythonFieldOfView::class$ = NULL;
        jmethodID *PythonFieldOfView::mids$ = NULL;
        bool PythonFieldOfView::live$ = false;

        jclass PythonFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PythonFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getFootprint_260aa711ad5a5b78] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getMargin_456d9a2f64d6b28d] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_offsetFromBoundary_9e70aa9759fb6e3e] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_afd63a09f6d01e4c] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOfView::PythonFieldOfView() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonFieldOfView::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonFieldOfView::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonFieldOfView::pythonExtension(jlong a0) const
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PythonFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonFieldOfView_init_(t_PythonFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOfView_finalize(t_PythonFieldOfView *self);
        static PyObject *t_PythonFieldOfView_pythonExtension(t_PythonFieldOfView *self, PyObject *args);
        static jobject JNICALL t_PythonFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static jdouble JNICALL t_PythonFieldOfView_getMargin1(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonFieldOfView_offsetFromBoundary2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
        static jobject JNICALL t_PythonFieldOfView_projectToBoundary3(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOfView_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldOfView_get__self(t_PythonFieldOfView *self, void *data);
        static PyGetSetDef t_PythonFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOfView, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOfView, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOfView, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOfView)[] = {
          { Py_tp_methods, t_PythonFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOfView_init_ },
          { Py_tp_getset, t_PythonFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOfView)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOfView, t_PythonFieldOfView, PythonFieldOfView);

        void t_PythonFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOfView), &PY_TYPE_DEF(PythonFieldOfView), module, "PythonFieldOfView", 1);
        }

        void t_PythonFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOfView), "class_", make_descriptor(PythonFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOfView), "wrapfn_", make_descriptor(t_PythonFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOfView), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOfView::initializeClass);
          JNINativeMethod methods[] = {
            { "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;", (void *) t_PythonFieldOfView_getFootprint0 },
            { "getMargin", "()D", (void *) t_PythonFieldOfView_getMargin1 },
            { "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D", (void *) t_PythonFieldOfView_offsetFromBoundary2 },
            { "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonFieldOfView_projectToBoundary3 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOfView_pythonDecRef4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOfView::wrap_Object(PythonFieldOfView(((t_PythonFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonFieldOfView_init_(t_PythonFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOfView object((jobject) NULL);

          INT_CALL(object = PythonFieldOfView());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOfView_finalize(t_PythonFieldOfView *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOfView_pythonExtension(t_PythonFieldOfView *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *o0 = ::org::orekit::frames::t_Transform::wrap_Object(::org::orekit::frames::Transform(a0));
          PyObject *o1 = ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(::org::orekit::bodies::OneAxisEllipsoid(a1));
          PyObject *result = PyObject_CallMethod(obj, "getFootprint", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getFootprint", result);
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

        static jdouble JNICALL t_PythonFieldOfView_getMargin1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getMargin", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMargin", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jdouble JNICALL t_PythonFieldOfView_offsetFromBoundary2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o2 = ::org::orekit::propagation::events::t_VisibilityTrigger::wrap_Object(::org::orekit::propagation::events::VisibilityTrigger(a2));
          PyObject *result = PyObject_CallMethod(obj, "offsetFromBoundary", "OdO", o0, (double) a1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("offsetFromBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonFieldOfView_projectToBoundary3(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "projectToBoundary", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToBoundary", result);
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

        static void JNICALL t_PythonFieldOfView_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldOfView_get__self(t_PythonFieldOfView *self, void *data)
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
#include "org/orekit/propagation/Propagator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *Propagator::class$ = NULL;
      jmethodID *Propagator::mids$ = NULL;
      bool Propagator::live$ = false;
      jdouble Propagator::DEFAULT_MASS = (jdouble) 0;

      jclass Propagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/Propagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_7dfba37c14ed8f7a] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_addEventDetector_8ef30a2ad40caceb] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_clearStepHandlers_7ae3461a92a43152] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getAdditionalStateProviders_a6156df500549a58] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getDefaultLaw_2e3626f022f9d980] = env->getStaticMethodID(cls, "getDefaultLaw", "(Lorg/orekit/frames/Frames;)Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_dd0e78d2be8aaf34] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_cfcfd130f9013e3e] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_a44bf32d2051f26b] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_isAdditionalStateManaged_6b161f495ea569b8] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_889031abe87f3b14] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_propagate_afc18c81ed763a96] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setStepHandler_dbe30cb4a191086d] = env->getMethodID(cls, "setStepHandler", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");
          mids$[mid_setStepHandler_ae887d6ebf6ba107] = env->getMethodID(cls, "setStepHandler", "(DLorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
          mids$[mid_setupMatricesComputation_01864381ad74adf6] = env->getMethodID(cls, "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_MASS = env->getStaticDoubleField(cls, "DEFAULT_MASS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void Propagator::addAdditionalStateProvider(const ::org::orekit::propagation::AdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_7dfba37c14ed8f7a], a0.this$);
      }

      void Propagator::addEventDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_8ef30a2ad40caceb], a0.this$);
      }

      void Propagator::clearEventsDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_7ae3461a92a43152]);
      }

      void Propagator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_7ae3461a92a43152]);
      }

      ::java::util::List Propagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_a6156df500549a58]));
      }

      ::org::orekit::attitudes::AttitudeProvider Propagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_5cce95036ae870ba]));
      }

      ::org::orekit::attitudes::AttitudeProvider Propagator::getDefaultLaw(const ::org::orekit::frames::Frames & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::attitudes::AttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_getDefaultLaw_2e3626f022f9d980], a0.this$));
      }

      ::org::orekit::propagation::EphemerisGenerator Propagator::getEphemerisGenerator() const
      {
        return ::org::orekit::propagation::EphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_dd0e78d2be8aaf34]));
      }

      ::java::util::Collection Propagator::getEventsDetectors() const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_cfcfd130f9013e3e]));
      }

      ::org::orekit::frames::Frame Propagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      ::org::orekit::propagation::SpacecraftState Propagator::getInitialState() const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_dd3e4a8d51055f1f]));
      }

      JArray< ::java::lang::String > Propagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924]));
      }

      ::org::orekit::propagation::sampling::StepHandlerMultiplexer Propagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::StepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_a44bf32d2051f26b]));
      }

      jboolean Propagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_6b161f495ea569b8], a0.this$);
      }

      ::org::orekit::propagation::SpacecraftState Propagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_889031abe87f3b14], a0.this$));
      }

      ::org::orekit::propagation::SpacecraftState Propagator::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_afc18c81ed763a96], a0.this$, a1.this$));
      }

      void Propagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_2b88003f931f70a7], a0.this$);
      }

      void Propagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8109c1a27d4471d3], a0.this$);
      }

      void Propagator::setStepHandler(const ::org::orekit::propagation::sampling::OrekitStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_dbe30cb4a191086d], a0.this$);
      }

      void Propagator::setStepHandler(jdouble a0, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_ae887d6ebf6ba107], a0, a1.this$);
      }

      ::org::orekit::propagation::MatricesHarvester Propagator::setupMatricesComputation(const ::java::lang::String & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) const
      {
        return ::org::orekit::propagation::MatricesHarvester(env->callObjectMethod(this$, mids$[mid_setupMatricesComputation_01864381ad74adf6], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_Propagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Propagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Propagator_addAdditionalStateProvider(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_addEventDetector(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_clearEventsDetectors(t_Propagator *self);
      static PyObject *t_Propagator_clearStepHandlers(t_Propagator *self);
      static PyObject *t_Propagator_getAdditionalStateProviders(t_Propagator *self);
      static PyObject *t_Propagator_getAttitudeProvider(t_Propagator *self);
      static PyObject *t_Propagator_getDefaultLaw(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Propagator_getEphemerisGenerator(t_Propagator *self);
      static PyObject *t_Propagator_getEventsDetectors(t_Propagator *self);
      static PyObject *t_Propagator_getFrame(t_Propagator *self);
      static PyObject *t_Propagator_getInitialState(t_Propagator *self);
      static PyObject *t_Propagator_getManagedAdditionalStates(t_Propagator *self);
      static PyObject *t_Propagator_getMultiplexer(t_Propagator *self);
      static PyObject *t_Propagator_isAdditionalStateManaged(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_propagate(t_Propagator *self, PyObject *args);
      static PyObject *t_Propagator_resetInitialState(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_setAttitudeProvider(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_setStepHandler(t_Propagator *self, PyObject *args);
      static PyObject *t_Propagator_setupMatricesComputation(t_Propagator *self, PyObject *args);
      static PyObject *t_Propagator_get__additionalStateProviders(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__attitudeProvider(t_Propagator *self, void *data);
      static int t_Propagator_set__attitudeProvider(t_Propagator *self, PyObject *arg, void *data);
      static PyObject *t_Propagator_get__ephemerisGenerator(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__eventsDetectors(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__frame(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__initialState(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__managedAdditionalStates(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__multiplexer(t_Propagator *self, void *data);
      static int t_Propagator_set__stepHandler(t_Propagator *self, PyObject *arg, void *data);
      static PyGetSetDef t_Propagator__fields_[] = {
        DECLARE_GET_FIELD(t_Propagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_Propagator, attitudeProvider),
        DECLARE_GET_FIELD(t_Propagator, ephemerisGenerator),
        DECLARE_GET_FIELD(t_Propagator, eventsDetectors),
        DECLARE_GET_FIELD(t_Propagator, frame),
        DECLARE_GET_FIELD(t_Propagator, initialState),
        DECLARE_GET_FIELD(t_Propagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_Propagator, multiplexer),
        DECLARE_SET_FIELD(t_Propagator, stepHandler),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Propagator__methods_[] = {
        DECLARE_METHOD(t_Propagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Propagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Propagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_Propagator, addEventDetector, METH_O),
        DECLARE_METHOD(t_Propagator, clearEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getDefaultLaw, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Propagator, getEphemerisGenerator, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_Propagator, propagate, METH_VARARGS),
        DECLARE_METHOD(t_Propagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_Propagator, setAttitudeProvider, METH_O),
        DECLARE_METHOD(t_Propagator, setStepHandler, METH_VARARGS),
        DECLARE_METHOD(t_Propagator, setupMatricesComputation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Propagator)[] = {
        { Py_tp_methods, t_Propagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Propagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Propagator)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::PVCoordinatesProvider),
        NULL
      };

      DEFINE_TYPE(Propagator, t_Propagator, Propagator);

      void t_Propagator::install(PyObject *module)
      {
        installType(&PY_TYPE(Propagator), &PY_TYPE_DEF(Propagator), module, "Propagator", 0);
      }

      void t_Propagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "class_", make_descriptor(Propagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "wrapfn_", make_descriptor(t_Propagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "boxfn_", make_descriptor(boxObject));
        env->getClass(Propagator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "DEFAULT_MASS", make_descriptor(Propagator::DEFAULT_MASS));
      }

      static PyObject *t_Propagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Propagator::initializeClass, 1)))
          return NULL;
        return t_Propagator::wrap_Object(Propagator(((t_Propagator *) arg)->object.this$));
      }
      static PyObject *t_Propagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Propagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Propagator_addAdditionalStateProvider(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::AdditionalStateProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::AdditionalStateProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_Propagator_addEventDetector(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_Propagator_clearEventsDetectors(t_Propagator *self)
      {
        OBJ_CALL(self->object.clearEventsDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_Propagator_clearStepHandlers(t_Propagator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_Propagator_getAdditionalStateProviders(t_Propagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(AdditionalStateProvider));
      }

      static PyObject *t_Propagator_getAttitudeProvider(t_Propagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_Propagator_getDefaultLaw(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Frames a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frames::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::propagation::Propagator::getDefaultLaw(a0));
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getDefaultLaw", arg);
        return NULL;
      }

      static PyObject *t_Propagator_getEphemerisGenerator(t_Propagator *self)
      {
        ::org::orekit::propagation::EphemerisGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(result);
      }

      static PyObject *t_Propagator_getEventsDetectors(t_Propagator *self)
      {
        ::java::util::Collection result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
      }

      static PyObject *t_Propagator_getFrame(t_Propagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Propagator_getInitialState(t_Propagator *self)
      {
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
      }

      static PyObject *t_Propagator_getManagedAdditionalStates(t_Propagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_Propagator_getMultiplexer(t_Propagator *self)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(result);
      }

      static PyObject *t_Propagator_isAdditionalStateManaged(t_Propagator *self, PyObject *arg)
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

      static PyObject *t_Propagator_propagate(t_Propagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagate(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.propagate(a0, a1));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", args);
        return NULL;
      }

      static PyObject *t_Propagator_resetInitialState(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_Propagator_setAttitudeProvider(t_Propagator *self, PyObject *arg)
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

      static PyObject *t_Propagator_setStepHandler(t_Propagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::sampling::OrekitStepHandler a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setStepHandler(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            ::org::orekit::propagation::sampling::OrekitFixedStepHandler a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setStepHandler(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setStepHandler", args);
        return NULL;
      }

      static PyObject *t_Propagator_setupMatricesComputation(t_Propagator *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
        ::org::orekit::propagation::MatricesHarvester result((jobject) NULL);

        if (!parseArgs(args, "skk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.setupMatricesComputation(a0, a1, a2));
          return ::org::orekit::propagation::t_MatricesHarvester::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "setupMatricesComputation", args);
        return NULL;
      }

      static PyObject *t_Propagator_get__additionalStateProviders(t_Propagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__attitudeProvider(t_Propagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_Propagator_set__attitudeProvider(t_Propagator *self, PyObject *arg, void *data)
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

      static PyObject *t_Propagator_get__ephemerisGenerator(t_Propagator *self, void *data)
      {
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__eventsDetectors(t_Propagator *self, void *data)
      {
        ::java::util::Collection value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__frame(t_Propagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__initialState(t_Propagator *self, void *data)
      {
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__managedAdditionalStates(t_Propagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_Propagator_get__multiplexer(t_Propagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(value);
      }

      static int t_Propagator_set__stepHandler(t_Propagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::sampling::OrekitStepHandler value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &value))
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
#include "org/orekit/propagation/events/NodeDetector.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/events/NodeDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *NodeDetector::class$ = NULL;
        jmethodID *NodeDetector::mids$ = NULL;
        bool NodeDetector::live$ = false;

        jclass NodeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/NodeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b1992bd1bb70f476] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
            mids$[mid_init$_77b9fd425e59f30f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_init$_b2b811ab68527504] = env->getMethodID(cls, "<init>", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_create_06df47ed7751533d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/NodeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NodeDetector::NodeDetector(const ::org::orekit::frames::Frame & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b1992bd1bb70f476, a0.this$)) {}

        NodeDetector::NodeDetector(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_77b9fd425e59f30f, a0.this$, a1.this$)) {}

        NodeDetector::NodeDetector(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b2b811ab68527504, a0, a1.this$, a2.this$)) {}

        jdouble NodeDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::frames::Frame NodeDetector::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
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
        static PyObject *t_NodeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodeDetector_of_(t_NodeDetector *self, PyObject *args);
        static int t_NodeDetector_init_(t_NodeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NodeDetector_g(t_NodeDetector *self, PyObject *args);
        static PyObject *t_NodeDetector_getFrame(t_NodeDetector *self);
        static PyObject *t_NodeDetector_get__frame(t_NodeDetector *self, void *data);
        static PyObject *t_NodeDetector_get__parameters_(t_NodeDetector *self, void *data);
        static PyGetSetDef t_NodeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_NodeDetector, frame),
          DECLARE_GET_FIELD(t_NodeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NodeDetector__methods_[] = {
          DECLARE_METHOD(t_NodeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_NodeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_NodeDetector, getFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NodeDetector)[] = {
          { Py_tp_methods, t_NodeDetector__methods_ },
          { Py_tp_init, (void *) t_NodeDetector_init_ },
          { Py_tp_getset, t_NodeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NodeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(NodeDetector, t_NodeDetector, NodeDetector);
        PyObject *t_NodeDetector::wrap_Object(const NodeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodeDetector *self = (t_NodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NodeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodeDetector *self = (t_NodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NodeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(NodeDetector), &PY_TYPE_DEF(NodeDetector), module, "NodeDetector", 0);
        }

        void t_NodeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodeDetector), "class_", make_descriptor(NodeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodeDetector), "wrapfn_", make_descriptor(t_NodeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NodeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NodeDetector::initializeClass, 1)))
            return NULL;
          return t_NodeDetector::wrap_Object(NodeDetector(((t_NodeDetector *) arg)->object.this$));
        }
        static PyObject *t_NodeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NodeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NodeDetector_of_(t_NodeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NodeDetector_init_(t_NodeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              NodeDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
              {
                INT_CALL(object = NodeDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NodeDetector);
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              NodeDetector object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
              {
                INT_CALL(object = NodeDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NodeDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::frames::Frame a2((jobject) NULL);
              NodeDetector object((jobject) NULL);

              if (!parseArgs(args, "Dkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = NodeDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NodeDetector);
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

        static PyObject *t_NodeDetector_g(t_NodeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NodeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_NodeDetector_getFrame(t_NodeDetector *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_NodeDetector_get__parameters_(t_NodeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_NodeDetector_get__frame(t_NodeDetector *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonUTCTAIOffsetsLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonUTCTAIOffsetsLoader::class$ = NULL;
      jmethodID *PythonUTCTAIOffsetsLoader::mids$ = NULL;
      bool PythonUTCTAIOffsetsLoader::live$ = false;

      jclass PythonUTCTAIOffsetsLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonUTCTAIOffsetsLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_loadOffsets_a6156df500549a58] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonUTCTAIOffsetsLoader::PythonUTCTAIOffsetsLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonUTCTAIOffsetsLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonUTCTAIOffsetsLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonUTCTAIOffsetsLoader::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonUTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonUTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonUTCTAIOffsetsLoader_init_(t_PythonUTCTAIOffsetsLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonUTCTAIOffsetsLoader_finalize(t_PythonUTCTAIOffsetsLoader *self);
      static PyObject *t_PythonUTCTAIOffsetsLoader_pythonExtension(t_PythonUTCTAIOffsetsLoader *self, PyObject *args);
      static jobject JNICALL t_PythonUTCTAIOffsetsLoader_loadOffsets0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonUTCTAIOffsetsLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonUTCTAIOffsetsLoader_get__self(t_PythonUTCTAIOffsetsLoader *self, void *data);
      static PyGetSetDef t_PythonUTCTAIOffsetsLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonUTCTAIOffsetsLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonUTCTAIOffsetsLoader__methods_[] = {
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonUTCTAIOffsetsLoader)[] = {
        { Py_tp_methods, t_PythonUTCTAIOffsetsLoader__methods_ },
        { Py_tp_init, (void *) t_PythonUTCTAIOffsetsLoader_init_ },
        { Py_tp_getset, t_PythonUTCTAIOffsetsLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonUTCTAIOffsetsLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonUTCTAIOffsetsLoader, t_PythonUTCTAIOffsetsLoader, PythonUTCTAIOffsetsLoader);

      void t_PythonUTCTAIOffsetsLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonUTCTAIOffsetsLoader), &PY_TYPE_DEF(PythonUTCTAIOffsetsLoader), module, "PythonUTCTAIOffsetsLoader", 1);
      }

      void t_PythonUTCTAIOffsetsLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUTCTAIOffsetsLoader), "class_", make_descriptor(PythonUTCTAIOffsetsLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUTCTAIOffsetsLoader), "wrapfn_", make_descriptor(t_PythonUTCTAIOffsetsLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUTCTAIOffsetsLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonUTCTAIOffsetsLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "loadOffsets", "()Ljava/util/List;", (void *) t_PythonUTCTAIOffsetsLoader_loadOffsets0 },
          { "pythonDecRef", "()V", (void *) t_PythonUTCTAIOffsetsLoader_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonUTCTAIOffsetsLoader::initializeClass, 1)))
          return NULL;
        return t_PythonUTCTAIOffsetsLoader::wrap_Object(PythonUTCTAIOffsetsLoader(((t_PythonUTCTAIOffsetsLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonUTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonUTCTAIOffsetsLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonUTCTAIOffsetsLoader_init_(t_PythonUTCTAIOffsetsLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonUTCTAIOffsetsLoader object((jobject) NULL);

        INT_CALL(object = PythonUTCTAIOffsetsLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_finalize(t_PythonUTCTAIOffsetsLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_pythonExtension(t_PythonUTCTAIOffsetsLoader *self, PyObject *args)
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

      static jobject JNICALL t_PythonUTCTAIOffsetsLoader_loadOffsets0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUTCTAIOffsetsLoader::mids$[PythonUTCTAIOffsetsLoader::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "loadOffsets", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("loadOffsets", result);
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

      static void JNICALL t_PythonUTCTAIOffsetsLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUTCTAIOffsetsLoader::mids$[PythonUTCTAIOffsetsLoader::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonUTCTAIOffsetsLoader::mids$[PythonUTCTAIOffsetsLoader::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_get__self(t_PythonUTCTAIOffsetsLoader *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/PythonAbstractLambdaMethod.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractLambdaMethod::class$ = NULL;
          jmethodID *PythonAbstractLambdaMethod::mids$ = NULL;
          bool PythonAbstractLambdaMethod::live$ = false;

          jclass PythonAbstractLambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractLambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_discreteSearch_7ae3461a92a43152] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_inverseDecomposition_7ae3461a92a43152] = env->getMethodID(cls, "inverseDecomposition", "()V");
              mids$[mid_ltdlDecomposition_7ae3461a92a43152] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_reduction_7ae3461a92a43152] = env->getMethodID(cls, "reduction", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractLambdaMethod::PythonAbstractLambdaMethod() : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonAbstractLambdaMethod::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonAbstractLambdaMethod::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonAbstractLambdaMethod::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonAbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractLambdaMethod_init_(t_PythonAbstractLambdaMethod *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractLambdaMethod_finalize(t_PythonAbstractLambdaMethod *self);
          static PyObject *t_PythonAbstractLambdaMethod_pythonExtension(t_PythonAbstractLambdaMethod *self, PyObject *args);
          static void JNICALL t_PythonAbstractLambdaMethod_discreteSearch0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_inverseDecomposition1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_ltdlDecomposition2(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_reduction4(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractLambdaMethod_get__self(t_PythonAbstractLambdaMethod *self, void *data);
          static PyGetSetDef t_PythonAbstractLambdaMethod__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractLambdaMethod, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractLambdaMethod__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractLambdaMethod)[] = {
            { Py_tp_methods, t_PythonAbstractLambdaMethod__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractLambdaMethod_init_ },
            { Py_tp_getset, t_PythonAbstractLambdaMethod__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractLambdaMethod)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod),
            NULL
          };

          DEFINE_TYPE(PythonAbstractLambdaMethod, t_PythonAbstractLambdaMethod, PythonAbstractLambdaMethod);

          void t_PythonAbstractLambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractLambdaMethod), &PY_TYPE_DEF(PythonAbstractLambdaMethod), module, "PythonAbstractLambdaMethod", 1);
          }

          void t_PythonAbstractLambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractLambdaMethod), "class_", make_descriptor(PythonAbstractLambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractLambdaMethod), "wrapfn_", make_descriptor(t_PythonAbstractLambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractLambdaMethod), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractLambdaMethod::initializeClass);
            JNINativeMethod methods[] = {
              { "discreteSearch", "()V", (void *) t_PythonAbstractLambdaMethod_discreteSearch0 },
              { "inverseDecomposition", "()V", (void *) t_PythonAbstractLambdaMethod_inverseDecomposition1 },
              { "ltdlDecomposition", "()V", (void *) t_PythonAbstractLambdaMethod_ltdlDecomposition2 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractLambdaMethod_pythonDecRef3 },
              { "reduction", "()V", (void *) t_PythonAbstractLambdaMethod_reduction4 },
            };
            env->registerNatives(cls, methods, 5);
          }

          static PyObject *t_PythonAbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractLambdaMethod::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractLambdaMethod::wrap_Object(PythonAbstractLambdaMethod(((t_PythonAbstractLambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractLambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractLambdaMethod_init_(t_PythonAbstractLambdaMethod *self, PyObject *args, PyObject *kwds)
          {
            PythonAbstractLambdaMethod object((jobject) NULL);

            INT_CALL(object = PythonAbstractLambdaMethod());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractLambdaMethod_finalize(t_PythonAbstractLambdaMethod *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractLambdaMethod_pythonExtension(t_PythonAbstractLambdaMethod *self, PyObject *args)
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

          static void JNICALL t_PythonAbstractLambdaMethod_discreteSearch0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "discreteSearch", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractLambdaMethod_inverseDecomposition1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "inverseDecomposition", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractLambdaMethod_ltdlDecomposition2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "ltdlDecomposition", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractLambdaMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonAbstractLambdaMethod_reduction4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "reduction", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonAbstractLambdaMethod_get__self(t_PythonAbstractLambdaMethod *self, void *data)
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
#include "org/orekit/utils/ElevationMask.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ElevationMask::class$ = NULL;
      jmethodID *ElevationMask::mids$ = NULL;
      bool ElevationMask::live$ = false;

      jclass ElevationMask::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ElevationMask");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d660c7a97bf55272] = env->getMethodID(cls, "<init>", "([[D)V");
          mids$[mid_getElevation_0ba5fed9597b693e] = env->getMethodID(cls, "getElevation", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ElevationMask::ElevationMask(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d660c7a97bf55272, a0.this$)) {}

      jdouble ElevationMask::getElevation(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElevation_0ba5fed9597b693e], a0);
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
      static PyObject *t_ElevationMask_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ElevationMask_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ElevationMask_init_(t_ElevationMask *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ElevationMask_getElevation(t_ElevationMask *self, PyObject *arg);

      static PyMethodDef t_ElevationMask__methods_[] = {
        DECLARE_METHOD(t_ElevationMask, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ElevationMask, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ElevationMask, getElevation, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ElevationMask)[] = {
        { Py_tp_methods, t_ElevationMask__methods_ },
        { Py_tp_init, (void *) t_ElevationMask_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ElevationMask)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ElevationMask, t_ElevationMask, ElevationMask);

      void t_ElevationMask::install(PyObject *module)
      {
        installType(&PY_TYPE(ElevationMask), &PY_TYPE_DEF(ElevationMask), module, "ElevationMask", 0);
      }

      void t_ElevationMask::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationMask), "class_", make_descriptor(ElevationMask::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationMask), "wrapfn_", make_descriptor(t_ElevationMask::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationMask), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ElevationMask_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ElevationMask::initializeClass, 1)))
          return NULL;
        return t_ElevationMask::wrap_Object(ElevationMask(((t_ElevationMask *) arg)->object.this$));
      }
      static PyObject *t_ElevationMask_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ElevationMask::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ElevationMask_init_(t_ElevationMask *self, PyObject *args, PyObject *kwds)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        ElevationMask object((jobject) NULL);

        if (!parseArgs(args, "[[D", &a0))
        {
          INT_CALL(object = ElevationMask(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ElevationMask_getElevation(t_ElevationMask *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getElevation(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getElevation", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/GeometricMean.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/GeometricMean.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *GeometricMean::class$ = NULL;
          jmethodID *GeometricMean::mids$ = NULL;
          bool GeometricMean::live$ = false;

          jclass GeometricMean::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/GeometricMean");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_2808634b771b9a30] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/summary/SumOfLogs;)V");
              mids$[mid_aggregate_9882d23af18eb664] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/GeometricMean;)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_9c769f7ab9843cf4] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/GeometricMean;");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GeometricMean::GeometricMean() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          GeometricMean::GeometricMean(const ::org::hipparchus::stat::descriptive::summary::SumOfLogs & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_2808634b771b9a30, a0.this$)) {}

          void GeometricMean::aggregate(const GeometricMean & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_9882d23af18eb664], a0.this$);
          }

          void GeometricMean::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          GeometricMean GeometricMean::copy() const
          {
            return GeometricMean(env->callObjectMethod(this$, mids$[mid_copy_9c769f7ab9843cf4]));
          }

          jdouble GeometricMean::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          jlong GeometricMean::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          jdouble GeometricMean::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          void GeometricMean::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
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
          static PyObject *t_GeometricMean_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeometricMean_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GeometricMean_init_(t_GeometricMean *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GeometricMean_aggregate(t_GeometricMean *self, PyObject *arg);
          static PyObject *t_GeometricMean_clear(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_copy(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_evaluate(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_getN(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_getResult(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_increment(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_get__n(t_GeometricMean *self, void *data);
          static PyObject *t_GeometricMean_get__result(t_GeometricMean *self, void *data);
          static PyGetSetDef t_GeometricMean__fields_[] = {
            DECLARE_GET_FIELD(t_GeometricMean, n),
            DECLARE_GET_FIELD(t_GeometricMean, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GeometricMean__methods_[] = {
            DECLARE_METHOD(t_GeometricMean, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometricMean, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometricMean, aggregate, METH_O),
            DECLARE_METHOD(t_GeometricMean, clear, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, copy, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, getN, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, getResult, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeometricMean)[] = {
            { Py_tp_methods, t_GeometricMean__methods_ },
            { Py_tp_init, (void *) t_GeometricMean_init_ },
            { Py_tp_getset, t_GeometricMean__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeometricMean)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(GeometricMean, t_GeometricMean, GeometricMean);

          void t_GeometricMean::install(PyObject *module)
          {
            installType(&PY_TYPE(GeometricMean), &PY_TYPE_DEF(GeometricMean), module, "GeometricMean", 0);
          }

          void t_GeometricMean::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricMean), "class_", make_descriptor(GeometricMean::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricMean), "wrapfn_", make_descriptor(t_GeometricMean::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricMean), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeometricMean_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeometricMean::initializeClass, 1)))
              return NULL;
            return t_GeometricMean::wrap_Object(GeometricMean(((t_GeometricMean *) arg)->object.this$));
          }
          static PyObject *t_GeometricMean_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeometricMean::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GeometricMean_init_(t_GeometricMean *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                GeometricMean object((jobject) NULL);

                INT_CALL(object = GeometricMean());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::summary::SumOfLogs a0((jobject) NULL);
                GeometricMean object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::summary::SumOfLogs::initializeClass, &a0))
                {
                  INT_CALL(object = GeometricMean(a0));
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

          static PyObject *t_GeometricMean_aggregate(t_GeometricMean *self, PyObject *arg)
          {
            GeometricMean a0((jobject) NULL);

            if (!parseArg(arg, "k", GeometricMean::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_GeometricMean_clear(t_GeometricMean *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_GeometricMean_copy(t_GeometricMean *self, PyObject *args)
          {
            GeometricMean result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_GeometricMean::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_GeometricMean_evaluate(t_GeometricMean *self, PyObject *args)
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

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_GeometricMean_getN(t_GeometricMean *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_GeometricMean_getResult(t_GeometricMean *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_GeometricMean_increment(t_GeometricMean *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_GeometricMean_get__n(t_GeometricMean *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_GeometricMean_get__result(t_GeometricMean *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *SecularAndHarmonic::class$ = NULL;
      jmethodID *SecularAndHarmonic::mids$ = NULL;
      bool SecularAndHarmonic::live$ = false;

      jclass SecularAndHarmonic::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/SecularAndHarmonic");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7d4f41c65056f174] = env->getMethodID(cls, "<init>", "(I[D)V");
          mids$[mid_addPoint_076f09dda44638d8] = env->getMethodID(cls, "addPoint", "(Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addWeightedPoint_7a7066686bdc7efc] = env->getMethodID(cls, "addWeightedPoint", "(Lorg/orekit/time/AbsoluteDate;DD)V");
          mids$[mid_approximateAsPolynomialOnly_0299ee3da6eb8f2b] = env->getMethodID(cls, "approximateAsPolynomialOnly", "(ILorg/orekit/time/AbsoluteDate;IILorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)[D");
          mids$[mid_fit_7ae3461a92a43152] = env->getMethodID(cls, "fit", "()V");
          mids$[mid_getFittedParameters_7cdc325af0834901] = env->getMethodID(cls, "getFittedParameters", "()[D");
          mids$[mid_getHarmonicAmplitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getHarmonicAmplitude", "()D");
          mids$[mid_getPulsations_7cdc325af0834901] = env->getMethodID(cls, "getPulsations", "()[D");
          mids$[mid_getReferenceDate_aaa854c403487cf3] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getSecularDegree_f2f64475e4580546] = env->getMethodID(cls, "getSecularDegree", "()I");
          mids$[mid_meanDerivative_70f13864c71b813e] = env->getMethodID(cls, "meanDerivative", "(Lorg/orekit/time/AbsoluteDate;II)D");
          mids$[mid_meanSecondDerivative_70f13864c71b813e] = env->getMethodID(cls, "meanSecondDerivative", "(Lorg/orekit/time/AbsoluteDate;II)D");
          mids$[mid_meanValue_70f13864c71b813e] = env->getMethodID(cls, "meanValue", "(Lorg/orekit/time/AbsoluteDate;II)D");
          mids$[mid_osculatingDerivative_e912d21057defe63] = env->getMethodID(cls, "osculatingDerivative", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_osculatingSecondDerivative_e912d21057defe63] = env->getMethodID(cls, "osculatingSecondDerivative", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_osculatingValue_e912d21057defe63] = env->getMethodID(cls, "osculatingValue", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_resetFitting_9787c4eff1570d3f] = env->getMethodID(cls, "resetFitting", "(Lorg/orekit/time/AbsoluteDate;[D)V");
          mids$[mid_setConvergenceRMS_77e0f9a1f260e2e5] = env->getMethodID(cls, "setConvergenceRMS", "(D)V");
          mids$[mid_setMaxIter_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaxIter", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SecularAndHarmonic::SecularAndHarmonic(jint a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7d4f41c65056f174, a0, a1.this$)) {}

      void SecularAndHarmonic::addPoint(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addPoint_076f09dda44638d8], a0.this$, a1);
      }

      void SecularAndHarmonic::addWeightedPoint(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addWeightedPoint_7a7066686bdc7efc], a0.this$, a1, a2);
      }

      JArray< jdouble > SecularAndHarmonic::approximateAsPolynomialOnly(jint a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, jint a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::orekit::time::AbsoluteDate & a5, jdouble a6) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_approximateAsPolynomialOnly_0299ee3da6eb8f2b], a0, a1.this$, a2, a3, a4.this$, a5.this$, a6));
      }

      void SecularAndHarmonic::fit() const
      {
        env->callVoidMethod(this$, mids$[mid_fit_7ae3461a92a43152]);
      }

      JArray< jdouble > SecularAndHarmonic::getFittedParameters() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getFittedParameters_7cdc325af0834901]));
      }

      jdouble SecularAndHarmonic::getHarmonicAmplitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHarmonicAmplitude_456d9a2f64d6b28d]);
      }

      JArray< jdouble > SecularAndHarmonic::getPulsations() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPulsations_7cdc325af0834901]));
      }

      ::org::orekit::time::AbsoluteDate SecularAndHarmonic::getReferenceDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_aaa854c403487cf3]));
      }

      jint SecularAndHarmonic::getSecularDegree() const
      {
        return env->callIntMethod(this$, mids$[mid_getSecularDegree_f2f64475e4580546]);
      }

      jdouble SecularAndHarmonic::meanDerivative(const ::org::orekit::time::AbsoluteDate & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_meanDerivative_70f13864c71b813e], a0.this$, a1, a2);
      }

      jdouble SecularAndHarmonic::meanSecondDerivative(const ::org::orekit::time::AbsoluteDate & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_meanSecondDerivative_70f13864c71b813e], a0.this$, a1, a2);
      }

      jdouble SecularAndHarmonic::meanValue(const ::org::orekit::time::AbsoluteDate & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_meanValue_70f13864c71b813e], a0.this$, a1, a2);
      }

      jdouble SecularAndHarmonic::osculatingDerivative(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_osculatingDerivative_e912d21057defe63], a0.this$);
      }

      jdouble SecularAndHarmonic::osculatingSecondDerivative(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_osculatingSecondDerivative_e912d21057defe63], a0.this$);
      }

      jdouble SecularAndHarmonic::osculatingValue(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_osculatingValue_e912d21057defe63], a0.this$);
      }

      void SecularAndHarmonic::resetFitting(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_resetFitting_9787c4eff1570d3f], a0.this$, a1.this$);
      }

      void SecularAndHarmonic::setConvergenceRMS(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setConvergenceRMS_77e0f9a1f260e2e5], a0);
      }

      void SecularAndHarmonic::setMaxIter(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxIter_0a2a1ac2721c0336], a0);
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
      static PyObject *t_SecularAndHarmonic_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SecularAndHarmonic_init_(t_SecularAndHarmonic *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SecularAndHarmonic_addPoint(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_addWeightedPoint(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_approximateAsPolynomialOnly(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_fit(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getFittedParameters(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getHarmonicAmplitude(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getPulsations(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getReferenceDate(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getSecularDegree(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_meanDerivative(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_meanSecondDerivative(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_meanValue(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_osculatingDerivative(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_osculatingSecondDerivative(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_osculatingValue(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_resetFitting(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_setConvergenceRMS(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_setMaxIter(t_SecularAndHarmonic *self, PyObject *arg);
      static int t_SecularAndHarmonic_set__convergenceRMS(t_SecularAndHarmonic *self, PyObject *arg, void *data);
      static PyObject *t_SecularAndHarmonic_get__fittedParameters(t_SecularAndHarmonic *self, void *data);
      static PyObject *t_SecularAndHarmonic_get__harmonicAmplitude(t_SecularAndHarmonic *self, void *data);
      static int t_SecularAndHarmonic_set__maxIter(t_SecularAndHarmonic *self, PyObject *arg, void *data);
      static PyObject *t_SecularAndHarmonic_get__pulsations(t_SecularAndHarmonic *self, void *data);
      static PyObject *t_SecularAndHarmonic_get__referenceDate(t_SecularAndHarmonic *self, void *data);
      static PyObject *t_SecularAndHarmonic_get__secularDegree(t_SecularAndHarmonic *self, void *data);
      static PyGetSetDef t_SecularAndHarmonic__fields_[] = {
        DECLARE_SET_FIELD(t_SecularAndHarmonic, convergenceRMS),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, fittedParameters),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, harmonicAmplitude),
        DECLARE_SET_FIELD(t_SecularAndHarmonic, maxIter),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, pulsations),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, referenceDate),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, secularDegree),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SecularAndHarmonic__methods_[] = {
        DECLARE_METHOD(t_SecularAndHarmonic, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecularAndHarmonic, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecularAndHarmonic, addPoint, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, addWeightedPoint, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, approximateAsPolynomialOnly, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, fit, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getFittedParameters, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getHarmonicAmplitude, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getPulsations, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getReferenceDate, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getSecularDegree, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, meanDerivative, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, meanSecondDerivative, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, meanValue, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, osculatingDerivative, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, osculatingSecondDerivative, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, osculatingValue, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, resetFitting, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, setConvergenceRMS, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, setMaxIter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SecularAndHarmonic)[] = {
        { Py_tp_methods, t_SecularAndHarmonic__methods_ },
        { Py_tp_init, (void *) t_SecularAndHarmonic_init_ },
        { Py_tp_getset, t_SecularAndHarmonic__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SecularAndHarmonic)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SecularAndHarmonic, t_SecularAndHarmonic, SecularAndHarmonic);

      void t_SecularAndHarmonic::install(PyObject *module)
      {
        installType(&PY_TYPE(SecularAndHarmonic), &PY_TYPE_DEF(SecularAndHarmonic), module, "SecularAndHarmonic", 0);
      }

      void t_SecularAndHarmonic::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecularAndHarmonic), "class_", make_descriptor(SecularAndHarmonic::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecularAndHarmonic), "wrapfn_", make_descriptor(t_SecularAndHarmonic::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecularAndHarmonic), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SecularAndHarmonic_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SecularAndHarmonic::initializeClass, 1)))
          return NULL;
        return t_SecularAndHarmonic::wrap_Object(SecularAndHarmonic(((t_SecularAndHarmonic *) arg)->object.this$));
      }
      static PyObject *t_SecularAndHarmonic_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SecularAndHarmonic::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SecularAndHarmonic_init_(t_SecularAndHarmonic *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        SecularAndHarmonic object((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          INT_CALL(object = SecularAndHarmonic(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SecularAndHarmonic_addPoint(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.addPoint(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addPoint", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_addWeightedPoint(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;

        if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addWeightedPoint(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addWeightedPoint", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_approximateAsPolynomialOnly(t_SecularAndHarmonic *self, PyObject *args)
      {
        jint a0;
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jint a2;
        jint a3;
        ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
        jdouble a6;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "IkIIkkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          OBJ_CALL(result = self->object.approximateAsPolynomialOnly(a0, a1, a2, a3, a4, a5, a6));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "approximateAsPolynomialOnly", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_fit(t_SecularAndHarmonic *self)
      {
        OBJ_CALL(self->object.fit());
        Py_RETURN_NONE;
      }

      static PyObject *t_SecularAndHarmonic_getFittedParameters(t_SecularAndHarmonic *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getFittedParameters());
        return result.wrap();
      }

      static PyObject *t_SecularAndHarmonic_getHarmonicAmplitude(t_SecularAndHarmonic *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHarmonicAmplitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SecularAndHarmonic_getPulsations(t_SecularAndHarmonic *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPulsations());
        return result.wrap();
      }

      static PyObject *t_SecularAndHarmonic_getReferenceDate(t_SecularAndHarmonic *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_SecularAndHarmonic_getSecularDegree(t_SecularAndHarmonic *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSecularDegree());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SecularAndHarmonic_meanDerivative(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        jint a2;
        jdouble result;

        if (!parseArgs(args, "kII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.meanDerivative(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "meanDerivative", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_meanSecondDerivative(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        jint a2;
        jdouble result;

        if (!parseArgs(args, "kII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.meanSecondDerivative(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "meanSecondDerivative", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_meanValue(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        jint a2;
        jdouble result;

        if (!parseArgs(args, "kII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.meanValue(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "meanValue", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_osculatingDerivative(t_SecularAndHarmonic *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.osculatingDerivative(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "osculatingDerivative", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_osculatingSecondDerivative(t_SecularAndHarmonic *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.osculatingSecondDerivative(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "osculatingSecondDerivative", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_osculatingValue(t_SecularAndHarmonic *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.osculatingValue(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "osculatingValue", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_resetFitting(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.resetFitting(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetFitting", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_setConvergenceRMS(t_SecularAndHarmonic *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setConvergenceRMS(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setConvergenceRMS", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_setMaxIter(t_SecularAndHarmonic *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxIter(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxIter", arg);
        return NULL;
      }

      static int t_SecularAndHarmonic_set__convergenceRMS(t_SecularAndHarmonic *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setConvergenceRMS(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "convergenceRMS", arg);
        return -1;
      }

      static PyObject *t_SecularAndHarmonic_get__fittedParameters(t_SecularAndHarmonic *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getFittedParameters());
        return value.wrap();
      }

      static PyObject *t_SecularAndHarmonic_get__harmonicAmplitude(t_SecularAndHarmonic *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHarmonicAmplitude());
        return PyFloat_FromDouble((double) value);
      }

      static int t_SecularAndHarmonic_set__maxIter(t_SecularAndHarmonic *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxIter(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxIter", arg);
        return -1;
      }

      static PyObject *t_SecularAndHarmonic_get__pulsations(t_SecularAndHarmonic *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPulsations());
        return value.wrap();
      }

      static PyObject *t_SecularAndHarmonic_get__referenceDate(t_SecularAndHarmonic *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_SecularAndHarmonic_get__secularDegree(t_SecularAndHarmonic *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSecularDegree());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *InterpolationGrid::class$ = NULL;
            jmethodID *InterpolationGrid::mids$ = NULL;
            bool InterpolationGrid::live$ = false;

            jclass InterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getGridPoints_8f7fecc995f3f6c8] = env->getMethodID(cls, "getGridPoints", "(DD)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > InterpolationGrid::getGridPoints(jdouble a0, jdouble a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGridPoints_8f7fecc995f3f6c8], a0, a1));
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
            static PyObject *t_InterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_InterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_InterpolationGrid_getGridPoints(t_InterpolationGrid *self, PyObject *args);

            static PyMethodDef t_InterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_InterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_InterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_InterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(InterpolationGrid)[] = {
              { Py_tp_methods, t_InterpolationGrid__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(InterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(InterpolationGrid, t_InterpolationGrid, InterpolationGrid);

            void t_InterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(InterpolationGrid), &PY_TYPE_DEF(InterpolationGrid), module, "InterpolationGrid", 0);
            }

            void t_InterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationGrid), "class_", make_descriptor(InterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationGrid), "wrapfn_", make_descriptor(t_InterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_InterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, InterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_InterpolationGrid::wrap_Object(InterpolationGrid(((t_InterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_InterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, InterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_InterpolationGrid_getGridPoints(t_InterpolationGrid *self, PyObject *args)
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
#include "org/orekit/files/ccsds/section/Header.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Header::class$ = NULL;
          jmethodID *Header::mids$ = NULL;
          bool Header::live$ = false;

          jclass Header::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Header");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_getClassification_0090f7797e403f43] = env->getMethodID(cls, "getClassification", "()Ljava/lang/String;");
              mids$[mid_getCreationDate_aaa854c403487cf3] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getFormatVersion_456d9a2f64d6b28d] = env->getMethodID(cls, "getFormatVersion", "()D");
              mids$[mid_getMessageId_0090f7797e403f43] = env->getMethodID(cls, "getMessageId", "()Ljava/lang/String;");
              mids$[mid_getOriginator_0090f7797e403f43] = env->getMethodID(cls, "getOriginator", "()Ljava/lang/String;");
              mids$[mid_setClassification_e939c6558ae8d313] = env->getMethodID(cls, "setClassification", "(Ljava/lang/String;)V");
              mids$[mid_setCreationDate_e82d68cd9f886886] = env->getMethodID(cls, "setCreationDate", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setFormatVersion_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFormatVersion", "(D)V");
              mids$[mid_setMessageId_e939c6558ae8d313] = env->getMethodID(cls, "setMessageId", "(Ljava/lang/String;)V");
              mids$[mid_setOriginator_e939c6558ae8d313] = env->getMethodID(cls, "setOriginator", "(Ljava/lang/String;)V");
              mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Header::Header(jdouble a0, jdouble a1) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

          ::java::lang::String Header::getClassification() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassification_0090f7797e403f43]));
          }

          ::org::orekit::time::AbsoluteDate Header::getCreationDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_aaa854c403487cf3]));
          }

          jdouble Header::getFormatVersion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFormatVersion_456d9a2f64d6b28d]);
          }

          ::java::lang::String Header::getMessageId() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessageId_0090f7797e403f43]));
          }

          ::java::lang::String Header::getOriginator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginator_0090f7797e403f43]));
          }

          void Header::setClassification(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setClassification_e939c6558ae8d313], a0.this$);
          }

          void Header::setCreationDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDate_e82d68cd9f886886], a0.this$);
          }

          void Header::setFormatVersion(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFormatVersion_77e0f9a1f260e2e5], a0);
          }

          void Header::setMessageId(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMessageId_e939c6558ae8d313], a0.this$);
          }

          void Header::setOriginator(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOriginator_e939c6558ae8d313], a0.this$);
          }

          void Header::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
          static PyObject *t_Header_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Header_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Header_init_(t_Header *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Header_getClassification(t_Header *self);
          static PyObject *t_Header_getCreationDate(t_Header *self);
          static PyObject *t_Header_getFormatVersion(t_Header *self);
          static PyObject *t_Header_getMessageId(t_Header *self);
          static PyObject *t_Header_getOriginator(t_Header *self);
          static PyObject *t_Header_setClassification(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setCreationDate(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setFormatVersion(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setMessageId(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setOriginator(t_Header *self, PyObject *arg);
          static PyObject *t_Header_validate(t_Header *self, PyObject *args);
          static PyObject *t_Header_get__classification(t_Header *self, void *data);
          static int t_Header_set__classification(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__creationDate(t_Header *self, void *data);
          static int t_Header_set__creationDate(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__formatVersion(t_Header *self, void *data);
          static int t_Header_set__formatVersion(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__messageId(t_Header *self, void *data);
          static int t_Header_set__messageId(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__originator(t_Header *self, void *data);
          static int t_Header_set__originator(t_Header *self, PyObject *arg, void *data);
          static PyGetSetDef t_Header__fields_[] = {
            DECLARE_GETSET_FIELD(t_Header, classification),
            DECLARE_GETSET_FIELD(t_Header, creationDate),
            DECLARE_GETSET_FIELD(t_Header, formatVersion),
            DECLARE_GETSET_FIELD(t_Header, messageId),
            DECLARE_GETSET_FIELD(t_Header, originator),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Header__methods_[] = {
            DECLARE_METHOD(t_Header, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Header, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Header, getClassification, METH_NOARGS),
            DECLARE_METHOD(t_Header, getCreationDate, METH_NOARGS),
            DECLARE_METHOD(t_Header, getFormatVersion, METH_NOARGS),
            DECLARE_METHOD(t_Header, getMessageId, METH_NOARGS),
            DECLARE_METHOD(t_Header, getOriginator, METH_NOARGS),
            DECLARE_METHOD(t_Header, setClassification, METH_O),
            DECLARE_METHOD(t_Header, setCreationDate, METH_O),
            DECLARE_METHOD(t_Header, setFormatVersion, METH_O),
            DECLARE_METHOD(t_Header, setMessageId, METH_O),
            DECLARE_METHOD(t_Header, setOriginator, METH_O),
            DECLARE_METHOD(t_Header, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Header)[] = {
            { Py_tp_methods, t_Header__methods_ },
            { Py_tp_init, (void *) t_Header_init_ },
            { Py_tp_getset, t_Header__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Header)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
            NULL
          };

          DEFINE_TYPE(Header, t_Header, Header);

          void t_Header::install(PyObject *module)
          {
            installType(&PY_TYPE(Header), &PY_TYPE_DEF(Header), module, "Header", 0);
          }

          void t_Header::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Header), "class_", make_descriptor(Header::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Header), "wrapfn_", make_descriptor(t_Header::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Header), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Header_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Header::initializeClass, 1)))
              return NULL;
            return t_Header::wrap_Object(Header(((t_Header *) arg)->object.this$));
          }
          static PyObject *t_Header_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Header::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Header_init_(t_Header *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            Header object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = Header(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Header_getClassification(t_Header *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getClassification());
            return j2p(result);
          }

          static PyObject *t_Header_getCreationDate(t_Header *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_Header_getFormatVersion(t_Header *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Header_getMessageId(t_Header *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessageId());
            return j2p(result);
          }

          static PyObject *t_Header_getOriginator(t_Header *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getOriginator());
            return j2p(result);
          }

          static PyObject *t_Header_setClassification(t_Header *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setClassification(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setClassification", arg);
            return NULL;
          }

          static PyObject *t_Header_setCreationDate(t_Header *self, PyObject *arg)
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

          static PyObject *t_Header_setFormatVersion(t_Header *self, PyObject *arg)
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

          static PyObject *t_Header_setMessageId(t_Header *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMessageId(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMessageId", arg);
            return NULL;
          }

          static PyObject *t_Header_setOriginator(t_Header *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setOriginator(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOriginator", arg);
            return NULL;
          }

          static PyObject *t_Header_validate(t_Header *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Header), (PyObject *) self, "validate", args, 2);
          }

          static PyObject *t_Header_get__classification(t_Header *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getClassification());
            return j2p(value);
          }
          static int t_Header_set__classification(t_Header *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setClassification(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "classification", arg);
            return -1;
          }

          static PyObject *t_Header_get__creationDate(t_Header *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_Header_set__creationDate(t_Header *self, PyObject *arg, void *data)
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

          static PyObject *t_Header_get__formatVersion(t_Header *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Header_set__formatVersion(t_Header *self, PyObject *arg, void *data)
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

          static PyObject *t_Header_get__messageId(t_Header *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMessageId());
            return j2p(value);
          }
          static int t_Header_set__messageId(t_Header *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMessageId(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "messageId", arg);
            return -1;
          }

          static PyObject *t_Header_get__originator(t_Header *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getOriginator());
            return j2p(value);
          }
          static int t_Header_set__originator(t_Header *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setOriginator(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "originator", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/FixedTroposphericDelay.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/FixedTroposphericDelay.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *FixedTroposphericDelay::class$ = NULL;
          jmethodID *FixedTroposphericDelay::mids$ = NULL;
          bool FixedTroposphericDelay::live$ = false;

          jclass FixedTroposphericDelay::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/FixedTroposphericDelay");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_2a9119a84e92f14a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_init$_748b42918a92f2d4] = env->getMethodID(cls, "<init>", "([D[D[[D)V");
              mids$[mid_getDefaultModel_17d59345a9bde8da] = env->getStaticMethodID(cls, "getDefaultModel", "()Lorg/orekit/models/earth/troposphere/FixedTroposphericDelay;");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_0326270bf0e8ed17] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_af133f80cdba1dc2] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FixedTroposphericDelay::FixedTroposphericDelay(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

          FixedTroposphericDelay::FixedTroposphericDelay(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a9119a84e92f14a, a0.this$, a1.this$)) {}

          FixedTroposphericDelay::FixedTroposphericDelay(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_748b42918a92f2d4, a0.this$, a1.this$, a2.this$)) {}

          FixedTroposphericDelay FixedTroposphericDelay::getDefaultModel()
          {
            jclass cls = env->getClass(initializeClass);
            return FixedTroposphericDelay(env->callStaticObjectMethod(cls, mids$[mid_getDefaultModel_17d59345a9bde8da]));
          }

          ::java::util::List FixedTroposphericDelay::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          ::org::hipparchus::CalculusFieldElement FixedTroposphericDelay::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_0326270bf0e8ed17], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble FixedTroposphericDelay::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_af133f80cdba1dc2], a0, a1.this$, a2.this$, a3.this$);
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
          static PyObject *t_FixedTroposphericDelay_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FixedTroposphericDelay_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FixedTroposphericDelay_init_(t_FixedTroposphericDelay *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FixedTroposphericDelay_getDefaultModel(PyTypeObject *type);
          static PyObject *t_FixedTroposphericDelay_getParametersDrivers(t_FixedTroposphericDelay *self);
          static PyObject *t_FixedTroposphericDelay_pathDelay(t_FixedTroposphericDelay *self, PyObject *args);
          static PyObject *t_FixedTroposphericDelay_get__defaultModel(t_FixedTroposphericDelay *self, void *data);
          static PyObject *t_FixedTroposphericDelay_get__parametersDrivers(t_FixedTroposphericDelay *self, void *data);
          static PyGetSetDef t_FixedTroposphericDelay__fields_[] = {
            DECLARE_GET_FIELD(t_FixedTroposphericDelay, defaultModel),
            DECLARE_GET_FIELD(t_FixedTroposphericDelay, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FixedTroposphericDelay__methods_[] = {
            DECLARE_METHOD(t_FixedTroposphericDelay, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FixedTroposphericDelay, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FixedTroposphericDelay, getDefaultModel, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_FixedTroposphericDelay, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_FixedTroposphericDelay, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FixedTroposphericDelay)[] = {
            { Py_tp_methods, t_FixedTroposphericDelay__methods_ },
            { Py_tp_init, (void *) t_FixedTroposphericDelay_init_ },
            { Py_tp_getset, t_FixedTroposphericDelay__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FixedTroposphericDelay)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FixedTroposphericDelay, t_FixedTroposphericDelay, FixedTroposphericDelay);

          void t_FixedTroposphericDelay::install(PyObject *module)
          {
            installType(&PY_TYPE(FixedTroposphericDelay), &PY_TYPE_DEF(FixedTroposphericDelay), module, "FixedTroposphericDelay", 0);
          }

          void t_FixedTroposphericDelay::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTroposphericDelay), "class_", make_descriptor(FixedTroposphericDelay::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTroposphericDelay), "wrapfn_", make_descriptor(t_FixedTroposphericDelay::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTroposphericDelay), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FixedTroposphericDelay_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FixedTroposphericDelay::initializeClass, 1)))
              return NULL;
            return t_FixedTroposphericDelay::wrap_Object(FixedTroposphericDelay(((t_FixedTroposphericDelay *) arg)->object.this$));
          }
          static PyObject *t_FixedTroposphericDelay_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FixedTroposphericDelay::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FixedTroposphericDelay_init_(t_FixedTroposphericDelay *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                FixedTroposphericDelay object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = FixedTroposphericDelay(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                FixedTroposphericDelay object((jobject) NULL);

                if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = FixedTroposphericDelay(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                JArray< JArray< jdouble > > a2((jobject) NULL);
                FixedTroposphericDelay object((jobject) NULL);

                if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
                {
                  INT_CALL(object = FixedTroposphericDelay(a0, a1, a2));
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

          static PyObject *t_FixedTroposphericDelay_getDefaultModel(PyTypeObject *type)
          {
            FixedTroposphericDelay result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::models::earth::troposphere::FixedTroposphericDelay::getDefaultModel());
            return t_FixedTroposphericDelay::wrap_Object(result);
          }

          static PyObject *t_FixedTroposphericDelay_getParametersDrivers(t_FixedTroposphericDelay *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_FixedTroposphericDelay_pathDelay(t_FixedTroposphericDelay *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_FixedTroposphericDelay_get__defaultModel(t_FixedTroposphericDelay *self, void *data)
          {
            FixedTroposphericDelay value((jobject) NULL);
            OBJ_CALL(value = self->object.getDefaultModel());
            return t_FixedTroposphericDelay::wrap_Object(value);
          }

          static PyObject *t_FixedTroposphericDelay_get__parametersDrivers(t_FixedTroposphericDelay *self, void *data)
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
#include "org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$SystemConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$SystemConfiguration::mids$ = NULL;
        bool CRDConfiguration$SystemConfiguration::live$ = false;

        jclass CRDConfiguration$SystemConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getComponents_a6156df500549a58] = env->getMethodID(cls, "getComponents", "()Ljava/util/List;");
            mids$[mid_getSystemId_0090f7797e403f43] = env->getMethodID(cls, "getSystemId", "()Ljava/lang/String;");
            mids$[mid_getWavelength_456d9a2f64d6b28d] = env->getMethodID(cls, "getWavelength", "()D");
            mids$[mid_setComponents_5712fb35729cb71f] = env->getMethodID(cls, "setComponents", "([Ljava/lang/String;)V");
            mids$[mid_setSystemId_e939c6558ae8d313] = env->getMethodID(cls, "setSystemId", "(Ljava/lang/String;)V");
            mids$[mid_setWavelength_77e0f9a1f260e2e5] = env->getMethodID(cls, "setWavelength", "(D)V");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$SystemConfiguration::CRDConfiguration$SystemConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::java::util::List CRDConfiguration$SystemConfiguration::getComponents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComponents_a6156df500549a58]));
        }

        ::java::lang::String CRDConfiguration$SystemConfiguration::getSystemId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemId_0090f7797e403f43]));
        }

        jdouble CRDConfiguration$SystemConfiguration::getWavelength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getWavelength_456d9a2f64d6b28d]);
        }

        void CRDConfiguration$SystemConfiguration::setComponents(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setComponents_5712fb35729cb71f], a0.this$);
        }

        void CRDConfiguration$SystemConfiguration::setSystemId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemId_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$SystemConfiguration::setWavelength(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setWavelength_77e0f9a1f260e2e5], a0);
        }

        ::java::lang::String CRDConfiguration$SystemConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$SystemConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
        static PyObject *t_CRDConfiguration$SystemConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$SystemConfiguration_init_(t_CRDConfiguration$SystemConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$SystemConfiguration_getComponents(t_CRDConfiguration$SystemConfiguration *self);
        static PyObject *t_CRDConfiguration$SystemConfiguration_getSystemId(t_CRDConfiguration$SystemConfiguration *self);
        static PyObject *t_CRDConfiguration$SystemConfiguration_getWavelength(t_CRDConfiguration$SystemConfiguration *self);
        static PyObject *t_CRDConfiguration$SystemConfiguration_setComponents(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_setSystemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_setWavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_toCrdString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SystemConfiguration_toString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SystemConfiguration_get__components(t_CRDConfiguration$SystemConfiguration *self, void *data);
        static int t_CRDConfiguration$SystemConfiguration_set__components(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SystemConfiguration_get__systemId(t_CRDConfiguration$SystemConfiguration *self, void *data);
        static int t_CRDConfiguration$SystemConfiguration_set__systemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SystemConfiguration_get__wavelength(t_CRDConfiguration$SystemConfiguration *self, void *data);
        static int t_CRDConfiguration$SystemConfiguration_set__wavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$SystemConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SystemConfiguration, components),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SystemConfiguration, systemId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SystemConfiguration, wavelength),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$SystemConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, getComponents, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, getSystemId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, getWavelength, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, setComponents, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, setSystemId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, setWavelength, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$SystemConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$SystemConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$SystemConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$SystemConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$SystemConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$SystemConfiguration, t_CRDConfiguration$SystemConfiguration, CRDConfiguration$SystemConfiguration);

        void t_CRDConfiguration$SystemConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$SystemConfiguration), &PY_TYPE_DEF(CRDConfiguration$SystemConfiguration), module, "CRDConfiguration$SystemConfiguration", 0);
        }

        void t_CRDConfiguration$SystemConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SystemConfiguration), "class_", make_descriptor(CRDConfiguration$SystemConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SystemConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$SystemConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SystemConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$SystemConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$SystemConfiguration::wrap_Object(CRDConfiguration$SystemConfiguration(((t_CRDConfiguration$SystemConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$SystemConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$SystemConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$SystemConfiguration_init_(t_CRDConfiguration$SystemConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$SystemConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$SystemConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_getComponents(t_CRDConfiguration$SystemConfiguration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_getSystemId(t_CRDConfiguration$SystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_getWavelength(t_CRDConfiguration$SystemConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getWavelength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_setComponents(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setComponents(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setComponents", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_setSystemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSystemId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSystemId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_setWavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setWavelength(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_toCrdString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SystemConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_toString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SystemConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_get__components(t_CRDConfiguration$SystemConfiguration *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(value);
        }
        static int t_CRDConfiguration$SystemConfiguration_set__components(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setComponents(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "components", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_get__systemId(t_CRDConfiguration$SystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemId());
          return j2p(value);
        }
        static int t_CRDConfiguration$SystemConfiguration_set__systemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSystemId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "systemId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_get__wavelength(t_CRDConfiguration$SystemConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getWavelength());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$SystemConfiguration_set__wavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setWavelength(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "wavelength", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *SupportBallGenerator::class$ = NULL;
        jmethodID *SupportBallGenerator::mids$ = NULL;
        bool SupportBallGenerator::live$ = false;

        jclass SupportBallGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/SupportBallGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_ballOnSupport_5189031e8a0790ca] = env->getMethodID(cls, "ballOnSupport", "(Ljava/util/List;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::enclosing::EnclosingBall SupportBallGenerator::ballOnSupport(const ::java::util::List & a0) const
        {
          return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_ballOnSupport_5189031e8a0790ca], a0.this$));
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
      namespace enclosing {
        static PyObject *t_SupportBallGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SupportBallGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SupportBallGenerator_of_(t_SupportBallGenerator *self, PyObject *args);
        static PyObject *t_SupportBallGenerator_ballOnSupport(t_SupportBallGenerator *self, PyObject *arg);
        static PyObject *t_SupportBallGenerator_get__parameters_(t_SupportBallGenerator *self, void *data);
        static PyGetSetDef t_SupportBallGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_SupportBallGenerator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SupportBallGenerator__methods_[] = {
          DECLARE_METHOD(t_SupportBallGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SupportBallGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SupportBallGenerator, of_, METH_VARARGS),
          DECLARE_METHOD(t_SupportBallGenerator, ballOnSupport, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SupportBallGenerator)[] = {
          { Py_tp_methods, t_SupportBallGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SupportBallGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SupportBallGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SupportBallGenerator, t_SupportBallGenerator, SupportBallGenerator);
        PyObject *t_SupportBallGenerator::wrap_Object(const SupportBallGenerator& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_SupportBallGenerator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SupportBallGenerator *self = (t_SupportBallGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_SupportBallGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_SupportBallGenerator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SupportBallGenerator *self = (t_SupportBallGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_SupportBallGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(SupportBallGenerator), &PY_TYPE_DEF(SupportBallGenerator), module, "SupportBallGenerator", 0);
        }

        void t_SupportBallGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SupportBallGenerator), "class_", make_descriptor(SupportBallGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SupportBallGenerator), "wrapfn_", make_descriptor(t_SupportBallGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SupportBallGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SupportBallGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SupportBallGenerator::initializeClass, 1)))
            return NULL;
          return t_SupportBallGenerator::wrap_Object(SupportBallGenerator(((t_SupportBallGenerator *) arg)->object.this$));
        }
        static PyObject *t_SupportBallGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SupportBallGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SupportBallGenerator_of_(t_SupportBallGenerator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SupportBallGenerator_ballOnSupport(t_SupportBallGenerator *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(result = self->object.ballOnSupport(a0));
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "ballOnSupport", arg);
          return NULL;
        }
        static PyObject *t_SupportBallGenerator_get__parameters_(t_SupportBallGenerator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *MessageWriter::class$ = NULL;
            jmethodID *MessageWriter::mids$ = NULL;
            bool MessageWriter::live$ = false;

            jclass MessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/MessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getFormatVersionKey_0090f7797e403f43] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_0090f7797e403f43] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getVersion_456d9a2f64d6b28d] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_writeFooter_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_31a4dd6b0c8635b6] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V");
                mids$[mid_writeMessage_922bd8359c08f6d1] = env->getMethodID(cls, "writeMessage", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/NdmConstituent;)V");
                mids$[mid_writeSegment_412320e9d7a2723d] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::String MessageWriter::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_0090f7797e403f43]));
            }

            ::java::lang::String MessageWriter::getRoot() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRoot_0090f7797e403f43]));
            }

            jdouble MessageWriter::getVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getVersion_456d9a2f64d6b28d]);
            }

            void MessageWriter::writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeFooter_fb36c2e4ae059ab9], a0.this$);
            }

            void MessageWriter::writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Header & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeHeader_31a4dd6b0c8635b6], a0.this$, a1.this$);
            }

            void MessageWriter::writeMessage(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::NdmConstituent & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeMessage_922bd8359c08f6d1], a0.this$, a1.this$);
            }

            void MessageWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Segment & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegment_412320e9d7a2723d], a0.this$, a1.this$);
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
          namespace generation {
            static PyObject *t_MessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageWriter_of_(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_getFormatVersionKey(t_MessageWriter *self);
            static PyObject *t_MessageWriter_getRoot(t_MessageWriter *self);
            static PyObject *t_MessageWriter_getVersion(t_MessageWriter *self);
            static PyObject *t_MessageWriter_writeFooter(t_MessageWriter *self, PyObject *arg);
            static PyObject *t_MessageWriter_writeHeader(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_writeMessage(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_writeSegment(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_get__formatVersionKey(t_MessageWriter *self, void *data);
            static PyObject *t_MessageWriter_get__root(t_MessageWriter *self, void *data);
            static PyObject *t_MessageWriter_get__version(t_MessageWriter *self, void *data);
            static PyObject *t_MessageWriter_get__parameters_(t_MessageWriter *self, void *data);
            static PyGetSetDef t_MessageWriter__fields_[] = {
              DECLARE_GET_FIELD(t_MessageWriter, formatVersionKey),
              DECLARE_GET_FIELD(t_MessageWriter, root),
              DECLARE_GET_FIELD(t_MessageWriter, version),
              DECLARE_GET_FIELD(t_MessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MessageWriter__methods_[] = {
              DECLARE_METHOD(t_MessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_MessageWriter, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_MessageWriter, getRoot, METH_NOARGS),
              DECLARE_METHOD(t_MessageWriter, getVersion, METH_NOARGS),
              DECLARE_METHOD(t_MessageWriter, writeFooter, METH_O),
              DECLARE_METHOD(t_MessageWriter, writeHeader, METH_VARARGS),
              DECLARE_METHOD(t_MessageWriter, writeMessage, METH_VARARGS),
              DECLARE_METHOD(t_MessageWriter, writeSegment, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MessageWriter)[] = {
              { Py_tp_methods, t_MessageWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MessageWriter, t_MessageWriter, MessageWriter);
            PyObject *t_MessageWriter::wrap_Object(const MessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_MessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageWriter *self = (t_MessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_MessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_MessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageWriter *self = (t_MessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_MessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(MessageWriter), &PY_TYPE_DEF(MessageWriter), module, "MessageWriter", 0);
            }

            void t_MessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageWriter), "class_", make_descriptor(MessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageWriter), "wrapfn_", make_descriptor(t_MessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MessageWriter::initializeClass, 1)))
                return NULL;
              return t_MessageWriter::wrap_Object(MessageWriter(((t_MessageWriter *) arg)->object.this$));
            }
            static PyObject *t_MessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MessageWriter_of_(t_MessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MessageWriter_getFormatVersionKey(t_MessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_MessageWriter_getRoot(t_MessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoot());
              return j2p(result);
            }

            static PyObject *t_MessageWriter_getVersion(t_MessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_MessageWriter_writeFooter(t_MessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
              {
                OBJ_CALL(self->object.writeFooter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeFooter", arg);
              return NULL;
            }

            static PyObject *t_MessageWriter_writeHeader(t_MessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Header a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Header::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.writeHeader(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeHeader", args);
              return NULL;
            }

            static PyObject *t_MessageWriter_writeMessage(t_MessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::NdmConstituent a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_NdmConstituent::parameters_))
              {
                OBJ_CALL(self->object.writeMessage(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeMessage", args);
              return NULL;
            }

            static PyObject *t_MessageWriter_writeSegment(t_MessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Segment a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegment(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
              return NULL;
            }
            static PyObject *t_MessageWriter_get__parameters_(t_MessageWriter *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MessageWriter_get__formatVersionKey(t_MessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_MessageWriter_get__root(t_MessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoot());
              return j2p(value);
            }

            static PyObject *t_MessageWriter_get__version(t_MessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getVersion());
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
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemSatelliteEphemeris::class$ = NULL;
              jmethodID *AemSatelliteEphemeris::mids$ = NULL;
              bool AemSatelliteEphemeris::live$ = false;

              jclass AemSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_6ea6ec8379c9f4a5] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");
                  mids$[mid_getId_0090f7797e403f43] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemSatelliteEphemeris::AemSatelliteEphemeris(const ::java::lang::String & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6ea6ec8379c9f4a5, a0.this$, a1.this$)) {}

              ::java::lang::String AemSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_0090f7797e403f43]));
              }

              ::java::util::List AemSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_a6156df500549a58]));
              }

              ::org::orekit::time::AbsoluteDate AemSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate AemSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
            namespace aem {
              static PyObject *t_AemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AemSatelliteEphemeris_init_(t_AemSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemSatelliteEphemeris_getId(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_getSegments(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_getStart(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_getStop(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_get__id(t_AemSatelliteEphemeris *self, void *data);
              static PyObject *t_AemSatelliteEphemeris_get__segments(t_AemSatelliteEphemeris *self, void *data);
              static PyObject *t_AemSatelliteEphemeris_get__start(t_AemSatelliteEphemeris *self, void *data);
              static PyObject *t_AemSatelliteEphemeris_get__stop(t_AemSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_AemSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_AemSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemSatelliteEphemeris)[] = {
                { Py_tp_methods, t_AemSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_AemSatelliteEphemeris_init_ },
                { Py_tp_getset, t_AemSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AemSatelliteEphemeris, t_AemSatelliteEphemeris, AemSatelliteEphemeris);

              void t_AemSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(AemSatelliteEphemeris), &PY_TYPE_DEF(AemSatelliteEphemeris), module, "AemSatelliteEphemeris", 0);
              }

              void t_AemSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSatelliteEphemeris), "class_", make_descriptor(AemSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSatelliteEphemeris), "wrapfn_", make_descriptor(t_AemSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_AemSatelliteEphemeris::wrap_Object(AemSatelliteEphemeris(((t_AemSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_AemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AemSatelliteEphemeris_init_(t_AemSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AemSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AemSatelliteEphemeris(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AemSatelliteEphemeris_getId(t_AemSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_AemSatelliteEphemeris_getSegments(t_AemSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSegment));
              }

              static PyObject *t_AemSatelliteEphemeris_getStart(t_AemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemSatelliteEphemeris_getStop(t_AemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemSatelliteEphemeris_get__id(t_AemSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_AemSatelliteEphemeris_get__segments(t_AemSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AemSatelliteEphemeris_get__start(t_AemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemSatelliteEphemeris_get__stop(t_AemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}

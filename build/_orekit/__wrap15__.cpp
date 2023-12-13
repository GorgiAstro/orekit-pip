#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *TimeConverter::class$ = NULL;
          jmethodID *TimeConverter::mids$ = NULL;
          bool TimeConverter::live$ = false;

          jclass TimeConverter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/TimeConverter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2ca1c09f60ea4ec0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_components_29837d2cc2c43d67] = env->getMethodID(cls, "components", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/DateTimeComponents;");
              mids$[mid_getReferenceDate_c325492395d89b24] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTimeScale_34d3bda0a8989e3e] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
              mids$[mid_offset_fd347811007a6ba3] = env->getMethodID(cls, "offset", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_parse_e7249f44171a2907] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TimeConverter::TimeConverter(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ca1c09f60ea4ec0, a0.this$, a1.this$)) {}

          ::org::orekit::time::DateTimeComponents TimeConverter::components(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_components_29837d2cc2c43d67], a0.this$));
          }

          ::org::orekit::time::AbsoluteDate TimeConverter::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_c325492395d89b24]));
          }

          ::org::orekit::time::TimeScale TimeConverter::getTimeScale() const
          {
            return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_34d3bda0a8989e3e]));
          }

          jdouble TimeConverter::offset(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_offset_fd347811007a6ba3], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate TimeConverter::parse(const ::java::lang::String & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_parse_e7249f44171a2907], a0.this$));
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
          static PyObject *t_TimeConverter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeConverter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TimeConverter_init_(t_TimeConverter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TimeConverter_components(t_TimeConverter *self, PyObject *arg);
          static PyObject *t_TimeConverter_getReferenceDate(t_TimeConverter *self);
          static PyObject *t_TimeConverter_getTimeScale(t_TimeConverter *self);
          static PyObject *t_TimeConverter_offset(t_TimeConverter *self, PyObject *arg);
          static PyObject *t_TimeConverter_parse(t_TimeConverter *self, PyObject *arg);
          static PyObject *t_TimeConverter_get__referenceDate(t_TimeConverter *self, void *data);
          static PyObject *t_TimeConverter_get__timeScale(t_TimeConverter *self, void *data);
          static PyGetSetDef t_TimeConverter__fields_[] = {
            DECLARE_GET_FIELD(t_TimeConverter, referenceDate),
            DECLARE_GET_FIELD(t_TimeConverter, timeScale),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeConverter__methods_[] = {
            DECLARE_METHOD(t_TimeConverter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeConverter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeConverter, components, METH_O),
            DECLARE_METHOD(t_TimeConverter, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_TimeConverter, getTimeScale, METH_NOARGS),
            DECLARE_METHOD(t_TimeConverter, offset, METH_O),
            DECLARE_METHOD(t_TimeConverter, parse, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeConverter)[] = {
            { Py_tp_methods, t_TimeConverter__methods_ },
            { Py_tp_init, (void *) t_TimeConverter_init_ },
            { Py_tp_getset, t_TimeConverter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeConverter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TimeConverter, t_TimeConverter, TimeConverter);

          void t_TimeConverter::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeConverter), &PY_TYPE_DEF(TimeConverter), module, "TimeConverter", 0);
          }

          void t_TimeConverter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeConverter), "class_", make_descriptor(TimeConverter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeConverter), "wrapfn_", make_descriptor(t_TimeConverter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeConverter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TimeConverter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeConverter::initializeClass, 1)))
              return NULL;
            return t_TimeConverter::wrap_Object(TimeConverter(((t_TimeConverter *) arg)->object.this$));
          }
          static PyObject *t_TimeConverter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeConverter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TimeConverter_init_(t_TimeConverter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            TimeConverter object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeConverter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TimeConverter_components(t_TimeConverter *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.components(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "components", arg);
            return NULL;
          }

          static PyObject *t_TimeConverter_getReferenceDate(t_TimeConverter *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_TimeConverter_getTimeScale(t_TimeConverter *self)
          {
            ::org::orekit::time::TimeScale result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(result);
          }

          static PyObject *t_TimeConverter_offset(t_TimeConverter *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offset(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "offset", arg);
            return NULL;
          }

          static PyObject *t_TimeConverter_parse(t_TimeConverter *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", arg);
            return NULL;
          }

          static PyObject *t_TimeConverter_get__referenceDate(t_TimeConverter *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_TimeConverter_get__timeScale(t_TimeConverter *self, void *data)
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/InterpolationTableLoader.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataLoader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *InterpolationTableLoader::class$ = NULL;
      jmethodID *InterpolationTableLoader::mids$ = NULL;
      bool InterpolationTableLoader::live$ = false;

      jclass InterpolationTableLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/InterpolationTableLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getAbscissaGrid_25e1757a36c4dde2] = env->getMethodID(cls, "getAbscissaGrid", "()[D");
          mids$[mid_getOrdinateGrid_25e1757a36c4dde2] = env->getMethodID(cls, "getOrdinateGrid", "()[D");
          mids$[mid_getValuesSamples_3b7b373db8e7887f] = env->getMethodID(cls, "getValuesSamples", "()[[D");
          mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_9ab94ac1dc23b105] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      InterpolationTableLoader::InterpolationTableLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      JArray< jdouble > InterpolationTableLoader::getAbscissaGrid() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAbscissaGrid_25e1757a36c4dde2]));
      }

      JArray< jdouble > InterpolationTableLoader::getOrdinateGrid() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getOrdinateGrid_25e1757a36c4dde2]));
      }

      JArray< JArray< jdouble > > InterpolationTableLoader::getValuesSamples() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getValuesSamples_3b7b373db8e7887f]));
      }

      void InterpolationTableLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
      }

      jboolean InterpolationTableLoader::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_9ab94ac1dc23b105]);
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
      static PyObject *t_InterpolationTableLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InterpolationTableLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_InterpolationTableLoader_init_(t_InterpolationTableLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_InterpolationTableLoader_getAbscissaGrid(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_getOrdinateGrid(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_getValuesSamples(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_loadData(t_InterpolationTableLoader *self, PyObject *args);
      static PyObject *t_InterpolationTableLoader_stillAcceptsData(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_get__abscissaGrid(t_InterpolationTableLoader *self, void *data);
      static PyObject *t_InterpolationTableLoader_get__ordinateGrid(t_InterpolationTableLoader *self, void *data);
      static PyObject *t_InterpolationTableLoader_get__valuesSamples(t_InterpolationTableLoader *self, void *data);
      static PyGetSetDef t_InterpolationTableLoader__fields_[] = {
        DECLARE_GET_FIELD(t_InterpolationTableLoader, abscissaGrid),
        DECLARE_GET_FIELD(t_InterpolationTableLoader, ordinateGrid),
        DECLARE_GET_FIELD(t_InterpolationTableLoader, valuesSamples),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InterpolationTableLoader__methods_[] = {
        DECLARE_METHOD(t_InterpolationTableLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolationTableLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolationTableLoader, getAbscissaGrid, METH_NOARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, getOrdinateGrid, METH_NOARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, getValuesSamples, METH_NOARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, loadData, METH_VARARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InterpolationTableLoader)[] = {
        { Py_tp_methods, t_InterpolationTableLoader__methods_ },
        { Py_tp_init, (void *) t_InterpolationTableLoader_init_ },
        { Py_tp_getset, t_InterpolationTableLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InterpolationTableLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InterpolationTableLoader, t_InterpolationTableLoader, InterpolationTableLoader);

      void t_InterpolationTableLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(InterpolationTableLoader), &PY_TYPE_DEF(InterpolationTableLoader), module, "InterpolationTableLoader", 0);
      }

      void t_InterpolationTableLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationTableLoader), "class_", make_descriptor(InterpolationTableLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationTableLoader), "wrapfn_", make_descriptor(t_InterpolationTableLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationTableLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InterpolationTableLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InterpolationTableLoader::initializeClass, 1)))
          return NULL;
        return t_InterpolationTableLoader::wrap_Object(InterpolationTableLoader(((t_InterpolationTableLoader *) arg)->object.this$));
      }
      static PyObject *t_InterpolationTableLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InterpolationTableLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_InterpolationTableLoader_init_(t_InterpolationTableLoader *self, PyObject *args, PyObject *kwds)
      {
        InterpolationTableLoader object((jobject) NULL);

        INT_CALL(object = InterpolationTableLoader());
        self->object = object;

        return 0;
      }

      static PyObject *t_InterpolationTableLoader_getAbscissaGrid(t_InterpolationTableLoader *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbscissaGrid());
        return result.wrap();
      }

      static PyObject *t_InterpolationTableLoader_getOrdinateGrid(t_InterpolationTableLoader *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrdinateGrid());
        return result.wrap();
      }

      static PyObject *t_InterpolationTableLoader_getValuesSamples(t_InterpolationTableLoader *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValuesSamples());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_InterpolationTableLoader_loadData(t_InterpolationTableLoader *self, PyObject *args)
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

      static PyObject *t_InterpolationTableLoader_stillAcceptsData(t_InterpolationTableLoader *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_InterpolationTableLoader_get__abscissaGrid(t_InterpolationTableLoader *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbscissaGrid());
        return value.wrap();
      }

      static PyObject *t_InterpolationTableLoader_get__ordinateGrid(t_InterpolationTableLoader *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrdinateGrid());
        return value.wrap();
      }

      static PyObject *t_InterpolationTableLoader_get__valuesSamples(t_InterpolationTableLoader *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValuesSamples());
        return JArray<jobject>(value.this$).wrap(NULL);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Random.h"
#include "java/util/stream/DoubleStream.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Random::class$ = NULL;
    jmethodID *Random::mids$ = NULL;
    bool Random::live$ = false;

    jclass Random::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Random");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
        mids$[mid_doubles_48a8801871033f9c] = env->getMethodID(cls, "doubles", "()Ljava/util/stream/DoubleStream;");
        mids$[mid_doubles_99f9dfe38cac6ad9] = env->getMethodID(cls, "doubles", "(J)Ljava/util/stream/DoubleStream;");
        mids$[mid_doubles_4f4c39bddcd90e90] = env->getMethodID(cls, "doubles", "(DD)Ljava/util/stream/DoubleStream;");
        mids$[mid_doubles_5cebfb9baee32207] = env->getMethodID(cls, "doubles", "(JDD)Ljava/util/stream/DoubleStream;");
        mids$[mid_nextBoolean_9ab94ac1dc23b105] = env->getMethodID(cls, "nextBoolean", "()Z");
        mids$[mid_nextBytes_459771b03534868e] = env->getMethodID(cls, "nextBytes", "([B)V");
        mids$[mid_nextDouble_b74f83833fdad017] = env->getMethodID(cls, "nextDouble", "()D");
        mids$[mid_nextFloat_1fb1bf0772ae5db7] = env->getMethodID(cls, "nextFloat", "()F");
        mids$[mid_nextGaussian_b74f83833fdad017] = env->getMethodID(cls, "nextGaussian", "()D");
        mids$[mid_nextInt_55546ef6a647f39b] = env->getMethodID(cls, "nextInt", "()I");
        mids$[mid_nextInt_0e7cf35192c3effe] = env->getMethodID(cls, "nextInt", "(I)I");
        mids$[mid_nextLong_6c0ce7e438e5ded4] = env->getMethodID(cls, "nextLong", "()J");
        mids$[mid_setSeed_3d7dd2314a0dd456] = env->getMethodID(cls, "setSeed", "(J)V");
        mids$[mid_next_0e7cf35192c3effe] = env->getMethodID(cls, "next", "(I)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Random::Random() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    Random::Random(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

    ::java::util::stream::DoubleStream Random::doubles() const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_48a8801871033f9c]));
    }

    ::java::util::stream::DoubleStream Random::doubles(jlong a0) const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_99f9dfe38cac6ad9], a0));
    }

    ::java::util::stream::DoubleStream Random::doubles(jdouble a0, jdouble a1) const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_4f4c39bddcd90e90], a0, a1));
    }

    ::java::util::stream::DoubleStream Random::doubles(jlong a0, jdouble a1, jdouble a2) const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_5cebfb9baee32207], a0, a1, a2));
    }

    jboolean Random::nextBoolean() const
    {
      return env->callBooleanMethod(this$, mids$[mid_nextBoolean_9ab94ac1dc23b105]);
    }

    void Random::nextBytes(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_nextBytes_459771b03534868e], a0.this$);
    }

    jdouble Random::nextDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_nextDouble_b74f83833fdad017]);
    }

    jfloat Random::nextFloat() const
    {
      return env->callFloatMethod(this$, mids$[mid_nextFloat_1fb1bf0772ae5db7]);
    }

    jdouble Random::nextGaussian() const
    {
      return env->callDoubleMethod(this$, mids$[mid_nextGaussian_b74f83833fdad017]);
    }

    jint Random::nextInt() const
    {
      return env->callIntMethod(this$, mids$[mid_nextInt_55546ef6a647f39b]);
    }

    jint Random::nextInt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_nextInt_0e7cf35192c3effe], a0);
    }

    jlong Random::nextLong() const
    {
      return env->callLongMethod(this$, mids$[mid_nextLong_6c0ce7e438e5ded4]);
    }

    void Random::setSeed(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setSeed_3d7dd2314a0dd456], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Random_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Random_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Random_init_(t_Random *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Random_doubles(t_Random *self, PyObject *args);
    static PyObject *t_Random_nextBoolean(t_Random *self);
    static PyObject *t_Random_nextBytes(t_Random *self, PyObject *arg);
    static PyObject *t_Random_nextDouble(t_Random *self);
    static PyObject *t_Random_nextFloat(t_Random *self);
    static PyObject *t_Random_nextGaussian(t_Random *self);
    static PyObject *t_Random_nextInt(t_Random *self, PyObject *args);
    static PyObject *t_Random_nextLong(t_Random *self);
    static PyObject *t_Random_setSeed(t_Random *self, PyObject *arg);
    static int t_Random_set__seed(t_Random *self, PyObject *arg, void *data);
    static PyGetSetDef t_Random__fields_[] = {
      DECLARE_SET_FIELD(t_Random, seed),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Random__methods_[] = {
      DECLARE_METHOD(t_Random, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Random, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Random, doubles, METH_VARARGS),
      DECLARE_METHOD(t_Random, nextBoolean, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextBytes, METH_O),
      DECLARE_METHOD(t_Random, nextDouble, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextFloat, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextGaussian, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextInt, METH_VARARGS),
      DECLARE_METHOD(t_Random, nextLong, METH_NOARGS),
      DECLARE_METHOD(t_Random, setSeed, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Random)[] = {
      { Py_tp_methods, t_Random__methods_ },
      { Py_tp_init, (void *) t_Random_init_ },
      { Py_tp_getset, t_Random__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Random)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Random, t_Random, Random);

    void t_Random::install(PyObject *module)
    {
      installType(&PY_TYPE(Random), &PY_TYPE_DEF(Random), module, "Random", 0);
    }

    void t_Random::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Random), "class_", make_descriptor(Random::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Random), "wrapfn_", make_descriptor(t_Random::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Random), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Random_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Random::initializeClass, 1)))
        return NULL;
      return t_Random::wrap_Object(Random(((t_Random *) arg)->object.this$));
    }
    static PyObject *t_Random_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Random::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Random_init_(t_Random *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Random object((jobject) NULL);

          INT_CALL(object = Random());
          self->object = object;
          break;
        }
       case 1:
        {
          jlong a0;
          Random object((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            INT_CALL(object = Random(a0));
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

    static PyObject *t_Random_doubles(t_Random *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::stream::DoubleStream result((jobject) NULL);
          OBJ_CALL(result = self->object.doubles());
          return ::java::util::stream::t_DoubleStream::wrap_Object(result);
        }
        break;
       case 1:
        {
          jlong a0;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.doubles(a0));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          jdouble a0;
          jdouble a1;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.doubles(a0, a1));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          jlong a0;
          jdouble a1;
          jdouble a2;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "JDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.doubles(a0, a1, a2));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "doubles", args);
      return NULL;
    }

    static PyObject *t_Random_nextBoolean(t_Random *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.nextBoolean());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Random_nextBytes(t_Random *self, PyObject *arg)
    {
      JArray< jbyte > a0((jobject) NULL);

      if (!parseArg(arg, "[B", &a0))
      {
        OBJ_CALL(self->object.nextBytes(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "nextBytes", arg);
      return NULL;
    }

    static PyObject *t_Random_nextDouble(t_Random *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.nextDouble());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Random_nextFloat(t_Random *self)
    {
      jfloat result;
      OBJ_CALL(result = self->object.nextFloat());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Random_nextGaussian(t_Random *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.nextGaussian());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Random_nextInt(t_Random *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.nextInt(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "nextInt", args);
      return NULL;
    }

    static PyObject *t_Random_nextLong(t_Random *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.nextLong());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Random_setSeed(t_Random *self, PyObject *arg)
    {
      jlong a0;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(self->object.setSeed(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setSeed", arg);
      return NULL;
    }

    static int t_Random_set__seed(t_Random *self, PyObject *arg, void *data)
    {
      {
        jlong value;
        if (!parseArg(arg, "J", &value))
        {
          INT_CALL(self->object.setSeed(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "seed", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              ::java::lang::Class *SsrIm201Header::class$ = NULL;
              jmethodID *SsrIm201Header::mids$ = NULL;
              bool SsrIm201Header::live$ = false;

              jclass SsrIm201Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getNumberOfIonosphericLayers_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfIonosphericLayers", "()I");
                  mids$[mid_getVtecQualityIndicator_b74f83833fdad017] = env->getMethodID(cls, "getVtecQualityIndicator", "()D");
                  mids$[mid_setNumberOfIonosphericLayers_44ed599e93e8a30c] = env->getMethodID(cls, "setNumberOfIonosphericLayers", "(I)V");
                  mids$[mid_setVtecQualityIndicator_8ba9fe7a847cecad] = env->getMethodID(cls, "setVtecQualityIndicator", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIm201Header::SsrIm201Header() : ::org::orekit::gnss::metric::messages::ssr::SsrHeader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jint SsrIm201Header::getNumberOfIonosphericLayers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfIonosphericLayers_55546ef6a647f39b]);
              }

              jdouble SsrIm201Header::getVtecQualityIndicator() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getVtecQualityIndicator_b74f83833fdad017]);
              }

              void SsrIm201Header::setNumberOfIonosphericLayers(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfIonosphericLayers_44ed599e93e8a30c], a0);
              }

              void SsrIm201Header::setVtecQualityIndicator(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setVtecQualityIndicator_8ba9fe7a847cecad], a0);
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
            namespace subtype {
              static PyObject *t_SsrIm201Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIm201Header_init_(t_SsrIm201Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIm201Header_getNumberOfIonosphericLayers(t_SsrIm201Header *self);
              static PyObject *t_SsrIm201Header_getVtecQualityIndicator(t_SsrIm201Header *self);
              static PyObject *t_SsrIm201Header_setNumberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg);
              static PyObject *t_SsrIm201Header_setVtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg);
              static PyObject *t_SsrIm201Header_get__numberOfIonosphericLayers(t_SsrIm201Header *self, void *data);
              static int t_SsrIm201Header_set__numberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Header_get__vtecQualityIndicator(t_SsrIm201Header *self, void *data);
              static int t_SsrIm201Header_set__vtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIm201Header__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIm201Header, numberOfIonosphericLayers),
                DECLARE_GETSET_FIELD(t_SsrIm201Header, vtecQualityIndicator),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIm201Header__methods_[] = {
                DECLARE_METHOD(t_SsrIm201Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Header, getNumberOfIonosphericLayers, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Header, getVtecQualityIndicator, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Header, setNumberOfIonosphericLayers, METH_O),
                DECLARE_METHOD(t_SsrIm201Header, setVtecQualityIndicator, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIm201Header)[] = {
                { Py_tp_methods, t_SsrIm201Header__methods_ },
                { Py_tp_init, (void *) t_SsrIm201Header_init_ },
                { Py_tp_getset, t_SsrIm201Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIm201Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrHeader),
                NULL
              };

              DEFINE_TYPE(SsrIm201Header, t_SsrIm201Header, SsrIm201Header);

              void t_SsrIm201Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIm201Header), &PY_TYPE_DEF(SsrIm201Header), module, "SsrIm201Header", 0);
              }

              void t_SsrIm201Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Header), "class_", make_descriptor(SsrIm201Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Header), "wrapfn_", make_descriptor(t_SsrIm201Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIm201Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIm201Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIm201Header::wrap_Object(SsrIm201Header(((t_SsrIm201Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIm201Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIm201Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIm201Header_init_(t_SsrIm201Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIm201Header object((jobject) NULL);

                INT_CALL(object = SsrIm201Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIm201Header_getNumberOfIonosphericLayers(t_SsrIm201Header *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfIonosphericLayers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIm201Header_getVtecQualityIndicator(t_SsrIm201Header *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getVtecQualityIndicator());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIm201Header_setNumberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfIonosphericLayers(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfIonosphericLayers", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Header_setVtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setVtecQualityIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setVtecQualityIndicator", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Header_get__numberOfIonosphericLayers(t_SsrIm201Header *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfIonosphericLayers());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIm201Header_set__numberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfIonosphericLayers(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfIonosphericLayers", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Header_get__vtecQualityIndicator(t_SsrIm201Header *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getVtecQualityIndicator());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIm201Header_set__vtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setVtecQualityIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "vtecQualityIndicator", arg);
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1057.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1057::class$ = NULL;
              jmethodID *Rtcm1057::mids$ = NULL;
              bool Rtcm1057::live$ = false;

              jclass Rtcm1057::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1057");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_868237effc362640] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1057::Rtcm1057(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_868237effc362640, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1057_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1057_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1057_of_(t_Rtcm1057 *self, PyObject *args);
              static int t_Rtcm1057_init_(t_Rtcm1057 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1057_get__parameters_(t_Rtcm1057 *self, void *data);
              static PyGetSetDef t_Rtcm1057__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1057, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1057__methods_[] = {
                DECLARE_METHOD(t_Rtcm1057, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1057, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1057, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1057)[] = {
                { Py_tp_methods, t_Rtcm1057__methods_ },
                { Py_tp_init, (void *) t_Rtcm1057_init_ },
                { Py_tp_getset, t_Rtcm1057__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1057)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1057, t_Rtcm1057, Rtcm1057);
              PyObject *t_Rtcm1057::wrap_Object(const Rtcm1057& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1057::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1057 *self = (t_Rtcm1057 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1057::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1057::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1057 *self = (t_Rtcm1057 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1057::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1057), &PY_TYPE_DEF(Rtcm1057), module, "Rtcm1057", 0);
              }

              void t_Rtcm1057::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1057), "class_", make_descriptor(Rtcm1057::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1057), "wrapfn_", make_descriptor(t_Rtcm1057::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1057), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1057_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1057::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1057::wrap_Object(Rtcm1057(((t_Rtcm1057 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1057_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1057::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1057_of_(t_Rtcm1057 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1057_init_(t_Rtcm1057 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1057 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1057(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1057_get__parameters_(t_Rtcm1057 *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
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
                mids$[mid_getAuxiliaryElements_bb7d61c7025dded3] = env->getMethodID(cls, "getAuxiliaryElements", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements ForceModelContext::getAuxiliaryElements() const
            {
              return ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(env->callObjectMethod(this$, mids$[mid_getAuxiliaryElements_bb7d61c7025dded3]));
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
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/spherical/twod/Vertex.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *SphericalPolygonsSet::class$ = NULL;
          jmethodID *SphericalPolygonsSet::mids$ = NULL;
          bool SphericalPolygonsSet::live$ = false;

          jclass SphericalPolygonsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_548bdcb959b5c3f1] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/geometry/spherical/twod/S2Point;)V");
              mids$[mid_init$_4f2529905f184526] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_936ab5386aba1bbf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_16deaf08470737f9] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_57efc05c72ff0405] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DID)V");
              mids$[mid_buildNew_9e4f0b6dbfea3f48] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
              mids$[mid_getBoundaryLoops_e62d3bb06d56d7e3] = env->getMethodID(cls, "getBoundaryLoops", "()Ljava/util/List;");
              mids$[mid_getEnclosingCap_df3b6a7b2f01d1f4] = env->getMethodID(cls, "getEnclosingCap", "()Lorg/hipparchus/geometry/enclosing/EnclosingBall;");
              mids$[mid_computeGeometricalProperties_a1fa5dae97ea5ed2] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SphericalPolygonsSet::SphericalPolygonsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(jdouble a0, const JArray< ::org::hipparchus::geometry::spherical::twod::S2Point > & a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_548bdcb959b5c3f1, a0, a1.this$)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_4f2529905f184526, a0.this$, a1)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_936ab5386aba1bbf, a0.this$, a1)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_16deaf08470737f9, a0.this$, a1)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, jint a3, jdouble a4) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_57efc05c72ff0405, a0.this$, a1.this$, a2, a3, a4)) {}

          SphericalPolygonsSet SphericalPolygonsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_buildNew_9e4f0b6dbfea3f48], a0.this$));
          }

          ::java::util::List SphericalPolygonsSet::getBoundaryLoops() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBoundaryLoops_e62d3bb06d56d7e3]));
          }

          ::org::hipparchus::geometry::enclosing::EnclosingBall SphericalPolygonsSet::getEnclosingCap() const
          {
            return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_getEnclosingCap_df3b6a7b2f01d1f4]));
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
          static PyObject *t_SphericalPolygonsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalPolygonsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalPolygonsSet_of_(t_SphericalPolygonsSet *self, PyObject *args);
          static int t_SphericalPolygonsSet_init_(t_SphericalPolygonsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SphericalPolygonsSet_buildNew(t_SphericalPolygonsSet *self, PyObject *args);
          static PyObject *t_SphericalPolygonsSet_getBoundaryLoops(t_SphericalPolygonsSet *self);
          static PyObject *t_SphericalPolygonsSet_getEnclosingCap(t_SphericalPolygonsSet *self);
          static PyObject *t_SphericalPolygonsSet_get__boundaryLoops(t_SphericalPolygonsSet *self, void *data);
          static PyObject *t_SphericalPolygonsSet_get__enclosingCap(t_SphericalPolygonsSet *self, void *data);
          static PyObject *t_SphericalPolygonsSet_get__parameters_(t_SphericalPolygonsSet *self, void *data);
          static PyGetSetDef t_SphericalPolygonsSet__fields_[] = {
            DECLARE_GET_FIELD(t_SphericalPolygonsSet, boundaryLoops),
            DECLARE_GET_FIELD(t_SphericalPolygonsSet, enclosingCap),
            DECLARE_GET_FIELD(t_SphericalPolygonsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SphericalPolygonsSet__methods_[] = {
            DECLARE_METHOD(t_SphericalPolygonsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalPolygonsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalPolygonsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_SphericalPolygonsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_SphericalPolygonsSet, getBoundaryLoops, METH_NOARGS),
            DECLARE_METHOD(t_SphericalPolygonsSet, getEnclosingCap, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphericalPolygonsSet)[] = {
            { Py_tp_methods, t_SphericalPolygonsSet__methods_ },
            { Py_tp_init, (void *) t_SphericalPolygonsSet_init_ },
            { Py_tp_getset, t_SphericalPolygonsSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphericalPolygonsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(SphericalPolygonsSet, t_SphericalPolygonsSet, SphericalPolygonsSet);
          PyObject *t_SphericalPolygonsSet::wrap_Object(const SphericalPolygonsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SphericalPolygonsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SphericalPolygonsSet *self = (t_SphericalPolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SphericalPolygonsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SphericalPolygonsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SphericalPolygonsSet *self = (t_SphericalPolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SphericalPolygonsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(SphericalPolygonsSet), &PY_TYPE_DEF(SphericalPolygonsSet), module, "SphericalPolygonsSet", 0);
          }

          void t_SphericalPolygonsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalPolygonsSet), "class_", make_descriptor(SphericalPolygonsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalPolygonsSet), "wrapfn_", make_descriptor(t_SphericalPolygonsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalPolygonsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphericalPolygonsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphericalPolygonsSet::initializeClass, 1)))
              return NULL;
            return t_SphericalPolygonsSet::wrap_Object(SphericalPolygonsSet(((t_SphericalPolygonsSet *) arg)->object.this$));
          }
          static PyObject *t_SphericalPolygonsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphericalPolygonsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SphericalPolygonsSet_of_(t_SphericalPolygonsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SphericalPolygonsSet_init_(t_SphericalPolygonsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                JArray< ::org::hipparchus::geometry::spherical::twod::S2Point > a1((jobject) NULL);
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D[k", ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble a2;
                jint a3;
                jdouble a4;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "kkDID", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
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

          static PyObject *t_SphericalPolygonsSet_buildNew(t_SphericalPolygonsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            SphericalPolygonsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_SphericalPolygonsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SphericalPolygonsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_SphericalPolygonsSet_getBoundaryLoops(t_SphericalPolygonsSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getBoundaryLoops());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Vertex));
          }

          static PyObject *t_SphericalPolygonsSet_getEnclosingCap(t_SphericalPolygonsSet *self)
          {
            ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnclosingCap());
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D), ::org::hipparchus::geometry::spherical::twod::PY_TYPE(S2Point));
          }
          static PyObject *t_SphericalPolygonsSet_get__parameters_(t_SphericalPolygonsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SphericalPolygonsSet_get__boundaryLoops(t_SphericalPolygonsSet *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getBoundaryLoops());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SphericalPolygonsSet_get__enclosingCap(t_SphericalPolygonsSet *self, void *data)
          {
            ::org::hipparchus::geometry::enclosing::EnclosingBall value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnclosingCap());
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/BaseMultivariateOptimizer.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *BaseMultivariateOptimizer::class$ = NULL;
      jmethodID *BaseMultivariateOptimizer::mids$ = NULL;
      bool BaseMultivariateOptimizer::live$ = false;

      jclass BaseMultivariateOptimizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/BaseMultivariateOptimizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLowerBound_25e1757a36c4dde2] = env->getMethodID(cls, "getLowerBound", "()[D");
          mids$[mid_getStartPoint_25e1757a36c4dde2] = env->getMethodID(cls, "getStartPoint", "()[D");
          mids$[mid_getUpperBound_25e1757a36c4dde2] = env->getMethodID(cls, "getUpperBound", "()[D");
          mids$[mid_optimize_91381cab165160dc] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Ljava/lang/Object;");
          mids$[mid_parseOptimizationData_14193ddbce7a2cc0] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > BaseMultivariateOptimizer::getLowerBound() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getLowerBound_25e1757a36c4dde2]));
      }

      JArray< jdouble > BaseMultivariateOptimizer::getStartPoint() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStartPoint_25e1757a36c4dde2]));
      }

      JArray< jdouble > BaseMultivariateOptimizer::getUpperBound() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUpperBound_25e1757a36c4dde2]));
      }

      ::java::lang::Object BaseMultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_91381cab165160dc], a0.this$));
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
      static PyObject *t_BaseMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultivariateOptimizer_of_(t_BaseMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultivariateOptimizer_getLowerBound(t_BaseMultivariateOptimizer *self);
      static PyObject *t_BaseMultivariateOptimizer_getStartPoint(t_BaseMultivariateOptimizer *self);
      static PyObject *t_BaseMultivariateOptimizer_getUpperBound(t_BaseMultivariateOptimizer *self);
      static PyObject *t_BaseMultivariateOptimizer_optimize(t_BaseMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultivariateOptimizer_get__lowerBound(t_BaseMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultivariateOptimizer_get__startPoint(t_BaseMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultivariateOptimizer_get__upperBound(t_BaseMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultivariateOptimizer_get__parameters_(t_BaseMultivariateOptimizer *self, void *data);
      static PyGetSetDef t_BaseMultivariateOptimizer__fields_[] = {
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, lowerBound),
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, startPoint),
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, upperBound),
        DECLARE_GET_FIELD(t_BaseMultivariateOptimizer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseMultivariateOptimizer__methods_[] = {
        DECLARE_METHOD(t_BaseMultivariateOptimizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, of_, METH_VARARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, getLowerBound, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, getStartPoint, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, getUpperBound, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultivariateOptimizer, optimize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseMultivariateOptimizer)[] = {
        { Py_tp_methods, t_BaseMultivariateOptimizer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BaseMultivariateOptimizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseMultivariateOptimizer)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::BaseOptimizer),
        NULL
      };

      DEFINE_TYPE(BaseMultivariateOptimizer, t_BaseMultivariateOptimizer, BaseMultivariateOptimizer);
      PyObject *t_BaseMultivariateOptimizer::wrap_Object(const BaseMultivariateOptimizer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultivariateOptimizer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultivariateOptimizer *self = (t_BaseMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BaseMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultivariateOptimizer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultivariateOptimizer *self = (t_BaseMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BaseMultivariateOptimizer::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseMultivariateOptimizer), &PY_TYPE_DEF(BaseMultivariateOptimizer), module, "BaseMultivariateOptimizer", 0);
      }

      void t_BaseMultivariateOptimizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultivariateOptimizer), "class_", make_descriptor(BaseMultivariateOptimizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultivariateOptimizer), "wrapfn_", make_descriptor(t_BaseMultivariateOptimizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseMultivariateOptimizer::initializeClass, 1)))
          return NULL;
        return t_BaseMultivariateOptimizer::wrap_Object(BaseMultivariateOptimizer(((t_BaseMultivariateOptimizer *) arg)->object.this$));
      }
      static PyObject *t_BaseMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseMultivariateOptimizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseMultivariateOptimizer_of_(t_BaseMultivariateOptimizer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_BaseMultivariateOptimizer_getLowerBound(t_BaseMultivariateOptimizer *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLowerBound());
        return result.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_getStartPoint(t_BaseMultivariateOptimizer *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getStartPoint());
        return result.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_getUpperBound(t_BaseMultivariateOptimizer *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpperBound());
        return result.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_optimize(t_BaseMultivariateOptimizer *self, PyObject *args)
      {
        JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.optimize(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BaseMultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
      }
      static PyObject *t_BaseMultivariateOptimizer_get__parameters_(t_BaseMultivariateOptimizer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BaseMultivariateOptimizer_get__lowerBound(t_BaseMultivariateOptimizer *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLowerBound());
        return value.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_get__startPoint(t_BaseMultivariateOptimizer *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getStartPoint());
        return value.wrap();
      }

      static PyObject *t_BaseMultivariateOptimizer_get__upperBound(t_BaseMultivariateOptimizer *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpperBound());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerLeastSquareSolution::class$ = NULL;
          jmethodID *IntegerLeastSquareSolution::mids$ = NULL;
          bool IntegerLeastSquareSolution::live$ = false;

          jclass IntegerLeastSquareSolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_49319a360f3ed64e] = env->getMethodID(cls, "<init>", "([JD)V");
              mids$[mid_getSolution_16d0254d9e726201] = env->getMethodID(cls, "getSolution", "()[J");
              mids$[mid_getSquaredDistance_b74f83833fdad017] = env->getMethodID(cls, "getSquaredDistance", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntegerLeastSquareSolution::IntegerLeastSquareSolution(const JArray< jlong > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49319a360f3ed64e, a0.this$, a1)) {}

          JArray< jlong > IntegerLeastSquareSolution::getSolution() const
          {
            return JArray< jlong >(env->callObjectMethod(this$, mids$[mid_getSolution_16d0254d9e726201]));
          }

          jdouble IntegerLeastSquareSolution::getSquaredDistance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSquaredDistance_b74f83833fdad017]);
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
          static PyObject *t_IntegerLeastSquareSolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareSolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IntegerLeastSquareSolution_init_(t_IntegerLeastSquareSolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntegerLeastSquareSolution_getSolution(t_IntegerLeastSquareSolution *self);
          static PyObject *t_IntegerLeastSquareSolution_getSquaredDistance(t_IntegerLeastSquareSolution *self);
          static PyObject *t_IntegerLeastSquareSolution_get__solution(t_IntegerLeastSquareSolution *self, void *data);
          static PyObject *t_IntegerLeastSquareSolution_get__squaredDistance(t_IntegerLeastSquareSolution *self, void *data);
          static PyGetSetDef t_IntegerLeastSquareSolution__fields_[] = {
            DECLARE_GET_FIELD(t_IntegerLeastSquareSolution, solution),
            DECLARE_GET_FIELD(t_IntegerLeastSquareSolution, squaredDistance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IntegerLeastSquareSolution__methods_[] = {
            DECLARE_METHOD(t_IntegerLeastSquareSolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolution, getSolution, METH_NOARGS),
            DECLARE_METHOD(t_IntegerLeastSquareSolution, getSquaredDistance, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerLeastSquareSolution)[] = {
            { Py_tp_methods, t_IntegerLeastSquareSolution__methods_ },
            { Py_tp_init, (void *) t_IntegerLeastSquareSolution_init_ },
            { Py_tp_getset, t_IntegerLeastSquareSolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerLeastSquareSolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IntegerLeastSquareSolution, t_IntegerLeastSquareSolution, IntegerLeastSquareSolution);

          void t_IntegerLeastSquareSolution::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerLeastSquareSolution), &PY_TYPE_DEF(IntegerLeastSquareSolution), module, "IntegerLeastSquareSolution", 0);
          }

          void t_IntegerLeastSquareSolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolution), "class_", make_descriptor(IntegerLeastSquareSolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolution), "wrapfn_", make_descriptor(t_IntegerLeastSquareSolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerLeastSquareSolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerLeastSquareSolution::initializeClass, 1)))
              return NULL;
            return t_IntegerLeastSquareSolution::wrap_Object(IntegerLeastSquareSolution(((t_IntegerLeastSquareSolution *) arg)->object.this$));
          }
          static PyObject *t_IntegerLeastSquareSolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerLeastSquareSolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IntegerLeastSquareSolution_init_(t_IntegerLeastSquareSolution *self, PyObject *args, PyObject *kwds)
          {
            JArray< jlong > a0((jobject) NULL);
            jdouble a1;
            IntegerLeastSquareSolution object((jobject) NULL);

            if (!parseArgs(args, "[JD", &a0, &a1))
            {
              INT_CALL(object = IntegerLeastSquareSolution(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IntegerLeastSquareSolution_getSolution(t_IntegerLeastSquareSolution *self)
          {
            JArray< jlong > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSolution());
            return result.wrap();
          }

          static PyObject *t_IntegerLeastSquareSolution_getSquaredDistance(t_IntegerLeastSquareSolution *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSquaredDistance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IntegerLeastSquareSolution_get__solution(t_IntegerLeastSquareSolution *self, void *data)
          {
            JArray< jlong > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSolution());
            return value.wrap();
          }

          static PyObject *t_IntegerLeastSquareSolution_get__squaredDistance(t_IntegerLeastSquareSolution *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSquaredDistance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CombinationType::class$ = NULL;
          jmethodID *CombinationType::mids$ = NULL;
          bool CombinationType::live$ = false;
          CombinationType *CombinationType::GEOMETRY_FREE = NULL;
          CombinationType *CombinationType::GRAPHIC = NULL;
          CombinationType *CombinationType::IONO_FREE = NULL;
          CombinationType *CombinationType::MELBOURNE_WUBBENA = NULL;
          CombinationType *CombinationType::NARROW_LANE = NULL;
          CombinationType *CombinationType::PHASE_MINUS_CODE = NULL;
          CombinationType *CombinationType::WIDE_LANE = NULL;

          jclass CombinationType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CombinationType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_valueOf_a84d714f094c2269] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/estimation/measurements/gnss/CombinationType;");
              mids$[mid_values_30a74d6e6ea3b3d0] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/estimation/measurements/gnss/CombinationType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GEOMETRY_FREE = new CombinationType(env->getStaticObjectField(cls, "GEOMETRY_FREE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              GRAPHIC = new CombinationType(env->getStaticObjectField(cls, "GRAPHIC", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              IONO_FREE = new CombinationType(env->getStaticObjectField(cls, "IONO_FREE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              MELBOURNE_WUBBENA = new CombinationType(env->getStaticObjectField(cls, "MELBOURNE_WUBBENA", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              NARROW_LANE = new CombinationType(env->getStaticObjectField(cls, "NARROW_LANE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              PHASE_MINUS_CODE = new CombinationType(env->getStaticObjectField(cls, "PHASE_MINUS_CODE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              WIDE_LANE = new CombinationType(env->getStaticObjectField(cls, "WIDE_LANE", "Lorg/orekit/estimation/measurements/gnss/CombinationType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String CombinationType::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          CombinationType CombinationType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CombinationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a84d714f094c2269], a0.this$));
          }

          JArray< CombinationType > CombinationType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CombinationType >(env->callStaticObjectMethod(cls, mids$[mid_values_30a74d6e6ea3b3d0]));
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
          static PyObject *t_CombinationType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinationType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinationType_of_(t_CombinationType *self, PyObject *args);
          static PyObject *t_CombinationType_getName(t_CombinationType *self);
          static PyObject *t_CombinationType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CombinationType_values(PyTypeObject *type);
          static PyObject *t_CombinationType_get__name(t_CombinationType *self, void *data);
          static PyObject *t_CombinationType_get__parameters_(t_CombinationType *self, void *data);
          static PyGetSetDef t_CombinationType__fields_[] = {
            DECLARE_GET_FIELD(t_CombinationType, name),
            DECLARE_GET_FIELD(t_CombinationType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CombinationType__methods_[] = {
            DECLARE_METHOD(t_CombinationType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinationType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinationType, of_, METH_VARARGS),
            DECLARE_METHOD(t_CombinationType, getName, METH_NOARGS),
            DECLARE_METHOD(t_CombinationType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CombinationType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CombinationType)[] = {
            { Py_tp_methods, t_CombinationType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CombinationType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CombinationType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CombinationType, t_CombinationType, CombinationType);
          PyObject *t_CombinationType::wrap_Object(const CombinationType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CombinationType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CombinationType *self = (t_CombinationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CombinationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CombinationType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CombinationType *self = (t_CombinationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CombinationType::install(PyObject *module)
          {
            installType(&PY_TYPE(CombinationType), &PY_TYPE_DEF(CombinationType), module, "CombinationType", 0);
          }

          void t_CombinationType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "class_", make_descriptor(CombinationType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "wrapfn_", make_descriptor(t_CombinationType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "boxfn_", make_descriptor(boxObject));
            env->getClass(CombinationType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "GEOMETRY_FREE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::GEOMETRY_FREE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "GRAPHIC", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::GRAPHIC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "IONO_FREE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::IONO_FREE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "MELBOURNE_WUBBENA", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::MELBOURNE_WUBBENA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "NARROW_LANE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::NARROW_LANE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "PHASE_MINUS_CODE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::PHASE_MINUS_CODE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinationType), "WIDE_LANE", make_descriptor(t_CombinationType::wrap_Object(*CombinationType::WIDE_LANE)));
          }

          static PyObject *t_CombinationType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CombinationType::initializeClass, 1)))
              return NULL;
            return t_CombinationType::wrap_Object(CombinationType(((t_CombinationType *) arg)->object.this$));
          }
          static PyObject *t_CombinationType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CombinationType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CombinationType_of_(t_CombinationType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CombinationType_getName(t_CombinationType *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_CombinationType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CombinationType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::CombinationType::valueOf(a0));
              return t_CombinationType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CombinationType_values(PyTypeObject *type)
          {
            JArray< CombinationType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::CombinationType::values());
            return JArray<jobject>(result.this$).wrap(t_CombinationType::wrap_jobject);
          }
          static PyObject *t_CombinationType_get__parameters_(t_CombinationType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_CombinationType_get__name(t_CombinationType *self, void *data)
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
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/DoubleArrayDictionary$Entry.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *DoubleArrayDictionary::class$ = NULL;
      jmethodID *DoubleArrayDictionary::mids$ = NULL;
      bool DoubleArrayDictionary::live$ = false;

      jclass DoubleArrayDictionary::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/DoubleArrayDictionary");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_6648520b18d8ef1d] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
          mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_get_1d7f5d54f6c58f85] = env->getMethodID(cls, "get", "(Ljava/lang/String;)[D");
          mids$[mid_getData_e62d3bb06d56d7e3] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
          mids$[mid_getEntry_c60933ca2e34a5f9] = env->getMethodID(cls, "getEntry", "(Ljava/lang/String;)Lorg/orekit/utils/DoubleArrayDictionary$Entry;");
          mids$[mid_put_6fb36758267c5870] = env->getMethodID(cls, "put", "(Ljava/lang/String;[D)V");
          mids$[mid_putAll_70dc9a5517cb372a] = env->getMethodID(cls, "putAll", "(Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_putAll_6648520b18d8ef1d] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
          mids$[mid_remove_cde6b28e15c96b75] = env->getMethodID(cls, "remove", "(Ljava/lang/String;)Z");
          mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
          mids$[mid_toMap_810bed48fafb0b9a] = env->getMethodID(cls, "toMap", "()Ljava/util/Map;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_unmodifiableView_7e78a9fc753e1e5a] = env->getMethodID(cls, "unmodifiableView", "()Lorg/orekit/utils/DoubleArrayDictionary;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DoubleArrayDictionary::DoubleArrayDictionary() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      DoubleArrayDictionary::DoubleArrayDictionary(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      DoubleArrayDictionary::DoubleArrayDictionary(const ::java::util::Map & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6648520b18d8ef1d, a0.this$)) {}

      void DoubleArrayDictionary::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
      }

      JArray< jdouble > DoubleArrayDictionary::get$(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_get_1d7f5d54f6c58f85], a0.this$));
      }

      ::java::util::List DoubleArrayDictionary::getData() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_e62d3bb06d56d7e3]));
      }

      ::org::orekit::utils::DoubleArrayDictionary$Entry DoubleArrayDictionary::getEntry(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::DoubleArrayDictionary$Entry(env->callObjectMethod(this$, mids$[mid_getEntry_c60933ca2e34a5f9], a0.this$));
      }

      void DoubleArrayDictionary::put(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_put_6fb36758267c5870], a0.this$, a1.this$);
      }

      void DoubleArrayDictionary::putAll(const DoubleArrayDictionary & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_70dc9a5517cb372a], a0.this$);
      }

      void DoubleArrayDictionary::putAll(const ::java::util::Map & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_6648520b18d8ef1d], a0.this$);
      }

      jboolean DoubleArrayDictionary::remove(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_remove_cde6b28e15c96b75], a0.this$);
      }

      jint DoubleArrayDictionary::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
      }

      ::java::util::Map DoubleArrayDictionary::toMap() const
      {
        return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_toMap_810bed48fafb0b9a]));
      }

      ::java::lang::String DoubleArrayDictionary::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      DoubleArrayDictionary DoubleArrayDictionary::unmodifiableView() const
      {
        return DoubleArrayDictionary(env->callObjectMethod(this$, mids$[mid_unmodifiableView_7e78a9fc753e1e5a]));
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
      static PyObject *t_DoubleArrayDictionary_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DoubleArrayDictionary_init_(t_DoubleArrayDictionary *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DoubleArrayDictionary_clear(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_get(t_DoubleArrayDictionary *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_getData(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_getEntry(t_DoubleArrayDictionary *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_put(t_DoubleArrayDictionary *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary_putAll(t_DoubleArrayDictionary *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary_remove(t_DoubleArrayDictionary *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_size(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_toMap(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_toString(t_DoubleArrayDictionary *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary_unmodifiableView(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_get__data(t_DoubleArrayDictionary *self, void *data);
      static PyGetSetDef t_DoubleArrayDictionary__fields_[] = {
        DECLARE_GET_FIELD(t_DoubleArrayDictionary, data),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DoubleArrayDictionary__methods_[] = {
        DECLARE_METHOD(t_DoubleArrayDictionary, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary, clear, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, get, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary, getData, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, getEntry, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary, put, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, putAll, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, remove, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary, size, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, toMap, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, toString, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, unmodifiableView, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleArrayDictionary)[] = {
        { Py_tp_methods, t_DoubleArrayDictionary__methods_ },
        { Py_tp_init, (void *) t_DoubleArrayDictionary_init_ },
        { Py_tp_getset, t_DoubleArrayDictionary__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleArrayDictionary)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleArrayDictionary, t_DoubleArrayDictionary, DoubleArrayDictionary);

      void t_DoubleArrayDictionary::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleArrayDictionary), &PY_TYPE_DEF(DoubleArrayDictionary), module, "DoubleArrayDictionary", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "Entry", make_descriptor(&PY_TYPE_DEF(DoubleArrayDictionary$Entry)));
      }

      void t_DoubleArrayDictionary::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "class_", make_descriptor(DoubleArrayDictionary::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "wrapfn_", make_descriptor(t_DoubleArrayDictionary::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleArrayDictionary_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleArrayDictionary::initializeClass, 1)))
          return NULL;
        return t_DoubleArrayDictionary::wrap_Object(DoubleArrayDictionary(((t_DoubleArrayDictionary *) arg)->object.this$));
      }
      static PyObject *t_DoubleArrayDictionary_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleArrayDictionary::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DoubleArrayDictionary_init_(t_DoubleArrayDictionary *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            DoubleArrayDictionary object((jobject) NULL);

            INT_CALL(object = DoubleArrayDictionary());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            DoubleArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = DoubleArrayDictionary(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;
            DoubleArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              INT_CALL(object = DoubleArrayDictionary(a0));
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

      static PyObject *t_DoubleArrayDictionary_clear(t_DoubleArrayDictionary *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_DoubleArrayDictionary_get(t_DoubleArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_getData(t_DoubleArrayDictionary *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(DoubleArrayDictionary$Entry));
      }

      static PyObject *t_DoubleArrayDictionary_getEntry(t_DoubleArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary$Entry result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return ::org::orekit::utils::t_DoubleArrayDictionary$Entry::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_put(t_DoubleArrayDictionary *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(self->object.put(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_putAll(t_DoubleArrayDictionary *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DoubleArrayDictionary a0((jobject) NULL);

            if (!parseArgs(args, "k", DoubleArrayDictionary::initializeClass, &a0))
            {
              OBJ_CALL(self->object.putAll(a0));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(self->object.putAll(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "putAll", args);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_remove(t_DoubleArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_size(t_DoubleArrayDictionary *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DoubleArrayDictionary_toMap(t_DoubleArrayDictionary *self)
      {
        ::java::util::Map result((jobject) NULL);
        OBJ_CALL(result = self->object.toMap());
        return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(Object));
      }

      static PyObject *t_DoubleArrayDictionary_toString(t_DoubleArrayDictionary *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(DoubleArrayDictionary), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DoubleArrayDictionary_unmodifiableView(t_DoubleArrayDictionary *self)
      {
        DoubleArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.unmodifiableView());
        return t_DoubleArrayDictionary::wrap_Object(result);
      }

      static PyObject *t_DoubleArrayDictionary_get__data(t_DoubleArrayDictionary *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/RinexObservationParser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservationParser::class$ = NULL;
          jmethodID *RinexObservationParser::mids$ = NULL;
          bool RinexObservationParser::live$ = false;
          ::java::lang::String *RinexObservationParser::DEFAULT_RINEX_2_NAMES = NULL;
          ::java::lang::String *RinexObservationParser::DEFAULT_RINEX_3_NAMES = NULL;

          jclass RinexObservationParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservationParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_0473fe41b53e3616] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;)V");
              mids$[mid_parse_ebb938bbffade864] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/rinex/observation/RinexObservation;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_RINEX_2_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_RINEX_2_NAMES", "Ljava/lang/String;"));
              DEFAULT_RINEX_3_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_RINEX_3_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservationParser::RinexObservationParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          RinexObservationParser::RinexObservationParser(const ::org::orekit::time::TimeScales & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0473fe41b53e3616, a0.this$)) {}

          ::org::orekit::files::rinex::observation::RinexObservation RinexObservationParser::parse(const ::org::orekit::data::DataSource & a0) const
          {
            return ::org::orekit::files::rinex::observation::RinexObservation(env->callObjectMethod(this$, mids$[mid_parse_ebb938bbffade864], a0.this$));
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
          static PyObject *t_RinexObservationParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservationParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexObservationParser_init_(t_RinexObservationParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservationParser_parse(t_RinexObservationParser *self, PyObject *arg);

          static PyMethodDef t_RinexObservationParser__methods_[] = {
            DECLARE_METHOD(t_RinexObservationParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationParser, parse, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservationParser)[] = {
            { Py_tp_methods, t_RinexObservationParser__methods_ },
            { Py_tp_init, (void *) t_RinexObservationParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservationParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexObservationParser, t_RinexObservationParser, RinexObservationParser);

          void t_RinexObservationParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservationParser), &PY_TYPE_DEF(RinexObservationParser), module, "RinexObservationParser", 0);
          }

          void t_RinexObservationParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "class_", make_descriptor(RinexObservationParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "wrapfn_", make_descriptor(t_RinexObservationParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexObservationParser::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "DEFAULT_RINEX_2_NAMES", make_descriptor(j2p(*RinexObservationParser::DEFAULT_RINEX_2_NAMES)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "DEFAULT_RINEX_3_NAMES", make_descriptor(j2p(*RinexObservationParser::DEFAULT_RINEX_3_NAMES)));
          }

          static PyObject *t_RinexObservationParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservationParser::initializeClass, 1)))
              return NULL;
            return t_RinexObservationParser::wrap_Object(RinexObservationParser(((t_RinexObservationParser *) arg)->object.this$));
          }
          static PyObject *t_RinexObservationParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservationParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexObservationParser_init_(t_RinexObservationParser *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RinexObservationParser object((jobject) NULL);

                INT_CALL(object = RinexObservationParser());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScales a0((jobject) NULL);
                RinexObservationParser object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                {
                  INT_CALL(object = RinexObservationParser(a0));
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

          static PyObject *t_RinexObservationParser_parse(t_RinexObservationParser *self, PyObject *arg)
          {
            ::org::orekit::data::DataSource a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::RinexObservation result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::orekit::files::rinex::observation::t_RinexObservation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/EventObject.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *EventObject::class$ = NULL;
    jmethodID *EventObject::mids$ = NULL;
    bool EventObject::live$ = false;

    jclass EventObject::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/EventObject");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_55f3c894852c27a3] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;)V");
        mids$[mid_getSource_541690f9ee81d3ad] = env->getMethodID(cls, "getSource", "()Ljava/lang/Object;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    EventObject::EventObject(const ::java::lang::Object & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_55f3c894852c27a3, a0.this$)) {}

    ::java::lang::Object EventObject::getSource() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getSource_541690f9ee81d3ad]));
    }

    ::java::lang::String EventObject::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_EventObject_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_EventObject_instance_(PyTypeObject *type, PyObject *arg);
    static int t_EventObject_init_(t_EventObject *self, PyObject *args, PyObject *kwds);
    static PyObject *t_EventObject_getSource(t_EventObject *self);
    static PyObject *t_EventObject_toString(t_EventObject *self, PyObject *args);
    static PyObject *t_EventObject_get__source(t_EventObject *self, void *data);
    static PyGetSetDef t_EventObject__fields_[] = {
      DECLARE_GET_FIELD(t_EventObject, source),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_EventObject__methods_[] = {
      DECLARE_METHOD(t_EventObject, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_EventObject, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_EventObject, getSource, METH_NOARGS),
      DECLARE_METHOD(t_EventObject, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(EventObject)[] = {
      { Py_tp_methods, t_EventObject__methods_ },
      { Py_tp_init, (void *) t_EventObject_init_ },
      { Py_tp_getset, t_EventObject__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(EventObject)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(EventObject, t_EventObject, EventObject);

    void t_EventObject::install(PyObject *module)
    {
      installType(&PY_TYPE(EventObject), &PY_TYPE_DEF(EventObject), module, "EventObject", 0);
    }

    void t_EventObject::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventObject), "class_", make_descriptor(EventObject::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventObject), "wrapfn_", make_descriptor(t_EventObject::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventObject), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_EventObject_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, EventObject::initializeClass, 1)))
        return NULL;
      return t_EventObject::wrap_Object(EventObject(((t_EventObject *) arg)->object.this$));
    }
    static PyObject *t_EventObject_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, EventObject::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_EventObject_init_(t_EventObject *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::Object a0((jobject) NULL);
      EventObject object((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        INT_CALL(object = EventObject(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_EventObject_getSource(t_EventObject *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getSource());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_EventObject_toString(t_EventObject *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(EventObject), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_EventObject_get__source(t_EventObject *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getSource());
      return ::java::lang::t_Object::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldStopOnEvent.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldStopOnEvent::class$ = NULL;
          jmethodID *FieldStopOnEvent::mids$ = NULL;
          bool FieldStopOnEvent::live$ = false;

          jclass FieldStopOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldStopOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_839b1f3ec2c4fbf6] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldStopOnEvent::FieldStopOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::hipparchus::ode::events::Action FieldStopOnEvent::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_839b1f3ec2c4fbf6], a0.this$, a1.this$, a2));
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
      namespace events {
        namespace handlers {
          static PyObject *t_FieldStopOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnEvent_of_(t_FieldStopOnEvent *self, PyObject *args);
          static int t_FieldStopOnEvent_init_(t_FieldStopOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldStopOnEvent_eventOccurred(t_FieldStopOnEvent *self, PyObject *args);
          static PyObject *t_FieldStopOnEvent_get__parameters_(t_FieldStopOnEvent *self, void *data);
          static PyGetSetDef t_FieldStopOnEvent__fields_[] = {
            DECLARE_GET_FIELD(t_FieldStopOnEvent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldStopOnEvent__methods_[] = {
            DECLARE_METHOD(t_FieldStopOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnEvent, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldStopOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldStopOnEvent)[] = {
            { Py_tp_methods, t_FieldStopOnEvent__methods_ },
            { Py_tp_init, (void *) t_FieldStopOnEvent_init_ },
            { Py_tp_getset, t_FieldStopOnEvent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldStopOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldStopOnEvent, t_FieldStopOnEvent, FieldStopOnEvent);
          PyObject *t_FieldStopOnEvent::wrap_Object(const FieldStopOnEvent& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnEvent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnEvent *self = (t_FieldStopOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldStopOnEvent::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnEvent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnEvent *self = (t_FieldStopOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldStopOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldStopOnEvent), &PY_TYPE_DEF(FieldStopOnEvent), module, "FieldStopOnEvent", 0);
          }

          void t_FieldStopOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnEvent), "class_", make_descriptor(FieldStopOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnEvent), "wrapfn_", make_descriptor(t_FieldStopOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldStopOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldStopOnEvent::initializeClass, 1)))
              return NULL;
            return t_FieldStopOnEvent::wrap_Object(FieldStopOnEvent(((t_FieldStopOnEvent *) arg)->object.this$));
          }
          static PyObject *t_FieldStopOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldStopOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldStopOnEvent_of_(t_FieldStopOnEvent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldStopOnEvent_init_(t_FieldStopOnEvent *self, PyObject *args, PyObject *kwds)
          {
            FieldStopOnEvent object((jobject) NULL);

            INT_CALL(object = FieldStopOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldStopOnEvent_eventOccurred(t_FieldStopOnEvent *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldStopOnEvent_get__parameters_(t_FieldStopOnEvent *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/InterSatellitesPhaseBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *InterSatellitesPhaseBuilder::class$ = NULL;
          jmethodID *InterSatellitesPhaseBuilder::mids$ = NULL;
          bool InterSatellitesPhaseBuilder::live$ = false;

          jclass InterSatellitesPhaseBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/InterSatellitesPhaseBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6b22f723d486ea21] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;DDD)V");
              mids$[mid_build_f60fe7e6a5c1a7b0] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/InterSatellitesPhase;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesPhaseBuilder::InterSatellitesPhaseBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, const ::org::orekit::estimation::measurements::ObservableSatellite & a2, jdouble a3, jdouble a4, jdouble a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_6b22f723d486ea21, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

          ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase InterSatellitesPhaseBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase(env->callObjectMethod(this$, mids$[mid_build_f60fe7e6a5c1a7b0], a0.this$, a1.this$));
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
          static PyObject *t_InterSatellitesPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseBuilder_of_(t_InterSatellitesPhaseBuilder *self, PyObject *args);
          static int t_InterSatellitesPhaseBuilder_init_(t_InterSatellitesPhaseBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesPhaseBuilder_build(t_InterSatellitesPhaseBuilder *self, PyObject *args);
          static PyObject *t_InterSatellitesPhaseBuilder_get__parameters_(t_InterSatellitesPhaseBuilder *self, void *data);
          static PyGetSetDef t_InterSatellitesPhaseBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesPhaseBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesPhaseBuilder__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesPhaseBuilder)[] = {
            { Py_tp_methods, t_InterSatellitesPhaseBuilder__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesPhaseBuilder_init_ },
            { Py_tp_getset, t_InterSatellitesPhaseBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesPhaseBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(InterSatellitesPhaseBuilder, t_InterSatellitesPhaseBuilder, InterSatellitesPhaseBuilder);
          PyObject *t_InterSatellitesPhaseBuilder::wrap_Object(const InterSatellitesPhaseBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhaseBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhaseBuilder *self = (t_InterSatellitesPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesPhaseBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhaseBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhaseBuilder *self = (t_InterSatellitesPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesPhaseBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesPhaseBuilder), &PY_TYPE_DEF(InterSatellitesPhaseBuilder), module, "InterSatellitesPhaseBuilder", 0);
          }

          void t_InterSatellitesPhaseBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseBuilder), "class_", make_descriptor(InterSatellitesPhaseBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseBuilder), "wrapfn_", make_descriptor(t_InterSatellitesPhaseBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesPhaseBuilder::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesPhaseBuilder::wrap_Object(InterSatellitesPhaseBuilder(((t_InterSatellitesPhaseBuilder *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesPhaseBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesPhaseBuilder_of_(t_InterSatellitesPhaseBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_InterSatellitesPhaseBuilder_init_(t_InterSatellitesPhaseBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            InterSatellitesPhaseBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDD", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = InterSatellitesPhaseBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(InterSatellitesPhase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesPhaseBuilder_build(t_InterSatellitesPhaseBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_InterSatellitesPhase::wrap_Object(result);
            }

            return callSuper(PY_TYPE(InterSatellitesPhaseBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_InterSatellitesPhaseBuilder_get__parameters_(t_InterSatellitesPhaseBuilder *self, void *data)
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
#include "org/orekit/frames/TransformProviderUtils.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TransformProviderUtils::class$ = NULL;
      jmethodID *TransformProviderUtils::mids$ = NULL;
      bool TransformProviderUtils::live$ = false;
      ::org::orekit::frames::TransformProvider *TransformProviderUtils::IDENTITY_PROVIDER = NULL;

      jclass TransformProviderUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TransformProviderUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCombinedProvider_93c2b051a765abc6] = env->getStaticMethodID(cls, "getCombinedProvider", "(Lorg/orekit/frames/TransformProvider;Lorg/orekit/frames/TransformProvider;)Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getReversedProvider_d3a07aaf2d4db810] = env->getStaticMethodID(cls, "getReversedProvider", "(Lorg/orekit/frames/TransformProvider;)Lorg/orekit/frames/TransformProvider;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IDENTITY_PROVIDER = new ::org::orekit::frames::TransformProvider(env->getStaticObjectField(cls, "IDENTITY_PROVIDER", "Lorg/orekit/frames/TransformProvider;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::TransformProvider TransformProviderUtils::getCombinedProvider(const ::org::orekit::frames::TransformProvider & a0, const ::org::orekit::frames::TransformProvider & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::TransformProvider(env->callStaticObjectMethod(cls, mids$[mid_getCombinedProvider_93c2b051a765abc6], a0.this$, a1.this$));
      }

      ::org::orekit::frames::TransformProvider TransformProviderUtils::getReversedProvider(const ::org::orekit::frames::TransformProvider & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::TransformProvider(env->callStaticObjectMethod(cls, mids$[mid_getReversedProvider_d3a07aaf2d4db810], a0.this$));
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
      static PyObject *t_TransformProviderUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProviderUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProviderUtils_getCombinedProvider(PyTypeObject *type, PyObject *args);
      static PyObject *t_TransformProviderUtils_getReversedProvider(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_TransformProviderUtils__methods_[] = {
        DECLARE_METHOD(t_TransformProviderUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProviderUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProviderUtils, getCombinedProvider, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TransformProviderUtils, getReversedProvider, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TransformProviderUtils)[] = {
        { Py_tp_methods, t_TransformProviderUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TransformProviderUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TransformProviderUtils, t_TransformProviderUtils, TransformProviderUtils);

      void t_TransformProviderUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(TransformProviderUtils), &PY_TYPE_DEF(TransformProviderUtils), module, "TransformProviderUtils", 0);
      }

      void t_TransformProviderUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "class_", make_descriptor(TransformProviderUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "wrapfn_", make_descriptor(t_TransformProviderUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(TransformProviderUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "IDENTITY_PROVIDER", make_descriptor(::org::orekit::frames::t_TransformProvider::wrap_Object(*TransformProviderUtils::IDENTITY_PROVIDER)));
      }

      static PyObject *t_TransformProviderUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TransformProviderUtils::initializeClass, 1)))
          return NULL;
        return t_TransformProviderUtils::wrap_Object(TransformProviderUtils(((t_TransformProviderUtils *) arg)->object.this$));
      }
      static PyObject *t_TransformProviderUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TransformProviderUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TransformProviderUtils_getCombinedProvider(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::frames::TransformProvider a1((jobject) NULL);
        ::org::orekit::frames::TransformProvider result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::TransformProviderUtils::getCombinedProvider(a0, a1));
          return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCombinedProvider", args);
        return NULL;
      }

      static PyObject *t_TransformProviderUtils_getReversedProvider(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::frames::TransformProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::TransformProvider::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::TransformProviderUtils::getReversedProvider(a0));
          return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getReversedProvider", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TimetagReference::class$ = NULL;
            jmethodID *TimetagReference::mids$ = NULL;
            bool TimetagReference::live$ = false;
            TimetagReference *TimetagReference::RECEIVE = NULL;
            TimetagReference *TimetagReference::TRANSMIT = NULL;

            jclass TimetagReference::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TimetagReference");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_ae702167a8f90e94] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;");
                mids$[mid_values_4fa16c8105e64751] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                RECEIVE = new TimetagReference(env->getStaticObjectField(cls, "RECEIVE", "Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;"));
                TRANSMIT = new TimetagReference(env->getStaticObjectField(cls, "TRANSMIT", "Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TimetagReference TimetagReference::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TimetagReference(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ae702167a8f90e94], a0.this$));
            }

            JArray< TimetagReference > TimetagReference::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TimetagReference >(env->callStaticObjectMethod(cls, mids$[mid_values_4fa16c8105e64751]));
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
            static PyObject *t_TimetagReference_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TimetagReference_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TimetagReference_of_(t_TimetagReference *self, PyObject *args);
            static PyObject *t_TimetagReference_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TimetagReference_values(PyTypeObject *type);
            static PyObject *t_TimetagReference_get__parameters_(t_TimetagReference *self, void *data);
            static PyGetSetDef t_TimetagReference__fields_[] = {
              DECLARE_GET_FIELD(t_TimetagReference, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TimetagReference__methods_[] = {
              DECLARE_METHOD(t_TimetagReference, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TimetagReference, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TimetagReference, of_, METH_VARARGS),
              DECLARE_METHOD(t_TimetagReference, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TimetagReference, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TimetagReference)[] = {
              { Py_tp_methods, t_TimetagReference__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TimetagReference__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TimetagReference)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TimetagReference, t_TimetagReference, TimetagReference);
            PyObject *t_TimetagReference::wrap_Object(const TimetagReference& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TimetagReference::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TimetagReference *self = (t_TimetagReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TimetagReference::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TimetagReference::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TimetagReference *self = (t_TimetagReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TimetagReference::install(PyObject *module)
            {
              installType(&PY_TYPE(TimetagReference), &PY_TYPE_DEF(TimetagReference), module, "TimetagReference", 0);
            }

            void t_TimetagReference::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "class_", make_descriptor(TimetagReference::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "wrapfn_", make_descriptor(t_TimetagReference::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "boxfn_", make_descriptor(boxObject));
              env->getClass(TimetagReference::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "RECEIVE", make_descriptor(t_TimetagReference::wrap_Object(*TimetagReference::RECEIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "TRANSMIT", make_descriptor(t_TimetagReference::wrap_Object(*TimetagReference::TRANSMIT)));
            }

            static PyObject *t_TimetagReference_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TimetagReference::initializeClass, 1)))
                return NULL;
              return t_TimetagReference::wrap_Object(TimetagReference(((t_TimetagReference *) arg)->object.this$));
            }
            static PyObject *t_TimetagReference_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TimetagReference::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TimetagReference_of_(t_TimetagReference *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TimetagReference_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TimetagReference result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::valueOf(a0));
                return t_TimetagReference::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TimetagReference_values(PyTypeObject *type)
            {
              JArray< TimetagReference > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::values());
              return JArray<jobject>(result.this$).wrap(t_TimetagReference::wrap_jobject);
            }
            static PyObject *t_TimetagReference_get__parameters_(t_TimetagReference *self, void *data)
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
#include "org/orekit/utils/units/Unit.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/io/Serializable.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *Unit::class$ = NULL;
        jmethodID *Unit::mids$ = NULL;
        bool Unit::live$ = false;
        Unit *Unit::AMPERE = NULL;
        Unit *Unit::ARC_MINUTE = NULL;
        Unit *Unit::ARC_SECOND = NULL;
        Unit *Unit::BAR = NULL;
        Unit *Unit::COULOMB = NULL;
        Unit *Unit::DAY = NULL;
        Unit *Unit::DEGREE = NULL;
        Unit *Unit::EARTH_RADII = NULL;
        Unit *Unit::GRAM = NULL;
        Unit *Unit::HERTZ = NULL;
        Unit *Unit::HOUR = NULL;
        Unit *Unit::JOULE = NULL;
        Unit *Unit::KILOGRAM = NULL;
        Unit *Unit::KILOMETRE = NULL;
        Unit *Unit::METRE = NULL;
        Unit *Unit::MINUTE = NULL;
        Unit *Unit::NEWTON = NULL;
        Unit *Unit::NONE = NULL;
        Unit *Unit::OHM = NULL;
        Unit *Unit::ONE = NULL;
        Unit *Unit::PASCAL$ = NULL;
        Unit *Unit::PERCENT$ = NULL;
        Unit *Unit::RADIAN = NULL;
        Unit *Unit::REVOLUTION = NULL;
        Unit *Unit::SECOND = NULL;
        Unit *Unit::SOLAR_FLUX_UNIT = NULL;
        Unit *Unit::TESLA = NULL;
        Unit *Unit::TOTAL_ELECTRON_CONTENT_UNIT = NULL;
        Unit *Unit::VOLT = NULL;
        Unit *Unit::WATT = NULL;
        Unit *Unit::YEAR = NULL;

        jclass Unit::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/Unit");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3f21e2df8fcb2b32] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;Lorg/hipparchus/fraction/Fraction;)V");
            mids$[mid_alias_d901bfc45b4f4fe6] = env->getMethodID(cls, "alias", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_divide_a71cf563e58a7ac6] = env->getMethodID(cls, "divide", "(Ljava/lang/String;Lorg/orekit/utils/units/Unit;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_ensureCompatible_183e875889e6ba2f] = env->getStaticMethodID(cls, "ensureCompatible", "(Ljava/lang/String;Ljava/util/List;ZLjava/util/List;)V");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_fromSI_53da1ceb0da32c64] = env->getMethodID(cls, "fromSI", "(Ljava/lang/Double;)D");
            mids$[mid_fromSI_04fd0666b613d2ab] = env->getMethodID(cls, "fromSI", "(D)D");
            mids$[mid_getAngle_7ab72bcbb3909669] = env->getMethodID(cls, "getAngle", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getCurrent_7ab72bcbb3909669] = env->getMethodID(cls, "getCurrent", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getLength_7ab72bcbb3909669] = env->getMethodID(cls, "getLength", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getMass_7ab72bcbb3909669] = env->getMethodID(cls, "getMass", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getScale_b74f83833fdad017] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getTime_7ab72bcbb3909669] = env->getMethodID(cls, "getTime", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_multiply_a71cf563e58a7ac6] = env->getMethodID(cls, "multiply", "(Ljava/lang/String;Lorg/orekit/utils/units/Unit;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_parse_d901bfc45b4f4fe6] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_power_024c7df38ac4c192] = env->getMethodID(cls, "power", "(Ljava/lang/String;Lorg/hipparchus/fraction/Fraction;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_sameDimension_c4dae8f6c826c849] = env->getMethodID(cls, "sameDimension", "(Lorg/orekit/utils/units/Unit;)Z");
            mids$[mid_sameDimensionSI_6466188dbb1eea22] = env->getMethodID(cls, "sameDimensionSI", "()Lorg/orekit/utils/units/Unit;");
            mids$[mid_scale_ccd54d8c74d5128b] = env->getMethodID(cls, "scale", "(Ljava/lang/String;D)Lorg/orekit/utils/units/Unit;");
            mids$[mid_sqrt_d901bfc45b4f4fe6] = env->getMethodID(cls, "sqrt", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");
            mids$[mid_toSI_53da1ceb0da32c64] = env->getMethodID(cls, "toSI", "(Ljava/lang/Double;)D");
            mids$[mid_toSI_04fd0666b613d2ab] = env->getMethodID(cls, "toSI", "(D)D");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            AMPERE = new Unit(env->getStaticObjectField(cls, "AMPERE", "Lorg/orekit/utils/units/Unit;"));
            ARC_MINUTE = new Unit(env->getStaticObjectField(cls, "ARC_MINUTE", "Lorg/orekit/utils/units/Unit;"));
            ARC_SECOND = new Unit(env->getStaticObjectField(cls, "ARC_SECOND", "Lorg/orekit/utils/units/Unit;"));
            BAR = new Unit(env->getStaticObjectField(cls, "BAR", "Lorg/orekit/utils/units/Unit;"));
            COULOMB = new Unit(env->getStaticObjectField(cls, "COULOMB", "Lorg/orekit/utils/units/Unit;"));
            DAY = new Unit(env->getStaticObjectField(cls, "DAY", "Lorg/orekit/utils/units/Unit;"));
            DEGREE = new Unit(env->getStaticObjectField(cls, "DEGREE", "Lorg/orekit/utils/units/Unit;"));
            EARTH_RADII = new Unit(env->getStaticObjectField(cls, "EARTH_RADII", "Lorg/orekit/utils/units/Unit;"));
            GRAM = new Unit(env->getStaticObjectField(cls, "GRAM", "Lorg/orekit/utils/units/Unit;"));
            HERTZ = new Unit(env->getStaticObjectField(cls, "HERTZ", "Lorg/orekit/utils/units/Unit;"));
            HOUR = new Unit(env->getStaticObjectField(cls, "HOUR", "Lorg/orekit/utils/units/Unit;"));
            JOULE = new Unit(env->getStaticObjectField(cls, "JOULE", "Lorg/orekit/utils/units/Unit;"));
            KILOGRAM = new Unit(env->getStaticObjectField(cls, "KILOGRAM", "Lorg/orekit/utils/units/Unit;"));
            KILOMETRE = new Unit(env->getStaticObjectField(cls, "KILOMETRE", "Lorg/orekit/utils/units/Unit;"));
            METRE = new Unit(env->getStaticObjectField(cls, "METRE", "Lorg/orekit/utils/units/Unit;"));
            MINUTE = new Unit(env->getStaticObjectField(cls, "MINUTE", "Lorg/orekit/utils/units/Unit;"));
            NEWTON = new Unit(env->getStaticObjectField(cls, "NEWTON", "Lorg/orekit/utils/units/Unit;"));
            NONE = new Unit(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/utils/units/Unit;"));
            OHM = new Unit(env->getStaticObjectField(cls, "OHM", "Lorg/orekit/utils/units/Unit;"));
            ONE = new Unit(env->getStaticObjectField(cls, "ONE", "Lorg/orekit/utils/units/Unit;"));
            PASCAL$ = new Unit(env->getStaticObjectField(cls, "PASCAL", "Lorg/orekit/utils/units/Unit;"));
            PERCENT$ = new Unit(env->getStaticObjectField(cls, "PERCENT", "Lorg/orekit/utils/units/Unit;"));
            RADIAN = new Unit(env->getStaticObjectField(cls, "RADIAN", "Lorg/orekit/utils/units/Unit;"));
            REVOLUTION = new Unit(env->getStaticObjectField(cls, "REVOLUTION", "Lorg/orekit/utils/units/Unit;"));
            SECOND = new Unit(env->getStaticObjectField(cls, "SECOND", "Lorg/orekit/utils/units/Unit;"));
            SOLAR_FLUX_UNIT = new Unit(env->getStaticObjectField(cls, "SOLAR_FLUX_UNIT", "Lorg/orekit/utils/units/Unit;"));
            TESLA = new Unit(env->getStaticObjectField(cls, "TESLA", "Lorg/orekit/utils/units/Unit;"));
            TOTAL_ELECTRON_CONTENT_UNIT = new Unit(env->getStaticObjectField(cls, "TOTAL_ELECTRON_CONTENT_UNIT", "Lorg/orekit/utils/units/Unit;"));
            VOLT = new Unit(env->getStaticObjectField(cls, "VOLT", "Lorg/orekit/utils/units/Unit;"));
            WATT = new Unit(env->getStaticObjectField(cls, "WATT", "Lorg/orekit/utils/units/Unit;"));
            YEAR = new Unit(env->getStaticObjectField(cls, "YEAR", "Lorg/orekit/utils/units/Unit;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Unit::Unit(const ::java::lang::String & a0, jdouble a1, const ::org::hipparchus::fraction::Fraction & a2, const ::org::hipparchus::fraction::Fraction & a3, const ::org::hipparchus::fraction::Fraction & a4, const ::org::hipparchus::fraction::Fraction & a5, const ::org::hipparchus::fraction::Fraction & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3f21e2df8fcb2b32, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        Unit Unit::alias(const ::java::lang::String & a0) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_alias_d901bfc45b4f4fe6], a0.this$));
        }

        Unit Unit::divide(const ::java::lang::String & a0, const Unit & a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_divide_a71cf563e58a7ac6], a0.this$, a1.this$));
        }

        void Unit::ensureCompatible(const ::java::lang::String & a0, const ::java::util::List & a1, jboolean a2, const ::java::util::List & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_ensureCompatible_183e875889e6ba2f], a0.this$, a1.this$, a2, a3.this$);
        }

        jboolean Unit::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        jdouble Unit::fromSI(const ::java::lang::Double & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_fromSI_53da1ceb0da32c64], a0.this$);
        }

        jdouble Unit::fromSI(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_fromSI_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::fraction::Fraction Unit::getAngle() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getAngle_7ab72bcbb3909669]));
        }

        ::org::hipparchus::fraction::Fraction Unit::getCurrent() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getCurrent_7ab72bcbb3909669]));
        }

        ::org::hipparchus::fraction::Fraction Unit::getLength() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getLength_7ab72bcbb3909669]));
        }

        ::org::hipparchus::fraction::Fraction Unit::getMass() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getMass_7ab72bcbb3909669]));
        }

        ::java::lang::String Unit::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
        }

        jdouble Unit::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_b74f83833fdad017]);
        }

        ::org::hipparchus::fraction::Fraction Unit::getTime() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getTime_7ab72bcbb3909669]));
        }

        jint Unit::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        Unit Unit::multiply(const ::java::lang::String & a0, const Unit & a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_multiply_a71cf563e58a7ac6], a0.this$, a1.this$));
        }

        Unit Unit::parse(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Unit(env->callStaticObjectMethod(cls, mids$[mid_parse_d901bfc45b4f4fe6], a0.this$));
        }

        Unit Unit::power(const ::java::lang::String & a0, const ::org::hipparchus::fraction::Fraction & a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_power_024c7df38ac4c192], a0.this$, a1.this$));
        }

        jboolean Unit::sameDimension(const Unit & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_sameDimension_c4dae8f6c826c849], a0.this$);
        }

        Unit Unit::sameDimensionSI() const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_sameDimensionSI_6466188dbb1eea22]));
        }

        Unit Unit::scale(const ::java::lang::String & a0, jdouble a1) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_scale_ccd54d8c74d5128b], a0.this$, a1));
        }

        Unit Unit::sqrt(const ::java::lang::String & a0) const
        {
          return Unit(env->callObjectMethod(this$, mids$[mid_sqrt_d901bfc45b4f4fe6], a0.this$));
        }

        jdouble Unit::toSI(const ::java::lang::Double & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_toSI_53da1ceb0da32c64], a0.this$);
        }

        jdouble Unit::toSI(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_toSI_04fd0666b613d2ab], a0);
        }

        ::java::lang::String Unit::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_Unit_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Unit_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Unit_init_(t_Unit *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Unit_alias(t_Unit *self, PyObject *arg);
        static PyObject *t_Unit_divide(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_ensureCompatible(PyTypeObject *type, PyObject *args);
        static PyObject *t_Unit_equals(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_fromSI(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_getAngle(t_Unit *self);
        static PyObject *t_Unit_getCurrent(t_Unit *self);
        static PyObject *t_Unit_getLength(t_Unit *self);
        static PyObject *t_Unit_getMass(t_Unit *self);
        static PyObject *t_Unit_getName(t_Unit *self);
        static PyObject *t_Unit_getScale(t_Unit *self);
        static PyObject *t_Unit_getTime(t_Unit *self);
        static PyObject *t_Unit_hashCode(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_multiply(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_parse(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Unit_power(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_sameDimension(t_Unit *self, PyObject *arg);
        static PyObject *t_Unit_sameDimensionSI(t_Unit *self);
        static PyObject *t_Unit_scale(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_sqrt(t_Unit *self, PyObject *arg);
        static PyObject *t_Unit_toSI(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_toString(t_Unit *self, PyObject *args);
        static PyObject *t_Unit_get__angle(t_Unit *self, void *data);
        static PyObject *t_Unit_get__current(t_Unit *self, void *data);
        static PyObject *t_Unit_get__length(t_Unit *self, void *data);
        static PyObject *t_Unit_get__mass(t_Unit *self, void *data);
        static PyObject *t_Unit_get__name(t_Unit *self, void *data);
        static PyObject *t_Unit_get__time(t_Unit *self, void *data);
        static PyGetSetDef t_Unit__fields_[] = {
          DECLARE_GET_FIELD(t_Unit, angle),
          DECLARE_GET_FIELD(t_Unit, current),
          DECLARE_GET_FIELD(t_Unit, length),
          DECLARE_GET_FIELD(t_Unit, mass),
          DECLARE_GET_FIELD(t_Unit, name),
          DECLARE_GET_FIELD(t_Unit, time),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Unit__methods_[] = {
          DECLARE_METHOD(t_Unit, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Unit, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Unit, alias, METH_O),
          DECLARE_METHOD(t_Unit, divide, METH_VARARGS),
          DECLARE_METHOD(t_Unit, ensureCompatible, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Unit, equals, METH_VARARGS),
          DECLARE_METHOD(t_Unit, fromSI, METH_VARARGS),
          DECLARE_METHOD(t_Unit, getAngle, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getCurrent, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getLength, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getMass, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getName, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getScale, METH_NOARGS),
          DECLARE_METHOD(t_Unit, getTime, METH_NOARGS),
          DECLARE_METHOD(t_Unit, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_Unit, multiply, METH_VARARGS),
          DECLARE_METHOD(t_Unit, parse, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Unit, power, METH_VARARGS),
          DECLARE_METHOD(t_Unit, sameDimension, METH_O),
          DECLARE_METHOD(t_Unit, sameDimensionSI, METH_NOARGS),
          DECLARE_METHOD(t_Unit, scale, METH_VARARGS),
          DECLARE_METHOD(t_Unit, sqrt, METH_O),
          DECLARE_METHOD(t_Unit, toSI, METH_VARARGS),
          DECLARE_METHOD(t_Unit, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Unit)[] = {
          { Py_tp_methods, t_Unit__methods_ },
          { Py_tp_init, (void *) t_Unit_init_ },
          { Py_tp_getset, t_Unit__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Unit)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Unit, t_Unit, Unit);

        void t_Unit::install(PyObject *module)
        {
          installType(&PY_TYPE(Unit), &PY_TYPE_DEF(Unit), module, "Unit", 0);
        }

        void t_Unit::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "class_", make_descriptor(Unit::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "wrapfn_", make_descriptor(t_Unit::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "boxfn_", make_descriptor(boxObject));
          env->getClass(Unit::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "AMPERE", make_descriptor(t_Unit::wrap_Object(*Unit::AMPERE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "ARC_MINUTE", make_descriptor(t_Unit::wrap_Object(*Unit::ARC_MINUTE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "ARC_SECOND", make_descriptor(t_Unit::wrap_Object(*Unit::ARC_SECOND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "BAR", make_descriptor(t_Unit::wrap_Object(*Unit::BAR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "COULOMB", make_descriptor(t_Unit::wrap_Object(*Unit::COULOMB)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "DAY", make_descriptor(t_Unit::wrap_Object(*Unit::DAY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "DEGREE", make_descriptor(t_Unit::wrap_Object(*Unit::DEGREE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "EARTH_RADII", make_descriptor(t_Unit::wrap_Object(*Unit::EARTH_RADII)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "GRAM", make_descriptor(t_Unit::wrap_Object(*Unit::GRAM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "HERTZ", make_descriptor(t_Unit::wrap_Object(*Unit::HERTZ)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "HOUR", make_descriptor(t_Unit::wrap_Object(*Unit::HOUR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "JOULE", make_descriptor(t_Unit::wrap_Object(*Unit::JOULE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "KILOGRAM", make_descriptor(t_Unit::wrap_Object(*Unit::KILOGRAM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "KILOMETRE", make_descriptor(t_Unit::wrap_Object(*Unit::KILOMETRE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "METRE", make_descriptor(t_Unit::wrap_Object(*Unit::METRE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "MINUTE", make_descriptor(t_Unit::wrap_Object(*Unit::MINUTE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "NEWTON", make_descriptor(t_Unit::wrap_Object(*Unit::NEWTON)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "NONE", make_descriptor(t_Unit::wrap_Object(*Unit::NONE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "OHM", make_descriptor(t_Unit::wrap_Object(*Unit::OHM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "ONE", make_descriptor(t_Unit::wrap_Object(*Unit::ONE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "PASCAL", make_descriptor(t_Unit::wrap_Object(*Unit::PASCAL$)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "PERCENT", make_descriptor(t_Unit::wrap_Object(*Unit::PERCENT$)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "RADIAN", make_descriptor(t_Unit::wrap_Object(*Unit::RADIAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "REVOLUTION", make_descriptor(t_Unit::wrap_Object(*Unit::REVOLUTION)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "SECOND", make_descriptor(t_Unit::wrap_Object(*Unit::SECOND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "SOLAR_FLUX_UNIT", make_descriptor(t_Unit::wrap_Object(*Unit::SOLAR_FLUX_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "TESLA", make_descriptor(t_Unit::wrap_Object(*Unit::TESLA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "TOTAL_ELECTRON_CONTENT_UNIT", make_descriptor(t_Unit::wrap_Object(*Unit::TOTAL_ELECTRON_CONTENT_UNIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "VOLT", make_descriptor(t_Unit::wrap_Object(*Unit::VOLT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "WATT", make_descriptor(t_Unit::wrap_Object(*Unit::WATT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Unit), "YEAR", make_descriptor(t_Unit::wrap_Object(*Unit::YEAR)));
        }

        static PyObject *t_Unit_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Unit::initializeClass, 1)))
            return NULL;
          return t_Unit::wrap_Object(Unit(((t_Unit *) arg)->object.this$));
        }
        static PyObject *t_Unit_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Unit::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Unit_init_(t_Unit *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::fraction::Fraction a2((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a3((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a4((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a5((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a6((jobject) NULL);
          Unit object((jobject) NULL);

          if (!parseArgs(args, "sDkkkkk", ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, ::org::hipparchus::fraction::Fraction::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = Unit(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Unit_alias(t_Unit *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.alias(a0));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "alias", arg);
          return NULL;
        }

        static PyObject *t_Unit_divide(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit a1((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sk", Unit::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.divide(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_Unit_ensureCompatible(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean a2;
          ::java::util::List a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "sKZK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::org::orekit::utils::units::Unit::ensureCompatible(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "ensureCompatible", args);
          return NULL;
        }

        static PyObject *t_Unit_equals(t_Unit *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(Unit), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_Unit_fromSI(t_Unit *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::Double a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "O", ::java::lang::PY_TYPE(Double), &a0))
              {
                OBJ_CALL(result = self->object.fromSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.fromSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "fromSI", args);
          return NULL;
        }

        static PyObject *t_Unit_getAngle(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getAngle());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getCurrent(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getLength(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getLength());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getMass(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getMass());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_getName(t_Unit *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Unit_getScale(t_Unit *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Unit_getTime(t_Unit *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getTime());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_Unit_hashCode(t_Unit *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(Unit), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_Unit_multiply(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit a1((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sk", Unit::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.multiply(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_Unit_parse(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::utils::units::Unit::parse(a0));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", arg);
          return NULL;
        }

        static PyObject *t_Unit_power(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::hipparchus::fraction::Fraction a1((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::hipparchus::fraction::Fraction::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.power(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "power", args);
          return NULL;
        }

        static PyObject *t_Unit_sameDimension(t_Unit *self, PyObject *arg)
        {
          Unit a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", Unit::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.sameDimension(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sameDimension", arg);
          return NULL;
        }

        static PyObject *t_Unit_sameDimensionSI(t_Unit *self)
        {
          Unit result((jobject) NULL);
          OBJ_CALL(result = self->object.sameDimensionSI());
          return t_Unit::wrap_Object(result);
        }

        static PyObject *t_Unit_scale(t_Unit *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          Unit result((jobject) NULL);

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.scale(a0, a1));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scale", args);
          return NULL;
        }

        static PyObject *t_Unit_sqrt(t_Unit *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.sqrt(a0));
            return t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sqrt", arg);
          return NULL;
        }

        static PyObject *t_Unit_toSI(t_Unit *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::Double a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "O", ::java::lang::PY_TYPE(Double), &a0))
              {
                OBJ_CALL(result = self->object.toSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.toSI(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "toSI", args);
          return NULL;
        }

        static PyObject *t_Unit_toString(t_Unit *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(Unit), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_Unit_get__angle(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getAngle());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__current(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__length(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getLength());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__mass(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getMass());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_Unit_get__name(t_Unit *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_Unit_get__time(t_Unit *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getTime());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/PythonRadiationSensitive.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *PythonRadiationSensitive::class$ = NULL;
        jmethodID *PythonRadiationSensitive::mids$ = NULL;
        bool PythonRadiationSensitive::live$ = false;

        jclass PythonRadiationSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/PythonRadiationSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getRadiationParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_radiationPressureAcceleration_a230d7bdb943f733] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_radiationPressureAcceleration_a99eceb06c3864f8] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonRadiationSensitive::PythonRadiationSensitive() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonRadiationSensitive::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonRadiationSensitive::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonRadiationSensitive::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace radiation {
        static PyObject *t_PythonRadiationSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonRadiationSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonRadiationSensitive_init_(t_PythonRadiationSensitive *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonRadiationSensitive_finalize(t_PythonRadiationSensitive *self);
        static PyObject *t_PythonRadiationSensitive_pythonExtension(t_PythonRadiationSensitive *self, PyObject *args);
        static jobject JNICALL t_PythonRadiationSensitive_getRadiationParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonRadiationSensitive_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonRadiationSensitive_get__self(t_PythonRadiationSensitive *self, void *data);
        static PyGetSetDef t_PythonRadiationSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_PythonRadiationSensitive, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonRadiationSensitive__methods_[] = {
          DECLARE_METHOD(t_PythonRadiationSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonRadiationSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonRadiationSensitive, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonRadiationSensitive, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonRadiationSensitive)[] = {
          { Py_tp_methods, t_PythonRadiationSensitive__methods_ },
          { Py_tp_init, (void *) t_PythonRadiationSensitive_init_ },
          { Py_tp_getset, t_PythonRadiationSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonRadiationSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonRadiationSensitive, t_PythonRadiationSensitive, PythonRadiationSensitive);

        void t_PythonRadiationSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonRadiationSensitive), &PY_TYPE_DEF(PythonRadiationSensitive), module, "PythonRadiationSensitive", 1);
        }

        void t_PythonRadiationSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRadiationSensitive), "class_", make_descriptor(PythonRadiationSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRadiationSensitive), "wrapfn_", make_descriptor(t_PythonRadiationSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRadiationSensitive), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonRadiationSensitive::initializeClass);
          JNINativeMethod methods[] = {
            { "getRadiationParametersDrivers", "()Ljava/util/List;", (void *) t_PythonRadiationSensitive_getRadiationParametersDrivers0 },
            { "pythonDecRef", "()V", (void *) t_PythonRadiationSensitive_pythonDecRef1 },
            { "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonRadiationSensitive_radiationPressureAcceleration2 },
            { "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonRadiationSensitive_radiationPressureAcceleration3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonRadiationSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonRadiationSensitive::initializeClass, 1)))
            return NULL;
          return t_PythonRadiationSensitive::wrap_Object(PythonRadiationSensitive(((t_PythonRadiationSensitive *) arg)->object.this$));
        }
        static PyObject *t_PythonRadiationSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonRadiationSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonRadiationSensitive_init_(t_PythonRadiationSensitive *self, PyObject *args, PyObject *kwds)
        {
          PythonRadiationSensitive object((jobject) NULL);

          INT_CALL(object = PythonRadiationSensitive());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonRadiationSensitive_finalize(t_PythonRadiationSensitive *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonRadiationSensitive_pythonExtension(t_PythonRadiationSensitive *self, PyObject *args)
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

        static jobject JNICALL t_PythonRadiationSensitive_getRadiationParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getRadiationParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getRadiationParametersDrivers", result);
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

        static void JNICALL t_PythonRadiationSensitive_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "radiationPressureAcceleration", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("radiationPressureAcceleration", result);
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

        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "radiationPressureAcceleration", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("radiationPressureAcceleration", result);
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

        static PyObject *t_PythonRadiationSensitive_get__self(t_PythonRadiationSensitive *self, void *data)
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
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBodies::class$ = NULL;
      jmethodID *CelestialBodies::mids$ = NULL;
      bool CelestialBodies::live$ = false;

      jclass CelestialBodies::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBodies");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBody_7eb4325e211386e9] = env->getMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarth_5df52e80cbb5eb85] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_5df52e80cbb5eb85] = env->getMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_5df52e80cbb5eb85] = env->getMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_5df52e80cbb5eb85] = env->getMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_5df52e80cbb5eb85] = env->getMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_5df52e80cbb5eb85] = env->getMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_5df52e80cbb5eb85] = env->getMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_5df52e80cbb5eb85] = env->getMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_5df52e80cbb5eb85] = env->getMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_5df52e80cbb5eb85] = env->getMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_5df52e80cbb5eb85] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_5df52e80cbb5eb85] = env->getMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_5df52e80cbb5eb85] = env->getMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_7eb4325e211386e9], a0.this$));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getEarth() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarth_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getEarthMoonBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarthMoonBarycenter_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getJupiter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getJupiter_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getMars() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMars_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getMercury() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMercury_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getMoon() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMoon_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getNeptune() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getNeptune_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getPluto() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getPluto_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getSaturn() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSaturn_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getSolarSystemBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSolarSystemBarycenter_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getSun() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSun_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getUranus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getUranus_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getVenus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getVenus_5df52e80cbb5eb85]));
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
      static PyObject *t_CelestialBodies_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodies_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodies_getBody(t_CelestialBodies *self, PyObject *arg);
      static PyObject *t_CelestialBodies_getEarth(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getEarthMoonBarycenter(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getJupiter(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getMars(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getMercury(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getMoon(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getNeptune(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getPluto(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getSaturn(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getSolarSystemBarycenter(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getSun(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getUranus(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getVenus(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_get__earth(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__earthMoonBarycenter(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__jupiter(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__mars(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__mercury(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__moon(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__neptune(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__pluto(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__saturn(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__solarSystemBarycenter(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__sun(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__uranus(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__venus(t_CelestialBodies *self, void *data);
      static PyGetSetDef t_CelestialBodies__fields_[] = {
        DECLARE_GET_FIELD(t_CelestialBodies, earth),
        DECLARE_GET_FIELD(t_CelestialBodies, earthMoonBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodies, jupiter),
        DECLARE_GET_FIELD(t_CelestialBodies, mars),
        DECLARE_GET_FIELD(t_CelestialBodies, mercury),
        DECLARE_GET_FIELD(t_CelestialBodies, moon),
        DECLARE_GET_FIELD(t_CelestialBodies, neptune),
        DECLARE_GET_FIELD(t_CelestialBodies, pluto),
        DECLARE_GET_FIELD(t_CelestialBodies, saturn),
        DECLARE_GET_FIELD(t_CelestialBodies, solarSystemBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodies, sun),
        DECLARE_GET_FIELD(t_CelestialBodies, uranus),
        DECLARE_GET_FIELD(t_CelestialBodies, venus),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CelestialBodies__methods_[] = {
        DECLARE_METHOD(t_CelestialBodies, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodies, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodies, getBody, METH_O),
        DECLARE_METHOD(t_CelestialBodies, getEarth, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getEarthMoonBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getJupiter, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getMars, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getMercury, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getMoon, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getNeptune, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getPluto, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getSaturn, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getSolarSystemBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getSun, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getUranus, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getVenus, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodies)[] = {
        { Py_tp_methods, t_CelestialBodies__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CelestialBodies__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodies)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodies, t_CelestialBodies, CelestialBodies);

      void t_CelestialBodies::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodies), &PY_TYPE_DEF(CelestialBodies), module, "CelestialBodies", 0);
      }

      void t_CelestialBodies::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodies), "class_", make_descriptor(CelestialBodies::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodies), "wrapfn_", make_descriptor(t_CelestialBodies::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodies), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBodies_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodies::initializeClass, 1)))
          return NULL;
        return t_CelestialBodies::wrap_Object(CelestialBodies(((t_CelestialBodies *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodies_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodies::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBodies_getBody(t_CelestialBodies *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getBody", arg);
        return NULL;
      }

      static PyObject *t_CelestialBodies_getEarth(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getEarthMoonBarycenter(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getJupiter(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getMars(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getMercury(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getMoon(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getNeptune(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getPluto(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getSaturn(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getSolarSystemBarycenter(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getSun(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getUranus(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getVenus(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_get__earth(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__earthMoonBarycenter(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__jupiter(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__mars(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__mercury(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__moon(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__neptune(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__pluto(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__saturn(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__solarSystemBarycenter(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__sun(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__uranus(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__venus(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/NeQuickModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *NeQuickModel::class$ = NULL;
          jmethodID *NeQuickModel::mids$ = NULL;
          bool NeQuickModel::live$ = false;

          jclass NeQuickModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/NeQuickModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
              mids$[mid_init$_ab209154e092923e] = env->getMethodID(cls, "<init>", "([DLorg/orekit/time/TimeScale;)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_5e4bace87c721642] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_0c51f26f37c66719] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_stec_169e6417d6979e44] = env->getMethodID(cls, "stec", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;)D");
              mids$[mid_stec_261047037e884cea] = env->getMethodID(cls, "stec", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NeQuickModel::NeQuickModel(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

          NeQuickModel::NeQuickModel(const JArray< jdouble > & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab209154e092923e, a0.this$, a1.this$)) {}

          ::java::util::List NeQuickModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          jdouble NeQuickModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_5e4bace87c721642], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement NeQuickModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_0c51f26f37c66719], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble NeQuickModel::stec(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::GeodeticPoint & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_stec_169e6417d6979e44], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement NeQuickModel::stec(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::bodies::FieldGeodeticPoint & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_stec_261047037e884cea], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_NeQuickModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NeQuickModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NeQuickModel_init_(t_NeQuickModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NeQuickModel_getParametersDrivers(t_NeQuickModel *self);
          static PyObject *t_NeQuickModel_pathDelay(t_NeQuickModel *self, PyObject *args);
          static PyObject *t_NeQuickModel_stec(t_NeQuickModel *self, PyObject *args);
          static PyObject *t_NeQuickModel_get__parametersDrivers(t_NeQuickModel *self, void *data);
          static PyGetSetDef t_NeQuickModel__fields_[] = {
            DECLARE_GET_FIELD(t_NeQuickModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NeQuickModel__methods_[] = {
            DECLARE_METHOD(t_NeQuickModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NeQuickModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NeQuickModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_NeQuickModel, pathDelay, METH_VARARGS),
            DECLARE_METHOD(t_NeQuickModel, stec, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NeQuickModel)[] = {
            { Py_tp_methods, t_NeQuickModel__methods_ },
            { Py_tp_init, (void *) t_NeQuickModel_init_ },
            { Py_tp_getset, t_NeQuickModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NeQuickModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NeQuickModel, t_NeQuickModel, NeQuickModel);

          void t_NeQuickModel::install(PyObject *module)
          {
            installType(&PY_TYPE(NeQuickModel), &PY_TYPE_DEF(NeQuickModel), module, "NeQuickModel", 0);
          }

          void t_NeQuickModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NeQuickModel), "class_", make_descriptor(NeQuickModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NeQuickModel), "wrapfn_", make_descriptor(t_NeQuickModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NeQuickModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NeQuickModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NeQuickModel::initializeClass, 1)))
              return NULL;
            return t_NeQuickModel::wrap_Object(NeQuickModel(((t_NeQuickModel *) arg)->object.this$));
          }
          static PyObject *t_NeQuickModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NeQuickModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NeQuickModel_init_(t_NeQuickModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                NeQuickModel object((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  INT_CALL(object = NeQuickModel(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::orekit::time::TimeScale a1((jobject) NULL);
                NeQuickModel object((jobject) NULL);

                if (!parseArgs(args, "[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = NeQuickModel(a0, a1));
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

          static PyObject *t_NeQuickModel_getParametersDrivers(t_NeQuickModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_NeQuickModel_pathDelay(t_NeQuickModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_NeQuickModel_stec(t_NeQuickModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::bodies::FieldGeodeticPoint a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
                {
                  OBJ_CALL(result = self->object.stec(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::bodies::GeodeticPoint a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.stec(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "stec", args);
            return NULL;
          }

          static PyObject *t_NeQuickModel_get__parametersDrivers(t_NeQuickModel *self, void *data)
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
#include "org/hipparchus/linear/AbstractRealMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *AbstractRealMatrix::class$ = NULL;
      jmethodID *AbstractRealMatrix::mids$ = NULL;
      bool AbstractRealMatrix::live$ = false;

      jclass AbstractRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/AbstractRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_be124f4006dc9f69] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_addToEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_f77d745f2128c391] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_copySubMatrix_c11e3fd762bd0fee] = env->getMethodID(cls, "copySubMatrix", "([I[I[[D)V");
          mids$[mid_copySubMatrix_ac682e6a44042af2] = env->getMethodID(cls, "copySubMatrix", "(IIII[[D)V");
          mids$[mid_createMatrix_28a444e31666746c] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getColumn_bb2a44a76ad252f7] = env->getMethodID(cls, "getColumn", "(I)[D");
          mids$[mid_getColumnDimension_55546ef6a647f39b] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_2a3e0c79a1b41fe4] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnVector_b50dc3915c68ddbc] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getData_3b7b373db8e7887f] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getEntry_cad98089d00f8a5b] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getFrobeniusNorm_b74f83833fdad017] = env->getMethodID(cls, "getFrobeniusNorm", "()D");
          mids$[mid_getRow_bb2a44a76ad252f7] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowDimension_55546ef6a647f39b] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_2a3e0c79a1b41fe4] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRowVector_b50dc3915c68ddbc] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSubMatrix_c330dd232db3f25c] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSubMatrix_f6333def4d085867] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getTrace_b74f83833fdad017] = env->getMethodID(cls, "getTrace", "()D");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isSquare_9ab94ac1dc23b105] = env->getMethodID(cls, "isSquare", "()Z");
          mids$[mid_multiply_be124f4006dc9f69] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_operate_14dee4cb8cc3e959] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_operate_d5f1d017fd25113b] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_power_2a3e0c79a1b41fe4] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_preMultiply_14dee4cb8cc3e959] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_preMultiply_d5f1d017fd25113b] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_preMultiply_be124f4006dc9f69] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarAdd_f5dd9d6021dc9dae] = env->getMethodID(cls, "scalarAdd", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarMultiply_f5dd9d6021dc9dae] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setColumn_75061e5f5bbace93] = env->getMethodID(cls, "setColumn", "(I[D)V");
          mids$[mid_setColumnMatrix_74dda270996520c8] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setColumnVector_9fe1e9c5bee9d07c] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_75061e5f5bbace93] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setRowMatrix_74dda270996520c8] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setRowVector_9fe1e9c5bee9d07c] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setSubMatrix_f12104c26dcf5b23] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_subtract_be124f4006dc9f69] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_transpose_f77d745f2128c391] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_walkInColumnOrder_e9eacc024b91638e] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInColumnOrder_8c777cbbebb3f320] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInColumnOrder_7a8f404d3cc13545] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInColumnOrder_0efcec2037689a79] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_e9eacc024b91638e] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_8c777cbbebb3f320] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_7a8f404d3cc13545] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_0efcec2037689a79] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_e9eacc024b91638e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_8c777cbbebb3f320] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_7a8f404d3cc13545] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_0efcec2037689a79] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::add(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_add_be124f4006dc9f69], a0.this$));
      }

      void AbstractRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::copy() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_f77d745f2128c391]));
      }

      void AbstractRealMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< jdouble > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_c11e3fd762bd0fee], a0.this$, a1.this$, a2.this$);
      }

      void AbstractRealMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< jdouble > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_ac682e6a44042af2], a0, a1, a2, a3, a4.this$);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_28a444e31666746c], a0, a1));
      }

      jboolean AbstractRealMatrix::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      JArray< jdouble > AbstractRealMatrix::getColumn(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getColumn_bb2a44a76ad252f7], a0));
      }

      jint AbstractRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getColumnMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_2a3e0c79a1b41fe4], a0));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_b50dc3915c68ddbc], a0));
      }

      JArray< JArray< jdouble > > AbstractRealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_3b7b373db8e7887f]));
      }

      jdouble AbstractRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_cad98089d00f8a5b], a0, a1);
      }

      jdouble AbstractRealMatrix::getFrobeniusNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFrobeniusNorm_b74f83833fdad017]);
      }

      JArray< jdouble > AbstractRealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_bb2a44a76ad252f7], a0));
      }

      jint AbstractRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getRowMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_2a3e0c79a1b41fe4], a0));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRowVector_b50dc3915c68ddbc], a0));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_c330dd232db3f25c], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_f6333def4d085867], a0, a1, a2, a3));
      }

      jdouble AbstractRealMatrix::getTrace() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrace_b74f83833fdad017]);
      }

      jint AbstractRealMatrix::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      jboolean AbstractRealMatrix::isSquare() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSquare_9ab94ac1dc23b105]);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_be124f4006dc9f69], a0.this$));
      }

      void AbstractRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      JArray< jdouble > AbstractRealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_14dee4cb8cc3e959], a0.this$));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_d5f1d017fd25113b], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::power(jint a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_power_2a3e0c79a1b41fe4], a0));
      }

      JArray< jdouble > AbstractRealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_14dee4cb8cc3e959], a0.this$));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::preMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_preMultiply_d5f1d017fd25113b], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::preMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_be124f4006dc9f69], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::scalarAdd(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_f5dd9d6021dc9dae], a0));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::scalarMultiply(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_f5dd9d6021dc9dae], a0));
      }

      void AbstractRealMatrix::setColumn(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_75061e5f5bbace93], a0, a1.this$);
      }

      void AbstractRealMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_74dda270996520c8], a0, a1.this$);
      }

      void AbstractRealMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_9fe1e9c5bee9d07c], a0, a1.this$);
      }

      void AbstractRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      void AbstractRealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_75061e5f5bbace93], a0, a1.this$);
      }

      void AbstractRealMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_74dda270996520c8], a0, a1.this$);
      }

      void AbstractRealMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_9fe1e9c5bee9d07c], a0, a1.this$);
      }

      void AbstractRealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_f12104c26dcf5b23], a0.this$, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::subtract(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_be124f4006dc9f69], a0.this$));
      }

      ::java::lang::String AbstractRealMatrix::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::transpose() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transpose_f77d745f2128c391]));
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_e9eacc024b91638e], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_8c777cbbebb3f320], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_7a8f404d3cc13545], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_0efcec2037689a79], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_e9eacc024b91638e], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_8c777cbbebb3f320], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_7a8f404d3cc13545], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_0efcec2037689a79], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_e9eacc024b91638e], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_8c777cbbebb3f320], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_7a8f404d3cc13545], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_0efcec2037689a79], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_AbstractRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_add(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_addToEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_copy(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_copySubMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_createMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_equals(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_getColumn(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getColumnDimension(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getColumnMatrix(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getColumnVector(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getData(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_getFrobeniusNorm(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getRow(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getRowDimension(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getRowMatrix(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getRowVector(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getSubMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_getTrace(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_hashCode(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_isSquare(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_multiply(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_multiplyEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_operate(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_power(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_preMultiply(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_scalarAdd(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_scalarMultiply(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_setColumn(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setColumnMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setColumnVector(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setRow(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setRowMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setRowVector(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setSubMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_subtract(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_toString(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_transpose(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_walkInColumnOrder(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_walkInOptimizedOrder(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_walkInRowOrder(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_get__columnDimension(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__data(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__frobeniusNorm(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__rowDimension(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__square(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__trace(t_AbstractRealMatrix *self, void *data);
      static PyGetSetDef t_AbstractRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, data),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, frobeniusNorm),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, rowDimension),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, square),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, trace),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractRealMatrix__methods_[] = {
        DECLARE_METHOD(t_AbstractRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractRealMatrix, add, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, equals, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getFrobeniusNorm, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getRow, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, isSquare, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, multiply, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, power, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, subtract, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, toString, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractRealMatrix)[] = {
        { Py_tp_methods, t_AbstractRealMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractRealMatrix)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractRealMatrix, t_AbstractRealMatrix, AbstractRealMatrix);

      void t_AbstractRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractRealMatrix), &PY_TYPE_DEF(AbstractRealMatrix), module, "AbstractRealMatrix", 0);
      }

      void t_AbstractRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealMatrix), "class_", make_descriptor(AbstractRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealMatrix), "wrapfn_", make_descriptor(t_AbstractRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractRealMatrix::initializeClass, 1)))
          return NULL;
        return t_AbstractRealMatrix::wrap_Object(AbstractRealMatrix(((t_AbstractRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_AbstractRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractRealMatrix_add(t_AbstractRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_addToEntry(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_copy(t_AbstractRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_AbstractRealMatrix_copySubMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "[I[I[[D", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< jdouble > > a4((jobject) NULL);

            if (!parseArgs(args, "IIII[[D", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_createMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_equals(t_AbstractRealMatrix *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(AbstractRealMatrix), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_AbstractRealMatrix_getColumn(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getColumnDimension(t_AbstractRealMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractRealMatrix_getColumnMatrix(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getColumnVector(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getData(t_AbstractRealMatrix *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_AbstractRealMatrix_getEntry(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getFrobeniusNorm(t_AbstractRealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractRealMatrix_getRow(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getRowDimension(t_AbstractRealMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractRealMatrix_getRowMatrix(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getRowVector(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getSubMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getTrace(t_AbstractRealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrace());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractRealMatrix_hashCode(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(AbstractRealMatrix), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_AbstractRealMatrix_isSquare(t_AbstractRealMatrix *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSquare());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_AbstractRealMatrix_multiply(t_AbstractRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_multiplyEntry(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_operate(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_power(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_preMultiply(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_scalarAdd(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_scalarMultiply(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setColumn(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setColumnMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setColumnVector(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setEntry(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setRow(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setRowMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setRowVector(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setSubMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_subtract(t_AbstractRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_toString(t_AbstractRealMatrix *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(AbstractRealMatrix), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_AbstractRealMatrix_transpose(t_AbstractRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_AbstractRealMatrix_walkInColumnOrder(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
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
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
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
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_walkInOptimizedOrder(t_AbstractRealMatrix *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_walkInRowOrder(t_AbstractRealMatrix *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_get__columnDimension(t_AbstractRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractRealMatrix_get__data(t_AbstractRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_AbstractRealMatrix_get__frobeniusNorm(t_AbstractRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractRealMatrix_get__rowDimension(t_AbstractRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractRealMatrix_get__square(t_AbstractRealMatrix *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSquare());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_AbstractRealMatrix_get__trace(t_AbstractRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrace());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPFWriter.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "java/io/IOException.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "java/lang/Appendable.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPFWriter::class$ = NULL;
        jmethodID *CPFWriter::mids$ = NULL;
        bool CPFWriter::live$ = false;

        jclass CPFWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPFWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cebeba69e4eb8c33] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ilrs/CPFHeader;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_init$_fadbe4ef40d3e215] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ilrs/CPFHeader;Lorg/orekit/time/TimeScale;Z)V");
            mids$[mid_write_b257e3ad1002b2a9] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPFWriter::CPFWriter(const ::org::orekit::files::ilrs::CPFHeader & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cebeba69e4eb8c33, a0.this$, a1.this$)) {}

        CPFWriter::CPFWriter(const ::org::orekit::files::ilrs::CPFHeader & a0, const ::org::orekit::time::TimeScale & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fadbe4ef40d3e215, a0.this$, a1.this$, a2)) {}

        void CPFWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_b257e3ad1002b2a9], a0.this$, a1.this$);
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
        static PyObject *t_CPFWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPFWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPFWriter_init_(t_CPFWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPFWriter_write(t_CPFWriter *self, PyObject *args);

        static PyMethodDef t_CPFWriter__methods_[] = {
          DECLARE_METHOD(t_CPFWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPFWriter)[] = {
          { Py_tp_methods, t_CPFWriter__methods_ },
          { Py_tp_init, (void *) t_CPFWriter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPFWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPFWriter, t_CPFWriter, CPFWriter);

        void t_CPFWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(CPFWriter), &PY_TYPE_DEF(CPFWriter), module, "CPFWriter", 0);
        }

        void t_CPFWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFWriter), "class_", make_descriptor(CPFWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFWriter), "wrapfn_", make_descriptor(t_CPFWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPFWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPFWriter::initializeClass, 1)))
            return NULL;
          return t_CPFWriter::wrap_Object(CPFWriter(((t_CPFWriter *) arg)->object.this$));
        }
        static PyObject *t_CPFWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPFWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPFWriter_init_(t_CPFWriter *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::files::ilrs::CPFHeader a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              CPFWriter object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ilrs::CPFHeader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
              {
                INT_CALL(object = CPFWriter(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::files::ilrs::CPFHeader a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              jboolean a2;
              CPFWriter object((jobject) NULL);

              if (!parseArgs(args, "kkZ", ::org::orekit::files::ilrs::CPFHeader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CPFWriter(a0, a1, a2));
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

        static PyObject *t_CPFWriter_write(t_CPFWriter *self, PyObject *args)
        {
          ::java::lang::Appendable a0((jobject) NULL);
          ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
          {
            OBJ_CALL(self->object.write(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldAbstractPropagator.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldAbstractPropagator::class$ = NULL;
      jmethodID *FieldAbstractPropagator::mids$ = NULL;
      bool FieldAbstractPropagator::live$ = false;

      jclass FieldAbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldAbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_6f4fb3fe151ef989] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_getAdditionalStateProviders_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_fba6d56f8dbc98d0] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_0f94e41879ab7062] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_bf5be23258085f1c] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_294c5c99690f2356] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_70fecd201ca47d3b] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_resetInitialState_54d9efbf99822980] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_updateAdditionalStates_370b1acde6244b7e] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_initializePropagation_a1fa5dae97ea5ed2] = env->getMethodID(cls, "initializePropagation", "()V");
          mids$[mid_initializeAdditionalStates_382e93bb0508f0e4] = env->getMethodID(cls, "initializeAdditionalStates", "(Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_setStartDate_382e93bb0508f0e4] = env->getMethodID(cls, "setStartDate", "(Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_updateUnmanagedStates_370b1acde6244b7e] = env->getMethodID(cls, "updateUnmanagedStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getStartDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_stateChanged_54d9efbf99822980] = env->getMethodID(cls, "stateChanged", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldAbstractPropagator::addAdditionalStateProvider(const ::org::orekit::propagation::FieldAdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_6f4fb3fe151ef989], a0.this$);
      }

      ::java::util::List FieldAbstractPropagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_e62d3bb06d56d7e3]));
      }

      ::org::orekit::attitudes::AttitudeProvider FieldAbstractPropagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_331f12bb6017243b]));
      }

      ::org::hipparchus::Field FieldAbstractPropagator::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
      }

      ::org::orekit::frames::Frame FieldAbstractPropagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldAbstractPropagator::getInitialState() const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_fba6d56f8dbc98d0]));
      }

      JArray< ::java::lang::String > FieldAbstractPropagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_0f94e41879ab7062]));
      }

      ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer FieldAbstractPropagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_bf5be23258085f1c]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbstractPropagator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_294c5c99690f2356], a0.this$, a1.this$));
      }

      jboolean FieldAbstractPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75], a0.this$);
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldAbstractPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_70fecd201ca47d3b], a0.this$));
      }

      void FieldAbstractPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_54d9efbf99822980], a0.this$);
      }

      void FieldAbstractPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8e4d3ea100bc0095], a0.this$);
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
      static PyObject *t_FieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_of_(t_FieldAbstractPropagator *self, PyObject *args);
      static PyObject *t_FieldAbstractPropagator_addAdditionalStateProvider(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_getAdditionalStateProviders(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getAttitudeProvider(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getField(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getFrame(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getInitialState(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getManagedAdditionalStates(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getMultiplexer(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getPVCoordinates(t_FieldAbstractPropagator *self, PyObject *args);
      static PyObject *t_FieldAbstractPropagator_isAdditionalStateManaged(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_propagate(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_resetInitialState(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_setAttitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_get__additionalStateProviders(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__attitudeProvider(t_FieldAbstractPropagator *self, void *data);
      static int t_FieldAbstractPropagator_set__attitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg, void *data);
      static PyObject *t_FieldAbstractPropagator_get__field(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__frame(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__initialState(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__managedAdditionalStates(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__multiplexer(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__parameters_(t_FieldAbstractPropagator *self, void *data);
      static PyGetSetDef t_FieldAbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_FieldAbstractPropagator, attitudeProvider),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, field),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, frame),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, initialState),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, multiplexer),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_FieldAbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbstractPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, propagate, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, setAttitudeProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbstractPropagator)[] = {
        { Py_tp_methods, t_FieldAbstractPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldAbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbstractPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAbstractPropagator, t_FieldAbstractPropagator, FieldAbstractPropagator);
      PyObject *t_FieldAbstractPropagator::wrap_Object(const FieldAbstractPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbstractPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbstractPropagator *self = (t_FieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbstractPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbstractPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbstractPropagator *self = (t_FieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbstractPropagator), &PY_TYPE_DEF(FieldAbstractPropagator), module, "FieldAbstractPropagator", 0);
      }

      void t_FieldAbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractPropagator), "class_", make_descriptor(FieldAbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractPropagator), "wrapfn_", make_descriptor(t_FieldAbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_FieldAbstractPropagator::wrap_Object(FieldAbstractPropagator(((t_FieldAbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_FieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbstractPropagator_of_(t_FieldAbstractPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldAbstractPropagator_addAdditionalStateProvider(t_FieldAbstractPropagator *self, PyObject *arg)
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

      static PyObject *t_FieldAbstractPropagator_getAdditionalStateProviders(t_FieldAbstractPropagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldAbstractPropagator_getAttitudeProvider(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_FieldAbstractPropagator_getField(t_FieldAbstractPropagator *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbstractPropagator_getFrame(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldAbstractPropagator_getInitialState(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbstractPropagator_getManagedAdditionalStates(t_FieldAbstractPropagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_FieldAbstractPropagator_getMultiplexer(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbstractPropagator_getPVCoordinates(t_FieldAbstractPropagator *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_isAdditionalStateManaged(t_FieldAbstractPropagator *self, PyObject *arg)
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

      static PyObject *t_FieldAbstractPropagator_propagate(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.propagate(a0));
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", arg);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_resetInitialState(t_FieldAbstractPropagator *self, PyObject *arg)
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

      static PyObject *t_FieldAbstractPropagator_setAttitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg)
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
      static PyObject *t_FieldAbstractPropagator_get__parameters_(t_FieldAbstractPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbstractPropagator_get__additionalStateProviders(t_FieldAbstractPropagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__attitudeProvider(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_FieldAbstractPropagator_set__attitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg, void *data)
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

      static PyObject *t_FieldAbstractPropagator_get__field(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__frame(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__initialState(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__managedAdditionalStates(t_FieldAbstractPropagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_FieldAbstractPropagator_get__multiplexer(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/IterativeLegendreGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *IterativeLegendreGaussIntegrator::class$ = NULL;
        jmethodID *IterativeLegendreGaussIntegrator::mids$ = NULL;
        bool IterativeLegendreGaussIntegrator::live$ = false;

        jclass IterativeLegendreGaussIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/IterativeLegendreGaussIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cdd9dee35d124091] = env->getMethodID(cls, "<init>", "(IDD)V");
            mids$[mid_init$_a0df4b8e4ed3805e] = env->getMethodID(cls, "<init>", "(III)V");
            mids$[mid_init$_e7cf6a4a381d2431] = env->getMethodID(cls, "<init>", "(IDDII)V");
            mids$[mid_doIntegrate_b74f83833fdad017] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IterativeLegendreGaussIntegrator::IterativeLegendreGaussIntegrator(jint a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_cdd9dee35d124091, a0, a1, a2)) {}

        IterativeLegendreGaussIntegrator::IterativeLegendreGaussIntegrator(jint a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a0df4b8e4ed3805e, a0, a1, a2)) {}

        IterativeLegendreGaussIntegrator::IterativeLegendreGaussIntegrator(jint a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e7cf6a4a381d2431, a0, a1, a2, a3, a4)) {}
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
        static PyObject *t_IterativeLegendreGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IterativeLegendreGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IterativeLegendreGaussIntegrator_init_(t_IterativeLegendreGaussIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_IterativeLegendreGaussIntegrator__methods_[] = {
          DECLARE_METHOD(t_IterativeLegendreGaussIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IterativeLegendreGaussIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IterativeLegendreGaussIntegrator)[] = {
          { Py_tp_methods, t_IterativeLegendreGaussIntegrator__methods_ },
          { Py_tp_init, (void *) t_IterativeLegendreGaussIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IterativeLegendreGaussIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(IterativeLegendreGaussIntegrator, t_IterativeLegendreGaussIntegrator, IterativeLegendreGaussIntegrator);

        void t_IterativeLegendreGaussIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(IterativeLegendreGaussIntegrator), &PY_TYPE_DEF(IterativeLegendreGaussIntegrator), module, "IterativeLegendreGaussIntegrator", 0);
        }

        void t_IterativeLegendreGaussIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreGaussIntegrator), "class_", make_descriptor(IterativeLegendreGaussIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreGaussIntegrator), "wrapfn_", make_descriptor(t_IterativeLegendreGaussIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreGaussIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IterativeLegendreGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IterativeLegendreGaussIntegrator::initializeClass, 1)))
            return NULL;
          return t_IterativeLegendreGaussIntegrator::wrap_Object(IterativeLegendreGaussIntegrator(((t_IterativeLegendreGaussIntegrator *) arg)->object.this$));
        }
        static PyObject *t_IterativeLegendreGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IterativeLegendreGaussIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IterativeLegendreGaussIntegrator_init_(t_IterativeLegendreGaussIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              IterativeLegendreGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDD", &a0, &a1, &a2))
              {
                INT_CALL(object = IterativeLegendreGaussIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              jint a1;
              jint a2;
              IterativeLegendreGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                INT_CALL(object = IterativeLegendreGaussIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              IterativeLegendreGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDDII", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = IterativeLegendreGaussIntegrator(a0, a1, a2, a3, a4));
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
#include "org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldUnivariateVectorFunction::class$ = NULL;
      jmethodID *CalculusFieldUnivariateVectorFunction::mids$ = NULL;
      bool CalculusFieldUnivariateVectorFunction::live$ = false;

      jclass CalculusFieldUnivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_178e06dface5c0c9] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > CalculusFieldUnivariateVectorFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
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
      static PyObject *t_CalculusFieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_of_(t_CalculusFieldUnivariateVectorFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_value(t_CalculusFieldUnivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_get__parameters_(t_CalculusFieldUnivariateVectorFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldUnivariateVectorFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldUnivariateVectorFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldUnivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldUnivariateVectorFunction)[] = {
        { Py_tp_methods, t_CalculusFieldUnivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldUnivariateVectorFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldUnivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldUnivariateVectorFunction, t_CalculusFieldUnivariateVectorFunction, CalculusFieldUnivariateVectorFunction);
      PyObject *t_CalculusFieldUnivariateVectorFunction::wrap_Object(const CalculusFieldUnivariateVectorFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateVectorFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateVectorFunction *self = (t_CalculusFieldUnivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldUnivariateVectorFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateVectorFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateVectorFunction *self = (t_CalculusFieldUnivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldUnivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldUnivariateVectorFunction), &PY_TYPE_DEF(CalculusFieldUnivariateVectorFunction), module, "CalculusFieldUnivariateVectorFunction", 0);
      }

      void t_CalculusFieldUnivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateVectorFunction), "class_", make_descriptor(CalculusFieldUnivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateVectorFunction), "wrapfn_", make_descriptor(t_CalculusFieldUnivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldUnivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldUnivariateVectorFunction::wrap_Object(CalculusFieldUnivariateVectorFunction(((t_CalculusFieldUnivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldUnivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldUnivariateVectorFunction_of_(t_CalculusFieldUnivariateVectorFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldUnivariateVectorFunction_value(t_CalculusFieldUnivariateVectorFunction *self, PyObject *arg)
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
      static PyObject *t_CalculusFieldUnivariateVectorFunction_get__parameters_(t_CalculusFieldUnivariateVectorFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
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
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_a8b3ea4e60fa7cd7] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_8fa85a69d4d7e806] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_63bfdcc4b7a0536c] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_f03acfcd075cb2d5] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a8b3ea4e60fa7cd7, a0, a1.this$)) {}

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8fa85a69d4d7e806, a0, a1, a2.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter TimeStampedPVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_63bfdcc4b7a0536c]));
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
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getAODC_55546ef6a647f39b] = env->getMethodID(cls, "getAODC", "()I");
                mids$[mid_getAODE_55546ef6a647f39b] = env->getMethodID(cls, "getAODE", "()I");
                mids$[mid_getSvAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getSvAccuracy", "()D");
                mids$[mid_getTGD1_b74f83833fdad017] = env->getMethodID(cls, "getTGD1", "()D");
                mids$[mid_getTGD2_b74f83833fdad017] = env->getMethodID(cls, "getTGD2", "()D");
                mids$[mid_setAODC_8ba9fe7a847cecad] = env->getMethodID(cls, "setAODC", "(D)V");
                mids$[mid_setAODE_8ba9fe7a847cecad] = env->getMethodID(cls, "setAODE", "(D)V");
                mids$[mid_setSvAccuracy_8ba9fe7a847cecad] = env->getMethodID(cls, "setSvAccuracy", "(D)V");
                mids$[mid_setTGD1_8ba9fe7a847cecad] = env->getMethodID(cls, "setTGD1", "(D)V");
                mids$[mid_setTGD2_8ba9fe7a847cecad] = env->getMethodID(cls, "setTGD2", "(D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                D1 = new ::java::lang::String(env->getStaticObjectField(cls, "D1", "Ljava/lang/String;"));
                D2 = new ::java::lang::String(env->getStaticObjectField(cls, "D2", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouLegacyNavigationMessage::BeidouLegacyNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jint BeidouLegacyNavigationMessage::getAODC() const
            {
              return env->callIntMethod(this$, mids$[mid_getAODC_55546ef6a647f39b]);
            }

            jint BeidouLegacyNavigationMessage::getAODE() const
            {
              return env->callIntMethod(this$, mids$[mid_getAODE_55546ef6a647f39b]);
            }

            jdouble BeidouLegacyNavigationMessage::getSvAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvAccuracy_b74f83833fdad017]);
            }

            jdouble BeidouLegacyNavigationMessage::getTGD1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD1_b74f83833fdad017]);
            }

            jdouble BeidouLegacyNavigationMessage::getTGD2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD2_b74f83833fdad017]);
            }

            void BeidouLegacyNavigationMessage::setAODC(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAODC_8ba9fe7a847cecad], a0);
            }

            void BeidouLegacyNavigationMessage::setAODE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAODE_8ba9fe7a847cecad], a0);
            }

            void BeidouLegacyNavigationMessage::setSvAccuracy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvAccuracy_8ba9fe7a847cecad], a0);
            }

            void BeidouLegacyNavigationMessage::setTGD1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD1_8ba9fe7a847cecad], a0);
            }

            void BeidouLegacyNavigationMessage::setTGD2(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD2_8ba9fe7a847cecad], a0);
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
#include "org/orekit/gnss/rflink/gps/SubFrame4C.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4C::class$ = NULL;
          jmethodID *SubFrame4C::mids$ = NULL;
          bool SubFrame4C::live$ = false;
          jint SubFrame4C::NB_ERD = (jint) 0;

          jclass SubFrame4C::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4C");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getERD_0e7cf35192c3effe] = env->getMethodID(cls, "getERD", "(I)I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NB_ERD = env->getStaticIntField(cls, "NB_ERD");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4C::getERD(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getERD_0e7cf35192c3effe], a0);
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
          static PyObject *t_SubFrame4C_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4C_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4C_getERD(t_SubFrame4C *self, PyObject *arg);

          static PyMethodDef t_SubFrame4C__methods_[] = {
            DECLARE_METHOD(t_SubFrame4C, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4C, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4C, getERD, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4C)[] = {
            { Py_tp_methods, t_SubFrame4C__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4C)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4C, t_SubFrame4C, SubFrame4C);

          void t_SubFrame4C::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4C), &PY_TYPE_DEF(SubFrame4C), module, "SubFrame4C", 0);
          }

          void t_SubFrame4C::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "class_", make_descriptor(SubFrame4C::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "wrapfn_", make_descriptor(t_SubFrame4C::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "boxfn_", make_descriptor(boxObject));
            env->getClass(SubFrame4C::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "NB_ERD", make_descriptor(SubFrame4C::NB_ERD));
          }

          static PyObject *t_SubFrame4C_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4C::initializeClass, 1)))
              return NULL;
            return t_SubFrame4C::wrap_Object(SubFrame4C(((t_SubFrame4C *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4C_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4C::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4C_getERD(t_SubFrame4C *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getERD(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getERD", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IntegerArrayConsumer::class$ = NULL;
            jmethodID *ParseToken$IntegerArrayConsumer::mids$ = NULL;
            bool ParseToken$IntegerArrayConsumer::live$ = false;

            jclass ParseToken$IntegerArrayConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_86a2769cb881d388] = env->getMethodID(cls, "accept", "([I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IntegerArrayConsumer::accept(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_86a2769cb881d388], a0.this$);
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
            static PyObject *t_ParseToken$IntegerArrayConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntegerArrayConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntegerArrayConsumer_accept(t_ParseToken$IntegerArrayConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$IntegerArrayConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IntegerArrayConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntegerArrayConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntegerArrayConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IntegerArrayConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IntegerArrayConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IntegerArrayConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IntegerArrayConsumer, t_ParseToken$IntegerArrayConsumer, ParseToken$IntegerArrayConsumer);

            void t_ParseToken$IntegerArrayConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IntegerArrayConsumer), &PY_TYPE_DEF(ParseToken$IntegerArrayConsumer), module, "ParseToken$IntegerArrayConsumer", 0);
            }

            void t_ParseToken$IntegerArrayConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntegerArrayConsumer), "class_", make_descriptor(ParseToken$IntegerArrayConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntegerArrayConsumer), "wrapfn_", make_descriptor(t_ParseToken$IntegerArrayConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntegerArrayConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IntegerArrayConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IntegerArrayConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IntegerArrayConsumer::wrap_Object(ParseToken$IntegerArrayConsumer(((t_ParseToken$IntegerArrayConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IntegerArrayConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IntegerArrayConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IntegerArrayConsumer_accept(t_ParseToken$IntegerArrayConsumer *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
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
#include "org/orekit/models/earth/ionosphere/EstimatedIonosphericModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *EstimatedIonosphericModel::class$ = NULL;
          jmethodID *EstimatedIonosphericModel::mids$ = NULL;
          bool EstimatedIonosphericModel::live$ = false;
          ::java::lang::String *EstimatedIonosphericModel::VERTICAL_TOTAL_ELECTRON_CONTENT = NULL;

          jclass EstimatedIonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/EstimatedIonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_96bc38eb13551139] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericMappingFunction;D)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_e3546a4ddcf1e47f] = env->getMethodID(cls, "pathDelay", "(DD[D)D");
              mids$[mid_pathDelay_77b03b61cb85f44d] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_5e4bace87c721642] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_0c51f26f37c66719] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              VERTICAL_TOTAL_ELECTRON_CONTENT = new ::java::lang::String(env->getStaticObjectField(cls, "VERTICAL_TOTAL_ELECTRON_CONTENT", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EstimatedIonosphericModel::EstimatedIonosphericModel(const ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96bc38eb13551139, a0.this$, a1)) {}

          ::java::util::List EstimatedIonosphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          jdouble EstimatedIonosphericModel::pathDelay(jdouble a0, jdouble a1, const JArray< jdouble > & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_e3546a4ddcf1e47f], a0, a1, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement EstimatedIonosphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_77b03b61cb85f44d], a0.this$, a1, a2.this$));
          }

          jdouble EstimatedIonosphericModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_5e4bace87c721642], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement EstimatedIonosphericModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_0c51f26f37c66719], a0.this$, a1.this$, a2, a3.this$));
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
          static PyObject *t_EstimatedIonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EstimatedIonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EstimatedIonosphericModel_init_(t_EstimatedIonosphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EstimatedIonosphericModel_getParametersDrivers(t_EstimatedIonosphericModel *self);
          static PyObject *t_EstimatedIonosphericModel_pathDelay(t_EstimatedIonosphericModel *self, PyObject *args);
          static PyObject *t_EstimatedIonosphericModel_get__parametersDrivers(t_EstimatedIonosphericModel *self, void *data);
          static PyGetSetDef t_EstimatedIonosphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_EstimatedIonosphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EstimatedIonosphericModel__methods_[] = {
            DECLARE_METHOD(t_EstimatedIonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedIonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedIonosphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_EstimatedIonosphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EstimatedIonosphericModel)[] = {
            { Py_tp_methods, t_EstimatedIonosphericModel__methods_ },
            { Py_tp_init, (void *) t_EstimatedIonosphericModel_init_ },
            { Py_tp_getset, t_EstimatedIonosphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EstimatedIonosphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EstimatedIonosphericModel, t_EstimatedIonosphericModel, EstimatedIonosphericModel);

          void t_EstimatedIonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(EstimatedIonosphericModel), &PY_TYPE_DEF(EstimatedIonosphericModel), module, "EstimatedIonosphericModel", 0);
          }

          void t_EstimatedIonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "class_", make_descriptor(EstimatedIonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "wrapfn_", make_descriptor(t_EstimatedIonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(EstimatedIonosphericModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "VERTICAL_TOTAL_ELECTRON_CONTENT", make_descriptor(j2p(*EstimatedIonosphericModel::VERTICAL_TOTAL_ELECTRON_CONTENT)));
          }

          static PyObject *t_EstimatedIonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EstimatedIonosphericModel::initializeClass, 1)))
              return NULL;
            return t_EstimatedIonosphericModel::wrap_Object(EstimatedIonosphericModel(((t_EstimatedIonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_EstimatedIonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EstimatedIonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EstimatedIonosphericModel_init_(t_EstimatedIonosphericModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction a0((jobject) NULL);
            jdouble a1;
            EstimatedIonosphericModel object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction::initializeClass, &a0, &a1))
            {
              INT_CALL(object = EstimatedIonosphericModel(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EstimatedIonosphericModel_getParametersDrivers(t_EstimatedIonosphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_EstimatedIonosphericModel_pathDelay(t_EstimatedIonosphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                JArray< jdouble > a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "DD[D", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KD[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_EstimatedIonosphericModel_get__parametersDrivers(t_EstimatedIonosphericModel *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/DSFactory$DSField.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DSFactory$DSField::class$ = NULL;
        jmethodID *DSFactory$DSField::mids$ = NULL;
        bool DSFactory$DSField::live$ = false;

        jclass DSFactory$DSField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DSFactory$DSField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_57983c4d4b4a2f7f] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getPi_57983c4d4b4a2f7f] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_57983c4d4b4a2f7f] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean DSFactory$DSField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory$DSField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getOne_57983c4d4b4a2f7f]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory$DSField::getPi() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_57983c4d4b4a2f7f]));
        }

        ::java::lang::Class DSFactory$DSField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory$DSField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getZero_57983c4d4b4a2f7f]));
        }

        jint DSFactory$DSField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
        static PyObject *t_DSFactory$DSField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSFactory$DSField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSFactory$DSField_equals(t_DSFactory$DSField *self, PyObject *args);
        static PyObject *t_DSFactory$DSField_getOne(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_getPi(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_getRuntimeClass(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_getZero(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_hashCode(t_DSFactory$DSField *self, PyObject *args);
        static PyObject *t_DSFactory$DSField_get__one(t_DSFactory$DSField *self, void *data);
        static PyObject *t_DSFactory$DSField_get__pi(t_DSFactory$DSField *self, void *data);
        static PyObject *t_DSFactory$DSField_get__runtimeClass(t_DSFactory$DSField *self, void *data);
        static PyObject *t_DSFactory$DSField_get__zero(t_DSFactory$DSField *self, void *data);
        static PyGetSetDef t_DSFactory$DSField__fields_[] = {
          DECLARE_GET_FIELD(t_DSFactory$DSField, one),
          DECLARE_GET_FIELD(t_DSFactory$DSField, pi),
          DECLARE_GET_FIELD(t_DSFactory$DSField, runtimeClass),
          DECLARE_GET_FIELD(t_DSFactory$DSField, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSFactory$DSField__methods_[] = {
          DECLARE_METHOD(t_DSFactory$DSField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory$DSField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory$DSField, equals, METH_VARARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getPi, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSFactory$DSField)[] = {
          { Py_tp_methods, t_DSFactory$DSField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DSFactory$DSField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSFactory$DSField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DSFactory$DSField, t_DSFactory$DSField, DSFactory$DSField);

        void t_DSFactory$DSField::install(PyObject *module)
        {
          installType(&PY_TYPE(DSFactory$DSField), &PY_TYPE_DEF(DSFactory$DSField), module, "DSFactory$DSField", 0);
        }

        void t_DSFactory$DSField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory$DSField), "class_", make_descriptor(DSFactory$DSField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory$DSField), "wrapfn_", make_descriptor(t_DSFactory$DSField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory$DSField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSFactory$DSField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSFactory$DSField::initializeClass, 1)))
            return NULL;
          return t_DSFactory$DSField::wrap_Object(DSFactory$DSField(((t_DSFactory$DSField *) arg)->object.this$));
        }
        static PyObject *t_DSFactory$DSField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSFactory$DSField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DSFactory$DSField_equals(t_DSFactory$DSField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(DSFactory$DSField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_DSFactory$DSField_getOne(t_DSFactory$DSField *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DSFactory$DSField_getPi(t_DSFactory$DSField *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DSFactory$DSField_getRuntimeClass(t_DSFactory$DSField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DSFactory$DSField_getZero(t_DSFactory$DSField *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DSFactory$DSField_hashCode(t_DSFactory$DSField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DSFactory$DSField), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_DSFactory$DSField_get__one(t_DSFactory$DSField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_DSFactory$DSField_get__pi(t_DSFactory$DSField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_DSFactory$DSField_get__runtimeClass(t_DSFactory$DSField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_DSFactory$DSField_get__zero(t_DSFactory$DSField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(value);
        }
      }
    }
  }
}

#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/YUMAParser.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSAlmanac.h"
#include "java/io/InputStream.h"
#include "java/lang/Integer.h"
#include "java/text/ParseException.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "org/orekit/errors/OrekitException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *YUMAParser::class$ = NULL;
      jmethodID *YUMAParser::mids$ = NULL;
      bool YUMAParser::live$ = false;

      jclass YUMAParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/YUMAParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_f930d4f5e3f73cb2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getAlmanacs_0d9551367f7ecdef] = env->getMethodID(cls, "getAlmanacs", "()Ljava/util/List;");
          mids$[mid_getPRNNumbers_0d9551367f7ecdef] = env->getMethodID(cls, "getPRNNumbers", "()Ljava/util/List;");
          mids$[mid_getSupportedNames_3cffd47377eca18a] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
          mids$[mid_loadData_0640e6acf969ed28] = env->getMethodID(cls, "loadData", "()V");
          mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_89b302893bdbe1f1] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      YUMAParser::YUMAParser(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

      YUMAParser::YUMAParser(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScales & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_f930d4f5e3f73cb2, a0.this$, a1.this$, a2.this$)) {}

      ::java::util::List YUMAParser::getAlmanacs() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAlmanacs_0d9551367f7ecdef]));
      }

      ::java::util::List YUMAParser::getPRNNumbers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPRNNumbers_0d9551367f7ecdef]));
      }

      ::java::lang::String YUMAParser::getSupportedNames() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_3cffd47377eca18a]));
      }

      void YUMAParser::loadData() const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_0640e6acf969ed28]);
      }

      void YUMAParser::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
      }

      jboolean YUMAParser::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_89b302893bdbe1f1]);
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
      static PyObject *t_YUMAParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_YUMAParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_YUMAParser_init_(t_YUMAParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_YUMAParser_getAlmanacs(t_YUMAParser *self);
      static PyObject *t_YUMAParser_getPRNNumbers(t_YUMAParser *self);
      static PyObject *t_YUMAParser_getSupportedNames(t_YUMAParser *self);
      static PyObject *t_YUMAParser_loadData(t_YUMAParser *self, PyObject *args);
      static PyObject *t_YUMAParser_stillAcceptsData(t_YUMAParser *self);
      static PyObject *t_YUMAParser_get__almanacs(t_YUMAParser *self, void *data);
      static PyObject *t_YUMAParser_get__pRNNumbers(t_YUMAParser *self, void *data);
      static PyObject *t_YUMAParser_get__supportedNames(t_YUMAParser *self, void *data);
      static PyGetSetDef t_YUMAParser__fields_[] = {
        DECLARE_GET_FIELD(t_YUMAParser, almanacs),
        DECLARE_GET_FIELD(t_YUMAParser, pRNNumbers),
        DECLARE_GET_FIELD(t_YUMAParser, supportedNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_YUMAParser__methods_[] = {
        DECLARE_METHOD(t_YUMAParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YUMAParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YUMAParser, getAlmanacs, METH_NOARGS),
        DECLARE_METHOD(t_YUMAParser, getPRNNumbers, METH_NOARGS),
        DECLARE_METHOD(t_YUMAParser, getSupportedNames, METH_NOARGS),
        DECLARE_METHOD(t_YUMAParser, loadData, METH_VARARGS),
        DECLARE_METHOD(t_YUMAParser, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(YUMAParser)[] = {
        { Py_tp_methods, t_YUMAParser__methods_ },
        { Py_tp_init, (void *) t_YUMAParser_init_ },
        { Py_tp_getset, t_YUMAParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(YUMAParser)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(YUMAParser, t_YUMAParser, YUMAParser);

      void t_YUMAParser::install(PyObject *module)
      {
        installType(&PY_TYPE(YUMAParser), &PY_TYPE_DEF(YUMAParser), module, "YUMAParser", 0);
      }

      void t_YUMAParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(YUMAParser), "class_", make_descriptor(YUMAParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YUMAParser), "wrapfn_", make_descriptor(t_YUMAParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YUMAParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_YUMAParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, YUMAParser::initializeClass, 1)))
          return NULL;
        return t_YUMAParser::wrap_Object(YUMAParser(((t_YUMAParser *) arg)->object.this$));
      }
      static PyObject *t_YUMAParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, YUMAParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_YUMAParser_init_(t_YUMAParser *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            YUMAParser object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = YUMAParser(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            YUMAParser object((jobject) NULL);

            if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = YUMAParser(a0, a1, a2));
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

      static PyObject *t_YUMAParser_getAlmanacs(t_YUMAParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSAlmanac));
      }

      static PyObject *t_YUMAParser_getPRNNumbers(t_YUMAParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Integer));
      }

      static PyObject *t_YUMAParser_getSupportedNames(t_YUMAParser *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSupportedNames());
        return j2p(result);
      }

      static PyObject *t_YUMAParser_loadData(t_YUMAParser *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.loadData());
            Py_RETURN_NONE;
          }
          break;
         case 2:
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "loadData", args);
        return NULL;
      }

      static PyObject *t_YUMAParser_stillAcceptsData(t_YUMAParser *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_YUMAParser_get__almanacs(t_YUMAParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_YUMAParser_get__pRNNumbers(t_YUMAParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_YUMAParser_get__supportedNames(t_YUMAParser *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSupportedNames());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FirstOrderConverter.h"
#include "org/hipparchus/ode/SecondOrderODE.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FirstOrderConverter::class$ = NULL;
      jmethodID *FirstOrderConverter::mids$ = NULL;
      bool FirstOrderConverter::live$ = false;

      jclass FirstOrderConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FirstOrderConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3b52ed3d4ac237ef] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/SecondOrderODE;)V");
          mids$[mid_computeDerivatives_31b9a2982d73e37a] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FirstOrderConverter::FirstOrderConverter(const ::org::hipparchus::ode::SecondOrderODE & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3b52ed3d4ac237ef, a0.this$)) {}

      JArray< jdouble > FirstOrderConverter::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_31b9a2982d73e37a], a0, a1.this$));
      }

      jint FirstOrderConverter::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
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
      static PyObject *t_FirstOrderConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FirstOrderConverter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FirstOrderConverter_init_(t_FirstOrderConverter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FirstOrderConverter_computeDerivatives(t_FirstOrderConverter *self, PyObject *args);
      static PyObject *t_FirstOrderConverter_getDimension(t_FirstOrderConverter *self);
      static PyObject *t_FirstOrderConverter_get__dimension(t_FirstOrderConverter *self, void *data);
      static PyGetSetDef t_FirstOrderConverter__fields_[] = {
        DECLARE_GET_FIELD(t_FirstOrderConverter, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FirstOrderConverter__methods_[] = {
        DECLARE_METHOD(t_FirstOrderConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FirstOrderConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FirstOrderConverter, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FirstOrderConverter, getDimension, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FirstOrderConverter)[] = {
        { Py_tp_methods, t_FirstOrderConverter__methods_ },
        { Py_tp_init, (void *) t_FirstOrderConverter_init_ },
        { Py_tp_getset, t_FirstOrderConverter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FirstOrderConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FirstOrderConverter, t_FirstOrderConverter, FirstOrderConverter);

      void t_FirstOrderConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(FirstOrderConverter), &PY_TYPE_DEF(FirstOrderConverter), module, "FirstOrderConverter", 0);
      }

      void t_FirstOrderConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FirstOrderConverter), "class_", make_descriptor(FirstOrderConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FirstOrderConverter), "wrapfn_", make_descriptor(t_FirstOrderConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FirstOrderConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FirstOrderConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FirstOrderConverter::initializeClass, 1)))
          return NULL;
        return t_FirstOrderConverter::wrap_Object(FirstOrderConverter(((t_FirstOrderConverter *) arg)->object.this$));
      }
      static PyObject *t_FirstOrderConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FirstOrderConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FirstOrderConverter_init_(t_FirstOrderConverter *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::ode::SecondOrderODE a0((jobject) NULL);
        FirstOrderConverter object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::ode::SecondOrderODE::initializeClass, &a0))
        {
          INT_CALL(object = FirstOrderConverter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FirstOrderConverter_computeDerivatives(t_FirstOrderConverter *self, PyObject *args)
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

      static PyObject *t_FirstOrderConverter_getDimension(t_FirstOrderConverter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FirstOrderConverter_get__dimension(t_FirstOrderConverter *self, void *data)
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
#include "java/io/StringReader.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *StringReader::class$ = NULL;
    jmethodID *StringReader::mids$ = NULL;
    bool StringReader::live$ = false;

    jclass StringReader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/StringReader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_mark_a3da1a935cb37f7b] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_89b302893bdbe1f1] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_read_412668abc8d889e9] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_f0b052b9721148b0] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_ready_89b302893bdbe1f1] = env->getMethodID(cls, "ready", "()Z");
        mids$[mid_reset_0640e6acf969ed28] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_f4ad805a81234b49] = env->getMethodID(cls, "skip", "(J)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringReader::StringReader(const ::java::lang::String & a0) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    void StringReader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    void StringReader::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_a3da1a935cb37f7b], a0);
    }

    jboolean StringReader::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_89b302893bdbe1f1]);
    }

    jint StringReader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_412668abc8d889e9]);
    }

    jint StringReader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_f0b052b9721148b0], a0.this$, a1, a2);
    }

    jboolean StringReader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_89b302893bdbe1f1]);
    }

    void StringReader::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_0640e6acf969ed28]);
    }

    jlong StringReader::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_f4ad805a81234b49], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_StringReader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StringReader_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StringReader_init_(t_StringReader *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StringReader_close(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_mark(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_markSupported(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_read(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_ready(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_reset(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_skip(t_StringReader *self, PyObject *args);

    static PyMethodDef t_StringReader__methods_[] = {
      DECLARE_METHOD(t_StringReader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringReader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringReader, close, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, mark, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, markSupported, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, read, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, ready, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, reset, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, skip, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StringReader)[] = {
      { Py_tp_methods, t_StringReader__methods_ },
      { Py_tp_init, (void *) t_StringReader_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StringReader)[] = {
      &PY_TYPE_DEF(::java::io::Reader),
      NULL
    };

    DEFINE_TYPE(StringReader, t_StringReader, StringReader);

    void t_StringReader::install(PyObject *module)
    {
      installType(&PY_TYPE(StringReader), &PY_TYPE_DEF(StringReader), module, "StringReader", 0);
    }

    void t_StringReader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringReader), "class_", make_descriptor(StringReader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringReader), "wrapfn_", make_descriptor(t_StringReader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringReader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StringReader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StringReader::initializeClass, 1)))
        return NULL;
      return t_StringReader::wrap_Object(StringReader(((t_StringReader *) arg)->object.this$));
    }
    static PyObject *t_StringReader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StringReader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StringReader_init_(t_StringReader *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      StringReader object((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        INT_CALL(object = StringReader(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_StringReader_close(t_StringReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_StringReader_mark(t_StringReader *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "mark", args, 2);
    }

    static PyObject *t_StringReader_markSupported(t_StringReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.markSupported());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "markSupported", args, 2);
    }

    static PyObject *t_StringReader_read(t_StringReader *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_StringReader_ready(t_StringReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.ready());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "ready", args, 2);
    }

    static PyObject *t_StringReader_reset(t_StringReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.reset());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "reset", args, 2);
    }

    static PyObject *t_StringReader_skip(t_StringReader *self, PyObject *args)
    {
      jlong a0;
      jlong result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "skip", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Segment::class$ = NULL;
          jmethodID *Segment::mids$ = NULL;
          bool Segment::live$ = false;

          jclass Segment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Segment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cfb070b7ebe3030b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Line;)V");
              mids$[mid_init$_b2fa07e96193ae69] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_distance_f29c6927714cda74] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_getEnd_f681f2fc9cdfab57] = env->getMethodID(cls, "getEnd", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_getLength_557b8123390d8d0c] = env->getMethodID(cls, "getLength", "()D");
              mids$[mid_getLine_e207c2684f5ea968] = env->getMethodID(cls, "getLine", "()Lorg/hipparchus/geometry/euclidean/twod/Line;");
              mids$[mid_getStart_f681f2fc9cdfab57] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Segment::Segment(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::geometry::euclidean::twod::Line & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cfb070b7ebe3030b, a0.this$, a1.this$, a2.this$)) {}

          Segment::Segment(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b2fa07e96193ae69, a0.this$, a1.this$, a2)) {}

          jdouble Segment::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_f29c6927714cda74], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Segment::getEnd() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getEnd_f681f2fc9cdfab57]));
          }

          jdouble Segment::getLength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLength_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::euclidean::twod::Line Segment::getLine() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Line(env->callObjectMethod(this$, mids$[mid_getLine_e207c2684f5ea968]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Segment::getStart() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getStart_f681f2fc9cdfab57]));
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
        namespace twod {
          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Segment_distance(t_Segment *self, PyObject *arg);
          static PyObject *t_Segment_getEnd(t_Segment *self);
          static PyObject *t_Segment_getLength(t_Segment *self);
          static PyObject *t_Segment_getLine(t_Segment *self);
          static PyObject *t_Segment_getStart(t_Segment *self);
          static PyObject *t_Segment_get__end(t_Segment *self, void *data);
          static PyObject *t_Segment_get__length(t_Segment *self, void *data);
          static PyObject *t_Segment_get__line(t_Segment *self, void *data);
          static PyObject *t_Segment_get__start(t_Segment *self, void *data);
          static PyGetSetDef t_Segment__fields_[] = {
            DECLARE_GET_FIELD(t_Segment, end),
            DECLARE_GET_FIELD(t_Segment, length),
            DECLARE_GET_FIELD(t_Segment, line),
            DECLARE_GET_FIELD(t_Segment, start),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Segment__methods_[] = {
            DECLARE_METHOD(t_Segment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, distance, METH_O),
            DECLARE_METHOD(t_Segment, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getLength, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getLine, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getStart, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Segment)[] = {
            { Py_tp_methods, t_Segment__methods_ },
            { Py_tp_init, (void *) t_Segment_init_ },
            { Py_tp_getset, t_Segment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Segment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Segment, t_Segment, Segment);

          void t_Segment::install(PyObject *module)
          {
            installType(&PY_TYPE(Segment), &PY_TYPE_DEF(Segment), module, "Segment", 0);
          }

          void t_Segment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "class_", make_descriptor(Segment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "wrapfn_", make_descriptor(t_Segment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Segment::initializeClass, 1)))
              return NULL;
            return t_Segment::wrap_Object(Segment(((t_Segment *) arg)->object.this$));
          }
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Segment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Line a2((jobject) NULL);
                Segment object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Line::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Segment(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                jdouble a2;
                Segment object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Segment(a0, a1, a2));
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

          static PyObject *t_Segment_distance(t_Segment *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Segment_getEnd(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Segment_getLength(t_Segment *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLength());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Segment_getLine(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Line result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::twod::t_Line::wrap_Object(result);
          }

          static PyObject *t_Segment_getStart(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Segment_get__end(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }

          static PyObject *t_Segment_get__length(t_Segment *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLength());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Segment_get__line(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Line value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::twod::t_Line::wrap_Object(value);
          }

          static PyObject *t_Segment_get__start(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1063.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "java/util/List.h"
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

              ::java::lang::Class *Rtcm1063::class$ = NULL;
              jmethodID *Rtcm1063::mids$ = NULL;
              bool Rtcm1063::live$ = false;

              jclass Rtcm1063::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1063");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e429337ce34e6c7c] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1063::Rtcm1063(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_e429337ce34e6c7c, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1063_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1063_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1063_of_(t_Rtcm1063 *self, PyObject *args);
              static int t_Rtcm1063_init_(t_Rtcm1063 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1063_get__parameters_(t_Rtcm1063 *self, void *data);
              static PyGetSetDef t_Rtcm1063__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1063, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1063__methods_[] = {
                DECLARE_METHOD(t_Rtcm1063, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1063, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1063, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1063)[] = {
                { Py_tp_methods, t_Rtcm1063__methods_ },
                { Py_tp_init, (void *) t_Rtcm1063_init_ },
                { Py_tp_getset, t_Rtcm1063__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1063)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1063, t_Rtcm1063, Rtcm1063);
              PyObject *t_Rtcm1063::wrap_Object(const Rtcm1063& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1063::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1063 *self = (t_Rtcm1063 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1063::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1063::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1063 *self = (t_Rtcm1063 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1063::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1063), &PY_TYPE_DEF(Rtcm1063), module, "Rtcm1063", 0);
              }

              void t_Rtcm1063::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1063), "class_", make_descriptor(Rtcm1063::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1063), "wrapfn_", make_descriptor(t_Rtcm1063::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1063), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1063_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1063::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1063::wrap_Object(Rtcm1063(((t_Rtcm1063 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1063_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1063::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1063_of_(t_Rtcm1063 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1063_init_(t_Rtcm1063 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1063 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1063(a0, a1, a2));
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
              static PyObject *t_Rtcm1063_get__parameters_(t_Rtcm1063 *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Transform::class$ = NULL;
        jmethodID *Transform::mids$ = NULL;
        bool Transform::live$ = false;

        jclass Transform::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Transform");

            mids$ = new jmethodID[max_mid];
            mids$[mid_apply_328d0d966eeb9668] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
            mids$[mid_apply_f2bf46c1ba47b183] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_apply_14f90b5b418ecb48] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::Point Transform::apply(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_apply_328d0d966eeb9668], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Hyperplane Transform::apply(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Hyperplane(env->callObjectMethod(this$, mids$[mid_apply_f2bf46c1ba47b183], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Transform::apply(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0, const ::org::hipparchus::geometry::partitioning::Hyperplane & a1, const ::org::hipparchus::geometry::partitioning::Hyperplane & a2) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_apply_14f90b5b418ecb48], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Transform_of_(t_Transform *self, PyObject *args);
        static PyObject *t_Transform_apply(t_Transform *self, PyObject *args);
        static PyObject *t_Transform_get__parameters_(t_Transform *self, void *data);
        static PyGetSetDef t_Transform__fields_[] = {
          DECLARE_GET_FIELD(t_Transform, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Transform__methods_[] = {
          DECLARE_METHOD(t_Transform, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Transform, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Transform, of_, METH_VARARGS),
          DECLARE_METHOD(t_Transform, apply, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Transform)[] = {
          { Py_tp_methods, t_Transform__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Transform__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Transform)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Transform, t_Transform, Transform);
        PyObject *t_Transform::wrap_Object(const Transform& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Transform::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Transform *self = (t_Transform *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_Transform::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Transform::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Transform *self = (t_Transform *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_Transform::install(PyObject *module)
        {
          installType(&PY_TYPE(Transform), &PY_TYPE_DEF(Transform), module, "Transform", 0);
        }

        void t_Transform::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "class_", make_descriptor(Transform::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "wrapfn_", make_descriptor(t_Transform::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Transform::initializeClass, 1)))
            return NULL;
          return t_Transform::wrap_Object(Transform(((t_Transform *) arg)->object.this$));
        }
        static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Transform::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Transform_of_(t_Transform *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Transform_apply(t_Transform *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::Point a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::Point result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Hyperplane result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Hyperplane a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::partitioning::Hyperplane a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a2, &p2, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
              {
                OBJ_CALL(result = self->object.apply(a0, a1, a2));
                return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[1]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "apply", args);
          return NULL;
        }
        static PyObject *t_Transform_get__parameters_(t_Transform *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/AbstractEopLoader.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *AbstractEopLoader::class$ = NULL;
      jmethodID *AbstractEopLoader::mids$ = NULL;
      bool AbstractEopLoader::live$ = false;

      jclass AbstractEopLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/AbstractEopLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1b3e3ade57ae798c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Ljava/util/function/Supplier;)V");
          mids$[mid_getUtc_527ee9dde1a96470] = env->getMethodID(cls, "getUtc", "()Lorg/orekit/time/TimeScale;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractEopLoader::AbstractEopLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::java::util::function::Supplier & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_1b3e3ade57ae798c, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_AbstractEopLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractEopLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractEopLoader_init_(t_AbstractEopLoader *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_AbstractEopLoader__methods_[] = {
        DECLARE_METHOD(t_AbstractEopLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractEopLoader, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractEopLoader)[] = {
        { Py_tp_methods, t_AbstractEopLoader__methods_ },
        { Py_tp_init, (void *) t_AbstractEopLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractEopLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(AbstractEopLoader, t_AbstractEopLoader, AbstractEopLoader);

      void t_AbstractEopLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractEopLoader), &PY_TYPE_DEF(AbstractEopLoader), module, "AbstractEopLoader", 0);
      }

      void t_AbstractEopLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopLoader), "class_", make_descriptor(AbstractEopLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopLoader), "wrapfn_", make_descriptor(t_AbstractEopLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractEopLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractEopLoader::initializeClass, 1)))
          return NULL;
        return t_AbstractEopLoader::wrap_Object(AbstractEopLoader(((t_AbstractEopLoader *) arg)->object.this$));
      }
      static PyObject *t_AbstractEopLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractEopLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractEopLoader_init_(t_AbstractEopLoader *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
        ::java::util::function::Supplier a2((jobject) NULL);
        PyTypeObject **p2;
        AbstractEopLoader object((jobject) NULL);

        if (!parseArgs(args, "skK", ::org::orekit::data::DataProvidersManager::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &a2, &p2, ::java::util::function::t_Supplier::parameters_))
        {
          INT_CALL(object = AbstractEopLoader(a0, a1, a2));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/SingleBodyAbsoluteAttraction.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *SingleBodyAbsoluteAttraction::class$ = NULL;
        jmethodID *SingleBodyAbsoluteAttraction::mids$ = NULL;
        bool SingleBodyAbsoluteAttraction::live$ = false;
        ::java::lang::String *SingleBodyAbsoluteAttraction::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass SingleBodyAbsoluteAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/SingleBodyAbsoluteAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_971db345b01a6cfa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SingleBodyAbsoluteAttraction::SingleBodyAbsoluteAttraction(const ::org::orekit::bodies::CelestialBody & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_971db345b01a6cfa, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SingleBodyAbsoluteAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SingleBodyAbsoluteAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        jboolean SingleBodyAbsoluteAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        ::java::util::List SingleBodyAbsoluteAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
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
        static PyObject *t_SingleBodyAbsoluteAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SingleBodyAbsoluteAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SingleBodyAbsoluteAttraction_init_(t_SingleBodyAbsoluteAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SingleBodyAbsoluteAttraction_acceleration(t_SingleBodyAbsoluteAttraction *self, PyObject *args);
        static PyObject *t_SingleBodyAbsoluteAttraction_dependsOnPositionOnly(t_SingleBodyAbsoluteAttraction *self);
        static PyObject *t_SingleBodyAbsoluteAttraction_getParametersDrivers(t_SingleBodyAbsoluteAttraction *self);
        static PyObject *t_SingleBodyAbsoluteAttraction_get__parametersDrivers(t_SingleBodyAbsoluteAttraction *self, void *data);
        static PyGetSetDef t_SingleBodyAbsoluteAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_SingleBodyAbsoluteAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SingleBodyAbsoluteAttraction__methods_[] = {
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SingleBodyAbsoluteAttraction)[] = {
          { Py_tp_methods, t_SingleBodyAbsoluteAttraction__methods_ },
          { Py_tp_init, (void *) t_SingleBodyAbsoluteAttraction_init_ },
          { Py_tp_getset, t_SingleBodyAbsoluteAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SingleBodyAbsoluteAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SingleBodyAbsoluteAttraction, t_SingleBodyAbsoluteAttraction, SingleBodyAbsoluteAttraction);

        void t_SingleBodyAbsoluteAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(SingleBodyAbsoluteAttraction), &PY_TYPE_DEF(SingleBodyAbsoluteAttraction), module, "SingleBodyAbsoluteAttraction", 0);
        }

        void t_SingleBodyAbsoluteAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "class_", make_descriptor(SingleBodyAbsoluteAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "wrapfn_", make_descriptor(t_SingleBodyAbsoluteAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(SingleBodyAbsoluteAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*SingleBodyAbsoluteAttraction::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SingleBodyAbsoluteAttraction::initializeClass, 1)))
            return NULL;
          return t_SingleBodyAbsoluteAttraction::wrap_Object(SingleBodyAbsoluteAttraction(((t_SingleBodyAbsoluteAttraction *) arg)->object.this$));
        }
        static PyObject *t_SingleBodyAbsoluteAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SingleBodyAbsoluteAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SingleBodyAbsoluteAttraction_init_(t_SingleBodyAbsoluteAttraction *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          SingleBodyAbsoluteAttraction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = SingleBodyAbsoluteAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_acceleration(t_SingleBodyAbsoluteAttraction *self, PyObject *args)
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

        static PyObject *t_SingleBodyAbsoluteAttraction_dependsOnPositionOnly(t_SingleBodyAbsoluteAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_getParametersDrivers(t_SingleBodyAbsoluteAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_get__parametersDrivers(t_SingleBodyAbsoluteAttraction *self, void *data)
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
#include "org/hipparchus/linear/RiccatiEquationSolverImpl.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_f520f7b0bf393aed] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_getK_70a207fcbc031df2] = env->getMethodID(cls, "getK", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_70a207fcbc031df2] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RiccatiEquationSolverImpl::RiccatiEquationSolverImpl(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::hipparchus::linear::RealMatrix & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f520f7b0bf393aed, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolverImpl::getK() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getK_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolverImpl::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_70a207fcbc031df2]));
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
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/LOFType.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LOFType::class$ = NULL;
      jmethodID *LOFType::mids$ = NULL;
      bool LOFType::live$ = false;
      LOFType *LOFType::EQW = NULL;
      LOFType *LOFType::LVLH = NULL;
      LOFType *LOFType::LVLH_CCSDS = NULL;
      LOFType *LOFType::LVLH_CCSDS_INERTIAL = NULL;
      LOFType *LOFType::LVLH_INERTIAL = NULL;
      LOFType *LOFType::NTW = NULL;
      LOFType *LOFType::NTW_INERTIAL = NULL;
      LOFType *LOFType::QSW = NULL;
      LOFType *LOFType::QSW_INERTIAL = NULL;
      LOFType *LOFType::TNW = NULL;
      LOFType *LOFType::TNW_INERTIAL = NULL;
      LOFType *LOFType::VNC = NULL;
      LOFType *LOFType::VNC_INERTIAL = NULL;
      LOFType *LOFType::VVLH = NULL;
      LOFType *LOFType::VVLH_INERTIAL = NULL;

      jclass LOFType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LOFType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_rotationFromInertial_8b424804999938a4] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_9b71bf39454b4a07] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_352d2666b9e583bd] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromInertial_1022f468fb3d1015] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromLOF_8d5767b4634d801e] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/orekit/frames/LOFType;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromLOF_6bc33cb92fb35718] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/hipparchus/Field;Lorg/orekit/frames/LOFType;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toOrbitRelativeFrame_8f84f1568afeba4e] = env->getMethodID(cls, "toOrbitRelativeFrame", "()Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");
          mids$[mid_valueOf_60012f35de3d5983] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/LOFType;");
          mids$[mid_values_021586431706f290] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/LOFType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EQW = new LOFType(env->getStaticObjectField(cls, "EQW", "Lorg/orekit/frames/LOFType;"));
          LVLH = new LOFType(env->getStaticObjectField(cls, "LVLH", "Lorg/orekit/frames/LOFType;"));
          LVLH_CCSDS = new LOFType(env->getStaticObjectField(cls, "LVLH_CCSDS", "Lorg/orekit/frames/LOFType;"));
          LVLH_CCSDS_INERTIAL = new LOFType(env->getStaticObjectField(cls, "LVLH_CCSDS_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          LVLH_INERTIAL = new LOFType(env->getStaticObjectField(cls, "LVLH_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          NTW = new LOFType(env->getStaticObjectField(cls, "NTW", "Lorg/orekit/frames/LOFType;"));
          NTW_INERTIAL = new LOFType(env->getStaticObjectField(cls, "NTW_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          QSW = new LOFType(env->getStaticObjectField(cls, "QSW", "Lorg/orekit/frames/LOFType;"));
          QSW_INERTIAL = new LOFType(env->getStaticObjectField(cls, "QSW_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          TNW = new LOFType(env->getStaticObjectField(cls, "TNW", "Lorg/orekit/frames/LOFType;"));
          TNW_INERTIAL = new LOFType(env->getStaticObjectField(cls, "TNW_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          VNC = new LOFType(env->getStaticObjectField(cls, "VNC", "Lorg/orekit/frames/LOFType;"));
          VNC_INERTIAL = new LOFType(env->getStaticObjectField(cls, "VNC_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          VVLH = new LOFType(env->getStaticObjectField(cls, "VVLH", "Lorg/orekit/frames/LOFType;"));
          VVLH_INERTIAL = new LOFType(env->getStaticObjectField(cls, "VVLH_INERTIAL", "Lorg/orekit/frames/LOFType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LOFType::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOFType::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_8b424804999938a4], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOFType::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_9b71bf39454b4a07], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOFType::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_352d2666b9e583bd], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOFType::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_1022f468fb3d1015], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOFType::rotationFromLOF(const LOFType & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_8d5767b4634d801e], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOFType::rotationFromLOF(const ::org::hipparchus::Field & a0, const LOFType & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_6bc33cb92fb35718], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame LOFType::toOrbitRelativeFrame() const
      {
        return ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame(env->callObjectMethod(this$, mids$[mid_toOrbitRelativeFrame_8f84f1568afeba4e]));
      }

      LOFType LOFType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LOFType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_60012f35de3d5983], a0.this$));
      }

      JArray< LOFType > LOFType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LOFType >(env->callStaticObjectMethod(cls, mids$[mid_values_021586431706f290]));
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
      static PyObject *t_LOFType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOFType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOFType_of_(t_LOFType *self, PyObject *args);
      static PyObject *t_LOFType_getName(t_LOFType *self);
      static PyObject *t_LOFType_rotationFromInertial(t_LOFType *self, PyObject *args);
      static PyObject *t_LOFType_rotationFromLOF(t_LOFType *self, PyObject *args);
      static PyObject *t_LOFType_toOrbitRelativeFrame(t_LOFType *self);
      static PyObject *t_LOFType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LOFType_values(PyTypeObject *type);
      static PyObject *t_LOFType_get__name(t_LOFType *self, void *data);
      static PyObject *t_LOFType_get__parameters_(t_LOFType *self, void *data);
      static PyGetSetDef t_LOFType__fields_[] = {
        DECLARE_GET_FIELD(t_LOFType, name),
        DECLARE_GET_FIELD(t_LOFType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LOFType__methods_[] = {
        DECLARE_METHOD(t_LOFType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOFType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOFType, of_, METH_VARARGS),
        DECLARE_METHOD(t_LOFType, getName, METH_NOARGS),
        DECLARE_METHOD(t_LOFType, rotationFromInertial, METH_VARARGS),
        DECLARE_METHOD(t_LOFType, rotationFromLOF, METH_VARARGS),
        DECLARE_METHOD(t_LOFType, toOrbitRelativeFrame, METH_NOARGS),
        DECLARE_METHOD(t_LOFType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LOFType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LOFType)[] = {
        { Py_tp_methods, t_LOFType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LOFType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LOFType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LOFType, t_LOFType, LOFType);
      PyObject *t_LOFType::wrap_Object(const LOFType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LOFType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LOFType *self = (t_LOFType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LOFType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LOFType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LOFType *self = (t_LOFType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LOFType::install(PyObject *module)
      {
        installType(&PY_TYPE(LOFType), &PY_TYPE_DEF(LOFType), module, "LOFType", 0);
      }

      void t_LOFType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "class_", make_descriptor(LOFType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "wrapfn_", make_descriptor(t_LOFType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "boxfn_", make_descriptor(boxObject));
        env->getClass(LOFType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "EQW", make_descriptor(t_LOFType::wrap_Object(*LOFType::EQW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH_CCSDS", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH_CCSDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH_CCSDS_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH_CCSDS_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "LVLH_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::LVLH_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "NTW", make_descriptor(t_LOFType::wrap_Object(*LOFType::NTW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "NTW_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::NTW_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "QSW", make_descriptor(t_LOFType::wrap_Object(*LOFType::QSW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "QSW_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::QSW_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "TNW", make_descriptor(t_LOFType::wrap_Object(*LOFType::TNW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "TNW_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::TNW_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VNC", make_descriptor(t_LOFType::wrap_Object(*LOFType::VNC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VNC_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::VNC_INERTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VVLH", make_descriptor(t_LOFType::wrap_Object(*LOFType::VVLH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOFType), "VVLH_INERTIAL", make_descriptor(t_LOFType::wrap_Object(*LOFType::VVLH_INERTIAL)));
      }

      static PyObject *t_LOFType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LOFType::initializeClass, 1)))
          return NULL;
        return t_LOFType::wrap_Object(LOFType(((t_LOFType *) arg)->object.this$));
      }
      static PyObject *t_LOFType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LOFType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LOFType_of_(t_LOFType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LOFType_getName(t_LOFType *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_LOFType_rotationFromInertial(t_LOFType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
        return NULL;
      }

      static PyObject *t_LOFType_rotationFromLOF(t_LOFType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            LOFType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "Kk", LOFType::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, t_LOFType::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            LOFType a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, LOFType::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, t_LOFType::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromLOF", args);
        return NULL;
      }

      static PyObject *t_LOFType_toOrbitRelativeFrame(t_LOFType *self)
      {
        ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.toOrbitRelativeFrame());
        return ::org::orekit::files::ccsds::definitions::t_OrbitRelativeFrame::wrap_Object(result);
      }

      static PyObject *t_LOFType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LOFType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::LOFType::valueOf(a0));
          return t_LOFType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LOFType_values(PyTypeObject *type)
      {
        JArray< LOFType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::LOFType::values());
        return JArray<jobject>(result.this$).wrap(t_LOFType::wrap_jobject);
      }
      static PyObject *t_LOFType_get__parameters_(t_LOFType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LOFType_get__name(t_LOFType *self, void *data)
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
#include "org/hipparchus/geometry/LocalizedGeometryFormats.h"
#include "java/util/Locale.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/LocalizedGeometryFormats.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *LocalizedGeometryFormats::class$ = NULL;
      jmethodID *LocalizedGeometryFormats::mids$ = NULL;
      bool LocalizedGeometryFormats::live$ = false;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CLOSE_VERTICES = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CROSSING_BOUNDARY_LOOPS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::EDGE_CONNECTED_TO_ONE_FACET = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::FACET_ORIENTATION_MISMATCH = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::FACET_WITH_SEVERAL_BOUNDARY_LOOPS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::INCONSISTENT_STATE_AT_2_PI_WRAPPING = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::INVALID_ROTATION_ORDER_NAME = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NON_INVERTIBLE_TRANSFORM = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NOT_CONVEX = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NOT_CONVEX_HYPERPLANES = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NOT_SUPPORTED_IN_DIMENSION_N = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::OUTLINE_BOUNDARY_LOOP_OPEN = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::OUT_OF_PLANE = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::ROTATION_MATRIX_DIMENSIONS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::TOO_SMALL_TOLERANCE = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::UNABLE_TO_ORTHOGONOLIZE_MATRIX = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_AXIS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR = NULL;

      jclass LocalizedGeometryFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/LocalizedGeometryFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_4b51060c6b7ea981] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_3cffd47377eca18a] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_ceb47c6cc8ab06f0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/LocalizedGeometryFormats;");
          mids$[mid_values_cdbb912e532cf4f9] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/LocalizedGeometryFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          CLOSE_VERTICES = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CLOSE_VERTICES", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          CROSSING_BOUNDARY_LOOPS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CROSSING_BOUNDARY_LOOPS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          EDGE_CONNECTED_TO_ONE_FACET = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "EDGE_CONNECTED_TO_ONE_FACET", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          FACET_ORIENTATION_MISMATCH = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "FACET_ORIENTATION_MISMATCH", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          FACET_WITH_SEVERAL_BOUNDARY_LOOPS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "FACET_WITH_SEVERAL_BOUNDARY_LOOPS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          INCONSISTENT_STATE_AT_2_PI_WRAPPING = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "INCONSISTENT_STATE_AT_2_PI_WRAPPING", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          INVALID_ROTATION_ORDER_NAME = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "INVALID_ROTATION_ORDER_NAME", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NON_INVERTIBLE_TRANSFORM = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NON_INVERTIBLE_TRANSFORM", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NOT_CONVEX = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NOT_CONVEX", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NOT_CONVEX_HYPERPLANES = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NOT_CONVEX_HYPERPLANES", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NOT_SUPPORTED_IN_DIMENSION_N = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NOT_SUPPORTED_IN_DIMENSION_N", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          OUTLINE_BOUNDARY_LOOP_OPEN = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "OUTLINE_BOUNDARY_LOOP_OPEN", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          OUT_OF_PLANE = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "OUT_OF_PLANE", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          ROTATION_MATRIX_DIMENSIONS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "ROTATION_MATRIX_DIMENSIONS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          TOO_SMALL_TOLERANCE = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "TOO_SMALL_TOLERANCE", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          UNABLE_TO_ORTHOGONOLIZE_MATRIX = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "UNABLE_TO_ORTHOGONOLIZE_MATRIX", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          ZERO_NORM_FOR_ROTATION_AXIS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "ZERO_NORM_FOR_ROTATION_AXIS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedGeometryFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_4b51060c6b7ea981], a0.this$));
      }

      ::java::lang::String LocalizedGeometryFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_3cffd47377eca18a]));
      }

      LocalizedGeometryFormats LocalizedGeometryFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedGeometryFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ceb47c6cc8ab06f0], a0.this$));
      }

      JArray< LocalizedGeometryFormats > LocalizedGeometryFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedGeometryFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_cdbb912e532cf4f9]));
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
      static PyObject *t_LocalizedGeometryFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedGeometryFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedGeometryFormats_of_(t_LocalizedGeometryFormats *self, PyObject *args);
      static PyObject *t_LocalizedGeometryFormats_getLocalizedString(t_LocalizedGeometryFormats *self, PyObject *arg);
      static PyObject *t_LocalizedGeometryFormats_getSourceString(t_LocalizedGeometryFormats *self);
      static PyObject *t_LocalizedGeometryFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedGeometryFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedGeometryFormats_get__sourceString(t_LocalizedGeometryFormats *self, void *data);
      static PyObject *t_LocalizedGeometryFormats_get__parameters_(t_LocalizedGeometryFormats *self, void *data);
      static PyGetSetDef t_LocalizedGeometryFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedGeometryFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedGeometryFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedGeometryFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedGeometryFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedGeometryFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedGeometryFormats)[] = {
        { Py_tp_methods, t_LocalizedGeometryFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedGeometryFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedGeometryFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedGeometryFormats, t_LocalizedGeometryFormats, LocalizedGeometryFormats);
      PyObject *t_LocalizedGeometryFormats::wrap_Object(const LocalizedGeometryFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedGeometryFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedGeometryFormats *self = (t_LocalizedGeometryFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedGeometryFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedGeometryFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedGeometryFormats *self = (t_LocalizedGeometryFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedGeometryFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedGeometryFormats), &PY_TYPE_DEF(LocalizedGeometryFormats), module, "LocalizedGeometryFormats", 0);
      }

      void t_LocalizedGeometryFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "class_", make_descriptor(LocalizedGeometryFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "wrapfn_", make_descriptor(t_LocalizedGeometryFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedGeometryFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CLOSE_VERTICES", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CLOSE_VERTICES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CROSSING_BOUNDARY_LOOPS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CROSSING_BOUNDARY_LOOPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "EDGE_CONNECTED_TO_ONE_FACET", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::EDGE_CONNECTED_TO_ONE_FACET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "FACET_ORIENTATION_MISMATCH", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::FACET_ORIENTATION_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "FACET_WITH_SEVERAL_BOUNDARY_LOOPS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::FACET_WITH_SEVERAL_BOUNDARY_LOOPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "INCONSISTENT_STATE_AT_2_PI_WRAPPING", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::INCONSISTENT_STATE_AT_2_PI_WRAPPING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "INVALID_ROTATION_ORDER_NAME", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::INVALID_ROTATION_ORDER_NAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NON_INVERTIBLE_TRANSFORM", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NON_INVERTIBLE_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NOT_CONVEX", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NOT_CONVEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NOT_CONVEX_HYPERPLANES", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NOT_CONVEX_HYPERPLANES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NOT_SUPPORTED_IN_DIMENSION_N", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NOT_SUPPORTED_IN_DIMENSION_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "OUTLINE_BOUNDARY_LOOP_OPEN", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::OUTLINE_BOUNDARY_LOOP_OPEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "OUT_OF_PLANE", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::OUT_OF_PLANE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "ROTATION_MATRIX_DIMENSIONS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::ROTATION_MATRIX_DIMENSIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "TOO_SMALL_TOLERANCE", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::TOO_SMALL_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "UNABLE_TO_ORTHOGONOLIZE_MATRIX", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::UNABLE_TO_ORTHOGONOLIZE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "ZERO_NORM_FOR_ROTATION_AXIS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_AXIS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR)));
      }

      static PyObject *t_LocalizedGeometryFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedGeometryFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedGeometryFormats::wrap_Object(LocalizedGeometryFormats(((t_LocalizedGeometryFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedGeometryFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedGeometryFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedGeometryFormats_of_(t_LocalizedGeometryFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedGeometryFormats_getLocalizedString(t_LocalizedGeometryFormats *self, PyObject *arg)
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

      static PyObject *t_LocalizedGeometryFormats_getSourceString(t_LocalizedGeometryFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedGeometryFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedGeometryFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::geometry::LocalizedGeometryFormats::valueOf(a0));
          return t_LocalizedGeometryFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedGeometryFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedGeometryFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::geometry::LocalizedGeometryFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedGeometryFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedGeometryFormats_get__parameters_(t_LocalizedGeometryFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedGeometryFormats_get__sourceString(t_LocalizedGeometryFormats *self, void *data)
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
#include "org/orekit/estimation/leastsquares/PythonBatchLSObserver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *PythonBatchLSObserver::class$ = NULL;
        jmethodID *PythonBatchLSObserver::mids$ = NULL;
        bool PythonBatchLSObserver::live$ = false;

        jclass PythonBatchLSObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/PythonBatchLSObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_evaluationPerformed_4d8a932bdf6a0b43] = env->getMethodID(cls, "evaluationPerformed", "(II[Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/measurements/EstimationsProvider;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonBatchLSObserver::PythonBatchLSObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonBatchLSObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonBatchLSObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonBatchLSObserver::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      namespace leastsquares {
        static PyObject *t_PythonBatchLSObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonBatchLSObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonBatchLSObserver_init_(t_PythonBatchLSObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonBatchLSObserver_finalize(t_PythonBatchLSObserver *self);
        static PyObject *t_PythonBatchLSObserver_pythonExtension(t_PythonBatchLSObserver *self, PyObject *args);
        static void JNICALL t_PythonBatchLSObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2, jobject a3, jobject a4, jobject a5, jobject a6, jobject a7);
        static void JNICALL t_PythonBatchLSObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonBatchLSObserver_get__self(t_PythonBatchLSObserver *self, void *data);
        static PyGetSetDef t_PythonBatchLSObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonBatchLSObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonBatchLSObserver__methods_[] = {
          DECLARE_METHOD(t_PythonBatchLSObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonBatchLSObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonBatchLSObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonBatchLSObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonBatchLSObserver)[] = {
          { Py_tp_methods, t_PythonBatchLSObserver__methods_ },
          { Py_tp_init, (void *) t_PythonBatchLSObserver_init_ },
          { Py_tp_getset, t_PythonBatchLSObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonBatchLSObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonBatchLSObserver, t_PythonBatchLSObserver, PythonBatchLSObserver);

        void t_PythonBatchLSObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonBatchLSObserver), &PY_TYPE_DEF(PythonBatchLSObserver), module, "PythonBatchLSObserver", 1);
        }

        void t_PythonBatchLSObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBatchLSObserver), "class_", make_descriptor(PythonBatchLSObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBatchLSObserver), "wrapfn_", make_descriptor(t_PythonBatchLSObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBatchLSObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonBatchLSObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "evaluationPerformed", "(II[Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/measurements/EstimationsProvider;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V", (void *) t_PythonBatchLSObserver_evaluationPerformed0 },
            { "pythonDecRef", "()V", (void *) t_PythonBatchLSObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonBatchLSObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonBatchLSObserver::initializeClass, 1)))
            return NULL;
          return t_PythonBatchLSObserver::wrap_Object(PythonBatchLSObserver(((t_PythonBatchLSObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonBatchLSObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonBatchLSObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonBatchLSObserver_init_(t_PythonBatchLSObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonBatchLSObserver object((jobject) NULL);

          INT_CALL(object = PythonBatchLSObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonBatchLSObserver_finalize(t_PythonBatchLSObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonBatchLSObserver_pythonExtension(t_PythonBatchLSObserver *self, PyObject *args)
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

        static void JNICALL t_PythonBatchLSObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2, jobject a3, jobject a4, jobject a5, jobject a6, jobject a7)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonBatchLSObserver::mids$[PythonBatchLSObserver::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::orbits::t_Orbit::wrap_jobject);
          PyObject *o3 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a3));
          PyObject *o4 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a4));
          PyObject *o5 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a5));
          PyObject *o6 = ::org::orekit::estimation::measurements::t_EstimationsProvider::wrap_Object(::org::orekit::estimation::measurements::EstimationsProvider(a6));
          PyObject *o7 = ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(a7));
          PyObject *result = PyObject_CallMethod(obj, "evaluationPerformed", "iiOOOOOO", (int) a0, (int) a1, o2, o3, o4, o5, o6, o7);
          Py_DECREF(o2);
          Py_DECREF(o3);
          Py_DECREF(o4);
          Py_DECREF(o5);
          Py_DECREF(o6);
          Py_DECREF(o7);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonBatchLSObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonBatchLSObserver::mids$[PythonBatchLSObserver::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonBatchLSObserver::mids$[PythonBatchLSObserver::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonBatchLSObserver_get__self(t_PythonBatchLSObserver *self, void *data)
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
#include "org/hipparchus/util/RyuDouble.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *RyuDouble::class$ = NULL;
      jmethodID *RyuDouble::mids$ = NULL;
      bool RyuDouble::live$ = false;
      jint RyuDouble::DEFAULT_HIGH_EXP = (jint) 0;
      jint RyuDouble::DEFAULT_LOW_EXP = (jint) 0;

      jclass RyuDouble::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/RyuDouble");

          mids$ = new jmethodID[max_mid];
          mids$[mid_doubleToString_c03a7791f2fcb1f1] = env->getStaticMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
          mids$[mid_doubleToString_cb74792e9bfe21f0] = env->getStaticMethodID(cls, "doubleToString", "(DII)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_HIGH_EXP = env->getStaticIntField(cls, "DEFAULT_HIGH_EXP");
          DEFAULT_LOW_EXP = env->getStaticIntField(cls, "DEFAULT_LOW_EXP");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String RyuDouble::doubleToString(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_doubleToString_c03a7791f2fcb1f1], a0));
      }

      ::java::lang::String RyuDouble::doubleToString(jdouble a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_doubleToString_cb74792e9bfe21f0], a0, a1, a2));
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
      static PyObject *t_RyuDouble_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RyuDouble_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RyuDouble_doubleToString(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_RyuDouble__methods_[] = {
        DECLARE_METHOD(t_RyuDouble, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RyuDouble, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RyuDouble, doubleToString, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RyuDouble)[] = {
        { Py_tp_methods, t_RyuDouble__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RyuDouble)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RyuDouble, t_RyuDouble, RyuDouble);

      void t_RyuDouble::install(PyObject *module)
      {
        installType(&PY_TYPE(RyuDouble), &PY_TYPE_DEF(RyuDouble), module, "RyuDouble", 0);
      }

      void t_RyuDouble::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "class_", make_descriptor(RyuDouble::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "wrapfn_", make_descriptor(t_RyuDouble::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "boxfn_", make_descriptor(boxObject));
        env->getClass(RyuDouble::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "DEFAULT_HIGH_EXP", make_descriptor(RyuDouble::DEFAULT_HIGH_EXP));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "DEFAULT_LOW_EXP", make_descriptor(RyuDouble::DEFAULT_LOW_EXP));
      }

      static PyObject *t_RyuDouble_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RyuDouble::initializeClass, 1)))
          return NULL;
        return t_RyuDouble::wrap_Object(RyuDouble(((t_RyuDouble *) arg)->object.this$));
      }
      static PyObject *t_RyuDouble_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RyuDouble::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RyuDouble_doubleToString(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::RyuDouble::doubleToString(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jint a1;
            jint a2;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::RyuDouble::doubleToString(a0, a1, a2));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError(type, "doubleToString", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenThirdBodyLinear.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *FieldHansenThirdBodyLinear::class$ = NULL;
              jmethodID *FieldHansenThirdBodyLinear::mids$ = NULL;
              bool FieldHansenThirdBodyLinear::live$ = false;

              jclass FieldHansenThirdBodyLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenThirdBodyLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_aa34f9974068bcd4] = env->getMethodID(cls, "<init>", "(IILorg/hipparchus/Field;)V");
                  mids$[mid_computeInitValues_0f27b0249abd6c51] = env->getMethodID(cls, "computeInitValues", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_getDerivative_d7f69d00c9b191e9] = env->getMethodID(cls, "getDerivative", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getValue_d7f69d00c9b191e9] = env->getMethodID(cls, "getValue", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldHansenThirdBodyLinear::FieldHansenThirdBodyLinear(jint a0, jint a1, const ::org::hipparchus::Field & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa34f9974068bcd4, a0, a1, a2.this$)) {}

              void FieldHansenThirdBodyLinear::computeInitValues(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_0f27b0249abd6c51], a0.this$, a1.this$, a2.this$);
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenThirdBodyLinear::getDerivative(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_d7f69d00c9b191e9], a0, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenThirdBodyLinear::getValue(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_d7f69d00c9b191e9], a0, a1.this$));
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_FieldHansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenThirdBodyLinear_of_(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static int t_FieldHansenThirdBodyLinear_init_(t_FieldHansenThirdBodyLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldHansenThirdBodyLinear_computeInitValues(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_FieldHansenThirdBodyLinear_getDerivative(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_FieldHansenThirdBodyLinear_getValue(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_FieldHansenThirdBodyLinear_get__parameters_(t_FieldHansenThirdBodyLinear *self, void *data);
              static PyGetSetDef t_FieldHansenThirdBodyLinear__fields_[] = {
                DECLARE_GET_FIELD(t_FieldHansenThirdBodyLinear, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldHansenThirdBodyLinear__methods_[] = {
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldHansenThirdBodyLinear)[] = {
                { Py_tp_methods, t_FieldHansenThirdBodyLinear__methods_ },
                { Py_tp_init, (void *) t_FieldHansenThirdBodyLinear_init_ },
                { Py_tp_getset, t_FieldHansenThirdBodyLinear__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldHansenThirdBodyLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldHansenThirdBodyLinear, t_FieldHansenThirdBodyLinear, FieldHansenThirdBodyLinear);
              PyObject *t_FieldHansenThirdBodyLinear::wrap_Object(const FieldHansenThirdBodyLinear& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenThirdBodyLinear::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenThirdBodyLinear *self = (t_FieldHansenThirdBodyLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldHansenThirdBodyLinear::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenThirdBodyLinear::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenThirdBodyLinear *self = (t_FieldHansenThirdBodyLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldHansenThirdBodyLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldHansenThirdBodyLinear), &PY_TYPE_DEF(FieldHansenThirdBodyLinear), module, "FieldHansenThirdBodyLinear", 0);
              }

              void t_FieldHansenThirdBodyLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenThirdBodyLinear), "class_", make_descriptor(FieldHansenThirdBodyLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenThirdBodyLinear), "wrapfn_", make_descriptor(t_FieldHansenThirdBodyLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenThirdBodyLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldHansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldHansenThirdBodyLinear::initializeClass, 1)))
                  return NULL;
                return t_FieldHansenThirdBodyLinear::wrap_Object(FieldHansenThirdBodyLinear(((t_FieldHansenThirdBodyLinear *) arg)->object.this$));
              }
              static PyObject *t_FieldHansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldHansenThirdBodyLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_of_(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldHansenThirdBodyLinear_init_(t_FieldHansenThirdBodyLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::Field a2((jobject) NULL);
                PyTypeObject **p2;
                FieldHansenThirdBodyLinear object((jobject) NULL);

                if (!parseArgs(args, "IIK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
                {
                  INT_CALL(object = FieldHansenThirdBodyLinear(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_computeInitValues(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_getDerivative(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_getValue(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
              static PyObject *t_FieldHansenThirdBodyLinear_get__parameters_(t_FieldHansenThirdBodyLinear *self, void *data)
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
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldEventHandler::class$ = NULL;
          jmethodID *FieldEventHandler::mids$ = NULL;
          bool FieldEventHandler::live$ = false;

          jclass FieldEventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldEventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_eventOccurred_061886b33964a9af] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_init_3ea56aaf691449ae] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/events/FieldEventDetector;)V");
              mids$[mid_resetState_ceb1c025df8e35c2] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::ode::events::Action FieldEventHandler::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_061886b33964a9af], a0.this$, a1.this$, a2));
          }

          void FieldEventHandler::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::propagation::events::FieldEventDetector & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_init_3ea56aaf691449ae], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldEventHandler::resetState(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1) const
          {
            return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_ceb1c025df8e35c2], a0.this$, a1.this$));
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
          static PyObject *t_FieldEventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldEventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldEventHandler_of_(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_eventOccurred(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_init(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_resetState(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_get__parameters_(t_FieldEventHandler *self, void *data);
          static PyGetSetDef t_FieldEventHandler__fields_[] = {
            DECLARE_GET_FIELD(t_FieldEventHandler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldEventHandler__methods_[] = {
            DECLARE_METHOD(t_FieldEventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldEventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldEventHandler, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldEventHandler, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_FieldEventHandler, init, METH_VARARGS),
            DECLARE_METHOD(t_FieldEventHandler, resetState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldEventHandler)[] = {
            { Py_tp_methods, t_FieldEventHandler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldEventHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldEventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldEventHandler, t_FieldEventHandler, FieldEventHandler);
          PyObject *t_FieldEventHandler::wrap_Object(const FieldEventHandler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldEventHandler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldEventHandler *self = (t_FieldEventHandler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldEventHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldEventHandler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldEventHandler *self = (t_FieldEventHandler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldEventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldEventHandler), &PY_TYPE_DEF(FieldEventHandler), module, "FieldEventHandler", 0);
          }

          void t_FieldEventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventHandler), "class_", make_descriptor(FieldEventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventHandler), "wrapfn_", make_descriptor(t_FieldEventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventHandler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldEventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldEventHandler::initializeClass, 1)))
              return NULL;
            return t_FieldEventHandler::wrap_Object(FieldEventHandler(((t_FieldEventHandler *) arg)->object.this$));
          }
          static PyObject *t_FieldEventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldEventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldEventHandler_of_(t_FieldEventHandler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldEventHandler_eventOccurred(t_FieldEventHandler *self, PyObject *args)
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

          static PyObject *t_FieldEventHandler_init(t_FieldEventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::events::FieldEventDetector a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "KKK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
            {
              OBJ_CALL(self->object.init(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_FieldEventHandler_resetState(t_FieldEventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.resetState(a0, a1));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", args);
            return NULL;
          }
          static PyObject *t_FieldEventHandler_get__parameters_(t_FieldEventHandler *self, void *data)
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
#include "org/hipparchus/fraction/FractionField.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/fraction/FractionField.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *FractionField::class$ = NULL;
      jmethodID *FractionField::mids$ = NULL;
      bool FractionField::live$ = false;

      jclass FractionField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/FractionField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_1840755d7868de7a] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/fraction/FractionField;");
          mids$[mid_getOne_78ed58163a805805] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_78ed58163a805805] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean FractionField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      FractionField FractionField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return FractionField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_1840755d7868de7a]));
      }

      ::org::hipparchus::fraction::Fraction FractionField::getOne() const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getOne_78ed58163a805805]));
      }

      ::java::lang::Class FractionField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
      }

      ::org::hipparchus::fraction::Fraction FractionField::getZero() const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getZero_78ed58163a805805]));
      }

      jint FractionField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
      static PyObject *t_FractionField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionField_equals(t_FractionField *self, PyObject *args);
      static PyObject *t_FractionField_getInstance(PyTypeObject *type);
      static PyObject *t_FractionField_getOne(t_FractionField *self);
      static PyObject *t_FractionField_getRuntimeClass(t_FractionField *self);
      static PyObject *t_FractionField_getZero(t_FractionField *self);
      static PyObject *t_FractionField_hashCode(t_FractionField *self, PyObject *args);
      static PyObject *t_FractionField_get__instance(t_FractionField *self, void *data);
      static PyObject *t_FractionField_get__one(t_FractionField *self, void *data);
      static PyObject *t_FractionField_get__runtimeClass(t_FractionField *self, void *data);
      static PyObject *t_FractionField_get__zero(t_FractionField *self, void *data);
      static PyGetSetDef t_FractionField__fields_[] = {
        DECLARE_GET_FIELD(t_FractionField, instance),
        DECLARE_GET_FIELD(t_FractionField, one),
        DECLARE_GET_FIELD(t_FractionField, runtimeClass),
        DECLARE_GET_FIELD(t_FractionField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FractionField__methods_[] = {
        DECLARE_METHOD(t_FractionField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionField, equals, METH_VARARGS),
        DECLARE_METHOD(t_FractionField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_FractionField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_FractionField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_FractionField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FractionField)[] = {
        { Py_tp_methods, t_FractionField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FractionField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FractionField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FractionField, t_FractionField, FractionField);

      void t_FractionField::install(PyObject *module)
      {
        installType(&PY_TYPE(FractionField), &PY_TYPE_DEF(FractionField), module, "FractionField", 0);
      }

      void t_FractionField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionField), "class_", make_descriptor(FractionField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionField), "wrapfn_", make_descriptor(t_FractionField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FractionField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FractionField::initializeClass, 1)))
          return NULL;
        return t_FractionField::wrap_Object(FractionField(((t_FractionField *) arg)->object.this$));
      }
      static PyObject *t_FractionField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FractionField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FractionField_equals(t_FractionField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FractionField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FractionField_getInstance(PyTypeObject *type)
      {
        FractionField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fraction::FractionField::getInstance());
        return t_FractionField::wrap_Object(result);
      }

      static PyObject *t_FractionField_getOne(t_FractionField *self)
      {
        ::org::hipparchus::fraction::Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
      }

      static PyObject *t_FractionField_getRuntimeClass(t_FractionField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(Fraction));
      }

      static PyObject *t_FractionField_getZero(t_FractionField *self)
      {
        ::org::hipparchus::fraction::Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
      }

      static PyObject *t_FractionField_hashCode(t_FractionField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FractionField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FractionField_get__instance(t_FractionField *self, void *data)
      {
        FractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_FractionField::wrap_Object(value);
      }

      static PyObject *t_FractionField_get__one(t_FractionField *self, void *data)
      {
        ::org::hipparchus::fraction::Fraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
      }

      static PyObject *t_FractionField_get__runtimeClass(t_FractionField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_FractionField_get__zero(t_FractionField *self, void *data)
      {
        ::org::hipparchus::fraction::Fraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/AkimaSplineInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *AkimaSplineInterpolator::class$ = NULL;
        jmethodID *AkimaSplineInterpolator::mids$ = NULL;
        bool AkimaSplineInterpolator::live$ = false;

        jclass AkimaSplineInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/AkimaSplineInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ed2afdb8506b9742] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_interpolate_c07bcf24349320f1] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_interpolate_9d9c0e5a6bca3c07] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AkimaSplineInterpolator::AkimaSplineInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        AkimaSplineInterpolator::AkimaSplineInterpolator(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed2afdb8506b9742, a0)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction AkimaSplineInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_c07bcf24349320f1], a0.this$, a1.this$));
        }

        ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction AkimaSplineInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_9d9c0e5a6bca3c07], a0.this$, a1.this$));
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
        static PyObject *t_AkimaSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AkimaSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AkimaSplineInterpolator_init_(t_AkimaSplineInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AkimaSplineInterpolator_interpolate(t_AkimaSplineInterpolator *self, PyObject *args);

        static PyMethodDef t_AkimaSplineInterpolator__methods_[] = {
          DECLARE_METHOD(t_AkimaSplineInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AkimaSplineInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AkimaSplineInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AkimaSplineInterpolator)[] = {
          { Py_tp_methods, t_AkimaSplineInterpolator__methods_ },
          { Py_tp_init, (void *) t_AkimaSplineInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AkimaSplineInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AkimaSplineInterpolator, t_AkimaSplineInterpolator, AkimaSplineInterpolator);

        void t_AkimaSplineInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(AkimaSplineInterpolator), &PY_TYPE_DEF(AkimaSplineInterpolator), module, "AkimaSplineInterpolator", 0);
        }

        void t_AkimaSplineInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AkimaSplineInterpolator), "class_", make_descriptor(AkimaSplineInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AkimaSplineInterpolator), "wrapfn_", make_descriptor(t_AkimaSplineInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AkimaSplineInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AkimaSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AkimaSplineInterpolator::initializeClass, 1)))
            return NULL;
          return t_AkimaSplineInterpolator::wrap_Object(AkimaSplineInterpolator(((t_AkimaSplineInterpolator *) arg)->object.this$));
        }
        static PyObject *t_AkimaSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AkimaSplineInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AkimaSplineInterpolator_init_(t_AkimaSplineInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              AkimaSplineInterpolator object((jobject) NULL);

              INT_CALL(object = AkimaSplineInterpolator());
              self->object = object;
              break;
            }
           case 1:
            {
              jboolean a0;
              AkimaSplineInterpolator object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = AkimaSplineInterpolator(a0));
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

        static PyObject *t_AkimaSplineInterpolator_interpolate(t_AkimaSplineInterpolator *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CartesianCovarianceKey::class$ = NULL;
            jmethodID *CartesianCovarianceKey::mids$ = NULL;
            bool CartesianCovarianceKey::live$ = false;
            CartesianCovarianceKey *CartesianCovarianceKey::COMMENT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::COV_REF_FRAME = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_X_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_DOT_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CX_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_X_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_Y_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_DOT_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CY_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_X_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Y_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_DOT_Z_DOT = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_X = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_Y = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::CZ_Z = NULL;
            CartesianCovarianceKey *CartesianCovarianceKey::EPOCH = NULL;

            jclass CartesianCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_d8dcf7eb522b9162] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;)Z");
                mids$[mid_valueOf_64282ab4bf6ba94d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;");
                mids$[mid_values_25e022cc654bac02] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                COV_REF_FRAME = new CartesianCovarianceKey(env->getStaticObjectField(cls, "COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_X_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_DOT_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_DOT_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CX_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CX_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_X_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_Y_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_Y_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_DOT_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_DOT_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CY_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CY_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_X_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Y_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Y_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_DOT_Z_DOT = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_DOT_Z_DOT", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_X = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_X", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_Y = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_Y", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                CZ_Z = new CartesianCovarianceKey(env->getStaticObjectField(cls, "CZ_Z", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                EPOCH = new CartesianCovarianceKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CartesianCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_d8dcf7eb522b9162], a0.this$, a1.this$, a2.this$);
            }

            CartesianCovarianceKey CartesianCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CartesianCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_64282ab4bf6ba94d], a0.this$));
            }

            JArray< CartesianCovarianceKey > CartesianCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CartesianCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_25e022cc654bac02]));
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
            static PyObject *t_CartesianCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovarianceKey_of_(t_CartesianCovarianceKey *self, PyObject *args);
            static PyObject *t_CartesianCovarianceKey_process(t_CartesianCovarianceKey *self, PyObject *args);
            static PyObject *t_CartesianCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CartesianCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_CartesianCovarianceKey_get__parameters_(t_CartesianCovarianceKey *self, void *data);
            static PyGetSetDef t_CartesianCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_CartesianCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CartesianCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_CartesianCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CartesianCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CartesianCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CartesianCovarianceKey)[] = {
              { Py_tp_methods, t_CartesianCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CartesianCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CartesianCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CartesianCovarianceKey, t_CartesianCovarianceKey, CartesianCovarianceKey);
            PyObject *t_CartesianCovarianceKey::wrap_Object(const CartesianCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CartesianCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CartesianCovarianceKey *self = (t_CartesianCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CartesianCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CartesianCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CartesianCovarianceKey *self = (t_CartesianCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CartesianCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CartesianCovarianceKey), &PY_TYPE_DEF(CartesianCovarianceKey), module, "CartesianCovarianceKey", 0);
            }

            void t_CartesianCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "class_", make_descriptor(CartesianCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "wrapfn_", make_descriptor(t_CartesianCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CartesianCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "COMMENT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "COV_REF_FRAME", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::COV_REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_X_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_DOT_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_DOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CX_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CX_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_X_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_Y_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_DOT_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_DOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CY_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CY_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_X_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Y_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_DOT_Z_DOT", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_DOT_Z_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_X", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_Y", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "CZ_Z", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::CZ_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceKey), "EPOCH", make_descriptor(t_CartesianCovarianceKey::wrap_Object(*CartesianCovarianceKey::EPOCH)));
            }

            static PyObject *t_CartesianCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CartesianCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_CartesianCovarianceKey::wrap_Object(CartesianCovarianceKey(((t_CartesianCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_CartesianCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CartesianCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CartesianCovarianceKey_of_(t_CartesianCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CartesianCovarianceKey_process(t_CartesianCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CartesianCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CartesianCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CartesianCovarianceKey::valueOf(a0));
                return t_CartesianCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CartesianCovarianceKey_values(PyTypeObject *type)
            {
              JArray< CartesianCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CartesianCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_CartesianCovarianceKey::wrap_jobject);
            }
            static PyObject *t_CartesianCovarianceKey_get__parameters_(t_CartesianCovarianceKey *self, void *data)
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
#include "org/hipparchus/stat/interval/ConfidenceInterval.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {

        ::java::lang::Class *ConfidenceInterval::class$ = NULL;
        jmethodID *ConfidenceInterval::mids$ = NULL;
        bool ConfidenceInterval::live$ = false;

        jclass ConfidenceInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/interval/ConfidenceInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getConfidenceLevel_557b8123390d8d0c] = env->getMethodID(cls, "getConfidenceLevel", "()D");
            mids$[mid_getLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getLowerBound", "()D");
            mids$[mid_getUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getUpperBound", "()D");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConfidenceInterval::ConfidenceInterval(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        jdouble ConfidenceInterval::getConfidenceLevel() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getConfidenceLevel_557b8123390d8d0c]);
        }

        jdouble ConfidenceInterval::getLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLowerBound_557b8123390d8d0c]);
        }

        jdouble ConfidenceInterval::getUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUpperBound_557b8123390d8d0c]);
        }

        ::java::lang::String ConfidenceInterval::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      namespace interval {
        static PyObject *t_ConfidenceInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConfidenceInterval_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConfidenceInterval_init_(t_ConfidenceInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConfidenceInterval_getConfidenceLevel(t_ConfidenceInterval *self);
        static PyObject *t_ConfidenceInterval_getLowerBound(t_ConfidenceInterval *self);
        static PyObject *t_ConfidenceInterval_getUpperBound(t_ConfidenceInterval *self);
        static PyObject *t_ConfidenceInterval_toString(t_ConfidenceInterval *self, PyObject *args);
        static PyObject *t_ConfidenceInterval_get__confidenceLevel(t_ConfidenceInterval *self, void *data);
        static PyObject *t_ConfidenceInterval_get__lowerBound(t_ConfidenceInterval *self, void *data);
        static PyObject *t_ConfidenceInterval_get__upperBound(t_ConfidenceInterval *self, void *data);
        static PyGetSetDef t_ConfidenceInterval__fields_[] = {
          DECLARE_GET_FIELD(t_ConfidenceInterval, confidenceLevel),
          DECLARE_GET_FIELD(t_ConfidenceInterval, lowerBound),
          DECLARE_GET_FIELD(t_ConfidenceInterval, upperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConfidenceInterval__methods_[] = {
          DECLARE_METHOD(t_ConfidenceInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfidenceInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfidenceInterval, getConfidenceLevel, METH_NOARGS),
          DECLARE_METHOD(t_ConfidenceInterval, getLowerBound, METH_NOARGS),
          DECLARE_METHOD(t_ConfidenceInterval, getUpperBound, METH_NOARGS),
          DECLARE_METHOD(t_ConfidenceInterval, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConfidenceInterval)[] = {
          { Py_tp_methods, t_ConfidenceInterval__methods_ },
          { Py_tp_init, (void *) t_ConfidenceInterval_init_ },
          { Py_tp_getset, t_ConfidenceInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConfidenceInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConfidenceInterval, t_ConfidenceInterval, ConfidenceInterval);

        void t_ConfidenceInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(ConfidenceInterval), &PY_TYPE_DEF(ConfidenceInterval), module, "ConfidenceInterval", 0);
        }

        void t_ConfidenceInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfidenceInterval), "class_", make_descriptor(ConfidenceInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfidenceInterval), "wrapfn_", make_descriptor(t_ConfidenceInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfidenceInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConfidenceInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConfidenceInterval::initializeClass, 1)))
            return NULL;
          return t_ConfidenceInterval::wrap_Object(ConfidenceInterval(((t_ConfidenceInterval *) arg)->object.this$));
        }
        static PyObject *t_ConfidenceInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConfidenceInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConfidenceInterval_init_(t_ConfidenceInterval *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          ConfidenceInterval object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = ConfidenceInterval(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConfidenceInterval_getConfidenceLevel(t_ConfidenceInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getConfidenceLevel());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConfidenceInterval_getLowerBound(t_ConfidenceInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLowerBound());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConfidenceInterval_getUpperBound(t_ConfidenceInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getUpperBound());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConfidenceInterval_toString(t_ConfidenceInterval *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(ConfidenceInterval), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_ConfidenceInterval_get__confidenceLevel(t_ConfidenceInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getConfidenceLevel());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConfidenceInterval_get__lowerBound(t_ConfidenceInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConfidenceInterval_get__upperBound(t_ConfidenceInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/Erf.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *Erf::class$ = NULL;
      jmethodID *Erf::mids$ = NULL;
      bool Erf::live$ = false;

      jclass Erf::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/Erf");

          mids$ = new jmethodID[max_mid];
          mids$[mid_erf_7e960cd6eee376d8] = env->getStaticMethodID(cls, "erf", "(D)D");
          mids$[mid_erf_6672ad854985cb64] = env->getStaticMethodID(cls, "erf", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erf_2268d18be49a6087] = env->getStaticMethodID(cls, "erf", "(DD)D");
          mids$[mid_erf_d5f58731bcb8a011] = env->getStaticMethodID(cls, "erf", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erfInv_7e960cd6eee376d8] = env->getStaticMethodID(cls, "erfInv", "(D)D");
          mids$[mid_erfInv_6672ad854985cb64] = env->getStaticMethodID(cls, "erfInv", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erfc_7e960cd6eee376d8] = env->getStaticMethodID(cls, "erfc", "(D)D");
          mids$[mid_erfc_6672ad854985cb64] = env->getStaticMethodID(cls, "erfc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erfcInv_7e960cd6eee376d8] = env->getStaticMethodID(cls, "erfcInv", "(D)D");
          mids$[mid_erfcInv_6672ad854985cb64] = env->getStaticMethodID(cls, "erfcInv", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Erf::erf(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erf_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erf(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erf_6672ad854985cb64], a0.this$));
      }

      jdouble Erf::erf(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erf_2268d18be49a6087], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erf(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erf_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      jdouble Erf::erfInv(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erfInv_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erfInv(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erfInv_6672ad854985cb64], a0.this$));
      }

      jdouble Erf::erfc(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erfc_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erfc(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erfc_6672ad854985cb64], a0.this$));
      }

      jdouble Erf::erfcInv(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erfcInv_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erfcInv(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erfcInv_6672ad854985cb64], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace special {
      static PyObject *t_Erf_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Erf_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Erf_erf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Erf_erfInv(PyTypeObject *type, PyObject *args);
      static PyObject *t_Erf_erfc(PyTypeObject *type, PyObject *args);
      static PyObject *t_Erf_erfcInv(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Erf__methods_[] = {
        DECLARE_METHOD(t_Erf, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Erf, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Erf, erf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Erf, erfInv, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Erf, erfc, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Erf, erfcInv, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Erf)[] = {
        { Py_tp_methods, t_Erf__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Erf)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Erf, t_Erf, Erf);

      void t_Erf::install(PyObject *module)
      {
        installType(&PY_TYPE(Erf), &PY_TYPE_DEF(Erf), module, "Erf", 0);
      }

      void t_Erf::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Erf), "class_", make_descriptor(Erf::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Erf), "wrapfn_", make_descriptor(t_Erf::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Erf), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Erf_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Erf::initializeClass, 1)))
          return NULL;
        return t_Erf::wrap_Object(Erf(((t_Erf *) arg)->object.this$));
      }
      static PyObject *t_Erf_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Erf::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Erf_erf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0));
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
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0, a1));
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
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erf", args);
        return NULL;
      }

      static PyObject *t_Erf_erfInv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfInv(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfInv(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erfInv", args);
        return NULL;
      }

      static PyObject *t_Erf_erfc(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfc(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfc(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erfc", args);
        return NULL;
      }

      static PyObject *t_Erf_erfcInv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfcInv(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfcInv(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erfcInv", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *WeightedEvaluation::class$ = NULL;
        jmethodID *WeightedEvaluation::mids$ = NULL;
        bool WeightedEvaluation::live$ = false;

        jclass WeightedEvaluation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/WeightedEvaluation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluate_628a76297e217f13] = env->getMethodID(cls, "evaluate", "([D[D)D");
            mids$[mid_evaluate_579f1672894f464a] = env->getMethodID(cls, "evaluate", "([D[DII)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble WeightedEvaluation::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble WeightedEvaluation::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_579f1672894f464a], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_WeightedEvaluation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WeightedEvaluation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WeightedEvaluation_evaluate(t_WeightedEvaluation *self, PyObject *args);

        static PyMethodDef t_WeightedEvaluation__methods_[] = {
          DECLARE_METHOD(t_WeightedEvaluation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeightedEvaluation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeightedEvaluation, evaluate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WeightedEvaluation)[] = {
          { Py_tp_methods, t_WeightedEvaluation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WeightedEvaluation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(WeightedEvaluation, t_WeightedEvaluation, WeightedEvaluation);

        void t_WeightedEvaluation::install(PyObject *module)
        {
          installType(&PY_TYPE(WeightedEvaluation), &PY_TYPE_DEF(WeightedEvaluation), module, "WeightedEvaluation", 0);
        }

        void t_WeightedEvaluation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedEvaluation), "class_", make_descriptor(WeightedEvaluation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedEvaluation), "wrapfn_", make_descriptor(t_WeightedEvaluation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedEvaluation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WeightedEvaluation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WeightedEvaluation::initializeClass, 1)))
            return NULL;
          return t_WeightedEvaluation::wrap_Object(WeightedEvaluation(((t_WeightedEvaluation *) arg)->object.this$));
        }
        static PyObject *t_WeightedEvaluation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WeightedEvaluation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_WeightedEvaluation_evaluate(t_WeightedEvaluation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.evaluate(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jint a3;
              jdouble result;

              if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "evaluate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Asin.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Asin::class$ = NULL;
        jmethodID *Asin::mids$ = NULL;
        bool Asin::live$ = false;

        jclass Asin::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Asin");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Asin::Asin() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Asin::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Asin::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
        static PyObject *t_Asin_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Asin_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Asin_init_(t_Asin *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Asin_value(t_Asin *self, PyObject *args);

        static PyMethodDef t_Asin__methods_[] = {
          DECLARE_METHOD(t_Asin, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asin, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asin, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Asin)[] = {
          { Py_tp_methods, t_Asin__methods_ },
          { Py_tp_init, (void *) t_Asin_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Asin)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Asin, t_Asin, Asin);

        void t_Asin::install(PyObject *module)
        {
          installType(&PY_TYPE(Asin), &PY_TYPE_DEF(Asin), module, "Asin", 0);
        }

        void t_Asin::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asin), "class_", make_descriptor(Asin::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asin), "wrapfn_", make_descriptor(t_Asin::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asin), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Asin_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Asin::initializeClass, 1)))
            return NULL;
          return t_Asin::wrap_Object(Asin(((t_Asin *) arg)->object.this$));
        }
        static PyObject *t_Asin_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Asin::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Asin_init_(t_Asin *self, PyObject *args, PyObject *kwds)
        {
          Asin object((jobject) NULL);

          INT_CALL(object = Asin());
          self->object = object;

          return 0;
        }

        static PyObject *t_Asin_value(t_Asin *self, PyObject *args)
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
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldRuleFactory::class$ = NULL;
          jmethodID *FieldRuleFactory::mids$ = NULL;
          bool FieldRuleFactory::live$ = false;

          jclass FieldRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getRule_9a5adfb225849173] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::util::Pair FieldRuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_9a5adfb225849173], a0));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_FieldRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRuleFactory_of_(t_FieldRuleFactory *self, PyObject *args);
          static PyObject *t_FieldRuleFactory_getRule(t_FieldRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldRuleFactory_get__parameters_(t_FieldRuleFactory *self, void *data);
          static PyGetSetDef t_FieldRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRuleFactory)[] = {
            { Py_tp_methods, t_FieldRuleFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRuleFactory, t_FieldRuleFactory, FieldRuleFactory);
          PyObject *t_FieldRuleFactory::wrap_Object(const FieldRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRuleFactory *self = (t_FieldRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRuleFactory *self = (t_FieldRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRuleFactory), &PY_TYPE_DEF(FieldRuleFactory), module, "FieldRuleFactory", 0);
          }

          void t_FieldRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRuleFactory), "class_", make_descriptor(FieldRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRuleFactory), "wrapfn_", make_descriptor(t_FieldRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldRuleFactory::wrap_Object(FieldRuleFactory(((t_FieldRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRuleFactory_of_(t_FieldRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldRuleFactory_getRule(t_FieldRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
          static PyObject *t_FieldRuleFactory_get__parameters_(t_FieldRuleFactory *self, void *data)
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
#include "org/hipparchus/analysis/integration/FieldTrapezoidIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldTrapezoidIntegrator::class$ = NULL;
        jmethodID *FieldTrapezoidIntegrator::mids$ = NULL;
        bool FieldTrapezoidIntegrator::live$ = false;
        jint FieldTrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldTrapezoidIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldTrapezoidIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_a9ccb012d4cb48bd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_54078aff55a90bb9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_613c8f46c659f636] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRAPEZOID_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "TRAPEZOID_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldTrapezoidIntegrator::FieldTrapezoidIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

        FieldTrapezoidIntegrator::FieldTrapezoidIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a9ccb012d4cb48bd, a0.this$, a1, a2)) {}

        FieldTrapezoidIntegrator::FieldTrapezoidIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_54078aff55a90bb9, a0.this$, a1, a2, a3, a4)) {}
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
        static PyObject *t_FieldTrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTrapezoidIntegrator_of_(t_FieldTrapezoidIntegrator *self, PyObject *args);
        static int t_FieldTrapezoidIntegrator_init_(t_FieldTrapezoidIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldTrapezoidIntegrator_get__parameters_(t_FieldTrapezoidIntegrator *self, void *data);
        static PyGetSetDef t_FieldTrapezoidIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldTrapezoidIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldTrapezoidIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldTrapezoidIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTrapezoidIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTrapezoidIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldTrapezoidIntegrator)[] = {
          { Py_tp_methods, t_FieldTrapezoidIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldTrapezoidIntegrator_init_ },
          { Py_tp_getset, t_FieldTrapezoidIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldTrapezoidIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldTrapezoidIntegrator, t_FieldTrapezoidIntegrator, FieldTrapezoidIntegrator);
        PyObject *t_FieldTrapezoidIntegrator::wrap_Object(const FieldTrapezoidIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTrapezoidIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTrapezoidIntegrator *self = (t_FieldTrapezoidIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldTrapezoidIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTrapezoidIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTrapezoidIntegrator *self = (t_FieldTrapezoidIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldTrapezoidIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldTrapezoidIntegrator), &PY_TYPE_DEF(FieldTrapezoidIntegrator), module, "FieldTrapezoidIntegrator", 0);
        }

        void t_FieldTrapezoidIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "class_", make_descriptor(FieldTrapezoidIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "wrapfn_", make_descriptor(t_FieldTrapezoidIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldTrapezoidIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "TRAPEZOID_MAX_ITERATIONS_COUNT", make_descriptor(FieldTrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldTrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldTrapezoidIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldTrapezoidIntegrator::wrap_Object(FieldTrapezoidIntegrator(((t_FieldTrapezoidIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldTrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldTrapezoidIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldTrapezoidIntegrator_of_(t_FieldTrapezoidIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldTrapezoidIntegrator_init_(t_FieldTrapezoidIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldTrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldTrapezoidIntegrator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              FieldTrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldTrapezoidIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              FieldTrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldTrapezoidIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldTrapezoidIntegrator_get__parameters_(t_FieldTrapezoidIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTZonalContext.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTZonalContext::class$ = NULL;
            jmethodID *FieldDSSTZonalContext::mids$ = NULL;
            bool FieldDSSTZonalContext::live$ = false;

            jclass FieldDSSTZonalContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTZonalContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getBB_613c8f46c659f636] = env->getMethodID(cls, "getBB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoA_613c8f46c659f636] = env->getMethodID(cls, "getBoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoABpo_613c8f46c659f636] = env->getMethodID(cls, "getBoABpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getCXO2N2A2_613c8f46c659f636] = env->getMethodID(cls, "getCXO2N2A2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHK_613c8f46c659f636] = env->getMethodID(cls, "getHK", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getK2MH2_613c8f46c659f636] = env->getMethodID(cls, "getK2MH2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getK2MH2O2_613c8f46c659f636] = env->getMethodID(cls, "getK2MH2O2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getM2aoA_613c8f46c659f636] = env->getMethodID(cls, "getM2aoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMCo2AB_613c8f46c659f636] = env->getMethodID(cls, "getMCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_613c8f46c659f636] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMuoa_613c8f46c659f636] = env->getMethodID(cls, "getMuoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOON2A2_613c8f46c659f636] = env->getMethodID(cls, "getOON2A2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoAB_613c8f46c659f636] = env->getMethodID(cls, "getOoAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRoa_613c8f46c659f636] = env->getMethodID(cls, "getRoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX_613c8f46c659f636] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX2ON2A2XP1_613c8f46c659f636] = env->getMethodID(cls, "getX2ON2A2XP1", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX3ON2A_613c8f46c659f636] = env->getMethodID(cls, "getX3ON2A", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXON2A2_613c8f46c659f636] = env->getMethodID(cls, "getXON2A2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXX_613c8f46c659f636] = env->getMethodID(cls, "getXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXXX_613c8f46c659f636] = env->getMethodID(cls, "getXXX", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getBB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBB_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getBoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoA_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getBoABpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoABpo_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getCXO2N2A2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCXO2N2A2_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getHK() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHK_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getK2MH2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getK2MH2_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getK2MH2O2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getK2MH2O2_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getM2aoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getM2aoA_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getMCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMCo2AB_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getMuoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMuoa_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getOON2A2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOON2A2_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getOoAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoAB_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getRoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRoa_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getX2ON2A2XP1() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX2ON2A2XP1_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getX3ON2A() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX3ON2A_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getXON2A2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXON2A2_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXX_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getXXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXXX_613c8f46c659f636]));
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
            static PyObject *t_FieldDSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTZonalContext_of_(t_FieldDSSTZonalContext *self, PyObject *args);
            static PyObject *t_FieldDSSTZonalContext_getBB(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getBoA(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getBoABpo(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getCXO2N2A2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getHK(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getK2MH2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getK2MH2O2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getM2aoA(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getMCo2AB(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getMeanMotion(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getMuoa(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getOON2A2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getOoAB(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getRoa(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getX(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getX2ON2A2XP1(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getX3ON2A(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getXON2A2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getXX(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getXXX(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_get__bB(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__boA(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__boABpo(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__cXO2N2A2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__hK(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__k2MH2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__k2MH2O2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__m2aoA(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__mCo2AB(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__meanMotion(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__muoa(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__oON2A2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__ooAB(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__roa(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__x(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__x2ON2A2XP1(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__x3ON2A(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__xON2A2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__xX(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__xXX(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__parameters_(t_FieldDSSTZonalContext *self, void *data);
            static PyGetSetDef t_FieldDSSTZonalContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, bB),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, boA),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, boABpo),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, cXO2N2A2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, hK),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, k2MH2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, k2MH2O2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, m2aoA),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, mCo2AB),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, muoa),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, oON2A2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, ooAB),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, roa),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, x),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, x2ON2A2XP1),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, x3ON2A),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, xON2A2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, xX),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, xXX),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTZonalContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTZonalContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getCXO2N2A2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getHK, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getK2MH2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getK2MH2O2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getMuoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getOON2A2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getX2ON2A2XP1, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getX3ON2A, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getXON2A2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getXXX, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTZonalContext)[] = {
              { Py_tp_methods, t_FieldDSSTZonalContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldDSSTZonalContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTZonalContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTZonalContext, t_FieldDSSTZonalContext, FieldDSSTZonalContext);
            PyObject *t_FieldDSSTZonalContext::wrap_Object(const FieldDSSTZonalContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTZonalContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTZonalContext *self = (t_FieldDSSTZonalContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTZonalContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTZonalContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTZonalContext *self = (t_FieldDSSTZonalContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTZonalContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTZonalContext), &PY_TYPE_DEF(FieldDSSTZonalContext), module, "FieldDSSTZonalContext", 0);
            }

            void t_FieldDSSTZonalContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTZonalContext), "class_", make_descriptor(FieldDSSTZonalContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTZonalContext), "wrapfn_", make_descriptor(t_FieldDSSTZonalContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTZonalContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTZonalContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTZonalContext::wrap_Object(FieldDSSTZonalContext(((t_FieldDSSTZonalContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTZonalContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTZonalContext_of_(t_FieldDSSTZonalContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldDSSTZonalContext_getBB(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getBoA(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getBoABpo(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoABpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getCXO2N2A2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getCXO2N2A2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getHK(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getHK());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getK2MH2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getK2MH2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getK2MH2O2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getK2MH2O2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getM2aoA(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getM2aoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getMCo2AB(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getMeanMotion(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getMuoa(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMuoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getOON2A2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOON2A2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getOoAB(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getRoa(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getX(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getX2ON2A2XP1(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX2ON2A2XP1());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getX3ON2A(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX3ON2A());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getXON2A2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXON2A2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getXX(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getXXX(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTZonalContext_get__parameters_(t_FieldDSSTZonalContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTZonalContext_get__bB(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__boA(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__boABpo(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoABpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__cXO2N2A2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getCXO2N2A2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__hK(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getHK());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__k2MH2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getK2MH2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__k2MH2O2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getK2MH2O2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__m2aoA(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getM2aoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__mCo2AB(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__meanMotion(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__muoa(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMuoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__oON2A2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOON2A2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__ooAB(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__roa(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__x(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__x2ON2A2XP1(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX2ON2A2XP1());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__x3ON2A(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX3ON2A());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__xON2A2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXON2A2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__xX(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__xXX(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldTLE::class$ = NULL;
          jmethodID *FieldTLE::mids$ = NULL;
          bool FieldTLE::live$ = false;
          ::java::lang::String *FieldTLE::B_STAR = NULL;
          jint FieldTLE::DEFAULT = (jint) 0;
          jint FieldTLE::SDP4 = (jint) 0;
          jint FieldTLE::SDP8 = (jint) 0;
          jint FieldTLE::SGP = (jint) 0;
          jint FieldTLE::SGP4 = (jint) 0;
          jint FieldTLE::SGP8 = (jint) 0;

          jclass FieldTLE::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldTLE");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a2c7449b381f2df3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_7828a34495b14e73] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_init$_b950babc90b9c7ed] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;ID)V");
              mids$[mid_init$_6e630f0bbf68a980] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;IDLorg/orekit/time/TimeScale;)V");
              mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getBStar_557b8123390d8d0c] = env->getMethodID(cls, "getBStar", "()D");
              mids$[mid_getClassification_d156d1ce330f6993] = env->getMethodID(cls, "getClassification", "()C");
              mids$[mid_getDate_f1fe4daf77c66560] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
              mids$[mid_getE_613c8f46c659f636] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getElementNumber_412668abc8d889e9] = env->getMethodID(cls, "getElementNumber", "()I");
              mids$[mid_getEphemerisType_412668abc8d889e9] = env->getMethodID(cls, "getEphemerisType", "()I");
              mids$[mid_getI_613c8f46c659f636] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getLaunchNumber_412668abc8d889e9] = env->getMethodID(cls, "getLaunchNumber", "()I");
              mids$[mid_getLaunchPiece_3cffd47377eca18a] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
              mids$[mid_getLaunchYear_412668abc8d889e9] = env->getMethodID(cls, "getLaunchYear", "()I");
              mids$[mid_getLine1_3cffd47377eca18a] = env->getMethodID(cls, "getLine1", "()Ljava/lang/String;");
              mids$[mid_getLine2_3cffd47377eca18a] = env->getMethodID(cls, "getLine2", "()Ljava/lang/String;");
              mids$[mid_getMeanAnomaly_613c8f46c659f636] = env->getMethodID(cls, "getMeanAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMeanMotion_613c8f46c659f636] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMeanMotionFirstDerivative_613c8f46c659f636] = env->getMethodID(cls, "getMeanMotionFirstDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMeanMotionSecondDerivative_613c8f46c659f636] = env->getMethodID(cls, "getMeanMotionSecondDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getPerigeeArgument_613c8f46c659f636] = env->getMethodID(cls, "getPerigeeArgument", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getRaan_613c8f46c659f636] = env->getMethodID(cls, "getRaan", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getRevolutionNumberAtEpoch_412668abc8d889e9] = env->getMethodID(cls, "getRevolutionNumberAtEpoch", "()I");
              mids$[mid_getSatelliteNumber_412668abc8d889e9] = env->getMethodID(cls, "getSatelliteNumber", "()I");
              mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isFormatOK_64c9e5626fbef1d6] = env->getStaticMethodID(cls, "isFormatOK", "(Ljava/lang/String;Ljava/lang/String;)Z");
              mids$[mid_stateToTLE_18e49a74c9d4ab3a] = env->getStaticMethodID(cls, "stateToTLE", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
              mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toTLE_67f978062a0fd0e7] = env->getMethodID(cls, "toTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              B_STAR = new ::java::lang::String(env->getStaticObjectField(cls, "B_STAR", "Ljava/lang/String;"));
              DEFAULT = env->getStaticIntField(cls, "DEFAULT");
              SDP4 = env->getStaticIntField(cls, "SDP4");
              SDP8 = env->getStaticIntField(cls, "SDP8");
              SGP = env->getStaticIntField(cls, "SGP");
              SGP4 = env->getStaticIntField(cls, "SGP4");
              SGP8 = env->getStaticIntField(cls, "SGP8");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldTLE::FieldTLE(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a2c7449b381f2df3, a0.this$, a1.this$, a2.this$)) {}

          FieldTLE::FieldTLE(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7828a34495b14e73, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldTLE::FieldTLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::FieldAbsoluteDate & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13, const ::org::hipparchus::CalculusFieldElement & a14, const ::org::hipparchus::CalculusFieldElement & a15, jint a16, jdouble a17) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b950babc90b9c7ed, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16, a17)) {}

          FieldTLE::FieldTLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::FieldAbsoluteDate & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13, const ::org::hipparchus::CalculusFieldElement & a14, const ::org::hipparchus::CalculusFieldElement & a15, jint a16, jdouble a17, const ::org::orekit::time::TimeScale & a18) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6e630f0bbf68a980, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16, a17, a18.this$)) {}

          jboolean FieldTLE::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
          }

          jdouble FieldTLE::getBStar() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBStar_557b8123390d8d0c]);
          }

          jchar FieldTLE::getClassification() const
          {
            return env->callCharMethod(this$, mids$[mid_getClassification_d156d1ce330f6993]);
          }

          ::org::orekit::time::FieldAbsoluteDate FieldTLE::getDate() const
          {
            return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f1fe4daf77c66560]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getE() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_613c8f46c659f636]));
          }

          jint FieldTLE::getElementNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getElementNumber_412668abc8d889e9]);
          }

          jint FieldTLE::getEphemerisType() const
          {
            return env->callIntMethod(this$, mids$[mid_getEphemerisType_412668abc8d889e9]);
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getI() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_613c8f46c659f636]));
          }

          jint FieldTLE::getLaunchNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchNumber_412668abc8d889e9]);
          }

          ::java::lang::String FieldTLE::getLaunchPiece() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_3cffd47377eca18a]));
          }

          jint FieldTLE::getLaunchYear() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchYear_412668abc8d889e9]);
          }

          ::java::lang::String FieldTLE::getLine1() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine1_3cffd47377eca18a]));
          }

          ::java::lang::String FieldTLE::getLine2() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine2_3cffd47377eca18a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanAnomaly() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomaly_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanMotion() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanMotionFirstDerivative() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotionFirstDerivative_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanMotionSecondDerivative() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotionSecondDerivative_613c8f46c659f636]));
          }

          ::java::util::List FieldTLE::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getPerigeeArgument() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPerigeeArgument_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getRaan() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRaan_613c8f46c659f636]));
          }

          jint FieldTLE::getRevolutionNumberAtEpoch() const
          {
            return env->callIntMethod(this$, mids$[mid_getRevolutionNumberAtEpoch_412668abc8d889e9]);
          }

          jint FieldTLE::getSatelliteNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteNumber_412668abc8d889e9]);
          }

          jint FieldTLE::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
          }

          jboolean FieldTLE::isFormatOK(const ::java::lang::String & a0, const ::java::lang::String & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticBooleanMethod(cls, mids$[mid_isFormatOK_64c9e5626fbef1d6], a0.this$, a1.this$);
          }

          FieldTLE FieldTLE::stateToTLE(const ::org::orekit::propagation::FieldSpacecraftState & a0, const FieldTLE & a1, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLE(env->callStaticObjectMethod(cls, mids$[mid_stateToTLE_18e49a74c9d4ab3a], a0.this$, a1.this$, a2.this$));
          }

          ::java::lang::String FieldTLE::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
          }

          ::org::orekit::propagation::analytical::tle::TLE FieldTLE::toTLE() const
          {
            return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_toTLE_67f978062a0fd0e7]));
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
          static PyObject *t_FieldTLE_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLE_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLE_of_(t_FieldTLE *self, PyObject *args);
          static int t_FieldTLE_init_(t_FieldTLE *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldTLE_equals(t_FieldTLE *self, PyObject *args);
          static PyObject *t_FieldTLE_getBStar(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getClassification(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getDate(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getE(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getElementNumber(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getEphemerisType(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getI(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLaunchNumber(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLaunchPiece(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLaunchYear(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLine1(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLine2(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanAnomaly(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanMotion(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanMotionFirstDerivative(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanMotionSecondDerivative(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getParametersDrivers(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getPerigeeArgument(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getRaan(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getRevolutionNumberAtEpoch(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getSatelliteNumber(t_FieldTLE *self);
          static PyObject *t_FieldTLE_hashCode(t_FieldTLE *self, PyObject *args);
          static PyObject *t_FieldTLE_isFormatOK(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldTLE_stateToTLE(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldTLE_toString(t_FieldTLE *self, PyObject *args);
          static PyObject *t_FieldTLE_toTLE(t_FieldTLE *self);
          static PyObject *t_FieldTLE_get__bStar(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__classification(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__date(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__e(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__elementNumber(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__ephemerisType(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__i(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__launchNumber(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__launchPiece(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__launchYear(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__line1(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__line2(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanAnomaly(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanMotion(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanMotionFirstDerivative(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanMotionSecondDerivative(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__parametersDrivers(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__perigeeArgument(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__raan(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__revolutionNumberAtEpoch(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__satelliteNumber(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__parameters_(t_FieldTLE *self, void *data);
          static PyGetSetDef t_FieldTLE__fields_[] = {
            DECLARE_GET_FIELD(t_FieldTLE, bStar),
            DECLARE_GET_FIELD(t_FieldTLE, classification),
            DECLARE_GET_FIELD(t_FieldTLE, date),
            DECLARE_GET_FIELD(t_FieldTLE, e),
            DECLARE_GET_FIELD(t_FieldTLE, elementNumber),
            DECLARE_GET_FIELD(t_FieldTLE, ephemerisType),
            DECLARE_GET_FIELD(t_FieldTLE, i),
            DECLARE_GET_FIELD(t_FieldTLE, launchNumber),
            DECLARE_GET_FIELD(t_FieldTLE, launchPiece),
            DECLARE_GET_FIELD(t_FieldTLE, launchYear),
            DECLARE_GET_FIELD(t_FieldTLE, line1),
            DECLARE_GET_FIELD(t_FieldTLE, line2),
            DECLARE_GET_FIELD(t_FieldTLE, meanAnomaly),
            DECLARE_GET_FIELD(t_FieldTLE, meanMotion),
            DECLARE_GET_FIELD(t_FieldTLE, meanMotionFirstDerivative),
            DECLARE_GET_FIELD(t_FieldTLE, meanMotionSecondDerivative),
            DECLARE_GET_FIELD(t_FieldTLE, parametersDrivers),
            DECLARE_GET_FIELD(t_FieldTLE, perigeeArgument),
            DECLARE_GET_FIELD(t_FieldTLE, raan),
            DECLARE_GET_FIELD(t_FieldTLE, revolutionNumberAtEpoch),
            DECLARE_GET_FIELD(t_FieldTLE, satelliteNumber),
            DECLARE_GET_FIELD(t_FieldTLE, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldTLE__methods_[] = {
            DECLARE_METHOD(t_FieldTLE, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, equals, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, getBStar, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getClassification, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getDate, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getE, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getElementNumber, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getEphemerisType, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getI, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLaunchNumber, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLaunchPiece, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLaunchYear, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLine1, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLine2, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanAnomaly, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanMotion, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanMotionFirstDerivative, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanMotionSecondDerivative, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getPerigeeArgument, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getRaan, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getRevolutionNumberAtEpoch, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getSatelliteNumber, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, isFormatOK, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, stateToTLE, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, toString, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, toTLE, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldTLE)[] = {
            { Py_tp_methods, t_FieldTLE__methods_ },
            { Py_tp_init, (void *) t_FieldTLE_init_ },
            { Py_tp_getset, t_FieldTLE__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldTLE)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldTLE, t_FieldTLE, FieldTLE);
          PyObject *t_FieldTLE::wrap_Object(const FieldTLE& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLE::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLE *self = (t_FieldTLE *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldTLE::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLE::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLE *self = (t_FieldTLE *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldTLE::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldTLE), &PY_TYPE_DEF(FieldTLE), module, "FieldTLE", 0);
          }

          void t_FieldTLE::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "class_", make_descriptor(FieldTLE::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "wrapfn_", make_descriptor(t_FieldTLE::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "boxfn_", make_descriptor(boxObject));
            env->getClass(FieldTLE::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "B_STAR", make_descriptor(j2p(*FieldTLE::B_STAR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "DEFAULT", make_descriptor(FieldTLE::DEFAULT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SDP4", make_descriptor(FieldTLE::SDP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SDP8", make_descriptor(FieldTLE::SDP8));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SGP", make_descriptor(FieldTLE::SGP));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SGP4", make_descriptor(FieldTLE::SGP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SGP8", make_descriptor(FieldTLE::SGP8));
          }

          static PyObject *t_FieldTLE_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldTLE::initializeClass, 1)))
              return NULL;
            return t_FieldTLE::wrap_Object(FieldTLE(((t_FieldTLE *) arg)->object.this$));
          }
          static PyObject *t_FieldTLE_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldTLE::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldTLE_of_(t_FieldTLE *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldTLE_init_(t_FieldTLE *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "Kss", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "Kssk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 18:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::FieldAbsoluteDate a7((jobject) NULL);
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
                ::org::hipparchus::CalculusFieldElement a14((jobject) NULL);
                PyTypeObject **p14;
                ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
                PyTypeObject **p15;
                jint a16;
                jdouble a17;
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIKKKKKKKKKID", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a14, &p14, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a16, &a17))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 19:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::FieldAbsoluteDate a7((jobject) NULL);
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
                ::org::hipparchus::CalculusFieldElement a14((jobject) NULL);
                PyTypeObject **p14;
                ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
                PyTypeObject **p15;
                jint a16;
                jdouble a17;
                ::org::orekit::time::TimeScale a18((jobject) NULL);
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIKKKKKKKKKIDk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a14, &p14, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a16, &a17, &a18))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18));
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

          static PyObject *t_FieldTLE_equals(t_FieldTLE *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(FieldTLE), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_FieldTLE_getBStar(t_FieldTLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBStar());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_FieldTLE_getClassification(t_FieldTLE *self)
          {
            jchar result;
            OBJ_CALL(result = self->object.getClassification());
            return c2p(result);
          }

          static PyObject *t_FieldTLE_getDate(t_FieldTLE *self)
          {
            ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldTLE_getE(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getE());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getElementNumber(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getElementNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getEphemerisType(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getEphemerisType());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getI(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getI());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getLaunchNumber(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getLaunchPiece(t_FieldTLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLaunchPiece());
            return j2p(result);
          }

          static PyObject *t_FieldTLE_getLaunchYear(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchYear());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getLine1(t_FieldTLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine1());
            return j2p(result);
          }

          static PyObject *t_FieldTLE_getLine2(t_FieldTLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine2());
            return j2p(result);
          }

          static PyObject *t_FieldTLE_getMeanAnomaly(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanAnomaly());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getMeanMotion(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanMotion());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getMeanMotionFirstDerivative(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanMotionFirstDerivative());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getMeanMotionSecondDerivative(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanMotionSecondDerivative());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getParametersDrivers(t_FieldTLE *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_FieldTLE_getPerigeeArgument(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getPerigeeArgument());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getRaan(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getRaan());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getRevolutionNumberAtEpoch(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getSatelliteNumber(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_hashCode(t_FieldTLE *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(FieldTLE), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_FieldTLE_isFormatOK(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLE::isFormatOK(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError(type, "isFormatOK", args);
            return NULL;
          }

          static PyObject *t_FieldTLE_stateToTLE(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTLE a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a2((jobject) NULL);
            FieldTLE result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, FieldTLE::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, t_FieldTLE::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLE::stateToTLE(a0, a1, a2));
              return t_FieldTLE::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "stateToTLE", args);
            return NULL;
          }

          static PyObject *t_FieldTLE_toString(t_FieldTLE *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(FieldTLE), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_FieldTLE_toTLE(t_FieldTLE *self)
          {
            ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
            OBJ_CALL(result = self->object.toTLE());
            return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
          }
          static PyObject *t_FieldTLE_get__parameters_(t_FieldTLE *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldTLE_get__bStar(t_FieldTLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBStar());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_FieldTLE_get__classification(t_FieldTLE *self, void *data)
          {
            jchar value;
            OBJ_CALL(value = self->object.getClassification());
            return c2p(value);
          }

          static PyObject *t_FieldTLE_get__date(t_FieldTLE *self, void *data)
          {
            ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__e(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getE());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__elementNumber(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getElementNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__ephemerisType(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getEphemerisType());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__i(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getI());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__launchNumber(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__launchPiece(t_FieldTLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLaunchPiece());
            return j2p(value);
          }

          static PyObject *t_FieldTLE_get__launchYear(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchYear());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__line1(t_FieldTLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine1());
            return j2p(value);
          }

          static PyObject *t_FieldTLE_get__line2(t_FieldTLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine2());
            return j2p(value);
          }

          static PyObject *t_FieldTLE_get__meanAnomaly(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanAnomaly());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__meanMotion(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanMotion());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__meanMotionFirstDerivative(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanMotionFirstDerivative());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__meanMotionSecondDerivative(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanMotionSecondDerivative());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__parametersDrivers(t_FieldTLE *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__perigeeArgument(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getPerigeeArgument());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__raan(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getRaan());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__revolutionNumberAtEpoch(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__satelliteNumber(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GPSCivilianNavigationMessage::class$ = NULL;
            jmethodID *GPSCivilianNavigationMessage::mids$ = NULL;
            bool GPSCivilianNavigationMessage::live$ = false;

            jclass GPSCivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ed2afdb8506b9742] = env->getMethodID(cls, "<init>", "(Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GPSCivilianNavigationMessage::GPSCivilianNavigationMessage(jboolean a0) : ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_ed2afdb8506b9742, a0)) {}
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
            static PyObject *t_GPSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GPSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GPSCivilianNavigationMessage_init_(t_GPSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_GPSCivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GPSCivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSCivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GPSCivilianNavigationMessage)[] = {
              { Py_tp_methods, t_GPSCivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GPSCivilianNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GPSCivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage),
              NULL
            };

            DEFINE_TYPE(GPSCivilianNavigationMessage, t_GPSCivilianNavigationMessage, GPSCivilianNavigationMessage);

            void t_GPSCivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GPSCivilianNavigationMessage), &PY_TYPE_DEF(GPSCivilianNavigationMessage), module, "GPSCivilianNavigationMessage", 0);
            }

            void t_GPSCivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSCivilianNavigationMessage), "class_", make_descriptor(GPSCivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSCivilianNavigationMessage), "wrapfn_", make_descriptor(t_GPSCivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSCivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GPSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GPSCivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GPSCivilianNavigationMessage::wrap_Object(GPSCivilianNavigationMessage(((t_GPSCivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GPSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GPSCivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GPSCivilianNavigationMessage_init_(t_GPSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              GPSCivilianNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = GPSCivilianNavigationMessage(a0));
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
#include "java/util/stream/DoubleStream.h"
#include "java/util/function/Supplier.h"
#include "java/util/stream/DoubleStream.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/util/DoubleSummaryStatistics.h"
#include "java/lang/Double.h"
#include "java/util/PrimitiveIterator$OfDouble.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/OptionalDouble.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace stream {

      ::java::lang::Class *DoubleStream::class$ = NULL;
      jmethodID *DoubleStream::mids$ = NULL;
      bool DoubleStream::live$ = false;

      jclass DoubleStream::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/stream/DoubleStream");

          mids$ = new jmethodID[max_mid];
          mids$[mid_average_e3186f0c7a9ab30b] = env->getMethodID(cls, "average", "()Ljava/util/OptionalDouble;");
          mids$[mid_boxed_d7cce92225eb0db2] = env->getMethodID(cls, "boxed", "()Ljava/util/stream/Stream;");
          mids$[mid_concat_e6e892ee2b5e7c18] = env->getStaticMethodID(cls, "concat", "(Ljava/util/stream/DoubleStream;Ljava/util/stream/DoubleStream;)Ljava/util/stream/DoubleStream;");
          mids$[mid_count_9e26256fb0d384a2] = env->getMethodID(cls, "count", "()J");
          mids$[mid_distinct_78c9b5d7fa0dbac0] = env->getMethodID(cls, "distinct", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_empty_78c9b5d7fa0dbac0] = env->getStaticMethodID(cls, "empty", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_findAny_e3186f0c7a9ab30b] = env->getMethodID(cls, "findAny", "()Ljava/util/OptionalDouble;");
          mids$[mid_findFirst_e3186f0c7a9ab30b] = env->getMethodID(cls, "findFirst", "()Ljava/util/OptionalDouble;");
          mids$[mid_forEach_fda350dd3513069c] = env->getMethodID(cls, "forEach", "(Ljava/util/function/DoubleConsumer;)V");
          mids$[mid_forEachOrdered_fda350dd3513069c] = env->getMethodID(cls, "forEachOrdered", "(Ljava/util/function/DoubleConsumer;)V");
          mids$[mid_iterator_ced90e8e748c0698] = env->getMethodID(cls, "iterator", "()Ljava/util/PrimitiveIterator$OfDouble;");
          mids$[mid_limit_4761ea9169c0223a] = env->getMethodID(cls, "limit", "(J)Ljava/util/stream/DoubleStream;");
          mids$[mid_max_e3186f0c7a9ab30b] = env->getMethodID(cls, "max", "()Ljava/util/OptionalDouble;");
          mids$[mid_min_e3186f0c7a9ab30b] = env->getMethodID(cls, "min", "()Ljava/util/OptionalDouble;");
          mids$[mid_of_72362f5b4201ba22] = env->getStaticMethodID(cls, "of", "([D)Ljava/util/stream/DoubleStream;");
          mids$[mid_of_604854eda377da85] = env->getStaticMethodID(cls, "of", "(D)Ljava/util/stream/DoubleStream;");
          mids$[mid_parallel_78c9b5d7fa0dbac0] = env->getMethodID(cls, "parallel", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_peek_4e7702e12b9baa81] = env->getMethodID(cls, "peek", "(Ljava/util/function/DoubleConsumer;)Ljava/util/stream/DoubleStream;");
          mids$[mid_sequential_78c9b5d7fa0dbac0] = env->getMethodID(cls, "sequential", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_skip_4761ea9169c0223a] = env->getMethodID(cls, "skip", "(J)Ljava/util/stream/DoubleStream;");
          mids$[mid_sorted_78c9b5d7fa0dbac0] = env->getMethodID(cls, "sorted", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_spliterator_67e70219587d017f] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator$OfDouble;");
          mids$[mid_sum_557b8123390d8d0c] = env->getMethodID(cls, "sum", "()D");
          mids$[mid_summaryStatistics_3557148e3cd839f9] = env->getMethodID(cls, "summaryStatistics", "()Ljava/util/DoubleSummaryStatistics;");
          mids$[mid_toArray_a53a7513ecedada2] = env->getMethodID(cls, "toArray", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::OptionalDouble DoubleStream::average() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_average_e3186f0c7a9ab30b]));
      }

      ::java::util::stream::Stream DoubleStream::boxed() const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_boxed_d7cce92225eb0db2]));
      }

      DoubleStream DoubleStream::concat(const DoubleStream & a0, const DoubleStream & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_concat_e6e892ee2b5e7c18], a0.this$, a1.this$));
      }

      jlong DoubleStream::count() const
      {
        return env->callLongMethod(this$, mids$[mid_count_9e26256fb0d384a2]);
      }

      DoubleStream DoubleStream::distinct() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_distinct_78c9b5d7fa0dbac0]));
      }

      DoubleStream DoubleStream::empty()
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_empty_78c9b5d7fa0dbac0]));
      }

      ::java::util::OptionalDouble DoubleStream::findAny() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_findAny_e3186f0c7a9ab30b]));
      }

      ::java::util::OptionalDouble DoubleStream::findFirst() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_findFirst_e3186f0c7a9ab30b]));
      }

      void DoubleStream::forEach(const ::java::util::function::DoubleConsumer & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_forEach_fda350dd3513069c], a0.this$);
      }

      void DoubleStream::forEachOrdered(const ::java::util::function::DoubleConsumer & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_forEachOrdered_fda350dd3513069c], a0.this$);
      }

      ::java::util::PrimitiveIterator$OfDouble DoubleStream::iterator() const
      {
        return ::java::util::PrimitiveIterator$OfDouble(env->callObjectMethod(this$, mids$[mid_iterator_ced90e8e748c0698]));
      }

      DoubleStream DoubleStream::limit(jlong a0) const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_limit_4761ea9169c0223a], a0));
      }

      ::java::util::OptionalDouble DoubleStream::max$() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_max_e3186f0c7a9ab30b]));
      }

      ::java::util::OptionalDouble DoubleStream::min$() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_min_e3186f0c7a9ab30b]));
      }

      DoubleStream DoubleStream::of(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_of_72362f5b4201ba22], a0.this$));
      }

      DoubleStream DoubleStream::of(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_of_604854eda377da85], a0));
      }

      DoubleStream DoubleStream::parallel() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_parallel_78c9b5d7fa0dbac0]));
      }

      DoubleStream DoubleStream::peek(const ::java::util::function::DoubleConsumer & a0) const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_peek_4e7702e12b9baa81], a0.this$));
      }

      DoubleStream DoubleStream::sequential() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_sequential_78c9b5d7fa0dbac0]));
      }

      DoubleStream DoubleStream::skip(jlong a0) const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_skip_4761ea9169c0223a], a0));
      }

      DoubleStream DoubleStream::sorted() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_sorted_78c9b5d7fa0dbac0]));
      }

      ::java::util::Spliterator$OfDouble DoubleStream::spliterator() const
      {
        return ::java::util::Spliterator$OfDouble(env->callObjectMethod(this$, mids$[mid_spliterator_67e70219587d017f]));
      }

      jdouble DoubleStream::sum() const
      {
        return env->callDoubleMethod(this$, mids$[mid_sum_557b8123390d8d0c]);
      }

      ::java::util::DoubleSummaryStatistics DoubleStream::summaryStatistics() const
      {
        return ::java::util::DoubleSummaryStatistics(env->callObjectMethod(this$, mids$[mid_summaryStatistics_3557148e3cd839f9]));
      }

      JArray< jdouble > DoubleStream::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_a53a7513ecedada2]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace stream {
      static PyObject *t_DoubleStream_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleStream_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleStream_average(t_DoubleStream *self);
      static PyObject *t_DoubleStream_boxed(t_DoubleStream *self);
      static PyObject *t_DoubleStream_concat(PyTypeObject *type, PyObject *args);
      static PyObject *t_DoubleStream_count(t_DoubleStream *self);
      static PyObject *t_DoubleStream_distinct(t_DoubleStream *self);
      static PyObject *t_DoubleStream_empty(PyTypeObject *type);
      static PyObject *t_DoubleStream_findAny(t_DoubleStream *self);
      static PyObject *t_DoubleStream_findFirst(t_DoubleStream *self);
      static PyObject *t_DoubleStream_forEach(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_forEachOrdered(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_iterator(t_DoubleStream *self);
      static PyObject *t_DoubleStream_limit(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_max(t_DoubleStream *self);
      static PyObject *t_DoubleStream_min(t_DoubleStream *self);
      static PyObject *t_DoubleStream_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_DoubleStream_parallel(t_DoubleStream *self);
      static PyObject *t_DoubleStream_peek(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_sequential(t_DoubleStream *self);
      static PyObject *t_DoubleStream_skip(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_sorted(t_DoubleStream *self);
      static PyObject *t_DoubleStream_spliterator(t_DoubleStream *self);
      static PyObject *t_DoubleStream_sum(t_DoubleStream *self);
      static PyObject *t_DoubleStream_summaryStatistics(t_DoubleStream *self);
      static PyObject *t_DoubleStream_toArray(t_DoubleStream *self);

      static PyMethodDef t_DoubleStream__methods_[] = {
        DECLARE_METHOD(t_DoubleStream, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, average, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, boxed, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, concat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, count, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, distinct, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, empty, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, findAny, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, findFirst, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, forEach, METH_O),
        DECLARE_METHOD(t_DoubleStream, forEachOrdered, METH_O),
        DECLARE_METHOD(t_DoubleStream, iterator, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, limit, METH_O),
        DECLARE_METHOD(t_DoubleStream, max, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, min, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, parallel, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, peek, METH_O),
        DECLARE_METHOD(t_DoubleStream, sequential, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, skip, METH_O),
        DECLARE_METHOD(t_DoubleStream, sorted, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, spliterator, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, sum, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, summaryStatistics, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, toArray, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleStream)[] = {
        { Py_tp_methods, t_DoubleStream__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleStream)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleStream, t_DoubleStream, DoubleStream);

      void t_DoubleStream::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleStream), &PY_TYPE_DEF(DoubleStream), module, "DoubleStream", 0);
      }

      void t_DoubleStream::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleStream), "class_", make_descriptor(DoubleStream::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleStream), "wrapfn_", make_descriptor(t_DoubleStream::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleStream), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleStream_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleStream::initializeClass, 1)))
          return NULL;
        return t_DoubleStream::wrap_Object(DoubleStream(((t_DoubleStream *) arg)->object.this$));
      }
      static PyObject *t_DoubleStream_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleStream::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DoubleStream_average(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.average());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_boxed(t_DoubleStream *self)
      {
        ::java::util::stream::Stream result((jobject) NULL);
        OBJ_CALL(result = self->object.boxed());
        return ::java::util::stream::t_Stream::wrap_Object(result, ::java::lang::PY_TYPE(Double));
      }

      static PyObject *t_DoubleStream_concat(PyTypeObject *type, PyObject *args)
      {
        DoubleStream a0((jobject) NULL);
        DoubleStream a1((jobject) NULL);
        DoubleStream result((jobject) NULL);

        if (!parseArgs(args, "kk", DoubleStream::initializeClass, DoubleStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::java::util::stream::DoubleStream::concat(a0, a1));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "concat", args);
        return NULL;
      }

      static PyObject *t_DoubleStream_count(t_DoubleStream *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.count());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_DoubleStream_distinct(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.distinct());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_empty(PyTypeObject *type)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = ::java::util::stream::DoubleStream::empty());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_findAny(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.findAny());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_findFirst(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.findFirst());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_forEach(t_DoubleStream *self, PyObject *arg)
      {
        ::java::util::function::DoubleConsumer a0((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(self->object.forEach(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "forEach", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_forEachOrdered(t_DoubleStream *self, PyObject *arg)
      {
        ::java::util::function::DoubleConsumer a0((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(self->object.forEachOrdered(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "forEachOrdered", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_iterator(t_DoubleStream *self)
      {
        ::java::util::PrimitiveIterator$OfDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_PrimitiveIterator$OfDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_limit(t_DoubleStream *self, PyObject *arg)
      {
        jlong a0;
        DoubleStream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.limit(a0));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "limit", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_max(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.max$());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_min(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.min$());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            DoubleStream result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::DoubleStream::of(a0));
              return t_DoubleStream::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            DoubleStream result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::DoubleStream::of(a0));
              return t_DoubleStream::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_DoubleStream_parallel(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.parallel());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_peek(t_DoubleStream *self, PyObject *arg)
      {
        ::java::util::function::DoubleConsumer a0((jobject) NULL);
        DoubleStream result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.peek(a0));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "peek", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_sequential(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.sequential());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_skip(t_DoubleStream *self, PyObject *arg)
      {
        jlong a0;
        DoubleStream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.skip(a0));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "skip", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_sorted(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.sorted());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_spliterator(t_DoubleStream *self)
      {
        ::java::util::Spliterator$OfDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator$OfDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_sum(t_DoubleStream *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.sum());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DoubleStream_summaryStatistics(t_DoubleStream *self)
      {
        ::java::util::DoubleSummaryStatistics result((jobject) NULL);
        OBJ_CALL(result = self->object.summaryStatistics());
        return ::java::util::t_DoubleSummaryStatistics::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_toArray(t_DoubleStream *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTTesseralContext.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTTesseralContext::class$ = NULL;
            jmethodID *FieldDSSTTesseralContext::mids$ = NULL;
            bool FieldDSSTTesseralContext::live$ = false;

            jclass FieldDSSTTesseralContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTTesseralContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAx2oA_613c8f46c659f636] = env->getMethodID(cls, "getAx2oA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoA_613c8f46c659f636] = env->getMethodID(cls, "getBoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoABpo_613c8f46c659f636] = env->getMethodID(cls, "getBoABpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getChi_613c8f46c659f636] = env->getMethodID(cls, "getChi", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getChi2_613c8f46c659f636] = env->getMethodID(cls, "getChi2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getCo2AB_613c8f46c659f636] = env->getMethodID(cls, "getCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getE2_613c8f46c659f636] = env->getMethodID(cls, "getE2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_613c8f46c659f636] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMoa_613c8f46c659f636] = env->getMethodID(cls, "getMoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoAB_613c8f46c659f636] = env->getMethodID(cls, "getOoAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOrbitPeriod_613c8f46c659f636] = env->getMethodID(cls, "getOrbitPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRatio_613c8f46c659f636] = env->getMethodID(cls, "getRatio", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRoa_613c8f46c659f636] = env->getMethodID(cls, "getRoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getTheta_613c8f46c659f636] = env->getMethodID(cls, "getTheta", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getAx2oA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAx2oA_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getBoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoA_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getBoABpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoABpo_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getChi() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getChi_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getChi2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getChi2_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCo2AB_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getE2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE2_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getMoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMoa_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getOoAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoAB_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getOrbitPeriod() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOrbitPeriod_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getRatio() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRatio_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getRoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRoa_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getTheta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTheta_613c8f46c659f636]));
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
            static PyObject *t_FieldDSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTTesseralContext_of_(t_FieldDSSTTesseralContext *self, PyObject *args);
            static PyObject *t_FieldDSSTTesseralContext_getAx2oA(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getBoA(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getBoABpo(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getChi(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getChi2(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getCo2AB(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getE2(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getMeanMotion(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getMoa(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getOoAB(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getOrbitPeriod(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getRatio(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getRoa(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getTheta(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_get__ax2oA(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__boA(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__boABpo(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__chi(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__chi2(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__co2AB(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__e2(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__meanMotion(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__moa(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__ooAB(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__orbitPeriod(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__ratio(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__roa(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__theta(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__parameters_(t_FieldDSSTTesseralContext *self, void *data);
            static PyGetSetDef t_FieldDSSTTesseralContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, ax2oA),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, boA),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, boABpo),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, chi),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, chi2),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, co2AB),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, e2),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, moa),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, ooAB),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, orbitPeriod),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, ratio),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, roa),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, theta),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTTesseralContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTTesseralContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getAx2oA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getChi, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getChi2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getE2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getMoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getOrbitPeriod, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getRatio, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getTheta, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTTesseralContext)[] = {
              { Py_tp_methods, t_FieldDSSTTesseralContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldDSSTTesseralContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTTesseralContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTTesseralContext, t_FieldDSSTTesseralContext, FieldDSSTTesseralContext);
            PyObject *t_FieldDSSTTesseralContext::wrap_Object(const FieldDSSTTesseralContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTTesseralContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTTesseralContext *self = (t_FieldDSSTTesseralContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTTesseralContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTTesseralContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTTesseralContext *self = (t_FieldDSSTTesseralContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTTesseralContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTTesseralContext), &PY_TYPE_DEF(FieldDSSTTesseralContext), module, "FieldDSSTTesseralContext", 0);
            }

            void t_FieldDSSTTesseralContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTTesseralContext), "class_", make_descriptor(FieldDSSTTesseralContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTTesseralContext), "wrapfn_", make_descriptor(t_FieldDSSTTesseralContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTTesseralContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTTesseralContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTTesseralContext::wrap_Object(FieldDSSTTesseralContext(((t_FieldDSSTTesseralContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTTesseralContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTTesseralContext_of_(t_FieldDSSTTesseralContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldDSSTTesseralContext_getAx2oA(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getAx2oA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getBoA(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getBoABpo(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoABpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getChi(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getChi());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getChi2(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getChi2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getCo2AB(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getE2(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getE2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getMeanMotion(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getMoa(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getOoAB(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getOrbitPeriod(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbitPeriod());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getRatio(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getRatio());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getRoa(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getTheta(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getTheta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTTesseralContext_get__parameters_(t_FieldDSSTTesseralContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTTesseralContext_get__ax2oA(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getAx2oA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__boA(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__boABpo(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoABpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__chi(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getChi());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__chi2(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getChi2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__co2AB(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__e2(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getE2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__meanMotion(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__moa(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__ooAB(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__orbitPeriod(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbitPeriod());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__ratio(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getRatio());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__roa(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__theta(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getTheta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/PythonFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *PythonFieldUnivariateFunction::class$ = NULL;
      jmethodID *PythonFieldUnivariateFunction::mids$ = NULL;
      bool PythonFieldUnivariateFunction::live$ = false;

      jclass PythonFieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/PythonFieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_6672ad854985cb64] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldUnivariateFunction::PythonFieldUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonFieldUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonFieldUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonFieldUnivariateFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self);
      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonFieldUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonFieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonFieldUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonFieldUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldUnivariateFunction, t_PythonFieldUnivariateFunction, PythonFieldUnivariateFunction);

      void t_PythonFieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldUnivariateFunction), &PY_TYPE_DEF(PythonFieldUnivariateFunction), module, "PythonFieldUnivariateFunction", 1);
      }

      void t_PythonFieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "class_", make_descriptor(PythonFieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "wrapfn_", make_descriptor(t_PythonFieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonFieldUnivariateFunction_pythonDecRef0 },
          { "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonFieldUnivariateFunction::wrap_Object(PythonFieldUnivariateFunction(((t_PythonFieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonFieldUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("value", result);
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

      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data)
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
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *LineSensor::class$ = NULL;
        jmethodID *LineSensor::mids$ = NULL;
        bool LineSensor::live$ = false;

        jclass LineSensor::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/LineSensor");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d6a5725cfda9eb6a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/rugged/linesensor/LineDatation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/los/TimeDependentLOS;)V");
            mids$[mid_dumpRate_10f281d777284cea] = env->getMethodID(cls, "dumpRate", "(D)V");
            mids$[mid_getDate_8ef471ef852a9678] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLOS_3c56f5b1e29b9eca] = env->getMethodID(cls, "getLOS", "(Lorg/orekit/time/AbsoluteDate;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOS_8bb2c64f904a2a90] = env->getMethodID(cls, "getLOS", "(Lorg/orekit/time/AbsoluteDate;I)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOSDerivatives_dbc314b6641cc90f] = env->getMethodID(cls, "getLOSDerivatives", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getLOSDerivatives_6d63592424503b42] = env->getMethodID(cls, "getLOSDerivatives", "(Lorg/orekit/time/AbsoluteDate;ILorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getLine_b0b988f941da47d8] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getNbPixels_412668abc8d889e9] = env->getMethodID(cls, "getNbPixels", "()I");
            mids$[mid_getParametersDrivers_d7cce92225eb0db2] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_getPosition_f88961cca75a2c0a] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getRate_7e960cd6eee376d8] = env->getMethodID(cls, "getRate", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LineSensor::LineSensor(const ::java::lang::String & a0, const ::org::orekit::rugged::linesensor::LineDatation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::los::TimeDependentLOS & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d6a5725cfda9eb6a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void LineSensor::dumpRate(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_dumpRate_10f281d777284cea], a0);
        }

        ::org::orekit::time::AbsoluteDate LineSensor::getDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_8ef471ef852a9678], a0));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LineSensor::getLOS(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLOS_3c56f5b1e29b9eca], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LineSensor::getLOS(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLOS_8bb2c64f904a2a90], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LineSensor::getLOSDerivatives(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getLOSDerivatives_dbc314b6641cc90f], a0.this$, a1, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LineSensor::getLOSDerivatives(const ::org::orekit::time::AbsoluteDate & a0, jint a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getLOSDerivatives_6d63592424503b42], a0.this$, a1, a2.this$));
        }

        jdouble LineSensor::getLine(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_b0b988f941da47d8], a0.this$);
        }

        ::java::lang::String LineSensor::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
        }

        jint LineSensor::getNbPixels() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPixels_412668abc8d889e9]);
        }

        ::java::util::stream::Stream LineSensor::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d7cce92225eb0db2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LineSensor::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_f88961cca75a2c0a]));
        }

        jdouble LineSensor::getRate(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRate_7e960cd6eee376d8], a0);
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
      namespace linesensor {
        static PyObject *t_LineSensor_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LineSensor_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LineSensor_init_(t_LineSensor *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LineSensor_dumpRate(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_getDate(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_getLOS(t_LineSensor *self, PyObject *args);
        static PyObject *t_LineSensor_getLOSDerivatives(t_LineSensor *self, PyObject *args);
        static PyObject *t_LineSensor_getLine(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_getName(t_LineSensor *self);
        static PyObject *t_LineSensor_getNbPixels(t_LineSensor *self);
        static PyObject *t_LineSensor_getParametersDrivers(t_LineSensor *self);
        static PyObject *t_LineSensor_getPosition(t_LineSensor *self);
        static PyObject *t_LineSensor_getRate(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_get__name(t_LineSensor *self, void *data);
        static PyObject *t_LineSensor_get__nbPixels(t_LineSensor *self, void *data);
        static PyObject *t_LineSensor_get__parametersDrivers(t_LineSensor *self, void *data);
        static PyObject *t_LineSensor_get__position(t_LineSensor *self, void *data);
        static PyGetSetDef t_LineSensor__fields_[] = {
          DECLARE_GET_FIELD(t_LineSensor, name),
          DECLARE_GET_FIELD(t_LineSensor, nbPixels),
          DECLARE_GET_FIELD(t_LineSensor, parametersDrivers),
          DECLARE_GET_FIELD(t_LineSensor, position),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LineSensor__methods_[] = {
          DECLARE_METHOD(t_LineSensor, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineSensor, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineSensor, dumpRate, METH_O),
          DECLARE_METHOD(t_LineSensor, getDate, METH_O),
          DECLARE_METHOD(t_LineSensor, getLOS, METH_VARARGS),
          DECLARE_METHOD(t_LineSensor, getLOSDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_LineSensor, getLine, METH_O),
          DECLARE_METHOD(t_LineSensor, getName, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getNbPixels, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getPosition, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getRate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LineSensor)[] = {
          { Py_tp_methods, t_LineSensor__methods_ },
          { Py_tp_init, (void *) t_LineSensor_init_ },
          { Py_tp_getset, t_LineSensor__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LineSensor)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LineSensor, t_LineSensor, LineSensor);

        void t_LineSensor::install(PyObject *module)
        {
          installType(&PY_TYPE(LineSensor), &PY_TYPE_DEF(LineSensor), module, "LineSensor", 0);
        }

        void t_LineSensor::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineSensor), "class_", make_descriptor(LineSensor::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineSensor), "wrapfn_", make_descriptor(t_LineSensor::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineSensor), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LineSensor_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LineSensor::initializeClass, 1)))
            return NULL;
          return t_LineSensor::wrap_Object(LineSensor(((t_LineSensor *) arg)->object.this$));
        }
        static PyObject *t_LineSensor_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LineSensor::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LineSensor_init_(t_LineSensor *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineDatation a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::los::TimeDependentLOS a3((jobject) NULL);
          LineSensor object((jobject) NULL);

          if (!parseArgs(args, "skkk", ::org::orekit::rugged::linesensor::LineDatation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::los::TimeDependentLOS::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = LineSensor(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LineSensor_dumpRate(t_LineSensor *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.dumpRate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "dumpRate", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_getDate(t_LineSensor *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getDate(a0));
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDate", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_getLOS(t_LineSensor *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jint a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLOS", args);
          return NULL;
        }

        static PyObject *t_LineSensor_getLOSDerivatives(t_LineSensor *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "kDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.getLOSDerivatives(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jint a1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "kIK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.getLOSDerivatives(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLOSDerivatives", args);
          return NULL;
        }

        static PyObject *t_LineSensor_getLine(t_LineSensor *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getLine(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLine", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_getName(t_LineSensor *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_LineSensor_getNbPixels(t_LineSensor *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPixels());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_LineSensor_getParametersDrivers(t_LineSensor *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_LineSensor_getPosition(t_LineSensor *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_LineSensor_getRate(t_LineSensor *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRate", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_get__name(t_LineSensor *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_LineSensor_get__nbPixels(t_LineSensor *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPixels());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_LineSensor_get__parametersDrivers(t_LineSensor *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_LineSensor_get__position(t_LineSensor *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzerSelector.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *LexicalAnalyzerSelector::class$ = NULL;
            jmethodID *LexicalAnalyzerSelector::mids$ = NULL;
            bool LexicalAnalyzerSelector::live$ = false;

            jclass LexicalAnalyzerSelector::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/LexicalAnalyzerSelector");

                mids$ = new jmethodID[max_mid];
                mids$[mid_select_a59eadbc9d2d95c4] = env->getStaticMethodID(cls, "select", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/utils/lexical/LexicalAnalyzer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer LexicalAnalyzerSelector::select(const ::org::orekit::data::DataSource & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer(env->callStaticObjectMethod(cls, mids$[mid_select_a59eadbc9d2d95c4], a0.this$));
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
            static PyObject *t_LexicalAnalyzerSelector_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzerSelector_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzerSelector_select(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_LexicalAnalyzerSelector__methods_[] = {
              DECLARE_METHOD(t_LexicalAnalyzerSelector, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzerSelector, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzerSelector, select, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LexicalAnalyzerSelector)[] = {
              { Py_tp_methods, t_LexicalAnalyzerSelector__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LexicalAnalyzerSelector)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LexicalAnalyzerSelector, t_LexicalAnalyzerSelector, LexicalAnalyzerSelector);

            void t_LexicalAnalyzerSelector::install(PyObject *module)
            {
              installType(&PY_TYPE(LexicalAnalyzerSelector), &PY_TYPE_DEF(LexicalAnalyzerSelector), module, "LexicalAnalyzerSelector", 0);
            }

            void t_LexicalAnalyzerSelector::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzerSelector), "class_", make_descriptor(LexicalAnalyzerSelector::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzerSelector), "wrapfn_", make_descriptor(t_LexicalAnalyzerSelector::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzerSelector), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LexicalAnalyzerSelector_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LexicalAnalyzerSelector::initializeClass, 1)))
                return NULL;
              return t_LexicalAnalyzerSelector::wrap_Object(LexicalAnalyzerSelector(((t_LexicalAnalyzerSelector *) arg)->object.this$));
            }
            static PyObject *t_LexicalAnalyzerSelector_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LexicalAnalyzerSelector::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LexicalAnalyzerSelector_select(PyTypeObject *type, PyObject *arg)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzerSelector::select(a0));
                return ::org::orekit::files::ccsds::utils::lexical::t_LexicalAnalyzer::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "select", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}

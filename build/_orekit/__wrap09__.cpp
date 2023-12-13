#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/UnsupportedParameterException.h"
#include "java/util/List.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *UnsupportedParameterException::class$ = NULL;
      jmethodID *UnsupportedParameterException::mids$ = NULL;
      bool UnsupportedParameterException::live$ = false;
      ::java::lang::String *UnsupportedParameterException::COMMA_SEP = NULL;
      ::java::lang::String *UnsupportedParameterException::NO_PARAMETER = NULL;

      jclass UnsupportedParameterException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/UnsupportedParameterException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9c78226ca1e428f3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          COMMA_SEP = new ::java::lang::String(env->getStaticObjectField(cls, "COMMA_SEP", "Ljava/lang/String;"));
          NO_PARAMETER = new ::java::lang::String(env->getStaticObjectField(cls, "NO_PARAMETER", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UnsupportedParameterException::UnsupportedParameterException(const ::java::lang::String & a0, const ::java::util::List & a1) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_9c78226ca1e428f3, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_UnsupportedParameterException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnsupportedParameterException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UnsupportedParameterException_init_(t_UnsupportedParameterException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_UnsupportedParameterException__methods_[] = {
        DECLARE_METHOD(t_UnsupportedParameterException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnsupportedParameterException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnsupportedParameterException)[] = {
        { Py_tp_methods, t_UnsupportedParameterException__methods_ },
        { Py_tp_init, (void *) t_UnsupportedParameterException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnsupportedParameterException)[] = {
        &PY_TYPE_DEF(::org::orekit::errors::OrekitException),
        NULL
      };

      DEFINE_TYPE(UnsupportedParameterException, t_UnsupportedParameterException, UnsupportedParameterException);

      void t_UnsupportedParameterException::install(PyObject *module)
      {
        installType(&PY_TYPE(UnsupportedParameterException), &PY_TYPE_DEF(UnsupportedParameterException), module, "UnsupportedParameterException", 0);
      }

      void t_UnsupportedParameterException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "class_", make_descriptor(UnsupportedParameterException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "wrapfn_", make_descriptor(t_UnsupportedParameterException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "boxfn_", make_descriptor(boxObject));
        env->getClass(UnsupportedParameterException::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "COMMA_SEP", make_descriptor(j2p(*UnsupportedParameterException::COMMA_SEP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "NO_PARAMETER", make_descriptor(j2p(*UnsupportedParameterException::NO_PARAMETER)));
      }

      static PyObject *t_UnsupportedParameterException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnsupportedParameterException::initializeClass, 1)))
          return NULL;
        return t_UnsupportedParameterException::wrap_Object(UnsupportedParameterException(((t_UnsupportedParameterException *) arg)->object.this$));
      }
      static PyObject *t_UnsupportedParameterException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnsupportedParameterException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UnsupportedParameterException_init_(t_UnsupportedParameterException *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        UnsupportedParameterException object((jobject) NULL);

        if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = UnsupportedParameterException(a0, a1));
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
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
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
            mids$[mid_init$_f1fb3e257db4eb3d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLjava/util/List;)V");
            mids$[mid_getId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile$STKEphemeris::STKEphemerisFile$STKEphemeris(const ::java::lang::String & a0, jdouble a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1fb3e257db4eb3d, a0.this$, a1, a2.this$)) {}

        ::java::lang::String STKEphemerisFile$STKEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_1c1fa1e935d6cdcf]));
        }

        jdouble STKEphemerisFile$STKEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        ::java::util::List STKEphemerisFile$STKEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_e62d3bb06d56d7e3]));
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
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
#include "java/io/ObjectInputStream.h"
#include "java/io/NotActiveException.h"
#include "java/io/ObjectInputStream$GetField.h"
#include "java/io/ObjectStreamConstants.h"
#include "java/io/InvalidObjectException.h"
#include "java/io/IOException.h"
#include "java/io/ObjectInputValidation.h"
#include "java/io/ObjectInput.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/io/ObjectInputFilter.h"
#include "java/lang/String.h"
#include "java/lang/ClassNotFoundException.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectInputStream::class$ = NULL;
    jmethodID *ObjectInputStream::mids$ = NULL;
    bool ObjectInputStream::live$ = false;

    jclass ObjectInputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectInputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_471a178453aa39ad] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;)V");
        mids$[mid_available_55546ef6a647f39b] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_defaultReadObject_a1fa5dae97ea5ed2] = env->getMethodID(cls, "defaultReadObject", "()V");
        mids$[mid_getObjectInputFilter_89c6bdd378c3b156] = env->getMethodID(cls, "getObjectInputFilter", "()Ljava/io/ObjectInputFilter;");
        mids$[mid_read_55546ef6a647f39b] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_296dd75c373e2c1d] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_readBoolean_9ab94ac1dc23b105] = env->getMethodID(cls, "readBoolean", "()Z");
        mids$[mid_readByte_82ba37184c5152a3] = env->getMethodID(cls, "readByte", "()B");
        mids$[mid_readChar_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "readChar", "()C");
        mids$[mid_readDouble_b74f83833fdad017] = env->getMethodID(cls, "readDouble", "()D");
        mids$[mid_readFields_84b973d9e9db21eb] = env->getMethodID(cls, "readFields", "()Ljava/io/ObjectInputStream$GetField;");
        mids$[mid_readFloat_1fb1bf0772ae5db7] = env->getMethodID(cls, "readFloat", "()F");
        mids$[mid_readFully_459771b03534868e] = env->getMethodID(cls, "readFully", "([B)V");
        mids$[mid_readFully_a9fddc59b07ce512] = env->getMethodID(cls, "readFully", "([BII)V");
        mids$[mid_readInt_55546ef6a647f39b] = env->getMethodID(cls, "readInt", "()I");
        mids$[mid_readLine_1c1fa1e935d6cdcf] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_readLong_6c0ce7e438e5ded4] = env->getMethodID(cls, "readLong", "()J");
        mids$[mid_readObject_541690f9ee81d3ad] = env->getMethodID(cls, "readObject", "()Ljava/lang/Object;");
        mids$[mid_readShort_02a2271f89f4492b] = env->getMethodID(cls, "readShort", "()S");
        mids$[mid_readUTF_1c1fa1e935d6cdcf] = env->getMethodID(cls, "readUTF", "()Ljava/lang/String;");
        mids$[mid_readUnshared_541690f9ee81d3ad] = env->getMethodID(cls, "readUnshared", "()Ljava/lang/Object;");
        mids$[mid_readUnsignedByte_55546ef6a647f39b] = env->getMethodID(cls, "readUnsignedByte", "()I");
        mids$[mid_readUnsignedShort_55546ef6a647f39b] = env->getMethodID(cls, "readUnsignedShort", "()I");
        mids$[mid_registerValidation_118ce9d62d9df0b6] = env->getMethodID(cls, "registerValidation", "(Ljava/io/ObjectInputValidation;I)V");
        mids$[mid_setObjectInputFilter_53c1740e04034bea] = env->getMethodID(cls, "setObjectInputFilter", "(Ljava/io/ObjectInputFilter;)V");
        mids$[mid_skipBytes_0e7cf35192c3effe] = env->getMethodID(cls, "skipBytes", "(I)I");
        mids$[mid_readObjectOverride_541690f9ee81d3ad] = env->getMethodID(cls, "readObjectOverride", "()Ljava/lang/Object;");
        mids$[mid_resolveProxyClass_f2a5d294c3c46502] = env->getMethodID(cls, "resolveProxyClass", "([Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_resolveObject_5804c890f94a02b6] = env->getMethodID(cls, "resolveObject", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_enableResolveObject_52d2d2523d94d978] = env->getMethodID(cls, "enableResolveObject", "(Z)Z");
        mids$[mid_readStreamHeader_a1fa5dae97ea5ed2] = env->getMethodID(cls, "readStreamHeader", "()V");
        mids$[mid_readClassDescriptor_fb017e274a57c596] = env->getMethodID(cls, "readClassDescriptor", "()Ljava/io/ObjectStreamClass;");
        mids$[mid_resolveClass_073be9f31fb3cb10] = env->getMethodID(cls, "resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectInputStream::ObjectInputStream(const ::java::io::InputStream & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_471a178453aa39ad, a0.this$)) {}

    jint ObjectInputStream::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_55546ef6a647f39b]);
    }

    void ObjectInputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    void ObjectInputStream::defaultReadObject() const
    {
      env->callVoidMethod(this$, mids$[mid_defaultReadObject_a1fa5dae97ea5ed2]);
    }

    ::java::io::ObjectInputFilter ObjectInputStream::getObjectInputFilter() const
    {
      return ::java::io::ObjectInputFilter(env->callObjectMethod(this$, mids$[mid_getObjectInputFilter_89c6bdd378c3b156]));
    }

    jint ObjectInputStream::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_55546ef6a647f39b]);
    }

    jint ObjectInputStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_296dd75c373e2c1d], a0.this$, a1, a2);
    }

    jboolean ObjectInputStream::readBoolean() const
    {
      return env->callBooleanMethod(this$, mids$[mid_readBoolean_9ab94ac1dc23b105]);
    }

    jbyte ObjectInputStream::readByte() const
    {
      return env->callByteMethod(this$, mids$[mid_readByte_82ba37184c5152a3]);
    }

    jchar ObjectInputStream::readChar() const
    {
      return env->callCharMethod(this$, mids$[mid_readChar_5e2f8fc4d7c03fbd]);
    }

    jdouble ObjectInputStream::readDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_readDouble_b74f83833fdad017]);
    }

    ::java::io::ObjectInputStream$GetField ObjectInputStream::readFields() const
    {
      return ::java::io::ObjectInputStream$GetField(env->callObjectMethod(this$, mids$[mid_readFields_84b973d9e9db21eb]));
    }

    jfloat ObjectInputStream::readFloat() const
    {
      return env->callFloatMethod(this$, mids$[mid_readFloat_1fb1bf0772ae5db7]);
    }

    void ObjectInputStream::readFully(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_459771b03534868e], a0.this$);
    }

    void ObjectInputStream::readFully(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_a9fddc59b07ce512], a0.this$, a1, a2);
    }

    jint ObjectInputStream::readInt() const
    {
      return env->callIntMethod(this$, mids$[mid_readInt_55546ef6a647f39b]);
    }

    ::java::lang::String ObjectInputStream::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_1c1fa1e935d6cdcf]));
    }

    jlong ObjectInputStream::readLong() const
    {
      return env->callLongMethod(this$, mids$[mid_readLong_6c0ce7e438e5ded4]);
    }

    ::java::lang::Object ObjectInputStream::readObject() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_readObject_541690f9ee81d3ad]));
    }

    jshort ObjectInputStream::readShort() const
    {
      return env->callShortMethod(this$, mids$[mid_readShort_02a2271f89f4492b]);
    }

    ::java::lang::String ObjectInputStream::readUTF() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readUTF_1c1fa1e935d6cdcf]));
    }

    ::java::lang::Object ObjectInputStream::readUnshared() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_readUnshared_541690f9ee81d3ad]));
    }

    jint ObjectInputStream::readUnsignedByte() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedByte_55546ef6a647f39b]);
    }

    jint ObjectInputStream::readUnsignedShort() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedShort_55546ef6a647f39b]);
    }

    void ObjectInputStream::registerValidation(const ::java::io::ObjectInputValidation & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_registerValidation_118ce9d62d9df0b6], a0.this$, a1);
    }

    void ObjectInputStream::setObjectInputFilter(const ::java::io::ObjectInputFilter & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setObjectInputFilter_53c1740e04034bea], a0.this$);
    }

    jint ObjectInputStream::skipBytes(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_skipBytes_0e7cf35192c3effe], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectInputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ObjectInputStream_init_(t_ObjectInputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ObjectInputStream_available(t_ObjectInputStream *self, PyObject *args);
    static PyObject *t_ObjectInputStream_close(t_ObjectInputStream *self, PyObject *args);
    static PyObject *t_ObjectInputStream_defaultReadObject(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_getObjectInputFilter(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_read(t_ObjectInputStream *self, PyObject *args);
    static PyObject *t_ObjectInputStream_readBoolean(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readByte(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readChar(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readDouble(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readFields(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readFloat(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readFully(t_ObjectInputStream *self, PyObject *args);
    static PyObject *t_ObjectInputStream_readInt(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readLine(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readLong(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readObject(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readShort(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readUTF(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readUnshared(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readUnsignedByte(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_readUnsignedShort(t_ObjectInputStream *self);
    static PyObject *t_ObjectInputStream_registerValidation(t_ObjectInputStream *self, PyObject *args);
    static PyObject *t_ObjectInputStream_setObjectInputFilter(t_ObjectInputStream *self, PyObject *arg);
    static PyObject *t_ObjectInputStream_skipBytes(t_ObjectInputStream *self, PyObject *arg);
    static PyObject *t_ObjectInputStream_get__objectInputFilter(t_ObjectInputStream *self, void *data);
    static int t_ObjectInputStream_set__objectInputFilter(t_ObjectInputStream *self, PyObject *arg, void *data);
    static PyGetSetDef t_ObjectInputStream__fields_[] = {
      DECLARE_GETSET_FIELD(t_ObjectInputStream, objectInputFilter),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ObjectInputStream__methods_[] = {
      DECLARE_METHOD(t_ObjectInputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputStream, available, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream, defaultReadObject, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, getObjectInputFilter, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, read, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream, readBoolean, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readByte, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readChar, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readDouble, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readFields, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readFloat, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readFully, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream, readInt, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readLine, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readLong, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readObject, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readShort, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readUTF, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readUnshared, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readUnsignedByte, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, readUnsignedShort, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInputStream, registerValidation, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream, setObjectInputFilter, METH_O),
      DECLARE_METHOD(t_ObjectInputStream, skipBytes, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectInputStream)[] = {
      { Py_tp_methods, t_ObjectInputStream__methods_ },
      { Py_tp_init, (void *) t_ObjectInputStream_init_ },
      { Py_tp_getset, t_ObjectInputStream__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectInputStream)[] = {
      &PY_TYPE_DEF(::java::io::InputStream),
      NULL
    };

    DEFINE_TYPE(ObjectInputStream, t_ObjectInputStream, ObjectInputStream);

    void t_ObjectInputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectInputStream), &PY_TYPE_DEF(ObjectInputStream), module, "ObjectInputStream", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream), "GetField", make_descriptor(&PY_TYPE_DEF(ObjectInputStream$GetField)));
    }

    void t_ObjectInputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream), "class_", make_descriptor(ObjectInputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream), "wrapfn_", make_descriptor(t_ObjectInputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectInputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectInputStream::initializeClass, 1)))
        return NULL;
      return t_ObjectInputStream::wrap_Object(ObjectInputStream(((t_ObjectInputStream *) arg)->object.this$));
    }
    static PyObject *t_ObjectInputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectInputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ObjectInputStream_init_(t_ObjectInputStream *self, PyObject *args, PyObject *kwds)
    {
      ::java::io::InputStream a0((jobject) NULL);
      ObjectInputStream object((jobject) NULL);

      if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
      {
        INT_CALL(object = ObjectInputStream(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ObjectInputStream_available(t_ObjectInputStream *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.available());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ObjectInputStream), (PyObject *) self, "available", args, 2);
    }

    static PyObject *t_ObjectInputStream_close(t_ObjectInputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ObjectInputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_ObjectInputStream_defaultReadObject(t_ObjectInputStream *self)
    {
      OBJ_CALL(self->object.defaultReadObject());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectInputStream_getObjectInputFilter(t_ObjectInputStream *self)
    {
      ::java::io::ObjectInputFilter result((jobject) NULL);
      OBJ_CALL(result = self->object.getObjectInputFilter());
      return ::java::io::t_ObjectInputFilter::wrap_Object(result);
    }

    static PyObject *t_ObjectInputStream_read(t_ObjectInputStream *self, PyObject *args)
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
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(ObjectInputStream), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_ObjectInputStream_readBoolean(t_ObjectInputStream *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.readBoolean());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_ObjectInputStream_readByte(t_ObjectInputStream *self)
    {
      jbyte result;
      OBJ_CALL(result = self->object.readByte());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInputStream_readChar(t_ObjectInputStream *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.readChar());
      return c2p(result);
    }

    static PyObject *t_ObjectInputStream_readDouble(t_ObjectInputStream *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.readDouble());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_ObjectInputStream_readFields(t_ObjectInputStream *self)
    {
      ::java::io::ObjectInputStream$GetField result((jobject) NULL);
      OBJ_CALL(result = self->object.readFields());
      return ::java::io::t_ObjectInputStream$GetField::wrap_Object(result);
    }

    static PyObject *t_ObjectInputStream_readFloat(t_ObjectInputStream *self)
    {
      jfloat result;
      OBJ_CALL(result = self->object.readFloat());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_ObjectInputStream_readFully(t_ObjectInputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(self->object.readFully(a0));
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
            OBJ_CALL(self->object.readFully(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "readFully", args);
      return NULL;
    }

    static PyObject *t_ObjectInputStream_readInt(t_ObjectInputStream *self)
    {
      jint result;
      OBJ_CALL(result = self->object.readInt());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInputStream_readLine(t_ObjectInputStream *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.readLine());
      return j2p(result);
    }

    static PyObject *t_ObjectInputStream_readLong(t_ObjectInputStream *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.readLong());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_ObjectInputStream_readObject(t_ObjectInputStream *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.readObject());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ObjectInputStream_readShort(t_ObjectInputStream *self)
    {
      jshort result;
      OBJ_CALL(result = self->object.readShort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInputStream_readUTF(t_ObjectInputStream *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.readUTF());
      return j2p(result);
    }

    static PyObject *t_ObjectInputStream_readUnshared(t_ObjectInputStream *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.readUnshared());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ObjectInputStream_readUnsignedByte(t_ObjectInputStream *self)
    {
      jint result;
      OBJ_CALL(result = self->object.readUnsignedByte());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInputStream_readUnsignedShort(t_ObjectInputStream *self)
    {
      jint result;
      OBJ_CALL(result = self->object.readUnsignedShort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInputStream_registerValidation(t_ObjectInputStream *self, PyObject *args)
    {
      ::java::io::ObjectInputValidation a0((jobject) NULL);
      jint a1;

      if (!parseArgs(args, "kI", ::java::io::ObjectInputValidation::initializeClass, &a0, &a1))
      {
        OBJ_CALL(self->object.registerValidation(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "registerValidation", args);
      return NULL;
    }

    static PyObject *t_ObjectInputStream_setObjectInputFilter(t_ObjectInputStream *self, PyObject *arg)
    {
      ::java::io::ObjectInputFilter a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::ObjectInputFilter::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setObjectInputFilter(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setObjectInputFilter", arg);
      return NULL;
    }

    static PyObject *t_ObjectInputStream_skipBytes(t_ObjectInputStream *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.skipBytes(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "skipBytes", arg);
      return NULL;
    }

    static PyObject *t_ObjectInputStream_get__objectInputFilter(t_ObjectInputStream *self, void *data)
    {
      ::java::io::ObjectInputFilter value((jobject) NULL);
      OBJ_CALL(value = self->object.getObjectInputFilter());
      return ::java::io::t_ObjectInputFilter::wrap_Object(value);
    }
    static int t_ObjectInputStream_set__objectInputFilter(t_ObjectInputStream *self, PyObject *arg, void *data)
    {
      {
        ::java::io::ObjectInputFilter value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::ObjectInputFilter::initializeClass, &value))
        {
          INT_CALL(self->object.setObjectInputFilter(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "objectInputFilter", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader.h"
#include "org/orekit/data/DataLoader.h"
#include "java/io/InputStream.h"
#include "java/text/ParseException.h"
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/util/SortedSet.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *DtcDataLoader::class$ = NULL;
            jmethodID *DtcDataLoader::mids$ = NULL;
            bool DtcDataLoader::live$ = false;

            jclass DtcDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/DtcDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_cae5d0c3721eff67] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_7961e54fd3a47d94] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
                mids$[mid_stillAcceptsData_9ab94ac1dc23b105] = env->getMethodID(cls, "stillAcceptsData", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DtcDataLoader::DtcDataLoader(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cae5d0c3721eff67, a0.this$)) {}

            ::java::util::SortedSet DtcDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_7961e54fd3a47d94]));
            }

            ::org::orekit::time::AbsoluteDate DtcDataLoader::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
            }

            ::org::orekit::time::AbsoluteDate DtcDataLoader::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
            }

            void DtcDataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
            }

            jboolean DtcDataLoader::stillAcceptsData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_9ab94ac1dc23b105]);
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
            static PyObject *t_DtcDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DtcDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DtcDataLoader_init_(t_DtcDataLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DtcDataLoader_getDataSet(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_getMaxDate(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_getMinDate(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_loadData(t_DtcDataLoader *self, PyObject *args);
            static PyObject *t_DtcDataLoader_stillAcceptsData(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_get__dataSet(t_DtcDataLoader *self, void *data);
            static PyObject *t_DtcDataLoader_get__maxDate(t_DtcDataLoader *self, void *data);
            static PyObject *t_DtcDataLoader_get__minDate(t_DtcDataLoader *self, void *data);
            static PyGetSetDef t_DtcDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_DtcDataLoader, dataSet),
              DECLARE_GET_FIELD(t_DtcDataLoader, maxDate),
              DECLARE_GET_FIELD(t_DtcDataLoader, minDate),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DtcDataLoader__methods_[] = {
              DECLARE_METHOD(t_DtcDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader, getDataSet, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader, loadData, METH_VARARGS),
              DECLARE_METHOD(t_DtcDataLoader, stillAcceptsData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DtcDataLoader)[] = {
              { Py_tp_methods, t_DtcDataLoader__methods_ },
              { Py_tp_init, (void *) t_DtcDataLoader_init_ },
              { Py_tp_getset, t_DtcDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DtcDataLoader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DtcDataLoader, t_DtcDataLoader, DtcDataLoader);

            void t_DtcDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(DtcDataLoader), &PY_TYPE_DEF(DtcDataLoader), module, "DtcDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(DtcDataLoader$LineParameters)));
            }

            void t_DtcDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "class_", make_descriptor(DtcDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "wrapfn_", make_descriptor(t_DtcDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DtcDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DtcDataLoader::initializeClass, 1)))
                return NULL;
              return t_DtcDataLoader::wrap_Object(DtcDataLoader(((t_DtcDataLoader *) arg)->object.this$));
            }
            static PyObject *t_DtcDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DtcDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DtcDataLoader_init_(t_DtcDataLoader *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              DtcDataLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = DtcDataLoader(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DtcDataLoader_getDataSet(t_DtcDataLoader *self)
            {
              ::java::util::SortedSet result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(DtcDataLoader$LineParameters));
            }

            static PyObject *t_DtcDataLoader_getMaxDate(t_DtcDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_DtcDataLoader_getMinDate(t_DtcDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_DtcDataLoader_loadData(t_DtcDataLoader *self, PyObject *args)
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

            static PyObject *t_DtcDataLoader_stillAcceptsData(t_DtcDataLoader *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.stillAcceptsData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_DtcDataLoader_get__dataSet(t_DtcDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_DtcDataLoader_get__maxDate(t_DtcDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_DtcDataLoader_get__minDate(t_DtcDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Median.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/rank/Median.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/KthSelector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Median::class$ = NULL;
          jmethodID *Median::mids$ = NULL;
          bool Median::live$ = false;

          jclass Median::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Median");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_copy_e7d20978b299e4ee] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Median;");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getEstimationType_243f7211bd3660bc] = env->getMethodID(cls, "getEstimationType", "()Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_getKthSelector_5930553957d5187e] = env->getMethodID(cls, "getKthSelector", "()Lorg/hipparchus/util/KthSelector;");
              mids$[mid_getNaNStrategy_9ae875326a45f3e9] = env->getMethodID(cls, "getNaNStrategy", "()Lorg/hipparchus/stat/ranking/NaNStrategy;");
              mids$[mid_withEstimationType_35be72416be2b820] = env->getMethodID(cls, "withEstimationType", "(Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;)Lorg/hipparchus/stat/descriptive/rank/Median;");
              mids$[mid_withKthSelector_dbbbd61d1eee8fff] = env->getMethodID(cls, "withKthSelector", "(Lorg/hipparchus/util/KthSelector;)Lorg/hipparchus/stat/descriptive/rank/Median;");
              mids$[mid_withNaNStrategy_41d9c4eb9be594d5] = env->getMethodID(cls, "withNaNStrategy", "(Lorg/hipparchus/stat/ranking/NaNStrategy;)Lorg/hipparchus/stat/descriptive/rank/Median;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Median::Median() : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          Median Median::copy() const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_copy_e7d20978b299e4ee]));
          }

          jdouble Median::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType Median::getEstimationType() const
          {
            return ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType(env->callObjectMethod(this$, mids$[mid_getEstimationType_243f7211bd3660bc]));
          }

          ::org::hipparchus::util::KthSelector Median::getKthSelector() const
          {
            return ::org::hipparchus::util::KthSelector(env->callObjectMethod(this$, mids$[mid_getKthSelector_5930553957d5187e]));
          }

          ::org::hipparchus::stat::ranking::NaNStrategy Median::getNaNStrategy() const
          {
            return ::org::hipparchus::stat::ranking::NaNStrategy(env->callObjectMethod(this$, mids$[mid_getNaNStrategy_9ae875326a45f3e9]));
          }

          Median Median::withEstimationType(const ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType & a0) const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_withEstimationType_35be72416be2b820], a0.this$));
          }

          Median Median::withKthSelector(const ::org::hipparchus::util::KthSelector & a0) const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_withKthSelector_dbbbd61d1eee8fff], a0.this$));
          }

          Median Median::withNaNStrategy(const ::org::hipparchus::stat::ranking::NaNStrategy & a0) const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_withNaNStrategy_41d9c4eb9be594d5], a0.this$));
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
        namespace rank {
          static PyObject *t_Median_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Median_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Median_init_(t_Median *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Median_copy(t_Median *self, PyObject *args);
          static PyObject *t_Median_evaluate(t_Median *self, PyObject *args);
          static PyObject *t_Median_getEstimationType(t_Median *self);
          static PyObject *t_Median_getKthSelector(t_Median *self);
          static PyObject *t_Median_getNaNStrategy(t_Median *self);
          static PyObject *t_Median_withEstimationType(t_Median *self, PyObject *arg);
          static PyObject *t_Median_withKthSelector(t_Median *self, PyObject *arg);
          static PyObject *t_Median_withNaNStrategy(t_Median *self, PyObject *arg);
          static PyObject *t_Median_get__estimationType(t_Median *self, void *data);
          static PyObject *t_Median_get__kthSelector(t_Median *self, void *data);
          static PyObject *t_Median_get__naNStrategy(t_Median *self, void *data);
          static PyGetSetDef t_Median__fields_[] = {
            DECLARE_GET_FIELD(t_Median, estimationType),
            DECLARE_GET_FIELD(t_Median, kthSelector),
            DECLARE_GET_FIELD(t_Median, naNStrategy),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Median__methods_[] = {
            DECLARE_METHOD(t_Median, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Median, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Median, copy, METH_VARARGS),
            DECLARE_METHOD(t_Median, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Median, getEstimationType, METH_NOARGS),
            DECLARE_METHOD(t_Median, getKthSelector, METH_NOARGS),
            DECLARE_METHOD(t_Median, getNaNStrategy, METH_NOARGS),
            DECLARE_METHOD(t_Median, withEstimationType, METH_O),
            DECLARE_METHOD(t_Median, withKthSelector, METH_O),
            DECLARE_METHOD(t_Median, withNaNStrategy, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Median)[] = {
            { Py_tp_methods, t_Median__methods_ },
            { Py_tp_init, (void *) t_Median_init_ },
            { Py_tp_getset, t_Median__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Median)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Median, t_Median, Median);

          void t_Median::install(PyObject *module)
          {
            installType(&PY_TYPE(Median), &PY_TYPE_DEF(Median), module, "Median", 0);
          }

          void t_Median::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Median), "class_", make_descriptor(Median::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Median), "wrapfn_", make_descriptor(t_Median::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Median), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Median_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Median::initializeClass, 1)))
              return NULL;
            return t_Median::wrap_Object(Median(((t_Median *) arg)->object.this$));
          }
          static PyObject *t_Median_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Median::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Median_init_(t_Median *self, PyObject *args, PyObject *kwds)
          {
            Median object((jobject) NULL);

            INT_CALL(object = Median());
            self->object = object;

            return 0;
          }

          static PyObject *t_Median_copy(t_Median *self, PyObject *args)
          {
            Median result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Median::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Median), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Median_evaluate(t_Median *self, PyObject *args)
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

            return callSuper(PY_TYPE(Median), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Median_getEstimationType(t_Median *self)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(result);
          }

          static PyObject *t_Median_getKthSelector(t_Median *self)
          {
            ::org::hipparchus::util::KthSelector result((jobject) NULL);
            OBJ_CALL(result = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(result);
          }

          static PyObject *t_Median_getNaNStrategy(t_Median *self)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy result((jobject) NULL);
            OBJ_CALL(result = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(result);
          }

          static PyObject *t_Median_withEstimationType(t_Median *self, PyObject *arg)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType a0((jobject) NULL);
            PyTypeObject **p0;
            Median result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::parameters_))
            {
              OBJ_CALL(result = self->object.withEstimationType(a0));
              return t_Median::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withEstimationType", arg);
            return NULL;
          }

          static PyObject *t_Median_withKthSelector(t_Median *self, PyObject *arg)
          {
            ::org::hipparchus::util::KthSelector a0((jobject) NULL);
            Median result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::util::KthSelector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withKthSelector(a0));
              return t_Median::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withKthSelector", arg);
            return NULL;
          }

          static PyObject *t_Median_withNaNStrategy(t_Median *self, PyObject *arg)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
            PyTypeObject **p0;
            Median result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_))
            {
              OBJ_CALL(result = self->object.withNaNStrategy(a0));
              return t_Median::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withNaNStrategy", arg);
            return NULL;
          }

          static PyObject *t_Median_get__estimationType(t_Median *self, void *data)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(value);
          }

          static PyObject *t_Median_get__kthSelector(t_Median *self, void *data)
          {
            ::org::hipparchus::util::KthSelector value((jobject) NULL);
            OBJ_CALL(value = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(value);
          }

          static PyObject *t_Median_get__naNStrategy(t_Median *self, void *data)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy value((jobject) NULL);
            OBJ_CALL(value = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/VariationalEquation.h"
#include "org/hipparchus/ode/ParametersController.h"
#include "org/hipparchus/ode/ODEJacobiansProvider.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/VariationalEquation$MismatchedEquations.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/ParameterConfiguration.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *VariationalEquation::class$ = NULL;
      jmethodID *VariationalEquation::mids$ = NULL;
      bool VariationalEquation::live$ = false;

      jclass VariationalEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/VariationalEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6f62dea1a828b58a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEJacobiansProvider;)V");
          mids$[mid_init$_981f0e6f6e39fedc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/OrdinaryDifferentialEquation;[DLorg/hipparchus/ode/ParametersController;[Lorg/hipparchus/ode/ParameterConfiguration;)V");
          mids$[mid_extractMainSetJacobian_112904d5e08f190a] = env->getMethodID(cls, "extractMainSetJacobian", "(Lorg/hipparchus/ode/ODEState;)[[D");
          mids$[mid_extractParameterJacobian_004d321682014f49] = env->getMethodID(cls, "extractParameterJacobian", "(Lorg/hipparchus/ode/ODEState;Ljava/lang/String;)[D");
          mids$[mid_setInitialMainStateJacobian_07adb42ffaa97d31] = env->getMethodID(cls, "setInitialMainStateJacobian", "([[D)V");
          mids$[mid_setInitialParameterJacobian_6fb36758267c5870] = env->getMethodID(cls, "setInitialParameterJacobian", "(Ljava/lang/String;[D)V");
          mids$[mid_setUpInitialState_d0492adde795fe6c] = env->getMethodID(cls, "setUpInitialState", "(Lorg/hipparchus/ode/ODEState;)Lorg/hipparchus/ode/ODEState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      VariationalEquation::VariationalEquation(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEJacobiansProvider & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f62dea1a828b58a, a0.this$, a1.this$)) {}

      VariationalEquation::VariationalEquation(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a1, const JArray< jdouble > & a2, const ::org::hipparchus::ode::ParametersController & a3, const JArray< ::org::hipparchus::ode::ParameterConfiguration > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_981f0e6f6e39fedc, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< JArray< jdouble > > VariationalEquation::extractMainSetJacobian(const ::org::hipparchus::ode::ODEState & a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_extractMainSetJacobian_112904d5e08f190a], a0.this$));
      }

      JArray< jdouble > VariationalEquation::extractParameterJacobian(const ::org::hipparchus::ode::ODEState & a0, const ::java::lang::String & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameterJacobian_004d321682014f49], a0.this$, a1.this$));
      }

      void VariationalEquation::setInitialMainStateJacobian(const JArray< JArray< jdouble > > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setInitialMainStateJacobian_07adb42ffaa97d31], a0.this$);
      }

      void VariationalEquation::setInitialParameterJacobian(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setInitialParameterJacobian_6fb36758267c5870], a0.this$, a1.this$);
      }

      ::org::hipparchus::ode::ODEState VariationalEquation::setUpInitialState(const ::org::hipparchus::ode::ODEState & a0) const
      {
        return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_setUpInitialState_d0492adde795fe6c], a0.this$));
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
      static PyObject *t_VariationalEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VariationalEquation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_VariationalEquation_init_(t_VariationalEquation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_VariationalEquation_extractMainSetJacobian(t_VariationalEquation *self, PyObject *arg);
      static PyObject *t_VariationalEquation_extractParameterJacobian(t_VariationalEquation *self, PyObject *args);
      static PyObject *t_VariationalEquation_setInitialMainStateJacobian(t_VariationalEquation *self, PyObject *arg);
      static PyObject *t_VariationalEquation_setInitialParameterJacobian(t_VariationalEquation *self, PyObject *args);
      static PyObject *t_VariationalEquation_setUpInitialState(t_VariationalEquation *self, PyObject *arg);
      static int t_VariationalEquation_set__initialMainStateJacobian(t_VariationalEquation *self, PyObject *arg, void *data);
      static int t_VariationalEquation_set__upInitialState(t_VariationalEquation *self, PyObject *arg, void *data);
      static PyGetSetDef t_VariationalEquation__fields_[] = {
        DECLARE_SET_FIELD(t_VariationalEquation, initialMainStateJacobian),
        DECLARE_SET_FIELD(t_VariationalEquation, upInitialState),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_VariationalEquation__methods_[] = {
        DECLARE_METHOD(t_VariationalEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VariationalEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VariationalEquation, extractMainSetJacobian, METH_O),
        DECLARE_METHOD(t_VariationalEquation, extractParameterJacobian, METH_VARARGS),
        DECLARE_METHOD(t_VariationalEquation, setInitialMainStateJacobian, METH_O),
        DECLARE_METHOD(t_VariationalEquation, setInitialParameterJacobian, METH_VARARGS),
        DECLARE_METHOD(t_VariationalEquation, setUpInitialState, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VariationalEquation)[] = {
        { Py_tp_methods, t_VariationalEquation__methods_ },
        { Py_tp_init, (void *) t_VariationalEquation_init_ },
        { Py_tp_getset, t_VariationalEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VariationalEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(VariationalEquation, t_VariationalEquation, VariationalEquation);

      void t_VariationalEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(VariationalEquation), &PY_TYPE_DEF(VariationalEquation), module, "VariationalEquation", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "MismatchedEquations", make_descriptor(&PY_TYPE_DEF(VariationalEquation$MismatchedEquations)));
      }

      void t_VariationalEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "class_", make_descriptor(VariationalEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "wrapfn_", make_descriptor(t_VariationalEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_VariationalEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VariationalEquation::initializeClass, 1)))
          return NULL;
        return t_VariationalEquation::wrap_Object(VariationalEquation(((t_VariationalEquation *) arg)->object.this$));
      }
      static PyObject *t_VariationalEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VariationalEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_VariationalEquation_init_(t_VariationalEquation *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
            ::org::hipparchus::ode::ODEJacobiansProvider a1((jobject) NULL);
            VariationalEquation object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEJacobiansProvider::initializeClass, &a0, &a1))
            {
              INT_CALL(object = VariationalEquation(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
            ::org::hipparchus::ode::OrdinaryDifferentialEquation a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            ::org::hipparchus::ode::ParametersController a3((jobject) NULL);
            JArray< ::org::hipparchus::ode::ParameterConfiguration > a4((jobject) NULL);
            VariationalEquation object((jobject) NULL);

            if (!parseArgs(args, "kk[Dk[k", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, ::org::hipparchus::ode::ParametersController::initializeClass, ::org::hipparchus::ode::ParameterConfiguration::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = VariationalEquation(a0, a1, a2, a3, a4));
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

      static PyObject *t_VariationalEquation_extractMainSetJacobian(t_VariationalEquation *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.extractMainSetJacobian(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "extractMainSetJacobian", arg);
        return NULL;
      }

      static PyObject *t_VariationalEquation_extractParameterJacobian(t_VariationalEquation *self, PyObject *args)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "ks", ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.extractParameterJacobian(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "extractParameterJacobian", args);
        return NULL;
      }

      static PyObject *t_VariationalEquation_setInitialMainStateJacobian(t_VariationalEquation *self, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(self->object.setInitialMainStateJacobian(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setInitialMainStateJacobian", arg);
        return NULL;
      }

      static PyObject *t_VariationalEquation_setInitialParameterJacobian(t_VariationalEquation *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setInitialParameterJacobian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setInitialParameterJacobian", args);
        return NULL;
      }

      static PyObject *t_VariationalEquation_setUpInitialState(t_VariationalEquation *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        ::org::hipparchus::ode::ODEState result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.setUpInitialState(a0));
          return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "setUpInitialState", arg);
        return NULL;
      }

      static int t_VariationalEquation_set__initialMainStateJacobian(t_VariationalEquation *self, PyObject *arg, void *data)
      {
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          if (!parseArg(arg, "[[D", &value))
          {
            INT_CALL(self->object.setInitialMainStateJacobian(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "initialMainStateJacobian", arg);
        return -1;
      }

      static int t_VariationalEquation_set__upInitialState(t_VariationalEquation *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::ode::ODEState value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEState::initializeClass, &value))
          {
            INT_CALL(self->object.setUpInitialState(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "upInitialState", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/TimeSpanParametricAcceleration.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *TimeSpanParametricAcceleration::class$ = NULL;
        jmethodID *TimeSpanParametricAcceleration::mids$ = NULL;
        bool TimeSpanParametricAcceleration::live$ = false;
        ::java::lang::String *TimeSpanParametricAcceleration::DATE_AFTER = NULL;
        ::java::lang::String *TimeSpanParametricAcceleration::DATE_BEFORE = NULL;

        jclass TimeSpanParametricAcceleration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/TimeSpanParametricAcceleration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4c3161fe77d68ecd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ZLorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_init$_5e38cdb9559e0e6a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_addAccelerationModelValidAfter_7576a11e87bcb804] = env->getMethodID(cls, "addAccelerationModelValidAfter", "(Lorg/orekit/forces/empirical/AccelerationModel;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addAccelerationModelValidBefore_7576a11e87bcb804] = env->getMethodID(cls, "addAccelerationModelValidBefore", "(Lorg/orekit/forces/empirical/AccelerationModel;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_extractAccelerationModelRange_2917731b47ff4d6e] = env->getMethodID(cls, "extractAccelerationModelRange", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_extractParameters_5417afc1212505b6] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
            mids$[mid_extractParameters_afb90c8392ccc216] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getAccelerationModel_35bbad49226ddaea] = env->getMethodID(cls, "getAccelerationModel", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/empirical/AccelerationModel;");
            mids$[mid_getAccelerationModelSpan_d9699fc4c4f11b26] = env->getMethodID(cls, "getAccelerationModelSpan", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getFirstSpan_5290b219f9ebfd63] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DATE_AFTER = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_AFTER", "Ljava/lang/String;"));
            DATE_BEFORE = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_BEFORE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TimeSpanParametricAcceleration::TimeSpanParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jboolean a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c3161fe77d68ecd, a0.this$, a1, a2.this$)) {}

        TimeSpanParametricAcceleration::TimeSpanParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5e38cdb9559e0e6a, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeSpanParametricAcceleration::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeSpanParametricAcceleration::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        void TimeSpanParametricAcceleration::addAccelerationModelValidAfter(const ::org::orekit::forces::empirical::AccelerationModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAccelerationModelValidAfter_7576a11e87bcb804], a0.this$, a1.this$);
        }

        void TimeSpanParametricAcceleration::addAccelerationModelValidBefore(const ::org::orekit::forces::empirical::AccelerationModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAccelerationModelValidBefore_7576a11e87bcb804], a0.this$, a1.this$);
        }

        jboolean TimeSpanParametricAcceleration::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        ::org::orekit::utils::TimeSpanMap TimeSpanParametricAcceleration::extractAccelerationModelRange(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_extractAccelerationModelRange_2917731b47ff4d6e], a0.this$, a1.this$));
        }

        JArray< jdouble > TimeSpanParametricAcceleration::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_5417afc1212505b6], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > TimeSpanParametricAcceleration::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_afb90c8392ccc216], a0.this$, a1.this$));
        }

        ::org::orekit::forces::empirical::AccelerationModel TimeSpanParametricAcceleration::getAccelerationModel(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::forces::empirical::AccelerationModel(env->callObjectMethod(this$, mids$[mid_getAccelerationModel_35bbad49226ddaea], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanParametricAcceleration::getAccelerationModelSpan(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getAccelerationModelSpan_d9699fc4c4f11b26], a0.this$));
        }

        ::java::util::stream::Stream TimeSpanParametricAcceleration::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_14e21bf777ff0ccf]));
        }

        ::java::util::stream::Stream TimeSpanParametricAcceleration::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_283ad33581c047a0], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanParametricAcceleration::getFirstSpan() const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_5290b219f9ebfd63]));
        }

        ::java::util::List TimeSpanParametricAcceleration::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }

        void TimeSpanParametricAcceleration::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
    namespace forces {
      namespace empirical {
        static PyObject *t_TimeSpanParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TimeSpanParametricAcceleration_init_(t_TimeSpanParametricAcceleration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TimeSpanParametricAcceleration_acceleration(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidAfter(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidBefore(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_dependsOnPositionOnly(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_extractAccelerationModelRange(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_extractParameters(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModel(t_TimeSpanParametricAcceleration *self, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModelSpan(t_TimeSpanParametricAcceleration *self, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_getEventDetectors(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_getFieldEventDetectors(t_TimeSpanParametricAcceleration *self, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_getFirstSpan(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_getParametersDrivers(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_init(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_get__eventDetectors(t_TimeSpanParametricAcceleration *self, void *data);
        static PyObject *t_TimeSpanParametricAcceleration_get__firstSpan(t_TimeSpanParametricAcceleration *self, void *data);
        static PyObject *t_TimeSpanParametricAcceleration_get__parametersDrivers(t_TimeSpanParametricAcceleration *self, void *data);
        static PyGetSetDef t_TimeSpanParametricAcceleration__fields_[] = {
          DECLARE_GET_FIELD(t_TimeSpanParametricAcceleration, eventDetectors),
          DECLARE_GET_FIELD(t_TimeSpanParametricAcceleration, firstSpan),
          DECLARE_GET_FIELD(t_TimeSpanParametricAcceleration, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeSpanParametricAcceleration__methods_[] = {
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, addAccelerationModelValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, addAccelerationModelValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, extractAccelerationModelRange, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, extractParameters, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getAccelerationModel, METH_O),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getAccelerationModelSpan, METH_O),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getFirstSpan, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeSpanParametricAcceleration)[] = {
          { Py_tp_methods, t_TimeSpanParametricAcceleration__methods_ },
          { Py_tp_init, (void *) t_TimeSpanParametricAcceleration_init_ },
          { Py_tp_getset, t_TimeSpanParametricAcceleration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeSpanParametricAcceleration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeSpanParametricAcceleration, t_TimeSpanParametricAcceleration, TimeSpanParametricAcceleration);

        void t_TimeSpanParametricAcceleration::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeSpanParametricAcceleration), &PY_TYPE_DEF(TimeSpanParametricAcceleration), module, "TimeSpanParametricAcceleration", 0);
        }

        void t_TimeSpanParametricAcceleration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "class_", make_descriptor(TimeSpanParametricAcceleration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "wrapfn_", make_descriptor(t_TimeSpanParametricAcceleration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "boxfn_", make_descriptor(boxObject));
          env->getClass(TimeSpanParametricAcceleration::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "DATE_AFTER", make_descriptor(j2p(*TimeSpanParametricAcceleration::DATE_AFTER)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "DATE_BEFORE", make_descriptor(j2p(*TimeSpanParametricAcceleration::DATE_BEFORE)));
        }

        static PyObject *t_TimeSpanParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeSpanParametricAcceleration::initializeClass, 1)))
            return NULL;
          return t_TimeSpanParametricAcceleration::wrap_Object(TimeSpanParametricAcceleration(((t_TimeSpanParametricAcceleration *) arg)->object.this$));
        }
        static PyObject *t_TimeSpanParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeSpanParametricAcceleration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TimeSpanParametricAcceleration_init_(t_TimeSpanParametricAcceleration *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              jboolean a1;
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              TimeSpanParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kZk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = TimeSpanParametricAcceleration(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              TimeSpanParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = TimeSpanParametricAcceleration(a0, a1, a2));
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

        static PyObject *t_TimeSpanParametricAcceleration_acceleration(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidAfter(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          ::org::orekit::forces::empirical::AccelerationModel a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::empirical::AccelerationModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAccelerationModelValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAccelerationModelValidAfter", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidBefore(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          ::org::orekit::forces::empirical::AccelerationModel a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::empirical::AccelerationModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAccelerationModelValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAccelerationModelValidBefore", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_dependsOnPositionOnly(t_TimeSpanParametricAcceleration *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_TimeSpanParametricAcceleration_extractAccelerationModelRange(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.extractAccelerationModelRange(a0, a1));
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::orekit::forces::empirical::PY_TYPE(AccelerationModel));
          }

          PyErr_SetArgsError((PyObject *) self, "extractAccelerationModelRange", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_extractParameters(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return result.wrap();
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModel(t_TimeSpanParametricAcceleration *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::forces::empirical::AccelerationModel result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAccelerationModel(a0));
            return ::org::orekit::forces::empirical::t_AccelerationModel::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getAccelerationModel", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModelSpan(t_TimeSpanParametricAcceleration *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAccelerationModelSpan(a0));
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::empirical::PY_TYPE(AccelerationModel));
          }

          PyErr_SetArgsError((PyObject *) self, "getAccelerationModelSpan", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_getEventDetectors(t_TimeSpanParametricAcceleration *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_TimeSpanParametricAcceleration_getFieldEventDetectors(t_TimeSpanParametricAcceleration *self, PyObject *arg)
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

        static PyObject *t_TimeSpanParametricAcceleration_getFirstSpan(t_TimeSpanParametricAcceleration *self)
        {
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::empirical::PY_TYPE(AccelerationModel));
        }

        static PyObject *t_TimeSpanParametricAcceleration_getParametersDrivers(t_TimeSpanParametricAcceleration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_TimeSpanParametricAcceleration_init(t_TimeSpanParametricAcceleration *self, PyObject *args)
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

        static PyObject *t_TimeSpanParametricAcceleration_get__eventDetectors(t_TimeSpanParametricAcceleration *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_TimeSpanParametricAcceleration_get__firstSpan(t_TimeSpanParametricAcceleration *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
        }

        static PyObject *t_TimeSpanParametricAcceleration_get__parametersDrivers(t_TimeSpanParametricAcceleration *self, void *data)
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
#include "org/orekit/models/earth/tessellation/Mesh$Node.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *Mesh$Node::class$ = NULL;
          jmethodID *Mesh$Node::mids$ = NULL;
          bool Mesh$Node::live$ = false;

          jclass Mesh$Node::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/Mesh$Node");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAcross_8b724f8b4fdad1a2] = env->getMethodID(cls, "getAcross", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAcrossIndex_55546ef6a647f39b] = env->getMethodID(cls, "getAcrossIndex", "()I");
              mids$[mid_getAlong_8b724f8b4fdad1a2] = env->getMethodID(cls, "getAlong", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAlongIndex_55546ef6a647f39b] = env->getMethodID(cls, "getAlongIndex", "()I");
              mids$[mid_getS2P_cf0fa877996d1fcc] = env->getMethodID(cls, "getS2P", "()Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_getV_8b724f8b4fdad1a2] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_isEnabled_9ab94ac1dc23b105] = env->getMethodID(cls, "isEnabled", "()Z");
              mids$[mid_isInside_9ab94ac1dc23b105] = env->getMethodID(cls, "isInside", "()Z");
              mids$[mid_move_4fef341749b9ef99] = env->getMethodID(cls, "move", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_setEnabled_a1fa5dae97ea5ed2] = env->getMethodID(cls, "setEnabled", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Mesh$Node::getAcross() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcross_8b724f8b4fdad1a2]));
          }

          jint Mesh$Node::getAcrossIndex() const
          {
            return env->callIntMethod(this$, mids$[mid_getAcrossIndex_55546ef6a647f39b]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Mesh$Node::getAlong() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAlong_8b724f8b4fdad1a2]));
          }

          jint Mesh$Node::getAlongIndex() const
          {
            return env->callIntMethod(this$, mids$[mid_getAlongIndex_55546ef6a647f39b]);
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Mesh$Node::getS2P() const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_getS2P_cf0fa877996d1fcc]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Mesh$Node::getV() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getV_8b724f8b4fdad1a2]));
          }

          jboolean Mesh$Node::isEnabled() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEnabled_9ab94ac1dc23b105]);
          }

          jboolean Mesh$Node::isInside() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInside_9ab94ac1dc23b105]);
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Mesh$Node::move(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_move_4fef341749b9ef99], a0.this$));
          }

          void Mesh$Node::setEnabled() const
          {
            env->callVoidMethod(this$, mids$[mid_setEnabled_a1fa5dae97ea5ed2]);
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
          static PyObject *t_Mesh$Node_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Mesh$Node_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Mesh$Node_getAcross(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getAcrossIndex(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getAlong(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getAlongIndex(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getS2P(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_getV(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_isEnabled(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_isInside(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_move(t_Mesh$Node *self, PyObject *arg);
          static PyObject *t_Mesh$Node_setEnabled(t_Mesh$Node *self);
          static PyObject *t_Mesh$Node_get__across(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__acrossIndex(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__along(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__alongIndex(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__enabled(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__inside(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__s2P(t_Mesh$Node *self, void *data);
          static PyObject *t_Mesh$Node_get__v(t_Mesh$Node *self, void *data);
          static PyGetSetDef t_Mesh$Node__fields_[] = {
            DECLARE_GET_FIELD(t_Mesh$Node, across),
            DECLARE_GET_FIELD(t_Mesh$Node, acrossIndex),
            DECLARE_GET_FIELD(t_Mesh$Node, along),
            DECLARE_GET_FIELD(t_Mesh$Node, alongIndex),
            DECLARE_GET_FIELD(t_Mesh$Node, enabled),
            DECLARE_GET_FIELD(t_Mesh$Node, inside),
            DECLARE_GET_FIELD(t_Mesh$Node, s2P),
            DECLARE_GET_FIELD(t_Mesh$Node, v),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Mesh$Node__methods_[] = {
            DECLARE_METHOD(t_Mesh$Node, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mesh$Node, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mesh$Node, getAcross, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getAcrossIndex, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getAlong, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getAlongIndex, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getS2P, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, getV, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, isEnabled, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, isInside, METH_NOARGS),
            DECLARE_METHOD(t_Mesh$Node, move, METH_O),
            DECLARE_METHOD(t_Mesh$Node, setEnabled, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Mesh$Node)[] = {
            { Py_tp_methods, t_Mesh$Node__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Mesh$Node__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Mesh$Node)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Mesh$Node, t_Mesh$Node, Mesh$Node);

          void t_Mesh$Node::install(PyObject *module)
          {
            installType(&PY_TYPE(Mesh$Node), &PY_TYPE_DEF(Mesh$Node), module, "Mesh$Node", 0);
          }

          void t_Mesh$Node::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mesh$Node), "class_", make_descriptor(Mesh$Node::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mesh$Node), "wrapfn_", make_descriptor(t_Mesh$Node::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mesh$Node), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Mesh$Node_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Mesh$Node::initializeClass, 1)))
              return NULL;
            return t_Mesh$Node::wrap_Object(Mesh$Node(((t_Mesh$Node *) arg)->object.this$));
          }
          static PyObject *t_Mesh$Node_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Mesh$Node::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Mesh$Node_getAcross(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAcross());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_getAcrossIndex(t_Mesh$Node *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAcrossIndex());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Mesh$Node_getAlong(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlong());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_getAlongIndex(t_Mesh$Node *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAlongIndex());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Mesh$Node_getS2P(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);
            OBJ_CALL(result = self->object.getS2P());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_getV(t_Mesh$Node *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Mesh$Node_isEnabled(t_Mesh$Node *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isEnabled());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Mesh$Node_isInside(t_Mesh$Node *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInside());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Mesh$Node_move(t_Mesh$Node *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.move(a0));
              return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "move", arg);
            return NULL;
          }

          static PyObject *t_Mesh$Node_setEnabled(t_Mesh$Node *self)
          {
            OBJ_CALL(self->object.setEnabled());
            Py_RETURN_NONE;
          }

          static PyObject *t_Mesh$Node_get__across(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAcross());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Mesh$Node_get__acrossIndex(t_Mesh$Node *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAcrossIndex());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Mesh$Node_get__along(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlong());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Mesh$Node_get__alongIndex(t_Mesh$Node *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAlongIndex());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Mesh$Node_get__enabled(t_Mesh$Node *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEnabled());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Mesh$Node_get__inside(t_Mesh$Node *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInside());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Mesh$Node_get__s2P(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point value((jobject) NULL);
            OBJ_CALL(value = self->object.getS2P());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(value);
          }

          static PyObject *t_Mesh$Node_get__v(t_Mesh$Node *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonParameterObserver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/ParameterObserver.h"
#include "java/lang/Double.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonParameterObserver::class$ = NULL;
      jmethodID *PythonParameterObserver::mids$ = NULL;
      bool PythonParameterObserver::live$ = false;

      jclass PythonParameterObserver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonParameterObserver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_valueChanged_1213852ac6f6619d] = env->getMethodID(cls, "valueChanged", "(DLorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_valueSpanMapChanged_a1a4c13d6e36518d] = env->getMethodID(cls, "valueSpanMapChanged", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/ParameterDriver;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParameterObserver::PythonParameterObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonParameterObserver::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonParameterObserver::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonParameterObserver::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonParameterObserver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParameterObserver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParameterObserver_init_(t_PythonParameterObserver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParameterObserver_finalize(t_PythonParameterObserver *self);
      static PyObject *t_PythonParameterObserver_pythonExtension(t_PythonParameterObserver *self, PyObject *args);
      static void JNICALL t_PythonParameterObserver_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonParameterObserver_valueChanged1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2);
      static void JNICALL t_PythonParameterObserver_valueSpanMapChanged2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static PyObject *t_PythonParameterObserver_get__self(t_PythonParameterObserver *self, void *data);
      static PyGetSetDef t_PythonParameterObserver__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParameterObserver, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParameterObserver__methods_[] = {
        DECLARE_METHOD(t_PythonParameterObserver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterObserver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterObserver, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParameterObserver, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParameterObserver)[] = {
        { Py_tp_methods, t_PythonParameterObserver__methods_ },
        { Py_tp_init, (void *) t_PythonParameterObserver_init_ },
        { Py_tp_getset, t_PythonParameterObserver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParameterObserver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParameterObserver, t_PythonParameterObserver, PythonParameterObserver);

      void t_PythonParameterObserver::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParameterObserver), &PY_TYPE_DEF(PythonParameterObserver), module, "PythonParameterObserver", 1);
      }

      void t_PythonParameterObserver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterObserver), "class_", make_descriptor(PythonParameterObserver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterObserver), "wrapfn_", make_descriptor(t_PythonParameterObserver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterObserver), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParameterObserver::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonParameterObserver_pythonDecRef0 },
          { "valueChanged", "(DLorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonParameterObserver_valueChanged1 },
          { "valueSpanMapChanged", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/ParameterDriver;)V", (void *) t_PythonParameterObserver_valueSpanMapChanged2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonParameterObserver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParameterObserver::initializeClass, 1)))
          return NULL;
        return t_PythonParameterObserver::wrap_Object(PythonParameterObserver(((t_PythonParameterObserver *) arg)->object.this$));
      }
      static PyObject *t_PythonParameterObserver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParameterObserver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParameterObserver_init_(t_PythonParameterObserver *self, PyObject *args, PyObject *kwds)
      {
        PythonParameterObserver object((jobject) NULL);

        INT_CALL(object = PythonParameterObserver());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParameterObserver_finalize(t_PythonParameterObserver *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParameterObserver_pythonExtension(t_PythonParameterObserver *self, PyObject *args)
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

      static void JNICALL t_PythonParameterObserver_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonParameterObserver_valueChanged1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o1 = ::org::orekit::utils::t_ParameterDriver::wrap_Object(::org::orekit::utils::ParameterDriver(a1));
        PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
        PyObject *result = PyObject_CallMethod(obj, "valueChanged", "dOO", (double) a0, o1, o2);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonParameterObserver_valueSpanMapChanged2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterObserver::mids$[PythonParameterObserver::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::utils::t_TimeSpanMap::wrap_Object(::org::orekit::utils::TimeSpanMap(a0));
        PyObject *o1 = ::org::orekit::utils::t_ParameterDriver::wrap_Object(::org::orekit::utils::ParameterDriver(a1));
        PyObject *result = PyObject_CallMethod(obj, "valueSpanMapChanged", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonParameterObserver_get__self(t_PythonParameterObserver *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSPhaseModifier.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *OnBoardAntennaOneWayGNSSPhaseModifier::mids$ = NULL;
          bool OnBoardAntennaOneWayGNSSPhaseModifier::live$ = false;

          jclass OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a3f6e98498ad57a5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaOneWayGNSSPhaseModifier::OnBoardAntennaOneWayGNSSPhaseModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3f6e98498ad57a5, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List OnBoardAntennaOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void OnBoardAntennaOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaOneWayGNSSPhaseModifier_init_(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier, t_OnBoardAntennaOneWayGNSSPhaseModifier, OnBoardAntennaOneWayGNSSPhaseModifier);

          void t_OnBoardAntennaOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), &PY_TYPE_DEF(OnBoardAntennaOneWayGNSSPhaseModifier), module, "OnBoardAntennaOneWayGNSSPhaseModifier", 0);
          }

          void t_OnBoardAntennaOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), "class_", make_descriptor(OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaOneWayGNSSPhaseModifier::wrap_Object(OnBoardAntennaOneWayGNSSPhaseModifier(((t_OnBoardAntennaOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaOneWayGNSSPhaseModifier_init_(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            OnBoardAntennaOneWayGNSSPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OnBoardAntennaOneWayGNSSPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, void *data)
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
#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *LineDatation::class$ = NULL;
        jmethodID *LineDatation::mids$ = NULL;
        bool LineDatation::live$ = false;

        jclass LineDatation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/LineDatation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDate_f359a0110559347a] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_fd347811007a6ba3] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getRate_04fd0666b613d2ab] = env->getMethodID(cls, "getRate", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate LineDatation::getDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f359a0110559347a], a0));
        }

        jdouble LineDatation::getLine(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_fd347811007a6ba3], a0.this$);
        }

        jdouble LineDatation::getRate(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRate_04fd0666b613d2ab], a0);
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
        static PyObject *t_LineDatation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LineDatation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LineDatation_getDate(t_LineDatation *self, PyObject *arg);
        static PyObject *t_LineDatation_getLine(t_LineDatation *self, PyObject *arg);
        static PyObject *t_LineDatation_getRate(t_LineDatation *self, PyObject *arg);

        static PyMethodDef t_LineDatation__methods_[] = {
          DECLARE_METHOD(t_LineDatation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineDatation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineDatation, getDate, METH_O),
          DECLARE_METHOD(t_LineDatation, getLine, METH_O),
          DECLARE_METHOD(t_LineDatation, getRate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LineDatation)[] = {
          { Py_tp_methods, t_LineDatation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LineDatation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LineDatation, t_LineDatation, LineDatation);

        void t_LineDatation::install(PyObject *module)
        {
          installType(&PY_TYPE(LineDatation), &PY_TYPE_DEF(LineDatation), module, "LineDatation", 0);
        }

        void t_LineDatation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineDatation), "class_", make_descriptor(LineDatation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineDatation), "wrapfn_", make_descriptor(t_LineDatation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineDatation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LineDatation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LineDatation::initializeClass, 1)))
            return NULL;
          return t_LineDatation::wrap_Object(LineDatation(((t_LineDatation *) arg)->object.this$));
        }
        static PyObject *t_LineDatation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LineDatation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LineDatation_getDate(t_LineDatation *self, PyObject *arg)
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

        static PyObject *t_LineDatation_getLine(t_LineDatation *self, PyObject *arg)
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

        static PyObject *t_LineDatation_getRate(t_LineDatation *self, PyObject *arg)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Collections.h"
#include "java/util/Iterator.h"
#include "java/util/NavigableSet.h"
#include "java/util/ListIterator.h"
#include "java/util/Set.h"
#include "java/util/ArrayList.h"
#include "java/util/Map.h"
#include "java/util/SortedMap.h"
#include "java/util/Deque.h"
#include "java/util/Queue.h"
#include "java/util/Comparator.h"
#include "java/util/NavigableMap.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/util/Enumeration.h"
#include "java/util/Random.h"
#include "java/lang/Boolean.h"
#include "java/util/SortedSet.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Collections::class$ = NULL;
    jmethodID *Collections::mids$ = NULL;
    bool Collections::live$ = false;
    ::java::util::List *Collections::EMPTY_LIST = NULL;
    ::java::util::Map *Collections::EMPTY_MAP = NULL;
    ::java::util::Set *Collections::EMPTY_SET = NULL;

    jclass Collections::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Collections");

        mids$ = new jmethodID[max_mid];
        mids$[mid_addAll_a00c98d8217baf6d] = env->getStaticMethodID(cls, "addAll", "(Ljava/util/Collection;[Ljava/lang/Object;)Z");
        mids$[mid_asLifoQueue_9f73f2d28b5d6b70] = env->getStaticMethodID(cls, "asLifoQueue", "(Ljava/util/Deque;)Ljava/util/Queue;");
        mids$[mid_binarySearch_7cbd1ddfa4438102] = env->getStaticMethodID(cls, "binarySearch", "(Ljava/util/List;Ljava/lang/Object;)I");
        mids$[mid_binarySearch_b88a52639c6e55a7] = env->getStaticMethodID(cls, "binarySearch", "(Ljava/util/List;Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_checkedCollection_7a74f599673b5e5b] = env->getStaticMethodID(cls, "checkedCollection", "(Ljava/util/Collection;Ljava/lang/Class;)Ljava/util/Collection;");
        mids$[mid_checkedList_0a4333ca7f44e222] = env->getStaticMethodID(cls, "checkedList", "(Ljava/util/List;Ljava/lang/Class;)Ljava/util/List;");
        mids$[mid_checkedMap_45876c77b8b61f21] = env->getStaticMethodID(cls, "checkedMap", "(Ljava/util/Map;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/Map;");
        mids$[mid_checkedNavigableMap_a6b7432b3e115a6e] = env->getStaticMethodID(cls, "checkedNavigableMap", "(Ljava/util/NavigableMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/NavigableMap;");
        mids$[mid_checkedNavigableSet_42bf6d85aa6acb2b] = env->getStaticMethodID(cls, "checkedNavigableSet", "(Ljava/util/NavigableSet;Ljava/lang/Class;)Ljava/util/NavigableSet;");
        mids$[mid_checkedQueue_761439f2de0a40d9] = env->getStaticMethodID(cls, "checkedQueue", "(Ljava/util/Queue;Ljava/lang/Class;)Ljava/util/Queue;");
        mids$[mid_checkedSet_bc3ebe89eb9c5695] = env->getStaticMethodID(cls, "checkedSet", "(Ljava/util/Set;Ljava/lang/Class;)Ljava/util/Set;");
        mids$[mid_checkedSortedMap_42af903c48fb5f24] = env->getStaticMethodID(cls, "checkedSortedMap", "(Ljava/util/SortedMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/SortedMap;");
        mids$[mid_checkedSortedSet_39eef03772a2d24c] = env->getStaticMethodID(cls, "checkedSortedSet", "(Ljava/util/SortedSet;Ljava/lang/Class;)Ljava/util/SortedSet;");
        mids$[mid_copy_29c3e061cbeaa98b] = env->getStaticMethodID(cls, "copy", "(Ljava/util/List;Ljava/util/List;)V");
        mids$[mid_disjoint_f95ed0d112bf7475] = env->getStaticMethodID(cls, "disjoint", "(Ljava/util/Collection;Ljava/util/Collection;)Z");
        mids$[mid_emptyEnumeration_57aeac8743844cd2] = env->getStaticMethodID(cls, "emptyEnumeration", "()Ljava/util/Enumeration;");
        mids$[mid_emptyIterator_fc7780bc5d5b73b0] = env->getStaticMethodID(cls, "emptyIterator", "()Ljava/util/Iterator;");
        mids$[mid_emptyList_e62d3bb06d56d7e3] = env->getStaticMethodID(cls, "emptyList", "()Ljava/util/List;");
        mids$[mid_emptyListIterator_d6d68fe3f5974930] = env->getStaticMethodID(cls, "emptyListIterator", "()Ljava/util/ListIterator;");
        mids$[mid_emptyMap_810bed48fafb0b9a] = env->getStaticMethodID(cls, "emptyMap", "()Ljava/util/Map;");
        mids$[mid_emptyNavigableMap_8dd7b68149ce41ea] = env->getStaticMethodID(cls, "emptyNavigableMap", "()Ljava/util/NavigableMap;");
        mids$[mid_emptyNavigableSet_ea2f3a2f5483365c] = env->getStaticMethodID(cls, "emptyNavigableSet", "()Ljava/util/NavigableSet;");
        mids$[mid_emptySet_7e8f11dd23d1142c] = env->getStaticMethodID(cls, "emptySet", "()Ljava/util/Set;");
        mids$[mid_emptySortedMap_8b7b83029e197aec] = env->getStaticMethodID(cls, "emptySortedMap", "()Ljava/util/SortedMap;");
        mids$[mid_emptySortedSet_7961e54fd3a47d94] = env->getStaticMethodID(cls, "emptySortedSet", "()Ljava/util/SortedSet;");
        mids$[mid_enumeration_f9ddb40f1905ce57] = env->getStaticMethodID(cls, "enumeration", "(Ljava/util/Collection;)Ljava/util/Enumeration;");
        mids$[mid_fill_86290401b1892989] = env->getStaticMethodID(cls, "fill", "(Ljava/util/List;Ljava/lang/Object;)V");
        mids$[mid_frequency_254ef0cfa4cf35cc] = env->getStaticMethodID(cls, "frequency", "(Ljava/util/Collection;Ljava/lang/Object;)I");
        mids$[mid_indexOfSubList_6fc0c7562beacd8b] = env->getStaticMethodID(cls, "indexOfSubList", "(Ljava/util/List;Ljava/util/List;)I");
        mids$[mid_lastIndexOfSubList_6fc0c7562beacd8b] = env->getStaticMethodID(cls, "lastIndexOfSubList", "(Ljava/util/List;Ljava/util/List;)I");
        mids$[mid_list_a7cb9df2eba93e37] = env->getStaticMethodID(cls, "list", "(Ljava/util/Enumeration;)Ljava/util/ArrayList;");
        mids$[mid_max_878a15ed6ec12a43] = env->getStaticMethodID(cls, "max", "(Ljava/util/Collection;)Ljava/lang/Object;");
        mids$[mid_max_911e494f16ce93be] = env->getStaticMethodID(cls, "max", "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;");
        mids$[mid_min_878a15ed6ec12a43] = env->getStaticMethodID(cls, "min", "(Ljava/util/Collection;)Ljava/lang/Object;");
        mids$[mid_min_911e494f16ce93be] = env->getStaticMethodID(cls, "min", "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;");
        mids$[mid_nCopies_71a580e6260f357e] = env->getStaticMethodID(cls, "nCopies", "(ILjava/lang/Object;)Ljava/util/List;");
        mids$[mid_newSetFromMap_32344ba4e91ff7ed] = env->getStaticMethodID(cls, "newSetFromMap", "(Ljava/util/Map;)Ljava/util/Set;");
        mids$[mid_replaceAll_4db7d8e46f6ab12a] = env->getStaticMethodID(cls, "replaceAll", "(Ljava/util/List;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_reverse_0e7c3032c7c93ed3] = env->getStaticMethodID(cls, "reverse", "(Ljava/util/List;)V");
        mids$[mid_reverseOrder_127b1bec8b0c3ae1] = env->getStaticMethodID(cls, "reverseOrder", "()Ljava/util/Comparator;");
        mids$[mid_reverseOrder_09cb371d3e63c195] = env->getStaticMethodID(cls, "reverseOrder", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_rotate_33800eba82168d94] = env->getStaticMethodID(cls, "rotate", "(Ljava/util/List;I)V");
        mids$[mid_shuffle_0e7c3032c7c93ed3] = env->getStaticMethodID(cls, "shuffle", "(Ljava/util/List;)V");
        mids$[mid_shuffle_b2644b8c08dd7f76] = env->getStaticMethodID(cls, "shuffle", "(Ljava/util/List;Ljava/util/Random;)V");
        mids$[mid_singleton_4cf7e79da59e06aa] = env->getStaticMethodID(cls, "singleton", "(Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_singletonList_fc892452fc84d714] = env->getStaticMethodID(cls, "singletonList", "(Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_singletonMap_dc0b43c0c4f53fdb] = env->getStaticMethodID(cls, "singletonMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_sort_0e7c3032c7c93ed3] = env->getStaticMethodID(cls, "sort", "(Ljava/util/List;)V");
        mids$[mid_sort_dcc1592c40bba7c7] = env->getStaticMethodID(cls, "sort", "(Ljava/util/List;Ljava/util/Comparator;)V");
        mids$[mid_swap_fe3805aaf1ddc2d7] = env->getStaticMethodID(cls, "swap", "(Ljava/util/List;II)V");
        mids$[mid_synchronizedCollection_394fcc3577736ad2] = env->getStaticMethodID(cls, "synchronizedCollection", "(Ljava/util/Collection;)Ljava/util/Collection;");
        mids$[mid_synchronizedList_d1fc3c05f458e1a3] = env->getStaticMethodID(cls, "synchronizedList", "(Ljava/util/List;)Ljava/util/List;");
        mids$[mid_synchronizedMap_1219d2729927aa1d] = env->getStaticMethodID(cls, "synchronizedMap", "(Ljava/util/Map;)Ljava/util/Map;");
        mids$[mid_synchronizedNavigableMap_c9765687fb3f7b89] = env->getStaticMethodID(cls, "synchronizedNavigableMap", "(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;");
        mids$[mid_synchronizedNavigableSet_f4bd145e522e4927] = env->getStaticMethodID(cls, "synchronizedNavigableSet", "(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;");
        mids$[mid_synchronizedSet_ff856b24bc408e63] = env->getStaticMethodID(cls, "synchronizedSet", "(Ljava/util/Set;)Ljava/util/Set;");
        mids$[mid_synchronizedSortedMap_fe0c1860900c418e] = env->getStaticMethodID(cls, "synchronizedSortedMap", "(Ljava/util/SortedMap;)Ljava/util/SortedMap;");
        mids$[mid_synchronizedSortedSet_9b7819f10cf58e34] = env->getStaticMethodID(cls, "synchronizedSortedSet", "(Ljava/util/SortedSet;)Ljava/util/SortedSet;");
        mids$[mid_unmodifiableCollection_394fcc3577736ad2] = env->getStaticMethodID(cls, "unmodifiableCollection", "(Ljava/util/Collection;)Ljava/util/Collection;");
        mids$[mid_unmodifiableList_d1fc3c05f458e1a3] = env->getStaticMethodID(cls, "unmodifiableList", "(Ljava/util/List;)Ljava/util/List;");
        mids$[mid_unmodifiableMap_1219d2729927aa1d] = env->getStaticMethodID(cls, "unmodifiableMap", "(Ljava/util/Map;)Ljava/util/Map;");
        mids$[mid_unmodifiableNavigableMap_c9765687fb3f7b89] = env->getStaticMethodID(cls, "unmodifiableNavigableMap", "(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;");
        mids$[mid_unmodifiableNavigableSet_f4bd145e522e4927] = env->getStaticMethodID(cls, "unmodifiableNavigableSet", "(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;");
        mids$[mid_unmodifiableSet_ff856b24bc408e63] = env->getStaticMethodID(cls, "unmodifiableSet", "(Ljava/util/Set;)Ljava/util/Set;");
        mids$[mid_unmodifiableSortedMap_fe0c1860900c418e] = env->getStaticMethodID(cls, "unmodifiableSortedMap", "(Ljava/util/SortedMap;)Ljava/util/SortedMap;");
        mids$[mid_unmodifiableSortedSet_9b7819f10cf58e34] = env->getStaticMethodID(cls, "unmodifiableSortedSet", "(Ljava/util/SortedSet;)Ljava/util/SortedSet;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        EMPTY_LIST = new ::java::util::List(env->getStaticObjectField(cls, "EMPTY_LIST", "Ljava/util/List;"));
        EMPTY_MAP = new ::java::util::Map(env->getStaticObjectField(cls, "EMPTY_MAP", "Ljava/util/Map;"));
        EMPTY_SET = new ::java::util::Set(env->getStaticObjectField(cls, "EMPTY_SET", "Ljava/util/Set;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Collections::addAll(const ::java::util::Collection & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_addAll_a00c98d8217baf6d], a0.this$, a1.this$);
    }

    ::java::util::Queue Collections::asLifoQueue(const ::java::util::Deque & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Queue(env->callStaticObjectMethod(cls, mids$[mid_asLifoQueue_9f73f2d28b5d6b70], a0.this$));
    }

    jint Collections::binarySearch(const ::java::util::List & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_7cbd1ddfa4438102], a0.this$, a1.this$);
    }

    jint Collections::binarySearch(const ::java::util::List & a0, const ::java::lang::Object & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_b88a52639c6e55a7], a0.this$, a1.this$, a2.this$);
    }

    ::java::util::Collection Collections::checkedCollection(const ::java::util::Collection & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_checkedCollection_7a74f599673b5e5b], a0.this$, a1.this$));
    }

    ::java::util::List Collections::checkedList(const ::java::util::List & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_checkedList_0a4333ca7f44e222], a0.this$, a1.this$));
    }

    ::java::util::Map Collections::checkedMap(const ::java::util::Map & a0, const ::java::lang::Class & a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_checkedMap_45876c77b8b61f21], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::NavigableMap Collections::checkedNavigableMap(const ::java::util::NavigableMap & a0, const ::java::lang::Class & a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_checkedNavigableMap_a6b7432b3e115a6e], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::NavigableSet Collections::checkedNavigableSet(const ::java::util::NavigableSet & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_checkedNavigableSet_42bf6d85aa6acb2b], a0.this$, a1.this$));
    }

    ::java::util::Queue Collections::checkedQueue(const ::java::util::Queue & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Queue(env->callStaticObjectMethod(cls, mids$[mid_checkedQueue_761439f2de0a40d9], a0.this$, a1.this$));
    }

    ::java::util::Set Collections::checkedSet(const ::java::util::Set & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_checkedSet_bc3ebe89eb9c5695], a0.this$, a1.this$));
    }

    ::java::util::SortedMap Collections::checkedSortedMap(const ::java::util::SortedMap & a0, const ::java::lang::Class & a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_checkedSortedMap_42af903c48fb5f24], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::SortedSet Collections::checkedSortedSet(const ::java::util::SortedSet & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_checkedSortedSet_39eef03772a2d24c], a0.this$, a1.this$));
    }

    void Collections::copy(const ::java::util::List & a0, const ::java::util::List & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_copy_29c3e061cbeaa98b], a0.this$, a1.this$);
    }

    jboolean Collections::disjoint(const ::java::util::Collection & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_disjoint_f95ed0d112bf7475], a0.this$, a1.this$);
    }

    ::java::util::Enumeration Collections::emptyEnumeration()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Enumeration(env->callStaticObjectMethod(cls, mids$[mid_emptyEnumeration_57aeac8743844cd2]));
    }

    ::java::util::Iterator Collections::emptyIterator()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Iterator(env->callStaticObjectMethod(cls, mids$[mid_emptyIterator_fc7780bc5d5b73b0]));
    }

    ::java::util::List Collections::emptyList()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_emptyList_e62d3bb06d56d7e3]));
    }

    ::java::util::ListIterator Collections::emptyListIterator()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::ListIterator(env->callStaticObjectMethod(cls, mids$[mid_emptyListIterator_d6d68fe3f5974930]));
    }

    ::java::util::Map Collections::emptyMap()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_emptyMap_810bed48fafb0b9a]));
    }

    ::java::util::NavigableMap Collections::emptyNavigableMap()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_emptyNavigableMap_8dd7b68149ce41ea]));
    }

    ::java::util::NavigableSet Collections::emptyNavigableSet()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_emptyNavigableSet_ea2f3a2f5483365c]));
    }

    ::java::util::Set Collections::emptySet()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_emptySet_7e8f11dd23d1142c]));
    }

    ::java::util::SortedMap Collections::emptySortedMap()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_emptySortedMap_8b7b83029e197aec]));
    }

    ::java::util::SortedSet Collections::emptySortedSet()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_emptySortedSet_7961e54fd3a47d94]));
    }

    ::java::util::Enumeration Collections::enumeration(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Enumeration(env->callStaticObjectMethod(cls, mids$[mid_enumeration_f9ddb40f1905ce57], a0.this$));
    }

    void Collections::fill(const ::java::util::List & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_86290401b1892989], a0.this$, a1.this$);
    }

    jint Collections::frequency(const ::java::util::Collection & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_frequency_254ef0cfa4cf35cc], a0.this$, a1.this$);
    }

    jint Collections::indexOfSubList(const ::java::util::List & a0, const ::java::util::List & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_indexOfSubList_6fc0c7562beacd8b], a0.this$, a1.this$);
    }

    jint Collections::lastIndexOfSubList(const ::java::util::List & a0, const ::java::util::List & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_lastIndexOfSubList_6fc0c7562beacd8b], a0.this$, a1.this$);
    }

    ::java::util::ArrayList Collections::list(const ::java::util::Enumeration & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::ArrayList(env->callStaticObjectMethod(cls, mids$[mid_list_a7cb9df2eba93e37], a0.this$));
    }

    ::java::lang::Object Collections::max$(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_max_878a15ed6ec12a43], a0.this$));
    }

    ::java::lang::Object Collections::max$(const ::java::util::Collection & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_max_911e494f16ce93be], a0.this$, a1.this$));
    }

    ::java::lang::Object Collections::min$(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_min_878a15ed6ec12a43], a0.this$));
    }

    ::java::lang::Object Collections::min$(const ::java::util::Collection & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_min_911e494f16ce93be], a0.this$, a1.this$));
    }

    ::java::util::List Collections::nCopies(jint a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_nCopies_71a580e6260f357e], a0, a1.this$));
    }

    ::java::util::Set Collections::newSetFromMap(const ::java::util::Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_newSetFromMap_32344ba4e91ff7ed], a0.this$));
    }

    jboolean Collections::replaceAll(const ::java::util::List & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_replaceAll_4db7d8e46f6ab12a], a0.this$, a1.this$, a2.this$);
    }

    void Collections::reverse(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_reverse_0e7c3032c7c93ed3], a0.this$);
    }

    ::java::util::Comparator Collections::reverseOrder()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_reverseOrder_127b1bec8b0c3ae1]));
    }

    ::java::util::Comparator Collections::reverseOrder(const ::java::util::Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_reverseOrder_09cb371d3e63c195], a0.this$));
    }

    void Collections::rotate(const ::java::util::List & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_rotate_33800eba82168d94], a0.this$, a1);
    }

    void Collections::shuffle(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_shuffle_0e7c3032c7c93ed3], a0.this$);
    }

    void Collections::shuffle(const ::java::util::List & a0, const ::java::util::Random & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_shuffle_b2644b8c08dd7f76], a0.this$, a1.this$);
    }

    ::java::util::Set Collections::singleton(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_singleton_4cf7e79da59e06aa], a0.this$));
    }

    ::java::util::List Collections::singletonList(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_singletonList_fc892452fc84d714], a0.this$));
    }

    ::java::util::Map Collections::singletonMap(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_singletonMap_dc0b43c0c4f53fdb], a0.this$, a1.this$));
    }

    void Collections::sort(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_0e7c3032c7c93ed3], a0.this$);
    }

    void Collections::sort(const ::java::util::List & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_dcc1592c40bba7c7], a0.this$, a1.this$);
    }

    void Collections::swap(const ::java::util::List & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_swap_fe3805aaf1ddc2d7], a0.this$, a1, a2);
    }

    ::java::util::Collection Collections::synchronizedCollection(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_synchronizedCollection_394fcc3577736ad2], a0.this$));
    }

    ::java::util::List Collections::synchronizedList(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_synchronizedList_d1fc3c05f458e1a3], a0.this$));
    }

    ::java::util::Map Collections::synchronizedMap(const ::java::util::Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_synchronizedMap_1219d2729927aa1d], a0.this$));
    }

    ::java::util::NavigableMap Collections::synchronizedNavigableMap(const ::java::util::NavigableMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_synchronizedNavigableMap_c9765687fb3f7b89], a0.this$));
    }

    ::java::util::NavigableSet Collections::synchronizedNavigableSet(const ::java::util::NavigableSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_synchronizedNavigableSet_f4bd145e522e4927], a0.this$));
    }

    ::java::util::Set Collections::synchronizedSet(const ::java::util::Set & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_synchronizedSet_ff856b24bc408e63], a0.this$));
    }

    ::java::util::SortedMap Collections::synchronizedSortedMap(const ::java::util::SortedMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_synchronizedSortedMap_fe0c1860900c418e], a0.this$));
    }

    ::java::util::SortedSet Collections::synchronizedSortedSet(const ::java::util::SortedSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_synchronizedSortedSet_9b7819f10cf58e34], a0.this$));
    }

    ::java::util::Collection Collections::unmodifiableCollection(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableCollection_394fcc3577736ad2], a0.this$));
    }

    ::java::util::List Collections::unmodifiableList(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableList_d1fc3c05f458e1a3], a0.this$));
    }

    ::java::util::Map Collections::unmodifiableMap(const ::java::util::Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableMap_1219d2729927aa1d], a0.this$));
    }

    ::java::util::NavigableMap Collections::unmodifiableNavigableMap(const ::java::util::NavigableMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableNavigableMap_c9765687fb3f7b89], a0.this$));
    }

    ::java::util::NavigableSet Collections::unmodifiableNavigableSet(const ::java::util::NavigableSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableNavigableSet_f4bd145e522e4927], a0.this$));
    }

    ::java::util::Set Collections::unmodifiableSet(const ::java::util::Set & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableSet_ff856b24bc408e63], a0.this$));
    }

    ::java::util::SortedMap Collections::unmodifiableSortedMap(const ::java::util::SortedMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableSortedMap_fe0c1860900c418e], a0.this$));
    }

    ::java::util::SortedSet Collections::unmodifiableSortedSet(const ::java::util::SortedSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableSortedSet_9b7819f10cf58e34], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Collections_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_addAll(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_asLifoQueue(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_binarySearch(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedCollection(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedList(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedNavigableMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedNavigableSet(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedQueue(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedSet(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedSortedMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedSortedSet(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_copy(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_disjoint(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_emptyEnumeration(PyTypeObject *type);
    static PyObject *t_Collections_emptyIterator(PyTypeObject *type);
    static PyObject *t_Collections_emptyList(PyTypeObject *type);
    static PyObject *t_Collections_emptyListIterator(PyTypeObject *type);
    static PyObject *t_Collections_emptyMap(PyTypeObject *type);
    static PyObject *t_Collections_emptyNavigableMap(PyTypeObject *type);
    static PyObject *t_Collections_emptyNavigableSet(PyTypeObject *type);
    static PyObject *t_Collections_emptySet(PyTypeObject *type);
    static PyObject *t_Collections_emptySortedMap(PyTypeObject *type);
    static PyObject *t_Collections_emptySortedSet(PyTypeObject *type);
    static PyObject *t_Collections_enumeration(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_fill(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_frequency(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_indexOfSubList(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_lastIndexOfSubList(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_list(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_nCopies(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_newSetFromMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_replaceAll(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_reverse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_reverseOrder(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_rotate(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_shuffle(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_singleton(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_singletonList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_singletonMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_sort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_swap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_synchronizedCollection(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedNavigableMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedNavigableSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedSortedMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedSortedSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableCollection(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableNavigableMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableNavigableSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableSortedMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableSortedSet(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Collections__methods_[] = {
      DECLARE_METHOD(t_Collections, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, addAll, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, asLifoQueue, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, binarySearch, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedCollection, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedList, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedNavigableMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedNavigableSet, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedQueue, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedSet, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedSortedMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedSortedSet, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, copy, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, disjoint, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyEnumeration, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyIterator, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyList, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyListIterator, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyMap, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyNavigableMap, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyNavigableSet, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptySet, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptySortedMap, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptySortedSet, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, enumeration, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, fill, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, frequency, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, indexOfSubList, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, lastIndexOfSubList, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, list, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, nCopies, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, newSetFromMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, replaceAll, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, reverse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, reverseOrder, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, rotate, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, shuffle, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, singleton, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, singletonList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, singletonMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, sort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, swap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedCollection, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedNavigableMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedNavigableSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedSortedMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedSortedSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableCollection, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableNavigableMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableNavigableSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableSortedMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableSortedSet, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Collections)[] = {
      { Py_tp_methods, t_Collections__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Collections)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Collections, t_Collections, Collections);

    void t_Collections::install(PyObject *module)
    {
      installType(&PY_TYPE(Collections), &PY_TYPE_DEF(Collections), module, "Collections", 0);
    }

    void t_Collections::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "class_", make_descriptor(Collections::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "wrapfn_", make_descriptor(t_Collections::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "boxfn_", make_descriptor(boxObject));
      env->getClass(Collections::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "EMPTY_LIST", make_descriptor(::java::util::t_List::wrap_Object(*Collections::EMPTY_LIST)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "EMPTY_MAP", make_descriptor(::java::util::t_Map::wrap_Object(*Collections::EMPTY_MAP)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "EMPTY_SET", make_descriptor(::java::util::t_Set::wrap_Object(*Collections::EMPTY_SET)));
    }

    static PyObject *t_Collections_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Collections::initializeClass, 1)))
        return NULL;
      return t_Collections::wrap_Object(Collections(((t_Collections *) arg)->object.this$));
    }
    static PyObject *t_Collections_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Collections::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Collections_addAll(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      JArray< ::java::lang::Object > a1((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "K[o", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::addAll(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "addAll", args);
      return NULL;
    }

    static PyObject *t_Collections_asLifoQueue(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Deque a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Queue result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Deque::initializeClass, &a0, &p0, ::java::util::t_Deque::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::asLifoQueue(a0));
        return ::java::util::t_Queue::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "asLifoQueue", arg);
      return NULL;
    }

    static PyObject *t_Collections_binarySearch(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "Ko", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(result = ::java::util::Collections::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "KoK", ::java::util::List::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::binarySearch(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "binarySearch", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedCollection(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::Collection result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedCollection(a0, a1));
        return ::java::util::t_Collection::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedCollection", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedList(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedList(a0, a1));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedList", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedMap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::Class a2((jobject) NULL);
      PyTypeObject **p2;
      ::java::util::Map result((jobject) NULL);

      if (!parseArgs(args, "KKK", ::java::util::Map::initializeClass, ::java::lang::Class::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_, &a2, &p2, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedMap(a0, a1, a2));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedMap", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedNavigableMap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::NavigableMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::Class a2((jobject) NULL);
      PyTypeObject **p2;
      ::java::util::NavigableMap result((jobject) NULL);

      if (!parseArgs(args, "KKK", ::java::util::NavigableMap::initializeClass, ::java::lang::Class::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_, &a2, &p2, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedNavigableMap(a0, a1, a2));
        return ::java::util::t_NavigableMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedNavigableMap", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedNavigableSet(PyTypeObject *type, PyObject *args)
    {
      ::java::util::NavigableSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::NavigableSet result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::NavigableSet::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_NavigableSet::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedNavigableSet(a0, a1));
        return ::java::util::t_NavigableSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedNavigableSet", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedQueue(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Queue a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::Queue result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::Queue::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Queue::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedQueue(a0, a1));
        return ::java::util::t_Queue::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedQueue", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedSet(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Set a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::Set::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedSet(a0, a1));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedSet", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedSortedMap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::SortedMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::Class a2((jobject) NULL);
      PyTypeObject **p2;
      ::java::util::SortedMap result((jobject) NULL);

      if (!parseArgs(args, "KKK", ::java::util::SortedMap::initializeClass, ::java::lang::Class::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_SortedMap::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_, &a2, &p2, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedSortedMap(a0, a1, a2));
        return ::java::util::t_SortedMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedSortedMap", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedSortedSet(PyTypeObject *type, PyObject *args)
    {
      ::java::util::SortedSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::SortedSet result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::SortedSet::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedSortedSet(a0, a1));
        return ::java::util::t_SortedSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedSortedSet", args);
      return NULL;
    }

    static PyObject *t_Collections_copy(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List a1((jobject) NULL);
      PyTypeObject **p1;

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(::java::util::Collections::copy(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "copy", args);
      return NULL;
    }

    static PyObject *t_Collections_disjoint(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      jboolean result;

      if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::disjoint(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "disjoint", args);
      return NULL;
    }

    static PyObject *t_Collections_emptyEnumeration(PyTypeObject *type)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyEnumeration());
      return ::java::util::t_Enumeration::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyIterator(PyTypeObject *type)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyIterator());
      return ::java::util::t_Iterator::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyList(PyTypeObject *type)
    {
      ::java::util::List result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyList());
      return ::java::util::t_List::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyListIterator(PyTypeObject *type)
    {
      ::java::util::ListIterator result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyListIterator());
      return ::java::util::t_ListIterator::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyMap(PyTypeObject *type)
    {
      ::java::util::Map result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyMap());
      return ::java::util::t_Map::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyNavigableMap(PyTypeObject *type)
    {
      ::java::util::NavigableMap result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyNavigableMap());
      return ::java::util::t_NavigableMap::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyNavigableSet(PyTypeObject *type)
    {
      ::java::util::NavigableSet result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyNavigableSet());
      return ::java::util::t_NavigableSet::wrap_Object(result);
    }

    static PyObject *t_Collections_emptySet(PyTypeObject *type)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptySet());
      return ::java::util::t_Set::wrap_Object(result);
    }

    static PyObject *t_Collections_emptySortedMap(PyTypeObject *type)
    {
      ::java::util::SortedMap result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptySortedMap());
      return ::java::util::t_SortedMap::wrap_Object(result);
    }

    static PyObject *t_Collections_emptySortedSet(PyTypeObject *type)
    {
      ::java::util::SortedSet result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptySortedSet());
      return ::java::util::t_SortedSet::wrap_Object(result);
    }

    static PyObject *t_Collections_enumeration(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::enumeration(a0));
        return ::java::util::t_Enumeration::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "enumeration", arg);
      return NULL;
    }

    static PyObject *t_Collections_fill(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Object a1((jobject) NULL);

      if (!parseArgs(args, "Ko", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
      {
        OBJ_CALL(::java::util::Collections::fill(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "fill", args);
      return NULL;
    }

    static PyObject *t_Collections_frequency(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Object a1((jobject) NULL);
      jint result;

      if (!parseArgs(args, "Ko", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::frequency(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "frequency", args);
      return NULL;
    }

    static PyObject *t_Collections_indexOfSubList(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List a1((jobject) NULL);
      PyTypeObject **p1;
      jint result;

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::indexOfSubList(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "indexOfSubList", args);
      return NULL;
    }

    static PyObject *t_Collections_lastIndexOfSubList(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List a1((jobject) NULL);
      PyTypeObject **p1;
      jint result;

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::lastIndexOfSubList(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "lastIndexOfSubList", args);
      return NULL;
    }

    static PyObject *t_Collections_list(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Enumeration a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::ArrayList result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Enumeration::initializeClass, &a0, &p0, ::java::util::t_Enumeration::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::list(a0));
        return ::java::util::t_ArrayList::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "list", arg);
      return NULL;
    }

    static PyObject *t_Collections_max(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::max$(a0));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::max$(a0, a1));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Collections_min(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::min$(a0));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::min$(a0, a1));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Collections_nCopies(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "Io", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::nCopies(a0, a1));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "nCopies", args);
      return NULL;
    }

    static PyObject *t_Collections_newSetFromMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::newSetFromMap(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "newSetFromMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_replaceAll(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object a2((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "Koo", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
      {
        OBJ_CALL(result = ::java::util::Collections::replaceAll(a0, a1, a2));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "replaceAll", args);
      return NULL;
    }

    static PyObject *t_Collections_reverse(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(::java::util::Collections::reverse(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "reverse", arg);
      return NULL;
    }

    static PyObject *t_Collections_reverseOrder(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::Comparator result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Collections::reverseOrder());
          return ::java::util::t_Comparator::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Comparator a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::reverseOrder(a0));
            return ::java::util::t_Comparator::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "reverseOrder", args);
      return NULL;
    }

    static PyObject *t_Collections_rotate(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      jint a1;

      if (!parseArgs(args, "KI", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
      {
        OBJ_CALL(::java::util::Collections::rotate(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "rotate", args);
      return NULL;
    }

    static PyObject *t_Collections_shuffle(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::java::util::Collections::shuffle(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Random a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::java::util::Random::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(::java::util::Collections::shuffle(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "shuffle", args);
      return NULL;
    }

    static PyObject *t_Collections_singleton(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::util::Collections::singleton(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "singleton", arg);
      return NULL;
    }

    static PyObject *t_Collections_singletonList(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::util::Collections::singletonList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "singletonList", arg);
      return NULL;
    }

    static PyObject *t_Collections_singletonMap(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::util::Map result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::singletonMap(a0, a1));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "singletonMap", args);
      return NULL;
    }

    static PyObject *t_Collections_sort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::java::util::Collections::sort(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Collections::sort(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "sort", args);
      return NULL;
    }

    static PyObject *t_Collections_swap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      jint a1;
      jint a2;

      if (!parseArgs(args, "KII", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
      {
        OBJ_CALL(::java::util::Collections::swap(a0, a1, a2));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "swap", args);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedCollection(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedCollection(a0));
        return ::java::util::t_Collection::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedCollection", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedList(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedList", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Map result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedMap(a0));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedNavigableMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableMap::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedNavigableMap(a0));
        return ::java::util::t_NavigableMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedNavigableMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedNavigableSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableSet::initializeClass, &a0, &p0, ::java::util::t_NavigableSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedNavigableSet(a0));
        return ::java::util::t_NavigableSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedNavigableSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Set a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedSet(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedSortedMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedMap::initializeClass, &a0, &p0, ::java::util::t_SortedMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedSortedMap(a0));
        return ::java::util::t_SortedMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedSortedMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedSortedSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedSortedSet(a0));
        return ::java::util::t_SortedSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedSortedSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableCollection(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableCollection(a0));
        return ::java::util::t_Collection::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableCollection", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableList(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableList", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Map result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableMap(a0));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableNavigableMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableMap::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableNavigableMap(a0));
        return ::java::util::t_NavigableMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableNavigableMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableNavigableSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableSet::initializeClass, &a0, &p0, ::java::util::t_NavigableSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableNavigableSet(a0));
        return ::java::util::t_NavigableSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableNavigableSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Set a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableSet(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableSortedMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedMap::initializeClass, &a0, &p0, ::java::util::t_SortedMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableSortedMap(a0));
        return ::java::util::t_SortedMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableSortedMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableSortedSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableSortedSet(a0));
        return ::java::util::t_SortedSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableSortedSet", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/PythonIonosphericMappingFunction.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *PythonIonosphericMappingFunction::class$ = NULL;
          jmethodID *PythonIonosphericMappingFunction::mids$ = NULL;
          bool PythonIonosphericMappingFunction::live$ = false;

          jclass PythonIonosphericMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/PythonIonosphericMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_mappingFactor_04fd0666b613d2ab] = env->getMethodID(cls, "mappingFactor", "(D)D");
              mids$[mid_mappingFactor_6e00dc5eb352fe51] = env->getMethodID(cls, "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactor_T_6e00dc5eb352fe51] = env->getMethodID(cls, "mappingFactor_T", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIonosphericMappingFunction::PythonIonosphericMappingFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonIonosphericMappingFunction::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonIonosphericMappingFunction::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonIonosphericMappingFunction::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonIonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonIonosphericMappingFunction_init_(t_PythonIonosphericMappingFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIonosphericMappingFunction_finalize(t_PythonIonosphericMappingFunction *self);
          static PyObject *t_PythonIonosphericMappingFunction_pythonExtension(t_PythonIonosphericMappingFunction *self, PyObject *args);
          static jdouble JNICALL t_PythonIonosphericMappingFunction_mappingFactor0(JNIEnv *jenv, jobject jobj, jdouble a0);
          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor_T2(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonIonosphericMappingFunction_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonIonosphericMappingFunction_get__self(t_PythonIonosphericMappingFunction *self, void *data);
          static PyGetSetDef t_PythonIonosphericMappingFunction__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIonosphericMappingFunction, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIonosphericMappingFunction__methods_[] = {
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIonosphericMappingFunction, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIonosphericMappingFunction)[] = {
            { Py_tp_methods, t_PythonIonosphericMappingFunction__methods_ },
            { Py_tp_init, (void *) t_PythonIonosphericMappingFunction_init_ },
            { Py_tp_getset, t_PythonIonosphericMappingFunction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIonosphericMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonIonosphericMappingFunction, t_PythonIonosphericMappingFunction, PythonIonosphericMappingFunction);

          void t_PythonIonosphericMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIonosphericMappingFunction), &PY_TYPE_DEF(PythonIonosphericMappingFunction), module, "PythonIonosphericMappingFunction", 1);
          }

          void t_PythonIonosphericMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericMappingFunction), "class_", make_descriptor(PythonIonosphericMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericMappingFunction), "wrapfn_", make_descriptor(t_PythonIonosphericMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericMappingFunction), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIonosphericMappingFunction::initializeClass);
            JNINativeMethod methods[] = {
              { "mappingFactor", "(D)D", (void *) t_PythonIonosphericMappingFunction_mappingFactor0 },
              { "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericMappingFunction_mappingFactor1 },
              { "mappingFactor_T", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericMappingFunction_mappingFactor_T2 },
              { "pythonDecRef", "()V", (void *) t_PythonIonosphericMappingFunction_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonIonosphericMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIonosphericMappingFunction::initializeClass, 1)))
              return NULL;
            return t_PythonIonosphericMappingFunction::wrap_Object(PythonIonosphericMappingFunction(((t_PythonIonosphericMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_PythonIonosphericMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIonosphericMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonIonosphericMappingFunction_init_(t_PythonIonosphericMappingFunction *self, PyObject *args, PyObject *kwds)
          {
            PythonIonosphericMappingFunction object((jobject) NULL);

            INT_CALL(object = PythonIonosphericMappingFunction());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonIonosphericMappingFunction_finalize(t_PythonIonosphericMappingFunction *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIonosphericMappingFunction_pythonExtension(t_PythonIonosphericMappingFunction *self, PyObject *args)
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

          static jdouble JNICALL t_PythonIonosphericMappingFunction_mappingFactor0(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "mappingFactor", "d", (double) a0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("mappingFactor", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactor", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("mappingFactor", result);
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

          static jobject JNICALL t_PythonIonosphericMappingFunction_mappingFactor_T2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "mappingFactor_T", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("mappingFactor_T", result);
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

          static void JNICALL t_PythonIonosphericMappingFunction_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIonosphericMappingFunction::mids$[PythonIonosphericMappingFunction::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonIonosphericMappingFunction_get__self(t_PythonIonosphericMappingFunction *self, void *data)
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
#include "org/hipparchus/distribution/discrete/PascalDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *PascalDistribution::class$ = NULL;
        jmethodID *PascalDistribution::mids$ = NULL;
        bool PascalDistribution::live$ = false;

        jclass PascalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/PascalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_cumulativeProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumberOfSuccesses_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfSuccesses", "()I");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getProbabilityOfSuccess_b74f83833fdad017] = env->getMethodID(cls, "getProbabilityOfSuccess", "()D");
            mids$[mid_getSupportLowerBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_2afcbc21f4e57ab2] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PascalDistribution::PascalDistribution(jint a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

        jdouble PascalDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_2afcbc21f4e57ab2], a0);
        }

        jint PascalDistribution::getNumberOfSuccesses() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfSuccesses_55546ef6a647f39b]);
        }

        jdouble PascalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble PascalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble PascalDistribution::getProbabilityOfSuccess() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProbabilityOfSuccess_b74f83833fdad017]);
        }

        jint PascalDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_55546ef6a647f39b]);
        }

        jint PascalDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_55546ef6a647f39b]);
        }

        jboolean PascalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble PascalDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_2afcbc21f4e57ab2], a0);
        }

        jdouble PascalDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_2afcbc21f4e57ab2], a0);
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
      namespace discrete {
        static PyObject *t_PascalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PascalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PascalDistribution_init_(t_PascalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PascalDistribution_cumulativeProbability(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getNumberOfSuccesses(t_PascalDistribution *self);
        static PyObject *t_PascalDistribution_getNumericalMean(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getNumericalVariance(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getProbabilityOfSuccess(t_PascalDistribution *self);
        static PyObject *t_PascalDistribution_getSupportLowerBound(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getSupportUpperBound(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_isSupportConnected(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_logProbability(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_probability(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_get__numberOfSuccesses(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__numericalMean(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__numericalVariance(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__probabilityOfSuccess(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__supportConnected(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__supportLowerBound(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__supportUpperBound(t_PascalDistribution *self, void *data);
        static PyGetSetDef t_PascalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_PascalDistribution, numberOfSuccesses),
          DECLARE_GET_FIELD(t_PascalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_PascalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_PascalDistribution, probabilityOfSuccess),
          DECLARE_GET_FIELD(t_PascalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_PascalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_PascalDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PascalDistribution__methods_[] = {
          DECLARE_METHOD(t_PascalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PascalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PascalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getNumberOfSuccesses, METH_NOARGS),
          DECLARE_METHOD(t_PascalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getProbabilityOfSuccess, METH_NOARGS),
          DECLARE_METHOD(t_PascalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PascalDistribution)[] = {
          { Py_tp_methods, t_PascalDistribution__methods_ },
          { Py_tp_init, (void *) t_PascalDistribution_init_ },
          { Py_tp_getset, t_PascalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PascalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(PascalDistribution, t_PascalDistribution, PascalDistribution);

        void t_PascalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(PascalDistribution), &PY_TYPE_DEF(PascalDistribution), module, "PascalDistribution", 0);
        }

        void t_PascalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PascalDistribution), "class_", make_descriptor(PascalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PascalDistribution), "wrapfn_", make_descriptor(t_PascalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PascalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PascalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PascalDistribution::initializeClass, 1)))
            return NULL;
          return t_PascalDistribution::wrap_Object(PascalDistribution(((t_PascalDistribution *) arg)->object.this$));
        }
        static PyObject *t_PascalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PascalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PascalDistribution_init_(t_PascalDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          PascalDistribution object((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            INT_CALL(object = PascalDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PascalDistribution_cumulativeProbability(t_PascalDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_PascalDistribution_getNumberOfSuccesses(t_PascalDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PascalDistribution_getNumericalMean(t_PascalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_PascalDistribution_getNumericalVariance(t_PascalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_PascalDistribution_getProbabilityOfSuccess(t_PascalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PascalDistribution_getSupportLowerBound(t_PascalDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_PascalDistribution_getSupportUpperBound(t_PascalDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_PascalDistribution_isSupportConnected(t_PascalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_PascalDistribution_logProbability(t_PascalDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_PascalDistribution_probability(t_PascalDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_PascalDistribution_get__numberOfSuccesses(t_PascalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PascalDistribution_get__numericalMean(t_PascalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PascalDistribution_get__numericalVariance(t_PascalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PascalDistribution_get__probabilityOfSuccess(t_PascalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PascalDistribution_get__supportConnected(t_PascalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PascalDistribution_get__supportLowerBound(t_PascalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PascalDistribution_get__supportUpperBound(t_PascalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/LocalizedODEFormats.h"
#include "java/util/Locale.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/ode/LocalizedODEFormats.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *LocalizedODEFormats::class$ = NULL;
      jmethodID *LocalizedODEFormats::mids$ = NULL;
      bool LocalizedODEFormats::live$ = false;
      LocalizedODEFormats *LocalizedODEFormats::FIND_ROOT = NULL;
      LocalizedODEFormats *LocalizedODEFormats::HOLE_BETWEEN_MODELS_TIME_RANGES = NULL;
      LocalizedODEFormats *LocalizedODEFormats::INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS = NULL;
      LocalizedODEFormats *LocalizedODEFormats::MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION = NULL;
      LocalizedODEFormats *LocalizedODEFormats::MULTISTEP_STARTER_STOPPED_EARLY = NULL;
      LocalizedODEFormats *LocalizedODEFormats::NAN_APPEARING_DURING_INTEGRATION = NULL;
      LocalizedODEFormats *LocalizedODEFormats::PROPAGATION_DIRECTION_MISMATCH = NULL;
      LocalizedODEFormats *LocalizedODEFormats::TOO_SMALL_INTEGRATION_INTERVAL = NULL;
      LocalizedODEFormats *LocalizedODEFormats::UNKNOWN_PARAMETER = NULL;
      LocalizedODEFormats *LocalizedODEFormats::UNMATCHED_ODE_IN_EXPANDED_SET = NULL;

      jclass LocalizedODEFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/LocalizedODEFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_26070c28e6ea354d] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_e0774ffc25a7a018] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/LocalizedODEFormats;");
          mids$[mid_values_5050a592b1d6232f] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/LocalizedODEFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FIND_ROOT = new LocalizedODEFormats(env->getStaticObjectField(cls, "FIND_ROOT", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          HOLE_BETWEEN_MODELS_TIME_RANGES = new LocalizedODEFormats(env->getStaticObjectField(cls, "HOLE_BETWEEN_MODELS_TIME_RANGES", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS = new LocalizedODEFormats(env->getStaticObjectField(cls, "INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION = new LocalizedODEFormats(env->getStaticObjectField(cls, "MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          MULTISTEP_STARTER_STOPPED_EARLY = new LocalizedODEFormats(env->getStaticObjectField(cls, "MULTISTEP_STARTER_STOPPED_EARLY", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          NAN_APPEARING_DURING_INTEGRATION = new LocalizedODEFormats(env->getStaticObjectField(cls, "NAN_APPEARING_DURING_INTEGRATION", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          PROPAGATION_DIRECTION_MISMATCH = new LocalizedODEFormats(env->getStaticObjectField(cls, "PROPAGATION_DIRECTION_MISMATCH", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          TOO_SMALL_INTEGRATION_INTERVAL = new LocalizedODEFormats(env->getStaticObjectField(cls, "TOO_SMALL_INTEGRATION_INTERVAL", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          UNKNOWN_PARAMETER = new LocalizedODEFormats(env->getStaticObjectField(cls, "UNKNOWN_PARAMETER", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          UNMATCHED_ODE_IN_EXPANDED_SET = new LocalizedODEFormats(env->getStaticObjectField(cls, "UNMATCHED_ODE_IN_EXPANDED_SET", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedODEFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_26070c28e6ea354d], a0.this$));
      }

      ::java::lang::String LocalizedODEFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_1c1fa1e935d6cdcf]));
      }

      LocalizedODEFormats LocalizedODEFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedODEFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e0774ffc25a7a018], a0.this$));
      }

      JArray< LocalizedODEFormats > LocalizedODEFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedODEFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_5050a592b1d6232f]));
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
      static PyObject *t_LocalizedODEFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedODEFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedODEFormats_of_(t_LocalizedODEFormats *self, PyObject *args);
      static PyObject *t_LocalizedODEFormats_getLocalizedString(t_LocalizedODEFormats *self, PyObject *arg);
      static PyObject *t_LocalizedODEFormats_getSourceString(t_LocalizedODEFormats *self);
      static PyObject *t_LocalizedODEFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedODEFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedODEFormats_get__sourceString(t_LocalizedODEFormats *self, void *data);
      static PyObject *t_LocalizedODEFormats_get__parameters_(t_LocalizedODEFormats *self, void *data);
      static PyGetSetDef t_LocalizedODEFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedODEFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedODEFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedODEFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedODEFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedODEFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedODEFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedODEFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedODEFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedODEFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedODEFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedODEFormats)[] = {
        { Py_tp_methods, t_LocalizedODEFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedODEFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedODEFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedODEFormats, t_LocalizedODEFormats, LocalizedODEFormats);
      PyObject *t_LocalizedODEFormats::wrap_Object(const LocalizedODEFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedODEFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedODEFormats *self = (t_LocalizedODEFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedODEFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedODEFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedODEFormats *self = (t_LocalizedODEFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedODEFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedODEFormats), &PY_TYPE_DEF(LocalizedODEFormats), module, "LocalizedODEFormats", 0);
      }

      void t_LocalizedODEFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "class_", make_descriptor(LocalizedODEFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "wrapfn_", make_descriptor(t_LocalizedODEFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedODEFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "FIND_ROOT", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::FIND_ROOT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "HOLE_BETWEEN_MODELS_TIME_RANGES", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::HOLE_BETWEEN_MODELS_TIME_RANGES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "MULTISTEP_STARTER_STOPPED_EARLY", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::MULTISTEP_STARTER_STOPPED_EARLY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "NAN_APPEARING_DURING_INTEGRATION", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::NAN_APPEARING_DURING_INTEGRATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "PROPAGATION_DIRECTION_MISMATCH", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::PROPAGATION_DIRECTION_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "TOO_SMALL_INTEGRATION_INTERVAL", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::TOO_SMALL_INTEGRATION_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "UNKNOWN_PARAMETER", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::UNKNOWN_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "UNMATCHED_ODE_IN_EXPANDED_SET", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::UNMATCHED_ODE_IN_EXPANDED_SET)));
      }

      static PyObject *t_LocalizedODEFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedODEFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedODEFormats::wrap_Object(LocalizedODEFormats(((t_LocalizedODEFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedODEFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedODEFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedODEFormats_of_(t_LocalizedODEFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedODEFormats_getLocalizedString(t_LocalizedODEFormats *self, PyObject *arg)
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

      static PyObject *t_LocalizedODEFormats_getSourceString(t_LocalizedODEFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedODEFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedODEFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::ode::LocalizedODEFormats::valueOf(a0));
          return t_LocalizedODEFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedODEFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedODEFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::ode::LocalizedODEFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedODEFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedODEFormats_get__parameters_(t_LocalizedODEFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedODEFormats_get__sourceString(t_LocalizedODEFormats *self, void *data)
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
#include "org/orekit/bodies/Ellipsoid.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/FieldEllipse.h"
#include "org/orekit/bodies/Ellipse.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *Ellipsoid::class$ = NULL;
      jmethodID *Ellipsoid::mids$ = NULL;
      bool Ellipsoid::live$ = false;

      jclass Ellipsoid::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/Ellipsoid");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_736cb871345d6087] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDD)V");
          mids$[mid_getA_b74f83833fdad017] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getB_b74f83833fdad017] = env->getMethodID(cls, "getB", "()D");
          mids$[mid_getC_b74f83833fdad017] = env->getMethodID(cls, "getC", "()D");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getPlaneSection_fc24a7c1bc5c2624] = env->getMethodID(cls, "getPlaneSection", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/orekit/bodies/FieldEllipse;");
          mids$[mid_getPlaneSection_af7d57647b7c1409] = env->getMethodID(cls, "getPlaneSection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/bodies/Ellipse;");
          mids$[mid_isInside_f7871dc9552d25d0] = env->getMethodID(cls, "isInside", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Z");
          mids$[mid_isInside_82d995e738c9e027] = env->getMethodID(cls, "isInside", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
          mids$[mid_pointOnLimb_f9c086f1066c613d] = env->getMethodID(cls, "pointOnLimb", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_pointOnLimb_301a09f2b4c627de] = env->getMethodID(cls, "pointOnLimb", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Ellipsoid::Ellipsoid(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_736cb871345d6087, a0.this$, a1, a2, a3)) {}

      jdouble Ellipsoid::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_b74f83833fdad017]);
      }

      jdouble Ellipsoid::getB() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getB_b74f83833fdad017]);
      }

      jdouble Ellipsoid::getC() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getC_b74f83833fdad017]);
      }

      ::org::orekit::frames::Frame Ellipsoid::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      ::org::orekit::bodies::FieldEllipse Ellipsoid::getPlaneSection(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
      {
        return ::org::orekit::bodies::FieldEllipse(env->callObjectMethod(this$, mids$[mid_getPlaneSection_fc24a7c1bc5c2624], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::Ellipse Ellipsoid::getPlaneSection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
      {
        return ::org::orekit::bodies::Ellipse(env->callObjectMethod(this$, mids$[mid_getPlaneSection_af7d57647b7c1409], a0.this$, a1.this$));
      }

      jboolean Ellipsoid::isInside(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInside_f7871dc9552d25d0], a0.this$);
      }

      jboolean Ellipsoid::isInside(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInside_82d995e738c9e027], a0.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Ellipsoid::pointOnLimb(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointOnLimb_f9c086f1066c613d], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipsoid::pointOnLimb(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointOnLimb_301a09f2b4c627de], a0.this$, a1.this$));
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
      static PyObject *t_Ellipsoid_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Ellipsoid_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Ellipsoid_init_(t_Ellipsoid *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Ellipsoid_getA(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getB(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getC(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getFrame(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getPlaneSection(t_Ellipsoid *self, PyObject *args);
      static PyObject *t_Ellipsoid_isInside(t_Ellipsoid *self, PyObject *args);
      static PyObject *t_Ellipsoid_pointOnLimb(t_Ellipsoid *self, PyObject *args);
      static PyObject *t_Ellipsoid_get__a(t_Ellipsoid *self, void *data);
      static PyObject *t_Ellipsoid_get__b(t_Ellipsoid *self, void *data);
      static PyObject *t_Ellipsoid_get__c(t_Ellipsoid *self, void *data);
      static PyObject *t_Ellipsoid_get__frame(t_Ellipsoid *self, void *data);
      static PyGetSetDef t_Ellipsoid__fields_[] = {
        DECLARE_GET_FIELD(t_Ellipsoid, a),
        DECLARE_GET_FIELD(t_Ellipsoid, b),
        DECLARE_GET_FIELD(t_Ellipsoid, c),
        DECLARE_GET_FIELD(t_Ellipsoid, frame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Ellipsoid__methods_[] = {
        DECLARE_METHOD(t_Ellipsoid, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipsoid, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipsoid, getA, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getB, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getC, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getPlaneSection, METH_VARARGS),
        DECLARE_METHOD(t_Ellipsoid, isInside, METH_VARARGS),
        DECLARE_METHOD(t_Ellipsoid, pointOnLimb, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Ellipsoid)[] = {
        { Py_tp_methods, t_Ellipsoid__methods_ },
        { Py_tp_init, (void *) t_Ellipsoid_init_ },
        { Py_tp_getset, t_Ellipsoid__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Ellipsoid)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Ellipsoid, t_Ellipsoid, Ellipsoid);

      void t_Ellipsoid::install(PyObject *module)
      {
        installType(&PY_TYPE(Ellipsoid), &PY_TYPE_DEF(Ellipsoid), module, "Ellipsoid", 0);
      }

      void t_Ellipsoid::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipsoid), "class_", make_descriptor(Ellipsoid::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipsoid), "wrapfn_", make_descriptor(t_Ellipsoid::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipsoid), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Ellipsoid_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Ellipsoid::initializeClass, 1)))
          return NULL;
        return t_Ellipsoid::wrap_Object(Ellipsoid(((t_Ellipsoid *) arg)->object.this$));
      }
      static PyObject *t_Ellipsoid_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Ellipsoid::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Ellipsoid_init_(t_Ellipsoid *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jdouble a3;
        Ellipsoid object((jobject) NULL);

        if (!parseArgs(args, "kDDD", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = Ellipsoid(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Ellipsoid_getA(t_Ellipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipsoid_getB(t_Ellipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getB());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipsoid_getC(t_Ellipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getC());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipsoid_getFrame(t_Ellipsoid *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Ellipsoid_getPlaneSection(t_Ellipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::bodies::FieldEllipse result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.getPlaneSection(a0, a1));
              return ::org::orekit::bodies::t_FieldEllipse::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::bodies::Ellipse result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPlaneSection(a0, a1));
              return ::org::orekit::bodies::t_Ellipse::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPlaneSection", args);
        return NULL;
      }

      static PyObject *t_Ellipsoid_isInside(t_Ellipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.isInside(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isInside(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "isInside", args);
        return NULL;
      }

      static PyObject *t_Ellipsoid_pointOnLimb(t_Ellipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.pointOnLimb(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.pointOnLimb(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pointOnLimb", args);
        return NULL;
      }

      static PyObject *t_Ellipsoid_get__a(t_Ellipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipsoid_get__b(t_Ellipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getB());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipsoid_get__c(t_Ellipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getC());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipsoid_get__frame(t_Ellipsoid *self, void *data)
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
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TDBScale::class$ = NULL;
      jmethodID *TDBScale::mids$ = NULL;
      bool TDBScale::live$ = false;

      jclass TDBScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TDBScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TDBScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jdouble TDBScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TDBScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      ::java::lang::String TDBScale::toString() const
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
      static PyObject *t_TDBScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TDBScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TDBScale_getName(t_TDBScale *self);
      static PyObject *t_TDBScale_offsetFromTAI(t_TDBScale *self, PyObject *args);
      static PyObject *t_TDBScale_toString(t_TDBScale *self, PyObject *args);
      static PyObject *t_TDBScale_get__name(t_TDBScale *self, void *data);
      static PyGetSetDef t_TDBScale__fields_[] = {
        DECLARE_GET_FIELD(t_TDBScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TDBScale__methods_[] = {
        DECLARE_METHOD(t_TDBScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TDBScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TDBScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TDBScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TDBScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TDBScale)[] = {
        { Py_tp_methods, t_TDBScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TDBScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TDBScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TDBScale, t_TDBScale, TDBScale);

      void t_TDBScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TDBScale), &PY_TYPE_DEF(TDBScale), module, "TDBScale", 0);
      }

      void t_TDBScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TDBScale), "class_", make_descriptor(TDBScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TDBScale), "wrapfn_", make_descriptor(t_TDBScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TDBScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TDBScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TDBScale::initializeClass, 1)))
          return NULL;
        return t_TDBScale::wrap_Object(TDBScale(((t_TDBScale *) arg)->object.this$));
      }
      static PyObject *t_TDBScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TDBScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TDBScale_getName(t_TDBScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TDBScale_offsetFromTAI(t_TDBScale *self, PyObject *args)
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

      static PyObject *t_TDBScale_toString(t_TDBScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TDBScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TDBScale_get__name(t_TDBScale *self, void *data)
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
#include "java/io/InputStreamReader.h"
#include "java/io/InputStream.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *InputStreamReader::class$ = NULL;
    jmethodID *InputStreamReader::mids$ = NULL;
    bool InputStreamReader::live$ = false;

    jclass InputStreamReader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/InputStreamReader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_471a178453aa39ad] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;)V");
        mids$[mid_init$_360461e719fb564c] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;Ljava/lang/String;)V");
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_getEncoding_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getEncoding", "()Ljava/lang/String;");
        mids$[mid_read_55546ef6a647f39b] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_a45a4db28976f262] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_ready_9ab94ac1dc23b105] = env->getMethodID(cls, "ready", "()Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InputStreamReader::InputStreamReader(const ::java::io::InputStream & a0) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_471a178453aa39ad, a0.this$)) {}

    InputStreamReader::InputStreamReader(const ::java::io::InputStream & a0, const ::java::lang::String & a1) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_360461e719fb564c, a0.this$, a1.this$)) {}

    void InputStreamReader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    ::java::lang::String InputStreamReader::getEncoding() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getEncoding_1c1fa1e935d6cdcf]));
    }

    jint InputStreamReader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_55546ef6a647f39b]);
    }

    jint InputStreamReader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_a45a4db28976f262], a0.this$, a1, a2);
    }

    jboolean InputStreamReader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_9ab94ac1dc23b105]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_InputStreamReader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InputStreamReader_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InputStreamReader_init_(t_InputStreamReader *self, PyObject *args, PyObject *kwds);
    static PyObject *t_InputStreamReader_close(t_InputStreamReader *self, PyObject *args);
    static PyObject *t_InputStreamReader_getEncoding(t_InputStreamReader *self);
    static PyObject *t_InputStreamReader_read(t_InputStreamReader *self, PyObject *args);
    static PyObject *t_InputStreamReader_ready(t_InputStreamReader *self, PyObject *args);
    static PyObject *t_InputStreamReader_get__encoding(t_InputStreamReader *self, void *data);
    static PyGetSetDef t_InputStreamReader__fields_[] = {
      DECLARE_GET_FIELD(t_InputStreamReader, encoding),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_InputStreamReader__methods_[] = {
      DECLARE_METHOD(t_InputStreamReader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStreamReader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStreamReader, close, METH_VARARGS),
      DECLARE_METHOD(t_InputStreamReader, getEncoding, METH_NOARGS),
      DECLARE_METHOD(t_InputStreamReader, read, METH_VARARGS),
      DECLARE_METHOD(t_InputStreamReader, ready, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InputStreamReader)[] = {
      { Py_tp_methods, t_InputStreamReader__methods_ },
      { Py_tp_init, (void *) t_InputStreamReader_init_ },
      { Py_tp_getset, t_InputStreamReader__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InputStreamReader)[] = {
      &PY_TYPE_DEF(::java::io::Reader),
      NULL
    };

    DEFINE_TYPE(InputStreamReader, t_InputStreamReader, InputStreamReader);

    void t_InputStreamReader::install(PyObject *module)
    {
      installType(&PY_TYPE(InputStreamReader), &PY_TYPE_DEF(InputStreamReader), module, "InputStreamReader", 0);
    }

    void t_InputStreamReader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamReader), "class_", make_descriptor(InputStreamReader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamReader), "wrapfn_", make_descriptor(t_InputStreamReader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamReader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InputStreamReader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InputStreamReader::initializeClass, 1)))
        return NULL;
      return t_InputStreamReader::wrap_Object(InputStreamReader(((t_InputStreamReader *) arg)->object.this$));
    }
    static PyObject *t_InputStreamReader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InputStreamReader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InputStreamReader_init_(t_InputStreamReader *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::InputStream a0((jobject) NULL);
          InputStreamReader object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
          {
            INT_CALL(object = InputStreamReader(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::InputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          InputStreamReader object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
          {
            INT_CALL(object = InputStreamReader(a0, a1));
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

    static PyObject *t_InputStreamReader_close(t_InputStreamReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(InputStreamReader), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_InputStreamReader_getEncoding(t_InputStreamReader *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getEncoding());
      return j2p(result);
    }

    static PyObject *t_InputStreamReader_read(t_InputStreamReader *self, PyObject *args)
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

      return callSuper(PY_TYPE(InputStreamReader), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_InputStreamReader_ready(t_InputStreamReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.ready());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(InputStreamReader), (PyObject *) self, "ready", args, 2);
    }

    static PyObject *t_InputStreamReader_get__encoding(t_InputStreamReader *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getEncoding());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/Mean.h"
#include "org/hipparchus/stat/descriptive/moment/Mean.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Mean::class$ = NULL;
          jmethodID *Mean::mids$ = NULL;
          bool Mean::live$ = false;

          jclass Mean::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Mean");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_5f13a5ee5da004b6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/FirstMoment;)V");
              mids$[mid_aggregate_b67a722ddd23d319] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/Mean;)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_596ad18729073ae5] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Mean;");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_0f0d79795aa485ac] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Mean::Mean() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          Mean::Mean(const ::org::hipparchus::stat::descriptive::moment::FirstMoment & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_5f13a5ee5da004b6, a0.this$)) {}

          void Mean::aggregate(const Mean & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_b67a722ddd23d319], a0.this$);
          }

          void Mean::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          Mean Mean::copy() const
          {
            return Mean(env->callObjectMethod(this$, mids$[mid_copy_596ad18729073ae5]));
          }

          jdouble Mean::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          jdouble Mean::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0f0d79795aa485ac], a0.this$, a1.this$, a2, a3);
          }

          jlong Mean::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          jdouble Mean::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          void Mean::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
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
          static PyObject *t_Mean_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Mean_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Mean_init_(t_Mean *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Mean_aggregate(t_Mean *self, PyObject *arg);
          static PyObject *t_Mean_clear(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_copy(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_evaluate(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_getN(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_getResult(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_increment(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_get__n(t_Mean *self, void *data);
          static PyObject *t_Mean_get__result(t_Mean *self, void *data);
          static PyGetSetDef t_Mean__fields_[] = {
            DECLARE_GET_FIELD(t_Mean, n),
            DECLARE_GET_FIELD(t_Mean, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Mean__methods_[] = {
            DECLARE_METHOD(t_Mean, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mean, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mean, aggregate, METH_O),
            DECLARE_METHOD(t_Mean, clear, METH_VARARGS),
            DECLARE_METHOD(t_Mean, copy, METH_VARARGS),
            DECLARE_METHOD(t_Mean, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Mean, getN, METH_VARARGS),
            DECLARE_METHOD(t_Mean, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Mean, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Mean)[] = {
            { Py_tp_methods, t_Mean__methods_ },
            { Py_tp_init, (void *) t_Mean_init_ },
            { Py_tp_getset, t_Mean__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Mean)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Mean, t_Mean, Mean);

          void t_Mean::install(PyObject *module)
          {
            installType(&PY_TYPE(Mean), &PY_TYPE_DEF(Mean), module, "Mean", 0);
          }

          void t_Mean::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mean), "class_", make_descriptor(Mean::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mean), "wrapfn_", make_descriptor(t_Mean::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mean), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Mean_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Mean::initializeClass, 1)))
              return NULL;
            return t_Mean::wrap_Object(Mean(((t_Mean *) arg)->object.this$));
          }
          static PyObject *t_Mean_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Mean::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Mean_init_(t_Mean *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Mean object((jobject) NULL);

                INT_CALL(object = Mean());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::FirstMoment a0((jobject) NULL);
                Mean object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::moment::FirstMoment::initializeClass, &a0))
                {
                  INT_CALL(object = Mean(a0));
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

          static PyObject *t_Mean_aggregate(t_Mean *self, PyObject *arg)
          {
            Mean a0((jobject) NULL);

            if (!parseArg(arg, "k", Mean::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Mean_clear(t_Mean *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Mean_copy(t_Mean *self, PyObject *args)
          {
            Mean result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Mean::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Mean_evaluate(t_Mean *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
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

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Mean_getN(t_Mean *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Mean_getResult(t_Mean *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Mean_increment(t_Mean *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Mean_get__n(t_Mean *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Mean_get__result(t_Mean *self, void *data)
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
#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
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
            mids$[mid_getFreeStateParameters_55546ef6a647f39b] = env->getMethodID(cls, "getFreeStateParameters", "()I");
            mids$[mid_getParameters_e5c4a19744e8dd4a] = env->getMethodID(cls, "getParameters", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/utils/ParameterDriversProvider;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getParametersAtStateDate_e5c4a19744e8dd4a] = env->getMethodID(cls, "getParametersAtStateDate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/utils/ParameterDriversProvider;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getState_93902f3744afc0c3] = env->getMethodID(cls, "getState", "(Lorg/orekit/utils/ParameterDriversProvider;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_extend_9b74b13fc2b0b45d] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_extend_3facea1cbc778867] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_extend_40f2f08546258c9b] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/analysis/differentiation/Gradient;I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_initStates_54d9efbf99822980] = env->getMethodID(cls, "initStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_buildBasicGradientSpacecraftState_29c62c1e3d056b0f] = env->getStaticMethodID(cls, "buildBasicGradientSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;ILorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/FieldSpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint AbstractGradientConverter::getFreeStateParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeStateParameters_55546ef6a647f39b]);
        }

        JArray< ::org::hipparchus::analysis::differentiation::Gradient > AbstractGradientConverter::getParameters(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::utils::ParameterDriversProvider & a1) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callObjectMethod(this$, mids$[mid_getParameters_e5c4a19744e8dd4a], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Gradient > AbstractGradientConverter::getParametersAtStateDate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::utils::ParameterDriversProvider & a1) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callObjectMethod(this$, mids$[mid_getParametersAtStateDate_e5c4a19744e8dd4a], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState AbstractGradientConverter::getState(const ::org::orekit::utils::ParameterDriversProvider & a0) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_93902f3744afc0c3], a0.this$));
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
#include "org/hipparchus/util/CompositeFormat.h"
#include "java/text/FieldPosition.h"
#include "java/util/Locale.h"
#include "java/text/ParsePosition.h"
#include "java/lang/Number.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *CompositeFormat::class$ = NULL;
      jmethodID *CompositeFormat::mids$ = NULL;
      bool CompositeFormat::live$ = false;

      jclass CompositeFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/CompositeFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_formatDouble_dbb787bb65ee7daa] = env->getStaticMethodID(cls, "formatDouble", "(DLjava/text/NumberFormat;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getDefaultNumberFormat_87ffffc449cd25a5] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getDefaultNumberFormat_3c858cd11341b00a] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
          mids$[mid_parseAndIgnoreWhitespace_1df84bc342ab1345] = env->getStaticMethodID(cls, "parseAndIgnoreWhitespace", "(Ljava/lang/String;Ljava/text/ParsePosition;)V");
          mids$[mid_parseFixedstring_07decc762bc95813] = env->getStaticMethodID(cls, "parseFixedstring", "(Ljava/lang/String;Ljava/lang/String;Ljava/text/ParsePosition;)Z");
          mids$[mid_parseNextCharacter_ab936c5146b74d5a] = env->getStaticMethodID(cls, "parseNextCharacter", "(Ljava/lang/String;Ljava/text/ParsePosition;)C");
          mids$[mid_parseNumber_15d59e9ef502093d] = env->getStaticMethodID(cls, "parseNumber", "(Ljava/lang/String;Ljava/text/NumberFormat;Ljava/text/ParsePosition;)Ljava/lang/Number;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::StringBuffer CompositeFormat::formatDouble(jdouble a0, const ::java::text::NumberFormat & a1, const ::java::lang::StringBuffer & a2, const ::java::text::FieldPosition & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::StringBuffer(env->callStaticObjectMethod(cls, mids$[mid_formatDouble_dbb787bb65ee7daa], a0, a1.this$, a2.this$, a3.this$));
      }

      ::java::text::NumberFormat CompositeFormat::getDefaultNumberFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::text::NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getDefaultNumberFormat_87ffffc449cd25a5]));
      }

      ::java::text::NumberFormat CompositeFormat::getDefaultNumberFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::text::NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getDefaultNumberFormat_3c858cd11341b00a], a0.this$));
      }

      void CompositeFormat::parseAndIgnoreWhitespace(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_parseAndIgnoreWhitespace_1df84bc342ab1345], a0.this$, a1.this$);
      }

      jboolean CompositeFormat::parseFixedstring(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::text::ParsePosition & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_parseFixedstring_07decc762bc95813], a0.this$, a1.this$, a2.this$);
      }

      jchar CompositeFormat::parseNextCharacter(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticCharMethod(cls, mids$[mid_parseNextCharacter_ab936c5146b74d5a], a0.this$, a1.this$);
      }

      ::java::lang::Number CompositeFormat::parseNumber(const ::java::lang::String & a0, const ::java::text::NumberFormat & a1, const ::java::text::ParsePosition & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::Number(env->callStaticObjectMethod(cls, mids$[mid_parseNumber_15d59e9ef502093d], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_CompositeFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompositeFormat_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompositeFormat_formatDouble(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_getDefaultNumberFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseAndIgnoreWhitespace(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseFixedstring(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseNextCharacter(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseNumber(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_get__defaultNumberFormat(t_CompositeFormat *self, void *data);
      static PyGetSetDef t_CompositeFormat__fields_[] = {
        DECLARE_GET_FIELD(t_CompositeFormat, defaultNumberFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CompositeFormat__methods_[] = {
        DECLARE_METHOD(t_CompositeFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, formatDouble, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, getDefaultNumberFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseAndIgnoreWhitespace, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseFixedstring, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseNextCharacter, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseNumber, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CompositeFormat)[] = {
        { Py_tp_methods, t_CompositeFormat__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CompositeFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CompositeFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CompositeFormat, t_CompositeFormat, CompositeFormat);

      void t_CompositeFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(CompositeFormat), &PY_TYPE_DEF(CompositeFormat), module, "CompositeFormat", 0);
      }

      void t_CompositeFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeFormat), "class_", make_descriptor(CompositeFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeFormat), "wrapfn_", make_descriptor(t_CompositeFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CompositeFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CompositeFormat::initializeClass, 1)))
          return NULL;
        return t_CompositeFormat::wrap_Object(CompositeFormat(((t_CompositeFormat *) arg)->object.this$));
      }
      static PyObject *t_CompositeFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CompositeFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CompositeFormat_formatDouble(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        ::java::text::NumberFormat a1((jobject) NULL);
        ::java::lang::StringBuffer a2((jobject) NULL);
        ::java::text::FieldPosition a3((jobject) NULL);
        ::java::lang::StringBuffer result((jobject) NULL);

        if (!parseArgs(args, "Dkkk", ::java::text::NumberFormat::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::formatDouble(a0, a1, a2, a3));
          return ::java::lang::t_StringBuffer::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "formatDouble", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_getDefaultNumberFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::text::NumberFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::getDefaultNumberFormat());
            return ::java::text::t_NumberFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::text::NumberFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::getDefaultNumberFormat(a0));
              return ::java::text::t_NumberFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getDefaultNumberFormat", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseAndIgnoreWhitespace(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::CompositeFormat::parseAndIgnoreWhitespace(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "parseAndIgnoreWhitespace", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseFixedstring(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::text::ParsePosition a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "ssk", ::java::text::ParsePosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::parseFixedstring(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "parseFixedstring", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseNextCharacter(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);
        jchar result;

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::parseNextCharacter(a0, a1));
          return c2p(result);
        }

        PyErr_SetArgsError(type, "parseNextCharacter", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseNumber(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::NumberFormat a1((jobject) NULL);
        ::java::text::ParsePosition a2((jobject) NULL);
        ::java::lang::Number result((jobject) NULL);

        if (!parseArgs(args, "skk", ::java::text::NumberFormat::initializeClass, ::java::text::ParsePosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::parseNumber(a0, a1, a2));
          return ::java::lang::t_Number::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseNumber", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_get__defaultNumberFormat(t_CompositeFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getDefaultNumberFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter1DNumerical2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::class$ = NULL;
              jmethodID *PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$ = NULL;
              bool PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::live$ = false;

              jclass PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter1DNumerical2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_770382c82804b0fb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/analysis/integration/UnivariateIntegrator;I)V");
                  mids$[mid_compute_f84396b6984702e2] = env->getMethodID(cls, "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_978e207e20e445e6] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getType_8397a286d982b383] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(const ::java::lang::String & a0, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a1, jint a2) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_770382c82804b0fb, a0.this$, a1.this$, a2)) {}

              void PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
              }

              jlong PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
              }

              void PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_init_(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args);
              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5, jint a6);
              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jobject a5, jint a6);
              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, void *data);
              static PyGetSetDef t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                { Py_tp_methods, t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__methods_ },
                { Py_tp_init, (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_init_ },
                { Py_tp_getset, t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod);

              void t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), &PY_TYPE_DEF(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), module, "PythonAbstractShortTermEncounter1DNumerical2DPOCMethod", 1);
              }

              void t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), "class_", make_descriptor(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), "wrapfn_", make_descriptor(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass);
                JNINativeMethod methods[] = {
                  { "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute0 },
                  { "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute1 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_getType2 },
                  { "pythonDecRef", "()V", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonDecRef3 },
                };
                env->registerNatives(cls, methods, 4);
              }

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_Object(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(((t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_init_(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::analysis::integration::UnivariateIntegrator a1((jobject) NULL);
                jint a2;
                PythonAbstractShortTermEncounter1DNumerical2DPOCMethod object((jobject) NULL);

                if (!parseArgs(args, "skI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(a0, a1, a2));
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

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args)
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5, jint a6)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *o3 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *o5 = ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::wrap_Object(::org::hipparchus::analysis::integration::FieldUnivariateIntegrator(a5));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOOOi", o0, o1, o2, o3, o4, o5, (int) a6);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                Py_DECREF(o5);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jobject a5, jint a6)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o5 = ::org::hipparchus::analysis::integration::t_UnivariateIntegrator::wrap_Object(::org::hipparchus::analysis::integration::UnivariateIntegrator(a5));
                PyObject *result = PyObject_CallMethod(obj, "compute", "dddddOi", (double) a0, (double) a1, (double) a2, (double) a3, (double) a4, o5, (int) a6);
                Py_DECREF(o5);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "getType", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::initializeClass, &value))
                {
                  throwTypeError("getType", result);
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

              static void JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, void *data)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedUnivariateSolver::class$ = NULL;
        jmethodID *BracketedUnivariateSolver::mids$ = NULL;
        bool BracketedUnivariateSolver::live$ = false;

        jclass BracketedUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_solve_95e80d55b360a35f] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solve_adfe53463c8924a7] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solveInterval_b2aec7e9d829a0d3] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");
            mids$[mid_solveInterval_56a10f62288dcd3e] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BracketedUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_95e80d55b360a35f], a0, a1.this$, a2, a3, a4.this$);
        }

        jdouble BracketedUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_adfe53463c8924a7], a0, a1.this$, a2, a3, a4, a5.this$);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BracketedUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_b2aec7e9d829a0d3], a0, a1.this$, a2, a3));
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BracketedUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_56a10f62288dcd3e], a0, a1.this$, a2, a3, a4));
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
        static PyObject *t_BracketedUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver_of_(t_BracketedUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedUnivariateSolver_solve(t_BracketedUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedUnivariateSolver_solveInterval(t_BracketedUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedUnivariateSolver_get__parameters_(t_BracketedUnivariateSolver *self, void *data);
        static PyGetSetDef t_BracketedUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BracketedUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedUnivariateSolver)[] = {
          { Py_tp_methods, t_BracketedUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BracketedUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedUnivariateSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BracketedUnivariateSolver, t_BracketedUnivariateSolver, BracketedUnivariateSolver);
        PyObject *t_BracketedUnivariateSolver::wrap_Object(const BracketedUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver *self = (t_BracketedUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver *self = (t_BracketedUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedUnivariateSolver), &PY_TYPE_DEF(BracketedUnivariateSolver), module, "BracketedUnivariateSolver", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "Interval", make_descriptor(&PY_TYPE_DEF(BracketedUnivariateSolver$Interval)));
        }

        void t_BracketedUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "class_", make_descriptor(BracketedUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "wrapfn_", make_descriptor(t_BracketedUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BracketedUnivariateSolver::wrap_Object(BracketedUnivariateSolver(((t_BracketedUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BracketedUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedUnivariateSolver_of_(t_BracketedUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BracketedUnivariateSolver_solve(t_BracketedUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble result;

              if (!parseArgs(args, "IkDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble result;

              if (!parseArgs(args, "IkDDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(BracketedUnivariateSolver), (PyObject *) self, "solve", args, 2);
        }

        static PyObject *t_BracketedUnivariateSolver_solveInterval(t_BracketedUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3));
                return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver$Interval::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
                return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver$Interval::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BracketedUnivariateSolver_get__parameters_(t_BracketedUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldKeplerianPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldKeplerianPropagator::class$ = NULL;
        jmethodID *FieldKeplerianPropagator::mids$ = NULL;
        bool FieldKeplerianPropagator::live$ = false;

        jclass FieldKeplerianPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldKeplerianPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_01b80e5fc8224f27] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
            mids$[mid_init$_49f6b8e8e63ddd72] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_8572d3ed7c8f364c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_4954ffbdfe632147] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_a1d700082199d0a3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_resetInitialState_54d9efbf99822980] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getMass_140b8964300ddedf] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_resetIntermediateState_871885b409df9d57] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
            mids$[mid_propagateOrbit_f34a7a94e111b112] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_01b80e5fc8224f27, a0.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_49f6b8e8e63ddd72, a0.this$, a1.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_8572d3ed7c8f364c, a0.this$, a1.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_4954ffbdfe632147, a0.this$, a1.this$, a2.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a1d700082199d0a3, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::java::util::List FieldKeplerianPropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }

        void FieldKeplerianPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_54d9efbf99822980], a0.this$);
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
        static PyObject *t_FieldKeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldKeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldKeplerianPropagator_of_(t_FieldKeplerianPropagator *self, PyObject *args);
        static int t_FieldKeplerianPropagator_init_(t_FieldKeplerianPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldKeplerianPropagator_getParametersDrivers(t_FieldKeplerianPropagator *self, PyObject *args);
        static PyObject *t_FieldKeplerianPropagator_resetInitialState(t_FieldKeplerianPropagator *self, PyObject *args);
        static PyObject *t_FieldKeplerianPropagator_get__parametersDrivers(t_FieldKeplerianPropagator *self, void *data);
        static PyObject *t_FieldKeplerianPropagator_get__parameters_(t_FieldKeplerianPropagator *self, void *data);
        static PyGetSetDef t_FieldKeplerianPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldKeplerianPropagator, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldKeplerianPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldKeplerianPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldKeplerianPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldKeplerianPropagator)[] = {
          { Py_tp_methods, t_FieldKeplerianPropagator__methods_ },
          { Py_tp_init, (void *) t_FieldKeplerianPropagator_init_ },
          { Py_tp_getset, t_FieldKeplerianPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldKeplerianPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldKeplerianPropagator, t_FieldKeplerianPropagator, FieldKeplerianPropagator);
        PyObject *t_FieldKeplerianPropagator::wrap_Object(const FieldKeplerianPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldKeplerianPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldKeplerianPropagator *self = (t_FieldKeplerianPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldKeplerianPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldKeplerianPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldKeplerianPropagator *self = (t_FieldKeplerianPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldKeplerianPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldKeplerianPropagator), &PY_TYPE_DEF(FieldKeplerianPropagator), module, "FieldKeplerianPropagator", 0);
        }

        void t_FieldKeplerianPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianPropagator), "class_", make_descriptor(FieldKeplerianPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianPropagator), "wrapfn_", make_descriptor(t_FieldKeplerianPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldKeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldKeplerianPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldKeplerianPropagator::wrap_Object(FieldKeplerianPropagator(((t_FieldKeplerianPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldKeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldKeplerianPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldKeplerianPropagator_of_(t_FieldKeplerianPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldKeplerianPropagator_init_(t_FieldKeplerianPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1, a2, a3));
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

        static PyObject *t_FieldKeplerianPropagator_getParametersDrivers(t_FieldKeplerianPropagator *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldKeplerianPropagator), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldKeplerianPropagator_resetInitialState(t_FieldKeplerianPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldKeplerianPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldKeplerianPropagator_get__parameters_(t_FieldKeplerianPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldKeplerianPropagator_get__parametersDrivers(t_FieldKeplerianPropagator *self, void *data)
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
#include "org/orekit/files/sp3/SP3FileType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3FileType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3FileType::class$ = NULL;
        jmethodID *SP3FileType::mids$ = NULL;
        bool SP3FileType::live$ = false;
        SP3FileType *SP3FileType::COMPASS = NULL;
        SP3FileType *SP3FileType::GALILEO = NULL;
        SP3FileType *SP3FileType::GLONASS = NULL;
        SP3FileType *SP3FileType::GPS = NULL;
        SP3FileType *SP3FileType::IRNSS = NULL;
        SP3FileType *SP3FileType::LEO = NULL;
        SP3FileType *SP3FileType::MIXED = NULL;
        SP3FileType *SP3FileType::QZSS = NULL;
        SP3FileType *SP3FileType::SBAS = NULL;
        SP3FileType *SP3FileType::UNDEFINED = NULL;

        jclass SP3FileType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3FileType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getKey_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
            mids$[mid_parse_d892c60b18cb8deb] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3FileType;");
            mids$[mid_valueOf_d892c60b18cb8deb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3FileType;");
            mids$[mid_values_a90cb300b9e0b2f2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sp3/SP3FileType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            COMPASS = new SP3FileType(env->getStaticObjectField(cls, "COMPASS", "Lorg/orekit/files/sp3/SP3FileType;"));
            GALILEO = new SP3FileType(env->getStaticObjectField(cls, "GALILEO", "Lorg/orekit/files/sp3/SP3FileType;"));
            GLONASS = new SP3FileType(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/files/sp3/SP3FileType;"));
            GPS = new SP3FileType(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/files/sp3/SP3FileType;"));
            IRNSS = new SP3FileType(env->getStaticObjectField(cls, "IRNSS", "Lorg/orekit/files/sp3/SP3FileType;"));
            LEO = new SP3FileType(env->getStaticObjectField(cls, "LEO", "Lorg/orekit/files/sp3/SP3FileType;"));
            MIXED = new SP3FileType(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/files/sp3/SP3FileType;"));
            QZSS = new SP3FileType(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/files/sp3/SP3FileType;"));
            SBAS = new SP3FileType(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/files/sp3/SP3FileType;"));
            UNDEFINED = new SP3FileType(env->getStaticObjectField(cls, "UNDEFINED", "Lorg/orekit/files/sp3/SP3FileType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String SP3FileType::getKey() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_1c1fa1e935d6cdcf]));
        }

        SP3FileType SP3FileType::parse(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3FileType(env->callStaticObjectMethod(cls, mids$[mid_parse_d892c60b18cb8deb], a0.this$));
        }

        SP3FileType SP3FileType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3FileType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d892c60b18cb8deb], a0.this$));
        }

        JArray< SP3FileType > SP3FileType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< SP3FileType >(env->callStaticObjectMethod(cls, mids$[mid_values_a90cb300b9e0b2f2]));
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
      namespace sp3 {
        static PyObject *t_SP3FileType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3FileType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3FileType_of_(t_SP3FileType *self, PyObject *args);
        static PyObject *t_SP3FileType_getKey(t_SP3FileType *self);
        static PyObject *t_SP3FileType_parse(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3FileType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_SP3FileType_values(PyTypeObject *type);
        static PyObject *t_SP3FileType_get__key(t_SP3FileType *self, void *data);
        static PyObject *t_SP3FileType_get__parameters_(t_SP3FileType *self, void *data);
        static PyGetSetDef t_SP3FileType__fields_[] = {
          DECLARE_GET_FIELD(t_SP3FileType, key),
          DECLARE_GET_FIELD(t_SP3FileType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3FileType__methods_[] = {
          DECLARE_METHOD(t_SP3FileType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, of_, METH_VARARGS),
          DECLARE_METHOD(t_SP3FileType, getKey, METH_NOARGS),
          DECLARE_METHOD(t_SP3FileType, parse, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3FileType)[] = {
          { Py_tp_methods, t_SP3FileType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SP3FileType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3FileType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(SP3FileType, t_SP3FileType, SP3FileType);
        PyObject *t_SP3FileType::wrap_Object(const SP3FileType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3FileType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3FileType *self = (t_SP3FileType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SP3FileType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3FileType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3FileType *self = (t_SP3FileType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SP3FileType::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3FileType), &PY_TYPE_DEF(SP3FileType), module, "SP3FileType", 0);
        }

        void t_SP3FileType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "class_", make_descriptor(SP3FileType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "wrapfn_", make_descriptor(t_SP3FileType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3FileType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "COMPASS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::COMPASS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "GALILEO", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::GALILEO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "GLONASS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::GLONASS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "GPS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::GPS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "IRNSS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::IRNSS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "LEO", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::LEO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "MIXED", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::MIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "QZSS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::QZSS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "SBAS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::SBAS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "UNDEFINED", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::UNDEFINED)));
        }

        static PyObject *t_SP3FileType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3FileType::initializeClass, 1)))
            return NULL;
          return t_SP3FileType::wrap_Object(SP3FileType(((t_SP3FileType *) arg)->object.this$));
        }
        static PyObject *t_SP3FileType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3FileType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3FileType_of_(t_SP3FileType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SP3FileType_getKey(t_SP3FileType *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getKey());
          return j2p(result);
        }

        static PyObject *t_SP3FileType_parse(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3FileType result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3FileType::parse(a0));
            return t_SP3FileType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", arg);
          return NULL;
        }

        static PyObject *t_SP3FileType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3FileType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3FileType::valueOf(a0));
            return t_SP3FileType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_SP3FileType_values(PyTypeObject *type)
        {
          JArray< SP3FileType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sp3::SP3FileType::values());
          return JArray<jobject>(result.this$).wrap(t_SP3FileType::wrap_jobject);
        }
        static PyObject *t_SP3FileType_get__parameters_(t_SP3FileType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SP3FileType_get__key(t_SP3FileType *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getKey());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/InputStream.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *InputStream::class$ = NULL;
    jmethodID *InputStream::mids$ = NULL;
    bool InputStream::live$ = false;

    jclass InputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/InputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_available_55546ef6a647f39b] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_mark_44ed599e93e8a30c] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_9ab94ac1dc23b105] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_nullInputStream_6c37d64ac8173086] = env->getStaticMethodID(cls, "nullInputStream", "()Ljava/io/InputStream;");
        mids$[mid_read_55546ef6a647f39b] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_53324f422c2c7f64] = env->getMethodID(cls, "read", "([B)I");
        mids$[mid_read_296dd75c373e2c1d] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_readAllBytes_b7afa59f65f6aa9b] = env->getMethodID(cls, "readAllBytes", "()[B");
        mids$[mid_readNBytes_0e3a76bff4aae34c] = env->getMethodID(cls, "readNBytes", "(I)[B");
        mids$[mid_readNBytes_296dd75c373e2c1d] = env->getMethodID(cls, "readNBytes", "([BII)I");
        mids$[mid_reset_a1fa5dae97ea5ed2] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_9db63109f74a74fc] = env->getMethodID(cls, "skip", "(J)J");
        mids$[mid_transferTo_840671b76994c8a8] = env->getMethodID(cls, "transferTo", "(Ljava/io/OutputStream;)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InputStream::InputStream() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    jint InputStream::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_55546ef6a647f39b]);
    }

    void InputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    void InputStream::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_44ed599e93e8a30c], a0);
    }

    jboolean InputStream::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_9ab94ac1dc23b105]);
    }

    InputStream InputStream::nullInputStream()
    {
      jclass cls = env->getClass(initializeClass);
      return InputStream(env->callStaticObjectMethod(cls, mids$[mid_nullInputStream_6c37d64ac8173086]));
    }

    jint InputStream::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_55546ef6a647f39b]);
    }

    jint InputStream::read(const JArray< jbyte > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_53324f422c2c7f64], a0.this$);
    }

    jint InputStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_296dd75c373e2c1d], a0.this$, a1, a2);
    }

    JArray< jbyte > InputStream::readAllBytes() const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_readAllBytes_b7afa59f65f6aa9b]));
    }

    JArray< jbyte > InputStream::readNBytes(jint a0) const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_readNBytes_0e3a76bff4aae34c], a0));
    }

    jint InputStream::readNBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_readNBytes_296dd75c373e2c1d], a0.this$, a1, a2);
    }

    void InputStream::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_a1fa5dae97ea5ed2]);
    }

    jlong InputStream::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_9db63109f74a74fc], a0);
    }

    jlong InputStream::transferTo(const ::java::io::OutputStream & a0) const
    {
      return env->callLongMethod(this$, mids$[mid_transferTo_840671b76994c8a8], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_InputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InputStream_init_(t_InputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_InputStream_available(t_InputStream *self);
    static PyObject *t_InputStream_close(t_InputStream *self);
    static PyObject *t_InputStream_mark(t_InputStream *self, PyObject *arg);
    static PyObject *t_InputStream_markSupported(t_InputStream *self);
    static PyObject *t_InputStream_nullInputStream(PyTypeObject *type);
    static PyObject *t_InputStream_read(t_InputStream *self, PyObject *args);
    static PyObject *t_InputStream_readAllBytes(t_InputStream *self);
    static PyObject *t_InputStream_readNBytes(t_InputStream *self, PyObject *args);
    static PyObject *t_InputStream_reset(t_InputStream *self);
    static PyObject *t_InputStream_skip(t_InputStream *self, PyObject *arg);
    static PyObject *t_InputStream_transferTo(t_InputStream *self, PyObject *arg);

    static PyMethodDef t_InputStream__methods_[] = {
      DECLARE_METHOD(t_InputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStream, available, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, close, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, mark, METH_O),
      DECLARE_METHOD(t_InputStream, markSupported, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, nullInputStream, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_InputStream, read, METH_VARARGS),
      DECLARE_METHOD(t_InputStream, readAllBytes, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, readNBytes, METH_VARARGS),
      DECLARE_METHOD(t_InputStream, reset, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, skip, METH_O),
      DECLARE_METHOD(t_InputStream, transferTo, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InputStream)[] = {
      { Py_tp_methods, t_InputStream__methods_ },
      { Py_tp_init, (void *) t_InputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InputStream)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(InputStream, t_InputStream, InputStream);

    void t_InputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(InputStream), &PY_TYPE_DEF(InputStream), module, "InputStream", 0);
    }

    void t_InputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStream), "class_", make_descriptor(InputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStream), "wrapfn_", make_descriptor(t_InputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InputStream::initializeClass, 1)))
        return NULL;
      return t_InputStream::wrap_Object(InputStream(((t_InputStream *) arg)->object.this$));
    }
    static PyObject *t_InputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InputStream_init_(t_InputStream *self, PyObject *args, PyObject *kwds)
    {
      InputStream object((jobject) NULL);

      INT_CALL(object = InputStream());
      self->object = object;

      return 0;
    }

    static PyObject *t_InputStream_available(t_InputStream *self)
    {
      jint result;
      OBJ_CALL(result = self->object.available());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_InputStream_close(t_InputStream *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_InputStream_mark(t_InputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "mark", arg);
      return NULL;
    }

    static PyObject *t_InputStream_markSupported(t_InputStream *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.markSupported());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_InputStream_nullInputStream(PyTypeObject *type)
    {
      InputStream result((jobject) NULL);
      OBJ_CALL(result = ::java::io::InputStream::nullInputStream());
      return t_InputStream::wrap_Object(result);
    }

    static PyObject *t_InputStream_read(t_InputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = self->object.read(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "read", args);
      return NULL;
    }

    static PyObject *t_InputStream_readAllBytes(t_InputStream *self)
    {
      JArray< jbyte > result((jobject) NULL);
      OBJ_CALL(result = self->object.readAllBytes());
      return result.wrap();
    }

    static PyObject *t_InputStream_readNBytes(t_InputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.readNBytes(a0));
            return result.wrap();
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.readNBytes(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "readNBytes", args);
      return NULL;
    }

    static PyObject *t_InputStream_reset(t_InputStream *self)
    {
      OBJ_CALL(self->object.reset());
      Py_RETURN_NONE;
    }

    static PyObject *t_InputStream_skip(t_InputStream *self, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "skip", arg);
      return NULL;
    }

    static PyObject *t_InputStream_transferTo(t_InputStream *self, PyObject *arg)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      jlong result;

      if (!parseArg(arg, "k", ::java::io::OutputStream::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.transferTo(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "transferTo", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedMessages$UTF8Control.h"
#include "java/util/Locale.h"
#include "java/util/ResourceBundle.h"
#include "java/io/IOException.h"
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedMessages$UTF8Control::class$ = NULL;
        jmethodID *RuggedMessages$UTF8Control::mids$ = NULL;
        bool RuggedMessages$UTF8Control::live$ = false;

        jclass RuggedMessages$UTF8Control::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedMessages$UTF8Control");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_newBundle_8ca50bd8ea3c1503] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedMessages$UTF8Control::RuggedMessages$UTF8Control() : ::java::util::ResourceBundle$Control(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::java::util::ResourceBundle RuggedMessages$UTF8Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
        {
          return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_8ca50bd8ea3c1503], a0.this$, a1.this$, a2.this$, a3.this$, a4));
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
      namespace errors {
        static PyObject *t_RuggedMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages$UTF8Control_of_(t_RuggedMessages$UTF8Control *self, PyObject *args);
        static int t_RuggedMessages$UTF8Control_init_(t_RuggedMessages$UTF8Control *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedMessages$UTF8Control_newBundle(t_RuggedMessages$UTF8Control *self, PyObject *args);
        static PyObject *t_RuggedMessages$UTF8Control_get__parameters_(t_RuggedMessages$UTF8Control *self, void *data);
        static PyGetSetDef t_RuggedMessages$UTF8Control__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedMessages$UTF8Control, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedMessages$UTF8Control__methods_[] = {
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, of_, METH_VARARGS),
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, newBundle, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedMessages$UTF8Control)[] = {
          { Py_tp_methods, t_RuggedMessages$UTF8Control__methods_ },
          { Py_tp_init, (void *) t_RuggedMessages$UTF8Control_init_ },
          { Py_tp_getset, t_RuggedMessages$UTF8Control__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedMessages$UTF8Control)[] = {
          &PY_TYPE_DEF(::java::util::ResourceBundle$Control),
          NULL
        };

        DEFINE_TYPE(RuggedMessages$UTF8Control, t_RuggedMessages$UTF8Control, RuggedMessages$UTF8Control);
        PyObject *t_RuggedMessages$UTF8Control::wrap_Object(const RuggedMessages$UTF8Control& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages$UTF8Control::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages$UTF8Control *self = (t_RuggedMessages$UTF8Control *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RuggedMessages$UTF8Control::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages$UTF8Control::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages$UTF8Control *self = (t_RuggedMessages$UTF8Control *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RuggedMessages$UTF8Control::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedMessages$UTF8Control), &PY_TYPE_DEF(RuggedMessages$UTF8Control), module, "RuggedMessages$UTF8Control", 0);
        }

        void t_RuggedMessages$UTF8Control::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages$UTF8Control), "class_", make_descriptor(RuggedMessages$UTF8Control::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages$UTF8Control), "wrapfn_", make_descriptor(t_RuggedMessages$UTF8Control::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages$UTF8Control), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedMessages$UTF8Control::initializeClass, 1)))
            return NULL;
          return t_RuggedMessages$UTF8Control::wrap_Object(RuggedMessages$UTF8Control(((t_RuggedMessages$UTF8Control *) arg)->object.this$));
        }
        static PyObject *t_RuggedMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedMessages$UTF8Control::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RuggedMessages$UTF8Control_of_(t_RuggedMessages$UTF8Control *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RuggedMessages$UTF8Control_init_(t_RuggedMessages$UTF8Control *self, PyObject *args, PyObject *kwds)
        {
          RuggedMessages$UTF8Control object((jobject) NULL);

          INT_CALL(object = RuggedMessages$UTF8Control());
          self->object = object;
          self->parameters[0] = ::org::orekit::rugged::errors::PY_TYPE(RuggedMessages);

          return 0;
        }

        static PyObject *t_RuggedMessages$UTF8Control_newBundle(t_RuggedMessages$UTF8Control *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          ::java::lang::ClassLoader a3((jobject) NULL);
          jboolean a4;
          ::java::util::ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skskZ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.newBundle(a0, a1, a2, a3, a4));
            return ::java::util::t_ResourceBundle::wrap_Object(result);
          }

          return callSuper(PY_TYPE(RuggedMessages$UTF8Control), (PyObject *) self, "newBundle", args, 2);
        }
        static PyObject *t_RuggedMessages$UTF8Control_get__parameters_(t_RuggedMessages$UTF8Control *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonIntervalEventTrigger.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonIntervalEventTrigger::class$ = NULL;
          jmethodID *PythonIntervalEventTrigger::mids$ = NULL;
          bool PythonIntervalEventTrigger::live$ = false;

          jclass PythonIntervalEventTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonIntervalEventTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_83e63d3f64ed1c29] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/AbstractDetector;)V");
              mids$[mid_convertIntervalDetector_323adeb6f2939c8a] = env->getMethodID(cls, "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIntervalEventTrigger::PythonIntervalEventTrigger(const ::org::orekit::propagation::events::AbstractDetector & a0) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(env->newObject(initializeClass, &mids$, mid_init$_83e63d3f64ed1c29, a0.this$)) {}

          void PythonIntervalEventTrigger::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonIntervalEventTrigger::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonIntervalEventTrigger::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_PythonIntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIntervalEventTrigger_of_(t_PythonIntervalEventTrigger *self, PyObject *args);
          static int t_PythonIntervalEventTrigger_init_(t_PythonIntervalEventTrigger *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIntervalEventTrigger_finalize(t_PythonIntervalEventTrigger *self);
          static PyObject *t_PythonIntervalEventTrigger_pythonExtension(t_PythonIntervalEventTrigger *self, PyObject *args);
          static jobject JNICALL t_PythonIntervalEventTrigger_convertIntervalDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonIntervalEventTrigger_getParametersDrivers1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonIntervalEventTrigger_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonIntervalEventTrigger_get__self(t_PythonIntervalEventTrigger *self, void *data);
          static PyObject *t_PythonIntervalEventTrigger_get__parameters_(t_PythonIntervalEventTrigger *self, void *data);
          static PyGetSetDef t_PythonIntervalEventTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIntervalEventTrigger, self),
            DECLARE_GET_FIELD(t_PythonIntervalEventTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIntervalEventTrigger__methods_[] = {
            DECLARE_METHOD(t_PythonIntervalEventTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIntervalEventTrigger)[] = {
            { Py_tp_methods, t_PythonIntervalEventTrigger__methods_ },
            { Py_tp_init, (void *) t_PythonIntervalEventTrigger_init_ },
            { Py_tp_getset, t_PythonIntervalEventTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIntervalEventTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger),
            NULL
          };

          DEFINE_TYPE(PythonIntervalEventTrigger, t_PythonIntervalEventTrigger, PythonIntervalEventTrigger);
          PyObject *t_PythonIntervalEventTrigger::wrap_Object(const PythonIntervalEventTrigger& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonIntervalEventTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonIntervalEventTrigger *self = (t_PythonIntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonIntervalEventTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonIntervalEventTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonIntervalEventTrigger *self = (t_PythonIntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonIntervalEventTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIntervalEventTrigger), &PY_TYPE_DEF(PythonIntervalEventTrigger), module, "PythonIntervalEventTrigger", 1);
          }

          void t_PythonIntervalEventTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntervalEventTrigger), "class_", make_descriptor(PythonIntervalEventTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntervalEventTrigger), "wrapfn_", make_descriptor(t_PythonIntervalEventTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntervalEventTrigger), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIntervalEventTrigger::initializeClass);
            JNINativeMethod methods[] = {
              { "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonIntervalEventTrigger_convertIntervalDetector0 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonIntervalEventTrigger_getParametersDrivers1 },
              { "pythonDecRef", "()V", (void *) t_PythonIntervalEventTrigger_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonIntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIntervalEventTrigger::initializeClass, 1)))
              return NULL;
            return t_PythonIntervalEventTrigger::wrap_Object(PythonIntervalEventTrigger(((t_PythonIntervalEventTrigger *) arg)->object.this$));
          }
          static PyObject *t_PythonIntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIntervalEventTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonIntervalEventTrigger_of_(t_PythonIntervalEventTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonIntervalEventTrigger_init_(t_PythonIntervalEventTrigger *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::events::AbstractDetector a0((jobject) NULL);
            PyTypeObject **p0;
            PythonIntervalEventTrigger object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::events::AbstractDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_AbstractDetector::parameters_))
            {
              INT_CALL(object = PythonIntervalEventTrigger(a0));
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

          static PyObject *t_PythonIntervalEventTrigger_finalize(t_PythonIntervalEventTrigger *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIntervalEventTrigger_pythonExtension(t_PythonIntervalEventTrigger *self, PyObject *args)
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

          static jobject JNICALL t_PythonIntervalEventTrigger_convertIntervalDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(::org::orekit::propagation::events::AbstractDetector(a1));
            PyObject *result = PyObject_CallMethod(obj, "convertIntervalDetector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
            {
              throwTypeError("convertIntervalDetector", result);
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

          static jobject JNICALL t_PythonIntervalEventTrigger_getParametersDrivers1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_6c0ce7e438e5ded4]);
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

          static void JNICALL t_PythonIntervalEventTrigger_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonIntervalEventTrigger_get__self(t_PythonIntervalEventTrigger *self, void *data)
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
          static PyObject *t_PythonIntervalEventTrigger_get__parameters_(t_PythonIntervalEventTrigger *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmMessage.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgmMessage::class$ = NULL;
              jmethodID *SsrIgmMessage::mids$ = NULL;
              bool SsrIgmMessage::live$ = false;

              jclass SsrIgmMessage::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgmMessage");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_07fb340c14f0c0bb] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader;Ljava/util/List;)V");
                  mids$[mid_getSatelliteSystem_21bd759cc4a81606] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgmMessage::SsrIgmMessage(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::SsrMessage(env->newObject(initializeClass, &mids$, mid_init$_07fb340c14f0c0bb, a0, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::gnss::SatelliteSystem SsrIgmMessage::getSatelliteSystem() const
              {
                return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_21bd759cc4a81606]));
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
              static PyObject *t_SsrIgmMessage_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmMessage_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmMessage_of_(t_SsrIgmMessage *self, PyObject *args);
              static int t_SsrIgmMessage_init_(t_SsrIgmMessage *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgmMessage_getSatelliteSystem(t_SsrIgmMessage *self);
              static PyObject *t_SsrIgmMessage_get__satelliteSystem(t_SsrIgmMessage *self, void *data);
              static PyObject *t_SsrIgmMessage_get__parameters_(t_SsrIgmMessage *self, void *data);
              static PyGetSetDef t_SsrIgmMessage__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgmMessage, satelliteSystem),
                DECLARE_GET_FIELD(t_SsrIgmMessage, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgmMessage__methods_[] = {
                DECLARE_METHOD(t_SsrIgmMessage, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmMessage, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmMessage, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgmMessage, getSatelliteSystem, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgmMessage)[] = {
                { Py_tp_methods, t_SsrIgmMessage__methods_ },
                { Py_tp_init, (void *) t_SsrIgmMessage_init_ },
                { Py_tp_getset, t_SsrIgmMessage__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgmMessage)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgmMessage, t_SsrIgmMessage, SsrIgmMessage);
              PyObject *t_SsrIgmMessage::wrap_Object(const SsrIgmMessage& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgmMessage::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgmMessage *self = (t_SsrIgmMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgmMessage::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgmMessage::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgmMessage *self = (t_SsrIgmMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgmMessage::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgmMessage), &PY_TYPE_DEF(SsrIgmMessage), module, "SsrIgmMessage", 0);
              }

              void t_SsrIgmMessage::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmMessage), "class_", make_descriptor(SsrIgmMessage::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmMessage), "wrapfn_", make_descriptor(t_SsrIgmMessage::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmMessage), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgmMessage_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgmMessage::initializeClass, 1)))
                  return NULL;
                return t_SsrIgmMessage::wrap_Object(SsrIgmMessage(((t_SsrIgmMessage *) arg)->object.this$));
              }
              static PyObject *t_SsrIgmMessage_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgmMessage::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgmMessage_of_(t_SsrIgmMessage *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgmMessage_init_(t_SsrIgmMessage *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgmMessage object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgmMessage(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgmMessage_getSatelliteSystem(t_SsrIgmMessage *self)
              {
                ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
              }
              static PyObject *t_SsrIgmMessage_get__parameters_(t_SsrIgmMessage *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgmMessage_get__satelliteSystem(t_SsrIgmMessage *self, void *data)
              {
                ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
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
#include "org/orekit/utils/PythonPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonPVCoordinatesProvider::class$ = NULL;
      jmethodID *PythonPVCoordinatesProvider::mids$ = NULL;
      bool PythonPVCoordinatesProvider::live$ = false;

      jclass PythonPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonPVCoordinatesProvider::PythonPVCoordinatesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonPVCoordinatesProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonPVCoordinatesProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonPVCoordinatesProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonPVCoordinatesProvider_init_(t_PythonPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonPVCoordinatesProvider_finalize(t_PythonPVCoordinatesProvider *self);
      static PyObject *t_PythonPVCoordinatesProvider_pythonExtension(t_PythonPVCoordinatesProvider *self, PyObject *args);
      static jobject JNICALL t_PythonPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonPVCoordinatesProvider_get__self(t_PythonPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_PythonPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonPVCoordinatesProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PythonPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_PythonPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_PythonPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonPVCoordinatesProvider, t_PythonPVCoordinatesProvider, PythonPVCoordinatesProvider);

      void t_PythonPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonPVCoordinatesProvider), &PY_TYPE_DEF(PythonPVCoordinatesProvider), module, "PythonPVCoordinatesProvider", 1);
      }

      void t_PythonPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPVCoordinatesProvider), "class_", make_descriptor(PythonPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPVCoordinatesProvider), "wrapfn_", make_descriptor(t_PythonPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonPVCoordinatesProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonPVCoordinatesProvider_getPVCoordinates0 },
          { "pythonDecRef", "()V", (void *) t_PythonPVCoordinatesProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PythonPVCoordinatesProvider::wrap_Object(PythonPVCoordinatesProvider(((t_PythonPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonPVCoordinatesProvider_init_(t_PythonPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonPVCoordinatesProvider object((jobject) NULL);

        INT_CALL(object = PythonPVCoordinatesProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonPVCoordinatesProvider_finalize(t_PythonPVCoordinatesProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonPVCoordinatesProvider_pythonExtension(t_PythonPVCoordinatesProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPVCoordinatesProvider::mids$[PythonPVCoordinatesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static void JNICALL t_PythonPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPVCoordinatesProvider::mids$[PythonPVCoordinatesProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonPVCoordinatesProvider::mids$[PythonPVCoordinatesProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonPVCoordinatesProvider_get__self(t_PythonPVCoordinatesProvider *self, void *data)
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
#include "org/orekit/propagation/numerical/EpochDerivativesEquations.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *EpochDerivativesEquations::class$ = NULL;
        jmethodID *EpochDerivativesEquations::mids$ = NULL;
        bool EpochDerivativesEquations::live$ = false;
        jint EpochDerivativesEquations::STATE_DIMENSION = (jint) 0;

        jclass EpochDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/EpochDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ae081e82ebe13cf1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/propagation/numerical/NumericalPropagator;)V");
            mids$[mid_combinedDerivatives_f7e02f1d7093fbbb] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
            mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_setInitialJacobians_c3c52b1257139045] = env->getMethodID(cls, "setInitialJacobians", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_setInitialJacobians_296554bac746fabb] = env->getMethodID(cls, "setInitialJacobians", "(Lorg/orekit/propagation/SpacecraftState;[[D[[D)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_setInitialJacobians_7fb9b522aeb3d355] = env->getMethodID(cls, "setInitialJacobians", "(Lorg/orekit/propagation/SpacecraftState;[[D[[D[D)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            STATE_DIMENSION = env->getStaticIntField(cls, "STATE_DIMENSION");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EpochDerivativesEquations::EpochDerivativesEquations(const ::java::lang::String & a0, const ::org::orekit::propagation::numerical::NumericalPropagator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ae081e82ebe13cf1, a0.this$, a1.this$)) {}

        ::org::orekit::propagation::integration::CombinedDerivatives EpochDerivativesEquations::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_f7e02f1d7093fbbb], a0.this$));
        }

        jint EpochDerivativesEquations::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
        }

        ::java::lang::String EpochDerivativesEquations::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
        }

        ::org::orekit::propagation::SpacecraftState EpochDerivativesEquations::setInitialJacobians(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_setInitialJacobians_c3c52b1257139045], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState EpochDerivativesEquations::setInitialJacobians(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_setInitialJacobians_296554bac746fabb], a0.this$, a1.this$, a2.this$));
        }

        void EpochDerivativesEquations::setInitialJacobians(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2, const JArray< jdouble > & a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialJacobians_7fb9b522aeb3d355], a0.this$, a1.this$, a2.this$, a3.this$);
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
        static PyObject *t_EpochDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EpochDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EpochDerivativesEquations_init_(t_EpochDerivativesEquations *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EpochDerivativesEquations_combinedDerivatives(t_EpochDerivativesEquations *self, PyObject *arg);
        static PyObject *t_EpochDerivativesEquations_getDimension(t_EpochDerivativesEquations *self);
        static PyObject *t_EpochDerivativesEquations_getName(t_EpochDerivativesEquations *self);
        static PyObject *t_EpochDerivativesEquations_setInitialJacobians(t_EpochDerivativesEquations *self, PyObject *args);
        static PyObject *t_EpochDerivativesEquations_get__dimension(t_EpochDerivativesEquations *self, void *data);
        static int t_EpochDerivativesEquations_set__initialJacobians(t_EpochDerivativesEquations *self, PyObject *arg, void *data);
        static PyObject *t_EpochDerivativesEquations_get__name(t_EpochDerivativesEquations *self, void *data);
        static PyGetSetDef t_EpochDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_EpochDerivativesEquations, dimension),
          DECLARE_SET_FIELD(t_EpochDerivativesEquations, initialJacobians),
          DECLARE_GET_FIELD(t_EpochDerivativesEquations, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EpochDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_EpochDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EpochDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EpochDerivativesEquations, combinedDerivatives, METH_O),
          DECLARE_METHOD(t_EpochDerivativesEquations, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_EpochDerivativesEquations, getName, METH_NOARGS),
          DECLARE_METHOD(t_EpochDerivativesEquations, setInitialJacobians, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EpochDerivativesEquations)[] = {
          { Py_tp_methods, t_EpochDerivativesEquations__methods_ },
          { Py_tp_init, (void *) t_EpochDerivativesEquations_init_ },
          { Py_tp_getset, t_EpochDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EpochDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EpochDerivativesEquations, t_EpochDerivativesEquations, EpochDerivativesEquations);

        void t_EpochDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(EpochDerivativesEquations), &PY_TYPE_DEF(EpochDerivativesEquations), module, "EpochDerivativesEquations", 0);
        }

        void t_EpochDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "class_", make_descriptor(EpochDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "wrapfn_", make_descriptor(t_EpochDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "boxfn_", make_descriptor(boxObject));
          env->getClass(EpochDerivativesEquations::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "STATE_DIMENSION", make_descriptor(EpochDerivativesEquations::STATE_DIMENSION));
        }

        static PyObject *t_EpochDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EpochDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_EpochDerivativesEquations::wrap_Object(EpochDerivativesEquations(((t_EpochDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_EpochDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EpochDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EpochDerivativesEquations_init_(t_EpochDerivativesEquations *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::propagation::numerical::NumericalPropagator a1((jobject) NULL);
          EpochDerivativesEquations object((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::propagation::numerical::NumericalPropagator::initializeClass, &a0, &a1))
          {
            INT_CALL(object = EpochDerivativesEquations(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EpochDerivativesEquations_combinedDerivatives(t_EpochDerivativesEquations *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.combinedDerivatives(a0));
            return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
          return NULL;
        }

        static PyObject *t_EpochDerivativesEquations_getDimension(t_EpochDerivativesEquations *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EpochDerivativesEquations_getName(t_EpochDerivativesEquations *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_EpochDerivativesEquations_setInitialJacobians(t_EpochDerivativesEquations *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.setInitialJacobians(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k[[D[[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.setInitialJacobians(a0, a1, a2));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "k[[D[[D[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setInitialJacobians(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialJacobians", args);
          return NULL;
        }

        static PyObject *t_EpochDerivativesEquations_get__dimension(t_EpochDerivativesEquations *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static int t_EpochDerivativesEquations_set__initialJacobians(t_EpochDerivativesEquations *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setInitialJacobians(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialJacobians", arg);
          return -1;
        }

        static PyObject *t_EpochDerivativesEquations_get__name(t_EpochDerivativesEquations *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}

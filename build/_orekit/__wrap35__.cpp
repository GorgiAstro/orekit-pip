#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisFileParser.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/io/BufferedReader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisFileParser::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisFileParser::mids$ = NULL;
        bool PythonAttitudeEphemerisFileParser::live$ = false;

        jclass PythonAttitudeEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_parse_538d2753c07b807c] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/AttitudeEphemerisFile;");
            mids$[mid_parse_BS_c6fdc4c2324606fe] = env->getMethodID(cls, "parse_BS", "(Ljava/io/BufferedReader;Ljava/lang/String;)Lorg/orekit/files/general/AttitudeEphemerisFile;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisFileParser::PythonAttitudeEphemerisFileParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonAttitudeEphemerisFileParser::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAttitudeEphemerisFileParser::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAttitudeEphemerisFileParser::pythonExtension(jlong a0) const
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
    namespace files {
      namespace general {
        static PyObject *t_PythonAttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisFileParser_init_(t_PythonAttitudeEphemerisFileParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisFileParser_finalize(t_PythonAttitudeEphemerisFileParser *self);
        static PyObject *t_PythonAttitudeEphemerisFileParser_pythonExtension(t_PythonAttitudeEphemerisFileParser *self, PyObject *args);
        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse_BS1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAttitudeEphemerisFileParser_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAttitudeEphemerisFileParser_get__self(t_PythonAttitudeEphemerisFileParser *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisFileParser, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisFileParser)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisFileParser_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisFileParser, t_PythonAttitudeEphemerisFileParser, PythonAttitudeEphemerisFileParser);

        void t_PythonAttitudeEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisFileParser), &PY_TYPE_DEF(PythonAttitudeEphemerisFileParser), module, "PythonAttitudeEphemerisFileParser", 1);
        }

        void t_PythonAttitudeEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileParser), "class_", make_descriptor(PythonAttitudeEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileParser), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisFileParser::initializeClass);
          JNINativeMethod methods[] = {
            { "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/AttitudeEphemerisFile;", (void *) t_PythonAttitudeEphemerisFileParser_parse0 },
            { "parse_BS", "(Ljava/io/BufferedReader;Ljava/lang/String;)Lorg/orekit/files/general/AttitudeEphemerisFile;", (void *) t_PythonAttitudeEphemerisFileParser_parse_BS1 },
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisFileParser_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisFileParser::wrap_Object(PythonAttitudeEphemerisFileParser(((t_PythonAttitudeEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisFileParser_init_(t_PythonAttitudeEphemerisFileParser *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisFileParser object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisFileParser());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_finalize(t_PythonAttitudeEphemerisFileParser *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_pythonExtension(t_PythonAttitudeEphemerisFileParser *self, PyObject *args)
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

        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::files::general::AttitudeEphemerisFile value((jobject) NULL);
          PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
          PyObject *result = PyObject_CallMethod(obj, "parse", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &value))
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

        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse_BS1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::files::general::AttitudeEphemerisFile value((jobject) NULL);
          PyObject *o0 = ::java::io::t_BufferedReader::wrap_Object(::java::io::BufferedReader(a0));
          PyObject *o1 = env->fromJString((jstring) a1, 0);
          PyObject *result = PyObject_CallMethod(obj, "parse_BS", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &value))
          {
            throwTypeError("parse_BS", result);
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

        static void JNICALL t_PythonAttitudeEphemerisFileParser_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_get__self(t_PythonAttitudeEphemerisFileParser *self, void *data)
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
#include "org/orekit/gnss/metric/parser/PythonEncodedMessage.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonEncodedMessage::class$ = NULL;
          jmethodID *PythonEncodedMessage::mids$ = NULL;
          bool PythonEncodedMessage::live$ = false;

          jclass PythonEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_extractBits_a1cf8c47dc9c5883] = env->getMethodID(cls, "extractBits", "(I)J");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonEncodedMessage::PythonEncodedMessage() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonEncodedMessage::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonEncodedMessage::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonEncodedMessage::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_PythonEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonEncodedMessage_init_(t_PythonEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonEncodedMessage_finalize(t_PythonEncodedMessage *self);
          static PyObject *t_PythonEncodedMessage_pythonExtension(t_PythonEncodedMessage *self, PyObject *args);
          static jlong JNICALL t_PythonEncodedMessage_extractBits0(JNIEnv *jenv, jobject jobj, jint a0);
          static void JNICALL t_PythonEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonEncodedMessage_get__self(t_PythonEncodedMessage *self, void *data);
          static PyGetSetDef t_PythonEncodedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_PythonEncodedMessage, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_PythonEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEncodedMessage, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonEncodedMessage, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonEncodedMessage)[] = {
            { Py_tp_methods, t_PythonEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_PythonEncodedMessage_init_ },
            { Py_tp_getset, t_PythonEncodedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonEncodedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonEncodedMessage, t_PythonEncodedMessage, PythonEncodedMessage);

          void t_PythonEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonEncodedMessage), &PY_TYPE_DEF(PythonEncodedMessage), module, "PythonEncodedMessage", 1);
          }

          void t_PythonEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncodedMessage), "class_", make_descriptor(PythonEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncodedMessage), "wrapfn_", make_descriptor(t_PythonEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncodedMessage), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonEncodedMessage::initializeClass);
            JNINativeMethod methods[] = {
              { "extractBits", "(I)J", (void *) t_PythonEncodedMessage_extractBits0 },
              { "pythonDecRef", "()V", (void *) t_PythonEncodedMessage_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_PythonEncodedMessage::wrap_Object(PythonEncodedMessage(((t_PythonEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_PythonEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonEncodedMessage_init_(t_PythonEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            PythonEncodedMessage object((jobject) NULL);

            INT_CALL(object = PythonEncodedMessage());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonEncodedMessage_finalize(t_PythonEncodedMessage *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonEncodedMessage_pythonExtension(t_PythonEncodedMessage *self, PyObject *args)
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

          static jlong JNICALL t_PythonEncodedMessage_extractBits0(JNIEnv *jenv, jobject jobj, jint a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEncodedMessage::mids$[PythonEncodedMessage::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jlong value;
            PyObject *result = PyObject_CallMethod(obj, "extractBits", "i", (int) a0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "J", &value))
            {
              throwTypeError("extractBits", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jlong) 0;
          }

          static void JNICALL t_PythonEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEncodedMessage::mids$[PythonEncodedMessage::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonEncodedMessage::mids$[PythonEncodedMessage::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonEncodedMessage_get__self(t_PythonEncodedMessage *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdaptiveStepsizeIntegrator::class$ = NULL;
        jmethodID *AdaptiveStepsizeIntegrator::mids$ = NULL;
        bool AdaptiveStepsizeIntegrator::live$ = false;

        jclass AdaptiveStepsizeIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_60ad6b8be9929df4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DD[D[D)V");
            mids$[mid_init$_09f2813532e594da] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDDD)V");
            mids$[mid_getMaxStep_dff5885c2c873297] = env->getMethodID(cls, "getMaxStep", "()D");
            mids$[mid_getMinStep_dff5885c2c873297] = env->getMethodID(cls, "getMinStep", "()D");
            mids$[mid_initializeStep_19a4ca64ef36ee6e] = env->getMethodID(cls, "initializeStep", "(ZI[DLorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_setInitialStepSize_17db3a65980d3441] = env->getMethodID(cls, "setInitialStepSize", "(D)V");
            mids$[mid_setStepSizeControl_36e977212374ff6b] = env->getMethodID(cls, "setStepSizeControl", "(DD[D[D)V");
            mids$[mid_setStepSizeControl_b0a935b68e41d65a] = env->getMethodID(cls, "setStepSizeControl", "(DDDD)V");
            mids$[mid_sanityChecks_9a885fd893969c04] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/ODEState;D)V");
            mids$[mid_getStepSizeHelper_22d091974ce7dd9a] = env->getMethodID(cls, "getStepSizeHelper", "()Lorg/hipparchus/ode/nonstiff/StepsizeHelper;");
            mids$[mid_resetInternalState_0fa09c18fee449d5] = env->getMethodID(cls, "resetInternalState", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdaptiveStepsizeIntegrator::AdaptiveStepsizeIntegrator(const ::java::lang::String & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::AbstractIntegrator(env->newObject(initializeClass, &mids$, mid_init$_60ad6b8be9929df4, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        AdaptiveStepsizeIntegrator::AdaptiveStepsizeIntegrator(const ::java::lang::String & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::AbstractIntegrator(env->newObject(initializeClass, &mids$, mid_init$_09f2813532e594da, a0.this$, a1, a2, a3, a4)) {}

        jdouble AdaptiveStepsizeIntegrator::getMaxStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxStep_dff5885c2c873297]);
        }

        jdouble AdaptiveStepsizeIntegrator::getMinStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinStep_dff5885c2c873297]);
        }

        jdouble AdaptiveStepsizeIntegrator::initializeStep(jboolean a0, jint a1, const JArray< jdouble > & a2, const ::org::hipparchus::ode::ODEStateAndDerivative & a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_initializeStep_19a4ca64ef36ee6e], a0, a1, a2.this$, a3.this$);
        }

        void AdaptiveStepsizeIntegrator::setInitialStepSize(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialStepSize_17db3a65980d3441], a0);
        }

        void AdaptiveStepsizeIntegrator::setStepSizeControl(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_36e977212374ff6b], a0, a1, a2.this$, a3.this$);
        }

        void AdaptiveStepsizeIntegrator::setStepSizeControl(jdouble a0, jdouble a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_b0a935b68e41d65a], a0, a1, a2, a3);
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
        static PyObject *t_AdaptiveStepsizeIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdaptiveStepsizeIntegrator_init_(t_AdaptiveStepsizeIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdaptiveStepsizeIntegrator_getMaxStep(t_AdaptiveStepsizeIntegrator *self);
        static PyObject *t_AdaptiveStepsizeIntegrator_getMinStep(t_AdaptiveStepsizeIntegrator *self);
        static PyObject *t_AdaptiveStepsizeIntegrator_initializeStep(t_AdaptiveStepsizeIntegrator *self, PyObject *args);
        static PyObject *t_AdaptiveStepsizeIntegrator_setInitialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeIntegrator_setStepSizeControl(t_AdaptiveStepsizeIntegrator *self, PyObject *args);
        static int t_AdaptiveStepsizeIntegrator_set__initialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_AdaptiveStepsizeIntegrator_get__maxStep(t_AdaptiveStepsizeIntegrator *self, void *data);
        static PyObject *t_AdaptiveStepsizeIntegrator_get__minStep(t_AdaptiveStepsizeIntegrator *self, void *data);
        static PyGetSetDef t_AdaptiveStepsizeIntegrator__fields_[] = {
          DECLARE_SET_FIELD(t_AdaptiveStepsizeIntegrator, initialStepSize),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeIntegrator, maxStep),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeIntegrator, minStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdaptiveStepsizeIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, getMaxStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, getMinStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, initializeStep, METH_VARARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, setInitialStepSize, METH_O),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, setStepSizeControl, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptiveStepsizeIntegrator)[] = {
          { Py_tp_methods, t_AdaptiveStepsizeIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdaptiveStepsizeIntegrator_init_ },
          { Py_tp_getset, t_AdaptiveStepsizeIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptiveStepsizeIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractIntegrator),
          NULL
        };

        DEFINE_TYPE(AdaptiveStepsizeIntegrator, t_AdaptiveStepsizeIntegrator, AdaptiveStepsizeIntegrator);

        void t_AdaptiveStepsizeIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptiveStepsizeIntegrator), &PY_TYPE_DEF(AdaptiveStepsizeIntegrator), module, "AdaptiveStepsizeIntegrator", 0);
        }

        void t_AdaptiveStepsizeIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeIntegrator), "class_", make_descriptor(AdaptiveStepsizeIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeIntegrator), "wrapfn_", make_descriptor(t_AdaptiveStepsizeIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptiveStepsizeIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdaptiveStepsizeIntegrator::wrap_Object(AdaptiveStepsizeIntegrator(((t_AdaptiveStepsizeIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdaptiveStepsizeIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptiveStepsizeIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdaptiveStepsizeIntegrator_init_(t_AdaptiveStepsizeIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              AdaptiveStepsizeIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sDD[D[D", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdaptiveStepsizeIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              AdaptiveStepsizeIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sDDDD", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdaptiveStepsizeIntegrator(a0, a1, a2, a3, a4));
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

        static PyObject *t_AdaptiveStepsizeIntegrator_getMaxStep(t_AdaptiveStepsizeIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_getMinStep(t_AdaptiveStepsizeIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_initializeStep(t_AdaptiveStepsizeIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;
          JArray< jdouble > a2((jobject) NULL);
          ::org::hipparchus::ode::ODEStateAndDerivative a3((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "ZI[Dk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.initializeStep(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeStep", args);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_setInitialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInitialStepSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialStepSize", arg);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_setStepSizeControl(t_AdaptiveStepsizeIntegrator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setStepSizeControl", args);
          return NULL;
        }

        static int t_AdaptiveStepsizeIntegrator_set__initialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInitialStepSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialStepSize", arg);
          return -1;
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_get__maxStep(t_AdaptiveStepsizeIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_get__minStep(t_AdaptiveStepsizeIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractPropagatorConverter.h"
#include "org/orekit/propagation/conversion/PropagatorConverter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractPropagatorConverter::class$ = NULL;
        jmethodID *AbstractPropagatorConverter::mids$ = NULL;
        bool AbstractPropagatorConverter::live$ = false;

        jclass AbstractPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_convert_a2b4413ea9476c3c] = env->getMethodID(cls, "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_4513d66a76c09bcc] = env->getMethodID(cls, "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_e744c80c7015525e] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_47fabeaccf7f6a1b] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_getAdaptedPropagator_8afbda2d6a487743] = env->getMethodID(cls, "getAdaptedPropagator", "()Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getRMS_dff5885c2c873297] = env->getMethodID(cls, "getRMS", "()D");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getModel_9751b2e3b68b45ea] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getObjectiveFunction_18d8e6aab2238577] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");
            mids$[mid_getTargetSize_570ce0828f81a2c1] = env->getMethodID(cls, "getTargetSize", "()I");
            mids$[mid_isOnlyPosition_b108b35ef48e27bd] = env->getMethodID(cls, "isOnlyPosition", "()Z");
            mids$[mid_getSample_2afa36052df4765d] = env->getMethodID(cls, "getSample", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const JArray< ::java::lang::String > & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_a2b4413ea9476c3c], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const ::java::util::List & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_4513d66a76c09bcc], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const JArray< ::java::lang::String > & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_e744c80c7015525e], a0.this$, a1, a2, a3.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const ::java::util::List & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_47fabeaccf7f6a1b], a0.this$, a1, a2, a3.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::getAdaptedPropagator() const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_getAdaptedPropagator_8afbda2d6a487743]));
        }

        jint AbstractPropagatorConverter::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
        }

        jdouble AbstractPropagatorConverter::getRMS() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRMS_dff5885c2c873297]);
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
        static PyObject *t_AbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorConverter_convert(t_AbstractPropagatorConverter *self, PyObject *args);
        static PyObject *t_AbstractPropagatorConverter_getAdaptedPropagator(t_AbstractPropagatorConverter *self);
        static PyObject *t_AbstractPropagatorConverter_getEvaluations(t_AbstractPropagatorConverter *self);
        static PyObject *t_AbstractPropagatorConverter_getRMS(t_AbstractPropagatorConverter *self);
        static PyObject *t_AbstractPropagatorConverter_get__adaptedPropagator(t_AbstractPropagatorConverter *self, void *data);
        static PyObject *t_AbstractPropagatorConverter_get__evaluations(t_AbstractPropagatorConverter *self, void *data);
        static PyObject *t_AbstractPropagatorConverter_get__rMS(t_AbstractPropagatorConverter *self, void *data);
        static PyGetSetDef t_AbstractPropagatorConverter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractPropagatorConverter, adaptedPropagator),
          DECLARE_GET_FIELD(t_AbstractPropagatorConverter, evaluations),
          DECLARE_GET_FIELD(t_AbstractPropagatorConverter, rMS),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_AbstractPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, convert, METH_VARARGS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, getAdaptedPropagator, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, getRMS, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractPropagatorConverter)[] = {
          { Py_tp_methods, t_AbstractPropagatorConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractPropagatorConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractPropagatorConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractPropagatorConverter, t_AbstractPropagatorConverter, AbstractPropagatorConverter);

        void t_AbstractPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractPropagatorConverter), &PY_TYPE_DEF(AbstractPropagatorConverter), module, "AbstractPropagatorConverter", 0);
        }

        void t_AbstractPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorConverter), "class_", make_descriptor(AbstractPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorConverter), "wrapfn_", make_descriptor(t_AbstractPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_AbstractPropagatorConverter::wrap_Object(AbstractPropagatorConverter(((t_AbstractPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_AbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractPropagatorConverter_convert(t_AbstractPropagatorConverter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              JArray< ::java::lang::String > a2((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZ[s", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              JArray< ::java::lang::String > a3((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDI[s", ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              ::java::util::List a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDIK", ::org::orekit::propagation::Propagator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "convert", args);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorConverter_getAdaptedPropagator(t_AbstractPropagatorConverter *self)
        {
          ::org::orekit::propagation::Propagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdaptedPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorConverter_getEvaluations(t_AbstractPropagatorConverter *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractPropagatorConverter_getRMS(t_AbstractPropagatorConverter *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRMS());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractPropagatorConverter_get__adaptedPropagator(t_AbstractPropagatorConverter *self, void *data)
        {
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdaptedPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorConverter_get__evaluations(t_AbstractPropagatorConverter *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractPropagatorConverter_get__rMS(t_AbstractPropagatorConverter *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRMS());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *RotationConvention::class$ = NULL;
          jmethodID *RotationConvention::mids$ = NULL;
          bool RotationConvention::live$ = false;
          RotationConvention *RotationConvention::FRAME_TRANSFORM = NULL;
          RotationConvention *RotationConvention::VECTOR_OPERATOR = NULL;

          jclass RotationConvention::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/RotationConvention");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_7f2a5621b1707845] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;");
              mids$[mid_values_acdc129d560ce01b] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              FRAME_TRANSFORM = new RotationConvention(env->getStaticObjectField(cls, "FRAME_TRANSFORM", "Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;"));
              VECTOR_OPERATOR = new RotationConvention(env->getStaticObjectField(cls, "VECTOR_OPERATOR", "Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RotationConvention RotationConvention::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RotationConvention(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7f2a5621b1707845], a0.this$));
          }

          JArray< RotationConvention > RotationConvention::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RotationConvention >(env->callStaticObjectMethod(cls, mids$[mid_values_acdc129d560ce01b]));
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
          static PyObject *t_RotationConvention_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationConvention_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationConvention_of_(t_RotationConvention *self, PyObject *args);
          static PyObject *t_RotationConvention_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RotationConvention_values(PyTypeObject *type);
          static PyObject *t_RotationConvention_get__parameters_(t_RotationConvention *self, void *data);
          static PyGetSetDef t_RotationConvention__fields_[] = {
            DECLARE_GET_FIELD(t_RotationConvention, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RotationConvention__methods_[] = {
            DECLARE_METHOD(t_RotationConvention, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationConvention, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationConvention, of_, METH_VARARGS),
            DECLARE_METHOD(t_RotationConvention, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RotationConvention, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RotationConvention)[] = {
            { Py_tp_methods, t_RotationConvention__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RotationConvention__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RotationConvention)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RotationConvention, t_RotationConvention, RotationConvention);
          PyObject *t_RotationConvention::wrap_Object(const RotationConvention& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationConvention::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationConvention *self = (t_RotationConvention *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RotationConvention::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationConvention::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationConvention *self = (t_RotationConvention *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RotationConvention::install(PyObject *module)
          {
            installType(&PY_TYPE(RotationConvention), &PY_TYPE_DEF(RotationConvention), module, "RotationConvention", 0);
          }

          void t_RotationConvention::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "class_", make_descriptor(RotationConvention::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "wrapfn_", make_descriptor(t_RotationConvention::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "boxfn_", make_descriptor(boxObject));
            env->getClass(RotationConvention::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "FRAME_TRANSFORM", make_descriptor(t_RotationConvention::wrap_Object(*RotationConvention::FRAME_TRANSFORM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "VECTOR_OPERATOR", make_descriptor(t_RotationConvention::wrap_Object(*RotationConvention::VECTOR_OPERATOR)));
          }

          static PyObject *t_RotationConvention_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RotationConvention::initializeClass, 1)))
              return NULL;
            return t_RotationConvention::wrap_Object(RotationConvention(((t_RotationConvention *) arg)->object.this$));
          }
          static PyObject *t_RotationConvention_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RotationConvention::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RotationConvention_of_(t_RotationConvention *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RotationConvention_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RotationConvention result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationConvention::valueOf(a0));
              return t_RotationConvention::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RotationConvention_values(PyTypeObject *type)
          {
            JArray< RotationConvention > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationConvention::values());
            return JArray<jobject>(result.this$).wrap(t_RotationConvention::wrap_jobject);
          }
          static PyObject *t_RotationConvention_get__parameters_(t_RotationConvention *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IntConsumer::class$ = NULL;
            jmethodID *ParseToken$IntConsumer::mids$ = NULL;
            bool ParseToken$IntConsumer::live$ = false;

            jclass ParseToken$IntConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_99803b0791f320ff] = env->getMethodID(cls, "accept", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IntConsumer::accept(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_99803b0791f320ff], a0);
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
            static PyObject *t_ParseToken$IntConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntConsumer_accept(t_ParseToken$IntConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$IntConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IntConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IntConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IntConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IntConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IntConsumer, t_ParseToken$IntConsumer, ParseToken$IntConsumer);

            void t_ParseToken$IntConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IntConsumer), &PY_TYPE_DEF(ParseToken$IntConsumer), module, "ParseToken$IntConsumer", 0);
            }

            void t_ParseToken$IntConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntConsumer), "class_", make_descriptor(ParseToken$IntConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntConsumer), "wrapfn_", make_descriptor(t_ParseToken$IntConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IntConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IntConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IntConsumer::wrap_Object(ParseToken$IntConsumer(((t_ParseToken$IntConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IntConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IntConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IntConsumer_accept(t_ParseToken$IntConsumer *self, PyObject *arg)
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
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersRangeModifier::class$ = NULL;
          jmethodID *PhaseCentersRangeModifier::mids$ = NULL;
          bool PhaseCentersRangeModifier::live$ = false;

          jclass PhaseCentersRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a2ed374ecf8bf34a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersRangeModifier::PhaseCentersRangeModifier(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a2ed374ecf8bf34a, a0.this$, a1.this$)) {}

          ::java::util::List PhaseCentersRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void PhaseCentersRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_PhaseCentersRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseCentersRangeModifier_init_(t_PhaseCentersRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersRangeModifier_getParametersDrivers(t_PhaseCentersRangeModifier *self);
          static PyObject *t_PhaseCentersRangeModifier_modifyWithoutDerivatives(t_PhaseCentersRangeModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersRangeModifier_get__parametersDrivers(t_PhaseCentersRangeModifier *self, void *data);
          static PyGetSetDef t_PhaseCentersRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseCentersRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseCentersRangeModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseCentersRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersRangeModifier)[] = {
            { Py_tp_methods, t_PhaseCentersRangeModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersRangeModifier_init_ },
            { Py_tp_getset, t_PhaseCentersRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersRangeModifier, t_PhaseCentersRangeModifier, PhaseCentersRangeModifier);

          void t_PhaseCentersRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersRangeModifier), &PY_TYPE_DEF(PhaseCentersRangeModifier), module, "PhaseCentersRangeModifier", 0);
          }

          void t_PhaseCentersRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersRangeModifier), "class_", make_descriptor(PhaseCentersRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersRangeModifier), "wrapfn_", make_descriptor(t_PhaseCentersRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersRangeModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersRangeModifier::wrap_Object(PhaseCentersRangeModifier(((t_PhaseCentersRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseCentersRangeModifier_init_(t_PhaseCentersRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersRangeModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersRangeModifier_getParametersDrivers(t_PhaseCentersRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseCentersRangeModifier_modifyWithoutDerivatives(t_PhaseCentersRangeModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseCentersRangeModifier_get__parametersDrivers(t_PhaseCentersRangeModifier *self, void *data)
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
#include "org/hipparchus/analysis/function/Acosh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Acosh::class$ = NULL;
        jmethodID *Acosh::mids$ = NULL;
        bool Acosh::live$ = false;

        jclass Acosh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Acosh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Acosh::Acosh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Acosh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Acosh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Acosh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Acosh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Acosh_init_(t_Acosh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Acosh_value(t_Acosh *self, PyObject *args);

        static PyMethodDef t_Acosh__methods_[] = {
          DECLARE_METHOD(t_Acosh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acosh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acosh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Acosh)[] = {
          { Py_tp_methods, t_Acosh__methods_ },
          { Py_tp_init, (void *) t_Acosh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Acosh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Acosh, t_Acosh, Acosh);

        void t_Acosh::install(PyObject *module)
        {
          installType(&PY_TYPE(Acosh), &PY_TYPE_DEF(Acosh), module, "Acosh", 0);
        }

        void t_Acosh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acosh), "class_", make_descriptor(Acosh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acosh), "wrapfn_", make_descriptor(t_Acosh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acosh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Acosh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Acosh::initializeClass, 1)))
            return NULL;
          return t_Acosh::wrap_Object(Acosh(((t_Acosh *) arg)->object.this$));
        }
        static PyObject *t_Acosh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Acosh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Acosh_init_(t_Acosh *self, PyObject *args, PyObject *kwds)
        {
          Acosh object((jobject) NULL);

          INT_CALL(object = Acosh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Acosh_value(t_Acosh *self, PyObject *args)
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
#include "java/text/Format.h"
#include "java/text/ParseException.h"
#include "java/lang/StringBuffer.h"
#include "java/io/Serializable.h"
#include "java/text/ParsePosition.h"
#include "java/text/AttributedCharacterIterator.h"
#include "java/text/FieldPosition.h"
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
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_format_e816b890c4273bbd] = env->getMethodID(cls, "format", "(Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_format_f5c3717ad7292c63] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_formatToCharacterIterator_9456d3ba5fac0c0f] = env->getMethodID(cls, "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;");
        mids$[mid_parseObject_f639320a33718c6c] = env->getMethodID(cls, "parseObject", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_parseObject_621466ec4567b9e0] = env->getMethodID(cls, "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object Format::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_4d26fd885228c716]));
    }

    ::java::lang::String Format::format(const ::java::lang::Object & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_e816b890c4273bbd], a0.this$));
    }

    ::java::lang::StringBuffer Format::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_f5c3717ad7292c63], a0.this$, a1.this$, a2.this$));
    }

    ::java::text::AttributedCharacterIterator Format::formatToCharacterIterator(const ::java::lang::Object & a0) const
    {
      return ::java::text::AttributedCharacterIterator(env->callObjectMethod(this$, mids$[mid_formatToCharacterIterator_9456d3ba5fac0c0f], a0.this$));
    }

    ::java::lang::Object Format::parseObject(const ::java::lang::String & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseObject_f639320a33718c6c], a0.this$));
    }

    ::java::lang::Object Format::parseObject(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseObject_621466ec4567b9e0], a0.this$, a1.this$));
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
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/BatchLSModel.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *NumericalPropagatorBuilder::class$ = NULL;
        jmethodID *NumericalPropagatorBuilder::mids$ = NULL;
        bool NumericalPropagatorBuilder::live$ = false;

        jclass NumericalPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/NumericalPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_085e8b3a8f1ba22d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_f94892e562eb0a93] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_690f9b27ef4d22fe] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/forces/ForceModel;)V");
            mids$[mid_buildLeastSquaresModel_a4f338c74a508dcf] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/BatchLSModel;");
            mids$[mid_buildPropagator_6e4510a485a49af8] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/numerical/NumericalPropagator;");
            mids$[mid_copy_de1b712c7ea0d951] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/NumericalPropagatorBuilder;");
            mids$[mid_getAllForceModels_2afa36052df4765d] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getIntegratorBuilder_3a8c061b6472f9df] = env->getMethodID(cls, "getIntegratorBuilder", "()Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;");
            mids$[mid_getMass_dff5885c2c873297] = env->getMethodID(cls, "getMass", "()D");
            mids$[mid_setMass_17db3a65980d3441] = env->getMethodID(cls, "setMass", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NumericalPropagatorBuilder::NumericalPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_085e8b3a8f1ba22d, a0.this$, a1.this$, a2.this$, a3)) {}

        NumericalPropagatorBuilder::NumericalPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_f94892e562eb0a93, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        void NumericalPropagatorBuilder::addForceModel(const ::org::orekit::forces::ForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_690f9b27ef4d22fe], a0.this$);
        }

        ::org::orekit::estimation::leastsquares::BatchLSModel NumericalPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::BatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_a4f338c74a508dcf], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::numerical::NumericalPropagator NumericalPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::numerical::NumericalPropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_6e4510a485a49af8], a0.this$));
        }

        NumericalPropagatorBuilder NumericalPropagatorBuilder::copy() const
        {
          return NumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_de1b712c7ea0d951]));
        }

        ::java::util::List NumericalPropagatorBuilder::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_2afa36052df4765d]));
        }

        ::org::orekit::propagation::conversion::ODEIntegratorBuilder NumericalPropagatorBuilder::getIntegratorBuilder() const
        {
          return ::org::orekit::propagation::conversion::ODEIntegratorBuilder(env->callObjectMethod(this$, mids$[mid_getIntegratorBuilder_3a8c061b6472f9df]));
        }

        jdouble NumericalPropagatorBuilder::getMass() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMass_dff5885c2c873297]);
        }

        void NumericalPropagatorBuilder::setMass(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMass_17db3a65980d3441], a0);
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
        static PyObject *t_NumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NumericalPropagatorBuilder_init_(t_NumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NumericalPropagatorBuilder_addForceModel(t_NumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_NumericalPropagatorBuilder_buildLeastSquaresModel(t_NumericalPropagatorBuilder *self, PyObject *args);
        static PyObject *t_NumericalPropagatorBuilder_buildPropagator(t_NumericalPropagatorBuilder *self, PyObject *args);
        static PyObject *t_NumericalPropagatorBuilder_copy(t_NumericalPropagatorBuilder *self, PyObject *args);
        static PyObject *t_NumericalPropagatorBuilder_getAllForceModels(t_NumericalPropagatorBuilder *self);
        static PyObject *t_NumericalPropagatorBuilder_getIntegratorBuilder(t_NumericalPropagatorBuilder *self);
        static PyObject *t_NumericalPropagatorBuilder_getMass(t_NumericalPropagatorBuilder *self);
        static PyObject *t_NumericalPropagatorBuilder_setMass(t_NumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_NumericalPropagatorBuilder_get__allForceModels(t_NumericalPropagatorBuilder *self, void *data);
        static PyObject *t_NumericalPropagatorBuilder_get__integratorBuilder(t_NumericalPropagatorBuilder *self, void *data);
        static PyObject *t_NumericalPropagatorBuilder_get__mass(t_NumericalPropagatorBuilder *self, void *data);
        static int t_NumericalPropagatorBuilder_set__mass(t_NumericalPropagatorBuilder *self, PyObject *arg, void *data);
        static PyGetSetDef t_NumericalPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_NumericalPropagatorBuilder, allForceModels),
          DECLARE_GET_FIELD(t_NumericalPropagatorBuilder, integratorBuilder),
          DECLARE_GETSET_FIELD(t_NumericalPropagatorBuilder, mass),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NumericalPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_NumericalPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, addForceModel, METH_O),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, copy, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, getIntegratorBuilder, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, getMass, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, setMass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NumericalPropagatorBuilder)[] = {
          { Py_tp_methods, t_NumericalPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_NumericalPropagatorBuilder_init_ },
          { Py_tp_getset, t_NumericalPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NumericalPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(NumericalPropagatorBuilder, t_NumericalPropagatorBuilder, NumericalPropagatorBuilder);

        void t_NumericalPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(NumericalPropagatorBuilder), &PY_TYPE_DEF(NumericalPropagatorBuilder), module, "NumericalPropagatorBuilder", 0);
        }

        void t_NumericalPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagatorBuilder), "class_", make_descriptor(NumericalPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagatorBuilder), "wrapfn_", make_descriptor(t_NumericalPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NumericalPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_NumericalPropagatorBuilder::wrap_Object(NumericalPropagatorBuilder(((t_NumericalPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_NumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NumericalPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NumericalPropagatorBuilder_init_(t_NumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              NumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3))
              {
                INT_CALL(object = NumericalPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              NumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = NumericalPropagatorBuilder(a0, a1, a2, a3, a4));
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

        static PyObject *t_NumericalPropagatorBuilder_addForceModel(t_NumericalPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::forces::ForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::forces::ForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagatorBuilder_buildLeastSquaresModel(t_NumericalPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::BatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_BatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_NumericalPropagatorBuilder_buildPropagator(t_NumericalPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::numerical::NumericalPropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::numerical::t_NumericalPropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_NumericalPropagatorBuilder_copy(t_NumericalPropagatorBuilder *self, PyObject *args)
        {
          NumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_NumericalPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_NumericalPropagatorBuilder_getAllForceModels(t_NumericalPropagatorBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(ForceModel));
        }

        static PyObject *t_NumericalPropagatorBuilder_getIntegratorBuilder(t_NumericalPropagatorBuilder *self)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(result);
        }

        static PyObject *t_NumericalPropagatorBuilder_getMass(t_NumericalPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMass());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NumericalPropagatorBuilder_setMass(t_NumericalPropagatorBuilder *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMass(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMass", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagatorBuilder_get__allForceModels(t_NumericalPropagatorBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_NumericalPropagatorBuilder_get__integratorBuilder(t_NumericalPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(value);
        }

        static PyObject *t_NumericalPropagatorBuilder_get__mass(t_NumericalPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMass());
          return PyFloat_FromDouble((double) value);
        }
        static int t_NumericalPropagatorBuilder_set__mass(t_NumericalPropagatorBuilder *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMass(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mass", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitDetermination::class$ = NULL;
              jmethodID *OrbitDetermination::mids$ = NULL;
              bool OrbitDetermination::live$ = false;

              jclass OrbitDetermination::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getActualOdSpan_dff5885c2c873297] = env->getMethodID(cls, "getActualOdSpan", "()D");
                  mids$[mid_getConfidence_dff5885c2c873297] = env->getMethodID(cls, "getConfidence", "()D");
                  mids$[mid_getConsiderN_570ce0828f81a2c1] = env->getMethodID(cls, "getConsiderN", "()I");
                  mids$[mid_getConsiderParameters_2afa36052df4765d] = env->getMethodID(cls, "getConsiderParameters", "()Ljava/util/List;");
                  mids$[mid_getDataTypes_2afa36052df4765d] = env->getMethodID(cls, "getDataTypes", "()Ljava/util/List;");
                  mids$[mid_getEpoch_85703d13e302437e] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getEpochEigenInt_dff5885c2c873297] = env->getMethodID(cls, "getEpochEigenInt", "()D");
                  mids$[mid_getEpochEigenMaj_dff5885c2c873297] = env->getMethodID(cls, "getEpochEigenMaj", "()D");
                  mids$[mid_getEpochEigenMin_dff5885c2c873297] = env->getMethodID(cls, "getEpochEigenMin", "()D");
                  mids$[mid_getGdop_dff5885c2c873297] = env->getMethodID(cls, "getGdop", "()D");
                  mids$[mid_getId_11b109bd155ca898] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMaxPredictedEigenMaj_dff5885c2c873297] = env->getMethodID(cls, "getMaxPredictedEigenMaj", "()D");
                  mids$[mid_getMaximumObsGap_dff5885c2c873297] = env->getMethodID(cls, "getMaximumObsGap", "()D");
                  mids$[mid_getMethod_17e84526459b3be5] = env->getMethodID(cls, "getMethod", "()Lorg/orekit/files/ccsds/definitions/OdMethodFacade;");
                  mids$[mid_getMinPredictedEigenMin_dff5885c2c873297] = env->getMethodID(cls, "getMinPredictedEigenMin", "()D");
                  mids$[mid_getObsAvailable_570ce0828f81a2c1] = env->getMethodID(cls, "getObsAvailable", "()I");
                  mids$[mid_getObsUsed_570ce0828f81a2c1] = env->getMethodID(cls, "getObsUsed", "()I");
                  mids$[mid_getPrevId_11b109bd155ca898] = env->getMethodID(cls, "getPrevId", "()Ljava/lang/String;");
                  mids$[mid_getRecommendedOdSpan_dff5885c2c873297] = env->getMethodID(cls, "getRecommendedOdSpan", "()D");
                  mids$[mid_getSedr_dff5885c2c873297] = env->getMethodID(cls, "getSedr", "()D");
                  mids$[mid_getSensors_2afa36052df4765d] = env->getMethodID(cls, "getSensors", "()Ljava/util/List;");
                  mids$[mid_getSensorsN_570ce0828f81a2c1] = env->getMethodID(cls, "getSensorsN", "()I");
                  mids$[mid_getSolveN_570ce0828f81a2c1] = env->getMethodID(cls, "getSolveN", "()I");
                  mids$[mid_getSolveStates_2afa36052df4765d] = env->getMethodID(cls, "getSolveStates", "()Ljava/util/List;");
                  mids$[mid_getTimeSinceFirstObservation_dff5885c2c873297] = env->getMethodID(cls, "getTimeSinceFirstObservation", "()D");
                  mids$[mid_getTimeSinceLastObservation_dff5885c2c873297] = env->getMethodID(cls, "getTimeSinceLastObservation", "()D");
                  mids$[mid_getTracksAvailable_570ce0828f81a2c1] = env->getMethodID(cls, "getTracksAvailable", "()I");
                  mids$[mid_getTracksUsed_570ce0828f81a2c1] = env->getMethodID(cls, "getTracksUsed", "()I");
                  mids$[mid_getWeightedRms_dff5885c2c873297] = env->getMethodID(cls, "getWeightedRms", "()D");
                  mids$[mid_setActualOdSpan_17db3a65980d3441] = env->getMethodID(cls, "setActualOdSpan", "(D)V");
                  mids$[mid_setConfidence_17db3a65980d3441] = env->getMethodID(cls, "setConfidence", "(D)V");
                  mids$[mid_setConsiderN_99803b0791f320ff] = env->getMethodID(cls, "setConsiderN", "(I)V");
                  mids$[mid_setConsiderParameters_de3e021e7266b71e] = env->getMethodID(cls, "setConsiderParameters", "(Ljava/util/List;)V");
                  mids$[mid_setDataTypes_de3e021e7266b71e] = env->getMethodID(cls, "setDataTypes", "(Ljava/util/List;)V");
                  mids$[mid_setEpoch_600a2a61652bc473] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setEpochEigenInt_17db3a65980d3441] = env->getMethodID(cls, "setEpochEigenInt", "(D)V");
                  mids$[mid_setEpochEigenMaj_17db3a65980d3441] = env->getMethodID(cls, "setEpochEigenMaj", "(D)V");
                  mids$[mid_setEpochEigenMin_17db3a65980d3441] = env->getMethodID(cls, "setEpochEigenMin", "(D)V");
                  mids$[mid_setGdop_17db3a65980d3441] = env->getMethodID(cls, "setGdop", "(D)V");
                  mids$[mid_setId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setId", "(Ljava/lang/String;)V");
                  mids$[mid_setMaxPredictedEigenMaj_17db3a65980d3441] = env->getMethodID(cls, "setMaxPredictedEigenMaj", "(D)V");
                  mids$[mid_setMaximumObsGap_17db3a65980d3441] = env->getMethodID(cls, "setMaximumObsGap", "(D)V");
                  mids$[mid_setMethod_13ae259d78efa15d] = env->getMethodID(cls, "setMethod", "(Lorg/orekit/files/ccsds/definitions/OdMethodFacade;)V");
                  mids$[mid_setMinPredictedEigenMin_17db3a65980d3441] = env->getMethodID(cls, "setMinPredictedEigenMin", "(D)V");
                  mids$[mid_setObsAvailable_99803b0791f320ff] = env->getMethodID(cls, "setObsAvailable", "(I)V");
                  mids$[mid_setObsUsed_99803b0791f320ff] = env->getMethodID(cls, "setObsUsed", "(I)V");
                  mids$[mid_setPrevId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setPrevId", "(Ljava/lang/String;)V");
                  mids$[mid_setRecommendedOdSpan_17db3a65980d3441] = env->getMethodID(cls, "setRecommendedOdSpan", "(D)V");
                  mids$[mid_setSedr_17db3a65980d3441] = env->getMethodID(cls, "setSedr", "(D)V");
                  mids$[mid_setSensors_de3e021e7266b71e] = env->getMethodID(cls, "setSensors", "(Ljava/util/List;)V");
                  mids$[mid_setSensorsN_99803b0791f320ff] = env->getMethodID(cls, "setSensorsN", "(I)V");
                  mids$[mid_setSolveN_99803b0791f320ff] = env->getMethodID(cls, "setSolveN", "(I)V");
                  mids$[mid_setSolveStates_de3e021e7266b71e] = env->getMethodID(cls, "setSolveStates", "(Ljava/util/List;)V");
                  mids$[mid_setTimeSinceFirstObservation_17db3a65980d3441] = env->getMethodID(cls, "setTimeSinceFirstObservation", "(D)V");
                  mids$[mid_setTimeSinceLastObservation_17db3a65980d3441] = env->getMethodID(cls, "setTimeSinceLastObservation", "(D)V");
                  mids$[mid_setTracksAvailable_99803b0791f320ff] = env->getMethodID(cls, "setTracksAvailable", "(I)V");
                  mids$[mid_setTracksUsed_99803b0791f320ff] = env->getMethodID(cls, "setTracksUsed", "(I)V");
                  mids$[mid_setWeightedRms_17db3a65980d3441] = env->getMethodID(cls, "setWeightedRms", "(D)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitDetermination::OrbitDetermination() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jdouble OrbitDetermination::getActualOdSpan() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getActualOdSpan_dff5885c2c873297]);
              }

              jdouble OrbitDetermination::getConfidence() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getConfidence_dff5885c2c873297]);
              }

              jint OrbitDetermination::getConsiderN() const
              {
                return env->callIntMethod(this$, mids$[mid_getConsiderN_570ce0828f81a2c1]);
              }

              ::java::util::List OrbitDetermination::getConsiderParameters() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getConsiderParameters_2afa36052df4765d]));
              }

              ::java::util::List OrbitDetermination::getDataTypes() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataTypes_2afa36052df4765d]));
              }

              ::org::orekit::time::AbsoluteDate OrbitDetermination::getEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_85703d13e302437e]));
              }

              jdouble OrbitDetermination::getEpochEigenInt() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochEigenInt_dff5885c2c873297]);
              }

              jdouble OrbitDetermination::getEpochEigenMaj() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochEigenMaj_dff5885c2c873297]);
              }

              jdouble OrbitDetermination::getEpochEigenMin() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochEigenMin_dff5885c2c873297]);
              }

              jdouble OrbitDetermination::getGdop() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGdop_dff5885c2c873297]);
              }

              ::java::lang::String OrbitDetermination::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_11b109bd155ca898]));
              }

              jdouble OrbitDetermination::getMaxPredictedEigenMaj() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaxPredictedEigenMaj_dff5885c2c873297]);
              }

              jdouble OrbitDetermination::getMaximumObsGap() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaximumObsGap_dff5885c2c873297]);
              }

              ::org::orekit::files::ccsds::definitions::OdMethodFacade OrbitDetermination::getMethod() const
              {
                return ::org::orekit::files::ccsds::definitions::OdMethodFacade(env->callObjectMethod(this$, mids$[mid_getMethod_17e84526459b3be5]));
              }

              jdouble OrbitDetermination::getMinPredictedEigenMin() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMinPredictedEigenMin_dff5885c2c873297]);
              }

              jint OrbitDetermination::getObsAvailable() const
              {
                return env->callIntMethod(this$, mids$[mid_getObsAvailable_570ce0828f81a2c1]);
              }

              jint OrbitDetermination::getObsUsed() const
              {
                return env->callIntMethod(this$, mids$[mid_getObsUsed_570ce0828f81a2c1]);
              }

              ::java::lang::String OrbitDetermination::getPrevId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrevId_11b109bd155ca898]));
              }

              jdouble OrbitDetermination::getRecommendedOdSpan() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getRecommendedOdSpan_dff5885c2c873297]);
              }

              jdouble OrbitDetermination::getSedr() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSedr_dff5885c2c873297]);
              }

              ::java::util::List OrbitDetermination::getSensors() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSensors_2afa36052df4765d]));
              }

              jint OrbitDetermination::getSensorsN() const
              {
                return env->callIntMethod(this$, mids$[mid_getSensorsN_570ce0828f81a2c1]);
              }

              jint OrbitDetermination::getSolveN() const
              {
                return env->callIntMethod(this$, mids$[mid_getSolveN_570ce0828f81a2c1]);
              }

              ::java::util::List OrbitDetermination::getSolveStates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSolveStates_2afa36052df4765d]));
              }

              jdouble OrbitDetermination::getTimeSinceFirstObservation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTimeSinceFirstObservation_dff5885c2c873297]);
              }

              jdouble OrbitDetermination::getTimeSinceLastObservation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTimeSinceLastObservation_dff5885c2c873297]);
              }

              jint OrbitDetermination::getTracksAvailable() const
              {
                return env->callIntMethod(this$, mids$[mid_getTracksAvailable_570ce0828f81a2c1]);
              }

              jint OrbitDetermination::getTracksUsed() const
              {
                return env->callIntMethod(this$, mids$[mid_getTracksUsed_570ce0828f81a2c1]);
              }

              jdouble OrbitDetermination::getWeightedRms() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getWeightedRms_dff5885c2c873297]);
              }

              void OrbitDetermination::setActualOdSpan(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setActualOdSpan_17db3a65980d3441], a0);
              }

              void OrbitDetermination::setConfidence(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConfidence_17db3a65980d3441], a0);
              }

              void OrbitDetermination::setConsiderN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConsiderN_99803b0791f320ff], a0);
              }

              void OrbitDetermination::setConsiderParameters(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConsiderParameters_de3e021e7266b71e], a0.this$);
              }

              void OrbitDetermination::setDataTypes(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDataTypes_de3e021e7266b71e], a0.this$);
              }

              void OrbitDetermination::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpoch_600a2a61652bc473], a0.this$);
              }

              void OrbitDetermination::setEpochEigenInt(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochEigenInt_17db3a65980d3441], a0);
              }

              void OrbitDetermination::setEpochEigenMaj(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochEigenMaj_17db3a65980d3441], a0);
              }

              void OrbitDetermination::setEpochEigenMin(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochEigenMin_17db3a65980d3441], a0);
              }

              void OrbitDetermination::setGdop(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGdop_17db3a65980d3441], a0);
              }

              void OrbitDetermination::setId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setId_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitDetermination::setMaxPredictedEigenMaj(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaxPredictedEigenMaj_17db3a65980d3441], a0);
              }

              void OrbitDetermination::setMaximumObsGap(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaximumObsGap_17db3a65980d3441], a0);
              }

              void OrbitDetermination::setMethod(const ::org::orekit::files::ccsds::definitions::OdMethodFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMethod_13ae259d78efa15d], a0.this$);
              }

              void OrbitDetermination::setMinPredictedEigenMin(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMinPredictedEigenMin_17db3a65980d3441], a0);
              }

              void OrbitDetermination::setObsAvailable(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObsAvailable_99803b0791f320ff], a0);
              }

              void OrbitDetermination::setObsUsed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObsUsed_99803b0791f320ff], a0);
              }

              void OrbitDetermination::setPrevId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrevId_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitDetermination::setRecommendedOdSpan(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRecommendedOdSpan_17db3a65980d3441], a0);
              }

              void OrbitDetermination::setSedr(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSedr_17db3a65980d3441], a0);
              }

              void OrbitDetermination::setSensors(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensors_de3e021e7266b71e], a0.this$);
              }

              void OrbitDetermination::setSensorsN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorsN_99803b0791f320ff], a0);
              }

              void OrbitDetermination::setSolveN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSolveN_99803b0791f320ff], a0);
              }

              void OrbitDetermination::setSolveStates(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSolveStates_de3e021e7266b71e], a0.this$);
              }

              void OrbitDetermination::setTimeSinceFirstObservation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTimeSinceFirstObservation_17db3a65980d3441], a0);
              }

              void OrbitDetermination::setTimeSinceLastObservation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTimeSinceLastObservation_17db3a65980d3441], a0);
              }

              void OrbitDetermination::setTracksAvailable(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTracksAvailable_99803b0791f320ff], a0);
              }

              void OrbitDetermination::setTracksUsed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTracksUsed_99803b0791f320ff], a0);
              }

              void OrbitDetermination::setWeightedRms(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setWeightedRms_17db3a65980d3441], a0);
              }

              void OrbitDetermination::validate(jdouble a0) const
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
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitDetermination_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitDetermination_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitDetermination_init_(t_OrbitDetermination *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitDetermination_getActualOdSpan(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getConfidence(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getConsiderN(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getConsiderParameters(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getDataTypes(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpoch(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpochEigenInt(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpochEigenMaj(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpochEigenMin(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getGdop(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getId(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMaxPredictedEigenMaj(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMaximumObsGap(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMethod(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMinPredictedEigenMin(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getObsAvailable(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getObsUsed(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getPrevId(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getRecommendedOdSpan(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSedr(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSensors(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSensorsN(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSolveN(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSolveStates(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTimeSinceFirstObservation(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTimeSinceLastObservation(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTracksAvailable(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTracksUsed(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getWeightedRms(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_setActualOdSpan(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setConfidence(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setConsiderN(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setConsiderParameters(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setDataTypes(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpoch(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpochEigenInt(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpochEigenMaj(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpochEigenMin(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setGdop(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setId(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMaxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMaximumObsGap(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMethod(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMinPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setObsAvailable(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setObsUsed(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setPrevId(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setRecommendedOdSpan(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSedr(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSensors(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSensorsN(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSolveN(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSolveStates(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTimeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTimeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTracksAvailable(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTracksUsed(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setWeightedRms(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_validate(t_OrbitDetermination *self, PyObject *args);
              static PyObject *t_OrbitDetermination_get__actualOdSpan(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__actualOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__confidence(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__confidence(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__considerN(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__considerN(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__considerParameters(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__considerParameters(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__dataTypes(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__dataTypes(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epoch(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epoch(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epochEigenInt(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epochEigenInt(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epochEigenMaj(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epochEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epochEigenMin(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epochEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__gdop(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__gdop(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__id(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__id(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__maxPredictedEigenMaj(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__maxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__maximumObsGap(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__maximumObsGap(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__method(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__method(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__minPredictedEigenMin(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__minPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__obsAvailable(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__obsAvailable(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__obsUsed(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__obsUsed(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__prevId(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__prevId(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__recommendedOdSpan(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__recommendedOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__sedr(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__sedr(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__sensors(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__sensors(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__sensorsN(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__sensorsN(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__solveN(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__solveN(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__solveStates(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__solveStates(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__timeSinceFirstObservation(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__timeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__timeSinceLastObservation(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__timeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__tracksAvailable(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__tracksAvailable(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__tracksUsed(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__tracksUsed(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__weightedRms(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__weightedRms(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitDetermination__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitDetermination, actualOdSpan),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, confidence),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, considerN),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, considerParameters),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, dataTypes),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epoch),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epochEigenInt),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epochEigenMaj),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epochEigenMin),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, gdop),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, id),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, maxPredictedEigenMaj),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, maximumObsGap),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, method),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, minPredictedEigenMin),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, obsAvailable),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, obsUsed),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, prevId),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, recommendedOdSpan),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, sedr),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, sensors),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, sensorsN),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, solveN),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, solveStates),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, timeSinceFirstObservation),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, timeSinceLastObservation),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, tracksAvailable),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, tracksUsed),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, weightedRms),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitDetermination__methods_[] = {
                DECLARE_METHOD(t_OrbitDetermination, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDetermination, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDetermination, getActualOdSpan, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getConfidence, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getConsiderN, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getConsiderParameters, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getDataTypes, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpochEigenInt, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpochEigenMaj, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpochEigenMin, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getGdop, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getId, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMaxPredictedEigenMaj, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMaximumObsGap, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMethod, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMinPredictedEigenMin, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getObsAvailable, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getObsUsed, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getPrevId, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getRecommendedOdSpan, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSedr, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSensors, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSensorsN, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSolveN, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSolveStates, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTimeSinceFirstObservation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTimeSinceLastObservation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTracksAvailable, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTracksUsed, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getWeightedRms, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, setActualOdSpan, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setConfidence, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setConsiderN, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setConsiderParameters, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setDataTypes, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpoch, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpochEigenInt, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpochEigenMaj, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpochEigenMin, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setGdop, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setId, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMaxPredictedEigenMaj, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMaximumObsGap, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMethod, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMinPredictedEigenMin, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setObsAvailable, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setObsUsed, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setPrevId, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setRecommendedOdSpan, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSedr, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSensors, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSensorsN, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSolveN, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSolveStates, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTimeSinceFirstObservation, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTimeSinceLastObservation, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTracksAvailable, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTracksUsed, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setWeightedRms, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitDetermination)[] = {
                { Py_tp_methods, t_OrbitDetermination__methods_ },
                { Py_tp_init, (void *) t_OrbitDetermination_init_ },
                { Py_tp_getset, t_OrbitDetermination__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitDetermination)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OrbitDetermination, t_OrbitDetermination, OrbitDetermination);

              void t_OrbitDetermination::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitDetermination), &PY_TYPE_DEF(OrbitDetermination), module, "OrbitDetermination", 0);
              }

              void t_OrbitDetermination::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDetermination), "class_", make_descriptor(OrbitDetermination::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDetermination), "wrapfn_", make_descriptor(t_OrbitDetermination::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDetermination), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitDetermination_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitDetermination::initializeClass, 1)))
                  return NULL;
                return t_OrbitDetermination::wrap_Object(OrbitDetermination(((t_OrbitDetermination *) arg)->object.this$));
              }
              static PyObject *t_OrbitDetermination_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitDetermination::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitDetermination_init_(t_OrbitDetermination *self, PyObject *args, PyObject *kwds)
              {
                OrbitDetermination object((jobject) NULL);

                INT_CALL(object = OrbitDetermination());
                self->object = object;

                return 0;
              }

              static PyObject *t_OrbitDetermination_getActualOdSpan(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getActualOdSpan());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getConfidence(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getConfidence());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getConsiderN(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getConsiderN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getConsiderParameters(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getConsiderParameters());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getDataTypes(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getDataTypes());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getEpoch(t_OrbitDetermination *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitDetermination_getEpochEigenInt(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochEigenInt());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getEpochEigenMaj(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochEigenMaj());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getEpochEigenMin(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochEigenMin());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getGdop(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGdop());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getId(t_OrbitDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_OrbitDetermination_getMaxPredictedEigenMaj(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaxPredictedEigenMaj());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getMaximumObsGap(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaximumObsGap());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getMethod(t_OrbitDetermination *self)
              {
                ::org::orekit::files::ccsds::definitions::OdMethodFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_OdMethodFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitDetermination_getMinPredictedEigenMin(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMinPredictedEigenMin());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getObsAvailable(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getObsAvailable());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getObsUsed(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getObsUsed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getPrevId(t_OrbitDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrevId());
                return j2p(result);
              }

              static PyObject *t_OrbitDetermination_getRecommendedOdSpan(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getRecommendedOdSpan());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getSedr(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSedr());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getSensors(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSensors());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getSensorsN(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSensorsN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getSolveN(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSolveN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getSolveStates(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSolveStates());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getTimeSinceFirstObservation(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTimeSinceFirstObservation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getTimeSinceLastObservation(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTimeSinceLastObservation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getTracksAvailable(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getTracksAvailable());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getTracksUsed(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getTracksUsed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getWeightedRms(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getWeightedRms());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_setActualOdSpan(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setActualOdSpan(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setActualOdSpan", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setConfidence(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setConfidence(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setConfidence", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setConsiderN(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setConsiderN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setConsiderN", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setConsiderParameters(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setConsiderParameters(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setConsiderParameters", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setDataTypes(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setDataTypes(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDataTypes", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setEpoch(t_OrbitDetermination *self, PyObject *arg)
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

              static PyObject *t_OrbitDetermination_setEpochEigenInt(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochEigenInt(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochEigenInt", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setEpochEigenMaj(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochEigenMaj(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochEigenMaj", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setEpochEigenMin(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochEigenMin(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochEigenMin", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setGdop(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGdop(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGdop", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setId(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setId", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMaxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaxPredictedEigenMaj(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaxPredictedEigenMaj", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMaximumObsGap(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaximumObsGap(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaximumObsGap", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMethod(t_OrbitDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::OdMethodFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OdMethodFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMethod", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMinPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMinPredictedEigenMin(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMinPredictedEigenMin", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setObsAvailable(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setObsAvailable(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setObsAvailable", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setObsUsed(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setObsUsed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setObsUsed", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setPrevId(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPrevId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPrevId", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setRecommendedOdSpan(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setRecommendedOdSpan(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRecommendedOdSpan", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSedr(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSedr(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSedr", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSensors(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setSensors(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensors", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSensorsN(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSensorsN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorsN", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSolveN(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSolveN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSolveN", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSolveStates(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setSolveStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSolveStates", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTimeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTimeSinceFirstObservation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTimeSinceFirstObservation", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTimeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTimeSinceLastObservation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTimeSinceLastObservation", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTracksAvailable(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setTracksAvailable(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTracksAvailable", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTracksUsed(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setTracksUsed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTracksUsed", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setWeightedRms(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setWeightedRms(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setWeightedRms", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_validate(t_OrbitDetermination *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OrbitDetermination), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OrbitDetermination_get__actualOdSpan(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getActualOdSpan());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__actualOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setActualOdSpan(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "actualOdSpan", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__confidence(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getConfidence());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__confidence(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setConfidence(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "confidence", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__considerN(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getConsiderN());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__considerN(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setConsiderN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "considerN", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__considerParameters(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getConsiderParameters());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__considerParameters(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setConsiderParameters(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "considerParameters", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__dataTypes(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getDataTypes());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__dataTypes(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDataTypes(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dataTypes", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__epoch(t_OrbitDetermination *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__epoch(t_OrbitDetermination *self, PyObject *arg, void *data)
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

              static PyObject *t_OrbitDetermination_get__epochEigenInt(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochEigenInt());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__epochEigenInt(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochEigenInt(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochEigenInt", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__epochEigenMaj(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochEigenMaj());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__epochEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochEigenMaj(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochEigenMaj", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__epochEigenMin(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochEigenMin());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__epochEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochEigenMin(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochEigenMin", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__gdop(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGdop());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__gdop(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGdop(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gdop", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__id(t_OrbitDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }
              static int t_OrbitDetermination_set__id(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "id", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__maxPredictedEigenMaj(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaxPredictedEigenMaj());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__maxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaxPredictedEigenMaj(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maxPredictedEigenMaj", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__maximumObsGap(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaximumObsGap());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__maximumObsGap(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaximumObsGap(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maximumObsGap", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__method(t_OrbitDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::OdMethodFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_OdMethodFacade::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__method(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::OdMethodFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OdMethodFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "method", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__minPredictedEigenMin(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMinPredictedEigenMin());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__minPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMinPredictedEigenMin(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "minPredictedEigenMin", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__obsAvailable(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getObsAvailable());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__obsAvailable(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setObsAvailable(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "obsAvailable", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__obsUsed(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getObsUsed());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__obsUsed(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setObsUsed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "obsUsed", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__prevId(t_OrbitDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrevId());
                return j2p(value);
              }
              static int t_OrbitDetermination_set__prevId(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPrevId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "prevId", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__recommendedOdSpan(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getRecommendedOdSpan());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__recommendedOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setRecommendedOdSpan(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "recommendedOdSpan", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__sedr(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSedr());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__sedr(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSedr(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sedr", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__sensors(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSensors());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__sensors(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSensors(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensors", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__sensorsN(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSensorsN());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__sensorsN(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSensorsN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorsN", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__solveN(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSolveN());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__solveN(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSolveN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "solveN", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__solveStates(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSolveStates());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__solveStates(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSolveStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "solveStates", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__timeSinceFirstObservation(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTimeSinceFirstObservation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__timeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTimeSinceFirstObservation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "timeSinceFirstObservation", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__timeSinceLastObservation(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTimeSinceLastObservation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__timeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTimeSinceLastObservation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "timeSinceLastObservation", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__tracksAvailable(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getTracksAvailable());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__tracksAvailable(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setTracksAvailable(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tracksAvailable", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__tracksUsed(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getTracksUsed());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__tracksUsed(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setTracksUsed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tracksUsed", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__weightedRms(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getWeightedRms());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__weightedRms(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setWeightedRms(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "weightedRms", arg);
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
#include "org/hipparchus/analysis/function/Ulp.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Ulp::class$ = NULL;
        jmethodID *Ulp::mids$ = NULL;
        bool Ulp::live$ = false;

        jclass Ulp::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Ulp");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Ulp::Ulp() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Ulp::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
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
        static PyObject *t_Ulp_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Ulp_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Ulp_init_(t_Ulp *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Ulp_value(t_Ulp *self, PyObject *arg);

        static PyMethodDef t_Ulp__methods_[] = {
          DECLARE_METHOD(t_Ulp, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ulp, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ulp, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Ulp)[] = {
          { Py_tp_methods, t_Ulp__methods_ },
          { Py_tp_init, (void *) t_Ulp_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Ulp)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Ulp, t_Ulp, Ulp);

        void t_Ulp::install(PyObject *module)
        {
          installType(&PY_TYPE(Ulp), &PY_TYPE_DEF(Ulp), module, "Ulp", 0);
        }

        void t_Ulp::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ulp), "class_", make_descriptor(Ulp::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ulp), "wrapfn_", make_descriptor(t_Ulp::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ulp), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Ulp_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Ulp::initializeClass, 1)))
            return NULL;
          return t_Ulp::wrap_Object(Ulp(((t_Ulp *) arg)->object.this$));
        }
        static PyObject *t_Ulp_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Ulp::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Ulp_init_(t_Ulp *self, PyObject *args, PyObject *kwds)
        {
          Ulp object((jobject) NULL);

          INT_CALL(object = Ulp());
          self->object = object;

          return 0;
        }

        static PyObject *t_Ulp_value(t_Ulp *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldTrapezoidIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_7dbd657fb2d34563] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_b63dedd7ffb51c0c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_eba8e72a22c984ac] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRAPEZOID_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "TRAPEZOID_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldTrapezoidIntegrator::FieldTrapezoidIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

        FieldTrapezoidIntegrator::FieldTrapezoidIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_7dbd657fb2d34563, a0.this$, a1, a2)) {}

        FieldTrapezoidIntegrator::FieldTrapezoidIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b63dedd7ffb51c0c, a0.this$, a1, a2, a3, a4)) {}
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
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *BodyShape::class$ = NULL;
      jmethodID *BodyShape::mids$ = NULL;
      bool BodyShape::live$ = false;

      jclass BodyShape::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/BodyShape");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBodyFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getIntersectionPoint_ec4b828b0bd3964b] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getIntersectionPoint_e81d59d1bc381e5e] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_projectToGround_7ddc39790e3dd04b] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToGround_73ba258c5f91e9db] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_5f1451dffd8cde56] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transform_6cf64433187e46c3] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_e019f2426bfb11d5] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_transform_dd18b1b42137f809] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame BodyShape::getBodyFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_b86f9f61d97a7244]));
      }

      ::org::orekit::bodies::GeodeticPoint BodyShape::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_ec4b828b0bd3964b], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint BodyShape::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_e81d59d1bc381e5e], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates BodyShape::projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToGround_7ddc39790e3dd04b], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BodyShape::projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToGround_73ba258c5f91e9db], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BodyShape::transform(const ::org::orekit::bodies::FieldGeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transform_5f1451dffd8cde56], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BodyShape::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_6cf64433187e46c3], a0.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint BodyShape::transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_e019f2426bfb11d5], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::bodies::GeodeticPoint BodyShape::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_dd18b1b42137f809], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_BodyShape_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodyShape_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodyShape_getBodyFrame(t_BodyShape *self);
      static PyObject *t_BodyShape_getIntersectionPoint(t_BodyShape *self, PyObject *args);
      static PyObject *t_BodyShape_projectToGround(t_BodyShape *self, PyObject *args);
      static PyObject *t_BodyShape_transform(t_BodyShape *self, PyObject *args);
      static PyObject *t_BodyShape_get__bodyFrame(t_BodyShape *self, void *data);
      static PyGetSetDef t_BodyShape__fields_[] = {
        DECLARE_GET_FIELD(t_BodyShape, bodyFrame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BodyShape__methods_[] = {
        DECLARE_METHOD(t_BodyShape, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyShape, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyShape, getBodyFrame, METH_NOARGS),
        DECLARE_METHOD(t_BodyShape, getIntersectionPoint, METH_VARARGS),
        DECLARE_METHOD(t_BodyShape, projectToGround, METH_VARARGS),
        DECLARE_METHOD(t_BodyShape, transform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BodyShape)[] = {
        { Py_tp_methods, t_BodyShape__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BodyShape__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BodyShape)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(BodyShape, t_BodyShape, BodyShape);

      void t_BodyShape::install(PyObject *module)
      {
        installType(&PY_TYPE(BodyShape), &PY_TYPE_DEF(BodyShape), module, "BodyShape", 0);
      }

      void t_BodyShape::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyShape), "class_", make_descriptor(BodyShape::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyShape), "wrapfn_", make_descriptor(t_BodyShape::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyShape), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BodyShape_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BodyShape::initializeClass, 1)))
          return NULL;
        return t_BodyShape::wrap_Object(BodyShape(((t_BodyShape *) arg)->object.this$));
      }
      static PyObject *t_BodyShape_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BodyShape::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BodyShape_getBodyFrame(t_BodyShape *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_BodyShape_getIntersectionPoint(t_BodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getIntersectionPoint", args);
        return NULL;
      }

      static PyObject *t_BodyShape_projectToGround(t_BodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToGround", args);
        return NULL;
      }

      static PyObject *t_BodyShape_transform(t_BodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transform", args);
        return NULL;
      }

      static PyObject *t_BodyShape_get__bodyFrame(t_BodyShape *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudePhysicalPropertiesKey::class$ = NULL;
              jmethodID *AttitudePhysicalPropertiesKey::mids$ = NULL;
              bool AttitudePhysicalPropertiesKey::live$ = false;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::COMMENT = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::CP = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::CP_REF_FRAME = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::DRAG_COEFF = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::DRY_MASS = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::INERTIA_REF_FRAME = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IXX = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IXY = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IXZ = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IYY = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IYZ = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IZZ = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::WET_MASS = NULL;

              jclass AttitudePhysicalPropertiesKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_6c64591d048837d3] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties;)Z");
                  mids$[mid_valueOf_d3e25916caf0e241] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;");
                  mids$[mid_values_77b2a52e2295463b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  CP = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "CP", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  CP_REF_FRAME = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "CP_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  DRAG_COEFF = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_COEFF", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  DRY_MASS = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "DRY_MASS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  INERTIA_REF_FRAME = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "INERTIA_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IXX = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IXX", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IXY = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IXY", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IXZ = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IXZ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IYY = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IYY", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IYZ = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IYZ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IZZ = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IZZ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  WET_MASS = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "WET_MASS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudePhysicalPropertiesKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_6c64591d048837d3], a0.this$, a1.this$, a2.this$);
              }

              AttitudePhysicalPropertiesKey AttitudePhysicalPropertiesKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudePhysicalPropertiesKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d3e25916caf0e241], a0.this$));
              }

              JArray< AttitudePhysicalPropertiesKey > AttitudePhysicalPropertiesKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudePhysicalPropertiesKey >(env->callStaticObjectMethod(cls, mids$[mid_values_77b2a52e2295463b]));
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
              static PyObject *t_AttitudePhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudePhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudePhysicalPropertiesKey_of_(t_AttitudePhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_AttitudePhysicalPropertiesKey_process(t_AttitudePhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_AttitudePhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudePhysicalPropertiesKey_values(PyTypeObject *type);
              static PyObject *t_AttitudePhysicalPropertiesKey_get__parameters_(t_AttitudePhysicalPropertiesKey *self, void *data);
              static PyGetSetDef t_AttitudePhysicalPropertiesKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudePhysicalPropertiesKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudePhysicalPropertiesKey__methods_[] = {
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudePhysicalPropertiesKey)[] = {
                { Py_tp_methods, t_AttitudePhysicalPropertiesKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudePhysicalPropertiesKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudePhysicalPropertiesKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudePhysicalPropertiesKey, t_AttitudePhysicalPropertiesKey, AttitudePhysicalPropertiesKey);
              PyObject *t_AttitudePhysicalPropertiesKey::wrap_Object(const AttitudePhysicalPropertiesKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudePhysicalPropertiesKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudePhysicalPropertiesKey *self = (t_AttitudePhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudePhysicalPropertiesKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudePhysicalPropertiesKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudePhysicalPropertiesKey *self = (t_AttitudePhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudePhysicalPropertiesKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudePhysicalPropertiesKey), &PY_TYPE_DEF(AttitudePhysicalPropertiesKey), module, "AttitudePhysicalPropertiesKey", 0);
              }

              void t_AttitudePhysicalPropertiesKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "class_", make_descriptor(AttitudePhysicalPropertiesKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "wrapfn_", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudePhysicalPropertiesKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "COMMENT", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "CP", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::CP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "CP_REF_FRAME", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::CP_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "DRAG_COEFF", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::DRAG_COEFF)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "DRY_MASS", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::DRY_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "INERTIA_REF_FRAME", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::INERTIA_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IXX", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IXX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IXY", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IXY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IXZ", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IXZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IYY", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IYY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IYZ", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IYZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IZZ", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IZZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "WET_MASS", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::WET_MASS)));
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudePhysicalPropertiesKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudePhysicalPropertiesKey::wrap_Object(AttitudePhysicalPropertiesKey(((t_AttitudePhysicalPropertiesKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudePhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudePhysicalPropertiesKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_of_(t_AttitudePhysicalPropertiesKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_process(t_AttitudePhysicalPropertiesKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudePhysicalPropertiesKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalPropertiesKey::valueOf(a0));
                  return t_AttitudePhysicalPropertiesKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_values(PyTypeObject *type)
              {
                JArray< AttitudePhysicalPropertiesKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalPropertiesKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudePhysicalPropertiesKey::wrap_jobject);
              }
              static PyObject *t_AttitudePhysicalPropertiesKey_get__parameters_(t_AttitudePhysicalPropertiesKey *self, void *data)
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
#include "org/orekit/orbits/LibrationOrbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinates.h"
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
          mids$[mid_applyDifferentialCorrection_0fa09c18fee449d5] = env->getMethodID(cls, "applyDifferentialCorrection", "()V");
          mids$[mid_getInitialPV_9b7c658c14883c84] = env->getMethodID(cls, "getInitialPV", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getManifolds_9136566038bfc19a] = env->getMethodID(cls, "getManifolds", "(Lorg/orekit/propagation/SpacecraftState;Z)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getOrbitalPeriod_dff5885c2c873297] = env->getMethodID(cls, "getOrbitalPeriod", "()D");
          mids$[mid_applyCorrectionOnPV_e2324264d8e2d238] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void LibrationOrbit::applyDifferentialCorrection() const
      {
        env->callVoidMethod(this$, mids$[mid_applyDifferentialCorrection_0fa09c18fee449d5]);
      }

      ::org::orekit::utils::PVCoordinates LibrationOrbit::getInitialPV() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getInitialPV_9b7c658c14883c84]));
      }

      ::org::orekit::utils::PVCoordinates LibrationOrbit::getManifolds(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getManifolds_9136566038bfc19a], a0.this$, a1));
      }

      jdouble LibrationOrbit::getOrbitalPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOrbitalPeriod_dff5885c2c873297]);
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
#include "org/hipparchus/random/Well1024a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well1024a::class$ = NULL;
      jmethodID *Well1024a::mids$ = NULL;
      bool Well1024a::live$ = false;

      jclass Well1024a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well1024a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d147d7ce001e2d45] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_570ce0828f81a2c1] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well1024a::Well1024a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      Well1024a::Well1024a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_d147d7ce001e2d45, a0.this$)) {}

      Well1024a::Well1024a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      Well1024a::Well1024a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

      jint Well1024a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_570ce0828f81a2c1]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_Well1024a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well1024a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well1024a_init_(t_Well1024a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well1024a_nextInt(t_Well1024a *self, PyObject *args);

      static PyMethodDef t_Well1024a__methods_[] = {
        DECLARE_METHOD(t_Well1024a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well1024a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well1024a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well1024a)[] = {
        { Py_tp_methods, t_Well1024a__methods_ },
        { Py_tp_init, (void *) t_Well1024a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well1024a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well1024a, t_Well1024a, Well1024a);

      void t_Well1024a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well1024a), &PY_TYPE_DEF(Well1024a), module, "Well1024a", 0);
      }

      void t_Well1024a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well1024a), "class_", make_descriptor(Well1024a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well1024a), "wrapfn_", make_descriptor(t_Well1024a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well1024a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well1024a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well1024a::initializeClass, 1)))
          return NULL;
        return t_Well1024a::wrap_Object(Well1024a(((t_Well1024a *) arg)->object.this$));
      }
      static PyObject *t_Well1024a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well1024a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well1024a_init_(t_Well1024a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well1024a object((jobject) NULL);

            INT_CALL(object = Well1024a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well1024a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well1024a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well1024a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well1024a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well1024a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well1024a(a0));
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

      static PyObject *t_Well1024a_nextInt(t_Well1024a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well1024a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FieldInertia.h"
#include "org/orekit/attitudes/FieldInertia.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldInertia::class$ = NULL;
      jmethodID *FieldInertia::mids$ = NULL;
      bool FieldInertia::live$ = false;

      jclass FieldInertia::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldInertia");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getInertiaAxis1_ac55a8ab71ff75ce] = env->getMethodID(cls, "getInertiaAxis1", "()Lorg/orekit/attitudes/FieldInertiaAxis;");
          mids$[mid_getInertiaAxis2_ac55a8ab71ff75ce] = env->getMethodID(cls, "getInertiaAxis2", "()Lorg/orekit/attitudes/FieldInertiaAxis;");
          mids$[mid_getInertiaAxis3_ac55a8ab71ff75ce] = env->getMethodID(cls, "getInertiaAxis3", "()Lorg/orekit/attitudes/FieldInertiaAxis;");
          mids$[mid_momentum_a173408e2b1f78b2] = env->getMethodID(cls, "momentum", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_swap12_6b150d4002e93e81] = env->getMethodID(cls, "swap12", "()Lorg/orekit/attitudes/FieldInertia;");
          mids$[mid_swap13_6b150d4002e93e81] = env->getMethodID(cls, "swap13", "()Lorg/orekit/attitudes/FieldInertia;");
          mids$[mid_swap23_6b150d4002e93e81] = env->getMethodID(cls, "swap23", "()Lorg/orekit/attitudes/FieldInertia;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldInertiaAxis FieldInertia::getInertiaAxis1() const
      {
        return ::org::orekit::attitudes::FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis1_ac55a8ab71ff75ce]));
      }

      ::org::orekit::attitudes::FieldInertiaAxis FieldInertia::getInertiaAxis2() const
      {
        return ::org::orekit::attitudes::FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis2_ac55a8ab71ff75ce]));
      }

      ::org::orekit::attitudes::FieldInertiaAxis FieldInertia::getInertiaAxis3() const
      {
        return ::org::orekit::attitudes::FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis3_ac55a8ab71ff75ce]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldInertia::momentum(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_momentum_a173408e2b1f78b2], a0.this$));
      }

      FieldInertia FieldInertia::swap12() const
      {
        return FieldInertia(env->callObjectMethod(this$, mids$[mid_swap12_6b150d4002e93e81]));
      }

      FieldInertia FieldInertia::swap13() const
      {
        return FieldInertia(env->callObjectMethod(this$, mids$[mid_swap13_6b150d4002e93e81]));
      }

      FieldInertia FieldInertia::swap23() const
      {
        return FieldInertia(env->callObjectMethod(this$, mids$[mid_swap23_6b150d4002e93e81]));
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
      static PyObject *t_FieldInertia_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertia_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertia_of_(t_FieldInertia *self, PyObject *args);
      static PyObject *t_FieldInertia_getInertiaAxis1(t_FieldInertia *self);
      static PyObject *t_FieldInertia_getInertiaAxis2(t_FieldInertia *self);
      static PyObject *t_FieldInertia_getInertiaAxis3(t_FieldInertia *self);
      static PyObject *t_FieldInertia_momentum(t_FieldInertia *self, PyObject *arg);
      static PyObject *t_FieldInertia_swap12(t_FieldInertia *self);
      static PyObject *t_FieldInertia_swap13(t_FieldInertia *self);
      static PyObject *t_FieldInertia_swap23(t_FieldInertia *self);
      static PyObject *t_FieldInertia_get__inertiaAxis1(t_FieldInertia *self, void *data);
      static PyObject *t_FieldInertia_get__inertiaAxis2(t_FieldInertia *self, void *data);
      static PyObject *t_FieldInertia_get__inertiaAxis3(t_FieldInertia *self, void *data);
      static PyObject *t_FieldInertia_get__parameters_(t_FieldInertia *self, void *data);
      static PyGetSetDef t_FieldInertia__fields_[] = {
        DECLARE_GET_FIELD(t_FieldInertia, inertiaAxis1),
        DECLARE_GET_FIELD(t_FieldInertia, inertiaAxis2),
        DECLARE_GET_FIELD(t_FieldInertia, inertiaAxis3),
        DECLARE_GET_FIELD(t_FieldInertia, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldInertia__methods_[] = {
        DECLARE_METHOD(t_FieldInertia, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertia, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertia, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldInertia, getInertiaAxis1, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, getInertiaAxis2, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, getInertiaAxis3, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, momentum, METH_O),
        DECLARE_METHOD(t_FieldInertia, swap12, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, swap13, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, swap23, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldInertia)[] = {
        { Py_tp_methods, t_FieldInertia__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldInertia__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldInertia)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldInertia, t_FieldInertia, FieldInertia);
      PyObject *t_FieldInertia::wrap_Object(const FieldInertia& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertia::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertia *self = (t_FieldInertia *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldInertia::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertia::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertia *self = (t_FieldInertia *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldInertia::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldInertia), &PY_TYPE_DEF(FieldInertia), module, "FieldInertia", 0);
      }

      void t_FieldInertia::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertia), "class_", make_descriptor(FieldInertia::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertia), "wrapfn_", make_descriptor(t_FieldInertia::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertia), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldInertia_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldInertia::initializeClass, 1)))
          return NULL;
        return t_FieldInertia::wrap_Object(FieldInertia(((t_FieldInertia *) arg)->object.this$));
      }
      static PyObject *t_FieldInertia_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldInertia::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldInertia_of_(t_FieldInertia *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldInertia_getInertiaAxis1(t_FieldInertia *self)
      {
        ::org::orekit::attitudes::FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_getInertiaAxis2(t_FieldInertia *self)
      {
        ::org::orekit::attitudes::FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_getInertiaAxis3(t_FieldInertia *self)
      {
        ::org::orekit::attitudes::FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_momentum(t_FieldInertia *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
        {
          OBJ_CALL(result = self->object.momentum(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "momentum", arg);
        return NULL;
      }

      static PyObject *t_FieldInertia_swap12(t_FieldInertia *self)
      {
        FieldInertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap12());
        return t_FieldInertia::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_swap13(t_FieldInertia *self)
      {
        FieldInertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap13());
        return t_FieldInertia::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_swap23(t_FieldInertia *self)
      {
        FieldInertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap23());
        return t_FieldInertia::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldInertia_get__parameters_(t_FieldInertia *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldInertia_get__inertiaAxis1(t_FieldInertia *self, void *data)
      {
        ::org::orekit::attitudes::FieldInertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(value);
      }

      static PyObject *t_FieldInertia_get__inertiaAxis2(t_FieldInertia *self, void *data)
      {
        ::org::orekit::attitudes::FieldInertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(value);
      }

      static PyObject *t_FieldInertia_get__inertiaAxis3(t_FieldInertia *self, void *data)
      {
        ::org::orekit::attitudes::FieldInertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Double.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *CMAESOptimizer::class$ = NULL;
            jmethodID *CMAESOptimizer::mids$ = NULL;
            bool CMAESOptimizer::live$ = false;

            jclass CMAESOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_88a40a0d3c6a3df9] = env->getMethodID(cls, "<init>", "(IDZIILorg/hipparchus/random/RandomGenerator;ZLorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_getStatisticsDHistory_2afa36052df4765d] = env->getMethodID(cls, "getStatisticsDHistory", "()Ljava/util/List;");
                mids$[mid_getStatisticsFitnessHistory_2afa36052df4765d] = env->getMethodID(cls, "getStatisticsFitnessHistory", "()Ljava/util/List;");
                mids$[mid_getStatisticsMeanHistory_2afa36052df4765d] = env->getMethodID(cls, "getStatisticsMeanHistory", "()Ljava/util/List;");
                mids$[mid_getStatisticsSigmaHistory_2afa36052df4765d] = env->getMethodID(cls, "getStatisticsSigmaHistory", "()Ljava/util/List;");
                mids$[mid_optimize_d70788483e9a9a2c] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_parseOptimizationData_3d26e9f3a1d7e833] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
                mids$[mid_doOptimize_4ae915e35f441d39] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CMAESOptimizer::CMAESOptimizer(jint a0, jdouble a1, jboolean a2, jint a3, jint a4, const ::org::hipparchus::random::RandomGenerator & a5, jboolean a6, const ::org::hipparchus::optim::ConvergenceChecker & a7) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_88a40a0d3c6a3df9, a0, a1, a2, a3, a4, a5.this$, a6, a7.this$)) {}

            ::java::util::List CMAESOptimizer::getStatisticsDHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsDHistory_2afa36052df4765d]));
            }

            ::java::util::List CMAESOptimizer::getStatisticsFitnessHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsFitnessHistory_2afa36052df4765d]));
            }

            ::java::util::List CMAESOptimizer::getStatisticsMeanHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsMeanHistory_2afa36052df4765d]));
            }

            ::java::util::List CMAESOptimizer::getStatisticsSigmaHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsSigmaHistory_2afa36052df4765d]));
            }

            ::org::hipparchus::optim::PointValuePair CMAESOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_d70788483e9a9a2c], a0.this$));
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$PopulationSize.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$Sigma.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            static PyObject *t_CMAESOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer_of_(t_CMAESOptimizer *self, PyObject *args);
            static int t_CMAESOptimizer_init_(t_CMAESOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CMAESOptimizer_getStatisticsDHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_getStatisticsFitnessHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_getStatisticsMeanHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_getStatisticsSigmaHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_optimize(t_CMAESOptimizer *self, PyObject *args);
            static PyObject *t_CMAESOptimizer_get__statisticsDHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__statisticsFitnessHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__statisticsMeanHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__statisticsSigmaHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__parameters_(t_CMAESOptimizer *self, void *data);
            static PyGetSetDef t_CMAESOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsDHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsFitnessHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsMeanHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsSigmaHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CMAESOptimizer__methods_[] = {
              DECLARE_METHOD(t_CMAESOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer, of_, METH_VARARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsDHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsFitnessHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsMeanHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsSigmaHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, optimize, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CMAESOptimizer)[] = {
              { Py_tp_methods, t_CMAESOptimizer__methods_ },
              { Py_tp_init, (void *) t_CMAESOptimizer_init_ },
              { Py_tp_getset, t_CMAESOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CMAESOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(CMAESOptimizer, t_CMAESOptimizer, CMAESOptimizer);
            PyObject *t_CMAESOptimizer::wrap_Object(const CMAESOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer *self = (t_CMAESOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CMAESOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer *self = (t_CMAESOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CMAESOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(CMAESOptimizer), &PY_TYPE_DEF(CMAESOptimizer), module, "CMAESOptimizer", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "PopulationSize", make_descriptor(&PY_TYPE_DEF(CMAESOptimizer$PopulationSize)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "Sigma", make_descriptor(&PY_TYPE_DEF(CMAESOptimizer$Sigma)));
            }

            void t_CMAESOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "class_", make_descriptor(CMAESOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "wrapfn_", make_descriptor(t_CMAESOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CMAESOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CMAESOptimizer::initializeClass, 1)))
                return NULL;
              return t_CMAESOptimizer::wrap_Object(CMAESOptimizer(((t_CMAESOptimizer *) arg)->object.this$));
            }
            static PyObject *t_CMAESOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CMAESOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CMAESOptimizer_of_(t_CMAESOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CMAESOptimizer_init_(t_CMAESOptimizer *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jdouble a1;
              jboolean a2;
              jint a3;
              jint a4;
              ::org::hipparchus::random::RandomGenerator a5((jobject) NULL);
              jboolean a6;
              ::org::hipparchus::optim::ConvergenceChecker a7((jobject) NULL);
              PyTypeObject **p7;
              CMAESOptimizer object((jobject) NULL);

              if (!parseArgs(args, "IDZIIkZK", ::org::hipparchus::random::RandomGenerator::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                INT_CALL(object = CMAESOptimizer(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CMAESOptimizer_getStatisticsDHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsDHistory());
              return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealMatrix));
            }

            static PyObject *t_CMAESOptimizer_getStatisticsFitnessHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsFitnessHistory());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_CMAESOptimizer_getStatisticsMeanHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsMeanHistory());
              return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealMatrix));
            }

            static PyObject *t_CMAESOptimizer_getStatisticsSigmaHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsSigmaHistory());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_CMAESOptimizer_optimize(t_CMAESOptimizer *self, PyObject *args)
            {
              JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              return callSuper(PY_TYPE(CMAESOptimizer), (PyObject *) self, "optimize", args, 2);
            }
            static PyObject *t_CMAESOptimizer_get__parameters_(t_CMAESOptimizer *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CMAESOptimizer_get__statisticsDHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsDHistory());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CMAESOptimizer_get__statisticsFitnessHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsFitnessHistory());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CMAESOptimizer_get__statisticsMeanHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsMeanHistory());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CMAESOptimizer_get__statisticsSigmaHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsSigmaHistory());
              return ::java::util::t_List::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$MeteorologicalMeasurement::class$ = NULL;
        jmethodID *CRD$MeteorologicalMeasurement::mids$ = NULL;
        bool CRD$MeteorologicalMeasurement::live$ = false;

        jclass CRD$MeteorologicalMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$MeteorologicalMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d912a1711a7bd5f1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDD)V");
            mids$[mid_init$_9e6e27a31336e876] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDI)V");
            mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getHumidity_dff5885c2c873297] = env->getMethodID(cls, "getHumidity", "()D");
            mids$[mid_getOriginOfValues_570ce0828f81a2c1] = env->getMethodID(cls, "getOriginOfValues", "()I");
            mids$[mid_getPressure_dff5885c2c873297] = env->getMethodID(cls, "getPressure", "()D");
            mids$[mid_getTemperature_dff5885c2c873297] = env->getMethodID(cls, "getTemperature", "()D");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$MeteorologicalMeasurement::CRD$MeteorologicalMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d912a1711a7bd5f1, a0.this$, a1, a2, a3)) {}

        CRD$MeteorologicalMeasurement::CRD$MeteorologicalMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9e6e27a31336e876, a0.this$, a1, a2, a3, a4)) {}

        ::org::orekit::time::AbsoluteDate CRD$MeteorologicalMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
        }

        jdouble CRD$MeteorologicalMeasurement::getHumidity() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHumidity_dff5885c2c873297]);
        }

        jint CRD$MeteorologicalMeasurement::getOriginOfValues() const
        {
          return env->callIntMethod(this$, mids$[mid_getOriginOfValues_570ce0828f81a2c1]);
        }

        jdouble CRD$MeteorologicalMeasurement::getPressure() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPressure_dff5885c2c873297]);
        }

        jdouble CRD$MeteorologicalMeasurement::getTemperature() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTemperature_dff5885c2c873297]);
        }

        ::java::lang::String CRD$MeteorologicalMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRD$MeteorologicalMeasurement::toString() const
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
        static PyObject *t_CRD$MeteorologicalMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$MeteorologicalMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$MeteorologicalMeasurement_init_(t_CRD$MeteorologicalMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$MeteorologicalMeasurement_getDate(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getHumidity(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getOriginOfValues(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getPressure(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getTemperature(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_toCrdString(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_toString(t_CRD$MeteorologicalMeasurement *self, PyObject *args);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__date(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__humidity(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__originOfValues(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__pressure(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__temperature(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyGetSetDef t_CRD$MeteorologicalMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, date),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, humidity),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, originOfValues),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, pressure),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, temperature),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$MeteorologicalMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getHumidity, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getOriginOfValues, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getPressure, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getTemperature, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$MeteorologicalMeasurement)[] = {
          { Py_tp_methods, t_CRD$MeteorologicalMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$MeteorologicalMeasurement_init_ },
          { Py_tp_getset, t_CRD$MeteorologicalMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$MeteorologicalMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$MeteorologicalMeasurement, t_CRD$MeteorologicalMeasurement, CRD$MeteorologicalMeasurement);

        void t_CRD$MeteorologicalMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$MeteorologicalMeasurement), &PY_TYPE_DEF(CRD$MeteorologicalMeasurement), module, "CRD$MeteorologicalMeasurement", 0);
        }

        void t_CRD$MeteorologicalMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$MeteorologicalMeasurement), "class_", make_descriptor(CRD$MeteorologicalMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$MeteorologicalMeasurement), "wrapfn_", make_descriptor(t_CRD$MeteorologicalMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$MeteorologicalMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$MeteorologicalMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$MeteorologicalMeasurement::wrap_Object(CRD$MeteorologicalMeasurement(((t_CRD$MeteorologicalMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$MeteorologicalMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$MeteorologicalMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$MeteorologicalMeasurement_init_(t_CRD$MeteorologicalMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              CRD$MeteorologicalMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CRD$MeteorologicalMeasurement(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              CRD$MeteorologicalMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDDDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = CRD$MeteorologicalMeasurement(a0, a1, a2, a3, a4));
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

        static PyObject *t_CRD$MeteorologicalMeasurement_getDate(t_CRD$MeteorologicalMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getHumidity(t_CRD$MeteorologicalMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHumidity());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getOriginOfValues(t_CRD$MeteorologicalMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOriginOfValues());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getPressure(t_CRD$MeteorologicalMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPressure());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getTemperature(t_CRD$MeteorologicalMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTemperature());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_toCrdString(t_CRD$MeteorologicalMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_toString(t_CRD$MeteorologicalMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$MeteorologicalMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__date(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__humidity(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHumidity());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__originOfValues(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOriginOfValues());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__pressure(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPressure());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__temperature(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTemperature());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter2DPOCMethod.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *AbstractShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *AbstractShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool AbstractShortTermEncounter2DPOCMethod::live$ = false;
              jdouble AbstractShortTermEncounter2DPOCMethod::DEFAULT_TCA_DIFFERENCE_TOLERANCE = (jdouble) 0;

              jclass AbstractShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_7ed362902ba10174] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_4d249761aa92e117] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_091f0943f3979390] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_44d723598fb6a077] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_184c2f4ec5889c74] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0ed38e7bbee7fafc] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_77dbe9f2fcda2496] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_1c26d4a5b9c10569] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_b108b35ef48e27bd] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");
                  mids$[mid_getObjectOrbitFromCdm_97e5b21be4be034a] = env->getMethodID(cls, "getObjectOrbitFromCdm", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;Lorg/orekit/files/ccsds/ndm/cdm/CdmData;Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;Lorg/orekit/data/DataContext;)Lorg/orekit/orbits/Orbit;");
                  mids$[mid_getObjectStateCovarianceFromCdm_199478496fa5b1ee] = env->getMethodID(cls, "getObjectStateCovarianceFromCdm", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;Lorg/orekit/files/ccsds/ndm/cdm/CdmData;)Lorg/orekit/propagation/StateCovariance;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_TCA_DIFFERENCE_TOLERANCE = env->getStaticDoubleField(cls, "DEFAULT_TCA_DIFFERENCE_TOLERANCE");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_7ed362902ba10174], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_4d249761aa92e117], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_091f0943f3979390], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_44d723598fb6a077], a0.this$, a1.this$, a2));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_184c2f4ec5889c74], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_0ed38e7bbee7fafc], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_77dbe9f2fcda2496], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_1c26d4a5b9c10569], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5));
              }

              ::java::lang::String AbstractShortTermEncounter2DPOCMethod::getName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
              }

              jboolean AbstractShortTermEncounter2DPOCMethod::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_b108b35ef48e27bd]);
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
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_compute(t_AbstractShortTermEncounter2DPOCMethod *self, PyObject *args);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_getName(t_AbstractShortTermEncounter2DPOCMethod *self);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self, void *data);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__name(t_AbstractShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_AbstractShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_AbstractShortTermEncounter2DPOCMethod, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_AbstractShortTermEncounter2DPOCMethod, name),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AbstractShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, compute, METH_VARARGS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, getName, METH_NOARGS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, isAMaximumProbabilityOfCollisionMethod, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AbstractShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_AbstractShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AbstractShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AbstractShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AbstractShortTermEncounter2DPOCMethod, t_AbstractShortTermEncounter2DPOCMethod, AbstractShortTermEncounter2DPOCMethod);

              void t_AbstractShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(AbstractShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(AbstractShortTermEncounter2DPOCMethod), module, "AbstractShortTermEncounter2DPOCMethod", 0);
              }

              void t_AbstractShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "class_", make_descriptor(AbstractShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_AbstractShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                env->getClass(AbstractShortTermEncounter2DPOCMethod::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "DEFAULT_TCA_DIFFERENCE_TOLERANCE", make_descriptor(AbstractShortTermEncounter2DPOCMethod::DEFAULT_TCA_DIFFERENCE_TOLERANCE));
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AbstractShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_AbstractShortTermEncounter2DPOCMethod::wrap_Object(AbstractShortTermEncounter2DPOCMethod(((t_AbstractShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AbstractShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_compute(t_AbstractShortTermEncounter2DPOCMethod *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 2:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KD", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    jdouble a1;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kD", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, &a0, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 3:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    jdouble a2;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
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
                  break;
                 case 6:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkkkDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "compute", args);
                return NULL;
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_getName(t_AbstractShortTermEncounter2DPOCMethod *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getName());
                return j2p(result);
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__name(t_AbstractShortTermEncounter2DPOCMethod *self, void *data)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/UnivariateDifferentiableSolver.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *UnivariateDifferentiableSolver::class$ = NULL;
        jmethodID *UnivariateDifferentiableSolver::mids$ = NULL;
        bool UnivariateDifferentiableSolver::live$ = false;

        jclass UnivariateDifferentiableSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/UnivariateDifferentiableSolver");

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
  namespace hipparchus {
    namespace analysis {
      namespace solvers {
        static PyObject *t_UnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_UnivariateDifferentiableSolver__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableSolver, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableSolver)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableSolver, t_UnivariateDifferentiableSolver, UnivariateDifferentiableSolver);

        void t_UnivariateDifferentiableSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableSolver), &PY_TYPE_DEF(UnivariateDifferentiableSolver), module, "UnivariateDifferentiableSolver", 0);
        }

        void t_UnivariateDifferentiableSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableSolver), "class_", make_descriptor(UnivariateDifferentiableSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableSolver), "wrapfn_", make_descriptor(t_UnivariateDifferentiableSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableSolver::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableSolver::wrap_Object(UnivariateDifferentiableSolver(((t_UnivariateDifferentiableSolver *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectInputStream.h"
#include "java/io/ObjectInputValidation.h"
#include "java/io/IOException.h"
#include "java/io/ObjectStreamConstants.h"
#include "java/io/ObjectInputStream$GetField.h"
#include "java/io/InvalidObjectException.h"
#include "java/io/ObjectInput.h"
#include "java/io/ObjectInputFilter.h"
#include "java/lang/Class.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/NotActiveException.h"
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
        mids$[mid_init$_42871fcf824ad25f] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;)V");
        mids$[mid_available_570ce0828f81a2c1] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_defaultReadObject_0fa09c18fee449d5] = env->getMethodID(cls, "defaultReadObject", "()V");
        mids$[mid_getObjectInputFilter_a58ed53faf5233b9] = env->getMethodID(cls, "getObjectInputFilter", "()Ljava/io/ObjectInputFilter;");
        mids$[mid_read_570ce0828f81a2c1] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_619434785725cc72] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_readBoolean_b108b35ef48e27bd] = env->getMethodID(cls, "readBoolean", "()Z");
        mids$[mid_readByte_42a1555092006f7f] = env->getMethodID(cls, "readByte", "()B");
        mids$[mid_readChar_7818f5b58320cd1f] = env->getMethodID(cls, "readChar", "()C");
        mids$[mid_readDouble_dff5885c2c873297] = env->getMethodID(cls, "readDouble", "()D");
        mids$[mid_readFields_231e07efd70b0035] = env->getMethodID(cls, "readFields", "()Ljava/io/ObjectInputStream$GetField;");
        mids$[mid_readFloat_5adccb493ada08e8] = env->getMethodID(cls, "readFloat", "()F");
        mids$[mid_readFully_20012b3010a39c05] = env->getMethodID(cls, "readFully", "([B)V");
        mids$[mid_readFully_d7af9aedcdd3845b] = env->getMethodID(cls, "readFully", "([BII)V");
        mids$[mid_readInt_570ce0828f81a2c1] = env->getMethodID(cls, "readInt", "()I");
        mids$[mid_readLine_11b109bd155ca898] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_readLong_492808a339bfa35f] = env->getMethodID(cls, "readLong", "()J");
        mids$[mid_readObject_4d26fd885228c716] = env->getMethodID(cls, "readObject", "()Ljava/lang/Object;");
        mids$[mid_readShort_b5dd6688e7dce57d] = env->getMethodID(cls, "readShort", "()S");
        mids$[mid_readUTF_11b109bd155ca898] = env->getMethodID(cls, "readUTF", "()Ljava/lang/String;");
        mids$[mid_readUnshared_4d26fd885228c716] = env->getMethodID(cls, "readUnshared", "()Ljava/lang/Object;");
        mids$[mid_readUnsignedByte_570ce0828f81a2c1] = env->getMethodID(cls, "readUnsignedByte", "()I");
        mids$[mid_readUnsignedShort_570ce0828f81a2c1] = env->getMethodID(cls, "readUnsignedShort", "()I");
        mids$[mid_registerValidation_185a5b4cea644f25] = env->getMethodID(cls, "registerValidation", "(Ljava/io/ObjectInputValidation;I)V");
        mids$[mid_setObjectInputFilter_6a68fc428fde73dc] = env->getMethodID(cls, "setObjectInputFilter", "(Ljava/io/ObjectInputFilter;)V");
        mids$[mid_skipBytes_2235cd056f5a882b] = env->getMethodID(cls, "skipBytes", "(I)I");
        mids$[mid_readStreamHeader_0fa09c18fee449d5] = env->getMethodID(cls, "readStreamHeader", "()V");
        mids$[mid_readObjectOverride_4d26fd885228c716] = env->getMethodID(cls, "readObjectOverride", "()Ljava/lang/Object;");
        mids$[mid_resolveProxyClass_2f0b882a42c5a4b6] = env->getMethodID(cls, "resolveProxyClass", "([Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_resolveObject_9facd1449e0950d3] = env->getMethodID(cls, "resolveObject", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_enableResolveObject_29387014c78e7f59] = env->getMethodID(cls, "enableResolveObject", "(Z)Z");
        mids$[mid_readClassDescriptor_62a98f7a7fe67a84] = env->getMethodID(cls, "readClassDescriptor", "()Ljava/io/ObjectStreamClass;");
        mids$[mid_resolveClass_e648b8c215a5587b] = env->getMethodID(cls, "resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectInputStream::ObjectInputStream(const ::java::io::InputStream & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_42871fcf824ad25f, a0.this$)) {}

    jint ObjectInputStream::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_570ce0828f81a2c1]);
    }

    void ObjectInputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    void ObjectInputStream::defaultReadObject() const
    {
      env->callVoidMethod(this$, mids$[mid_defaultReadObject_0fa09c18fee449d5]);
    }

    ::java::io::ObjectInputFilter ObjectInputStream::getObjectInputFilter() const
    {
      return ::java::io::ObjectInputFilter(env->callObjectMethod(this$, mids$[mid_getObjectInputFilter_a58ed53faf5233b9]));
    }

    jint ObjectInputStream::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_570ce0828f81a2c1]);
    }

    jint ObjectInputStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_619434785725cc72], a0.this$, a1, a2);
    }

    jboolean ObjectInputStream::readBoolean() const
    {
      return env->callBooleanMethod(this$, mids$[mid_readBoolean_b108b35ef48e27bd]);
    }

    jbyte ObjectInputStream::readByte() const
    {
      return env->callByteMethod(this$, mids$[mid_readByte_42a1555092006f7f]);
    }

    jchar ObjectInputStream::readChar() const
    {
      return env->callCharMethod(this$, mids$[mid_readChar_7818f5b58320cd1f]);
    }

    jdouble ObjectInputStream::readDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_readDouble_dff5885c2c873297]);
    }

    ::java::io::ObjectInputStream$GetField ObjectInputStream::readFields() const
    {
      return ::java::io::ObjectInputStream$GetField(env->callObjectMethod(this$, mids$[mid_readFields_231e07efd70b0035]));
    }

    jfloat ObjectInputStream::readFloat() const
    {
      return env->callFloatMethod(this$, mids$[mid_readFloat_5adccb493ada08e8]);
    }

    void ObjectInputStream::readFully(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_20012b3010a39c05], a0.this$);
    }

    void ObjectInputStream::readFully(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_d7af9aedcdd3845b], a0.this$, a1, a2);
    }

    jint ObjectInputStream::readInt() const
    {
      return env->callIntMethod(this$, mids$[mid_readInt_570ce0828f81a2c1]);
    }

    ::java::lang::String ObjectInputStream::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_11b109bd155ca898]));
    }

    jlong ObjectInputStream::readLong() const
    {
      return env->callLongMethod(this$, mids$[mid_readLong_492808a339bfa35f]);
    }

    ::java::lang::Object ObjectInputStream::readObject() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_readObject_4d26fd885228c716]));
    }

    jshort ObjectInputStream::readShort() const
    {
      return env->callShortMethod(this$, mids$[mid_readShort_b5dd6688e7dce57d]);
    }

    ::java::lang::String ObjectInputStream::readUTF() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readUTF_11b109bd155ca898]));
    }

    ::java::lang::Object ObjectInputStream::readUnshared() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_readUnshared_4d26fd885228c716]));
    }

    jint ObjectInputStream::readUnsignedByte() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedByte_570ce0828f81a2c1]);
    }

    jint ObjectInputStream::readUnsignedShort() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedShort_570ce0828f81a2c1]);
    }

    void ObjectInputStream::registerValidation(const ::java::io::ObjectInputValidation & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_registerValidation_185a5b4cea644f25], a0.this$, a1);
    }

    void ObjectInputStream::setObjectInputFilter(const ::java::io::ObjectInputFilter & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setObjectInputFilter_6a68fc428fde73dc], a0.this$);
    }

    jint ObjectInputStream::skipBytes(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_skipBytes_2235cd056f5a882b], a0);
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/SsrUpdateInterval.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCorrectionHeader::class$ = NULL;
              jmethodID *RtcmCorrectionHeader::mids$ = NULL;
              bool RtcmCorrectionHeader::live$ = false;

              jclass RtcmCorrectionHeader::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEpochTime1s_dff5885c2c873297] = env->getMethodID(cls, "getEpochTime1s", "()D");
                  mids$[mid_getIodSsr_570ce0828f81a2c1] = env->getMethodID(cls, "getIodSsr", "()I");
                  mids$[mid_getMultipleMessageIndicator_570ce0828f81a2c1] = env->getMethodID(cls, "getMultipleMessageIndicator", "()I");
                  mids$[mid_getNumberOfSatellites_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfSatellites", "()I");
                  mids$[mid_getSsrProviderId_570ce0828f81a2c1] = env->getMethodID(cls, "getSsrProviderId", "()I");
                  mids$[mid_getSsrSolutionId_570ce0828f81a2c1] = env->getMethodID(cls, "getSsrSolutionId", "()I");
                  mids$[mid_getSsrUpdateInterval_84f8aabc0e0f32e2] = env->getMethodID(cls, "getSsrUpdateInterval", "()Lorg/orekit/gnss/metric/messages/common/SsrUpdateInterval;");
                  mids$[mid_setEpochTime1s_17db3a65980d3441] = env->getMethodID(cls, "setEpochTime1s", "(D)V");
                  mids$[mid_setIodSsr_99803b0791f320ff] = env->getMethodID(cls, "setIodSsr", "(I)V");
                  mids$[mid_setMultipleMessageIndicator_99803b0791f320ff] = env->getMethodID(cls, "setMultipleMessageIndicator", "(I)V");
                  mids$[mid_setNumberOfSatellites_99803b0791f320ff] = env->getMethodID(cls, "setNumberOfSatellites", "(I)V");
                  mids$[mid_setSsrProviderId_99803b0791f320ff] = env->getMethodID(cls, "setSsrProviderId", "(I)V");
                  mids$[mid_setSsrSolutionId_99803b0791f320ff] = env->getMethodID(cls, "setSsrSolutionId", "(I)V");
                  mids$[mid_setSsrUpdateInterval_23b863f8ba362dbf] = env->getMethodID(cls, "setSsrUpdateInterval", "(Lorg/orekit/gnss/metric/messages/common/SsrUpdateInterval;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCorrectionHeader::RtcmCorrectionHeader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jdouble RtcmCorrectionHeader::getEpochTime1s() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochTime1s_dff5885c2c873297]);
              }

              jint RtcmCorrectionHeader::getIodSsr() const
              {
                return env->callIntMethod(this$, mids$[mid_getIodSsr_570ce0828f81a2c1]);
              }

              jint RtcmCorrectionHeader::getMultipleMessageIndicator() const
              {
                return env->callIntMethod(this$, mids$[mid_getMultipleMessageIndicator_570ce0828f81a2c1]);
              }

              jint RtcmCorrectionHeader::getNumberOfSatellites() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfSatellites_570ce0828f81a2c1]);
              }

              jint RtcmCorrectionHeader::getSsrProviderId() const
              {
                return env->callIntMethod(this$, mids$[mid_getSsrProviderId_570ce0828f81a2c1]);
              }

              jint RtcmCorrectionHeader::getSsrSolutionId() const
              {
                return env->callIntMethod(this$, mids$[mid_getSsrSolutionId_570ce0828f81a2c1]);
              }

              ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval RtcmCorrectionHeader::getSsrUpdateInterval() const
              {
                return ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval(env->callObjectMethod(this$, mids$[mid_getSsrUpdateInterval_84f8aabc0e0f32e2]));
              }

              void RtcmCorrectionHeader::setEpochTime1s(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochTime1s_17db3a65980d3441], a0);
              }

              void RtcmCorrectionHeader::setIodSsr(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIodSsr_99803b0791f320ff], a0);
              }

              void RtcmCorrectionHeader::setMultipleMessageIndicator(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMultipleMessageIndicator_99803b0791f320ff], a0);
              }

              void RtcmCorrectionHeader::setNumberOfSatellites(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfSatellites_99803b0791f320ff], a0);
              }

              void RtcmCorrectionHeader::setSsrProviderId(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrProviderId_99803b0791f320ff], a0);
              }

              void RtcmCorrectionHeader::setSsrSolutionId(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrSolutionId_99803b0791f320ff], a0);
              }

              void RtcmCorrectionHeader::setSsrUpdateInterval(const ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrUpdateInterval_23b863f8ba362dbf], a0.this$);
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
          namespace rtcm {
            namespace correction {
              static PyObject *t_RtcmCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmCorrectionHeader_init_(t_RtcmCorrectionHeader *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCorrectionHeader_getEpochTime1s(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getIodSsr(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getMultipleMessageIndicator(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getNumberOfSatellites(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getSsrProviderId(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getSsrSolutionId(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getSsrUpdateInterval(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_setEpochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setIodSsr(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setMultipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setNumberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setSsrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setSsrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setSsrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_get__epochTime1s(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__epochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__iodSsr(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__iodSsr(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__multipleMessageIndicator(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__multipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__numberOfSatellites(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__numberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__ssrProviderId(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__ssrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__ssrSolutionId(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__ssrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__ssrUpdateInterval(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__ssrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmCorrectionHeader__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, epochTime1s),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, iodSsr),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, multipleMessageIndicator),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, numberOfSatellites),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, ssrProviderId),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, ssrSolutionId),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, ssrUpdateInterval),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCorrectionHeader__methods_[] = {
                DECLARE_METHOD(t_RtcmCorrectionHeader, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getEpochTime1s, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getIodSsr, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getMultipleMessageIndicator, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getNumberOfSatellites, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getSsrProviderId, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getSsrSolutionId, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getSsrUpdateInterval, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setEpochTime1s, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setIodSsr, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setMultipleMessageIndicator, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setNumberOfSatellites, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setSsrProviderId, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setSsrSolutionId, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setSsrUpdateInterval, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCorrectionHeader)[] = {
                { Py_tp_methods, t_RtcmCorrectionHeader__methods_ },
                { Py_tp_init, (void *) t_RtcmCorrectionHeader_init_ },
                { Py_tp_getset, t_RtcmCorrectionHeader__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCorrectionHeader)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(RtcmCorrectionHeader, t_RtcmCorrectionHeader, RtcmCorrectionHeader);

              void t_RtcmCorrectionHeader::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCorrectionHeader), &PY_TYPE_DEF(RtcmCorrectionHeader), module, "RtcmCorrectionHeader", 0);
              }

              void t_RtcmCorrectionHeader::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionHeader), "class_", make_descriptor(RtcmCorrectionHeader::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionHeader), "wrapfn_", make_descriptor(t_RtcmCorrectionHeader::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionHeader), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCorrectionHeader::initializeClass, 1)))
                  return NULL;
                return t_RtcmCorrectionHeader::wrap_Object(RtcmCorrectionHeader(((t_RtcmCorrectionHeader *) arg)->object.this$));
              }
              static PyObject *t_RtcmCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCorrectionHeader::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmCorrectionHeader_init_(t_RtcmCorrectionHeader *self, PyObject *args, PyObject *kwds)
              {
                RtcmCorrectionHeader object((jobject) NULL);

                INT_CALL(object = RtcmCorrectionHeader());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmCorrectionHeader_getEpochTime1s(t_RtcmCorrectionHeader *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochTime1s());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getIodSsr(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getIodSsr());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getMultipleMessageIndicator(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getMultipleMessageIndicator());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getNumberOfSatellites(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getSsrProviderId(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSsrProviderId());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getSsrSolutionId(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSsrSolutionId());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getSsrUpdateInterval(t_RtcmCorrectionHeader *self)
              {
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrUpdateInterval());
                return ::org::orekit::gnss::metric::messages::common::t_SsrUpdateInterval::wrap_Object(result);
              }

              static PyObject *t_RtcmCorrectionHeader_setEpochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochTime1s(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochTime1s", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setIodSsr(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setIodSsr(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIodSsr", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setMultipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setMultipleMessageIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMultipleMessageIndicator", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setNumberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfSatellites(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfSatellites", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setSsrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSsrProviderId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrProviderId", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setSsrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSsrSolutionId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrSolutionId", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setSsrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setSsrUpdateInterval(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrUpdateInterval", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_get__epochTime1s(t_RtcmCorrectionHeader *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochTime1s());
                return PyFloat_FromDouble((double) value);
              }
              static int t_RtcmCorrectionHeader_set__epochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochTime1s(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochTime1s", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__iodSsr(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getIodSsr());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__iodSsr(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setIodSsr(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "iodSsr", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__multipleMessageIndicator(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getMultipleMessageIndicator());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__multipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setMultipleMessageIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "multipleMessageIndicator", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__numberOfSatellites(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__numberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfSatellites(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfSatellites", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__ssrProviderId(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSsrProviderId());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__ssrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSsrProviderId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrProviderId", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__ssrSolutionId(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSsrSolutionId());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__ssrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSsrSolutionId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrSolutionId", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__ssrUpdateInterval(t_RtcmCorrectionHeader *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrUpdateInterval());
                return ::org::orekit::gnss::metric::messages::common::t_SsrUpdateInterval::wrap_Object(value);
              }
              static int t_RtcmCorrectionHeader_set__ssrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSsrUpdateInterval(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrUpdateInterval", arg);
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
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldBlendable::class$ = NULL;
      jmethodID *FieldBlendable::mids$ = NULL;
      bool FieldBlendable::live$ = false;

      jclass FieldBlendable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldBlendable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_blendArithmeticallyWith_491e757e542a2378] = env->getMethodID(cls, "blendArithmeticallyWith", "(Ljava/lang/Object;Lorg/hipparchus/FieldElement;)Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object FieldBlendable::blendArithmeticallyWith(const ::java::lang::Object & a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_491e757e542a2378], a0.this$, a1.this$));
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
      static PyObject *t_FieldBlendable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBlendable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBlendable_of_(t_FieldBlendable *self, PyObject *args);
      static PyObject *t_FieldBlendable_blendArithmeticallyWith(t_FieldBlendable *self, PyObject *args);
      static PyObject *t_FieldBlendable_get__parameters_(t_FieldBlendable *self, void *data);
      static PyGetSetDef t_FieldBlendable__fields_[] = {
        DECLARE_GET_FIELD(t_FieldBlendable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldBlendable__methods_[] = {
        DECLARE_METHOD(t_FieldBlendable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBlendable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBlendable, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldBlendable, blendArithmeticallyWith, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBlendable)[] = {
        { Py_tp_methods, t_FieldBlendable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldBlendable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBlendable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldBlendable, t_FieldBlendable, FieldBlendable);
      PyObject *t_FieldBlendable::wrap_Object(const FieldBlendable& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldBlendable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBlendable *self = (t_FieldBlendable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldBlendable::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldBlendable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBlendable *self = (t_FieldBlendable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldBlendable::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBlendable), &PY_TYPE_DEF(FieldBlendable), module, "FieldBlendable", 0);
      }

      void t_FieldBlendable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBlendable), "class_", make_descriptor(FieldBlendable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBlendable), "wrapfn_", make_descriptor(t_FieldBlendable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBlendable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBlendable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBlendable::initializeClass, 1)))
          return NULL;
        return t_FieldBlendable::wrap_Object(FieldBlendable(((t_FieldBlendable *) arg)->object.this$));
      }
      static PyObject *t_FieldBlendable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBlendable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBlendable_of_(t_FieldBlendable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldBlendable_blendArithmeticallyWith(t_FieldBlendable *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "OK", self->parameters[0], ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }
      static PyObject *t_FieldBlendable_get__parameters_(t_FieldBlendable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
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
                mids$[mid_process_91167e646acbc9d0] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;)Z");
                mids$[mid_valueOf_8f3676a0a8b4c11d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;");
                mids$[mid_values_037320d096bc10be] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey;");

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
              return env->callBooleanMethod(this$, mids$[mid_process_91167e646acbc9d0], a0.this$, a1.this$, a2.this$);
            }

            CartesianCovarianceKey CartesianCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CartesianCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8f3676a0a8b4c11d], a0.this$));
            }

            JArray< CartesianCovarianceKey > CartesianCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CartesianCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_037320d096bc10be]));
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
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUp.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *InterSatellitesWindUp::class$ = NULL;
          jmethodID *InterSatellitesWindUp::mids$ = NULL;
          bool InterSatellitesWindUp::live$ = false;

          jclass InterSatellitesWindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/InterSatellitesWindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_emitterToInert_e7f87679ee42d076] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_receiverToInert_e7f87679ee42d076] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
          static PyObject *t_InterSatellitesWindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesWindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesWindUp_of_(t_InterSatellitesWindUp *self, PyObject *args);
          static PyObject *t_InterSatellitesWindUp_get__parameters_(t_InterSatellitesWindUp *self, void *data);
          static PyGetSetDef t_InterSatellitesWindUp__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesWindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesWindUp__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesWindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUp, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesWindUp)[] = {
            { Py_tp_methods, t_InterSatellitesWindUp__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_InterSatellitesWindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesWindUp)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractWindUp),
            NULL
          };

          DEFINE_TYPE(InterSatellitesWindUp, t_InterSatellitesWindUp, InterSatellitesWindUp);
          PyObject *t_InterSatellitesWindUp::wrap_Object(const InterSatellitesWindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesWindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesWindUp *self = (t_InterSatellitesWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesWindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesWindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesWindUp *self = (t_InterSatellitesWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesWindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesWindUp), &PY_TYPE_DEF(InterSatellitesWindUp), module, "InterSatellitesWindUp", 0);
          }

          void t_InterSatellitesWindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUp), "class_", make_descriptor(InterSatellitesWindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUp), "wrapfn_", make_descriptor(t_InterSatellitesWindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUp), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesWindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesWindUp::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesWindUp::wrap_Object(InterSatellitesWindUp(((t_InterSatellitesWindUp *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesWindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesWindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesWindUp_of_(t_InterSatellitesWindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_InterSatellitesWindUp_get__parameters_(t_InterSatellitesWindUp *self, void *data)
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
#include "org/orekit/attitudes/FrameAlignedProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FrameAlignedProvider::class$ = NULL;
      jmethodID *FrameAlignedProvider::mids$ = NULL;
      bool FrameAlignedProvider::live$ = false;

      jclass FrameAlignedProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FrameAlignedProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_80a55d93aa5ecb9e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
          mids$[mid_init$_b5680f5c30eede66] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_7425adc369986a54] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitudeRotation_53a81d4d17b13463] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_29422c22de775b74] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_of_645fb86928f8f669] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FrameAlignedProvider::FrameAlignedProvider(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_80a55d93aa5ecb9e, a0.this$)) {}

      FrameAlignedProvider::FrameAlignedProvider(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5680f5c30eede66, a0.this$)) {}

      FrameAlignedProvider::FrameAlignedProvider(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7425adc369986a54, a0.this$, a1.this$)) {}

      ::org::orekit::attitudes::Attitude FrameAlignedProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude FrameAlignedProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FrameAlignedProvider::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_53a81d4d17b13463], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation FrameAlignedProvider::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_29422c22de775b74], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider FrameAlignedProvider::of(const ::org::orekit::frames::Frame & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::attitudes::AttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_of_645fb86928f8f669], a0.this$));
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
      static PyObject *t_FrameAlignedProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FrameAlignedProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FrameAlignedProvider_init_(t_FrameAlignedProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FrameAlignedProvider_getAttitude(t_FrameAlignedProvider *self, PyObject *args);
      static PyObject *t_FrameAlignedProvider_getAttitudeRotation(t_FrameAlignedProvider *self, PyObject *args);
      static PyObject *t_FrameAlignedProvider_of(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_FrameAlignedProvider__methods_[] = {
        DECLARE_METHOD(t_FrameAlignedProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAlignedProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAlignedProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_FrameAlignedProvider, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_FrameAlignedProvider, of, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FrameAlignedProvider)[] = {
        { Py_tp_methods, t_FrameAlignedProvider__methods_ },
        { Py_tp_init, (void *) t_FrameAlignedProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FrameAlignedProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FrameAlignedProvider, t_FrameAlignedProvider, FrameAlignedProvider);

      void t_FrameAlignedProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FrameAlignedProvider), &PY_TYPE_DEF(FrameAlignedProvider), module, "FrameAlignedProvider", 0);
      }

      void t_FrameAlignedProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAlignedProvider), "class_", make_descriptor(FrameAlignedProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAlignedProvider), "wrapfn_", make_descriptor(t_FrameAlignedProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAlignedProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FrameAlignedProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FrameAlignedProvider::initializeClass, 1)))
          return NULL;
        return t_FrameAlignedProvider::wrap_Object(FrameAlignedProvider(((t_FrameAlignedProvider *) arg)->object.this$));
      }
      static PyObject *t_FrameAlignedProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FrameAlignedProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FrameAlignedProvider_init_(t_FrameAlignedProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            FrameAlignedProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
            {
              INT_CALL(object = FrameAlignedProvider(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FrameAlignedProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FrameAlignedProvider(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FrameAlignedProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FrameAlignedProvider(a0, a1));
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

      static PyObject *t_FrameAlignedProvider_getAttitude(t_FrameAlignedProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_FrameAlignedProvider_getAttitudeRotation(t_FrameAlignedProvider *self, PyObject *args)
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

      static PyObject *t_FrameAlignedProvider_of(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::attitudes::FrameAlignedProvider::of(a0));
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "of", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration.h"
#include "java/util/Set.h"
#include "org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRDConfiguration$LaserConfiguration.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration::mids$ = NULL;
        bool CRDConfiguration::live$ = false;

        jclass CRDConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addConfigurationRecord_8b3e0a4f894ba11c] = env->getMethodID(cls, "addConfigurationRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$BaseConfiguration;)V");
            mids$[mid_getCalibrationTargetRecord_cd6619333c77c489] = env->getMethodID(cls, "getCalibrationTargetRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration;");
            mids$[mid_getCalibrationTargetRecord_0252aa917b1bbb85] = env->getMethodID(cls, "getCalibrationTargetRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration;");
            mids$[mid_getConfigurationRecord_d7e9ce1cff611013] = env->getMethodID(cls, "getConfigurationRecord", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDConfiguration$BaseConfiguration;");
            mids$[mid_getConfigurationRecordMap_6f5a75ccd8c04465] = env->getMethodID(cls, "getConfigurationRecordMap", "()Ljava/util/Map;");
            mids$[mid_getDetectorRecord_3babdc1b4d9c624c] = env->getMethodID(cls, "getDetectorRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration;");
            mids$[mid_getDetectorRecord_feb4ea0f8f3fdae1] = env->getMethodID(cls, "getDetectorRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration;");
            mids$[mid_getLaserRecord_6c59a5fa09548592] = env->getMethodID(cls, "getLaserRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$LaserConfiguration;");
            mids$[mid_getLaserRecord_043e160309ef2428] = env->getMethodID(cls, "getLaserRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$LaserConfiguration;");
            mids$[mid_getLastSystemRecord_b48c5787e7261c06] = env->getMethodID(cls, "getLastSystemRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;");
            mids$[mid_getMeteorologicalRecord_beafc3359baf9328] = env->getMethodID(cls, "getMeteorologicalRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration;");
            mids$[mid_getMeteorologicalRecord_4fc2bab4188cd05b] = env->getMethodID(cls, "getMeteorologicalRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration;");
            mids$[mid_getSoftwareRecord_6c2b931616df67e5] = env->getMethodID(cls, "getSoftwareRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration;");
            mids$[mid_getSoftwareRecord_93ad485039858a20] = env->getMethodID(cls, "getSoftwareRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration;");
            mids$[mid_getSystemConfigurationIds_015730311a5bacdc] = env->getMethodID(cls, "getSystemConfigurationIds", "()Ljava/util/Set;");
            mids$[mid_getSystemConfigurationRecords_2afa36052df4765d] = env->getMethodID(cls, "getSystemConfigurationRecords", "()Ljava/util/List;");
            mids$[mid_getSystemRecord_b48c5787e7261c06] = env->getMethodID(cls, "getSystemRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;");
            mids$[mid_getSystemRecord_48486ca5142e08d8] = env->getMethodID(cls, "getSystemRecord", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;");
            mids$[mid_getTimingRecord_c51dc370e26c8235] = env->getMethodID(cls, "getTimingRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration;");
            mids$[mid_getTimingRecord_21955e3768694071] = env->getMethodID(cls, "getTimingRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration;");
            mids$[mid_getTransponderRecord_d69aacf2155065bf] = env->getMethodID(cls, "getTransponderRecord", "()Lorg/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration;");
            mids$[mid_getTransponderRecord_98b46165ac0f93d6] = env->getMethodID(cls, "getTransponderRecord", "(Lorg/orekit/files/ilrs/CRDConfiguration$SystemConfiguration;)Lorg/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration::CRDConfiguration() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void CRDConfiguration::addConfigurationRecord(const ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addConfigurationRecord_8b3e0a4f894ba11c], a0.this$);
        }

        ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration CRDConfiguration::getCalibrationTargetRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration(env->callObjectMethod(this$, mids$[mid_getCalibrationTargetRecord_cd6619333c77c489]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration CRDConfiguration::getCalibrationTargetRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration(env->callObjectMethod(this$, mids$[mid_getCalibrationTargetRecord_0252aa917b1bbb85], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration CRDConfiguration::getConfigurationRecord(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->callObjectMethod(this$, mids$[mid_getConfigurationRecord_d7e9ce1cff611013], a0.this$));
        }

        ::java::util::Map CRDConfiguration::getConfigurationRecordMap() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getConfigurationRecordMap_6f5a75ccd8c04465]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration CRDConfiguration::getDetectorRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration(env->callObjectMethod(this$, mids$[mid_getDetectorRecord_3babdc1b4d9c624c]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration CRDConfiguration::getDetectorRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration(env->callObjectMethod(this$, mids$[mid_getDetectorRecord_feb4ea0f8f3fdae1], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration CRDConfiguration::getLaserRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration(env->callObjectMethod(this$, mids$[mid_getLaserRecord_6c59a5fa09548592]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration CRDConfiguration::getLaserRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration(env->callObjectMethod(this$, mids$[mid_getLaserRecord_043e160309ef2428], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration CRDConfiguration::getLastSystemRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration(env->callObjectMethod(this$, mids$[mid_getLastSystemRecord_b48c5787e7261c06]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration CRDConfiguration::getMeteorologicalRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration(env->callObjectMethod(this$, mids$[mid_getMeteorologicalRecord_beafc3359baf9328]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration CRDConfiguration::getMeteorologicalRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration(env->callObjectMethod(this$, mids$[mid_getMeteorologicalRecord_4fc2bab4188cd05b], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration CRDConfiguration::getSoftwareRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration(env->callObjectMethod(this$, mids$[mid_getSoftwareRecord_6c2b931616df67e5]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration CRDConfiguration::getSoftwareRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration(env->callObjectMethod(this$, mids$[mid_getSoftwareRecord_93ad485039858a20], a0.this$));
        }

        ::java::util::Set CRDConfiguration::getSystemConfigurationIds() const
        {
          return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationIds_015730311a5bacdc]));
        }

        ::java::util::List CRDConfiguration::getSystemConfigurationRecords() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationRecords_2afa36052df4765d]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration CRDConfiguration::getSystemRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration(env->callObjectMethod(this$, mids$[mid_getSystemRecord_b48c5787e7261c06]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration CRDConfiguration::getSystemRecord(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration(env->callObjectMethod(this$, mids$[mid_getSystemRecord_48486ca5142e08d8], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration CRDConfiguration::getTimingRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration(env->callObjectMethod(this$, mids$[mid_getTimingRecord_c51dc370e26c8235]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration CRDConfiguration::getTimingRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration(env->callObjectMethod(this$, mids$[mid_getTimingRecord_21955e3768694071], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration CRDConfiguration::getTransponderRecord() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration(env->callObjectMethod(this$, mids$[mid_getTransponderRecord_d69aacf2155065bf]));
        }

        ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration CRDConfiguration::getTransponderRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration & a0) const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration(env->callObjectMethod(this$, mids$[mid_getTransponderRecord_98b46165ac0f93d6], a0.this$));
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
        static PyObject *t_CRDConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration_init_(t_CRDConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration_addConfigurationRecord(t_CRDConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration_getCalibrationTargetRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getConfigurationRecord(t_CRDConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration_getConfigurationRecordMap(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getDetectorRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getLaserRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getLastSystemRecord(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getMeteorologicalRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getSoftwareRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getSystemConfigurationIds(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getSystemConfigurationRecords(t_CRDConfiguration *self);
        static PyObject *t_CRDConfiguration_getSystemRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getTimingRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_getTransponderRecord(t_CRDConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration_get__calibrationTargetRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__configurationRecordMap(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__detectorRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__laserRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__lastSystemRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__meteorologicalRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__softwareRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__systemConfigurationIds(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__systemConfigurationRecords(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__systemRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__timingRecord(t_CRDConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration_get__transponderRecord(t_CRDConfiguration *self, void *data);
        static PyGetSetDef t_CRDConfiguration__fields_[] = {
          DECLARE_GET_FIELD(t_CRDConfiguration, calibrationTargetRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, configurationRecordMap),
          DECLARE_GET_FIELD(t_CRDConfiguration, detectorRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, laserRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, lastSystemRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, meteorologicalRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, softwareRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, systemConfigurationIds),
          DECLARE_GET_FIELD(t_CRDConfiguration, systemConfigurationRecords),
          DECLARE_GET_FIELD(t_CRDConfiguration, systemRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, timingRecord),
          DECLARE_GET_FIELD(t_CRDConfiguration, transponderRecord),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration, addConfigurationRecord, METH_O),
          DECLARE_METHOD(t_CRDConfiguration, getCalibrationTargetRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getConfigurationRecord, METH_O),
          DECLARE_METHOD(t_CRDConfiguration, getConfigurationRecordMap, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getDetectorRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getLaserRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getLastSystemRecord, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getMeteorologicalRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSoftwareRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSystemConfigurationIds, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSystemConfigurationRecords, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration, getSystemRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getTimingRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration, getTransponderRecord, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration, t_CRDConfiguration, CRDConfiguration);

        void t_CRDConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration), &PY_TYPE_DEF(CRDConfiguration), module, "CRDConfiguration", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "SystemConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$SystemConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "LaserConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$LaserConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "DetectorConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$DetectorConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "TimingSystemConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$TimingSystemConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "TransponderConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$TransponderConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "SoftwareConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$SoftwareConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "MeteorologicalConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$MeteorologicalConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "BaseConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$BaseConfiguration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "CalibrationTargetConfiguration", make_descriptor(&PY_TYPE_DEF(CRDConfiguration$CalibrationTargetConfiguration)));
        }

        void t_CRDConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "class_", make_descriptor(CRDConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration::wrap_Object(CRDConfiguration(((t_CRDConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration_init_(t_CRDConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration_addConfigurationRecord(t_CRDConfiguration *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addConfigurationRecord(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addConfigurationRecord", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getCalibrationTargetRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getCalibrationTargetRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getCalibrationTargetRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getCalibrationTargetRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getConfigurationRecord(t_CRDConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getConfigurationRecord(a0));
            return ::org::orekit::files::ilrs::t_CRDConfiguration$BaseConfiguration::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getConfigurationRecord", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getConfigurationRecordMap(t_CRDConfiguration *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getConfigurationRecordMap());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ilrs::PY_TYPE(CRDConfiguration$BaseConfiguration));
        }

        static PyObject *t_CRDConfiguration_getDetectorRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getDetectorRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$DetectorConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDetectorRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$DetectorConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getDetectorRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getLaserRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getLaserRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$LaserConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getLaserRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$LaserConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLaserRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getLastSystemRecord(t_CRDConfiguration *self)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration result((jobject) NULL);
          OBJ_CALL(result = self->object.getLastSystemRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(result);
        }

        static PyObject *t_CRDConfiguration_getMeteorologicalRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeteorologicalRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMeteorologicalRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMeteorologicalRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getSoftwareRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getSoftwareRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$SoftwareConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getSoftwareRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$SoftwareConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSoftwareRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getSystemConfigurationIds(t_CRDConfiguration *self)
        {
          ::java::util::Set result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationIds());
          return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CRDConfiguration_getSystemConfigurationRecords(t_CRDConfiguration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationRecords());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRDConfiguration$SystemConfiguration));
        }

        static PyObject *t_CRDConfiguration_getSystemRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getSystemRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getSystemRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSystemRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getTimingRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimingRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getTimingRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTimingRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_getTransponderRecord(t_CRDConfiguration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration result((jobject) NULL);
              OBJ_CALL(result = self->object.getTransponderRecord());
              return ::org::orekit::files::ilrs::t_CRDConfiguration$TransponderConfiguration::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getTransponderRecord(a0));
                return ::org::orekit::files::ilrs::t_CRDConfiguration$TransponderConfiguration::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTransponderRecord", args);
          return NULL;
        }

        static PyObject *t_CRDConfiguration_get__calibrationTargetRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationTargetRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__configurationRecordMap(t_CRDConfiguration *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getConfigurationRecordMap());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__detectorRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectorRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$DetectorConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__laserRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getLaserRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$LaserConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__lastSystemRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getLastSystemRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__meteorologicalRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeteorologicalRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__softwareRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getSoftwareRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SoftwareConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__systemConfigurationIds(t_CRDConfiguration *self, void *data)
        {
          ::java::util::Set value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationIds());
          return ::java::util::t_Set::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__systemConfigurationRecords(t_CRDConfiguration *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationRecords());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__systemRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$SystemConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__timingRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimingRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(value);
        }

        static PyObject *t_CRDConfiguration_get__transponderRecord(t_CRDConfiguration *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransponderRecord());
          return ::org::orekit::files::ilrs::t_CRDConfiguration$TransponderConfiguration::wrap_Object(value);
        }
      }
    }
  }
}

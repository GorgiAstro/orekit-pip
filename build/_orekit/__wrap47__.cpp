#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisFile.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisFile::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisFile::mids$ = NULL;
        bool PythonAttitudeEphemerisFile::live$ = false;

        jclass PythonAttitudeEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getSatellites_d6753b7055940a54] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisFile::PythonAttitudeEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonAttitudeEphemerisFile::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAttitudeEphemerisFile::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAttitudeEphemerisFile::pythonExtension(jlong a0) const
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
    namespace files {
      namespace general {
        static PyObject *t_PythonAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisFile_init_(t_PythonAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisFile_finalize(t_PythonAttitudeEphemerisFile *self);
        static PyObject *t_PythonAttitudeEphemerisFile_pythonExtension(t_PythonAttitudeEphemerisFile *self, PyObject *args);
        static jobject JNICALL t_PythonAttitudeEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAttitudeEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAttitudeEphemerisFile_get__self(t_PythonAttitudeEphemerisFile *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisFile, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFile, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisFile)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisFile_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisFile, t_PythonAttitudeEphemerisFile, PythonAttitudeEphemerisFile);

        void t_PythonAttitudeEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisFile), &PY_TYPE_DEF(PythonAttitudeEphemerisFile), module, "PythonAttitudeEphemerisFile", 1);
        }

        void t_PythonAttitudeEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFile), "class_", make_descriptor(PythonAttitudeEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFile), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFile), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisFile::initializeClass);
          JNINativeMethod methods[] = {
            { "getSatellites", "()Ljava/util/Map;", (void *) t_PythonAttitudeEphemerisFile_getSatellites0 },
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisFile_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisFile::wrap_Object(PythonAttitudeEphemerisFile(((t_PythonAttitudeEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisFile_init_(t_PythonAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisFile object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisFile());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisFile_finalize(t_PythonAttitudeEphemerisFile *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisFile_pythonExtension(t_PythonAttitudeEphemerisFile *self, PyObject *args)
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

        static jobject JNICALL t_PythonAttitudeEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFile::mids$[PythonAttitudeEphemerisFile::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::Map value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
          {
            throwTypeError("getSatellites", result);
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

        static void JNICALL t_PythonAttitudeEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFile::mids$[PythonAttitudeEphemerisFile::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisFile::mids$[PythonAttitudeEphemerisFile::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAttitudeEphemerisFile_get__self(t_PythonAttitudeEphemerisFile *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/PythonNRLMSISE00InputParameters.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonNRLMSISE00InputParameters::class$ = NULL;
          jmethodID *PythonNRLMSISE00InputParameters::mids$ = NULL;
          bool PythonNRLMSISE00InputParameters::live$ = false;

          jclass PythonNRLMSISE00InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonNRLMSISE00InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAp_e586dea4c0bad69b] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_getAverageFlux_e912d21057defe63] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getDailyFlux_e912d21057defe63] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
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

          PythonNRLMSISE00InputParameters::PythonNRLMSISE00InputParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonNRLMSISE00InputParameters::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonNRLMSISE00InputParameters::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonNRLMSISE00InputParameters::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_PythonNRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonNRLMSISE00InputParameters_init_(t_PythonNRLMSISE00InputParameters *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonNRLMSISE00InputParameters_finalize(t_PythonNRLMSISE00InputParameters *self);
          static PyObject *t_PythonNRLMSISE00InputParameters_pythonExtension(t_PythonNRLMSISE00InputParameters *self, PyObject *args);
          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getAp0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getAverageFlux1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getDailyFlux2(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonNRLMSISE00InputParameters_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonNRLMSISE00InputParameters_get__self(t_PythonNRLMSISE00InputParameters *self, void *data);
          static PyGetSetDef t_PythonNRLMSISE00InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_PythonNRLMSISE00InputParameters, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonNRLMSISE00InputParameters__methods_[] = {
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonNRLMSISE00InputParameters)[] = {
            { Py_tp_methods, t_PythonNRLMSISE00InputParameters__methods_ },
            { Py_tp_init, (void *) t_PythonNRLMSISE00InputParameters_init_ },
            { Py_tp_getset, t_PythonNRLMSISE00InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonNRLMSISE00InputParameters)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonNRLMSISE00InputParameters, t_PythonNRLMSISE00InputParameters, PythonNRLMSISE00InputParameters);

          void t_PythonNRLMSISE00InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonNRLMSISE00InputParameters), &PY_TYPE_DEF(PythonNRLMSISE00InputParameters), module, "PythonNRLMSISE00InputParameters", 1);
          }

          void t_PythonNRLMSISE00InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNRLMSISE00InputParameters), "class_", make_descriptor(PythonNRLMSISE00InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNRLMSISE00InputParameters), "wrapfn_", make_descriptor(t_PythonNRLMSISE00InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNRLMSISE00InputParameters), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonNRLMSISE00InputParameters::initializeClass);
            JNINativeMethod methods[] = {
              { "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonNRLMSISE00InputParameters_getAp0 },
              { "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonNRLMSISE00InputParameters_getAverageFlux1 },
              { "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonNRLMSISE00InputParameters_getDailyFlux2 },
              { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonNRLMSISE00InputParameters_getMaxDate3 },
              { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonNRLMSISE00InputParameters_getMinDate4 },
              { "pythonDecRef", "()V", (void *) t_PythonNRLMSISE00InputParameters_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonNRLMSISE00InputParameters::initializeClass, 1)))
              return NULL;
            return t_PythonNRLMSISE00InputParameters::wrap_Object(PythonNRLMSISE00InputParameters(((t_PythonNRLMSISE00InputParameters *) arg)->object.this$));
          }
          static PyObject *t_PythonNRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonNRLMSISE00InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonNRLMSISE00InputParameters_init_(t_PythonNRLMSISE00InputParameters *self, PyObject *args, PyObject *kwds)
          {
            PythonNRLMSISE00InputParameters object((jobject) NULL);

            INT_CALL(object = PythonNRLMSISE00InputParameters());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_finalize(t_PythonNRLMSISE00InputParameters *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_pythonExtension(t_PythonNRLMSISE00InputParameters *self, PyObject *args)
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

          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getAp0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getAp", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("getAp", result);
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

          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getAverageFlux1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getAverageFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAverageFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getDailyFlux2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getDailyFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getDailyFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
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

          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
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

          static void JNICALL t_PythonNRLMSISE00InputParameters_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_get__self(t_PythonNRLMSISE00InputParameters *self, void *data)
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
#include "org/orekit/forces/radiation/IsotropicRadiationCNES95Convention.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *IsotropicRadiationCNES95Convention::class$ = NULL;
        jmethodID *IsotropicRadiationCNES95Convention::mids$ = NULL;
        bool IsotropicRadiationCNES95Convention::live$ = false;

        jclass IsotropicRadiationCNES95Convention::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/IsotropicRadiationCNES95Convention");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getRadiationParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_397d87bcad93c626] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_radiationPressureAcceleration_5efc9e86ed57c6dd] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicRadiationCNES95Convention::IsotropicRadiationCNES95Convention(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        ::java::util::List IsotropicRadiationCNES95Convention::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_a6156df500549a58]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicRadiationCNES95Convention::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_397d87bcad93c626], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicRadiationCNES95Convention::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_5efc9e86ed57c6dd], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_IsotropicRadiationCNES95Convention_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicRadiationCNES95Convention_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicRadiationCNES95Convention_init_(t_IsotropicRadiationCNES95Convention *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicRadiationCNES95Convention_getRadiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self);
        static PyObject *t_IsotropicRadiationCNES95Convention_radiationPressureAcceleration(t_IsotropicRadiationCNES95Convention *self, PyObject *args);
        static PyObject *t_IsotropicRadiationCNES95Convention_get__radiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self, void *data);
        static PyGetSetDef t_IsotropicRadiationCNES95Convention__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicRadiationCNES95Convention, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicRadiationCNES95Convention__methods_[] = {
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicRadiationCNES95Convention)[] = {
          { Py_tp_methods, t_IsotropicRadiationCNES95Convention__methods_ },
          { Py_tp_init, (void *) t_IsotropicRadiationCNES95Convention_init_ },
          { Py_tp_getset, t_IsotropicRadiationCNES95Convention__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicRadiationCNES95Convention)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicRadiationCNES95Convention, t_IsotropicRadiationCNES95Convention, IsotropicRadiationCNES95Convention);

        void t_IsotropicRadiationCNES95Convention::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicRadiationCNES95Convention), &PY_TYPE_DEF(IsotropicRadiationCNES95Convention), module, "IsotropicRadiationCNES95Convention", 0);
        }

        void t_IsotropicRadiationCNES95Convention::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationCNES95Convention), "class_", make_descriptor(IsotropicRadiationCNES95Convention::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationCNES95Convention), "wrapfn_", make_descriptor(t_IsotropicRadiationCNES95Convention::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationCNES95Convention), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicRadiationCNES95Convention::initializeClass, 1)))
            return NULL;
          return t_IsotropicRadiationCNES95Convention::wrap_Object(IsotropicRadiationCNES95Convention(((t_IsotropicRadiationCNES95Convention *) arg)->object.this$));
        }
        static PyObject *t_IsotropicRadiationCNES95Convention_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicRadiationCNES95Convention::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicRadiationCNES95Convention_init_(t_IsotropicRadiationCNES95Convention *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          IsotropicRadiationCNES95Convention object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = IsotropicRadiationCNES95Convention(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_getRadiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_radiationPressureAcceleration(t_IsotropicRadiationCNES95Convention *self, PyObject *args)
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

        static PyObject *t_IsotropicRadiationCNES95Convention_get__radiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalCovarianceMetadataKey::class$ = NULL;
            jmethodID *AdditionalCovarianceMetadataKey::mids$ = NULL;
            bool AdditionalCovarianceMetadataKey::live$ = false;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::COMMENT = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::CSCALE_FACTOR = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MAX = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MIN = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_POSITION = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_VELOCITY = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::DENSITY_FORECAST_UNCERTAINTY = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::SCREENING_DATA_SOURCE = NULL;

            jclass AdditionalCovarianceMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_f1c734b2f595deb9] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)Z");
                mids$[mid_valueOf_7c038f6189564cad] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;");
                mids$[mid_values_b4ae599c4faee480] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                CSCALE_FACTOR = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "CSCALE_FACTOR", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                CSCALE_FACTOR_MAX = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "CSCALE_FACTOR_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                CSCALE_FACTOR_MIN = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "CSCALE_FACTOR_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                DCP_SENSITIVITY_VECTOR_POSITION = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "DCP_SENSITIVITY_VECTOR_POSITION", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                DCP_SENSITIVITY_VECTOR_VELOCITY = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "DCP_SENSITIVITY_VECTOR_VELOCITY", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                DENSITY_FORECAST_UNCERTAINTY = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "DENSITY_FORECAST_UNCERTAINTY", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                SCREENING_DATA_SOURCE = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "SCREENING_DATA_SOURCE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdditionalCovarianceMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_f1c734b2f595deb9], a0.this$, a1.this$, a2.this$);
            }

            AdditionalCovarianceMetadataKey AdditionalCovarianceMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdditionalCovarianceMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7c038f6189564cad], a0.this$));
            }

            JArray< AdditionalCovarianceMetadataKey > AdditionalCovarianceMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdditionalCovarianceMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_b4ae599c4faee480]));
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
            static PyObject *t_AdditionalCovarianceMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadataKey_of_(t_AdditionalCovarianceMetadataKey *self, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadataKey_process(t_AdditionalCovarianceMetadataKey *self, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadataKey_values(PyTypeObject *type);
            static PyObject *t_AdditionalCovarianceMetadataKey_get__parameters_(t_AdditionalCovarianceMetadataKey *self, void *data);
            static PyGetSetDef t_AdditionalCovarianceMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdditionalCovarianceMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalCovarianceMetadataKey__methods_[] = {
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalCovarianceMetadataKey)[] = {
              { Py_tp_methods, t_AdditionalCovarianceMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdditionalCovarianceMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalCovarianceMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdditionalCovarianceMetadataKey, t_AdditionalCovarianceMetadataKey, AdditionalCovarianceMetadataKey);
            PyObject *t_AdditionalCovarianceMetadataKey::wrap_Object(const AdditionalCovarianceMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalCovarianceMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalCovarianceMetadataKey *self = (t_AdditionalCovarianceMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdditionalCovarianceMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalCovarianceMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalCovarianceMetadataKey *self = (t_AdditionalCovarianceMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdditionalCovarianceMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalCovarianceMetadataKey), &PY_TYPE_DEF(AdditionalCovarianceMetadataKey), module, "AdditionalCovarianceMetadataKey", 0);
            }

            void t_AdditionalCovarianceMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "class_", make_descriptor(AdditionalCovarianceMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "wrapfn_", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdditionalCovarianceMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "COMMENT", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "CSCALE_FACTOR", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::CSCALE_FACTOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "CSCALE_FACTOR_MAX", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "CSCALE_FACTOR_MIN", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "DCP_SENSITIVITY_VECTOR_POSITION", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_POSITION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "DCP_SENSITIVITY_VECTOR_VELOCITY", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_VELOCITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "DENSITY_FORECAST_UNCERTAINTY", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::DENSITY_FORECAST_UNCERTAINTY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "SCREENING_DATA_SOURCE", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::SCREENING_DATA_SOURCE)));
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalCovarianceMetadataKey::initializeClass, 1)))
                return NULL;
              return t_AdditionalCovarianceMetadataKey::wrap_Object(AdditionalCovarianceMetadataKey(((t_AdditionalCovarianceMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_AdditionalCovarianceMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalCovarianceMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_of_(t_AdditionalCovarianceMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_process(t_AdditionalCovarianceMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdditionalCovarianceMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadataKey::valueOf(a0));
                return t_AdditionalCovarianceMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_values(PyTypeObject *type)
            {
              JArray< AdditionalCovarianceMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdditionalCovarianceMetadataKey::wrap_jobject);
            }
            static PyObject *t_AdditionalCovarianceMetadataKey_get__parameters_(t_AdditionalCovarianceMetadataKey *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative1::class$ = NULL;
        jmethodID *FieldUnivariateDerivative1::mids$ = NULL;
        bool FieldUnivariateDerivative1::live$ = false;

        jclass FieldUnivariateDerivative1::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d5582e6a53cddd0c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_46c20bc1304e9cc4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_abs_a84d235aa48b245c] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_acos_a84d235aa48b245c] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_acosh_a84d235aa48b245c] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_add_43201a404bf33516] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_add_e529ce7f25b9cc55] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_add_e4aef75f3567a177] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_asin_a84d235aa48b245c] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_asinh_a84d235aa48b245c] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_atan_a84d235aa48b245c] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_atan2_43201a404bf33516] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_atanh_a84d235aa48b245c] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_cbrt_a84d235aa48b245c] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_ceil_a84d235aa48b245c] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_compose_03cb06248c5dc3a8] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_copySign_43201a404bf33516] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_copySign_e529ce7f25b9cc55] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_copySign_e4aef75f3567a177] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_cos_a84d235aa48b245c] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_cosh_a84d235aa48b245c] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_divide_43201a404bf33516] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_divide_e529ce7f25b9cc55] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_divide_e4aef75f3567a177] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_a84d235aa48b245c] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_expm1_a84d235aa48b245c] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_floor_a84d235aa48b245c] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_getDerivative_d0960d09d84b1c1d] = env->getMethodID(cls, "getDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getExponent_f2f64475e4580546] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_d6c958162ab19a92] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field;");
            mids$[mid_getFirstDerivative_e6d4d3215c30992a] = env->getMethodID(cls, "getFirstDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_a84d235aa48b245c] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_e6d4d3215c30992a] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValueField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_43201a404bf33516] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_cb86e17a4191bbcb] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_a3f1ea6054ae9b02] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_760a3ac15aeab33f] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_60f84e6d6b966eea] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_c11798410b59d9db] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_61709061c6aa21c2] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_a0b05396980ec758] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_b4315b8437eb9c81] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_2608594f92cee8b0] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_a4d6bc5920210309] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_log_a84d235aa48b245c] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_log10_a84d235aa48b245c] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_log1p_a84d235aa48b245c] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_43201a404bf33516] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_e529ce7f25b9cc55] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_3c70aeb28e268031] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_e4aef75f3567a177] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_negate_a84d235aa48b245c] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_newInstance_e529ce7f25b9cc55] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_43201a404bf33516] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_e529ce7f25b9cc55] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_3c70aeb28e268031] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_63bf2e430dfc68c4] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_reciprocal_a84d235aa48b245c] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_remainder_43201a404bf33516] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_remainder_e529ce7f25b9cc55] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_remainder_e4aef75f3567a177] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_rint_a84d235aa48b245c] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_rootN_3c70aeb28e268031] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_scalb_3c70aeb28e268031] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sign_a84d235aa48b245c] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sin_a84d235aa48b245c] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_a84d235aa48b245c] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_a84d235aa48b245c] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_subtract_43201a404bf33516] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_subtract_e529ce7f25b9cc55] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_subtract_e4aef75f3567a177] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_tan_a84d235aa48b245c] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_tanh_a84d235aa48b245c] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_taylor_cc0a3d6abf820939] = env->getMethodID(cls, "taylor", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_d3398190482814dc] = env->getMethodID(cls, "taylor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_a84d235aa48b245c] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_toDerivativeStructure_7208bb4259086f92] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_a84d235aa48b245c] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_ulp_a84d235aa48b245c] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldUnivariateDerivative1::FieldUnivariateDerivative1(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_d5582e6a53cddd0c, a0.this$)) {}

        FieldUnivariateDerivative1::FieldUnivariateDerivative1(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_46c20bc1304e9cc4, a0.this$, a1.this$)) {}

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::abs() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_abs_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::acos() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acos_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::acosh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acosh_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::add(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_43201a404bf33516], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::add(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_e529ce7f25b9cc55], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_e4aef75f3567a177], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::asin() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asin_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::asinh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asinh_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::atan() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::atan2(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan2_43201a404bf33516], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::atanh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atanh_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::cbrt() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cbrt_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::ceil() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ceil_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::compose(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_compose_03cb06248c5dc3a8], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::copySign(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_43201a404bf33516], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::copySign(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_e529ce7f25b9cc55], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_e4aef75f3567a177], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::cos() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cos_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::cosh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cosh_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::divide(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_43201a404bf33516], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::divide(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_e529ce7f25b9cc55], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_e4aef75f3567a177], a0.this$));
        }

        jboolean FieldUnivariateDerivative1::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::exp() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_exp_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::expm1() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_expm1_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::floor() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_floor_a84d235aa48b245c]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::getDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_d0960d09d84b1c1d], a0));
        }

        jint FieldUnivariateDerivative1::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_f2f64475e4580546]);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field FieldUnivariateDerivative1::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field(env->callObjectMethod(this$, mids$[mid_getField_d6c958162ab19a92]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::getFirstDerivative() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFirstDerivative_e6d4d3215c30992a]));
        }

        jint FieldUnivariateDerivative1::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::getPi() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getPi_a84d235aa48b245c]));
        }

        jdouble FieldUnivariateDerivative1::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_e6d4d3215c30992a]));
        }

        ::org::hipparchus::Field FieldUnivariateDerivative1::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_70b4bbd3fa378d6b]));
        }

        jint FieldUnivariateDerivative1::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::hypot(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_hypot_43201a404bf33516], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const JArray< jdouble > & a0, const JArray< FieldUnivariateDerivative1 > & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_cb86e17a4191bbcb], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldUnivariateDerivative1 > & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_a3f1ea6054ae9b02], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const JArray< FieldUnivariateDerivative1 > & a0, const JArray< FieldUnivariateDerivative1 > & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_760a3ac15aeab33f], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const FieldUnivariateDerivative1 & a0, const FieldUnivariateDerivative1 & a1, const FieldUnivariateDerivative1 & a2, const FieldUnivariateDerivative1 & a3) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_60f84e6d6b966eea], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(jdouble a0, const FieldUnivariateDerivative1 & a1, jdouble a2, const FieldUnivariateDerivative1 & a3) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_c11798410b59d9db], a0, a1.this$, a2, a3.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const FieldUnivariateDerivative1 & a0, const FieldUnivariateDerivative1 & a1, const FieldUnivariateDerivative1 & a2, const FieldUnivariateDerivative1 & a3, const FieldUnivariateDerivative1 & a4, const FieldUnivariateDerivative1 & a5) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_61709061c6aa21c2], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(jdouble a0, const FieldUnivariateDerivative1 & a1, jdouble a2, const FieldUnivariateDerivative1 & a3, jdouble a4, const FieldUnivariateDerivative1 & a5) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_a0b05396980ec758], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldUnivariateDerivative1 & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldUnivariateDerivative1 & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldUnivariateDerivative1 & a5) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_b4315b8437eb9c81], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const FieldUnivariateDerivative1 & a0, const FieldUnivariateDerivative1 & a1, const FieldUnivariateDerivative1 & a2, const FieldUnivariateDerivative1 & a3, const FieldUnivariateDerivative1 & a4, const FieldUnivariateDerivative1 & a5, const FieldUnivariateDerivative1 & a6, const FieldUnivariateDerivative1 & a7) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_2608594f92cee8b0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(jdouble a0, const FieldUnivariateDerivative1 & a1, jdouble a2, const FieldUnivariateDerivative1 & a3, jdouble a4, const FieldUnivariateDerivative1 & a5, jdouble a6, const FieldUnivariateDerivative1 & a7) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_a4d6bc5920210309], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::log() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::log10() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log10_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::log1p() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log1p_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_43201a404bf33516], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_e529ce7f25b9cc55], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_3c70aeb28e268031], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_e4aef75f3567a177], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::negate() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_negate_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::newInstance(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_newInstance_e529ce7f25b9cc55], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_43201a404bf33516], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_e529ce7f25b9cc55], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_3c70aeb28e268031], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(jdouble a0, const FieldUnivariateDerivative1 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative1(env->callStaticObjectMethod(cls, mids$[mid_pow_63bf2e430dfc68c4], a0, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::reciprocal() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_reciprocal_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::remainder(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_43201a404bf33516], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::remainder(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_e529ce7f25b9cc55], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_e4aef75f3567a177], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::rint() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rint_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::rootN(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rootN_3c70aeb28e268031], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::scalb(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_scalb_3c70aeb28e268031], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sign() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sign_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sin() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sin_a84d235aa48b245c]));
        }

        ::org::hipparchus::util::FieldSinCos FieldUnivariateDerivative1::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sinh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sinh_a84d235aa48b245c]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldUnivariateDerivative1::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sqrt() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sqrt_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::subtract(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_43201a404bf33516], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::subtract(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_e529ce7f25b9cc55], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_e4aef75f3567a177], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::tan() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tan_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::tanh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tanh_a84d235aa48b245c]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::taylor(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_cc0a3d6abf820939], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::taylor(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_d3398190482814dc], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::toDegrees() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toDegrees_a84d235aa48b245c]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldUnivariateDerivative1::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_7208bb4259086f92]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::toRadians() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toRadians_a84d235aa48b245c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::ulp() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ulp_a84d235aa48b245c]));
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
        static PyObject *t_FieldUnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1_of_(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static int t_FieldUnivariateDerivative1_init_(t_FieldUnivariateDerivative1 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldUnivariateDerivative1_abs(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_acos(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_acosh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_add(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_asin(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_asinh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_atan(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_atan2(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_atanh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_cbrt(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_ceil(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_compose(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_copySign(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_cos(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_cosh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_divide(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_equals(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_exp(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_expm1(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_floor(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getDerivative(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getExponent(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getField(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getFirstDerivative(t_FieldUnivariateDerivative1 *self);
        static PyObject *t_FieldUnivariateDerivative1_getOrder(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getPi(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getReal(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getValue(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getValueField(t_FieldUnivariateDerivative1 *self);
        static PyObject *t_FieldUnivariateDerivative1_hashCode(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_hypot(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_linearCombination(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_log(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_log10(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_log1p(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_multiply(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_negate(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_newInstance(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_pow(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_reciprocal(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_remainder(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_rint(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_rootN(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_scalb(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sign(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sin(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sinCos(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sinh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sinhCosh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sqrt(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_subtract(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_tan(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_tanh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_taylor(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_toDegrees(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_toDerivativeStructure(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_toRadians(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_ulp(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_get__exponent(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__field(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__firstDerivative(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__order(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__pi(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__real(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__value(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__valueField(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__parameters_(t_FieldUnivariateDerivative1 *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative1__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, exponent),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, field),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, firstDerivative),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, order),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, pi),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, real),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, value),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, valueField),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative1__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, abs, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, acos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, acosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, asin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, asinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, atan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, atan2, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, atanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, ceil, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, exp, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, expm1, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, floor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getField, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getPi, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getReal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getValue, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, hypot, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, log, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, log10, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, log1p, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, negate, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, rint, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, rootN, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, scalb, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, tan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, tanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative1)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative1__methods_ },
          { Py_tp_init, (void *) t_FieldUnivariateDerivative1_init_ },
          { Py_tp_getset, t_FieldUnivariateDerivative1__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative1)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative1, t_FieldUnivariateDerivative1, FieldUnivariateDerivative1);
        PyObject *t_FieldUnivariateDerivative1::wrap_Object(const FieldUnivariateDerivative1& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1 *self = (t_FieldUnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative1::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1 *self = (t_FieldUnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative1::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative1), &PY_TYPE_DEF(FieldUnivariateDerivative1), module, "FieldUnivariateDerivative1", 0);
        }

        void t_FieldUnivariateDerivative1::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1), "class_", make_descriptor(FieldUnivariateDerivative1::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative1::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative1::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative1::wrap_Object(FieldUnivariateDerivative1(((t_FieldUnivariateDerivative1 *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative1::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative1_of_(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldUnivariateDerivative1_init_(t_FieldUnivariateDerivative1 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative1(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative1(a0, a1));
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

        static PyObject *t_FieldUnivariateDerivative1_abs(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_acos(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_acosh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_add(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_asin(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_asinh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_atan(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_atan2(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_atanh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_cbrt(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_ceil(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_compose(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0, a1));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1_copySign(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_cos(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_cosh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_divide(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_equals(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_exp(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_expm1(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_floor(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getDerivative(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getExponent(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getField(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1Field::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getFirstDerivative(t_FieldUnivariateDerivative1 *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstDerivative());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative1_getOrder(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getPi(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getReal(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getValue(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getValueField(t_FieldUnivariateDerivative1 *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative1_hashCode(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_hypot(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_linearCombination(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldUnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldUnivariateDerivative1 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, t_FieldUnivariateDerivative1::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, t_FieldUnivariateDerivative1::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &p4, t_FieldUnivariateDerivative1::parameters_, &a5, &p5, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 a6((jobject) NULL);
              PyTypeObject **p6;
              FieldUnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, t_FieldUnivariateDerivative1::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &p4, t_FieldUnivariateDerivative1::parameters_, &a5, &p5, t_FieldUnivariateDerivative1::parameters_, &a6, &p6, t_FieldUnivariateDerivative1::parameters_, &a7, &p7, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldUnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative1::parameters_, &a6, &a7, &p7, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_log(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_log10(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_log1p(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_multiply(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_negate(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_newInstance(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_pow(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative1 a1((jobject) NULL);
          PyTypeObject **p1;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1::pow(a0, a1));
            return t_FieldUnivariateDerivative1::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1_reciprocal(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_remainder(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_rint(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_rootN(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_scalb(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sign(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sin(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sinCos(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sinh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sinhCosh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sqrt(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_subtract(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_tan(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_tanh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_taylor(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1_toDegrees(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_toDerivativeStructure(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_toRadians(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_ulp(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative1_get__parameters_(t_FieldUnivariateDerivative1 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative1_get__exponent(t_FieldUnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__field(t_FieldUnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1Field::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__firstDerivative(t_FieldUnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstDerivative());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__order(t_FieldUnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__pi(t_FieldUnivariateDerivative1 *self, void *data)
        {
          FieldUnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldUnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__real(t_FieldUnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__value(t_FieldUnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__valueField(t_FieldUnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *NavigationSystem::class$ = NULL;
          jmethodID *NavigationSystem::mids$ = NULL;
          bool NavigationSystem::live$ = false;
          NavigationSystem *NavigationSystem::BDS = NULL;
          NavigationSystem *NavigationSystem::EMPTY = NULL;
          NavigationSystem *NavigationSystem::GAL = NULL;
          NavigationSystem *NavigationSystem::GLO = NULL;
          NavigationSystem *NavigationSystem::GPS = NULL;
          NavigationSystem *NavigationSystem::QZS = NULL;
          NavigationSystem *NavigationSystem::SBAS = NULL;

          jclass NavigationSystem::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/NavigationSystem");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getNavigationSystem_c510a104a52497aa] = env->getStaticMethodID(cls, "getNavigationSystem", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/NavigationSystem;");
              mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_valueOf_c510a104a52497aa] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/NavigationSystem;");
              mids$[mid_values_6e8c6cc669f12c23] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/NavigationSystem;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BDS = new NavigationSystem(env->getStaticObjectField(cls, "BDS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              EMPTY = new NavigationSystem(env->getStaticObjectField(cls, "EMPTY", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              GAL = new NavigationSystem(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              GLO = new NavigationSystem(env->getStaticObjectField(cls, "GLO", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              GPS = new NavigationSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              QZS = new NavigationSystem(env->getStaticObjectField(cls, "QZS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              SBAS = new NavigationSystem(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/gnss/metric/ntrip/NavigationSystem;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NavigationSystem NavigationSystem::getNavigationSystem(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return NavigationSystem(env->callStaticObjectMethod(cls, mids$[mid_getNavigationSystem_c510a104a52497aa], a0.this$));
          }

          ::java::lang::String NavigationSystem::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
          }

          NavigationSystem NavigationSystem::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return NavigationSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c510a104a52497aa], a0.this$));
          }

          JArray< NavigationSystem > NavigationSystem::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< NavigationSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_6e8c6cc669f12c23]));
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
          static PyObject *t_NavigationSystem_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NavigationSystem_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NavigationSystem_of_(t_NavigationSystem *self, PyObject *args);
          static PyObject *t_NavigationSystem_getNavigationSystem(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NavigationSystem_toString(t_NavigationSystem *self, PyObject *args);
          static PyObject *t_NavigationSystem_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_NavigationSystem_values(PyTypeObject *type);
          static PyObject *t_NavigationSystem_get__parameters_(t_NavigationSystem *self, void *data);
          static PyGetSetDef t_NavigationSystem__fields_[] = {
            DECLARE_GET_FIELD(t_NavigationSystem, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NavigationSystem__methods_[] = {
            DECLARE_METHOD(t_NavigationSystem, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, of_, METH_VARARGS),
            DECLARE_METHOD(t_NavigationSystem, getNavigationSystem, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, toString, METH_VARARGS),
            DECLARE_METHOD(t_NavigationSystem, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_NavigationSystem, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NavigationSystem)[] = {
            { Py_tp_methods, t_NavigationSystem__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NavigationSystem__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NavigationSystem)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(NavigationSystem, t_NavigationSystem, NavigationSystem);
          PyObject *t_NavigationSystem::wrap_Object(const NavigationSystem& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NavigationSystem::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NavigationSystem *self = (t_NavigationSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NavigationSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NavigationSystem::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NavigationSystem *self = (t_NavigationSystem *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NavigationSystem::install(PyObject *module)
          {
            installType(&PY_TYPE(NavigationSystem), &PY_TYPE_DEF(NavigationSystem), module, "NavigationSystem", 0);
          }

          void t_NavigationSystem::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "class_", make_descriptor(NavigationSystem::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "wrapfn_", make_descriptor(t_NavigationSystem::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "boxfn_", make_descriptor(boxObject));
            env->getClass(NavigationSystem::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "BDS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::BDS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "EMPTY", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::EMPTY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "GAL", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::GAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "GLO", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::GLO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "GPS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::GPS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "QZS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::QZS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NavigationSystem), "SBAS", make_descriptor(t_NavigationSystem::wrap_Object(*NavigationSystem::SBAS)));
          }

          static PyObject *t_NavigationSystem_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NavigationSystem::initializeClass, 1)))
              return NULL;
            return t_NavigationSystem::wrap_Object(NavigationSystem(((t_NavigationSystem *) arg)->object.this$));
          }
          static PyObject *t_NavigationSystem_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NavigationSystem::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NavigationSystem_of_(t_NavigationSystem *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NavigationSystem_getNavigationSystem(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            NavigationSystem result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::NavigationSystem::getNavigationSystem(a0));
              return t_NavigationSystem::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNavigationSystem", arg);
            return NULL;
          }

          static PyObject *t_NavigationSystem_toString(t_NavigationSystem *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(NavigationSystem), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_NavigationSystem_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            NavigationSystem result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::NavigationSystem::valueOf(a0));
              return t_NavigationSystem::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_NavigationSystem_values(PyTypeObject *type)
          {
            JArray< NavigationSystem > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::NavigationSystem::values());
            return JArray<jobject>(result.this$).wrap(t_NavigationSystem::wrap_jobject);
          }
          static PyObject *t_NavigationSystem_get__parameters_(t_NavigationSystem *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunctionNewtonForm::class$ = NULL;
        jmethodID *PolynomialFunctionNewtonForm::mids$ = NULL;
        bool PolynomialFunctionNewtonForm::live$ = false;

        jclass PolynomialFunctionNewtonForm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0d03c8a1d7f56f02] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_degree_f2f64475e4580546] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_evaluate_568f42d2326d41b5] = env->getStaticMethodID(cls, "evaluate", "([D[DD)D");
            mids$[mid_getCenters_7cdc325af0834901] = env->getMethodID(cls, "getCenters", "()[D");
            mids$[mid_getCoefficients_7cdc325af0834901] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_getNewtonCoefficients_7cdc325af0834901] = env->getMethodID(cls, "getNewtonCoefficients", "()[D");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_d3398190482814dc] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_computeCoefficients_7ae3461a92a43152] = env->getMethodID(cls, "computeCoefficients", "()V");
            mids$[mid_verifyInputArray_0d03c8a1d7f56f02] = env->getStaticMethodID(cls, "verifyInputArray", "([D[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunctionNewtonForm::PolynomialFunctionNewtonForm(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d03c8a1d7f56f02, a0.this$, a1.this$)) {}

        jint PolynomialFunctionNewtonForm::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_f2f64475e4580546]);
        }

        jdouble PolynomialFunctionNewtonForm::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_evaluate_568f42d2326d41b5], a0.this$, a1.this$, a2);
        }

        JArray< jdouble > PolynomialFunctionNewtonForm::getCenters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCenters_7cdc325af0834901]));
        }

        JArray< jdouble > PolynomialFunctionNewtonForm::getCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_7cdc325af0834901]));
        }

        JArray< jdouble > PolynomialFunctionNewtonForm::getNewtonCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNewtonCoefficients_7cdc325af0834901]));
        }

        jdouble PolynomialFunctionNewtonForm::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialFunctionNewtonForm::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_d3398190482814dc], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::Derivative PolynomialFunctionNewtonForm::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
      namespace polynomials {
        static PyObject *t_PolynomialFunctionNewtonForm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunctionNewtonForm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunctionNewtonForm_init_(t_PolynomialFunctionNewtonForm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunctionNewtonForm_degree(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_evaluate(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialFunctionNewtonForm_getCenters(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_getCoefficients(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_getNewtonCoefficients(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_value(t_PolynomialFunctionNewtonForm *self, PyObject *args);
        static PyObject *t_PolynomialFunctionNewtonForm_get__centers(t_PolynomialFunctionNewtonForm *self, void *data);
        static PyObject *t_PolynomialFunctionNewtonForm_get__coefficients(t_PolynomialFunctionNewtonForm *self, void *data);
        static PyObject *t_PolynomialFunctionNewtonForm_get__newtonCoefficients(t_PolynomialFunctionNewtonForm *self, void *data);
        static PyGetSetDef t_PolynomialFunctionNewtonForm__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialFunctionNewtonForm, centers),
          DECLARE_GET_FIELD(t_PolynomialFunctionNewtonForm, coefficients),
          DECLARE_GET_FIELD(t_PolynomialFunctionNewtonForm, newtonCoefficients),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialFunctionNewtonForm__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, degree, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, evaluate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, getCenters, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, getNewtonCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunctionNewtonForm)[] = {
          { Py_tp_methods, t_PolynomialFunctionNewtonForm__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunctionNewtonForm_init_ },
          { Py_tp_getset, t_PolynomialFunctionNewtonForm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunctionNewtonForm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunctionNewtonForm, t_PolynomialFunctionNewtonForm, PolynomialFunctionNewtonForm);

        void t_PolynomialFunctionNewtonForm::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunctionNewtonForm), &PY_TYPE_DEF(PolynomialFunctionNewtonForm), module, "PolynomialFunctionNewtonForm", 0);
        }

        void t_PolynomialFunctionNewtonForm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionNewtonForm), "class_", make_descriptor(PolynomialFunctionNewtonForm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionNewtonForm), "wrapfn_", make_descriptor(t_PolynomialFunctionNewtonForm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionNewtonForm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunctionNewtonForm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunctionNewtonForm::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunctionNewtonForm::wrap_Object(PolynomialFunctionNewtonForm(((t_PolynomialFunctionNewtonForm *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunctionNewtonForm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunctionNewtonForm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunctionNewtonForm_init_(t_PolynomialFunctionNewtonForm *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          PolynomialFunctionNewtonForm object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = PolynomialFunctionNewtonForm(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialFunctionNewtonForm_degree(t_PolynomialFunctionNewtonForm *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialFunctionNewtonForm_evaluate(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm::evaluate(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "evaluate", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionNewtonForm_getCenters(t_PolynomialFunctionNewtonForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenters());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_getCoefficients(t_PolynomialFunctionNewtonForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_getNewtonCoefficients(t_PolynomialFunctionNewtonForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewtonCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_value(t_PolynomialFunctionNewtonForm *self, PyObject *args)
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

        static PyObject *t_PolynomialFunctionNewtonForm_get__centers(t_PolynomialFunctionNewtonForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenters());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_get__coefficients(t_PolynomialFunctionNewtonForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_get__newtonCoefficients(t_PolynomialFunctionNewtonForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewtonCoefficients());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *StationDisplacement::class$ = NULL;
          jmethodID *StationDisplacement::mids$ = NULL;
          bool StationDisplacement::live$ = false;

          jclass StationDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/StationDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_displacement_90801f07349d77e7] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D StationDisplacement::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_90801f07349d77e7], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_StationDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StationDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StationDisplacement_displacement(t_StationDisplacement *self, PyObject *args);

          static PyMethodDef t_StationDisplacement__methods_[] = {
            DECLARE_METHOD(t_StationDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StationDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StationDisplacement, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StationDisplacement)[] = {
            { Py_tp_methods, t_StationDisplacement__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StationDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StationDisplacement, t_StationDisplacement, StationDisplacement);

          void t_StationDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(StationDisplacement), &PY_TYPE_DEF(StationDisplacement), module, "StationDisplacement", 0);
          }

          void t_StationDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StationDisplacement), "class_", make_descriptor(StationDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StationDisplacement), "wrapfn_", make_descriptor(t_StationDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StationDisplacement), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StationDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StationDisplacement::initializeClass, 1)))
              return NULL;
            return t_StationDisplacement::wrap_Object(StationDisplacement(((t_StationDisplacement *) arg)->object.this$));
          }
          static PyObject *t_StationDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StationDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_StationDisplacement_displacement(t_StationDisplacement *self, PyObject *args)
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
#include "org/orekit/files/sinex/SinexLoader.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/sinex/DcbStation.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/files/sinex/SinexEopEntry.h"
#include "java/util/SortedSet.h"
#include "org/orekit/files/sinex/Station.h"
#include "org/orekit/files/sinex/DcbSatellite.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *SinexLoader::class$ = NULL;
        jmethodID *SinexLoader::mids$ = NULL;
        bool SinexLoader::live$ = false;

        jclass SinexLoader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/SinexLoader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_init$_178426610ec237d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
            mids$[mid_init$_a9fa68858cbe60c0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScales;)V");
            mids$[mid_init$_4573d2669211524d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;)V");
            mids$[mid_fillHistory_28ed459287c4a62f] = env->getMethodID(cls, "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V");
            mids$[mid_getCreationDate_aaa854c403487cf3] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDcbSatellite_c577703e59da0bf9] = env->getMethodID(cls, "getDcbSatellite", "(Ljava/lang/String;)Lorg/orekit/files/sinex/DcbSatellite;");
            mids$[mid_getDcbStation_f72313b3c98d0274] = env->getMethodID(cls, "getDcbStation", "(Ljava/lang/String;)Lorg/orekit/files/sinex/DcbStation;");
            mids$[mid_getFileEpochEndTime_aaa854c403487cf3] = env->getMethodID(cls, "getFileEpochEndTime", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getFileEpochStartTime_aaa854c403487cf3] = env->getMethodID(cls, "getFileEpochStartTime", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getITRFVersion_f157e1cf87d45e2d] = env->getMethodID(cls, "getITRFVersion", "()Lorg/orekit/frames/ITRFVersion;");
            mids$[mid_getParsedEop_d6753b7055940a54] = env->getMethodID(cls, "getParsedEop", "()Ljava/util/Map;");
            mids$[mid_getStation_a2bc0fa19a96e2ee] = env->getMethodID(cls, "getStation", "(Ljava/lang/String;)Lorg/orekit/files/sinex/Station;");
            mids$[mid_getStations_d6753b7055940a54] = env->getMethodID(cls, "getStations", "()Ljava/util/Map;");
            mids$[mid_setITRFVersion_0a2a1ac2721c0336] = env->getMethodID(cls, "setITRFVersion", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SinexLoader::SinexLoader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

        SinexLoader::SinexLoader(const ::org::orekit::data::DataSource & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_178426610ec237d4, a0.this$)) {}

        SinexLoader::SinexLoader(const ::org::orekit::data::DataSource & a0, const ::org::orekit::time::TimeScales & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a9fa68858cbe60c0, a0.this$, a1.this$)) {}

        SinexLoader::SinexLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScales & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4573d2669211524d, a0.this$, a1.this$, a2.this$)) {}

        void SinexLoader::fillHistory(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::java::util::SortedSet & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_fillHistory_28ed459287c4a62f], a0.this$, a1.this$);
        }

        ::org::orekit::time::AbsoluteDate SinexLoader::getCreationDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_aaa854c403487cf3]));
        }

        ::org::orekit::files::sinex::DcbSatellite SinexLoader::getDcbSatellite(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sinex::DcbSatellite(env->callObjectMethod(this$, mids$[mid_getDcbSatellite_c577703e59da0bf9], a0.this$));
        }

        ::org::orekit::files::sinex::DcbStation SinexLoader::getDcbStation(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sinex::DcbStation(env->callObjectMethod(this$, mids$[mid_getDcbStation_f72313b3c98d0274], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SinexLoader::getFileEpochEndTime() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFileEpochEndTime_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate SinexLoader::getFileEpochStartTime() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFileEpochStartTime_aaa854c403487cf3]));
        }

        ::org::orekit::frames::ITRFVersion SinexLoader::getITRFVersion() const
        {
          return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFVersion_f157e1cf87d45e2d]));
        }

        ::java::util::Map SinexLoader::getParsedEop() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getParsedEop_d6753b7055940a54]));
        }

        ::org::orekit::files::sinex::Station SinexLoader::getStation(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sinex::Station(env->callObjectMethod(this$, mids$[mid_getStation_a2bc0fa19a96e2ee], a0.this$));
        }

        ::java::util::Map SinexLoader::getStations() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getStations_d6753b7055940a54]));
        }

        void SinexLoader::setITRFVersion(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setITRFVersion_0a2a1ac2721c0336], a0);
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
      namespace sinex {
        static PyObject *t_SinexLoader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SinexLoader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SinexLoader_init_(t_SinexLoader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SinexLoader_fillHistory(t_SinexLoader *self, PyObject *args);
        static PyObject *t_SinexLoader_getCreationDate(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getDcbSatellite(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_getDcbStation(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_getFileEpochEndTime(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getFileEpochStartTime(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getITRFVersion(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getParsedEop(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getStation(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_getStations(t_SinexLoader *self);
        static PyObject *t_SinexLoader_setITRFVersion(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_get__creationDate(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__fileEpochEndTime(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__fileEpochStartTime(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__iTRFVersion(t_SinexLoader *self, void *data);
        static int t_SinexLoader_set__iTRFVersion(t_SinexLoader *self, PyObject *arg, void *data);
        static PyObject *t_SinexLoader_get__parsedEop(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__stations(t_SinexLoader *self, void *data);
        static PyGetSetDef t_SinexLoader__fields_[] = {
          DECLARE_GET_FIELD(t_SinexLoader, creationDate),
          DECLARE_GET_FIELD(t_SinexLoader, fileEpochEndTime),
          DECLARE_GET_FIELD(t_SinexLoader, fileEpochStartTime),
          DECLARE_GETSET_FIELD(t_SinexLoader, iTRFVersion),
          DECLARE_GET_FIELD(t_SinexLoader, parsedEop),
          DECLARE_GET_FIELD(t_SinexLoader, stations),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SinexLoader__methods_[] = {
          DECLARE_METHOD(t_SinexLoader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexLoader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexLoader, fillHistory, METH_VARARGS),
          DECLARE_METHOD(t_SinexLoader, getCreationDate, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getDcbSatellite, METH_O),
          DECLARE_METHOD(t_SinexLoader, getDcbStation, METH_O),
          DECLARE_METHOD(t_SinexLoader, getFileEpochEndTime, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getFileEpochStartTime, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getITRFVersion, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getParsedEop, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getStation, METH_O),
          DECLARE_METHOD(t_SinexLoader, getStations, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, setITRFVersion, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SinexLoader)[] = {
          { Py_tp_methods, t_SinexLoader__methods_ },
          { Py_tp_init, (void *) t_SinexLoader_init_ },
          { Py_tp_getset, t_SinexLoader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SinexLoader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SinexLoader, t_SinexLoader, SinexLoader);

        void t_SinexLoader::install(PyObject *module)
        {
          installType(&PY_TYPE(SinexLoader), &PY_TYPE_DEF(SinexLoader), module, "SinexLoader", 0);
        }

        void t_SinexLoader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexLoader), "class_", make_descriptor(SinexLoader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexLoader), "wrapfn_", make_descriptor(t_SinexLoader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexLoader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SinexLoader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SinexLoader::initializeClass, 1)))
            return NULL;
          return t_SinexLoader::wrap_Object(SinexLoader(((t_SinexLoader *) arg)->object.this$));
        }
        static PyObject *t_SinexLoader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SinexLoader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SinexLoader_init_(t_SinexLoader *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                INT_CALL(object = SinexLoader(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                INT_CALL(object = SinexLoader(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::time::TimeScales a1((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
              {
                INT_CALL(object = SinexLoader(a0, a1));
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
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SinexLoader(a0, a1, a2));
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

        static PyObject *t_SinexLoader_fillHistory(t_SinexLoader *self, PyObject *args)
        {
          ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::SortedSet a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::java::util::SortedSet::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &p1, ::java::util::t_SortedSet::parameters_))
          {
            OBJ_CALL(self->object.fillHistory(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "fillHistory", args);
          return NULL;
        }

        static PyObject *t_SinexLoader_getCreationDate(t_SinexLoader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCreationDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getDcbSatellite(t_SinexLoader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::sinex::DcbSatellite result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getDcbSatellite(a0));
            return ::org::orekit::files::sinex::t_DcbSatellite::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDcbSatellite", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_getDcbStation(t_SinexLoader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::sinex::DcbStation result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getDcbStation(a0));
            return ::org::orekit::files::sinex::t_DcbStation::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDcbStation", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_getFileEpochEndTime(t_SinexLoader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getFileEpochEndTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getFileEpochStartTime(t_SinexLoader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getFileEpochStartTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getITRFVersion(t_SinexLoader *self)
        {
          ::org::orekit::frames::ITRFVersion result((jobject) NULL);
          OBJ_CALL(result = self->object.getITRFVersion());
          return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getParsedEop(t_SinexLoader *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getParsedEop());
          return ::java::util::t_Map::wrap_Object(result, ::org::orekit::time::PY_TYPE(AbsoluteDate), ::org::orekit::files::sinex::PY_TYPE(SinexEopEntry));
        }

        static PyObject *t_SinexLoader_getStation(t_SinexLoader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::sinex::Station result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getStation(a0));
            return ::org::orekit::files::sinex::t_Station::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getStation", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_getStations(t_SinexLoader *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getStations());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::sinex::PY_TYPE(Station));
        }

        static PyObject *t_SinexLoader_setITRFVersion(t_SinexLoader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setITRFVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setITRFVersion", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_get__creationDate(t_SinexLoader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCreationDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__fileEpochEndTime(t_SinexLoader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getFileEpochEndTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__fileEpochStartTime(t_SinexLoader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getFileEpochStartTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__iTRFVersion(t_SinexLoader *self, void *data)
        {
          ::org::orekit::frames::ITRFVersion value((jobject) NULL);
          OBJ_CALL(value = self->object.getITRFVersion());
          return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
        }
        static int t_SinexLoader_set__iTRFVersion(t_SinexLoader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setITRFVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "iTRFVersion", arg);
          return -1;
        }

        static PyObject *t_SinexLoader_get__parsedEop(t_SinexLoader *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getParsedEop());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__stations(t_SinexLoader *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getStations());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonIntegerLeastSquareSolver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonIntegerLeastSquareSolver::class$ = NULL;
          jmethodID *PythonIntegerLeastSquareSolver::mids$ = NULL;
          bool PythonIntegerLeastSquareSolver::live$ = false;

          jclass PythonIntegerLeastSquareSolver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonIntegerLeastSquareSolver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_solveILS_fcede534b3836556] = env->getMethodID(cls, "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIntegerLeastSquareSolver::PythonIntegerLeastSquareSolver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonIntegerLeastSquareSolver::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonIntegerLeastSquareSolver::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonIntegerLeastSquareSolver::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonIntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonIntegerLeastSquareSolver_init_(t_PythonIntegerLeastSquareSolver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIntegerLeastSquareSolver_finalize(t_PythonIntegerLeastSquareSolver *self);
          static PyObject *t_PythonIntegerLeastSquareSolver_pythonExtension(t_PythonIntegerLeastSquareSolver *self, PyObject *args);
          static void JNICALL t_PythonIntegerLeastSquareSolver_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonIntegerLeastSquareSolver_solveILS1(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2, jobject a3);
          static PyObject *t_PythonIntegerLeastSquareSolver_get__self(t_PythonIntegerLeastSquareSolver *self, void *data);
          static PyGetSetDef t_PythonIntegerLeastSquareSolver__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIntegerLeastSquareSolver, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIntegerLeastSquareSolver__methods_[] = {
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIntegerLeastSquareSolver)[] = {
            { Py_tp_methods, t_PythonIntegerLeastSquareSolver__methods_ },
            { Py_tp_init, (void *) t_PythonIntegerLeastSquareSolver_init_ },
            { Py_tp_getset, t_PythonIntegerLeastSquareSolver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIntegerLeastSquareSolver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonIntegerLeastSquareSolver, t_PythonIntegerLeastSquareSolver, PythonIntegerLeastSquareSolver);

          void t_PythonIntegerLeastSquareSolver::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIntegerLeastSquareSolver), &PY_TYPE_DEF(PythonIntegerLeastSquareSolver), module, "PythonIntegerLeastSquareSolver", 1);
          }

          void t_PythonIntegerLeastSquareSolver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntegerLeastSquareSolver), "class_", make_descriptor(PythonIntegerLeastSquareSolver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntegerLeastSquareSolver), "wrapfn_", make_descriptor(t_PythonIntegerLeastSquareSolver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntegerLeastSquareSolver), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIntegerLeastSquareSolver::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonIntegerLeastSquareSolver_pythonDecRef0 },
              { "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;", (void *) t_PythonIntegerLeastSquareSolver_solveILS1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonIntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIntegerLeastSquareSolver::initializeClass, 1)))
              return NULL;
            return t_PythonIntegerLeastSquareSolver::wrap_Object(PythonIntegerLeastSquareSolver(((t_PythonIntegerLeastSquareSolver *) arg)->object.this$));
          }
          static PyObject *t_PythonIntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIntegerLeastSquareSolver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonIntegerLeastSquareSolver_init_(t_PythonIntegerLeastSquareSolver *self, PyObject *args, PyObject *kwds)
          {
            PythonIntegerLeastSquareSolver object((jobject) NULL);

            INT_CALL(object = PythonIntegerLeastSquareSolver());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonIntegerLeastSquareSolver_finalize(t_PythonIntegerLeastSquareSolver *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIntegerLeastSquareSolver_pythonExtension(t_PythonIntegerLeastSquareSolver *self, PyObject *args)
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

          static void JNICALL t_PythonIntegerLeastSquareSolver_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntegerLeastSquareSolver::mids$[PythonIntegerLeastSquareSolver::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIntegerLeastSquareSolver::mids$[PythonIntegerLeastSquareSolver::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonIntegerLeastSquareSolver_solveILS1(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntegerLeastSquareSolver::mids$[PythonIntegerLeastSquareSolver::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > value((jobject) NULL);
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *o2 = JArray<jint>(a2).wrap();
            PyObject *o3 = ::org::hipparchus::linear::t_RealMatrix::wrap_Object(::org::hipparchus::linear::RealMatrix(a3));
            PyObject *result = PyObject_CallMethod(obj, "solveILS", "iOOO", (int) a0, o1, o2, o3);
            Py_DECREF(o1);
            Py_DECREF(o2);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &value))
            {
              throwTypeError("solveILS", result);
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

          static PyObject *t_PythonIntegerLeastSquareSolver_get__self(t_PythonIntegerLeastSquareSolver *self, void *data)
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
#include "org/hipparchus/optim/linear/PivotSelectionRule.h"
#include "org/hipparchus/optim/linear/PivotSelectionRule.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *PivotSelectionRule::class$ = NULL;
        jmethodID *PivotSelectionRule::mids$ = NULL;
        bool PivotSelectionRule::live$ = false;
        PivotSelectionRule *PivotSelectionRule::BLAND = NULL;
        PivotSelectionRule *PivotSelectionRule::DANTZIG = NULL;

        jclass PivotSelectionRule::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/PivotSelectionRule");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_15c2a1f7cba03ce9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/linear/PivotSelectionRule;");
            mids$[mid_values_51fc45cad57203c9] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/linear/PivotSelectionRule;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BLAND = new PivotSelectionRule(env->getStaticObjectField(cls, "BLAND", "Lorg/hipparchus/optim/linear/PivotSelectionRule;"));
            DANTZIG = new PivotSelectionRule(env->getStaticObjectField(cls, "DANTZIG", "Lorg/hipparchus/optim/linear/PivotSelectionRule;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PivotSelectionRule PivotSelectionRule::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return PivotSelectionRule(env->callStaticObjectMethod(cls, mids$[mid_valueOf_15c2a1f7cba03ce9], a0.this$));
        }

        JArray< PivotSelectionRule > PivotSelectionRule::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< PivotSelectionRule >(env->callStaticObjectMethod(cls, mids$[mid_values_51fc45cad57203c9]));
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
      namespace linear {
        static PyObject *t_PivotSelectionRule_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PivotSelectionRule_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PivotSelectionRule_of_(t_PivotSelectionRule *self, PyObject *args);
        static PyObject *t_PivotSelectionRule_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_PivotSelectionRule_values(PyTypeObject *type);
        static PyObject *t_PivotSelectionRule_get__parameters_(t_PivotSelectionRule *self, void *data);
        static PyGetSetDef t_PivotSelectionRule__fields_[] = {
          DECLARE_GET_FIELD(t_PivotSelectionRule, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PivotSelectionRule__methods_[] = {
          DECLARE_METHOD(t_PivotSelectionRule, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PivotSelectionRule, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PivotSelectionRule, of_, METH_VARARGS),
          DECLARE_METHOD(t_PivotSelectionRule, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PivotSelectionRule, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PivotSelectionRule)[] = {
          { Py_tp_methods, t_PivotSelectionRule__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PivotSelectionRule__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PivotSelectionRule)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(PivotSelectionRule, t_PivotSelectionRule, PivotSelectionRule);
        PyObject *t_PivotSelectionRule::wrap_Object(const PivotSelectionRule& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PivotSelectionRule::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PivotSelectionRule *self = (t_PivotSelectionRule *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PivotSelectionRule::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PivotSelectionRule::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PivotSelectionRule *self = (t_PivotSelectionRule *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PivotSelectionRule::install(PyObject *module)
        {
          installType(&PY_TYPE(PivotSelectionRule), &PY_TYPE_DEF(PivotSelectionRule), module, "PivotSelectionRule", 0);
        }

        void t_PivotSelectionRule::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "class_", make_descriptor(PivotSelectionRule::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "wrapfn_", make_descriptor(t_PivotSelectionRule::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "boxfn_", make_descriptor(boxObject));
          env->getClass(PivotSelectionRule::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "BLAND", make_descriptor(t_PivotSelectionRule::wrap_Object(*PivotSelectionRule::BLAND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "DANTZIG", make_descriptor(t_PivotSelectionRule::wrap_Object(*PivotSelectionRule::DANTZIG)));
        }

        static PyObject *t_PivotSelectionRule_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PivotSelectionRule::initializeClass, 1)))
            return NULL;
          return t_PivotSelectionRule::wrap_Object(PivotSelectionRule(((t_PivotSelectionRule *) arg)->object.this$));
        }
        static PyObject *t_PivotSelectionRule_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PivotSelectionRule::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PivotSelectionRule_of_(t_PivotSelectionRule *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_PivotSelectionRule_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          PivotSelectionRule result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::optim::linear::PivotSelectionRule::valueOf(a0));
            return t_PivotSelectionRule::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_PivotSelectionRule_values(PyTypeObject *type)
        {
          JArray< PivotSelectionRule > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::optim::linear::PivotSelectionRule::values());
          return JArray<jobject>(result.this$).wrap(t_PivotSelectionRule::wrap_jobject);
        }
        static PyObject *t_PivotSelectionRule_get__parameters_(t_PivotSelectionRule *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonGravityFields.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonGravityFields::class$ = NULL;
          jmethodID *PythonGravityFields::mids$ = NULL;
          bool PythonGravityFields::live$ = false;

          jclass PythonGravityFields::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonGravityFields");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getConstantNormalizedProvider_f23a878f7162aa63] = env->getMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_4ff4b36d038a4d30] = env->getMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_cd3e5e7b86486169] = env->getMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanTidesWaves_4a0f7788a82593c4] = env->getMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizedProvider_d3751d16c1e699b1] = env->getMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonGravityFields::PythonGravityFields() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonGravityFields::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonGravityFields::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonGravityFields::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonGravityFields_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonGravityFields_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonGravityFields_init_(t_PythonGravityFields *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonGravityFields_finalize(t_PythonGravityFields *self);
          static PyObject *t_PythonGravityFields_pythonExtension(t_PythonGravityFields *self, PyObject *args);
          static jobject JNICALL t_PythonGravityFields_getConstantNormalizedProvider0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
          static jobject JNICALL t_PythonGravityFields_getConstantUnnormalizedProvider1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
          static jobject JNICALL t_PythonGravityFields_getNormalizedProvider2(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static jobject JNICALL t_PythonGravityFields_getOceanTidesWaves3(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static jobject JNICALL t_PythonGravityFields_getUnnormalizedProvider4(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static void JNICALL t_PythonGravityFields_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonGravityFields_get__self(t_PythonGravityFields *self, void *data);
          static PyGetSetDef t_PythonGravityFields__fields_[] = {
            DECLARE_GET_FIELD(t_PythonGravityFields, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonGravityFields__methods_[] = {
            DECLARE_METHOD(t_PythonGravityFields, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGravityFields, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGravityFields, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonGravityFields, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonGravityFields)[] = {
            { Py_tp_methods, t_PythonGravityFields__methods_ },
            { Py_tp_init, (void *) t_PythonGravityFields_init_ },
            { Py_tp_getset, t_PythonGravityFields__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonGravityFields)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonGravityFields, t_PythonGravityFields, PythonGravityFields);

          void t_PythonGravityFields::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonGravityFields), &PY_TYPE_DEF(PythonGravityFields), module, "PythonGravityFields", 1);
          }

          void t_PythonGravityFields::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGravityFields), "class_", make_descriptor(PythonGravityFields::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGravityFields), "wrapfn_", make_descriptor(t_PythonGravityFields::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGravityFields), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonGravityFields::initializeClass);
            JNINativeMethod methods[] = {
              { "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getConstantNormalizedProvider0 },
              { "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getConstantUnnormalizedProvider1 },
              { "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getNormalizedProvider2 },
              { "getOceanTidesWaves", "(II)Ljava/util/List;", (void *) t_PythonGravityFields_getOceanTidesWaves3 },
              { "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;", (void *) t_PythonGravityFields_getUnnormalizedProvider4 },
              { "pythonDecRef", "()V", (void *) t_PythonGravityFields_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonGravityFields_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonGravityFields::initializeClass, 1)))
              return NULL;
            return t_PythonGravityFields::wrap_Object(PythonGravityFields(((t_PythonGravityFields *) arg)->object.this$));
          }
          static PyObject *t_PythonGravityFields_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonGravityFields::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonGravityFields_init_(t_PythonGravityFields *self, PyObject *args, PyObject *kwds)
          {
            PythonGravityFields object((jobject) NULL);

            INT_CALL(object = PythonGravityFields());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonGravityFields_finalize(t_PythonGravityFields *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonGravityFields_pythonExtension(t_PythonGravityFields *self, PyObject *args)
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

          static jobject JNICALL t_PythonGravityFields_getConstantNormalizedProvider0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "getConstantNormalizedProvider", "iiO", (int) a0, (int) a1, o2);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getConstantNormalizedProvider", result);
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

          static jobject JNICALL t_PythonGravityFields_getConstantUnnormalizedProvider1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
            PyObject *result = PyObject_CallMethod(obj, "getConstantUnnormalizedProvider", "iiO", (int) a0, (int) a1, o2);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getConstantUnnormalizedProvider", result);
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

          static jobject JNICALL t_PythonGravityFields_getNormalizedProvider2(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getNormalizedProvider", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getNormalizedProvider", result);
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

          static jobject JNICALL t_PythonGravityFields_getOceanTidesWaves3(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getOceanTidesWaves", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getOceanTidesWaves", result);
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

          static jobject JNICALL t_PythonGravityFields_getUnnormalizedProvider4(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getUnnormalizedProvider", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getUnnormalizedProvider", result);
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

          static void JNICALL t_PythonGravityFields_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonGravityFields_get__self(t_PythonGravityFields *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersPhaseModifier::class$ = NULL;
          jmethodID *PhaseCentersPhaseModifier::mids$ = NULL;
          bool PhaseCentersPhaseModifier::live$ = false;

          jclass PhaseCentersPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_55b30db589ada038] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersPhaseModifier::PhaseCentersPhaseModifier(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_55b30db589ada038, a0.this$, a1.this$)) {}

          ::java::util::List PhaseCentersPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void PhaseCentersPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_PhaseCentersPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseCentersPhaseModifier_init_(t_PhaseCentersPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersPhaseModifier_getParametersDrivers(t_PhaseCentersPhaseModifier *self);
          static PyObject *t_PhaseCentersPhaseModifier_modifyWithoutDerivatives(t_PhaseCentersPhaseModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersPhaseModifier_get__parametersDrivers(t_PhaseCentersPhaseModifier *self, void *data);
          static PyGetSetDef t_PhaseCentersPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseCentersPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseCentersPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseCentersPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersPhaseModifier)[] = {
            { Py_tp_methods, t_PhaseCentersPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersPhaseModifier_init_ },
            { Py_tp_getset, t_PhaseCentersPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersPhaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersPhaseModifier, t_PhaseCentersPhaseModifier, PhaseCentersPhaseModifier);

          void t_PhaseCentersPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersPhaseModifier), &PY_TYPE_DEF(PhaseCentersPhaseModifier), module, "PhaseCentersPhaseModifier", 0);
          }

          void t_PhaseCentersPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersPhaseModifier), "class_", make_descriptor(PhaseCentersPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersPhaseModifier), "wrapfn_", make_descriptor(t_PhaseCentersPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersPhaseModifier::wrap_Object(PhaseCentersPhaseModifier(((t_PhaseCentersPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseCentersPhaseModifier_init_(t_PhaseCentersPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersPhaseModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersPhaseModifier_getParametersDrivers(t_PhaseCentersPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseCentersPhaseModifier_modifyWithoutDerivatives(t_PhaseCentersPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseCentersPhaseModifier_get__parametersDrivers(t_PhaseCentersPhaseModifier *self, void *data)
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
#include "org/orekit/files/rinex/navigation/RinexNavigationHeader.h"
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "org/orekit/files/rinex/navigation/TimeSystemCorrection.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RinexNavigationHeader::class$ = NULL;
          jmethodID *RinexNavigationHeader::mids$ = NULL;
          bool RinexNavigationHeader::live$ = false;

          jclass RinexNavigationHeader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RinexNavigationHeader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addTimeSystemCorrections_e54a1e148bff5dcc] = env->getMethodID(cls, "addTimeSystemCorrections", "(Lorg/orekit/files/rinex/navigation/TimeSystemCorrection;)V");
              mids$[mid_getIonosphericCorrectionType_e11d73f275e631f2] = env->getMethodID(cls, "getIonosphericCorrectionType", "()Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;");
              mids$[mid_getMergedFiles_f2f64475e4580546] = env->getMethodID(cls, "getMergedFiles", "()I");
              mids$[mid_getNumberOfLeapSeconds_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfLeapSeconds", "()I");
              mids$[mid_getTimeSystemCorrections_a6156df500549a58] = env->getMethodID(cls, "getTimeSystemCorrections", "()Ljava/util/List;");
              mids$[mid_setIonosphericCorrectionType_412ac69d75a7d1b5] = env->getMethodID(cls, "setIonosphericCorrectionType", "(Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;)V");
              mids$[mid_setMergedFiles_0a2a1ac2721c0336] = env->getMethodID(cls, "setMergedFiles", "(I)V");
              mids$[mid_setNumberOfLeapSeconds_0a2a1ac2721c0336] = env->getMethodID(cls, "setNumberOfLeapSeconds", "(I)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexNavigationHeader::RinexNavigationHeader() : ::org::orekit::files::rinex::section::RinexBaseHeader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void RinexNavigationHeader::addTimeSystemCorrections(const ::org::orekit::files::rinex::navigation::TimeSystemCorrection & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addTimeSystemCorrections_e54a1e148bff5dcc], a0.this$);
          }

          ::org::orekit::files::rinex::navigation::IonosphericCorrectionType RinexNavigationHeader::getIonosphericCorrectionType() const
          {
            return ::org::orekit::files::rinex::navigation::IonosphericCorrectionType(env->callObjectMethod(this$, mids$[mid_getIonosphericCorrectionType_e11d73f275e631f2]));
          }

          jint RinexNavigationHeader::getMergedFiles() const
          {
            return env->callIntMethod(this$, mids$[mid_getMergedFiles_f2f64475e4580546]);
          }

          jint RinexNavigationHeader::getNumberOfLeapSeconds() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfLeapSeconds_f2f64475e4580546]);
          }

          ::java::util::List RinexNavigationHeader::getTimeSystemCorrections() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTimeSystemCorrections_a6156df500549a58]));
          }

          void RinexNavigationHeader::setIonosphericCorrectionType(const ::org::orekit::files::rinex::navigation::IonosphericCorrectionType & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setIonosphericCorrectionType_412ac69d75a7d1b5], a0.this$);
          }

          void RinexNavigationHeader::setMergedFiles(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMergedFiles_0a2a1ac2721c0336], a0);
          }

          void RinexNavigationHeader::setNumberOfLeapSeconds(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNumberOfLeapSeconds_0a2a1ac2721c0336], a0);
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
          static PyObject *t_RinexNavigationHeader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexNavigationHeader_init_(t_RinexNavigationHeader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexNavigationHeader_addTimeSystemCorrections(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_getIonosphericCorrectionType(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_getMergedFiles(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_getNumberOfLeapSeconds(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_getTimeSystemCorrections(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_setIonosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_setMergedFiles(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_setNumberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_get__ionosphericCorrectionType(t_RinexNavigationHeader *self, void *data);
          static int t_RinexNavigationHeader_set__ionosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigationHeader_get__mergedFiles(t_RinexNavigationHeader *self, void *data);
          static int t_RinexNavigationHeader_set__mergedFiles(t_RinexNavigationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigationHeader_get__numberOfLeapSeconds(t_RinexNavigationHeader *self, void *data);
          static int t_RinexNavigationHeader_set__numberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigationHeader_get__timeSystemCorrections(t_RinexNavigationHeader *self, void *data);
          static PyGetSetDef t_RinexNavigationHeader__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexNavigationHeader, ionosphericCorrectionType),
            DECLARE_GETSET_FIELD(t_RinexNavigationHeader, mergedFiles),
            DECLARE_GETSET_FIELD(t_RinexNavigationHeader, numberOfLeapSeconds),
            DECLARE_GET_FIELD(t_RinexNavigationHeader, timeSystemCorrections),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexNavigationHeader__methods_[] = {
            DECLARE_METHOD(t_RinexNavigationHeader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationHeader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationHeader, addTimeSystemCorrections, METH_O),
            DECLARE_METHOD(t_RinexNavigationHeader, getIonosphericCorrectionType, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, getMergedFiles, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, getNumberOfLeapSeconds, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, getTimeSystemCorrections, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, setIonosphericCorrectionType, METH_O),
            DECLARE_METHOD(t_RinexNavigationHeader, setMergedFiles, METH_O),
            DECLARE_METHOD(t_RinexNavigationHeader, setNumberOfLeapSeconds, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexNavigationHeader)[] = {
            { Py_tp_methods, t_RinexNavigationHeader__methods_ },
            { Py_tp_init, (void *) t_RinexNavigationHeader_init_ },
            { Py_tp_getset, t_RinexNavigationHeader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexNavigationHeader)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::section::RinexBaseHeader),
            NULL
          };

          DEFINE_TYPE(RinexNavigationHeader, t_RinexNavigationHeader, RinexNavigationHeader);

          void t_RinexNavigationHeader::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexNavigationHeader), &PY_TYPE_DEF(RinexNavigationHeader), module, "RinexNavigationHeader", 0);
          }

          void t_RinexNavigationHeader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationHeader), "class_", make_descriptor(RinexNavigationHeader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationHeader), "wrapfn_", make_descriptor(t_RinexNavigationHeader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationHeader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexNavigationHeader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexNavigationHeader::initializeClass, 1)))
              return NULL;
            return t_RinexNavigationHeader::wrap_Object(RinexNavigationHeader(((t_RinexNavigationHeader *) arg)->object.this$));
          }
          static PyObject *t_RinexNavigationHeader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexNavigationHeader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexNavigationHeader_init_(t_RinexNavigationHeader *self, PyObject *args, PyObject *kwds)
          {
            RinexNavigationHeader object((jobject) NULL);

            INT_CALL(object = RinexNavigationHeader());
            self->object = object;

            return 0;
          }

          static PyObject *t_RinexNavigationHeader_addTimeSystemCorrections(t_RinexNavigationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::TimeSystemCorrection a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::TimeSystemCorrection::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addTimeSystemCorrections(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addTimeSystemCorrections", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_getIonosphericCorrectionType(t_RinexNavigationHeader *self)
          {
            ::org::orekit::files::rinex::navigation::IonosphericCorrectionType result((jobject) NULL);
            OBJ_CALL(result = self->object.getIonosphericCorrectionType());
            return ::org::orekit::files::rinex::navigation::t_IonosphericCorrectionType::wrap_Object(result);
          }

          static PyObject *t_RinexNavigationHeader_getMergedFiles(t_RinexNavigationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMergedFiles());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexNavigationHeader_getNumberOfLeapSeconds(t_RinexNavigationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexNavigationHeader_getTimeSystemCorrections(t_RinexNavigationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystemCorrections());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(TimeSystemCorrection));
          }

          static PyObject *t_RinexNavigationHeader_setIonosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphericCorrectionType a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_IonosphericCorrectionType::parameters_))
            {
              OBJ_CALL(self->object.setIonosphericCorrectionType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setIonosphericCorrectionType", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_setMergedFiles(t_RinexNavigationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMergedFiles(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMergedFiles", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_setNumberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNumberOfLeapSeconds(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNumberOfLeapSeconds", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_get__ionosphericCorrectionType(t_RinexNavigationHeader *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::IonosphericCorrectionType value((jobject) NULL);
            OBJ_CALL(value = self->object.getIonosphericCorrectionType());
            return ::org::orekit::files::rinex::navigation::t_IonosphericCorrectionType::wrap_Object(value);
          }
          static int t_RinexNavigationHeader_set__ionosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::IonosphericCorrectionType value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::initializeClass, &value))
              {
                INT_CALL(self->object.setIonosphericCorrectionType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ionosphericCorrectionType", arg);
            return -1;
          }

          static PyObject *t_RinexNavigationHeader_get__mergedFiles(t_RinexNavigationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMergedFiles());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexNavigationHeader_set__mergedFiles(t_RinexNavigationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMergedFiles(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "mergedFiles", arg);
            return -1;
          }

          static PyObject *t_RinexNavigationHeader_get__numberOfLeapSeconds(t_RinexNavigationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexNavigationHeader_set__numberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNumberOfLeapSeconds(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "numberOfLeapSeconds", arg);
            return -1;
          }

          static PyObject *t_RinexNavigationHeader_get__timeSystemCorrections(t_RinexNavigationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystemCorrections());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemParser::class$ = NULL;
              jmethodID *AemParser::mids$ = NULL;
              bool AemParser::live$ = false;

              jclass AemParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_0429d96d302e12a7] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/adm/aem/Aem;");
                  mids$[mid_finalizeData_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_c489cac8f838b2e9] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                  mids$[mid_inData_e470b6d9e0d979db] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_e470b6d9e0d979db] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_8b677492a294802a] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/adm/aem/Aem;");
                  mids$[mid_prepareData_e470b6d9e0d979db] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_e470b6d9e0d979db] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::adm::aem::Aem AemParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::aem::Aem(env->callObjectMethod(this$, mids$[mid_build_0429d96d302e12a7]));
              }

              jboolean AemParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_e470b6d9e0d979db]);
              }

              jboolean AemParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_e470b6d9e0d979db]);
              }

              jboolean AemParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_e470b6d9e0d979db]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmHeader AemParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_c489cac8f838b2e9]));
              }

              jboolean AemParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_e470b6d9e0d979db]);
              }

              jboolean AemParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_e470b6d9e0d979db]);
              }

              jboolean AemParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_e470b6d9e0d979db]);
              }

              ::org::orekit::files::ccsds::ndm::adm::aem::Aem AemParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::adm::aem::Aem(env->callObjectMethod(this$, mids$[mid_parse_8b677492a294802a], a0.this$));
              }

              jboolean AemParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_e470b6d9e0d979db]);
              }

              jboolean AemParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_e470b6d9e0d979db]);
              }

              jboolean AemParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_e470b6d9e0d979db]);
              }

              void AemParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_052c3a3464b50355], a0.this$);
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
              static PyObject *t_AemParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemParser_of_(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_build(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_finalizeData(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_finalizeHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_finalizeMetadata(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_getHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_inData(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_inHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_inMetadata(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_parse(t_AemParser *self, PyObject *arg);
              static PyObject *t_AemParser_prepareData(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_prepareHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_prepareMetadata(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_reset(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_get__header(t_AemParser *self, void *data);
              static PyObject *t_AemParser_get__parameters_(t_AemParser *self, void *data);
              static PyGetSetDef t_AemParser__fields_[] = {
                DECLARE_GET_FIELD(t_AemParser, header),
                DECLARE_GET_FIELD(t_AemParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemParser__methods_[] = {
                DECLARE_METHOD(t_AemParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, build, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, parse, METH_O),
                DECLARE_METHOD(t_AemParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemParser)[] = {
                { Py_tp_methods, t_AemParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AemParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
                NULL
              };

              DEFINE_TYPE(AemParser, t_AemParser, AemParser);
              PyObject *t_AemParser::wrap_Object(const AemParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemParser *self = (t_AemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_AemParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemParser *self = (t_AemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_AemParser::install(PyObject *module)
              {
                installType(&PY_TYPE(AemParser), &PY_TYPE_DEF(AemParser), module, "AemParser", 0);
              }

              void t_AemParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemParser), "class_", make_descriptor(AemParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemParser), "wrapfn_", make_descriptor(t_AemParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemParser::initializeClass, 1)))
                  return NULL;
                return t_AemParser::wrap_Object(AemParser(((t_AemParser *) arg)->object.this$));
              }
              static PyObject *t_AemParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemParser_of_(t_AemParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AemParser_build(t_AemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::Aem result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::adm::aem::t_Aem::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_AemParser_finalizeData(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_AemParser_finalizeHeader(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_AemParser_finalizeMetadata(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_AemParser_getHeader(t_AemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_AemParser_inData(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_AemParser_inHeader(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_AemParser_inMetadata(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_AemParser_parse(t_AemParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::Aem result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::adm::aem::t_Aem::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_AemParser_prepareData(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_AemParser_prepareHeader(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_AemParser_prepareMetadata(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_AemParser_reset(t_AemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_AemParser_get__parameters_(t_AemParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AemParser_get__header(t_AemParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(value);
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
#include "org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldMultivariateVectorFunction::class$ = NULL;
      jmethodID *CalculusFieldMultivariateVectorFunction::mids$ = NULL;
      bool CalculusFieldMultivariateVectorFunction::live$ = false;

      jclass CalculusFieldMultivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_45349640cfb1ab66] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > CalculusFieldMultivariateVectorFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_45349640cfb1ab66], a0.this$));
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
      static PyObject *t_CalculusFieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_of_(t_CalculusFieldMultivariateVectorFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_value(t_CalculusFieldMultivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_get__parameters_(t_CalculusFieldMultivariateVectorFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldMultivariateVectorFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldMultivariateVectorFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldMultivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldMultivariateVectorFunction)[] = {
        { Py_tp_methods, t_CalculusFieldMultivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldMultivariateVectorFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldMultivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldMultivariateVectorFunction, t_CalculusFieldMultivariateVectorFunction, CalculusFieldMultivariateVectorFunction);
      PyObject *t_CalculusFieldMultivariateVectorFunction::wrap_Object(const CalculusFieldMultivariateVectorFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateVectorFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateVectorFunction *self = (t_CalculusFieldMultivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldMultivariateVectorFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateVectorFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateVectorFunction *self = (t_CalculusFieldMultivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldMultivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldMultivariateVectorFunction), &PY_TYPE_DEF(CalculusFieldMultivariateVectorFunction), module, "CalculusFieldMultivariateVectorFunction", 0);
      }

      void t_CalculusFieldMultivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateVectorFunction), "class_", make_descriptor(CalculusFieldMultivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateVectorFunction), "wrapfn_", make_descriptor(t_CalculusFieldMultivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldMultivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldMultivariateVectorFunction::wrap_Object(CalculusFieldMultivariateVectorFunction(((t_CalculusFieldMultivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldMultivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldMultivariateVectorFunction_of_(t_CalculusFieldMultivariateVectorFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldMultivariateVectorFunction_value(t_CalculusFieldMultivariateVectorFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldMultivariateVectorFunction_get__parameters_(t_CalculusFieldMultivariateVectorFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/StateCovarianceMatrixProvider.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovarianceMatrixProvider::class$ = NULL;
      jmethodID *StateCovarianceMatrixProvider::mids$ = NULL;
      bool StateCovarianceMatrixProvider::live$ = false;

      jclass StateCovarianceMatrixProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovarianceMatrixProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5bf85a5a232e407d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/StateCovariance;)V");
          mids$[mid_getAdditionalState_137d7db4f3f987f7] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
          mids$[mid_getCovarianceOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getCovarianceOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStateCovariance_3e27c3cac49b2604] = env->getMethodID(cls, "getStateCovariance", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_getStateCovariance_12ee03a9343d9d5c] = env->getMethodID(cls, "getStateCovariance", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_getStateCovariance_24d7aac134a336b8] = env->getMethodID(cls, "getStateCovariance", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_yields_97634138963fb58a] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovarianceMatrixProvider::StateCovarianceMatrixProvider(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::propagation::MatricesHarvester & a2, const ::org::orekit::propagation::StateCovariance & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5bf85a5a232e407d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      JArray< jdouble > StateCovarianceMatrixProvider::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_137d7db4f3f987f7], a0.this$));
      }

      ::org::orekit::orbits::OrbitType StateCovarianceMatrixProvider::getCovarianceOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getCovarianceOrbitType_63ea5cd020bf7bf1]));
      }

      ::java::lang::String StateCovarianceMatrixProvider::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      ::org::orekit::propagation::StateCovariance StateCovarianceMatrixProvider::getStateCovariance(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getStateCovariance_3e27c3cac49b2604], a0.this$));
      }

      ::org::orekit::propagation::StateCovariance StateCovarianceMatrixProvider::getStateCovariance(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getStateCovariance_12ee03a9343d9d5c], a0.this$, a1.this$));
      }

      ::org::orekit::propagation::StateCovariance StateCovarianceMatrixProvider::getStateCovariance(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::orbits::OrbitType & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getStateCovariance_24d7aac134a336b8], a0.this$, a1.this$, a2.this$));
      }

      void StateCovarianceMatrixProvider::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
      }

      jboolean StateCovarianceMatrixProvider::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yields_97634138963fb58a], a0.this$);
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
      static PyObject *t_StateCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_StateCovarianceMatrixProvider_init_(t_StateCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovarianceMatrixProvider_getAdditionalState(t_StateCovarianceMatrixProvider *self, PyObject *arg);
      static PyObject *t_StateCovarianceMatrixProvider_getCovarianceOrbitType(t_StateCovarianceMatrixProvider *self);
      static PyObject *t_StateCovarianceMatrixProvider_getName(t_StateCovarianceMatrixProvider *self);
      static PyObject *t_StateCovarianceMatrixProvider_getStateCovariance(t_StateCovarianceMatrixProvider *self, PyObject *args);
      static PyObject *t_StateCovarianceMatrixProvider_init(t_StateCovarianceMatrixProvider *self, PyObject *args);
      static PyObject *t_StateCovarianceMatrixProvider_yields(t_StateCovarianceMatrixProvider *self, PyObject *arg);
      static PyObject *t_StateCovarianceMatrixProvider_get__covarianceOrbitType(t_StateCovarianceMatrixProvider *self, void *data);
      static PyObject *t_StateCovarianceMatrixProvider_get__name(t_StateCovarianceMatrixProvider *self, void *data);
      static PyGetSetDef t_StateCovarianceMatrixProvider__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovarianceMatrixProvider, covarianceOrbitType),
        DECLARE_GET_FIELD(t_StateCovarianceMatrixProvider, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovarianceMatrixProvider__methods_[] = {
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getAdditionalState, METH_O),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getCovarianceOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getName, METH_NOARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, getStateCovariance, METH_VARARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, init, METH_VARARGS),
        DECLARE_METHOD(t_StateCovarianceMatrixProvider, yields, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovarianceMatrixProvider)[] = {
        { Py_tp_methods, t_StateCovarianceMatrixProvider__methods_ },
        { Py_tp_init, (void *) t_StateCovarianceMatrixProvider_init_ },
        { Py_tp_getset, t_StateCovarianceMatrixProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovarianceMatrixProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateCovarianceMatrixProvider, t_StateCovarianceMatrixProvider, StateCovarianceMatrixProvider);

      void t_StateCovarianceMatrixProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovarianceMatrixProvider), &PY_TYPE_DEF(StateCovarianceMatrixProvider), module, "StateCovarianceMatrixProvider", 0);
      }

      void t_StateCovarianceMatrixProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceMatrixProvider), "class_", make_descriptor(StateCovarianceMatrixProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_StateCovarianceMatrixProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovarianceMatrixProvider::initializeClass, 1)))
          return NULL;
        return t_StateCovarianceMatrixProvider::wrap_Object(StateCovarianceMatrixProvider(((t_StateCovarianceMatrixProvider *) arg)->object.this$));
      }
      static PyObject *t_StateCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovarianceMatrixProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_StateCovarianceMatrixProvider_init_(t_StateCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::org::orekit::propagation::MatricesHarvester a2((jobject) NULL);
        ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
        StateCovarianceMatrixProvider object((jobject) NULL);

        if (!parseArgs(args, "sskk", ::org::orekit::propagation::MatricesHarvester::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = StateCovarianceMatrixProvider(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_StateCovarianceMatrixProvider_getAdditionalState(t_StateCovarianceMatrixProvider *self, PyObject *arg)
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

      static PyObject *t_StateCovarianceMatrixProvider_getCovarianceOrbitType(t_StateCovarianceMatrixProvider *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCovarianceOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_StateCovarianceMatrixProvider_getName(t_StateCovarianceMatrixProvider *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_StateCovarianceMatrixProvider_getStateCovariance(t_StateCovarianceMatrixProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStateCovariance(a0));
              return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::propagation::StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getStateCovariance(a0, a1));
              return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::orbits::OrbitType a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::propagation::StateCovariance result((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              OBJ_CALL(result = self->object.getStateCovariance(a0, a1, a2));
              return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStateCovariance", args);
        return NULL;
      }

      static PyObject *t_StateCovarianceMatrixProvider_init(t_StateCovarianceMatrixProvider *self, PyObject *args)
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

      static PyObject *t_StateCovarianceMatrixProvider_yields(t_StateCovarianceMatrixProvider *self, PyObject *arg)
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

      static PyObject *t_StateCovarianceMatrixProvider_get__covarianceOrbitType(t_StateCovarianceMatrixProvider *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCovarianceOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_StateCovarianceMatrixProvider_get__name(t_StateCovarianceMatrixProvider *self, void *data)
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
          mids$[mid_init$_6ea6ec8379c9f4a5] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          COMMA_SEP = new ::java::lang::String(env->getStaticObjectField(cls, "COMMA_SEP", "Ljava/lang/String;"));
          NO_PARAMETER = new ::java::lang::String(env->getStaticObjectField(cls, "NO_PARAMETER", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UnsupportedParameterException::UnsupportedParameterException(const ::java::lang::String & a0, const ::java::util::List & a1) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_6ea6ec8379c9f4a5, a0.this$, a1.this$)) {}
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
#include "org/hipparchus/exception/UTF8Control.h"
#include "java/io/IOException.h"
#include "java/lang/InstantiationException.h"
#include "java/util/Locale.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *UTF8Control::class$ = NULL;
      jmethodID *UTF8Control::mids$ = NULL;
      bool UTF8Control::live$ = false;

      jclass UTF8Control::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/UTF8Control");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_newBundle_155ef0911ce0f838] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTF8Control::UTF8Control() : ::java::util::ResourceBundle$Control(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ::java::util::ResourceBundle UTF8Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
      {
        return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_155ef0911ce0f838], a0.this$, a1.this$, a2.this$, a3.this$, a4));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_UTF8Control_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTF8Control_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTF8Control_init_(t_UTF8Control *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTF8Control_newBundle(t_UTF8Control *self, PyObject *args);

      static PyMethodDef t_UTF8Control__methods_[] = {
        DECLARE_METHOD(t_UTF8Control, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTF8Control, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTF8Control, newBundle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTF8Control)[] = {
        { Py_tp_methods, t_UTF8Control__methods_ },
        { Py_tp_init, (void *) t_UTF8Control_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTF8Control)[] = {
        &PY_TYPE_DEF(::java::util::ResourceBundle$Control),
        NULL
      };

      DEFINE_TYPE(UTF8Control, t_UTF8Control, UTF8Control);

      void t_UTF8Control::install(PyObject *module)
      {
        installType(&PY_TYPE(UTF8Control), &PY_TYPE_DEF(UTF8Control), module, "UTF8Control", 0);
      }

      void t_UTF8Control::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTF8Control), "class_", make_descriptor(UTF8Control::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTF8Control), "wrapfn_", make_descriptor(t_UTF8Control::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTF8Control), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTF8Control_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTF8Control::initializeClass, 1)))
          return NULL;
        return t_UTF8Control::wrap_Object(UTF8Control(((t_UTF8Control *) arg)->object.this$));
      }
      static PyObject *t_UTF8Control_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTF8Control::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTF8Control_init_(t_UTF8Control *self, PyObject *args, PyObject *kwds)
      {
        UTF8Control object((jobject) NULL);

        INT_CALL(object = UTF8Control());
        self->object = object;

        return 0;
      }

      static PyObject *t_UTF8Control_newBundle(t_UTF8Control *self, PyObject *args)
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

        return callSuper(PY_TYPE(UTF8Control), (PyObject *) self, "newBundle", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/OptimizationProblem.h"
#include "org/hipparchus/util/Incrementor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *OptimizationProblem::class$ = NULL;
      jmethodID *OptimizationProblem::mids$ = NULL;
      bool OptimizationProblem::live$ = false;

      jclass OptimizationProblem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/OptimizationProblem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConvergenceChecker_100e81b1c0752b49] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
          mids$[mid_getEvaluationCounter_745ef02916e2d8db] = env->getMethodID(cls, "getEvaluationCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_getIterationCounter_745ef02916e2d8db] = env->getMethodID(cls, "getIterationCounter", "()Lorg/hipparchus/util/Incrementor;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::optim::ConvergenceChecker OptimizationProblem::getConvergenceChecker() const
      {
        return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_100e81b1c0752b49]));
      }

      ::org::hipparchus::util::Incrementor OptimizationProblem::getEvaluationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getEvaluationCounter_745ef02916e2d8db]));
      }

      ::org::hipparchus::util::Incrementor OptimizationProblem::getIterationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getIterationCounter_745ef02916e2d8db]));
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
      static PyObject *t_OptimizationProblem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OptimizationProblem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OptimizationProblem_of_(t_OptimizationProblem *self, PyObject *args);
      static PyObject *t_OptimizationProblem_getConvergenceChecker(t_OptimizationProblem *self);
      static PyObject *t_OptimizationProblem_getEvaluationCounter(t_OptimizationProblem *self);
      static PyObject *t_OptimizationProblem_getIterationCounter(t_OptimizationProblem *self);
      static PyObject *t_OptimizationProblem_get__convergenceChecker(t_OptimizationProblem *self, void *data);
      static PyObject *t_OptimizationProblem_get__evaluationCounter(t_OptimizationProblem *self, void *data);
      static PyObject *t_OptimizationProblem_get__iterationCounter(t_OptimizationProblem *self, void *data);
      static PyObject *t_OptimizationProblem_get__parameters_(t_OptimizationProblem *self, void *data);
      static PyGetSetDef t_OptimizationProblem__fields_[] = {
        DECLARE_GET_FIELD(t_OptimizationProblem, convergenceChecker),
        DECLARE_GET_FIELD(t_OptimizationProblem, evaluationCounter),
        DECLARE_GET_FIELD(t_OptimizationProblem, iterationCounter),
        DECLARE_GET_FIELD(t_OptimizationProblem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OptimizationProblem__methods_[] = {
        DECLARE_METHOD(t_OptimizationProblem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OptimizationProblem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OptimizationProblem, of_, METH_VARARGS),
        DECLARE_METHOD(t_OptimizationProblem, getConvergenceChecker, METH_NOARGS),
        DECLARE_METHOD(t_OptimizationProblem, getEvaluationCounter, METH_NOARGS),
        DECLARE_METHOD(t_OptimizationProblem, getIterationCounter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OptimizationProblem)[] = {
        { Py_tp_methods, t_OptimizationProblem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OptimizationProblem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OptimizationProblem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OptimizationProblem, t_OptimizationProblem, OptimizationProblem);
      PyObject *t_OptimizationProblem::wrap_Object(const OptimizationProblem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OptimizationProblem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OptimizationProblem *self = (t_OptimizationProblem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OptimizationProblem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OptimizationProblem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OptimizationProblem *self = (t_OptimizationProblem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OptimizationProblem::install(PyObject *module)
      {
        installType(&PY_TYPE(OptimizationProblem), &PY_TYPE_DEF(OptimizationProblem), module, "OptimizationProblem", 0);
      }

      void t_OptimizationProblem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblem), "class_", make_descriptor(OptimizationProblem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblem), "wrapfn_", make_descriptor(t_OptimizationProblem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationProblem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OptimizationProblem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OptimizationProblem::initializeClass, 1)))
          return NULL;
        return t_OptimizationProblem::wrap_Object(OptimizationProblem(((t_OptimizationProblem *) arg)->object.this$));
      }
      static PyObject *t_OptimizationProblem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OptimizationProblem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OptimizationProblem_of_(t_OptimizationProblem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OptimizationProblem_getConvergenceChecker(t_OptimizationProblem *self)
      {
        ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
        OBJ_CALL(result = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_OptimizationProblem_getEvaluationCounter(t_OptimizationProblem *self)
      {
        ::org::hipparchus::util::Incrementor result((jobject) NULL);
        OBJ_CALL(result = self->object.getEvaluationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
      }

      static PyObject *t_OptimizationProblem_getIterationCounter(t_OptimizationProblem *self)
      {
        ::org::hipparchus::util::Incrementor result((jobject) NULL);
        OBJ_CALL(result = self->object.getIterationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
      }
      static PyObject *t_OptimizationProblem_get__parameters_(t_OptimizationProblem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OptimizationProblem_get__convergenceChecker(t_OptimizationProblem *self, void *data)
      {
        ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
        OBJ_CALL(value = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
      }

      static PyObject *t_OptimizationProblem_get__evaluationCounter(t_OptimizationProblem *self, void *data)
      {
        ::org::hipparchus::util::Incrementor value((jobject) NULL);
        OBJ_CALL(value = self->object.getEvaluationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
      }

      static PyObject *t_OptimizationProblem_get__iterationCounter(t_OptimizationProblem *self, void *data)
      {
        ::org::hipparchus::util::Incrementor value((jobject) NULL);
        OBJ_CALL(value = self->object.getIterationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/HighamHall54FieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *HighamHall54FieldIntegratorBuilder::class$ = NULL;
        jmethodID *HighamHall54FieldIntegratorBuilder::mids$ = NULL;
        bool HighamHall54FieldIntegratorBuilder::live$ = false;

        jclass HighamHall54FieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/HighamHall54FieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_79616f78bb6df44f] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54FieldIntegratorBuilder::HighamHall54FieldIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator HighamHall54FieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_79616f78bb6df44f], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_HighamHall54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_of_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args);
        static int t_HighamHall54FieldIntegratorBuilder_init_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_buildIntegrator(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_get__parameters_(t_HighamHall54FieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_HighamHall54FieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HighamHall54FieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54FieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_HighamHall54FieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_HighamHall54FieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_HighamHall54FieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54FieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(HighamHall54FieldIntegratorBuilder, t_HighamHall54FieldIntegratorBuilder, HighamHall54FieldIntegratorBuilder);
        PyObject *t_HighamHall54FieldIntegratorBuilder::wrap_Object(const HighamHall54FieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegratorBuilder *self = (t_HighamHall54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_HighamHall54FieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegratorBuilder *self = (t_HighamHall54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_HighamHall54FieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54FieldIntegratorBuilder), &PY_TYPE_DEF(HighamHall54FieldIntegratorBuilder), module, "HighamHall54FieldIntegratorBuilder", 0);
        }

        void t_HighamHall54FieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegratorBuilder), "class_", make_descriptor(HighamHall54FieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegratorBuilder), "wrapfn_", make_descriptor(t_HighamHall54FieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54FieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_HighamHall54FieldIntegratorBuilder::wrap_Object(HighamHall54FieldIntegratorBuilder(((t_HighamHall54FieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54FieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_HighamHall54FieldIntegratorBuilder_of_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_HighamHall54FieldIntegratorBuilder_init_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          HighamHall54FieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = HighamHall54FieldIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HighamHall54FieldIntegratorBuilder_buildIntegrator(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(HighamHall54FieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_HighamHall54FieldIntegratorBuilder_get__parameters_(t_HighamHall54FieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AdamsBashforthFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
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
            mids$[mid_init$_d3d0b69fc0b5db95] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_79616f78bb6df44f] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthFieldIntegratorBuilder::AdamsBashforthFieldIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_d3d0b69fc0b5db95, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator AdamsBashforthFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_79616f78bb6df44f], a0.this$, a1.this$, a2.this$));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedMessages$UTF8Control.h"
#include "java/io/IOException.h"
#include "java/util/Locale.h"
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "java/util/ResourceBundle.h"
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
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_newBundle_155ef0911ce0f838] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedMessages$UTF8Control::RuggedMessages$UTF8Control() : ::java::util::ResourceBundle$Control(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::java::util::ResourceBundle RuggedMessages$UTF8Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
        {
          return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_155ef0911ce0f838], a0.this$, a1.this$, a2.this$, a3.this$, a4));
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
#include "org/orekit/attitudes/TabulatedProvider.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TabulatedProvider::class$ = NULL;
      jmethodID *TabulatedProvider::mids$ = NULL;
      bool TabulatedProvider::live$ = false;

      jclass TabulatedProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TabulatedProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fb10df4e1e73d3c8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_7b1b4115612078ea] = env->getMethodID(cls, "<init>", "(Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/attitudes/AttitudeBuilder;)V");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TabulatedProvider::TabulatedProvider(const ::org::orekit::frames::Frame & a0, const ::java::util::List & a1, jint a2, const ::org::orekit::utils::AngularDerivativesFilter & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fb10df4e1e73d3c8, a0.this$, a1.this$, a2, a3.this$)) {}

      TabulatedProvider::TabulatedProvider(const ::java::util::List & a0, jint a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::orekit::attitudes::AttitudeBuilder & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b1b4115612078ea, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::orekit::attitudes::Attitude TabulatedProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude TabulatedProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::AbsoluteDate TabulatedProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate TabulatedProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
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
      static PyObject *t_TabulatedProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TabulatedProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TabulatedProvider_init_(t_TabulatedProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TabulatedProvider_getAttitude(t_TabulatedProvider *self, PyObject *args);
      static PyObject *t_TabulatedProvider_getMaxDate(t_TabulatedProvider *self);
      static PyObject *t_TabulatedProvider_getMinDate(t_TabulatedProvider *self);
      static PyObject *t_TabulatedProvider_get__maxDate(t_TabulatedProvider *self, void *data);
      static PyObject *t_TabulatedProvider_get__minDate(t_TabulatedProvider *self, void *data);
      static PyGetSetDef t_TabulatedProvider__fields_[] = {
        DECLARE_GET_FIELD(t_TabulatedProvider, maxDate),
        DECLARE_GET_FIELD(t_TabulatedProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TabulatedProvider__methods_[] = {
        DECLARE_METHOD(t_TabulatedProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_TabulatedProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_TabulatedProvider, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TabulatedProvider)[] = {
        { Py_tp_methods, t_TabulatedProvider__methods_ },
        { Py_tp_init, (void *) t_TabulatedProvider_init_ },
        { Py_tp_getset, t_TabulatedProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TabulatedProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TabulatedProvider, t_TabulatedProvider, TabulatedProvider);

      void t_TabulatedProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(TabulatedProvider), &PY_TYPE_DEF(TabulatedProvider), module, "TabulatedProvider", 0);
      }

      void t_TabulatedProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedProvider), "class_", make_descriptor(TabulatedProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedProvider), "wrapfn_", make_descriptor(t_TabulatedProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TabulatedProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TabulatedProvider::initializeClass, 1)))
          return NULL;
        return t_TabulatedProvider::wrap_Object(TabulatedProvider(((t_TabulatedProvider *) arg)->object.this$));
      }
      static PyObject *t_TabulatedProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TabulatedProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TabulatedProvider_init_(t_TabulatedProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::utils::AngularDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            TabulatedProvider object((jobject) NULL);

            if (!parseArgs(args, "kKIK", ::org::orekit::frames::Frame::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TabulatedProvider(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
            ::org::orekit::attitudes::AttitudeBuilder a5((jobject) NULL);
            TabulatedProvider object((jobject) NULL);

            if (!parseArgs(args, "KIKkkk", ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeBuilder::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &a4, &a5))
            {
              INT_CALL(object = TabulatedProvider(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_TabulatedProvider_getAttitude(t_TabulatedProvider *self, PyObject *args)
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

      static PyObject *t_TabulatedProvider_getMaxDate(t_TabulatedProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedProvider_getMinDate(t_TabulatedProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedProvider_get__maxDate(t_TabulatedProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TabulatedProvider_get__minDate(t_TabulatedProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *BivariateFunction::class$ = NULL;
      jmethodID *BivariateFunction::mids$ = NULL;
      bool BivariateFunction::live$ = false;

      jclass BivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/BivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble BivariateFunction::value(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_824133ce4aec3505], a0, a1);
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
      static PyObject *t_BivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BivariateFunction_value(t_BivariateFunction *self, PyObject *args);

      static PyMethodDef t_BivariateFunction__methods_[] = {
        DECLARE_METHOD(t_BivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BivariateFunction)[] = {
        { Py_tp_methods, t_BivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BivariateFunction, t_BivariateFunction, BivariateFunction);

      void t_BivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(BivariateFunction), &PY_TYPE_DEF(BivariateFunction), module, "BivariateFunction", 0);
      }

      void t_BivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateFunction), "class_", make_descriptor(BivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateFunction), "wrapfn_", make_descriptor(t_BivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BivariateFunction::initializeClass, 1)))
          return NULL;
        return t_BivariateFunction::wrap_Object(BivariateFunction(((t_BivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_BivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BivariateFunction_value(t_BivariateFunction *self, PyObject *args)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/BooleanDetector.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/BooleanDetector.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/NegateDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *BooleanDetector::class$ = NULL;
        jmethodID *BooleanDetector::mids$ = NULL;
        bool BooleanDetector::live$ = false;

        jclass BooleanDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/BooleanDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_andCombine_3b5251c30061a389] = env->getStaticMethodID(cls, "andCombine", "([Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_andCombine_aafdea58edae91a2] = env->getStaticMethodID(cls, "andCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetectors_a6156df500549a58] = env->getMethodID(cls, "getDetectors", "()Ljava/util/List;");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_notCombine_1a0c1817f5f3b165] = env->getStaticMethodID(cls, "notCombine", "(Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/NegateDetector;");
            mids$[mid_orCombine_3b5251c30061a389] = env->getStaticMethodID(cls, "orCombine", "([Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_orCombine_aafdea58edae91a2] = env->getStaticMethodID(cls, "orCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_create_cf5ebd5d94c498e8] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/BooleanDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BooleanDetector BooleanDetector::andCombine(const JArray< ::org::orekit::propagation::events::EventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_3b5251c30061a389], a0.this$));
        }

        BooleanDetector BooleanDetector::andCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_aafdea58edae91a2], a0.this$));
        }

        jdouble BooleanDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::java::util::List BooleanDetector::getDetectors() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDetectors_a6156df500549a58]));
        }

        void BooleanDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
        }

        ::org::orekit::propagation::events::NegateDetector BooleanDetector::notCombine(const ::org::orekit::propagation::events::EventDetector & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::propagation::events::NegateDetector(env->callStaticObjectMethod(cls, mids$[mid_notCombine_1a0c1817f5f3b165], a0.this$));
        }

        BooleanDetector BooleanDetector::orCombine(const JArray< ::org::orekit::propagation::events::EventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_3b5251c30061a389], a0.this$));
        }

        BooleanDetector BooleanDetector::orCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_aafdea58edae91a2], a0.this$));
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
        static PyObject *t_BooleanDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BooleanDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BooleanDetector_of_(t_BooleanDetector *self, PyObject *args);
        static PyObject *t_BooleanDetector_andCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_BooleanDetector_g(t_BooleanDetector *self, PyObject *args);
        static PyObject *t_BooleanDetector_getDetectors(t_BooleanDetector *self);
        static PyObject *t_BooleanDetector_init(t_BooleanDetector *self, PyObject *args);
        static PyObject *t_BooleanDetector_notCombine(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BooleanDetector_orCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_BooleanDetector_get__detectors(t_BooleanDetector *self, void *data);
        static PyObject *t_BooleanDetector_get__parameters_(t_BooleanDetector *self, void *data);
        static PyGetSetDef t_BooleanDetector__fields_[] = {
          DECLARE_GET_FIELD(t_BooleanDetector, detectors),
          DECLARE_GET_FIELD(t_BooleanDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BooleanDetector__methods_[] = {
          DECLARE_METHOD(t_BooleanDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_BooleanDetector, andCombine, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_BooleanDetector, getDetectors, METH_NOARGS),
          DECLARE_METHOD(t_BooleanDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_BooleanDetector, notCombine, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, orCombine, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BooleanDetector)[] = {
          { Py_tp_methods, t_BooleanDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BooleanDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BooleanDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(BooleanDetector, t_BooleanDetector, BooleanDetector);
        PyObject *t_BooleanDetector::wrap_Object(const BooleanDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BooleanDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BooleanDetector *self = (t_BooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BooleanDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BooleanDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BooleanDetector *self = (t_BooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BooleanDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(BooleanDetector), &PY_TYPE_DEF(BooleanDetector), module, "BooleanDetector", 0);
        }

        void t_BooleanDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BooleanDetector), "class_", make_descriptor(BooleanDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BooleanDetector), "wrapfn_", make_descriptor(t_BooleanDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BooleanDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BooleanDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BooleanDetector::initializeClass, 1)))
            return NULL;
          return t_BooleanDetector::wrap_Object(BooleanDetector(((t_BooleanDetector *) arg)->object.this$));
        }
        static PyObject *t_BooleanDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BooleanDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BooleanDetector_of_(t_BooleanDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BooleanDetector_andCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::EventDetector > a0((jobject) NULL);
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::andCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::andCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "andCombine", args);
          return NULL;
        }

        static PyObject *t_BooleanDetector_g(t_BooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BooleanDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_BooleanDetector_getDetectors(t_BooleanDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_BooleanDetector_init(t_BooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(BooleanDetector), (PyObject *) self, "init", args, 2);
        }

        static PyObject *t_BooleanDetector_notCombine(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::NegateDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::notCombine(a0));
            return ::org::orekit::propagation::events::t_NegateDetector::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "notCombine", arg);
          return NULL;
        }

        static PyObject *t_BooleanDetector_orCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::EventDetector > a0((jobject) NULL);
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::orCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::orCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "orCombine", args);
          return NULL;
        }
        static PyObject *t_BooleanDetector_get__parameters_(t_BooleanDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BooleanDetector_get__detectors(t_BooleanDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAbstractDetector::class$ = NULL;
        jmethodID *FieldAbstractDetector::mids$ = NULL;
        bool FieldAbstractDetector::live$ = false;
        jdouble FieldAbstractDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint FieldAbstractDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble FieldAbstractDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass FieldAbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_fa8b0a49dc8c921f] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_a33ee6d38a1d69f9] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_e6d4d3215c30992a] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_isForward_e470b6d9e0d979db] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_8b81204a9c6cddc3] = env->getMethodID(cls, "withHandler", "(Lorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withMaxCheck_921e1a2e2c178162] = env->getMethodID(cls, "withMaxCheck", "(D)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withMaxCheck_f911d43ae8e5d994] = env->getMethodID(cls, "withMaxCheck", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withMaxIter_449918ff3039d002] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withThreshold_420337e6b660d34c] = env->getMethodID(cls, "withThreshold", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_create_a461cc495f0e8159] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement FieldAbstractDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::orekit::propagation::events::handlers::FieldEventHandler FieldAbstractDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::FieldEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_fa8b0a49dc8c921f]));
        }

        ::org::orekit::propagation::events::FieldAdaptableInterval FieldAbstractDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_a33ee6d38a1d69f9]));
        }

        jint FieldAbstractDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_f2f64475e4580546]);
        }

        ::org::hipparchus::CalculusFieldElement FieldAbstractDetector::getThreshold() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getThreshold_e6d4d3215c30992a]));
        }

        void FieldAbstractDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
        }

        jboolean FieldAbstractDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_e470b6d9e0d979db]);
        }

        FieldAbstractDetector FieldAbstractDetector::withHandler(const ::org::orekit::propagation::events::handlers::FieldEventHandler & a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withHandler_8b81204a9c6cddc3], a0.this$));
        }

        FieldAbstractDetector FieldAbstractDetector::withMaxCheck(jdouble a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_921e1a2e2c178162], a0));
        }

        FieldAbstractDetector FieldAbstractDetector::withMaxCheck(const ::org::orekit::propagation::events::FieldAdaptableInterval & a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_f911d43ae8e5d994], a0.this$));
        }

        FieldAbstractDetector FieldAbstractDetector::withMaxIter(jint a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_449918ff3039d002], a0));
        }

        FieldAbstractDetector FieldAbstractDetector::withThreshold(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_420337e6b660d34c], a0.this$));
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
        static PyObject *t_FieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_of_(t_FieldAbstractDetector *self, PyObject *args);
        static PyObject *t_FieldAbstractDetector_g(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_getHandler(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_getMaxCheckInterval(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_getMaxIterationCount(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_getThreshold(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_init(t_FieldAbstractDetector *self, PyObject *args);
        static PyObject *t_FieldAbstractDetector_isForward(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_withHandler(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_withMaxCheck(t_FieldAbstractDetector *self, PyObject *args);
        static PyObject *t_FieldAbstractDetector_withMaxIter(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_withThreshold(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_get__forward(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__handler(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__maxCheckInterval(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__maxIterationCount(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__threshold(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__parameters_(t_FieldAbstractDetector *self, void *data);
        static PyGetSetDef t_FieldAbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractDetector, forward),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, handler),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, threshold),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractDetector__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, g, METH_O),
          DECLARE_METHOD(t_FieldAbstractDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, withHandler, METH_O),
          DECLARE_METHOD(t_FieldAbstractDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_FieldAbstractDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractDetector)[] = {
          { Py_tp_methods, t_FieldAbstractDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAbstractDetector, t_FieldAbstractDetector, FieldAbstractDetector);
        PyObject *t_FieldAbstractDetector::wrap_Object(const FieldAbstractDetector& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldAbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractDetector *self = (t_FieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldAbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldAbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractDetector *self = (t_FieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldAbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractDetector), &PY_TYPE_DEF(FieldAbstractDetector), module, "FieldAbstractDetector", 0);
        }

        void t_FieldAbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "class_", make_descriptor(FieldAbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "wrapfn_", make_descriptor(t_FieldAbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldAbstractDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "DEFAULT_MAXCHECK", make_descriptor(FieldAbstractDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "DEFAULT_MAX_ITER", make_descriptor(FieldAbstractDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "DEFAULT_THRESHOLD", make_descriptor(FieldAbstractDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_FieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractDetector::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractDetector::wrap_Object(FieldAbstractDetector(((t_FieldAbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractDetector_of_(t_FieldAbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractDetector_g(t_FieldAbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_getHandler(t_FieldAbstractDetector *self)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldAbstractDetector_getMaxCheckInterval(t_FieldAbstractDetector *self)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldAbstractDetector_getMaxIterationCount(t_FieldAbstractDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAbstractDetector_getThreshold(t_FieldAbstractDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getThreshold());
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractDetector_init(t_FieldAbstractDetector *self, PyObject *args)
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

        static PyObject *t_FieldAbstractDetector_isForward(t_FieldAbstractDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldAbstractDetector_withHandler(t_FieldAbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler a0((jobject) NULL);
          PyTypeObject **p0;
          FieldAbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::events::handlers::FieldEventHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::events::handlers::t_FieldEventHandler::parameters_))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_withMaxCheck(t_FieldAbstractDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              FieldAbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::events::FieldAdaptableInterval a0((jobject) NULL);
              PyTypeObject **p0;
              FieldAbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldAdaptableInterval::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldAdaptableInterval::parameters_))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_withMaxIter(t_FieldAbstractDetector *self, PyObject *arg)
        {
          jint a0;
          FieldAbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_withThreshold(t_FieldAbstractDetector *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          FieldAbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_FieldAbstractDetector_get__parameters_(t_FieldAbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAbstractDetector_get__forward(t_FieldAbstractDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldAbstractDetector_get__handler(t_FieldAbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractDetector_get__maxCheckInterval(t_FieldAbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractDetector_get__maxIterationCount(t_FieldAbstractDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAbstractDetector_get__threshold(t_FieldAbstractDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getThreshold());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/time/TimeScale.h"
#include "java/io/InputStream.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimationLoader::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimationLoader::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimationLoader::live$ = false;

            jclass MarshallSolarActivityFutureEstimationLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_bb231124cc77fad4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;)V");
                mids$[mid_init$_2159d8bc03f80cf7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_d01a04ddab6c7194] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MarshallSolarActivityFutureEstimationLoader::MarshallSolarActivityFutureEstimationLoader(const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(env->newObject(initializeClass, &mids$, mid_init$_bb231124cc77fad4, a0.this$)) {}

            MarshallSolarActivityFutureEstimationLoader::MarshallSolarActivityFutureEstimationLoader(const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a0, const ::org::orekit::time::TimeScale & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(env->newObject(initializeClass, &mids$, mid_init$_2159d8bc03f80cf7, a0.this$, a1.this$)) {}

            ::java::util::SortedSet MarshallSolarActivityFutureEstimationLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_d01a04ddab6c7194]));
            }

            void MarshallSolarActivityFutureEstimationLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
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
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_of_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args);
            static int t_MarshallSolarActivityFutureEstimationLoader_init_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_getDataSet(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_loadData(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__dataSet(t_MarshallSolarActivityFutureEstimationLoader *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimationLoader__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader, dataSet),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimationLoader__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, getDataSet, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, loadData, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimationLoader)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimationLoader__methods_ },
              { Py_tp_init, (void *) t_MarshallSolarActivityFutureEstimationLoader_init_ },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimationLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimationLoader)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimationLoader, t_MarshallSolarActivityFutureEstimationLoader, MarshallSolarActivityFutureEstimationLoader);
            PyObject *t_MarshallSolarActivityFutureEstimationLoader::wrap_Object(const MarshallSolarActivityFutureEstimationLoader& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader *self = (t_MarshallSolarActivityFutureEstimationLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimationLoader::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader *self = (t_MarshallSolarActivityFutureEstimationLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimationLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimationLoader), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader), module, "MarshallSolarActivityFutureEstimationLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader$LineParameters)));
            }

            void t_MarshallSolarActivityFutureEstimationLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "class_", make_descriptor(MarshallSolarActivityFutureEstimationLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimationLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimationLoader::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimationLoader::wrap_Object(MarshallSolarActivityFutureEstimationLoader(((t_MarshallSolarActivityFutureEstimationLoader *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimationLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_of_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_MarshallSolarActivityFutureEstimationLoader_init_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a0((jobject) NULL);
                  PyTypeObject **p0;
                  MarshallSolarActivityFutureEstimationLoader object((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimationLoader(a0));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::TimeScale a1((jobject) NULL);
                  MarshallSolarActivityFutureEstimationLoader object((jobject) NULL);

                  if (!parseArgs(args, "Kk", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a1))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimationLoader(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
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

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_getDataSet(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args)
            {
              ::java::util::SortedSet result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getDataSet());
                return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters));
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader), (PyObject *) self, "getDataSet", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_loadData(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args)
            {
              ::java::io::InputStream a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.loadData(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader), (PyObject *) self, "loadData", args, 2);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__dataSet(t_MarshallSolarActivityFutureEstimationLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonDataLoader.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataLoader::class$ = NULL;
      jmethodID *PythonDataLoader::mids$ = NULL;
      bool PythonDataLoader::live$ = false;

      jclass PythonDataLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_stillAcceptsData_e470b6d9e0d979db] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataLoader::PythonDataLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonDataLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonDataLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonDataLoader::pythonExtension(jlong a0) const
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
    namespace data {
      static PyObject *t_PythonDataLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataLoader_init_(t_PythonDataLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataLoader_finalize(t_PythonDataLoader *self);
      static PyObject *t_PythonDataLoader_pythonExtension(t_PythonDataLoader *self, PyObject *args);
      static void JNICALL t_PythonDataLoader_loadData0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonDataLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static jboolean JNICALL t_PythonDataLoader_stillAcceptsData2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataLoader_get__self(t_PythonDataLoader *self, void *data);
      static PyGetSetDef t_PythonDataLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataLoader__methods_[] = {
        DECLARE_METHOD(t_PythonDataLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataLoader)[] = {
        { Py_tp_methods, t_PythonDataLoader__methods_ },
        { Py_tp_init, (void *) t_PythonDataLoader_init_ },
        { Py_tp_getset, t_PythonDataLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataLoader, t_PythonDataLoader, PythonDataLoader);

      void t_PythonDataLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataLoader), &PY_TYPE_DEF(PythonDataLoader), module, "PythonDataLoader", 1);
      }

      void t_PythonDataLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataLoader), "class_", make_descriptor(PythonDataLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataLoader), "wrapfn_", make_descriptor(t_PythonDataLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V", (void *) t_PythonDataLoader_loadData0 },
          { "pythonDecRef", "()V", (void *) t_PythonDataLoader_pythonDecRef1 },
          { "stillAcceptsData", "()Z", (void *) t_PythonDataLoader_stillAcceptsData2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonDataLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataLoader::initializeClass, 1)))
          return NULL;
        return t_PythonDataLoader::wrap_Object(PythonDataLoader(((t_PythonDataLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonDataLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataLoader_init_(t_PythonDataLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonDataLoader object((jobject) NULL);

        INT_CALL(object = PythonDataLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataLoader_finalize(t_PythonDataLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataLoader_pythonExtension(t_PythonDataLoader *self, PyObject *args)
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

      static void JNICALL t_PythonDataLoader_loadData0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
        PyObject *o1 = env->fromJString((jstring) a1, 0);
        PyObject *result = PyObject_CallMethod(obj, "loadData", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonDataLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jboolean JNICALL t_PythonDataLoader_stillAcceptsData2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *result = PyObject_CallMethod(obj, "stillAcceptsData", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("stillAcceptsData", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static PyObject *t_PythonDataLoader_get__self(t_PythonDataLoader *self, void *data)
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

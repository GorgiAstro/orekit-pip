#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonEOPBasedTransformProvider.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonEOPBasedTransformProvider::class$ = NULL;
      jmethodID *PythonEOPBasedTransformProvider::mids$ = NULL;
      bool PythonEOPBasedTransformProvider::live$ = false;

      jclass PythonEOPBasedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonEOPBasedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEOPHistory_867110817f590882] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getNonInterpolatingProvider_9030f9dc3158fc42] = env->getMethodID(cls, "getNonInterpolatingProvider", "()Lorg/orekit/frames/EOPBasedTransformProvider;");
          mids$[mid_getTransform_02ca17ac51b6a4b2] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_286745ef54e0a7f6] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonEOPBasedTransformProvider::PythonEOPBasedTransformProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonEOPBasedTransformProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonEOPBasedTransformProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonEOPBasedTransformProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonEOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonEOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonEOPBasedTransformProvider_init_(t_PythonEOPBasedTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonEOPBasedTransformProvider_finalize(t_PythonEOPBasedTransformProvider *self);
      static PyObject *t_PythonEOPBasedTransformProvider_pythonExtension(t_PythonEOPBasedTransformProvider *self, PyObject *args);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getEOPHistory0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getNonInterpolatingProvider1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform3(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonEOPBasedTransformProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonEOPBasedTransformProvider_get__self(t_PythonEOPBasedTransformProvider *self, void *data);
      static PyGetSetDef t_PythonEOPBasedTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonEOPBasedTransformProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonEOPBasedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonEOPBasedTransformProvider)[] = {
        { Py_tp_methods, t_PythonEOPBasedTransformProvider__methods_ },
        { Py_tp_init, (void *) t_PythonEOPBasedTransformProvider_init_ },
        { Py_tp_getset, t_PythonEOPBasedTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonEOPBasedTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonEOPBasedTransformProvider, t_PythonEOPBasedTransformProvider, PythonEOPBasedTransformProvider);

      void t_PythonEOPBasedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonEOPBasedTransformProvider), &PY_TYPE_DEF(PythonEOPBasedTransformProvider), module, "PythonEOPBasedTransformProvider", 1);
      }

      void t_PythonEOPBasedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPBasedTransformProvider), "class_", make_descriptor(PythonEOPBasedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPBasedTransformProvider), "wrapfn_", make_descriptor(t_PythonEOPBasedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPBasedTransformProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonEOPBasedTransformProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;", (void *) t_PythonEOPBasedTransformProvider_getEOPHistory0 },
          { "getNonInterpolatingProvider", "()Lorg/orekit/frames/EOPBasedTransformProvider;", (void *) t_PythonEOPBasedTransformProvider_getNonInterpolatingProvider1 },
          { "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;", (void *) t_PythonEOPBasedTransformProvider_getTransform2 },
          { "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;", (void *) t_PythonEOPBasedTransformProvider_getTransform3 },
          { "pythonDecRef", "()V", (void *) t_PythonEOPBasedTransformProvider_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonEOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonEOPBasedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_PythonEOPBasedTransformProvider::wrap_Object(PythonEOPBasedTransformProvider(((t_PythonEOPBasedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonEOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonEOPBasedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonEOPBasedTransformProvider_init_(t_PythonEOPBasedTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonEOPBasedTransformProvider object((jobject) NULL);

        INT_CALL(object = PythonEOPBasedTransformProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonEOPBasedTransformProvider_finalize(t_PythonEOPBasedTransformProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonEOPBasedTransformProvider_pythonExtension(t_PythonEOPBasedTransformProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getEOPHistory0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEOPHistory", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEOPHistory", result);
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getNonInterpolatingProvider1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPBasedTransformProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getNonInterpolatingProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPBasedTransformProvider::initializeClass, &value))
        {
          throwTypeError("getNonInterpolatingProvider", result);
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Transform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Transform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FieldTransform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FieldTransform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static void JNICALL t_PythonEOPBasedTransformProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonEOPBasedTransformProvider_get__self(t_PythonEOPBasedTransformProvider *self, void *data)
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
#include "org/orekit/forces/gravity/potential/PythonPotentialCoefficientsReader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonPotentialCoefficientsReader::class$ = NULL;
          jmethodID *PythonPotentialCoefficientsReader::mids$ = NULL;
          bool PythonPotentialCoefficientsReader::live$ = false;

          jclass PythonPotentialCoefficientsReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonPotentialCoefficientsReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c5d48f261709aa3e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_13b6194a2a01ad07] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getProvider_0c94c2344ee8a0fa] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonPotentialCoefficientsReader::PythonPotentialCoefficientsReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_c5d48f261709aa3e, a0.this$, a1)) {}

          PythonPotentialCoefficientsReader::PythonPotentialCoefficientsReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_13b6194a2a01ad07, a0.this$, a1, a2.this$)) {}

          void PythonPotentialCoefficientsReader::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonPotentialCoefficientsReader::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonPotentialCoefficientsReader::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          static PyObject *t_PythonPotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonPotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonPotentialCoefficientsReader_init_(t_PythonPotentialCoefficientsReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonPotentialCoefficientsReader_finalize(t_PythonPotentialCoefficientsReader *self);
          static PyObject *t_PythonPotentialCoefficientsReader_pythonExtension(t_PythonPotentialCoefficientsReader *self, PyObject *args);
          static jobject JNICALL t_PythonPotentialCoefficientsReader_getProvider0(JNIEnv *jenv, jobject jobj, jboolean a0, jint a1, jint a2);
          static void JNICALL t_PythonPotentialCoefficientsReader_loadData1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonPotentialCoefficientsReader_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonPotentialCoefficientsReader_get__self(t_PythonPotentialCoefficientsReader *self, void *data);
          static PyGetSetDef t_PythonPotentialCoefficientsReader__fields_[] = {
            DECLARE_GET_FIELD(t_PythonPotentialCoefficientsReader, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonPotentialCoefficientsReader__methods_[] = {
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonPotentialCoefficientsReader)[] = {
            { Py_tp_methods, t_PythonPotentialCoefficientsReader__methods_ },
            { Py_tp_init, (void *) t_PythonPotentialCoefficientsReader_init_ },
            { Py_tp_getset, t_PythonPotentialCoefficientsReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonPotentialCoefficientsReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(PythonPotentialCoefficientsReader, t_PythonPotentialCoefficientsReader, PythonPotentialCoefficientsReader);

          void t_PythonPotentialCoefficientsReader::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonPotentialCoefficientsReader), &PY_TYPE_DEF(PythonPotentialCoefficientsReader), module, "PythonPotentialCoefficientsReader", 1);
          }

          void t_PythonPotentialCoefficientsReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPotentialCoefficientsReader), "class_", make_descriptor(PythonPotentialCoefficientsReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPotentialCoefficientsReader), "wrapfn_", make_descriptor(t_PythonPotentialCoefficientsReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPotentialCoefficientsReader), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonPotentialCoefficientsReader::initializeClass);
            JNINativeMethod methods[] = {
              { "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;", (void *) t_PythonPotentialCoefficientsReader_getProvider0 },
              { "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V", (void *) t_PythonPotentialCoefficientsReader_loadData1 },
              { "pythonDecRef", "()V", (void *) t_PythonPotentialCoefficientsReader_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonPotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonPotentialCoefficientsReader::initializeClass, 1)))
              return NULL;
            return t_PythonPotentialCoefficientsReader::wrap_Object(PythonPotentialCoefficientsReader(((t_PythonPotentialCoefficientsReader *) arg)->object.this$));
          }
          static PyObject *t_PythonPotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonPotentialCoefficientsReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonPotentialCoefficientsReader_init_(t_PythonPotentialCoefficientsReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                PythonPotentialCoefficientsReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = PythonPotentialCoefficientsReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                PythonPotentialCoefficientsReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = PythonPotentialCoefficientsReader(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonPotentialCoefficientsReader_finalize(t_PythonPotentialCoefficientsReader *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonPotentialCoefficientsReader_pythonExtension(t_PythonPotentialCoefficientsReader *self, PyObject *args)
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

          static jobject JNICALL t_PythonPotentialCoefficientsReader_getProvider0(JNIEnv *jenv, jobject jobj, jboolean a0, jint a1, jint a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *o0 = (a0 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "getProvider", "Oii", o0, (int) a1, (int) a2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getProvider", result);
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

          static void JNICALL t_PythonPotentialCoefficientsReader_loadData1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static void JNICALL t_PythonPotentialCoefficientsReader_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonPotentialCoefficientsReader_get__self(t_PythonPotentialCoefficientsReader *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialSplineFunction::class$ = NULL;
        jmethodID *PolynomialSplineFunction::mids$ = NULL;
        bool PolynomialSplineFunction::live$ = false;

        jclass PolynomialSplineFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialSplineFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_68b421771a5e77dc] = env->getMethodID(cls, "<init>", "([D[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
            mids$[mid_getKnots_be783177b060994b] = env->getMethodID(cls, "getKnots", "()[D");
            mids$[mid_getN_d6ab429752e7c267] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_getPolynomials_a2c0c7b172d95f6c] = env->getMethodID(cls, "getPolynomials", "()[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_isValidPoint_7bc657d327f0f830] = env->getMethodID(cls, "isValidPoint", "(D)Z");
            mids$[mid_polynomialSplineDerivative_04eec7d35214b344] = env->getMethodID(cls, "polynomialSplineDerivative", "()Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a3b854adede8eaaa] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialSplineFunction::PolynomialSplineFunction(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_68b421771a5e77dc, a0.this$, a1.this$)) {}

        JArray< jdouble > PolynomialSplineFunction::getKnots() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getKnots_be783177b060994b]));
        }

        jint PolynomialSplineFunction::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_d6ab429752e7c267]);
        }

        JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > PolynomialSplineFunction::getPolynomials() const
        {
          return JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getPolynomials_a2c0c7b172d95f6c]));
        }

        jboolean PolynomialSplineFunction::isValidPoint(jdouble a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_7bc657d327f0f830], a0);
        }

        PolynomialSplineFunction PolynomialSplineFunction::polynomialSplineDerivative() const
        {
          return PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_polynomialSplineDerivative_04eec7d35214b344]));
        }

        jdouble PolynomialSplineFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialSplineFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a3b854adede8eaaa], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::Derivative PolynomialSplineFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_PolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialSplineFunction_init_(t_PolynomialSplineFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialSplineFunction_getKnots(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_getN(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_getPolynomials(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_isValidPoint(t_PolynomialSplineFunction *self, PyObject *arg);
        static PyObject *t_PolynomialSplineFunction_polynomialSplineDerivative(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_value(t_PolynomialSplineFunction *self, PyObject *args);
        static PyObject *t_PolynomialSplineFunction_get__knots(t_PolynomialSplineFunction *self, void *data);
        static PyObject *t_PolynomialSplineFunction_get__n(t_PolynomialSplineFunction *self, void *data);
        static PyObject *t_PolynomialSplineFunction_get__polynomials(t_PolynomialSplineFunction *self, void *data);
        static PyGetSetDef t_PolynomialSplineFunction__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialSplineFunction, knots),
          DECLARE_GET_FIELD(t_PolynomialSplineFunction, n),
          DECLARE_GET_FIELD(t_PolynomialSplineFunction, polynomials),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialSplineFunction__methods_[] = {
          DECLARE_METHOD(t_PolynomialSplineFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialSplineFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialSplineFunction, getKnots, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, getN, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, getPolynomials, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, isValidPoint, METH_O),
          DECLARE_METHOD(t_PolynomialSplineFunction, polynomialSplineDerivative, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialSplineFunction)[] = {
          { Py_tp_methods, t_PolynomialSplineFunction__methods_ },
          { Py_tp_init, (void *) t_PolynomialSplineFunction_init_ },
          { Py_tp_getset, t_PolynomialSplineFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialSplineFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialSplineFunction, t_PolynomialSplineFunction, PolynomialSplineFunction);

        void t_PolynomialSplineFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialSplineFunction), &PY_TYPE_DEF(PolynomialSplineFunction), module, "PolynomialSplineFunction", 0);
        }

        void t_PolynomialSplineFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSplineFunction), "class_", make_descriptor(PolynomialSplineFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSplineFunction), "wrapfn_", make_descriptor(t_PolynomialSplineFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSplineFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialSplineFunction::initializeClass, 1)))
            return NULL;
          return t_PolynomialSplineFunction::wrap_Object(PolynomialSplineFunction(((t_PolynomialSplineFunction *) arg)->object.this$));
        }
        static PyObject *t_PolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialSplineFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialSplineFunction_init_(t_PolynomialSplineFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > a1((jobject) NULL);
          PolynomialSplineFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PolynomialSplineFunction(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialSplineFunction_getKnots(t_PolynomialSplineFunction *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getKnots());
          return result.wrap();
        }

        static PyObject *t_PolynomialSplineFunction_getN(t_PolynomialSplineFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialSplineFunction_getPolynomials(t_PolynomialSplineFunction *self)
        {
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolynomials());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
        }

        static PyObject *t_PolynomialSplineFunction_isValidPoint(t_PolynomialSplineFunction *self, PyObject *arg)
        {
          jdouble a0;
          jboolean result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", arg);
          return NULL;
        }

        static PyObject *t_PolynomialSplineFunction_polynomialSplineDerivative(t_PolynomialSplineFunction *self)
        {
          PolynomialSplineFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialSplineDerivative());
          return t_PolynomialSplineFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialSplineFunction_value(t_PolynomialSplineFunction *self, PyObject *args)
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

        static PyObject *t_PolynomialSplineFunction_get__knots(t_PolynomialSplineFunction *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getKnots());
          return value.wrap();
        }

        static PyObject *t_PolynomialSplineFunction_get__n(t_PolynomialSplineFunction *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PolynomialSplineFunction_get__polynomials(t_PolynomialSplineFunction *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolynomials());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/DecimalFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Number.h"
#include "java/util/Currency.h"
#include "java/text/FieldPosition.h"
#include "java/text/DecimalFormatSymbols.h"
#include "java/text/ParsePosition.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/text/AttributedCharacterIterator.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *DecimalFormat::class$ = NULL;
    jmethodID *DecimalFormat::mids$ = NULL;
    bool DecimalFormat::live$ = false;

    jclass DecimalFormat::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/DecimalFormat");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_e76ec57dc8f2afd6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/text/DecimalFormatSymbols;)V");
        mids$[mid_applyLocalizedPattern_105e1eadb709d9ac] = env->getMethodID(cls, "applyLocalizedPattern", "(Ljava/lang/String;)V");
        mids$[mid_applyPattern_105e1eadb709d9ac] = env->getMethodID(cls, "applyPattern", "(Ljava/lang/String;)V");
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_format_bd8d8164e076ccaa] = env->getMethodID(cls, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_8a939fb9d04314c2] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_1f446f5fe940e316] = env->getMethodID(cls, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_formatToCharacterIterator_22f522baf2fb71d1] = env->getMethodID(cls, "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;");
        mids$[mid_getCurrency_e857dd6f37c7fee3] = env->getMethodID(cls, "getCurrency", "()Ljava/util/Currency;");
        mids$[mid_getDecimalFormatSymbols_ca13629df12de0a9] = env->getMethodID(cls, "getDecimalFormatSymbols", "()Ljava/text/DecimalFormatSymbols;");
        mids$[mid_getGroupingSize_d6ab429752e7c267] = env->getMethodID(cls, "getGroupingSize", "()I");
        mids$[mid_getMaximumFractionDigits_d6ab429752e7c267] = env->getMethodID(cls, "getMaximumFractionDigits", "()I");
        mids$[mid_getMaximumIntegerDigits_d6ab429752e7c267] = env->getMethodID(cls, "getMaximumIntegerDigits", "()I");
        mids$[mid_getMinimumFractionDigits_d6ab429752e7c267] = env->getMethodID(cls, "getMinimumFractionDigits", "()I");
        mids$[mid_getMinimumIntegerDigits_d6ab429752e7c267] = env->getMethodID(cls, "getMinimumIntegerDigits", "()I");
        mids$[mid_getMultiplier_d6ab429752e7c267] = env->getMethodID(cls, "getMultiplier", "()I");
        mids$[mid_getNegativePrefix_d2c8eb4129821f0e] = env->getMethodID(cls, "getNegativePrefix", "()Ljava/lang/String;");
        mids$[mid_getNegativeSuffix_d2c8eb4129821f0e] = env->getMethodID(cls, "getNegativeSuffix", "()Ljava/lang/String;");
        mids$[mid_getPositivePrefix_d2c8eb4129821f0e] = env->getMethodID(cls, "getPositivePrefix", "()Ljava/lang/String;");
        mids$[mid_getPositiveSuffix_d2c8eb4129821f0e] = env->getMethodID(cls, "getPositiveSuffix", "()Ljava/lang/String;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isDecimalSeparatorAlwaysShown_eee3de00fe971136] = env->getMethodID(cls, "isDecimalSeparatorAlwaysShown", "()Z");
        mids$[mid_isParseBigDecimal_eee3de00fe971136] = env->getMethodID(cls, "isParseBigDecimal", "()Z");
        mids$[mid_parse_5a7ce414e545ae55] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;");
        mids$[mid_setCurrency_db8d865c2c65c553] = env->getMethodID(cls, "setCurrency", "(Ljava/util/Currency;)V");
        mids$[mid_setDecimalFormatSymbols_89625d521723cb37] = env->getMethodID(cls, "setDecimalFormatSymbols", "(Ljava/text/DecimalFormatSymbols;)V");
        mids$[mid_setDecimalSeparatorAlwaysShown_b35db77cae58639e] = env->getMethodID(cls, "setDecimalSeparatorAlwaysShown", "(Z)V");
        mids$[mid_setGroupingSize_8fd427ab23829bf5] = env->getMethodID(cls, "setGroupingSize", "(I)V");
        mids$[mid_setGroupingUsed_b35db77cae58639e] = env->getMethodID(cls, "setGroupingUsed", "(Z)V");
        mids$[mid_setMaximumFractionDigits_8fd427ab23829bf5] = env->getMethodID(cls, "setMaximumFractionDigits", "(I)V");
        mids$[mid_setMaximumIntegerDigits_8fd427ab23829bf5] = env->getMethodID(cls, "setMaximumIntegerDigits", "(I)V");
        mids$[mid_setMinimumFractionDigits_8fd427ab23829bf5] = env->getMethodID(cls, "setMinimumFractionDigits", "(I)V");
        mids$[mid_setMinimumIntegerDigits_8fd427ab23829bf5] = env->getMethodID(cls, "setMinimumIntegerDigits", "(I)V");
        mids$[mid_setMultiplier_8fd427ab23829bf5] = env->getMethodID(cls, "setMultiplier", "(I)V");
        mids$[mid_setNegativePrefix_105e1eadb709d9ac] = env->getMethodID(cls, "setNegativePrefix", "(Ljava/lang/String;)V");
        mids$[mid_setNegativeSuffix_105e1eadb709d9ac] = env->getMethodID(cls, "setNegativeSuffix", "(Ljava/lang/String;)V");
        mids$[mid_setParseBigDecimal_b35db77cae58639e] = env->getMethodID(cls, "setParseBigDecimal", "(Z)V");
        mids$[mid_setPositivePrefix_105e1eadb709d9ac] = env->getMethodID(cls, "setPositivePrefix", "(Ljava/lang/String;)V");
        mids$[mid_setPositiveSuffix_105e1eadb709d9ac] = env->getMethodID(cls, "setPositiveSuffix", "(Ljava/lang/String;)V");
        mids$[mid_toLocalizedPattern_d2c8eb4129821f0e] = env->getMethodID(cls, "toLocalizedPattern", "()Ljava/lang/String;");
        mids$[mid_toPattern_d2c8eb4129821f0e] = env->getMethodID(cls, "toPattern", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    DecimalFormat::DecimalFormat() : ::java::text::NumberFormat(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    DecimalFormat::DecimalFormat(const ::java::lang::String & a0) : ::java::text::NumberFormat(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    DecimalFormat::DecimalFormat(const ::java::lang::String & a0, const ::java::text::DecimalFormatSymbols & a1) : ::java::text::NumberFormat(env->newObject(initializeClass, &mids$, mid_init$_e76ec57dc8f2afd6, a0.this$, a1.this$)) {}

    void DecimalFormat::applyLocalizedPattern(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_applyLocalizedPattern_105e1eadb709d9ac], a0.this$);
    }

    void DecimalFormat::applyPattern(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_applyPattern_105e1eadb709d9ac], a0.this$);
    }

    ::java::lang::Object DecimalFormat::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_704a5bee58538972]));
    }

    jboolean DecimalFormat::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::StringBuffer DecimalFormat::format(jdouble a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_bd8d8164e076ccaa], a0, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer DecimalFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_8a939fb9d04314c2], a0.this$, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer DecimalFormat::format(jlong a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_1f446f5fe940e316], a0, a1.this$, a2.this$));
    }

    ::java::text::AttributedCharacterIterator DecimalFormat::formatToCharacterIterator(const ::java::lang::Object & a0) const
    {
      return ::java::text::AttributedCharacterIterator(env->callObjectMethod(this$, mids$[mid_formatToCharacterIterator_22f522baf2fb71d1], a0.this$));
    }

    ::java::util::Currency DecimalFormat::getCurrency() const
    {
      return ::java::util::Currency(env->callObjectMethod(this$, mids$[mid_getCurrency_e857dd6f37c7fee3]));
    }

    ::java::text::DecimalFormatSymbols DecimalFormat::getDecimalFormatSymbols() const
    {
      return ::java::text::DecimalFormatSymbols(env->callObjectMethod(this$, mids$[mid_getDecimalFormatSymbols_ca13629df12de0a9]));
    }

    jint DecimalFormat::getGroupingSize() const
    {
      return env->callIntMethod(this$, mids$[mid_getGroupingSize_d6ab429752e7c267]);
    }

    jint DecimalFormat::getMaximumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumFractionDigits_d6ab429752e7c267]);
    }

    jint DecimalFormat::getMaximumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumIntegerDigits_d6ab429752e7c267]);
    }

    jint DecimalFormat::getMinimumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumFractionDigits_d6ab429752e7c267]);
    }

    jint DecimalFormat::getMinimumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumIntegerDigits_d6ab429752e7c267]);
    }

    jint DecimalFormat::getMultiplier() const
    {
      return env->callIntMethod(this$, mids$[mid_getMultiplier_d6ab429752e7c267]);
    }

    ::java::lang::String DecimalFormat::getNegativePrefix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNegativePrefix_d2c8eb4129821f0e]));
    }

    ::java::lang::String DecimalFormat::getNegativeSuffix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNegativeSuffix_d2c8eb4129821f0e]));
    }

    ::java::lang::String DecimalFormat::getPositivePrefix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPositivePrefix_d2c8eb4129821f0e]));
    }

    ::java::lang::String DecimalFormat::getPositiveSuffix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPositiveSuffix_d2c8eb4129821f0e]));
    }

    jint DecimalFormat::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jboolean DecimalFormat::isDecimalSeparatorAlwaysShown() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDecimalSeparatorAlwaysShown_eee3de00fe971136]);
    }

    jboolean DecimalFormat::isParseBigDecimal() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isParseBigDecimal_eee3de00fe971136]);
    }

    ::java::lang::Number DecimalFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Number(env->callObjectMethod(this$, mids$[mid_parse_5a7ce414e545ae55], a0.this$, a1.this$));
    }

    void DecimalFormat::setCurrency(const ::java::util::Currency & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrency_db8d865c2c65c553], a0.this$);
    }

    void DecimalFormat::setDecimalFormatSymbols(const ::java::text::DecimalFormatSymbols & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDecimalFormatSymbols_89625d521723cb37], a0.this$);
    }

    void DecimalFormat::setDecimalSeparatorAlwaysShown(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDecimalSeparatorAlwaysShown_b35db77cae58639e], a0);
    }

    void DecimalFormat::setGroupingSize(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingSize_8fd427ab23829bf5], a0);
    }

    void DecimalFormat::setGroupingUsed(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingUsed_b35db77cae58639e], a0);
    }

    void DecimalFormat::setMaximumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumFractionDigits_8fd427ab23829bf5], a0);
    }

    void DecimalFormat::setMaximumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumIntegerDigits_8fd427ab23829bf5], a0);
    }

    void DecimalFormat::setMinimumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumFractionDigits_8fd427ab23829bf5], a0);
    }

    void DecimalFormat::setMinimumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumIntegerDigits_8fd427ab23829bf5], a0);
    }

    void DecimalFormat::setMultiplier(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMultiplier_8fd427ab23829bf5], a0);
    }

    void DecimalFormat::setNegativePrefix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setNegativePrefix_105e1eadb709d9ac], a0.this$);
    }

    void DecimalFormat::setNegativeSuffix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setNegativeSuffix_105e1eadb709d9ac], a0.this$);
    }

    void DecimalFormat::setParseBigDecimal(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setParseBigDecimal_b35db77cae58639e], a0);
    }

    void DecimalFormat::setPositivePrefix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPositivePrefix_105e1eadb709d9ac], a0.this$);
    }

    void DecimalFormat::setPositiveSuffix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPositiveSuffix_105e1eadb709d9ac], a0.this$);
    }

    ::java::lang::String DecimalFormat::toLocalizedPattern() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toLocalizedPattern_d2c8eb4129821f0e]));
    }

    ::java::lang::String DecimalFormat::toPattern() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toPattern_d2c8eb4129821f0e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_DecimalFormat_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DecimalFormat_instance_(PyTypeObject *type, PyObject *arg);
    static int t_DecimalFormat_init_(t_DecimalFormat *self, PyObject *args, PyObject *kwds);
    static PyObject *t_DecimalFormat_applyLocalizedPattern(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_applyPattern(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_clone(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_equals(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_format(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_formatToCharacterIterator(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getCurrency(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getDecimalFormatSymbols(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getGroupingSize(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getMaximumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMinimumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMultiplier(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getNegativePrefix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getNegativeSuffix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getPositivePrefix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getPositiveSuffix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_hashCode(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_isDecimalSeparatorAlwaysShown(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_isParseBigDecimal(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_parse(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setCurrency(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setDecimalFormatSymbols(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setDecimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setGroupingSize(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setGroupingUsed(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMaximumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMinimumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMultiplier(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setNegativePrefix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setNegativeSuffix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setParseBigDecimal(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setPositivePrefix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setPositiveSuffix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_toLocalizedPattern(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_toPattern(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_get__currency(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__currency(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__decimalFormatSymbols(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__decimalFormatSymbols(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__decimalSeparatorAlwaysShown(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__decimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__groupingSize(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__groupingSize(t_DecimalFormat *self, PyObject *arg, void *data);
    static int t_DecimalFormat_set__groupingUsed(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__maximumFractionDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__maximumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__maximumIntegerDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__maximumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__minimumFractionDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__minimumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__minimumIntegerDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__minimumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__multiplier(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__multiplier(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__negativePrefix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__negativePrefix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__negativeSuffix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__negativeSuffix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__parseBigDecimal(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__parseBigDecimal(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__positivePrefix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__positivePrefix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__positiveSuffix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__positiveSuffix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyGetSetDef t_DecimalFormat__fields_[] = {
      DECLARE_GETSET_FIELD(t_DecimalFormat, currency),
      DECLARE_GETSET_FIELD(t_DecimalFormat, decimalFormatSymbols),
      DECLARE_GETSET_FIELD(t_DecimalFormat, decimalSeparatorAlwaysShown),
      DECLARE_GETSET_FIELD(t_DecimalFormat, groupingSize),
      DECLARE_SET_FIELD(t_DecimalFormat, groupingUsed),
      DECLARE_GETSET_FIELD(t_DecimalFormat, maximumFractionDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, maximumIntegerDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, minimumFractionDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, minimumIntegerDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, multiplier),
      DECLARE_GETSET_FIELD(t_DecimalFormat, negativePrefix),
      DECLARE_GETSET_FIELD(t_DecimalFormat, negativeSuffix),
      DECLARE_GETSET_FIELD(t_DecimalFormat, parseBigDecimal),
      DECLARE_GETSET_FIELD(t_DecimalFormat, positivePrefix),
      DECLARE_GETSET_FIELD(t_DecimalFormat, positiveSuffix),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_DecimalFormat__methods_[] = {
      DECLARE_METHOD(t_DecimalFormat, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormat, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormat, applyLocalizedPattern, METH_O),
      DECLARE_METHOD(t_DecimalFormat, applyPattern, METH_O),
      DECLARE_METHOD(t_DecimalFormat, clone, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, equals, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, format, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, formatToCharacterIterator, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getCurrency, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getDecimalFormatSymbols, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getGroupingSize, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getMaximumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMaximumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMinimumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMinimumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMultiplier, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getNegativePrefix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getNegativeSuffix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getPositivePrefix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getPositiveSuffix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, isDecimalSeparatorAlwaysShown, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, isParseBigDecimal, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, parse, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setCurrency, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setDecimalFormatSymbols, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setDecimalSeparatorAlwaysShown, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setGroupingSize, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setGroupingUsed, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMaximumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMaximumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMinimumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMinimumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMultiplier, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setNegativePrefix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setNegativeSuffix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setParseBigDecimal, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setPositivePrefix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setPositiveSuffix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, toLocalizedPattern, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, toPattern, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DecimalFormat)[] = {
      { Py_tp_methods, t_DecimalFormat__methods_ },
      { Py_tp_init, (void *) t_DecimalFormat_init_ },
      { Py_tp_getset, t_DecimalFormat__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DecimalFormat)[] = {
      &PY_TYPE_DEF(::java::text::NumberFormat),
      NULL
    };

    DEFINE_TYPE(DecimalFormat, t_DecimalFormat, DecimalFormat);

    void t_DecimalFormat::install(PyObject *module)
    {
      installType(&PY_TYPE(DecimalFormat), &PY_TYPE_DEF(DecimalFormat), module, "DecimalFormat", 0);
    }

    void t_DecimalFormat::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormat), "class_", make_descriptor(DecimalFormat::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormat), "wrapfn_", make_descriptor(t_DecimalFormat::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormat), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DecimalFormat_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DecimalFormat::initializeClass, 1)))
        return NULL;
      return t_DecimalFormat::wrap_Object(DecimalFormat(((t_DecimalFormat *) arg)->object.this$));
    }
    static PyObject *t_DecimalFormat_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DecimalFormat::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_DecimalFormat_init_(t_DecimalFormat *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DecimalFormat object((jobject) NULL);

          INT_CALL(object = DecimalFormat());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          DecimalFormat object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = DecimalFormat(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::text::DecimalFormatSymbols a1((jobject) NULL);
          DecimalFormat object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::text::DecimalFormatSymbols::initializeClass, &a0, &a1))
          {
            INT_CALL(object = DecimalFormat(a0, a1));
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

    static PyObject *t_DecimalFormat_applyLocalizedPattern(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.applyLocalizedPattern(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "applyLocalizedPattern", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_applyPattern(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.applyPattern(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "applyPattern", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_clone(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.clone());
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "clone", args, 2);
    }

    static PyObject *t_DecimalFormat_equals(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_DecimalFormat_format(t_DecimalFormat *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          jdouble a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
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
        {
          jlong a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Jkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "format", args, 2);
    }

    static PyObject *t_DecimalFormat_formatToCharacterIterator(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::text::AttributedCharacterIterator result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.formatToCharacterIterator(a0));
        return ::java::text::t_AttributedCharacterIterator::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "formatToCharacterIterator", args, 2);
    }

    static PyObject *t_DecimalFormat_getCurrency(t_DecimalFormat *self, PyObject *args)
    {
      ::java::util::Currency result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getCurrency());
        return ::java::util::t_Currency::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getCurrency", args, 2);
    }

    static PyObject *t_DecimalFormat_getDecimalFormatSymbols(t_DecimalFormat *self)
    {
      ::java::text::DecimalFormatSymbols result((jobject) NULL);
      OBJ_CALL(result = self->object.getDecimalFormatSymbols());
      return ::java::text::t_DecimalFormatSymbols::wrap_Object(result);
    }

    static PyObject *t_DecimalFormat_getGroupingSize(t_DecimalFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getGroupingSize());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DecimalFormat_getMaximumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMaximumFractionDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMaximumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMaximumIntegerDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMaximumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMinimumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMinimumFractionDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMinimumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMinimumIntegerDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMinimumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMultiplier(t_DecimalFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMultiplier());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DecimalFormat_getNegativePrefix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNegativePrefix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_getNegativeSuffix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNegativeSuffix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_getPositivePrefix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPositivePrefix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_getPositiveSuffix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPositiveSuffix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_hashCode(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_DecimalFormat_isDecimalSeparatorAlwaysShown(t_DecimalFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isDecimalSeparatorAlwaysShown());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_DecimalFormat_isParseBigDecimal(t_DecimalFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isParseBigDecimal());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_DecimalFormat_parse(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::text::ParsePosition a1((jobject) NULL);
      ::java::lang::Number result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.parse(a0, a1));
        return ::java::lang::t_Number::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "parse", args, 2);
    }

    static PyObject *t_DecimalFormat_setCurrency(t_DecimalFormat *self, PyObject *args)
    {
      ::java::util::Currency a0((jobject) NULL);

      if (!parseArgs(args, "k", ::java::util::Currency::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setCurrency(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setCurrency", args, 2);
    }

    static PyObject *t_DecimalFormat_setDecimalFormatSymbols(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::text::DecimalFormatSymbols a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::text::DecimalFormatSymbols::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setDecimalFormatSymbols(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDecimalFormatSymbols", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setDecimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setDecimalSeparatorAlwaysShown(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDecimalSeparatorAlwaysShown", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setGroupingSize(t_DecimalFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setGroupingSize(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setGroupingSize", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setGroupingUsed(t_DecimalFormat *self, PyObject *args)
    {
      jboolean a0;

      if (!parseArgs(args, "Z", &a0))
      {
        OBJ_CALL(self->object.setGroupingUsed(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setGroupingUsed", args, 2);
    }

    static PyObject *t_DecimalFormat_setMaximumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMaximumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMaximumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMinimumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMinimumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMinimumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMultiplier(t_DecimalFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMultiplier(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMultiplier", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setNegativePrefix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setNegativePrefix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setNegativePrefix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setNegativeSuffix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setNegativeSuffix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setNegativeSuffix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setParseBigDecimal(t_DecimalFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setParseBigDecimal(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setParseBigDecimal", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setPositivePrefix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setPositivePrefix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPositivePrefix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setPositiveSuffix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setPositiveSuffix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPositiveSuffix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_toLocalizedPattern(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toLocalizedPattern());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_toPattern(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toPattern());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_get__currency(t_DecimalFormat *self, void *data)
    {
      ::java::util::Currency value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(value);
    }
    static int t_DecimalFormat_set__currency(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Currency value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &value))
        {
          INT_CALL(self->object.setCurrency(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currency", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__decimalFormatSymbols(t_DecimalFormat *self, void *data)
    {
      ::java::text::DecimalFormatSymbols value((jobject) NULL);
      OBJ_CALL(value = self->object.getDecimalFormatSymbols());
      return ::java::text::t_DecimalFormatSymbols::wrap_Object(value);
    }
    static int t_DecimalFormat_set__decimalFormatSymbols(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::text::DecimalFormatSymbols value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::text::DecimalFormatSymbols::initializeClass, &value))
        {
          INT_CALL(self->object.setDecimalFormatSymbols(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "decimalFormatSymbols", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__decimalSeparatorAlwaysShown(t_DecimalFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isDecimalSeparatorAlwaysShown());
      Py_RETURN_BOOL(value);
    }
    static int t_DecimalFormat_set__decimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setDecimalSeparatorAlwaysShown(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "decimalSeparatorAlwaysShown", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__groupingSize(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getGroupingSize());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__groupingSize(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setGroupingSize(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingSize", arg);
      return -1;
    }

    static int t_DecimalFormat_set__groupingUsed(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setGroupingUsed(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingUsed", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__maximumFractionDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__maximumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__maximumIntegerDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__maximumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__minimumFractionDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__minimumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__minimumIntegerDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__minimumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__multiplier(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMultiplier());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__multiplier(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMultiplier(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "multiplier", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__negativePrefix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNegativePrefix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__negativePrefix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setNegativePrefix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "negativePrefix", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__negativeSuffix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNegativeSuffix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__negativeSuffix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setNegativeSuffix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "negativeSuffix", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__parseBigDecimal(t_DecimalFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isParseBigDecimal());
      Py_RETURN_BOOL(value);
    }
    static int t_DecimalFormat_set__parseBigDecimal(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setParseBigDecimal(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "parseBigDecimal", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__positivePrefix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPositivePrefix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__positivePrefix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setPositivePrefix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "positivePrefix", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__positiveSuffix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPositiveSuffix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__positiveSuffix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setPositiveSuffix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "positiveSuffix", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventsLogger$LoggedEvent.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventsLogger$LoggedEvent::class$ = NULL;
        jmethodID *EventsLogger$LoggedEvent::mids$ = NULL;
        bool EventsLogger$LoggedEvent::live$ = false;

        jclass EventsLogger$LoggedEvent::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventsLogger$LoggedEvent");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEventDetector_ebd847a60689999d] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getState_8fbfa58855031235] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_isIncreasing_eee3de00fe971136] = env->getMethodID(cls, "isIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate EventsLogger$LoggedEvent::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
        }

        ::org::orekit::propagation::events::EventDetector EventsLogger$LoggedEvent::getEventDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_ebd847a60689999d]));
        }

        ::org::orekit::propagation::SpacecraftState EventsLogger$LoggedEvent::getState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_8fbfa58855031235]));
        }

        jboolean EventsLogger$LoggedEvent::isIncreasing() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isIncreasing_eee3de00fe971136]);
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
        static PyObject *t_EventsLogger$LoggedEvent_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventsLogger$LoggedEvent_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventsLogger$LoggedEvent_getDate(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_getEventDetector(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_getState(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_isIncreasing(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_get__date(t_EventsLogger$LoggedEvent *self, void *data);
        static PyObject *t_EventsLogger$LoggedEvent_get__eventDetector(t_EventsLogger$LoggedEvent *self, void *data);
        static PyObject *t_EventsLogger$LoggedEvent_get__increasing(t_EventsLogger$LoggedEvent *self, void *data);
        static PyObject *t_EventsLogger$LoggedEvent_get__state(t_EventsLogger$LoggedEvent *self, void *data);
        static PyGetSetDef t_EventsLogger$LoggedEvent__fields_[] = {
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, date),
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, eventDetector),
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, increasing),
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, state),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventsLogger$LoggedEvent__methods_[] = {
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, getDate, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, getState, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, isIncreasing, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventsLogger$LoggedEvent)[] = {
          { Py_tp_methods, t_EventsLogger$LoggedEvent__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventsLogger$LoggedEvent__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventsLogger$LoggedEvent)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventsLogger$LoggedEvent, t_EventsLogger$LoggedEvent, EventsLogger$LoggedEvent);

        void t_EventsLogger$LoggedEvent::install(PyObject *module)
        {
          installType(&PY_TYPE(EventsLogger$LoggedEvent), &PY_TYPE_DEF(EventsLogger$LoggedEvent), module, "EventsLogger$LoggedEvent", 0);
        }

        void t_EventsLogger$LoggedEvent::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger$LoggedEvent), "class_", make_descriptor(EventsLogger$LoggedEvent::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger$LoggedEvent), "wrapfn_", make_descriptor(t_EventsLogger$LoggedEvent::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger$LoggedEvent), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventsLogger$LoggedEvent_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventsLogger$LoggedEvent::initializeClass, 1)))
            return NULL;
          return t_EventsLogger$LoggedEvent::wrap_Object(EventsLogger$LoggedEvent(((t_EventsLogger$LoggedEvent *) arg)->object.this$));
        }
        static PyObject *t_EventsLogger$LoggedEvent_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventsLogger$LoggedEvent::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventsLogger$LoggedEvent_getDate(t_EventsLogger$LoggedEvent *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_getEventDetector(t_EventsLogger$LoggedEvent *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_getState(t_EventsLogger$LoggedEvent *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_isIncreasing(t_EventsLogger$LoggedEvent *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isIncreasing());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__date(t_EventsLogger$LoggedEvent *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__eventDetector(t_EventsLogger$LoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__increasing(t_EventsLogger$LoggedEvent *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isIncreasing());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__state(t_EventsLogger$LoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PVCoordinatesProvider::class$ = NULL;
      jmethodID *PVCoordinatesProvider::mids$ = NULL;
      bool PVCoordinatesProvider::live$ = false;

      jclass PVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_abe01c75f7e82353] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::TimeStampedPVCoordinates PVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6236a35378ed47a5], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinatesProvider::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_abe01c75f7e82353], a0.this$, a1.this$));
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
      static PyObject *t_PVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PVCoordinatesProvider_getPVCoordinates(t_PVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_PVCoordinatesProvider_getPosition(t_PVCoordinatesProvider *self, PyObject *args);

      static PyMethodDef t_PVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_PVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PVCoordinatesProvider, t_PVCoordinatesProvider, PVCoordinatesProvider);

      void t_PVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PVCoordinatesProvider), &PY_TYPE_DEF(PVCoordinatesProvider), module, "PVCoordinatesProvider", 0);
      }

      void t_PVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinatesProvider), "class_", make_descriptor(PVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinatesProvider), "wrapfn_", make_descriptor(t_PVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PVCoordinatesProvider::wrap_Object(PVCoordinatesProvider(((t_PVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PVCoordinatesProvider_getPVCoordinates(t_PVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_PVCoordinatesProvider_getPosition(t_PVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/PythonAbstractBatchLSModel.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Object.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/util/Pair.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *PythonAbstractBatchLSModel::class$ = NULL;
        jmethodID *PythonAbstractBatchLSModel::mids$ = NULL;
        bool PythonAbstractBatchLSModel::live$ = false;

        jclass PythonAbstractBatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/PythonAbstractBatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f278310556712c73] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)V");
            mids$[mid_configureHarvester_1a5b9825e639ffce] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_88ee223eb65bb3ed] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_createPropagators_baecdd10c42d41fb] = env->getMethodID(cls, "createPropagators", "(Lorg/hipparchus/linear/RealVector;)[Lorg/orekit/propagation/integration/AbstractIntegratedPropagator;");
            mids$[mid_fetchEvaluatedMeasurement_80131b0affbf5420] = env->getMethodID(cls, "fetchEvaluatedMeasurement", "(ILorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getEvaluationsCount_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluationsCount", "()I");
            mids$[mid_getIterationsCount_d6ab429752e7c267] = env->getMethodID(cls, "getIterationsCount", "()I");
            mids$[mid_getSelectedPropagationDriversForBuilder_9ad7d1bd3e8916dc] = env->getMethodID(cls, "getSelectedPropagationDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_isForwardPropagation_eee3de00fe971136] = env->getMethodID(cls, "isForwardPropagation", "()Z");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_setEvaluationsCounter_98cb188ac0868226] = env->getMethodID(cls, "setEvaluationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_setIterationsCounter_98cb188ac0868226] = env->getMethodID(cls, "setIterationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_value_f5f9cd0684e2ab5e] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractBatchLSModel::PythonAbstractBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->newObject(initializeClass, &mids$, mid_init$_f278310556712c73, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > PythonAbstractBatchLSModel::createPropagators(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator >(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_createPropagators_8b118ba88c8efb0c], a0.this$));
        }

        void PythonAbstractBatchLSModel::fetchEvaluatedMeasurement(jint a0, const ::org::orekit::estimation::measurements::EstimatedMeasurement & a1) const
        {
          env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_fetchEvaluatedMeasurement_80131b0affbf5420], a0, a1.this$);
        }

        void PythonAbstractBatchLSModel::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jint PythonAbstractBatchLSModel::getEvaluationsCount() const
        {
          return env->callNonvirtualIntMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_getEvaluationsCount_d6ab429752e7c267]);
        }

        jint PythonAbstractBatchLSModel::getIterationsCount() const
        {
          return env->callNonvirtualIntMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_getIterationsCount_d6ab429752e7c267]);
        }

        ::org::orekit::utils::ParameterDriversList PythonAbstractBatchLSModel::getSelectedPropagationDriversForBuilder(jint a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_getSelectedPropagationDriversForBuilder_9ad7d1bd3e8916dc], a0));
        }

        jboolean PythonAbstractBatchLSModel::isForwardPropagation() const
        {
          return env->callNonvirtualBooleanMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_isForwardPropagation_eee3de00fe971136]);
        }

        jlong PythonAbstractBatchLSModel::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAbstractBatchLSModel::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
        }

        void PythonAbstractBatchLSModel::setEvaluationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_setEvaluationsCounter_98cb188ac0868226], a0.this$);
        }

        void PythonAbstractBatchLSModel::setIterationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_setIterationsCounter_98cb188ac0868226], a0.this$);
        }

        ::org::hipparchus::util::Pair PythonAbstractBatchLSModel::value(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return ::org::hipparchus::util::Pair(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_value_f5f9cd0684e2ab5e], a0.this$));
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
        static PyObject *t_PythonAbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractBatchLSModel_init_(t_PythonAbstractBatchLSModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractBatchLSModel_createPropagators(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_finalize(t_PythonAbstractBatchLSModel *self);
        static PyObject *t_PythonAbstractBatchLSModel_getEvaluationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_getIterationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_isForwardPropagation(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_pythonExtension(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_setEvaluationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_setIterationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_value(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractBatchLSModel_configureHarvester0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractBatchLSModel_configureOrbits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractBatchLSModel_createPropagators2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement3(JNIEnv *jenv, jobject jobj, jint a0, jobject a1);
        static jint JNICALL t_PythonAbstractBatchLSModel_getEvaluationsCount4(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonAbstractBatchLSModel_getIterationsCount5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder6(JNIEnv *jenv, jobject jobj, jint a0);
        static jboolean JNICALL t_PythonAbstractBatchLSModel_isForwardPropagation7(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractBatchLSModel_pythonDecRef8(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractBatchLSModel_setEvaluationsCounter9(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractBatchLSModel_setIterationsCounter10(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractBatchLSModel_value11(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonAbstractBatchLSModel_get__self(t_PythonAbstractBatchLSModel *self, void *data);
        static PyGetSetDef t_PythonAbstractBatchLSModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractBatchLSModel, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractBatchLSModel__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, createPropagators, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, fetchEvaluatedMeasurement, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, getEvaluationsCount, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, getIterationsCount, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, getSelectedPropagationDriversForBuilder, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, isForwardPropagation, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, pythonExtension, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, setEvaluationsCounter, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, setIterationsCounter, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractBatchLSModel)[] = {
          { Py_tp_methods, t_PythonAbstractBatchLSModel__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractBatchLSModel_init_ },
          { Py_tp_getset, t_PythonAbstractBatchLSModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractBatchLSModel)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::AbstractBatchLSModel),
          NULL
        };

        DEFINE_TYPE(PythonAbstractBatchLSModel, t_PythonAbstractBatchLSModel, PythonAbstractBatchLSModel);

        void t_PythonAbstractBatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractBatchLSModel), &PY_TYPE_DEF(PythonAbstractBatchLSModel), module, "PythonAbstractBatchLSModel", 1);
        }

        void t_PythonAbstractBatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBatchLSModel), "class_", make_descriptor(PythonAbstractBatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBatchLSModel), "wrapfn_", make_descriptor(t_PythonAbstractBatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBatchLSModel), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractBatchLSModel::initializeClass);
          JNINativeMethod methods[] = {
            { "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;", (void *) t_PythonAbstractBatchLSModel_configureHarvester0 },
            { "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;", (void *) t_PythonAbstractBatchLSModel_configureOrbits1 },
            { "createPropagators", "(Lorg/hipparchus/linear/RealVector;)[Lorg/orekit/propagation/integration/AbstractIntegratedPropagator;", (void *) t_PythonAbstractBatchLSModel_createPropagators2 },
            { "fetchEvaluatedMeasurement", "(ILorg/orekit/estimation/measurements/EstimatedMeasurement;)V", (void *) t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement3 },
            { "getEvaluationsCount", "()I", (void *) t_PythonAbstractBatchLSModel_getEvaluationsCount4 },
            { "getIterationsCount", "()I", (void *) t_PythonAbstractBatchLSModel_getIterationsCount5 },
            { "getSelectedPropagationDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder6 },
            { "isForwardPropagation", "()Z", (void *) t_PythonAbstractBatchLSModel_isForwardPropagation7 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractBatchLSModel_pythonDecRef8 },
            { "setEvaluationsCounter", "(Lorg/hipparchus/util/Incrementor;)V", (void *) t_PythonAbstractBatchLSModel_setEvaluationsCounter9 },
            { "setIterationsCounter", "(Lorg/hipparchus/util/Incrementor;)V", (void *) t_PythonAbstractBatchLSModel_setIterationsCounter10 },
            { "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;", (void *) t_PythonAbstractBatchLSModel_value11 },
          };
          env->registerNatives(cls, methods, 12);
        }

        static PyObject *t_PythonAbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractBatchLSModel::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractBatchLSModel::wrap_Object(PythonAbstractBatchLSModel(((t_PythonAbstractBatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractBatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractBatchLSModel_init_(t_PythonAbstractBatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          PythonAbstractBatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractBatchLSModel(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractBatchLSModel_createPropagators(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.createPropagators(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::integration::t_AbstractIntegratedPropagator::wrap_jobject);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "createPropagators", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::estimation::measurements::EstimatedMeasurement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "IK", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
          {
            OBJ_CALL(self->object.fetchEvaluatedMeasurement(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "fetchEvaluatedMeasurement", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_finalize(t_PythonAbstractBatchLSModel *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractBatchLSModel_getEvaluationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEvaluationsCount());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "getEvaluationsCount", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_getIterationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getIterationsCount());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "getIterationsCount", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getSelectedPropagationDriversForBuilder(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "getSelectedPropagationDriversForBuilder", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_isForwardPropagation(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isForwardPropagation());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "isForwardPropagation", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_pythonExtension(t_PythonAbstractBatchLSModel *self, PyObject *args)
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

        static PyObject *t_PythonAbstractBatchLSModel_setEvaluationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEvaluationsCounter(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "setEvaluationsCounter", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_setIterationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setIterationsCounter(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "setIterationsCounter", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_value(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          ::org::hipparchus::util::Pair result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector), ::org::hipparchus::linear::PY_TYPE(RealMatrix));
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "value", args, 2);
        }

        static jobject JNICALL t_PythonAbstractBatchLSModel_configureHarvester0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::MatricesHarvester value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a0));
          PyObject *result = PyObject_CallMethod(obj, "configureHarvester", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::MatricesHarvester::initializeClass, &value))
          {
            throwTypeError("configureHarvester", result);
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

        static jobject JNICALL t_PythonAbstractBatchLSModel_configureOrbits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::Orbit value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_MatricesHarvester::wrap_Object(::org::orekit::propagation::MatricesHarvester(a0));
          PyObject *o1 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a1));
          PyObject *result = PyObject_CallMethod(obj, "configureOrbits", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::Orbit::initializeClass, &value))
          {
            throwTypeError("configureOrbits", result);
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

        static jobject JNICALL t_PythonAbstractBatchLSModel_createPropagators2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::linear::t_RealVector::wrap_Object(::org::hipparchus::linear::RealVector(a0));
          PyObject *result = PyObject_CallMethod(obj, "createPropagators", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[k", ::org::orekit::propagation::integration::AbstractIntegratedPropagator::initializeClass, &value))
          {
            throwTypeError("createPropagators", result);
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

        static void JNICALL t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement3(JNIEnv *jenv, jobject jobj, jint a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o1 = ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurement(a1));
          PyObject *result = PyObject_CallMethod(obj, "fetchEvaluatedMeasurement", "iO", (int) a0, o1);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jint JNICALL t_PythonAbstractBatchLSModel_getEvaluationsCount4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getEvaluationsCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getEvaluationsCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jint JNICALL t_PythonAbstractBatchLSModel_getIterationsCount5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getIterationsCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getIterationsCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder6(JNIEnv *jenv, jobject jobj, jint a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSelectedPropagationDriversForBuilder", "i", (int) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getSelectedPropagationDriversForBuilder", result);
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

        static jboolean JNICALL t_PythonAbstractBatchLSModel_isForwardPropagation7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isForwardPropagation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isForwardPropagation", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonAbstractBatchLSModel_pythonDecRef8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonAbstractBatchLSModel_setEvaluationsCounter9(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::util::t_Incrementor::wrap_Object(::org::hipparchus::util::Incrementor(a0));
          PyObject *result = PyObject_CallMethod(obj, "setEvaluationsCounter", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonAbstractBatchLSModel_setIterationsCounter10(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::util::t_Incrementor::wrap_Object(::org::hipparchus::util::Incrementor(a0));
          PyObject *result = PyObject_CallMethod(obj, "setIterationsCounter", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jobject JNICALL t_PythonAbstractBatchLSModel_value11(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::util::Pair value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::linear::t_RealVector::wrap_Object(::org::hipparchus::linear::RealVector(a0));
          PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::util::Pair::initializeClass, &value))
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

        static PyObject *t_PythonAbstractBatchLSModel_get__self(t_PythonAbstractBatchLSModel *self, void *data)
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
#include "java/lang/Number.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Number::class$ = NULL;
    jmethodID *Number::mids$ = NULL;
    bool Number::live$ = false;

    jclass Number::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Number");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_byteValue_5bc9c54e4a4e6e3f] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_doubleValue_9981f74b2d109da6] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_floatValue_0e3b995f823d65ff] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_intValue_d6ab429752e7c267] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_42c72b98e3c2e08a] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_shortValue_5067fec74ceda473] = env->getMethodID(cls, "shortValue", "()S");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Number::Number() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    jbyte Number::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_5bc9c54e4a4e6e3f]);
    }

    jdouble Number::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_9981f74b2d109da6]);
    }

    jfloat Number::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_0e3b995f823d65ff]);
    }

    jint Number::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_d6ab429752e7c267]);
    }

    jlong Number::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_42c72b98e3c2e08a]);
    }

    jshort Number::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_5067fec74ceda473]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Number_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Number_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Number_init_(t_Number *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Number_byteValue(t_Number *self);
    static PyObject *t_Number_doubleValue(t_Number *self);
    static PyObject *t_Number_floatValue(t_Number *self);
    static PyObject *t_Number_intValue(t_Number *self);
    static PyObject *t_Number_longValue(t_Number *self);
    static PyObject *t_Number_shortValue(t_Number *self);

    static PyMethodDef t_Number__methods_[] = {
      DECLARE_METHOD(t_Number, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Number, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Number, byteValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, doubleValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, floatValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, intValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, longValue, METH_NOARGS),
      DECLARE_METHOD(t_Number, shortValue, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Number)[] = {
      { Py_tp_methods, t_Number__methods_ },
      { Py_tp_init, (void *) t_Number_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Number)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Number, t_Number, Number);

    void t_Number::install(PyObject *module)
    {
      installType(&PY_TYPE(Number), &PY_TYPE_DEF(Number), module, "Number", 0);
    }

    void t_Number::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Number), "class_", make_descriptor(Number::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Number), "wrapfn_", make_descriptor(t_Number::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Number), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Number_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Number::initializeClass, 1)))
        return NULL;
      return t_Number::wrap_Object(Number(((t_Number *) arg)->object.this$));
    }
    static PyObject *t_Number_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Number::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Number_init_(t_Number *self, PyObject *args, PyObject *kwds)
    {
      Number object((jobject) NULL);

      INT_CALL(object = Number());
      self->object = object;

      return 0;
    }

    static PyObject *t_Number_byteValue(t_Number *self)
    {
      jbyte result;
      OBJ_CALL(result = self->object.byteValue());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Number_doubleValue(t_Number *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.doubleValue());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Number_floatValue(t_Number *self)
    {
      jfloat result;
      OBJ_CALL(result = self->object.floatValue());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Number_intValue(t_Number *self)
    {
      jint result;
      OBJ_CALL(result = self->object.intValue());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Number_longValue(t_Number *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.longValue());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Number_shortValue(t_Number *self)
    {
      jshort result;
      OBJ_CALL(result = self->object.shortValue());
      return PyLong_FromLong((long) result);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractTimeInterpolator$InterpolationData.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractTimeInterpolator$InterpolationData::class$ = NULL;
      jmethodID *AbstractTimeInterpolator$InterpolationData::mids$ = NULL;
      bool AbstractTimeInterpolator$InterpolationData::live$ = false;

      jclass AbstractTimeInterpolator$InterpolationData::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractTimeInterpolator$InterpolationData");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCachedSamples_2f7820789ca74a92] = env->getMethodID(cls, "getCachedSamples", "()Lorg/orekit/utils/ImmutableTimeStampedCache;");
          mids$[mid_getInterpolationDate_80e11148db499dda] = env->getMethodID(cls, "getInterpolationDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getNeighborList_d751c1a57012b438] = env->getMethodID(cls, "getNeighborList", "()Ljava/util/List;");
          mids$[mid_getCentralDate_f339c058a2d6bb5d] = env->getMethodID(cls, "getCentralDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::ImmutableTimeStampedCache AbstractTimeInterpolator$InterpolationData::getCachedSamples() const
      {
        return ::org::orekit::utils::ImmutableTimeStampedCache(env->callObjectMethod(this$, mids$[mid_getCachedSamples_2f7820789ca74a92]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeInterpolator$InterpolationData::getInterpolationDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInterpolationDate_80e11148db499dda]));
      }

      ::java::util::List AbstractTimeInterpolator$InterpolationData::getNeighborList() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNeighborList_d751c1a57012b438]));
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
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_of_(t_AbstractTimeInterpolator$InterpolationData *self, PyObject *args);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getNeighborList(t_AbstractTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__neighborList(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__parameters_(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyGetSetDef t_AbstractTimeInterpolator$InterpolationData__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, cachedSamples),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, interpolationDate),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, neighborList),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractTimeInterpolator$InterpolationData__methods_[] = {
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, getCachedSamples, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, getInterpolationDate, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, getNeighborList, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractTimeInterpolator$InterpolationData)[] = {
        { Py_tp_methods, t_AbstractTimeInterpolator$InterpolationData__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractTimeInterpolator$InterpolationData__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractTimeInterpolator$InterpolationData)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractTimeInterpolator$InterpolationData, t_AbstractTimeInterpolator$InterpolationData, AbstractTimeInterpolator$InterpolationData);
      PyObject *t_AbstractTimeInterpolator$InterpolationData::wrap_Object(const AbstractTimeInterpolator$InterpolationData& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator$InterpolationData::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator$InterpolationData *self = (t_AbstractTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractTimeInterpolator$InterpolationData::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator$InterpolationData::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator$InterpolationData *self = (t_AbstractTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractTimeInterpolator$InterpolationData::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractTimeInterpolator$InterpolationData), &PY_TYPE_DEF(AbstractTimeInterpolator$InterpolationData), module, "AbstractTimeInterpolator$InterpolationData", 0);
      }

      void t_AbstractTimeInterpolator$InterpolationData::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator$InterpolationData), "class_", make_descriptor(AbstractTimeInterpolator$InterpolationData::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator$InterpolationData), "wrapfn_", make_descriptor(t_AbstractTimeInterpolator$InterpolationData::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator$InterpolationData), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractTimeInterpolator$InterpolationData::initializeClass, 1)))
          return NULL;
        return t_AbstractTimeInterpolator$InterpolationData::wrap_Object(AbstractTimeInterpolator$InterpolationData(((t_AbstractTimeInterpolator$InterpolationData *) arg)->object.this$));
      }
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractTimeInterpolator$InterpolationData::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_of_(t_AbstractTimeInterpolator$InterpolationData *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::utils::ImmutableTimeStampedCache result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableTimeStampedCache::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getInterpolationDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getNeighborList(t_AbstractTimeInterpolator$InterpolationData *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__parameters_(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::utils::ImmutableTimeStampedCache value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableTimeStampedCache::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getInterpolationDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__neighborList(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/System.h"
#include "java/util/Map.h"
#include "java/io/InputStream.h"
#include "java/lang/SecurityManager.h"
#include "java/lang/System$Logger.h"
#include "java/io/Console.h"
#include "java/util/Properties.h"
#include "java/lang/Class.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *System::class$ = NULL;
    jmethodID *System::mids$ = NULL;
    bool System::live$ = false;
    ::java::io::PrintStream *System::err = NULL;
    ::java::io::InputStream *System::in = NULL;
    ::java::io::PrintStream *System::out = NULL;

    jclass System::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/System");

        mids$ = new jmethodID[max_mid];
        mids$[mid_arraycopy_9ffe6c5e265c38cf] = env->getStaticMethodID(cls, "arraycopy", "(Ljava/lang/Object;ILjava/lang/Object;II)V");
        mids$[mid_clearProperty_95277969d373e11f] = env->getStaticMethodID(cls, "clearProperty", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_console_2beedf7cadcea0bb] = env->getStaticMethodID(cls, "console", "()Ljava/io/Console;");
        mids$[mid_currentTimeMillis_42c72b98e3c2e08a] = env->getStaticMethodID(cls, "currentTimeMillis", "()J");
        mids$[mid_exit_8fd427ab23829bf5] = env->getStaticMethodID(cls, "exit", "(I)V");
        mids$[mid_gc_ff7cb6c242604316] = env->getStaticMethodID(cls, "gc", "()V");
        mids$[mid_getLogger_a9ce29de29c7962d] = env->getStaticMethodID(cls, "getLogger", "(Ljava/lang/String;)Ljava/lang/System$Logger;");
        mids$[mid_getLogger_a8ca924d29f1b3ac] = env->getStaticMethodID(cls, "getLogger", "(Ljava/lang/String;Ljava/util/ResourceBundle;)Ljava/lang/System$Logger;");
        mids$[mid_getProperties_de246c017ced4e31] = env->getStaticMethodID(cls, "getProperties", "()Ljava/util/Properties;");
        mids$[mid_getProperty_95277969d373e11f] = env->getStaticMethodID(cls, "getProperty", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getProperty_91d6dcf90111829e] = env->getStaticMethodID(cls, "getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getSecurityManager_46900078393b946d] = env->getStaticMethodID(cls, "getSecurityManager", "()Ljava/lang/SecurityManager;");
        mids$[mid_getenv_dbcb8bbac6b35e0d] = env->getStaticMethodID(cls, "getenv", "()Ljava/util/Map;");
        mids$[mid_getenv_95277969d373e11f] = env->getStaticMethodID(cls, "getenv", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_identityHashCode_9aa1a0d21cdeb90e] = env->getStaticMethodID(cls, "identityHashCode", "(Ljava/lang/Object;)I");
        mids$[mid_lineSeparator_d2c8eb4129821f0e] = env->getStaticMethodID(cls, "lineSeparator", "()Ljava/lang/String;");
        mids$[mid_load_105e1eadb709d9ac] = env->getStaticMethodID(cls, "load", "(Ljava/lang/String;)V");
        mids$[mid_loadLibrary_105e1eadb709d9ac] = env->getStaticMethodID(cls, "loadLibrary", "(Ljava/lang/String;)V");
        mids$[mid_mapLibraryName_95277969d373e11f] = env->getStaticMethodID(cls, "mapLibraryName", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_nanoTime_42c72b98e3c2e08a] = env->getStaticMethodID(cls, "nanoTime", "()J");
        mids$[mid_runFinalization_ff7cb6c242604316] = env->getStaticMethodID(cls, "runFinalization", "()V");
        mids$[mid_setErr_7a6583f48fc2663f] = env->getStaticMethodID(cls, "setErr", "(Ljava/io/PrintStream;)V");
        mids$[mid_setIn_8f4bef0679d2f8d5] = env->getStaticMethodID(cls, "setIn", "(Ljava/io/InputStream;)V");
        mids$[mid_setOut_7a6583f48fc2663f] = env->getStaticMethodID(cls, "setOut", "(Ljava/io/PrintStream;)V");
        mids$[mid_setProperties_7c18cb0182508f57] = env->getStaticMethodID(cls, "setProperties", "(Ljava/util/Properties;)V");
        mids$[mid_setProperty_91d6dcf90111829e] = env->getStaticMethodID(cls, "setProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_setSecurityManager_a905106515538997] = env->getStaticMethodID(cls, "setSecurityManager", "(Ljava/lang/SecurityManager;)V");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        err = new ::java::io::PrintStream(env->getStaticObjectField(cls, "err", "Ljava/io/PrintStream;"));
        in = new ::java::io::InputStream(env->getStaticObjectField(cls, "in", "Ljava/io/InputStream;"));
        out = new ::java::io::PrintStream(env->getStaticObjectField(cls, "out", "Ljava/io/PrintStream;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void System::arraycopy(const ::java::lang::Object & a0, jint a1, const ::java::lang::Object & a2, jint a3, jint a4)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_arraycopy_9ffe6c5e265c38cf], a0.this$, a1, a2.this$, a3, a4);
    }

    ::java::lang::String System::clearProperty(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_clearProperty_95277969d373e11f], a0.this$));
    }

    ::java::io::Console System::console()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::io::Console(env->callStaticObjectMethod(cls, mids$[mid_console_2beedf7cadcea0bb]));
    }

    jlong System::currentTimeMillis()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_currentTimeMillis_42c72b98e3c2e08a]);
    }

    void System::exit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_exit_8fd427ab23829bf5], a0);
    }

    void System::gc()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_gc_ff7cb6c242604316]);
    }

    ::java::lang::System$Logger System::getLogger(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::System$Logger(env->callStaticObjectMethod(cls, mids$[mid_getLogger_a9ce29de29c7962d], a0.this$));
    }

    ::java::lang::System$Logger System::getLogger(const ::java::lang::String & a0, const ::java::util::ResourceBundle & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::System$Logger(env->callStaticObjectMethod(cls, mids$[mid_getLogger_a8ca924d29f1b3ac], a0.this$, a1.this$));
    }

    ::java::util::Properties System::getProperties()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Properties(env->callStaticObjectMethod(cls, mids$[mid_getProperties_de246c017ced4e31]));
    }

    ::java::lang::String System::getProperty(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getProperty_95277969d373e11f], a0.this$));
    }

    ::java::lang::String System::getProperty(const ::java::lang::String & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getProperty_91d6dcf90111829e], a0.this$, a1.this$));
    }

    ::java::lang::SecurityManager System::getSecurityManager()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::SecurityManager(env->callStaticObjectMethod(cls, mids$[mid_getSecurityManager_46900078393b946d]));
    }

    ::java::util::Map System::getenv()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_getenv_dbcb8bbac6b35e0d]));
    }

    ::java::lang::String System::getenv(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getenv_95277969d373e11f], a0.this$));
    }

    jint System::identityHashCode(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_identityHashCode_9aa1a0d21cdeb90e], a0.this$);
    }

    ::java::lang::String System::lineSeparator()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_lineSeparator_d2c8eb4129821f0e]));
    }

    void System::load(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_load_105e1eadb709d9ac], a0.this$);
    }

    void System::loadLibrary(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_loadLibrary_105e1eadb709d9ac], a0.this$);
    }

    ::java::lang::String System::mapLibraryName(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_mapLibraryName_95277969d373e11f], a0.this$));
    }

    jlong System::nanoTime()
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_nanoTime_42c72b98e3c2e08a]);
    }

    void System::runFinalization()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_runFinalization_ff7cb6c242604316]);
    }

    void System::setErr(const ::java::io::PrintStream & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setErr_7a6583f48fc2663f], a0.this$);
    }

    void System::setIn(const ::java::io::InputStream & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setIn_8f4bef0679d2f8d5], a0.this$);
    }

    void System::setOut(const ::java::io::PrintStream & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setOut_7a6583f48fc2663f], a0.this$);
    }

    void System::setProperties(const ::java::util::Properties & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setProperties_7c18cb0182508f57], a0.this$);
    }

    ::java::lang::String System::setProperty(const ::java::lang::String & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_setProperty_91d6dcf90111829e], a0.this$, a1.this$));
    }

    void System::setSecurityManager(const ::java::lang::SecurityManager & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setSecurityManager_a905106515538997], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_System_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_arraycopy(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_clearProperty(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_console(PyTypeObject *type);
    static PyObject *t_System_currentTimeMillis(PyTypeObject *type);
    static PyObject *t_System_exit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_gc(PyTypeObject *type);
    static PyObject *t_System_getLogger(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_getProperties(PyTypeObject *type);
    static PyObject *t_System_getProperty(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_getSecurityManager(PyTypeObject *type);
    static PyObject *t_System_getenv(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_identityHashCode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_lineSeparator(PyTypeObject *type);
    static PyObject *t_System_load(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_loadLibrary(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_mapLibraryName(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_nanoTime(PyTypeObject *type);
    static PyObject *t_System_runFinalization(PyTypeObject *type);
    static PyObject *t_System_setErr(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setIn(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setOut(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setProperties(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_setProperty(PyTypeObject *type, PyObject *args);
    static PyObject *t_System_setSecurityManager(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System_get__env(t_System *self, void *data);
    static int t_System_set__err(t_System *self, PyObject *arg, void *data);
    static int t_System_set__in(t_System *self, PyObject *arg, void *data);
    static int t_System_set__out(t_System *self, PyObject *arg, void *data);
    static PyObject *t_System_get__properties(t_System *self, void *data);
    static int t_System_set__properties(t_System *self, PyObject *arg, void *data);
    static PyObject *t_System_get__securityManager(t_System *self, void *data);
    static int t_System_set__securityManager(t_System *self, PyObject *arg, void *data);
    static PyGetSetDef t_System__fields_[] = {
      DECLARE_GET_FIELD(t_System, env),
      DECLARE_SET_FIELD(t_System, err),
      DECLARE_SET_FIELD(t_System, in),
      DECLARE_SET_FIELD(t_System, out),
      DECLARE_GETSET_FIELD(t_System, properties),
      DECLARE_GETSET_FIELD(t_System, securityManager),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_System__methods_[] = {
      DECLARE_METHOD(t_System, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, arraycopy, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, clearProperty, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, console, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, currentTimeMillis, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, exit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, gc, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getLogger, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getProperties, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getProperty, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getSecurityManager, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, getenv, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, identityHashCode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, lineSeparator, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, load, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, loadLibrary, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, mapLibraryName, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, nanoTime, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, runFinalization, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_System, setErr, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setIn, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setOut, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setProperties, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System, setProperty, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_System, setSecurityManager, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(System)[] = {
      { Py_tp_methods, t_System__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_System__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(System)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(System, t_System, System);

    void t_System::install(PyObject *module)
    {
      installType(&PY_TYPE(System), &PY_TYPE_DEF(System), module, "System", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "Logger", make_descriptor(&PY_TYPE_DEF(System$Logger)));
    }

    void t_System::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "class_", make_descriptor(System::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "wrapfn_", make_descriptor(t_System::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "boxfn_", make_descriptor(boxObject));
      env->getClass(System::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "err", make_descriptor(::java::io::t_PrintStream::wrap_Object(*System::err)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "in", make_descriptor(::java::io::t_InputStream::wrap_Object(*System::in)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System), "out", make_descriptor(::java::io::t_PrintStream::wrap_Object(*System::out)));
    }

    static PyObject *t_System_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, System::initializeClass, 1)))
        return NULL;
      return t_System::wrap_Object(System(((t_System *) arg)->object.this$));
    }
    static PyObject *t_System_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, System::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_System_arraycopy(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint a1;
      ::java::lang::Object a2((jobject) NULL);
      jint a3;
      jint a4;

      if (!parseArgs(args, "oIoII", &a0, &a1, &a2, &a3, &a4))
      {
        OBJ_CALL(::java::lang::System::arraycopy(a0, a1, a2, a3, a4));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "arraycopy", args);
      return NULL;
    }

    static PyObject *t_System_clearProperty(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::System::clearProperty(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "clearProperty", arg);
      return NULL;
    }

    static PyObject *t_System_console(PyTypeObject *type)
    {
      ::java::io::Console result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::console());
      return ::java::io::t_Console::wrap_Object(result);
    }

    static PyObject *t_System_currentTimeMillis(PyTypeObject *type)
    {
      jlong result;
      OBJ_CALL(result = ::java::lang::System::currentTimeMillis());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_System_exit(PyTypeObject *type, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(::java::lang::System::exit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "exit", arg);
      return NULL;
    }

    static PyObject *t_System_gc(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::System::gc());
      Py_RETURN_NONE;
    }

    static PyObject *t_System_getLogger(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::System$Logger result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::System::getLogger(a0));
            return ::java::lang::t_System$Logger::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::ResourceBundle a1((jobject) NULL);
          ::java::lang::System$Logger result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::util::ResourceBundle::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::System::getLogger(a0, a1));
            return ::java::lang::t_System$Logger::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getLogger", args);
      return NULL;
    }

    static PyObject *t_System_getProperties(PyTypeObject *type)
    {
      ::java::util::Properties result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::getProperties());
      return ::java::util::t_Properties::wrap_Object(result);
    }

    static PyObject *t_System_getProperty(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::System::getProperty(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::System::getProperty(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getProperty", args);
      return NULL;
    }

    static PyObject *t_System_getSecurityManager(PyTypeObject *type)
    {
      ::java::lang::SecurityManager result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::getSecurityManager());
      return ::java::lang::t_SecurityManager::wrap_Object(result);
    }

    static PyObject *t_System_getenv(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = ::java::lang::System::getenv());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(String));
        }
        break;
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::System::getenv(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getenv", args);
      return NULL;
    }

    static PyObject *t_System_identityHashCode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::lang::System::identityHashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "identityHashCode", arg);
      return NULL;
    }

    static PyObject *t_System_lineSeparator(PyTypeObject *type)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::System::lineSeparator());
      return j2p(result);
    }

    static PyObject *t_System_load(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(::java::lang::System::load(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "load", arg);
      return NULL;
    }

    static PyObject *t_System_loadLibrary(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(::java::lang::System::loadLibrary(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "loadLibrary", arg);
      return NULL;
    }

    static PyObject *t_System_mapLibraryName(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::System::mapLibraryName(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "mapLibraryName", arg);
      return NULL;
    }

    static PyObject *t_System_nanoTime(PyTypeObject *type)
    {
      jlong result;
      OBJ_CALL(result = ::java::lang::System::nanoTime());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_System_runFinalization(PyTypeObject *type)
    {
      OBJ_CALL(::java::lang::System::runFinalization());
      Py_RETURN_NONE;
    }

    static PyObject *t_System_setErr(PyTypeObject *type, PyObject *arg)
    {
      ::java::io::PrintStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setErr(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setErr", arg);
      return NULL;
    }

    static PyObject *t_System_setIn(PyTypeObject *type, PyObject *arg)
    {
      ::java::io::InputStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setIn(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setIn", arg);
      return NULL;
    }

    static PyObject *t_System_setOut(PyTypeObject *type, PyObject *arg)
    {
      ::java::io::PrintStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setOut(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setOut", arg);
      return NULL;
    }

    static PyObject *t_System_setProperties(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Properties a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::Properties::initializeClass, &a0, &p0, ::java::util::t_Properties::parameters_))
      {
        OBJ_CALL(::java::lang::System::setProperties(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setProperties", arg);
      return NULL;
    }

    static PyObject *t_System_setProperty(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::System::setProperty(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "setProperty", args);
      return NULL;
    }

    static PyObject *t_System_setSecurityManager(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::SecurityManager a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::lang::SecurityManager::initializeClass, &a0))
      {
        OBJ_CALL(::java::lang::System::setSecurityManager(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setSecurityManager", arg);
      return NULL;
    }

    static PyObject *t_System_get__env(t_System *self, void *data)
    {
      ::java::util::Map value((jobject) NULL);
      OBJ_CALL(value = self->object.getenv());
      return ::java::util::t_Map::wrap_Object(value);
    }

    static int t_System_set__err(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::io::PrintStream value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &value))
        {
          INT_CALL(self->object.setErr(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "err", arg);
      return -1;
    }

    static int t_System_set__in(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::io::InputStream value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &value))
        {
          INT_CALL(self->object.setIn(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "in", arg);
      return -1;
    }

    static int t_System_set__out(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::io::PrintStream value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::io::PrintStream::initializeClass, &value))
        {
          INT_CALL(self->object.setOut(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "out", arg);
      return -1;
    }

    static PyObject *t_System_get__properties(t_System *self, void *data)
    {
      ::java::util::Properties value((jobject) NULL);
      OBJ_CALL(value = self->object.getProperties());
      return ::java::util::t_Properties::wrap_Object(value);
    }
    static int t_System_set__properties(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Properties value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Properties::initializeClass, &value))
        {
          INT_CALL(self->object.setProperties(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "properties", arg);
      return -1;
    }

    static PyObject *t_System_get__securityManager(t_System *self, void *data)
    {
      ::java::lang::SecurityManager value((jobject) NULL);
      OBJ_CALL(value = self->object.getSecurityManager());
      return ::java::lang::t_SecurityManager::wrap_Object(value);
    }
    static int t_System_set__securityManager(t_System *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::SecurityManager value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::lang::SecurityManager::initializeClass, &value))
        {
          INT_CALL(self->object.setSecurityManager(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "securityManager", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonItrfVersionProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonItrfVersionProvider::class$ = NULL;
      jmethodID *PythonItrfVersionProvider::mids$ = NULL;
      bool PythonItrfVersionProvider::live$ = false;

      jclass PythonItrfVersionProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonItrfVersionProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getConfiguration_2cd40ae1f6a1f844] = env->getMethodID(cls, "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonItrfVersionProvider::PythonItrfVersionProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonItrfVersionProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonItrfVersionProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonItrfVersionProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonItrfVersionProvider_init_(t_PythonItrfVersionProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonItrfVersionProvider_finalize(t_PythonItrfVersionProvider *self);
      static PyObject *t_PythonItrfVersionProvider_pythonExtension(t_PythonItrfVersionProvider *self, PyObject *args);
      static jobject JNICALL t_PythonItrfVersionProvider_getConfiguration0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1);
      static void JNICALL t_PythonItrfVersionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonItrfVersionProvider_get__self(t_PythonItrfVersionProvider *self, void *data);
      static PyGetSetDef t_PythonItrfVersionProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonItrfVersionProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonItrfVersionProvider__methods_[] = {
        DECLARE_METHOD(t_PythonItrfVersionProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonItrfVersionProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonItrfVersionProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonItrfVersionProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonItrfVersionProvider)[] = {
        { Py_tp_methods, t_PythonItrfVersionProvider__methods_ },
        { Py_tp_init, (void *) t_PythonItrfVersionProvider_init_ },
        { Py_tp_getset, t_PythonItrfVersionProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonItrfVersionProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonItrfVersionProvider, t_PythonItrfVersionProvider, PythonItrfVersionProvider);

      void t_PythonItrfVersionProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonItrfVersionProvider), &PY_TYPE_DEF(PythonItrfVersionProvider), module, "PythonItrfVersionProvider", 1);
      }

      void t_PythonItrfVersionProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonItrfVersionProvider), "class_", make_descriptor(PythonItrfVersionProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonItrfVersionProvider), "wrapfn_", make_descriptor(t_PythonItrfVersionProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonItrfVersionProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonItrfVersionProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;", (void *) t_PythonItrfVersionProvider_getConfiguration0 },
          { "pythonDecRef", "()V", (void *) t_PythonItrfVersionProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonItrfVersionProvider::initializeClass, 1)))
          return NULL;
        return t_PythonItrfVersionProvider::wrap_Object(PythonItrfVersionProvider(((t_PythonItrfVersionProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonItrfVersionProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonItrfVersionProvider_init_(t_PythonItrfVersionProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonItrfVersionProvider object((jobject) NULL);

        INT_CALL(object = PythonItrfVersionProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonItrfVersionProvider_finalize(t_PythonItrfVersionProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonItrfVersionProvider_pythonExtension(t_PythonItrfVersionProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonItrfVersionProvider_getConfiguration0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonItrfVersionProvider::mids$[PythonItrfVersionProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "getConfiguration", "Oi", o0, (int) a1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, &value))
        {
          throwTypeError("getConfiguration", result);
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

      static void JNICALL t_PythonItrfVersionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonItrfVersionProvider::mids$[PythonItrfVersionProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonItrfVersionProvider::mids$[PythonItrfVersionProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonItrfVersionProvider_get__self(t_PythonItrfVersionProvider *self, void *data)
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
#include "org/orekit/propagation/analytical/FieldKeplerianPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
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
            mids$[mid_init$_3e61171636c74f2c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
            mids$[mid_init$_a445aea77f92643d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_c9915b1ed04da18a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_342804735e394007] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_0a3850612d59f85c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_resetInitialState_8062511934471166] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getMass_cf010978f3c5a913] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_propagateOrbit_78985b34baac5c8e] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_resetIntermediateState_e90aea08a7a0ab5e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_3e61171636c74f2c, a0.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a445aea77f92643d, a0.this$, a1.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c9915b1ed04da18a, a0.this$, a1.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_342804735e394007, a0.this$, a1.this$, a2.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_0a3850612d59f85c, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::java::util::List FieldKeplerianPropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }

        void FieldKeplerianPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8062511934471166], a0.this$);
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
#include "org/orekit/utils/OccultationEngine$OccultationAngles.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OccultationEngine$OccultationAngles::class$ = NULL;
      jmethodID *OccultationEngine$OccultationAngles::mids$ = NULL;
      bool OccultationEngine$OccultationAngles::live$ = false;

      jclass OccultationEngine$OccultationAngles::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OccultationEngine$OccultationAngles");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLimbRadius_9981f74b2d109da6] = env->getMethodID(cls, "getLimbRadius", "()D");
          mids$[mid_getOccultedApparentRadius_9981f74b2d109da6] = env->getMethodID(cls, "getOccultedApparentRadius", "()D");
          mids$[mid_getSeparation_9981f74b2d109da6] = env->getMethodID(cls, "getSeparation", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble OccultationEngine$OccultationAngles::getLimbRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLimbRadius_9981f74b2d109da6]);
      }

      jdouble OccultationEngine$OccultationAngles::getOccultedApparentRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOccultedApparentRadius_9981f74b2d109da6]);
      }

      jdouble OccultationEngine$OccultationAngles::getSeparation() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSeparation_9981f74b2d109da6]);
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
      static PyObject *t_OccultationEngine$OccultationAngles_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$OccultationAngles_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$OccultationAngles_getLimbRadius(t_OccultationEngine$OccultationAngles *self);
      static PyObject *t_OccultationEngine$OccultationAngles_getOccultedApparentRadius(t_OccultationEngine$OccultationAngles *self);
      static PyObject *t_OccultationEngine$OccultationAngles_getSeparation(t_OccultationEngine$OccultationAngles *self);
      static PyObject *t_OccultationEngine$OccultationAngles_get__limbRadius(t_OccultationEngine$OccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$OccultationAngles_get__occultedApparentRadius(t_OccultationEngine$OccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$OccultationAngles_get__separation(t_OccultationEngine$OccultationAngles *self, void *data);
      static PyGetSetDef t_OccultationEngine$OccultationAngles__fields_[] = {
        DECLARE_GET_FIELD(t_OccultationEngine$OccultationAngles, limbRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$OccultationAngles, occultedApparentRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$OccultationAngles, separation),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OccultationEngine$OccultationAngles__methods_[] = {
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, getLimbRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, getOccultedApparentRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, getSeparation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OccultationEngine$OccultationAngles)[] = {
        { Py_tp_methods, t_OccultationEngine$OccultationAngles__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OccultationEngine$OccultationAngles__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OccultationEngine$OccultationAngles)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OccultationEngine$OccultationAngles, t_OccultationEngine$OccultationAngles, OccultationEngine$OccultationAngles);

      void t_OccultationEngine$OccultationAngles::install(PyObject *module)
      {
        installType(&PY_TYPE(OccultationEngine$OccultationAngles), &PY_TYPE_DEF(OccultationEngine$OccultationAngles), module, "OccultationEngine$OccultationAngles", 0);
      }

      void t_OccultationEngine$OccultationAngles::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$OccultationAngles), "class_", make_descriptor(OccultationEngine$OccultationAngles::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$OccultationAngles), "wrapfn_", make_descriptor(t_OccultationEngine$OccultationAngles::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$OccultationAngles), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OccultationEngine$OccultationAngles_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OccultationEngine$OccultationAngles::initializeClass, 1)))
          return NULL;
        return t_OccultationEngine$OccultationAngles::wrap_Object(OccultationEngine$OccultationAngles(((t_OccultationEngine$OccultationAngles *) arg)->object.this$));
      }
      static PyObject *t_OccultationEngine$OccultationAngles_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OccultationEngine$OccultationAngles::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OccultationEngine$OccultationAngles_getLimbRadius(t_OccultationEngine$OccultationAngles *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLimbRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_getOccultedApparentRadius(t_OccultationEngine$OccultationAngles *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOccultedApparentRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_getSeparation(t_OccultationEngine$OccultationAngles *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSeparation());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_get__limbRadius(t_OccultationEngine$OccultationAngles *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLimbRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_get__occultedApparentRadius(t_OccultationEngine$OccultationAngles *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOccultedApparentRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_get__separation(t_OccultationEngine$OccultationAngles *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSeparation());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *Orbit::class$ = NULL;
      jmethodID *Orbit::mids$ = NULL;
      bool Orbit::live$ = false;

      jclass Orbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/Orbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addKeplerContribution_3ef35668c0b1580f] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_getA_9981f74b2d109da6] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_9981f74b2d109da6] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getE_9981f74b2d109da6] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_9981f74b2d109da6] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_9981f74b2d109da6] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_9981f74b2d109da6] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_9981f74b2d109da6] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_9981f74b2d109da6] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_9981f74b2d109da6] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_9981f74b2d109da6] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getJacobianWrtCartesian_af600cc7c7a74264] = env->getMethodID(cls, "getJacobianWrtCartesian", "(Lorg/orekit/orbits/PositionAngleType;[[D)V");
          mids$[mid_getJacobianWrtParameters_af600cc7c7a74264] = env->getMethodID(cls, "getJacobianWrtParameters", "(Lorg/orekit/orbits/PositionAngleType;[[D)V");
          mids$[mid_getKeplerianMeanMotion_9981f74b2d109da6] = env->getMethodID(cls, "getKeplerianMeanMotion", "()D");
          mids$[mid_getKeplerianPeriod_9981f74b2d109da6] = env->getMethodID(cls, "getKeplerianPeriod", "()D");
          mids$[mid_getLE_9981f74b2d109da6] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_9981f74b2d109da6] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_9981f74b2d109da6] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_9981f74b2d109da6] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_9981f74b2d109da6] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_9981f74b2d109da6] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getMeanAnomalyDotWrtA_9981f74b2d109da6] = env->getMethodID(cls, "getMeanAnomalyDotWrtA", "()D");
          mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
          mids$[mid_getPVCoordinates_674031698a428ce8] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_76634063992a70d7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_032312bdeb3f2f93] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPosition_5996cdbecf4f0d06] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getType_495f818d3570b7f5] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_eee3de00fe971136] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_isElliptical_eee3de00fe971136] = env->getMethodID(cls, "isElliptical", "()Z");
          mids$[mid_shiftedBy_d1516833b1f81441] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/Orbit;");
          mids$[mid_initPosition_032312bdeb3f2f93] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_initPVCoordinates_674031698a428ce8] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");
          mids$[mid_fillHalfRow_a8f7f4c0cc5ceddd] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_1d3f8641aec0478f] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_f3c8562ee4d2f5f7] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_b43fc5b33307d469] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_798e20ec3d655ef5] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_296d5bbbcf8782f7] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_hasNonKeplerianAcceleration_b214df3c89ce1ac9] = env->getStaticMethodID(cls, "hasNonKeplerianAcceleration", "(Lorg/orekit/utils/PVCoordinates;D)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void Orbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_3ef35668c0b1580f], a0.this$, a1, a2.this$);
      }

      jdouble Orbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_9981f74b2d109da6]);
      }

      jdouble Orbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_9981f74b2d109da6]);
      }

      ::org::orekit::time::AbsoluteDate Orbit::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      jdouble Orbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_9981f74b2d109da6]);
      }

      jdouble Orbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_9981f74b2d109da6]);
      }

      jdouble Orbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_9981f74b2d109da6]);
      }

      jdouble Orbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_9981f74b2d109da6]);
      }

      jdouble Orbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_9981f74b2d109da6]);
      }

      jdouble Orbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_9981f74b2d109da6]);
      }

      ::org::orekit::frames::Frame Orbit::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      jdouble Orbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_9981f74b2d109da6]);
      }

      jdouble Orbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_9981f74b2d109da6]);
      }

      jdouble Orbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_9981f74b2d109da6]);
      }

      jdouble Orbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_9981f74b2d109da6]);
      }

      jdouble Orbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_9981f74b2d109da6]);
      }

      jdouble Orbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_9981f74b2d109da6]);
      }

      void Orbit::getJacobianWrtCartesian(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< jdouble > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtCartesian_af600cc7c7a74264], a0.this$, a1.this$);
      }

      void Orbit::getJacobianWrtParameters(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< jdouble > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtParameters_af600cc7c7a74264], a0.this$, a1.this$);
      }

      jdouble Orbit::getKeplerianMeanMotion() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianMeanMotion_9981f74b2d109da6]);
      }

      jdouble Orbit::getKeplerianPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianPeriod_9981f74b2d109da6]);
      }

      jdouble Orbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_9981f74b2d109da6]);
      }

      jdouble Orbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_9981f74b2d109da6]);
      }

      jdouble Orbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_9981f74b2d109da6]);
      }

      jdouble Orbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_9981f74b2d109da6]);
      }

      jdouble Orbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_9981f74b2d109da6]);
      }

      jdouble Orbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_9981f74b2d109da6]);
      }

      jdouble Orbit::getMeanAnomalyDotWrtA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMeanAnomalyDotWrtA_9981f74b2d109da6]);
      }

      jdouble Orbit::getMu() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Orbit::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_674031698a428ce8]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Orbit::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_76634063992a70d7], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Orbit::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6236a35378ed47a5], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Orbit::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Orbit::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_5996cdbecf4f0d06], a0.this$));
      }

      ::org::orekit::orbits::OrbitType Orbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_495f818d3570b7f5]));
      }

      jboolean Orbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_eee3de00fe971136]);
      }

      jboolean Orbit::isElliptical() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isElliptical_eee3de00fe971136]);
      }

      Orbit Orbit::shiftedBy(jdouble a0) const
      {
        return Orbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_d1516833b1f81441], a0));
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
      static PyObject *t_Orbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Orbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Orbit_addKeplerContribution(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getA(t_Orbit *self);
      static PyObject *t_Orbit_getADot(t_Orbit *self);
      static PyObject *t_Orbit_getDate(t_Orbit *self);
      static PyObject *t_Orbit_getE(t_Orbit *self);
      static PyObject *t_Orbit_getEDot(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialEx(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialExDot(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialEy(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialEyDot(t_Orbit *self);
      static PyObject *t_Orbit_getFrame(t_Orbit *self);
      static PyObject *t_Orbit_getHx(t_Orbit *self);
      static PyObject *t_Orbit_getHxDot(t_Orbit *self);
      static PyObject *t_Orbit_getHy(t_Orbit *self);
      static PyObject *t_Orbit_getHyDot(t_Orbit *self);
      static PyObject *t_Orbit_getI(t_Orbit *self);
      static PyObject *t_Orbit_getIDot(t_Orbit *self);
      static PyObject *t_Orbit_getJacobianWrtCartesian(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getJacobianWrtParameters(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getKeplerianMeanMotion(t_Orbit *self);
      static PyObject *t_Orbit_getKeplerianPeriod(t_Orbit *self);
      static PyObject *t_Orbit_getLE(t_Orbit *self);
      static PyObject *t_Orbit_getLEDot(t_Orbit *self);
      static PyObject *t_Orbit_getLM(t_Orbit *self);
      static PyObject *t_Orbit_getLMDot(t_Orbit *self);
      static PyObject *t_Orbit_getLv(t_Orbit *self);
      static PyObject *t_Orbit_getLvDot(t_Orbit *self);
      static PyObject *t_Orbit_getMeanAnomalyDotWrtA(t_Orbit *self);
      static PyObject *t_Orbit_getMu(t_Orbit *self);
      static PyObject *t_Orbit_getPVCoordinates(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getPosition(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getType(t_Orbit *self);
      static PyObject *t_Orbit_hasDerivatives(t_Orbit *self);
      static PyObject *t_Orbit_isElliptical(t_Orbit *self);
      static PyObject *t_Orbit_shiftedBy(t_Orbit *self, PyObject *arg);
      static PyObject *t_Orbit_get__a(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__aDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__date(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__e(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__eDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__elliptical(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialEx(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialExDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialEy(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialEyDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__frame(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hx(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hxDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hy(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hyDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__i(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__iDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__keplerianMeanMotion(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__keplerianPeriod(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lE(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lEDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lM(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lMDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lv(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lvDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__meanAnomalyDotWrtA(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__mu(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__pVCoordinates(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__position(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__type(t_Orbit *self, void *data);
      static PyGetSetDef t_Orbit__fields_[] = {
        DECLARE_GET_FIELD(t_Orbit, a),
        DECLARE_GET_FIELD(t_Orbit, aDot),
        DECLARE_GET_FIELD(t_Orbit, date),
        DECLARE_GET_FIELD(t_Orbit, e),
        DECLARE_GET_FIELD(t_Orbit, eDot),
        DECLARE_GET_FIELD(t_Orbit, elliptical),
        DECLARE_GET_FIELD(t_Orbit, equinoctialEx),
        DECLARE_GET_FIELD(t_Orbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_Orbit, equinoctialEy),
        DECLARE_GET_FIELD(t_Orbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_Orbit, frame),
        DECLARE_GET_FIELD(t_Orbit, hx),
        DECLARE_GET_FIELD(t_Orbit, hxDot),
        DECLARE_GET_FIELD(t_Orbit, hy),
        DECLARE_GET_FIELD(t_Orbit, hyDot),
        DECLARE_GET_FIELD(t_Orbit, i),
        DECLARE_GET_FIELD(t_Orbit, iDot),
        DECLARE_GET_FIELD(t_Orbit, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_Orbit, keplerianPeriod),
        DECLARE_GET_FIELD(t_Orbit, lE),
        DECLARE_GET_FIELD(t_Orbit, lEDot),
        DECLARE_GET_FIELD(t_Orbit, lM),
        DECLARE_GET_FIELD(t_Orbit, lMDot),
        DECLARE_GET_FIELD(t_Orbit, lv),
        DECLARE_GET_FIELD(t_Orbit, lvDot),
        DECLARE_GET_FIELD(t_Orbit, meanAnomalyDotWrtA),
        DECLARE_GET_FIELD(t_Orbit, mu),
        DECLARE_GET_FIELD(t_Orbit, pVCoordinates),
        DECLARE_GET_FIELD(t_Orbit, position),
        DECLARE_GET_FIELD(t_Orbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Orbit__methods_[] = {
        DECLARE_METHOD(t_Orbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Orbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Orbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getA, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getADot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getDate, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getE, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialExDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialEyDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHx, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHxDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHy, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHyDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getI, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getIDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getJacobianWrtCartesian, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getJacobianWrtParameters, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLE, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLM, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLMDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLv, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLvDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getMeanAnomalyDotWrtA, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getMu, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getType, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, hasDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, isElliptical, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, shiftedBy, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Orbit)[] = {
        { Py_tp_methods, t_Orbit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Orbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Orbit)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Orbit, t_Orbit, Orbit);

      void t_Orbit::install(PyObject *module)
      {
        installType(&PY_TYPE(Orbit), &PY_TYPE_DEF(Orbit), module, "Orbit", 0);
      }

      void t_Orbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Orbit), "class_", make_descriptor(Orbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Orbit), "wrapfn_", make_descriptor(t_Orbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Orbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Orbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Orbit::initializeClass, 1)))
          return NULL;
        return t_Orbit::wrap_Object(Orbit(((t_Orbit *) arg)->object.this$));
      }
      static PyObject *t_Orbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Orbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Orbit_addKeplerContribution(t_Orbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", args);
        return NULL;
      }

      static PyObject *t_Orbit_getA(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getADot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getADot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getDate(t_Orbit *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_Orbit_getE(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialEx(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialExDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialEy(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialEyDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getFrame(t_Orbit *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Orbit_getHx(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getHxDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHxDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getHy(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getHyDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getI(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getI());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getIDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getIDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getJacobianWrtCartesian(t_Orbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< jdouble > > a1((jobject) NULL);

        if (!parseArgs(args, "K[[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1))
        {
          OBJ_CALL(self->object.getJacobianWrtCartesian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtCartesian", args);
        return NULL;
      }

      static PyObject *t_Orbit_getJacobianWrtParameters(t_Orbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< jdouble > > a1((jobject) NULL);

        if (!parseArgs(args, "K[[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1))
        {
          OBJ_CALL(self->object.getJacobianWrtParameters(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtParameters", args);
        return NULL;
      }

      static PyObject *t_Orbit_getKeplerianMeanMotion(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getKeplerianPeriod(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLE(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLEDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLM(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLMDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLv(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLv());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLvDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLvDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getMeanAnomalyDotWrtA(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMeanAnomalyDotWrtA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getMu(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMu());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getPVCoordinates(t_Orbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_Orbit_getPosition(t_Orbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_Orbit_getType(t_Orbit *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_Orbit_hasDerivatives(t_Orbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasDerivatives());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Orbit_isElliptical(t_Orbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isElliptical());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Orbit_shiftedBy(t_Orbit *self, PyObject *arg)
      {
        jdouble a0;
        Orbit result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_Orbit::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Orbit_get__a(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__aDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__date(t_Orbit *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__e(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__eDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__elliptical(t_Orbit *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isElliptical());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Orbit_get__equinoctialEx(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__equinoctialExDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__equinoctialEy(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__equinoctialEyDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__frame(t_Orbit *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__hx(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__hxDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__hy(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__hyDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__i(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__iDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__keplerianMeanMotion(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__keplerianPeriod(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lE(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lEDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lM(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lMDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lv(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lvDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__meanAnomalyDotWrtA(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMeanAnomalyDotWrtA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__mu(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMu());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__pVCoordinates(t_Orbit *self, void *data)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__position(t_Orbit *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__type(t_Orbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/LineSearch.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *LineSearch::class$ = NULL;
          jmethodID *LineSearch::mids$ = NULL;
          bool LineSearch::live$ = false;

          jclass LineSearch::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/LineSearch");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_56e28449faf12dba] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer;DDD)V");
              mids$[mid_search_eb189cc8ff2c76ea] = env->getMethodID(cls, "search", "([D[D)Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LineSearch::LineSearch(const ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_56e28449faf12dba, a0.this$, a1, a2, a3)) {}

          ::org::hipparchus::optim::univariate::UnivariatePointValuePair LineSearch::search(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::optim::univariate::UnivariatePointValuePair(env->callObjectMethod(this$, mids$[mid_search_eb189cc8ff2c76ea], a0.this$, a1.this$));
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
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          static PyObject *t_LineSearch_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LineSearch_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LineSearch_init_(t_LineSearch *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LineSearch_search(t_LineSearch *self, PyObject *args);

          static PyMethodDef t_LineSearch__methods_[] = {
            DECLARE_METHOD(t_LineSearch, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LineSearch, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LineSearch, search, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LineSearch)[] = {
            { Py_tp_methods, t_LineSearch__methods_ },
            { Py_tp_init, (void *) t_LineSearch_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LineSearch)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LineSearch, t_LineSearch, LineSearch);

          void t_LineSearch::install(PyObject *module)
          {
            installType(&PY_TYPE(LineSearch), &PY_TYPE_DEF(LineSearch), module, "LineSearch", 0);
          }

          void t_LineSearch::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LineSearch), "class_", make_descriptor(LineSearch::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LineSearch), "wrapfn_", make_descriptor(t_LineSearch::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LineSearch), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LineSearch_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LineSearch::initializeClass, 1)))
              return NULL;
            return t_LineSearch::wrap_Object(LineSearch(((t_LineSearch *) arg)->object.this$));
          }
          static PyObject *t_LineSearch_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LineSearch::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LineSearch_init_(t_LineSearch *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            LineSearch object((jobject) NULL);

            if (!parseArgs(args, "KDDD", ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::t_MultivariateOptimizer::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = LineSearch(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LineSearch_search(t_LineSearch *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ::org::hipparchus::optim::univariate::UnivariatePointValuePair result((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = self->object.search(a0, a1));
              return ::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "search", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
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
                  mids$[mid_init$_803b88445e6f9607] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_305aa7864995b122] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OPM_VERS = env->getStaticDoubleField(cls, "CCSDS_OPM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OpmWriter::OpmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_803b88445e6f9607, a0.this$, a1.this$, a2.this$)) {}
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
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventDetector::class$ = NULL;
        jmethodID *FieldEventDetector::mids$ = NULL;
        bool FieldEventDetector::live$ = false;

        jclass FieldEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_ae50020f8bfe1c59] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_0f2b5ee7b716ac92] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_08d37e3f77b7239d] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement FieldEventDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::orekit::propagation::events::handlers::FieldEventHandler FieldEventDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::FieldEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_ae50020f8bfe1c59]));
        }

        ::org::orekit::propagation::events::FieldAdaptableInterval FieldEventDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_0f2b5ee7b716ac92]));
        }

        jint FieldEventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_d6ab429752e7c267]);
        }

        ::org::hipparchus::CalculusFieldElement FieldEventDetector::getThreshold() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getThreshold_08d37e3f77b7239d]));
        }

        void FieldEventDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventDetector_of_(t_FieldEventDetector *self, PyObject *args);
        static PyObject *t_FieldEventDetector_g(t_FieldEventDetector *self, PyObject *arg);
        static PyObject *t_FieldEventDetector_getHandler(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_getMaxCheckInterval(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_getMaxIterationCount(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_getThreshold(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_init(t_FieldEventDetector *self, PyObject *args);
        static PyObject *t_FieldEventDetector_get__handler(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__maxCheckInterval(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__maxIterationCount(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__threshold(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__parameters_(t_FieldEventDetector *self, void *data);
        static PyGetSetDef t_FieldEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventDetector, handler),
          DECLARE_GET_FIELD(t_FieldEventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldEventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldEventDetector, threshold),
          DECLARE_GET_FIELD(t_FieldEventDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventDetector__methods_[] = {
          DECLARE_METHOD(t_FieldEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventDetector, g, METH_O),
          DECLARE_METHOD(t_FieldEventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventDetector)[] = {
          { Py_tp_methods, t_FieldEventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventDetector, t_FieldEventDetector, FieldEventDetector);
        PyObject *t_FieldEventDetector::wrap_Object(const FieldEventDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventDetector *self = (t_FieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventDetector *self = (t_FieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventDetector), &PY_TYPE_DEF(FieldEventDetector), module, "FieldEventDetector", 0);
        }

        void t_FieldEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventDetector), "class_", make_descriptor(FieldEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventDetector), "wrapfn_", make_descriptor(t_FieldEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventDetector::initializeClass, 1)))
            return NULL;
          return t_FieldEventDetector::wrap_Object(FieldEventDetector(((t_FieldEventDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventDetector_of_(t_FieldEventDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventDetector_g(t_FieldEventDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldEventDetector_getHandler(t_FieldEventDetector *self)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventDetector_getMaxCheckInterval(t_FieldEventDetector *self)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventDetector_getMaxIterationCount(t_FieldEventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldEventDetector_getThreshold(t_FieldEventDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getThreshold());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldEventDetector_init(t_FieldEventDetector *self, PyObject *args)
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
        static PyObject *t_FieldEventDetector_get__parameters_(t_FieldEventDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventDetector_get__handler(t_FieldEventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldEventDetector_get__maxCheckInterval(t_FieldEventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldEventDetector_get__maxIterationCount(t_FieldEventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldEventDetector_get__threshold(t_FieldEventDetector *self, void *data)
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
#include "org/orekit/forces/gravity/potential/SHMFormatReader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *SHMFormatReader::class$ = NULL;
          jmethodID *SHMFormatReader::mids$ = NULL;
          bool SHMFormatReader::live$ = false;

          jclass SHMFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/SHMFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c5d48f261709aa3e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_13b6194a2a01ad07] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_getProvider_0c94c2344ee8a0fa] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SHMFormatReader::SHMFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_c5d48f261709aa3e, a0.this$, a1)) {}

          SHMFormatReader::SHMFormatReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_13b6194a2a01ad07, a0.this$, a1, a2.this$)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider SHMFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_0c94c2344ee8a0fa], a0, a1, a2));
          }

          void SHMFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
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
          static PyObject *t_SHMFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SHMFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SHMFormatReader_init_(t_SHMFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SHMFormatReader_getProvider(t_SHMFormatReader *self, PyObject *args);
          static PyObject *t_SHMFormatReader_loadData(t_SHMFormatReader *self, PyObject *args);

          static PyMethodDef t_SHMFormatReader__methods_[] = {
            DECLARE_METHOD(t_SHMFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SHMFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SHMFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_SHMFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SHMFormatReader)[] = {
            { Py_tp_methods, t_SHMFormatReader__methods_ },
            { Py_tp_init, (void *) t_SHMFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SHMFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(SHMFormatReader, t_SHMFormatReader, SHMFormatReader);

          void t_SHMFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(SHMFormatReader), &PY_TYPE_DEF(SHMFormatReader), module, "SHMFormatReader", 0);
          }

          void t_SHMFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SHMFormatReader), "class_", make_descriptor(SHMFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SHMFormatReader), "wrapfn_", make_descriptor(t_SHMFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SHMFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SHMFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SHMFormatReader::initializeClass, 1)))
              return NULL;
            return t_SHMFormatReader::wrap_Object(SHMFormatReader(((t_SHMFormatReader *) arg)->object.this$));
          }
          static PyObject *t_SHMFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SHMFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SHMFormatReader_init_(t_SHMFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                SHMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = SHMFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                SHMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SHMFormatReader(a0, a1, a2));
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

          static PyObject *t_SHMFormatReader_getProvider(t_SHMFormatReader *self, PyObject *args)
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

            return callSuper(PY_TYPE(SHMFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_SHMFormatReader_loadData(t_SHMFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SHMFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/iod/IodGibbs.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodGibbs::class$ = NULL;
        jmethodID *IodGibbs::mids$ = NULL;
        bool IodGibbs::live$ = false;

        jclass IodGibbs::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodGibbs");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_f581f00f88459716] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/PV;Lorg/orekit/estimation/measurements/PV;Lorg/orekit/estimation/measurements/PV;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_2067f7ddf9d7f8c5] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/Position;Lorg/orekit/estimation/measurements/Position;Lorg/orekit/estimation/measurements/Position;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_376f753fc058ddc0] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodGibbs::IodGibbs(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ::org::orekit::orbits::Orbit IodGibbs::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::PV & a1, const ::org::orekit::estimation::measurements::PV & a2, const ::org::orekit::estimation::measurements::PV & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_f581f00f88459716], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGibbs::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::Position & a1, const ::org::orekit::estimation::measurements::Position & a2, const ::org::orekit::estimation::measurements::Position & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_2067f7ddf9d7f8c5], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGibbs::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::time::AbsoluteDate & a6) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_376f753fc058ddc0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$));
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
      namespace iod {
        static PyObject *t_IodGibbs_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodGibbs_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodGibbs_init_(t_IodGibbs *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodGibbs_estimate(t_IodGibbs *self, PyObject *args);

        static PyMethodDef t_IodGibbs__methods_[] = {
          DECLARE_METHOD(t_IodGibbs, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGibbs, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGibbs, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodGibbs)[] = {
          { Py_tp_methods, t_IodGibbs__methods_ },
          { Py_tp_init, (void *) t_IodGibbs_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodGibbs)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodGibbs, t_IodGibbs, IodGibbs);

        void t_IodGibbs::install(PyObject *module)
        {
          installType(&PY_TYPE(IodGibbs), &PY_TYPE_DEF(IodGibbs), module, "IodGibbs", 0);
        }

        void t_IodGibbs::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGibbs), "class_", make_descriptor(IodGibbs::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGibbs), "wrapfn_", make_descriptor(t_IodGibbs::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGibbs), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodGibbs_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodGibbs::initializeClass, 1)))
            return NULL;
          return t_IodGibbs::wrap_Object(IodGibbs(((t_IodGibbs *) arg)->object.this$));
        }
        static PyObject *t_IodGibbs_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodGibbs::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodGibbs_init_(t_IodGibbs *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodGibbs object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodGibbs(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodGibbs_estimate(t_IodGibbs *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::PV a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::PV a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::PV a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_PV::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_PV::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_PV::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::Position a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::Position a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::Position a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_Position::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_Position::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_Position::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ConstantThrustDirectionProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ConstantThrustDirectionProvider::class$ = NULL;
          jmethodID *ConstantThrustDirectionProvider::mids$ = NULL;
          bool ConstantThrustDirectionProvider::live$ = false;

          jclass ConstantThrustDirectionProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ConstantThrustDirectionProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_30f8886dfb88a63c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_computeThrustDirection_f778d81301c7076a] = env->getMethodID(cls, "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ConstantThrustDirectionProvider::ConstantThrustDirectionProvider(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30f8886dfb88a63c, a0.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustDirectionProvider::computeThrustDirection(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_computeThrustDirection_f778d81301c7076a], a0.this$, a1.this$, a2.this$));
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
        namespace propulsion {
          static PyObject *t_ConstantThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConstantThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ConstantThrustDirectionProvider_init_(t_ConstantThrustDirectionProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ConstantThrustDirectionProvider_computeThrustDirection(t_ConstantThrustDirectionProvider *self, PyObject *args);

          static PyMethodDef t_ConstantThrustDirectionProvider__methods_[] = {
            DECLARE_METHOD(t_ConstantThrustDirectionProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantThrustDirectionProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantThrustDirectionProvider, computeThrustDirection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ConstantThrustDirectionProvider)[] = {
            { Py_tp_methods, t_ConstantThrustDirectionProvider__methods_ },
            { Py_tp_init, (void *) t_ConstantThrustDirectionProvider_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ConstantThrustDirectionProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ConstantThrustDirectionProvider, t_ConstantThrustDirectionProvider, ConstantThrustDirectionProvider);

          void t_ConstantThrustDirectionProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ConstantThrustDirectionProvider), &PY_TYPE_DEF(ConstantThrustDirectionProvider), module, "ConstantThrustDirectionProvider", 0);
          }

          void t_ConstantThrustDirectionProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustDirectionProvider), "class_", make_descriptor(ConstantThrustDirectionProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustDirectionProvider), "wrapfn_", make_descriptor(t_ConstantThrustDirectionProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustDirectionProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ConstantThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ConstantThrustDirectionProvider::initializeClass, 1)))
              return NULL;
            return t_ConstantThrustDirectionProvider::wrap_Object(ConstantThrustDirectionProvider(((t_ConstantThrustDirectionProvider *) arg)->object.this$));
          }
          static PyObject *t_ConstantThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ConstantThrustDirectionProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ConstantThrustDirectionProvider_init_(t_ConstantThrustDirectionProvider *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ConstantThrustDirectionProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              INT_CALL(object = ConstantThrustDirectionProvider(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ConstantThrustDirectionProvider_computeThrustDirection(t_ConstantThrustDirectionProvider *self, PyObject *args)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.computeThrustDirection(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeThrustDirection", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/SinCos.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/SinCos.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *SinCos::class$ = NULL;
      jmethodID *SinCos::mids$ = NULL;
      bool SinCos::live$ = false;

      jclass SinCos::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/SinCos");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cos_9981f74b2d109da6] = env->getMethodID(cls, "cos", "()D");
          mids$[mid_difference_1a82292342bdf5a1] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/SinCos;Lorg/hipparchus/util/SinCos;)Lorg/hipparchus/util/SinCos;");
          mids$[mid_sin_9981f74b2d109da6] = env->getMethodID(cls, "sin", "()D");
          mids$[mid_sum_1a82292342bdf5a1] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/SinCos;Lorg/hipparchus/util/SinCos;)Lorg/hipparchus/util/SinCos;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble SinCos::cos() const
      {
        return env->callDoubleMethod(this$, mids$[mid_cos_9981f74b2d109da6]);
      }

      SinCos SinCos::difference(const SinCos & a0, const SinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinCos(env->callStaticObjectMethod(cls, mids$[mid_difference_1a82292342bdf5a1], a0.this$, a1.this$));
      }

      jdouble SinCos::sin() const
      {
        return env->callDoubleMethod(this$, mids$[mid_sin_9981f74b2d109da6]);
      }

      SinCos SinCos::sum(const SinCos & a0, const SinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SinCos(env->callStaticObjectMethod(cls, mids$[mid_sum_1a82292342bdf5a1], a0.this$, a1.this$));
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
      static PyObject *t_SinCos_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinCos_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SinCos_cos(t_SinCos *self);
      static PyObject *t_SinCos_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_SinCos_sin(t_SinCos *self);
      static PyObject *t_SinCos_sum(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_SinCos__methods_[] = {
        DECLARE_METHOD(t_SinCos, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinCos, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SinCos, cos, METH_NOARGS),
        DECLARE_METHOD(t_SinCos, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SinCos, sin, METH_NOARGS),
        DECLARE_METHOD(t_SinCos, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SinCos)[] = {
        { Py_tp_methods, t_SinCos__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SinCos)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SinCos, t_SinCos, SinCos);

      void t_SinCos::install(PyObject *module)
      {
        installType(&PY_TYPE(SinCos), &PY_TYPE_DEF(SinCos), module, "SinCos", 0);
      }

      void t_SinCos::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinCos), "class_", make_descriptor(SinCos::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinCos), "wrapfn_", make_descriptor(t_SinCos::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SinCos), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SinCos_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SinCos::initializeClass, 1)))
          return NULL;
        return t_SinCos::wrap_Object(SinCos(((t_SinCos *) arg)->object.this$));
      }
      static PyObject *t_SinCos_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SinCos::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SinCos_cos(t_SinCos *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.cos());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinCos_difference(PyTypeObject *type, PyObject *args)
      {
        SinCos a0((jobject) NULL);
        SinCos a1((jobject) NULL);
        SinCos result((jobject) NULL);

        if (!parseArgs(args, "kk", SinCos::initializeClass, SinCos::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinCos::difference(a0, a1));
          return t_SinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_SinCos_sin(t_SinCos *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.sin());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SinCos_sum(PyTypeObject *type, PyObject *args)
      {
        SinCos a0((jobject) NULL);
        SinCos a1((jobject) NULL);
        SinCos result((jobject) NULL);

        if (!parseArgs(args, "kk", SinCos::initializeClass, SinCos::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::SinCos::sum(a0, a1));
          return t_SinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonTransformProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonTransformProvider::class$ = NULL;
      jmethodID *PythonTransformProvider::mids$ = NULL;
      bool PythonTransformProvider::live$ = false;

      jclass PythonTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getTransform_02ca17ac51b6a4b2] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_286745ef54e0a7f6] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTransformProvider::PythonTransformProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonTransformProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonTransformProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonTransformProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTransformProvider_init_(t_PythonTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTransformProvider_finalize(t_PythonTransformProvider *self);
      static PyObject *t_PythonTransformProvider_pythonExtension(t_PythonTransformProvider *self, PyObject *args);
      static jobject JNICALL t_PythonTransformProvider_getTransform0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTransformProvider_getTransform1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonTransformProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTransformProvider_get__self(t_PythonTransformProvider *self, void *data);
      static PyGetSetDef t_PythonTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTransformProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTransformProvider__methods_[] = {
        DECLARE_METHOD(t_PythonTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTransformProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTransformProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTransformProvider)[] = {
        { Py_tp_methods, t_PythonTransformProvider__methods_ },
        { Py_tp_init, (void *) t_PythonTransformProvider_init_ },
        { Py_tp_getset, t_PythonTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTransformProvider, t_PythonTransformProvider, PythonTransformProvider);

      void t_PythonTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTransformProvider), &PY_TYPE_DEF(PythonTransformProvider), module, "PythonTransformProvider", 1);
      }

      void t_PythonTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTransformProvider), "class_", make_descriptor(PythonTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTransformProvider), "wrapfn_", make_descriptor(t_PythonTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTransformProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTransformProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;", (void *) t_PythonTransformProvider_getTransform0 },
          { "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;", (void *) t_PythonTransformProvider_getTransform1 },
          { "pythonDecRef", "()V", (void *) t_PythonTransformProvider_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTransformProvider::initializeClass, 1)))
          return NULL;
        return t_PythonTransformProvider::wrap_Object(PythonTransformProvider(((t_PythonTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTransformProvider_init_(t_PythonTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonTransformProvider object((jobject) NULL);

        INT_CALL(object = PythonTransformProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTransformProvider_finalize(t_PythonTransformProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTransformProvider_pythonExtension(t_PythonTransformProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonTransformProvider_getTransform0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Transform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Transform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static jobject JNICALL t_PythonTransformProvider_getTransform1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FieldTransform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FieldTransform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static void JNICALL t_PythonTransformProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTransformProvider_get__self(t_PythonTransformProvider *self, void *data)
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
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *UnscentedTransformProvider::class$ = NULL;
      jmethodID *UnscentedTransformProvider::mids$ = NULL;
      bool UnscentedTransformProvider::live$ = false;

      jclass UnscentedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/UnscentedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getWc_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getWc", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getWm_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getWm", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_unscentedTransform_3f6076288b354811] = env->getMethodID(cls, "unscentedTransform", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)[Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::RealVector UnscentedTransformProvider::getWc() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWc_92d7e8d8d3f1dfcf]));
      }

      ::org::hipparchus::linear::RealVector UnscentedTransformProvider::getWm() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWm_92d7e8d8d3f1dfcf]));
      }

      JArray< ::org::hipparchus::linear::RealVector > UnscentedTransformProvider::unscentedTransform(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_unscentedTransform_3f6076288b354811], a0.this$, a1.this$));
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
      static PyObject *t_UnscentedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnscentedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnscentedTransformProvider_getWc(t_UnscentedTransformProvider *self);
      static PyObject *t_UnscentedTransformProvider_getWm(t_UnscentedTransformProvider *self);
      static PyObject *t_UnscentedTransformProvider_unscentedTransform(t_UnscentedTransformProvider *self, PyObject *args);
      static PyObject *t_UnscentedTransformProvider_get__wc(t_UnscentedTransformProvider *self, void *data);
      static PyObject *t_UnscentedTransformProvider_get__wm(t_UnscentedTransformProvider *self, void *data);
      static PyGetSetDef t_UnscentedTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_UnscentedTransformProvider, wc),
        DECLARE_GET_FIELD(t_UnscentedTransformProvider, wm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UnscentedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_UnscentedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnscentedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnscentedTransformProvider, getWc, METH_NOARGS),
        DECLARE_METHOD(t_UnscentedTransformProvider, getWm, METH_NOARGS),
        DECLARE_METHOD(t_UnscentedTransformProvider, unscentedTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnscentedTransformProvider)[] = {
        { Py_tp_methods, t_UnscentedTransformProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UnscentedTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnscentedTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnscentedTransformProvider, t_UnscentedTransformProvider, UnscentedTransformProvider);

      void t_UnscentedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(UnscentedTransformProvider), &PY_TYPE_DEF(UnscentedTransformProvider), module, "UnscentedTransformProvider", 0);
      }

      void t_UnscentedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedTransformProvider), "class_", make_descriptor(UnscentedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedTransformProvider), "wrapfn_", make_descriptor(t_UnscentedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnscentedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnscentedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_UnscentedTransformProvider::wrap_Object(UnscentedTransformProvider(((t_UnscentedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_UnscentedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnscentedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnscentedTransformProvider_getWc(t_UnscentedTransformProvider *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_UnscentedTransformProvider_getWm(t_UnscentedTransformProvider *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_UnscentedTransformProvider_unscentedTransform(t_UnscentedTransformProvider *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.unscentedTransform(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "unscentedTransform", args);
        return NULL;
      }

      static PyObject *t_UnscentedTransformProvider_get__wc(t_UnscentedTransformProvider *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_UnscentedTransformProvider_get__wm(t_UnscentedTransformProvider *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/String.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AngularDerivativesFilter::class$ = NULL;
      jmethodID *AngularDerivativesFilter::mids$ = NULL;
      bool AngularDerivativesFilter::live$ = false;
      AngularDerivativesFilter *AngularDerivativesFilter::USE_R = NULL;
      AngularDerivativesFilter *AngularDerivativesFilter::USE_RR = NULL;
      AngularDerivativesFilter *AngularDerivativesFilter::USE_RRA = NULL;

      jclass AngularDerivativesFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AngularDerivativesFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getFilter_09a52895b77b39e4] = env->getStaticMethodID(cls, "getFilter", "(I)Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_getMaxOrder_d6ab429752e7c267] = env->getMethodID(cls, "getMaxOrder", "()I");
          mids$[mid_valueOf_e99a586db3a83c45] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_values_2d38336887b9d37b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/AngularDerivativesFilter;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          USE_R = new AngularDerivativesFilter(env->getStaticObjectField(cls, "USE_R", "Lorg/orekit/utils/AngularDerivativesFilter;"));
          USE_RR = new AngularDerivativesFilter(env->getStaticObjectField(cls, "USE_RR", "Lorg/orekit/utils/AngularDerivativesFilter;"));
          USE_RRA = new AngularDerivativesFilter(env->getStaticObjectField(cls, "USE_RRA", "Lorg/orekit/utils/AngularDerivativesFilter;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AngularDerivativesFilter AngularDerivativesFilter::getFilter(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AngularDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_getFilter_09a52895b77b39e4], a0));
      }

      jint AngularDerivativesFilter::getMaxOrder() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxOrder_d6ab429752e7c267]);
      }

      AngularDerivativesFilter AngularDerivativesFilter::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AngularDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e99a586db3a83c45], a0.this$));
      }

      JArray< AngularDerivativesFilter > AngularDerivativesFilter::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< AngularDerivativesFilter >(env->callStaticObjectMethod(cls, mids$[mid_values_2d38336887b9d37b]));
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
      static PyObject *t_AngularDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularDerivativesFilter_of_(t_AngularDerivativesFilter *self, PyObject *args);
      static PyObject *t_AngularDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularDerivativesFilter_getMaxOrder(t_AngularDerivativesFilter *self);
      static PyObject *t_AngularDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_AngularDerivativesFilter_values(PyTypeObject *type);
      static PyObject *t_AngularDerivativesFilter_get__maxOrder(t_AngularDerivativesFilter *self, void *data);
      static PyObject *t_AngularDerivativesFilter_get__parameters_(t_AngularDerivativesFilter *self, void *data);
      static PyGetSetDef t_AngularDerivativesFilter__fields_[] = {
        DECLARE_GET_FIELD(t_AngularDerivativesFilter, maxOrder),
        DECLARE_GET_FIELD(t_AngularDerivativesFilter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AngularDerivativesFilter__methods_[] = {
        DECLARE_METHOD(t_AngularDerivativesFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, of_, METH_VARARGS),
        DECLARE_METHOD(t_AngularDerivativesFilter, getFilter, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, getMaxOrder, METH_NOARGS),
        DECLARE_METHOD(t_AngularDerivativesFilter, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AngularDerivativesFilter, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AngularDerivativesFilter)[] = {
        { Py_tp_methods, t_AngularDerivativesFilter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AngularDerivativesFilter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AngularDerivativesFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(AngularDerivativesFilter, t_AngularDerivativesFilter, AngularDerivativesFilter);
      PyObject *t_AngularDerivativesFilter::wrap_Object(const AngularDerivativesFilter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AngularDerivativesFilter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AngularDerivativesFilter *self = (t_AngularDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AngularDerivativesFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AngularDerivativesFilter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AngularDerivativesFilter *self = (t_AngularDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AngularDerivativesFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(AngularDerivativesFilter), &PY_TYPE_DEF(AngularDerivativesFilter), module, "AngularDerivativesFilter", 0);
      }

      void t_AngularDerivativesFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "class_", make_descriptor(AngularDerivativesFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "wrapfn_", make_descriptor(t_AngularDerivativesFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "boxfn_", make_descriptor(boxObject));
        env->getClass(AngularDerivativesFilter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "USE_R", make_descriptor(t_AngularDerivativesFilter::wrap_Object(*AngularDerivativesFilter::USE_R)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "USE_RR", make_descriptor(t_AngularDerivativesFilter::wrap_Object(*AngularDerivativesFilter::USE_RR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularDerivativesFilter), "USE_RRA", make_descriptor(t_AngularDerivativesFilter::wrap_Object(*AngularDerivativesFilter::USE_RRA)));
      }

      static PyObject *t_AngularDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AngularDerivativesFilter::initializeClass, 1)))
          return NULL;
        return t_AngularDerivativesFilter::wrap_Object(AngularDerivativesFilter(((t_AngularDerivativesFilter *) arg)->object.this$));
      }
      static PyObject *t_AngularDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AngularDerivativesFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AngularDerivativesFilter_of_(t_AngularDerivativesFilter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AngularDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        AngularDerivativesFilter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularDerivativesFilter::getFilter(a0));
          return t_AngularDerivativesFilter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFilter", arg);
        return NULL;
      }

      static PyObject *t_AngularDerivativesFilter_getMaxOrder(t_AngularDerivativesFilter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxOrder());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AngularDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        AngularDerivativesFilter result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularDerivativesFilter::valueOf(a0));
          return t_AngularDerivativesFilter::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_AngularDerivativesFilter_values(PyTypeObject *type)
      {
        JArray< AngularDerivativesFilter > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::AngularDerivativesFilter::values());
        return JArray<jobject>(result.this$).wrap(t_AngularDerivativesFilter::wrap_jobject);
      }
      static PyObject *t_AngularDerivativesFilter_get__parameters_(t_AngularDerivativesFilter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AngularDerivativesFilter_get__maxOrder(t_AngularDerivativesFilter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxOrder());
        return PyLong_FromLong((long) value);
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
          mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_comparator_44d5f0105a5559b7] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
          mids$[mid_getK_d6ab429752e7c267] = env->getMethodID(cls, "getK", "()I");
          mids$[mid_getN_d6ab429752e7c267] = env->getMethodID(cls, "getN", "()I");
          mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Combinations::Combinations(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

      ::java::util::Comparator Combinations::comparator() const
      {
        return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_44d5f0105a5559b7]));
      }

      jint Combinations::getK() const
      {
        return env->callIntMethod(this$, mids$[mid_getK_d6ab429752e7c267]);
      }

      jint Combinations::getN() const
      {
        return env->callIntMethod(this$, mids$[mid_getN_d6ab429752e7c267]);
      }

      ::java::util::Iterator Combinations::iterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
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
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *DtcDataLoader$LineParameters::class$ = NULL;
            jmethodID *DtcDataLoader$LineParameters::mids$ = NULL;
            bool DtcDataLoader$LineParameters::live$ = false;

            jclass DtcDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_6ed2c1cd7b0b1c75] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;D)V");
                mids$[mid_getDSTDTC_9981f74b2d109da6] = env->getMethodID(cls, "getDSTDTC", "()D");
                mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DtcDataLoader$LineParameters::DtcDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6ed2c1cd7b0b1c75, a0.this$, a1)) {}

            jdouble DtcDataLoader$LineParameters::getDSTDTC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDSTDTC_9981f74b2d109da6]);
            }

            ::org::orekit::time::AbsoluteDate DtcDataLoader$LineParameters::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
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
            static PyObject *t_DtcDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DtcDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DtcDataLoader$LineParameters_init_(t_DtcDataLoader$LineParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DtcDataLoader$LineParameters_getDSTDTC(t_DtcDataLoader$LineParameters *self);
            static PyObject *t_DtcDataLoader$LineParameters_getDate(t_DtcDataLoader$LineParameters *self);
            static PyObject *t_DtcDataLoader$LineParameters_get__dSTDTC(t_DtcDataLoader$LineParameters *self, void *data);
            static PyObject *t_DtcDataLoader$LineParameters_get__date(t_DtcDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_DtcDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_DtcDataLoader$LineParameters, dSTDTC),
              DECLARE_GET_FIELD(t_DtcDataLoader$LineParameters, date),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DtcDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, getDSTDTC, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader$LineParameters, getDate, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DtcDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_DtcDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) t_DtcDataLoader$LineParameters_init_ },
              { Py_tp_getset, t_DtcDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DtcDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DtcDataLoader$LineParameters, t_DtcDataLoader$LineParameters, DtcDataLoader$LineParameters);

            void t_DtcDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(DtcDataLoader$LineParameters), &PY_TYPE_DEF(DtcDataLoader$LineParameters), module, "DtcDataLoader$LineParameters", 0);
            }

            void t_DtcDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader$LineParameters), "class_", make_descriptor(DtcDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader$LineParameters), "wrapfn_", make_descriptor(t_DtcDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DtcDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DtcDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_DtcDataLoader$LineParameters::wrap_Object(DtcDataLoader$LineParameters(((t_DtcDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_DtcDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DtcDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DtcDataLoader$LineParameters_init_(t_DtcDataLoader$LineParameters *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              DtcDataLoader$LineParameters object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DtcDataLoader$LineParameters(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DtcDataLoader$LineParameters_getDSTDTC(t_DtcDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDSTDTC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DtcDataLoader$LineParameters_getDate(t_DtcDataLoader$LineParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_DtcDataLoader$LineParameters_get__dSTDTC(t_DtcDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDSTDTC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DtcDataLoader$LineParameters_get__date(t_DtcDataLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
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
#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmParser::class$ = NULL;
            jmethodID *AdmParser::mids$ = NULL;
            bool AdmParser::live$ = false;

            jclass AdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getMissionReferenceDate_80e11148db499dda] = env->getMethodID(cls, "getMissionReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::time::AbsoluteDate AdmParser::getMissionReferenceDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMissionReferenceDate_80e11148db499dda]));
            }

            ::java::util::Map AdmParser::getSpecialXmlElementsBuilders() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d]));
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
            static PyObject *t_AdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmParser_of_(t_AdmParser *self, PyObject *args);
            static PyObject *t_AdmParser_getMissionReferenceDate(t_AdmParser *self);
            static PyObject *t_AdmParser_getSpecialXmlElementsBuilders(t_AdmParser *self, PyObject *args);
            static PyObject *t_AdmParser_get__missionReferenceDate(t_AdmParser *self, void *data);
            static PyObject *t_AdmParser_get__specialXmlElementsBuilders(t_AdmParser *self, void *data);
            static PyObject *t_AdmParser_get__parameters_(t_AdmParser *self, void *data);
            static PyGetSetDef t_AdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_AdmParser, missionReferenceDate),
              DECLARE_GET_FIELD(t_AdmParser, specialXmlElementsBuilders),
              DECLARE_GET_FIELD(t_AdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmParser__methods_[] = {
              DECLARE_METHOD(t_AdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdmParser, getMissionReferenceDate, METH_NOARGS),
              DECLARE_METHOD(t_AdmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmParser)[] = {
              { Py_tp_methods, t_AdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(AdmParser, t_AdmParser, AdmParser);
            PyObject *t_AdmParser::wrap_Object(const AdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmParser *self = (t_AdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_AdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_AdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmParser *self = (t_AdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_AdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmParser), &PY_TYPE_DEF(AdmParser), module, "AdmParser", 0);
            }

            void t_AdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmParser), "class_", make_descriptor(AdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmParser), "wrapfn_", make_descriptor(t_AdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmParser::initializeClass, 1)))
                return NULL;
              return t_AdmParser::wrap_Object(AdmParser(((t_AdmParser *) arg)->object.this$));
            }
            static PyObject *t_AdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdmParser_of_(t_AdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdmParser_getMissionReferenceDate(t_AdmParser *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AdmParser_getSpecialXmlElementsBuilders(t_AdmParser *self, PyObject *args)
            {
              ::java::util::Map result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
              }

              return callSuper(PY_TYPE(AdmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
            }
            static PyObject *t_AdmParser_get__parameters_(t_AdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AdmParser_get__missionReferenceDate(t_AdmParser *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AdmParser_get__specialXmlElementsBuilders(t_AdmParser *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldTransform.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldTransform::class$ = NULL;
      jmethodID *FieldTransform::mids$ = NULL;
      bool FieldTransform::live$ = false;

      jclass FieldTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7d09f2d0faf56c24] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_0aa97ac04cede617] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_6d860b64bc24952f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldAngularCoordinates;)V");
          mids$[mid_init$_994d2e3578155e05] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_1d1b254e2009d3a9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/frames/Transform;)V");
          mids$[mid_init$_d9280f8ac65149af] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_4de9f3e3d770866c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_9e3b0ee999dcd97e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/FieldTransform;)V");
          mids$[mid_init$_69ea71c8c9a32ba2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_8a2daddc92952c07] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_freeze_c58e1d0e1f3afd7d] = env->getMethodID(cls, "freeze", "()Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getAcceleration_d1b42a6748e907f9] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getAngular_f9d057933ad73f59] = env->getMethodID(cls, "getAngular", "()Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_getCartesian_345fc9bafd1687ff] = env->getMethodID(cls, "getCartesian", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFieldDate_1fea28374011eef5] = env->getMethodID(cls, "getFieldDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getIdentity_17da171d62449753] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getInverse_c58e1d0e1f3afd7d] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getJacobian_92c4dd0c6709f4ca] = env->getMethodID(cls, "getJacobian", "(Lorg/orekit/utils/CartesianDerivativesFilter;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getRotation_5c8e6f300713559c] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getRotationAcceleration_d1b42a6748e907f9] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getRotationRate_d1b42a6748e907f9] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getTranslation_d1b42a6748e907f9] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getVelocity_d1b42a6748e907f9] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_interpolate_3fd67c27b4f48c52] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_interpolate_9a561c7c7e0a4ab5] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Ljava/util/Collection;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_interpolate_cdad96fc1533d6a4] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Ljava/util/stream/Stream;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_shiftedBy_f2636d4a97f7a23b] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_shiftedBy_9f52e2ad8ef98349] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_staticShiftedBy_4e699b1bed6fd784] = env->getMethodID(cls, "staticShiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_toStaticTransform_bfbe5d9ed8a9e205] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_transformPVCoordinates_42f03a1654758e56] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_25934c59f051a43a] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_1bd1ef8a7bbb7399] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_bbe671ce7c49d0a3] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7d09f2d0faf56c24, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0aa97ac04cede617, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldAngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6d860b64bc24952f, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_994d2e3578155e05, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::hipparchus::Field & a0, const ::org::orekit::frames::Transform & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d1b254e2009d3a9, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d9280f8ac65149af, a0.this$, a1.this$, a2.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4de9f3e3d770866c, a0.this$, a1.this$, a2.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const FieldTransform & a1, const FieldTransform & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9e3b0ee999dcd97e, a0.this$, a1.this$, a2.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_69ea71c8c9a32ba2, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8a2daddc92952c07, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldTransform FieldTransform::freeze() const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_freeze_c58e1d0e1f3afd7d]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_d1b42a6748e907f9]));
      }

      ::org::orekit::utils::FieldAngularCoordinates FieldTransform::getAngular() const
      {
        return ::org::orekit::utils::FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_getAngular_f9d057933ad73f59]));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldTransform::getCartesian() const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getCartesian_345fc9bafd1687ff]));
      }

      ::org::orekit::time::AbsoluteDate FieldTransform::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldTransform::getFieldDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFieldDate_1fea28374011eef5]));
      }

      FieldTransform FieldTransform::getIdentity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_17da171d62449753], a0.this$));
      }

      FieldTransform FieldTransform::getInverse() const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_getInverse_c58e1d0e1f3afd7d]));
      }

      void FieldTransform::getJacobian(const ::org::orekit::utils::CartesianDerivativesFilter & a0, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobian_92c4dd0c6709f4ca], a0.this$, a1.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldTransform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_5c8e6f300713559c]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_d1b42a6748e907f9]));
      }

      FieldTransform FieldTransform::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_3fd67c27b4f48c52], a0.this$, a1.this$));
      }

      FieldTransform FieldTransform::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::java::util::Collection & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_9a561c7c7e0a4ab5], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldTransform FieldTransform::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::java::util::stream::Stream & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_cdad96fc1533d6a4], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldTransform FieldTransform::shiftedBy(jdouble a0) const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_shiftedBy_f2636d4a97f7a23b], a0));
      }

      FieldTransform FieldTransform::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_shiftedBy_9f52e2ad8ef98349], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform FieldTransform::staticShiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_staticShiftedBy_4e699b1bed6fd784], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform FieldTransform::toStaticTransform() const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_bfbe5d9ed8a9e205]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_42f03a1654758e56], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_25934c59f051a43a], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_1bd1ef8a7bbb7399], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_bbe671ce7c49d0a3], a0.this$));
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
      static PyObject *t_FieldTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransform_of_(t_FieldTransform *self, PyObject *args);
      static int t_FieldTransform_init_(t_FieldTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTransform_freeze(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getAcceleration(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getAngular(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getCartesian(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getDate(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getFieldDate(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getIdentity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransform_getInverse(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getJacobian(t_FieldTransform *self, PyObject *args);
      static PyObject *t_FieldTransform_getRotation(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getRotationAcceleration(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getRotationRate(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getTranslation(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getVelocity(t_FieldTransform *self);
      static PyObject *t_FieldTransform_interpolate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldTransform_shiftedBy(t_FieldTransform *self, PyObject *args);
      static PyObject *t_FieldTransform_staticShiftedBy(t_FieldTransform *self, PyObject *arg);
      static PyObject *t_FieldTransform_toStaticTransform(t_FieldTransform *self);
      static PyObject *t_FieldTransform_transformPVCoordinates(t_FieldTransform *self, PyObject *args);
      static PyObject *t_FieldTransform_get__acceleration(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__angular(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__cartesian(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__date(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__fieldDate(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__inverse(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__rotation(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__rotationAcceleration(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__rotationRate(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__translation(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__velocity(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__parameters_(t_FieldTransform *self, void *data);
      static PyGetSetDef t_FieldTransform__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTransform, acceleration),
        DECLARE_GET_FIELD(t_FieldTransform, angular),
        DECLARE_GET_FIELD(t_FieldTransform, cartesian),
        DECLARE_GET_FIELD(t_FieldTransform, date),
        DECLARE_GET_FIELD(t_FieldTransform, fieldDate),
        DECLARE_GET_FIELD(t_FieldTransform, inverse),
        DECLARE_GET_FIELD(t_FieldTransform, rotation),
        DECLARE_GET_FIELD(t_FieldTransform, rotationAcceleration),
        DECLARE_GET_FIELD(t_FieldTransform, rotationRate),
        DECLARE_GET_FIELD(t_FieldTransform, translation),
        DECLARE_GET_FIELD(t_FieldTransform, velocity),
        DECLARE_GET_FIELD(t_FieldTransform, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTransform__methods_[] = {
        DECLARE_METHOD(t_FieldTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransform, freeze, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getAngular, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getCartesian, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getFieldDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getIdentity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getJacobian, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, interpolate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransform, staticShiftedBy, METH_O),
        DECLARE_METHOD(t_FieldTransform, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, transformPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTransform)[] = {
        { Py_tp_methods, t_FieldTransform__methods_ },
        { Py_tp_init, (void *) t_FieldTransform_init_ },
        { Py_tp_getset, t_FieldTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTransform, t_FieldTransform, FieldTransform);
      PyObject *t_FieldTransform::wrap_Object(const FieldTransform& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransform::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransform *self = (t_FieldTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTransform::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransform::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransform *self = (t_FieldTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTransform), &PY_TYPE_DEF(FieldTransform), module, "FieldTransform", 0);
      }

      void t_FieldTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransform), "class_", make_descriptor(FieldTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransform), "wrapfn_", make_descriptor(t_FieldTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTransform::initializeClass, 1)))
          return NULL;
        return t_FieldTransform::wrap_Object(FieldTransform(((t_FieldTransform *) arg)->object.this$));
      }
      static PyObject *t_FieldTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTransform_of_(t_FieldTransform *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTransform_init_(t_FieldTransform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldAngularCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Transform a1((jobject) NULL);
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTransform a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, FieldTransform::initializeClass, FieldTransform::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, t_FieldTransform::parameters_, &a2, &p2, t_FieldTransform::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2, a3));
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

      static PyObject *t_FieldTransform_freeze(t_FieldTransform *self)
      {
        FieldTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.freeze());
        return t_FieldTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getAcceleration(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getAngular(t_FieldTransform *self)
      {
        ::org::orekit::utils::FieldAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngular());
        return ::org::orekit::utils::t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getCartesian(t_FieldTransform *self)
      {
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getCartesian());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getDate(t_FieldTransform *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_FieldTransform_getFieldDate(t_FieldTransform *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFieldDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getIdentity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTransform result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldTransform::getIdentity(a0));
          return t_FieldTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getIdentity", arg);
        return NULL;
      }

      static PyObject *t_FieldTransform_getInverse(t_FieldTransform *self)
      {
        FieldTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_FieldTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getJacobian(t_FieldTransform *self, PyObject *args)
      {
        ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "K[[K", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.getJacobian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobian", args);
        return NULL;
      }

      static PyObject *t_FieldTransform_getRotation(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getRotationAcceleration(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getRotationRate(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getTranslation(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getVelocity(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_interpolate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldTransform::interpolate(a0, a1));
              return t_FieldTransform::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::util::Collection a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &p3, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldTransform::interpolate(a0, a1, a2, a3));
              return t_FieldTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::util::stream::Stream a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &p3, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldTransform::interpolate(a0, a1, a2, a3));
              return t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "interpolate", args);
        return NULL;
      }

      static PyObject *t_FieldTransform_shiftedBy(t_FieldTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldTransform::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldTransform::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldTransform_staticShiftedBy(t_FieldTransform *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.staticShiftedBy(a0));
          return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "staticShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldTransform_toStaticTransform(t_FieldTransform *self)
      {
        ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_transformPVCoordinates(t_FieldTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPVCoordinates", args);
        return NULL;
      }
      static PyObject *t_FieldTransform_get__parameters_(t_FieldTransform *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTransform_get__acceleration(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__angular(t_FieldTransform *self, void *data)
      {
        ::org::orekit::utils::FieldAngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngular());
        return ::org::orekit::utils::t_FieldAngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__cartesian(t_FieldTransform *self, void *data)
      {
        ::org::orekit::utils::FieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getCartesian());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__date(t_FieldTransform *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__fieldDate(t_FieldTransform *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFieldDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__inverse(t_FieldTransform *self, void *data)
      {
        FieldTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_FieldTransform::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__rotation(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__rotationAcceleration(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__rotationRate(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__translation(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__velocity(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldSinhCosh::class$ = NULL;
      jmethodID *FieldSinhCosh::mids$ = NULL;
      bool FieldSinhCosh::live$ = false;

      jclass FieldSinhCosh::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldSinhCosh");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b1372600709408bf] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
          mids$[mid_cosh_704a5bee58538972] = env->getMethodID(cls, "cosh", "()Ljava/lang/Object;");
          mids$[mid_difference_be6a16d234663f58] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/FieldSinhCosh;Lorg/hipparchus/util/FieldSinhCosh;)Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sinh_704a5bee58538972] = env->getMethodID(cls, "sinh", "()Ljava/lang/Object;");
          mids$[mid_sum_be6a16d234663f58] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/FieldSinhCosh;Lorg/hipparchus/util/FieldSinhCosh;)Lorg/hipparchus/util/FieldSinhCosh;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSinhCosh::FieldSinhCosh(const ::java::lang::Object & a0, const ::java::lang::Object & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b1372600709408bf, a0.this$, a1.this$)) {}

      ::java::lang::Object FieldSinhCosh::cosh() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_cosh_704a5bee58538972]));
      }

      FieldSinhCosh FieldSinhCosh::difference(const FieldSinhCosh & a0, const FieldSinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinhCosh(env->callStaticObjectMethod(cls, mids$[mid_difference_be6a16d234663f58], a0.this$, a1.this$));
      }

      ::java::lang::Object FieldSinhCosh::sinh() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_sinh_704a5bee58538972]));
      }

      FieldSinhCosh FieldSinhCosh::sum(const FieldSinhCosh & a0, const FieldSinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sum_be6a16d234663f58], a0.this$, a1.this$));
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
      static PyObject *t_FieldSinhCosh_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinhCosh_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinhCosh_of_(t_FieldSinhCosh *self, PyObject *args);
      static int t_FieldSinhCosh_init_(t_FieldSinhCosh *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSinhCosh_cosh(t_FieldSinhCosh *self);
      static PyObject *t_FieldSinhCosh_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinhCosh_sinh(t_FieldSinhCosh *self);
      static PyObject *t_FieldSinhCosh_sum(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinhCosh_get__parameters_(t_FieldSinhCosh *self, void *data);
      static PyGetSetDef t_FieldSinhCosh__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSinhCosh, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSinhCosh__methods_[] = {
        DECLARE_METHOD(t_FieldSinhCosh, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinhCosh, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinhCosh, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSinhCosh, cosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinhCosh, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldSinhCosh, sinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinhCosh, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSinhCosh)[] = {
        { Py_tp_methods, t_FieldSinhCosh__methods_ },
        { Py_tp_init, (void *) t_FieldSinhCosh_init_ },
        { Py_tp_getset, t_FieldSinhCosh__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSinhCosh)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSinhCosh, t_FieldSinhCosh, FieldSinhCosh);
      PyObject *t_FieldSinhCosh::wrap_Object(const FieldSinhCosh& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinhCosh::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinhCosh *self = (t_FieldSinhCosh *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSinhCosh::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinhCosh::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinhCosh *self = (t_FieldSinhCosh *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSinhCosh::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSinhCosh), &PY_TYPE_DEF(FieldSinhCosh), module, "FieldSinhCosh", 0);
      }

      void t_FieldSinhCosh::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinhCosh), "class_", make_descriptor(FieldSinhCosh::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinhCosh), "wrapfn_", make_descriptor(t_FieldSinhCosh::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinhCosh), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSinhCosh_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSinhCosh::initializeClass, 1)))
          return NULL;
        return t_FieldSinhCosh::wrap_Object(FieldSinhCosh(((t_FieldSinhCosh *) arg)->object.this$));
      }
      static PyObject *t_FieldSinhCosh_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSinhCosh::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSinhCosh_of_(t_FieldSinhCosh *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSinhCosh_init_(t_FieldSinhCosh *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        FieldSinhCosh object((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          INT_CALL(object = FieldSinhCosh(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldSinhCosh_cosh(t_FieldSinhCosh *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinhCosh_difference(PyTypeObject *type, PyObject *args)
      {
        FieldSinhCosh a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinhCosh a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinhCosh result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinhCosh::initializeClass, FieldSinhCosh::initializeClass, &a0, &p0, t_FieldSinhCosh::parameters_, &a1, &p1, t_FieldSinhCosh::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinhCosh::difference(a0, a1));
          return t_FieldSinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_FieldSinhCosh_sinh(t_FieldSinhCosh *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinhCosh_sum(PyTypeObject *type, PyObject *args)
      {
        FieldSinhCosh a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinhCosh a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinhCosh result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinhCosh::initializeClass, FieldSinhCosh::initializeClass, &a0, &p0, t_FieldSinhCosh::parameters_, &a1, &p1, t_FieldSinhCosh::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinhCosh::sum(a0, a1));
          return t_FieldSinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
      static PyObject *t_FieldSinhCosh_get__parameters_(t_FieldSinhCosh *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *FieldLine::class$ = NULL;
          jmethodID *FieldLine::mids$ = NULL;
          bool FieldLine::live$ = false;

          jclass FieldLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/FieldLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_61231ec3563f33c2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;D)V");
              mids$[mid_closestPoint_982f3c7e14164ce8] = env->getMethodID(cls, "closestPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_contains_f6d8940437db3446] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Z");
              mids$[mid_contains_decdc24b3aebe77a] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
              mids$[mid_distance_638d706d80819744] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_aa19eca086a185fe] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_1cfc77d18e0355ee] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAbscissa_aa19eca086a185fe] = env->getMethodID(cls, "getAbscissa", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAbscissa_1cfc77d18e0355ee] = env->getMethodID(cls, "getAbscissa", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDirection_d1b42a6748e907f9] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getOrigin_d1b42a6748e907f9] = env->getMethodID(cls, "getOrigin", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_intersection_982f3c7e14164ce8] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_isSimilarTo_35c55ea9632578f1] = env->getMethodID(cls, "isSimilarTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Z");
              mids$[mid_pointAt_9fc2ffdb71a4cfdb] = env->getMethodID(cls, "pointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_pointAt_c2b058e1eb7a8988] = env->getMethodID(cls, "pointAt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_reset_45d220651e48f081] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_revert_d5b9b48b2c4cd04f] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/FieldLine;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldLine::FieldLine(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_61231ec3563f33c2, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::closestPoint(const FieldLine & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_closestPoint_982f3c7e14164ce8], a0.this$));
          }

          jboolean FieldLine::contains(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_f6d8940437db3446], a0.this$);
          }

          jboolean FieldLine::contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_decdc24b3aebe77a], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::distance(const FieldLine & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_638d706d80819744], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::distance(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_aa19eca086a185fe], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_1cfc77d18e0355ee], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbscissa_aa19eca086a185fe], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbscissa_1cfc77d18e0355ee], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::getDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getDirection_d1b42a6748e907f9]));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::getOrigin() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getOrigin_d1b42a6748e907f9]));
          }

          jdouble FieldLine::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::intersection(const FieldLine & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_intersection_982f3c7e14164ce8], a0.this$));
          }

          jboolean FieldLine::isSimilarTo(const FieldLine & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimilarTo_35c55ea9632578f1], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::pointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointAt_9fc2ffdb71a4cfdb], a0));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::pointAt(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointAt_c2b058e1eb7a8988], a0.this$));
          }

          void FieldLine::reset(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_45d220651e48f081], a0.this$, a1.this$);
          }

          FieldLine FieldLine::revert() const
          {
            return FieldLine(env->callObjectMethod(this$, mids$[mid_revert_d5b9b48b2c4cd04f]));
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
          static PyObject *t_FieldLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLine_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLine_of_(t_FieldLine *self, PyObject *args);
          static int t_FieldLine_init_(t_FieldLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldLine_closestPoint(t_FieldLine *self, PyObject *arg);
          static PyObject *t_FieldLine_contains(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_distance(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_getAbscissa(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_getDirection(t_FieldLine *self);
          static PyObject *t_FieldLine_getOrigin(t_FieldLine *self);
          static PyObject *t_FieldLine_getTolerance(t_FieldLine *self);
          static PyObject *t_FieldLine_intersection(t_FieldLine *self, PyObject *arg);
          static PyObject *t_FieldLine_isSimilarTo(t_FieldLine *self, PyObject *arg);
          static PyObject *t_FieldLine_pointAt(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_reset(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_revert(t_FieldLine *self);
          static PyObject *t_FieldLine_get__direction(t_FieldLine *self, void *data);
          static PyObject *t_FieldLine_get__origin(t_FieldLine *self, void *data);
          static PyObject *t_FieldLine_get__tolerance(t_FieldLine *self, void *data);
          static PyObject *t_FieldLine_get__parameters_(t_FieldLine *self, void *data);
          static PyGetSetDef t_FieldLine__fields_[] = {
            DECLARE_GET_FIELD(t_FieldLine, direction),
            DECLARE_GET_FIELD(t_FieldLine, origin),
            DECLARE_GET_FIELD(t_FieldLine, tolerance),
            DECLARE_GET_FIELD(t_FieldLine, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldLine__methods_[] = {
            DECLARE_METHOD(t_FieldLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLine, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, closestPoint, METH_O),
            DECLARE_METHOD(t_FieldLine, contains, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, distance, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, getAbscissa, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, getDirection, METH_NOARGS),
            DECLARE_METHOD(t_FieldLine, getOrigin, METH_NOARGS),
            DECLARE_METHOD(t_FieldLine, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_FieldLine, intersection, METH_O),
            DECLARE_METHOD(t_FieldLine, isSimilarTo, METH_O),
            DECLARE_METHOD(t_FieldLine, pointAt, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, reset, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, revert, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldLine)[] = {
            { Py_tp_methods, t_FieldLine__methods_ },
            { Py_tp_init, (void *) t_FieldLine_init_ },
            { Py_tp_getset, t_FieldLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldLine)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldLine, t_FieldLine, FieldLine);
          PyObject *t_FieldLine::wrap_Object(const FieldLine& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLine::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLine *self = (t_FieldLine *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldLine::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLine::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLine *self = (t_FieldLine *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldLine::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldLine), &PY_TYPE_DEF(FieldLine), module, "FieldLine", 0);
          }

          void t_FieldLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLine), "class_", make_descriptor(FieldLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLine), "wrapfn_", make_descriptor(t_FieldLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldLine::initializeClass, 1)))
              return NULL;
            return t_FieldLine::wrap_Object(FieldLine(((t_FieldLine *) arg)->object.this$));
          }
          static PyObject *t_FieldLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldLine_of_(t_FieldLine *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldLine_init_(t_FieldLine *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldLine object((jobject) NULL);

            if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
            {
              INT_CALL(object = FieldLine(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldLine_closestPoint(t_FieldLine *self, PyObject *arg)
          {
            FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.closestPoint(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "closestPoint", arg);
            return NULL;
          }

          static PyObject *t_FieldLine_contains(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                jboolean result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.contains(a0));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.contains(a0));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "contains", args);
            return NULL;
          }

          static PyObject *t_FieldLine_distance(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldLine a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldLine_getAbscissa(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.getAbscissa(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getAbscissa(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getAbscissa", args);
            return NULL;
          }

          static PyObject *t_FieldLine_getDirection(t_FieldLine *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldLine_getOrigin(t_FieldLine *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldLine_getTolerance(t_FieldLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_FieldLine_intersection(t_FieldLine *self, PyObject *arg)
          {
            FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.intersection(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", arg);
            return NULL;
          }

          static PyObject *t_FieldLine_isSimilarTo(t_FieldLine *self, PyObject *arg)
          {
            FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.isSimilarTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isSimilarTo", arg);
            return NULL;
          }

          static PyObject *t_FieldLine_pointAt(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.pointAt(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pointAt(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pointAt", args);
            return NULL;
          }

          static PyObject *t_FieldLine_reset(t_FieldLine *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(self->object.reset(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_FieldLine_revert(t_FieldLine *self)
          {
            FieldLine result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_FieldLine::wrap_Object(result, self->parameters[0]);
          }
          static PyObject *t_FieldLine_get__parameters_(t_FieldLine *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldLine_get__direction(t_FieldLine *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
          }

          static PyObject *t_FieldLine_get__origin(t_FieldLine *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
          }

          static PyObject *t_FieldLine_get__tolerance(t_FieldLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmMetadata::class$ = NULL;
            jmethodID *OdmMetadata::mids$ = NULL;
            bool OdmMetadata::live$ = false;

            jclass OdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getObjectName_d2c8eb4129821f0e] = env->getMethodID(cls, "getObjectName", "()Ljava/lang/String;");
                mids$[mid_setObjectName_105e1eadb709d9ac] = env->getMethodID(cls, "setObjectName", "(Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::String OdmMetadata::getObjectName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectName_d2c8eb4129821f0e]));
            }

            void OdmMetadata::setObjectName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectName_105e1eadb709d9ac], a0.this$);
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
            static PyObject *t_OdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadata_getObjectName(t_OdmMetadata *self);
            static PyObject *t_OdmMetadata_setObjectName(t_OdmMetadata *self, PyObject *arg);
            static PyObject *t_OdmMetadata_get__objectName(t_OdmMetadata *self, void *data);
            static int t_OdmMetadata_set__objectName(t_OdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_OdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_OdmMetadata, objectName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmMetadata__methods_[] = {
              DECLARE_METHOD(t_OdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadata, getObjectName, METH_NOARGS),
              DECLARE_METHOD(t_OdmMetadata, setObjectName, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmMetadata)[] = {
              { Py_tp_methods, t_OdmMetadata__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_OdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(OdmMetadata, t_OdmMetadata, OdmMetadata);

            void t_OdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmMetadata), &PY_TYPE_DEF(OdmMetadata), module, "OdmMetadata", 0);
            }

            void t_OdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadata), "class_", make_descriptor(OdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadata), "wrapfn_", make_descriptor(t_OdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmMetadata::initializeClass, 1)))
                return NULL;
              return t_OdmMetadata::wrap_Object(OdmMetadata(((t_OdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_OdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_OdmMetadata_getObjectName(t_OdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectName());
              return j2p(result);
            }

            static PyObject *t_OdmMetadata_setObjectName(t_OdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectName", arg);
              return NULL;
            }

            static PyObject *t_OdmMetadata_get__objectName(t_OdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectName());
              return j2p(value);
            }
            static int t_OdmMetadata_set__objectName(t_OdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectName", arg);
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
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalProcess::class$ = NULL;
        jmethodID *SemiAnalyticalProcess::mids$ = NULL;
        bool SemiAnalyticalProcess::live$ = false;

        jclass SemiAnalyticalProcess::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalProcess");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_32b51ab222e72e59] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_ff7cb6c242604316] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getObserver_6e4d0b03328febe6] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_initializeShortPeriodicTerms_72b846eb87f3af9a] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateNominalSpacecraftState_72b846eb87f3af9a] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateShortPeriods_72b846eb87f3af9a] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SemiAnalyticalProcess::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_32b51ab222e72e59], a0.this$, a1.this$);
        }

        void SemiAnalyticalProcess::finalizeOperationsObservationGrid() const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeOperationsObservationGrid_ff7cb6c242604316]);
        }

        ::org::orekit::estimation::sequential::KalmanObserver SemiAnalyticalProcess::getObserver() const
        {
          return ::org::orekit::estimation::sequential::KalmanObserver(env->callObjectMethod(this$, mids$[mid_getObserver_6e4d0b03328febe6]));
        }

        void SemiAnalyticalProcess::initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_initializeShortPeriodicTerms_72b846eb87f3af9a], a0.this$);
        }

        void SemiAnalyticalProcess::updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateNominalSpacecraftState_72b846eb87f3af9a], a0.this$);
        }

        void SemiAnalyticalProcess::updateShortPeriods(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateShortPeriods_72b846eb87f3af9a], a0.this$);
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
      namespace sequential {
        static PyObject *t_SemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_finalizeEstimation(t_SemiAnalyticalProcess *self, PyObject *args);
        static PyObject *t_SemiAnalyticalProcess_finalizeOperationsObservationGrid(t_SemiAnalyticalProcess *self);
        static PyObject *t_SemiAnalyticalProcess_getObserver(t_SemiAnalyticalProcess *self);
        static PyObject *t_SemiAnalyticalProcess_initializeShortPeriodicTerms(t_SemiAnalyticalProcess *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_updateNominalSpacecraftState(t_SemiAnalyticalProcess *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_updateShortPeriods(t_SemiAnalyticalProcess *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_get__observer(t_SemiAnalyticalProcess *self, void *data);
        static PyGetSetDef t_SemiAnalyticalProcess__fields_[] = {
          DECLARE_GET_FIELD(t_SemiAnalyticalProcess, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalProcess__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalProcess, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, finalizeOperationsObservationGrid, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, initializeShortPeriodicTerms, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalProcess, updateNominalSpacecraftState, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalProcess, updateShortPeriods, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalProcess)[] = {
          { Py_tp_methods, t_SemiAnalyticalProcess__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalProcess__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalProcess)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalProcess, t_SemiAnalyticalProcess, SemiAnalyticalProcess);

        void t_SemiAnalyticalProcess::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalProcess), &PY_TYPE_DEF(SemiAnalyticalProcess), module, "SemiAnalyticalProcess", 0);
        }

        void t_SemiAnalyticalProcess::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalProcess), "class_", make_descriptor(SemiAnalyticalProcess::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalProcess), "wrapfn_", make_descriptor(t_SemiAnalyticalProcess::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalProcess), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalProcess::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalProcess::wrap_Object(SemiAnalyticalProcess(((t_SemiAnalyticalProcess *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalProcess::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalProcess_finalizeEstimation(t_SemiAnalyticalProcess *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_finalizeOperationsObservationGrid(t_SemiAnalyticalProcess *self)
        {
          OBJ_CALL(self->object.finalizeOperationsObservationGrid());
          Py_RETURN_NONE;
        }

        static PyObject *t_SemiAnalyticalProcess_getObserver(t_SemiAnalyticalProcess *self)
        {
          ::org::orekit::estimation::sequential::KalmanObserver result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalProcess_initializeShortPeriodicTerms(t_SemiAnalyticalProcess *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.initializeShortPeriodicTerms(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodicTerms", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_updateNominalSpacecraftState(t_SemiAnalyticalProcess *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateNominalSpacecraftState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateNominalSpacecraftState", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_updateShortPeriods(t_SemiAnalyticalProcess *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateShortPeriods(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateShortPeriods", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_get__observer(t_SemiAnalyticalProcess *self, void *data)
        {
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(value);
        }
      }
    }
  }
}

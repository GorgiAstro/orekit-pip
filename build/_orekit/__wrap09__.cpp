#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/MannWhitneyUTest.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *MannWhitneyUTest::class$ = NULL;
        jmethodID *MannWhitneyUTest::mids$ = NULL;
        bool MannWhitneyUTest::live$ = false;

        jclass MannWhitneyUTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/MannWhitneyUTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_30686433a7523e33] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_mannWhitneyU_1ce76fb6ff382da9] = env->getMethodID(cls, "mannWhitneyU", "([D[D)D");
            mids$[mid_mannWhitneyUTest_1ce76fb6ff382da9] = env->getMethodID(cls, "mannWhitneyUTest", "([D[D)D");
            mids$[mid_mannWhitneyUTest_6379f5334de861c2] = env->getMethodID(cls, "mannWhitneyUTest", "([D[DZ)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MannWhitneyUTest::MannWhitneyUTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        MannWhitneyUTest::MannWhitneyUTest(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::stat::ranking::TiesStrategy & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30686433a7523e33, a0.this$, a1.this$)) {}

        jdouble MannWhitneyUTest::mannWhitneyU(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mannWhitneyU_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble MannWhitneyUTest::mannWhitneyUTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mannWhitneyUTest_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble MannWhitneyUTest::mannWhitneyUTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mannWhitneyUTest_6379f5334de861c2], a0.this$, a1.this$, a2);
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
      namespace inference {
        static PyObject *t_MannWhitneyUTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MannWhitneyUTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MannWhitneyUTest_init_(t_MannWhitneyUTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MannWhitneyUTest_mannWhitneyU(t_MannWhitneyUTest *self, PyObject *args);
        static PyObject *t_MannWhitneyUTest_mannWhitneyUTest(t_MannWhitneyUTest *self, PyObject *args);

        static PyMethodDef t_MannWhitneyUTest__methods_[] = {
          DECLARE_METHOD(t_MannWhitneyUTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MannWhitneyUTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MannWhitneyUTest, mannWhitneyU, METH_VARARGS),
          DECLARE_METHOD(t_MannWhitneyUTest, mannWhitneyUTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MannWhitneyUTest)[] = {
          { Py_tp_methods, t_MannWhitneyUTest__methods_ },
          { Py_tp_init, (void *) t_MannWhitneyUTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MannWhitneyUTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MannWhitneyUTest, t_MannWhitneyUTest, MannWhitneyUTest);

        void t_MannWhitneyUTest::install(PyObject *module)
        {
          installType(&PY_TYPE(MannWhitneyUTest), &PY_TYPE_DEF(MannWhitneyUTest), module, "MannWhitneyUTest", 0);
        }

        void t_MannWhitneyUTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MannWhitneyUTest), "class_", make_descriptor(MannWhitneyUTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MannWhitneyUTest), "wrapfn_", make_descriptor(t_MannWhitneyUTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MannWhitneyUTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MannWhitneyUTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MannWhitneyUTest::initializeClass, 1)))
            return NULL;
          return t_MannWhitneyUTest::wrap_Object(MannWhitneyUTest(((t_MannWhitneyUTest *) arg)->object.this$));
        }
        static PyObject *t_MannWhitneyUTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MannWhitneyUTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MannWhitneyUTest_init_(t_MannWhitneyUTest *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MannWhitneyUTest object((jobject) NULL);

              INT_CALL(object = MannWhitneyUTest());
              self->object = object;
              break;
            }
           case 2:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::stat::ranking::TiesStrategy a1((jobject) NULL);
              PyTypeObject **p1;
              MannWhitneyUTest object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1, &p1, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = MannWhitneyUTest(a0, a1));
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

        static PyObject *t_MannWhitneyUTest_mannWhitneyU(t_MannWhitneyUTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.mannWhitneyU(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "mannWhitneyU", args);
          return NULL;
        }

        static PyObject *t_MannWhitneyUTest_mannWhitneyUTest(t_MannWhitneyUTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.mannWhitneyUTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.mannWhitneyUTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mannWhitneyUTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonAttitudeProviderModifier.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonAttitudeProviderModifier::class$ = NULL;
      jmethodID *PythonAttitudeProviderModifier::mids$ = NULL;
      bool PythonAttitudeProviderModifier::live$ = false;

      jclass PythonAttitudeProviderModifier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonAttitudeProviderModifier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getUnderlyingAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAttitudeProviderModifier::PythonAttitudeProviderModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonAttitudeProviderModifier::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonAttitudeProviderModifier::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonAttitudeProviderModifier::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonAttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAttitudeProviderModifier_init_(t_PythonAttitudeProviderModifier *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAttitudeProviderModifier_finalize(t_PythonAttitudeProviderModifier *self);
      static PyObject *t_PythonAttitudeProviderModifier_pythonExtension(t_PythonAttitudeProviderModifier *self, PyObject *args);
      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeProviderModifier_getUnderlyingAttitudeProvider2(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAttitudeProviderModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAttitudeProviderModifier_get__self(t_PythonAttitudeProviderModifier *self, void *data);
      static PyGetSetDef t_PythonAttitudeProviderModifier__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAttitudeProviderModifier, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAttitudeProviderModifier__methods_[] = {
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeProviderModifier)[] = {
        { Py_tp_methods, t_PythonAttitudeProviderModifier__methods_ },
        { Py_tp_init, (void *) t_PythonAttitudeProviderModifier_init_ },
        { Py_tp_getset, t_PythonAttitudeProviderModifier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAttitudeProviderModifier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAttitudeProviderModifier, t_PythonAttitudeProviderModifier, PythonAttitudeProviderModifier);

      void t_PythonAttitudeProviderModifier::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAttitudeProviderModifier), &PY_TYPE_DEF(PythonAttitudeProviderModifier), module, "PythonAttitudeProviderModifier", 1);
      }

      void t_PythonAttitudeProviderModifier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProviderModifier), "class_", make_descriptor(PythonAttitudeProviderModifier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProviderModifier), "wrapfn_", make_descriptor(t_PythonAttitudeProviderModifier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProviderModifier), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAttitudeProviderModifier::initializeClass);
        JNINativeMethod methods[] = {
          { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonAttitudeProviderModifier_getAttitude0 },
          { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonAttitudeProviderModifier_getAttitude1 },
          { "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonAttitudeProviderModifier_getUnderlyingAttitudeProvider2 },
          { "pythonDecRef", "()V", (void *) t_PythonAttitudeProviderModifier_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonAttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAttitudeProviderModifier::initializeClass, 1)))
          return NULL;
        return t_PythonAttitudeProviderModifier::wrap_Object(PythonAttitudeProviderModifier(((t_PythonAttitudeProviderModifier *) arg)->object.this$));
      }
      static PyObject *t_PythonAttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAttitudeProviderModifier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAttitudeProviderModifier_init_(t_PythonAttitudeProviderModifier *self, PyObject *args, PyObject *kwds)
      {
        PythonAttitudeProviderModifier object((jobject) NULL);

        INT_CALL(object = PythonAttitudeProviderModifier());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAttitudeProviderModifier_finalize(t_PythonAttitudeProviderModifier *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAttitudeProviderModifier_pythonExtension(t_PythonAttitudeProviderModifier *self, PyObject *args)
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

      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_a27fc9afd27e559d]);
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

      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_a27fc9afd27e559d]);
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

      static jobject JNICALL t_PythonAttitudeProviderModifier_getUnderlyingAttitudeProvider2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUnderlyingAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getUnderlyingAttitudeProvider", result);
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

      static void JNICALL t_PythonAttitudeProviderModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAttitudeProviderModifier_get__self(t_PythonAttitudeProviderModifier *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBody.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTThirdBody::class$ = NULL;
            jmethodID *DSSTThirdBody::mids$ = NULL;
            bool DSSTThirdBody::live$ = false;
            ::java::lang::String *DSSTThirdBody::ATTRACTION_COEFFICIENT = NULL;
            jdouble DSSTThirdBody::BIG_TRUNCATION_TOLERANCE = (jdouble) 0;
            jint DSSTThirdBody::MAX_POWER = (jint) 0;
            ::java::lang::String *DSSTThirdBody::SHORT_PERIOD_PREFIX = NULL;
            jdouble DSSTThirdBody::SMALL_TRUNCATION_TOLERANCE = (jdouble) 0;

            jclass DSSTThirdBody::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBody");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_4cc66398d376fdad] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;D)V");
                mids$[mid_getBody_798caa59db6076aa] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/CelestialBody;");
                mids$[mid_getMeanElementRate_3b4b4fe187ad73ff] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_5265bce9e9da3506] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_74f227e9e3e51225] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_46b1d1d9daf3396d] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_8df221610d0cb785] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_6839803ab3ef216d] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ATTRACTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT", "Ljava/lang/String;"));
                BIG_TRUNCATION_TOLERANCE = env->getStaticDoubleField(cls, "BIG_TRUNCATION_TOLERANCE");
                MAX_POWER = env->getStaticIntField(cls, "MAX_POWER");
                SHORT_PERIOD_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "SHORT_PERIOD_PREFIX", "Ljava/lang/String;"));
                SMALL_TRUNCATION_TOLERANCE = env->getStaticDoubleField(cls, "SMALL_TRUNCATION_TOLERANCE");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTThirdBody::DSSTThirdBody(const ::org::orekit::bodies::CelestialBody & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4cc66398d376fdad, a0.this$, a1)) {}

            ::org::orekit::bodies::CelestialBody DSSTThirdBody::getBody() const
            {
              return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_798caa59db6076aa]));
            }

            JArray< jdouble > DSSTThirdBody::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3b4b4fe187ad73ff], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTThirdBody::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_5265bce9e9da3506], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTThirdBody::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
            }

            ::java::util::List DSSTThirdBody::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_74f227e9e3e51225], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTThirdBody::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_46b1d1d9daf3396d], a0.this$, a1.this$, a2.this$));
            }

            void DSSTThirdBody::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8109c1a27d4471d3], a0.this$);
            }

            void DSSTThirdBody::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_8df221610d0cb785], a0.this$, a1.this$);
            }

            void DSSTThirdBody::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_6839803ab3ef216d], a0.this$, a1.this$);
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
            static PyObject *t_DSSTThirdBody_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTThirdBody_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTThirdBody_init_(t_DSSTThirdBody *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTThirdBody_getBody(t_DSSTThirdBody *self);
            static PyObject *t_DSSTThirdBody_getMeanElementRate(t_DSSTThirdBody *self, PyObject *args);
            static PyObject *t_DSSTThirdBody_getParametersDrivers(t_DSSTThirdBody *self);
            static PyObject *t_DSSTThirdBody_initializeShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args);
            static PyObject *t_DSSTThirdBody_registerAttitudeProvider(t_DSSTThirdBody *self, PyObject *arg);
            static PyObject *t_DSSTThirdBody_updateShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args);
            static PyObject *t_DSSTThirdBody_get__body(t_DSSTThirdBody *self, void *data);
            static PyObject *t_DSSTThirdBody_get__parametersDrivers(t_DSSTThirdBody *self, void *data);
            static PyGetSetDef t_DSSTThirdBody__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTThirdBody, body),
              DECLARE_GET_FIELD(t_DSSTThirdBody, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTThirdBody__methods_[] = {
              DECLARE_METHOD(t_DSSTThirdBody, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBody, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBody, getBody, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBody, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTThirdBody, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBody, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTThirdBody, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTThirdBody, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTThirdBody)[] = {
              { Py_tp_methods, t_DSSTThirdBody__methods_ },
              { Py_tp_init, (void *) t_DSSTThirdBody_init_ },
              { Py_tp_getset, t_DSSTThirdBody__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTThirdBody)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTThirdBody, t_DSSTThirdBody, DSSTThirdBody);

            void t_DSSTThirdBody::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTThirdBody), &PY_TYPE_DEF(DSSTThirdBody), module, "DSSTThirdBody", 0);
            }

            void t_DSSTThirdBody::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "class_", make_descriptor(DSSTThirdBody::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "wrapfn_", make_descriptor(t_DSSTThirdBody::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTThirdBody::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "ATTRACTION_COEFFICIENT", make_descriptor(j2p(*DSSTThirdBody::ATTRACTION_COEFFICIENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "BIG_TRUNCATION_TOLERANCE", make_descriptor(DSSTThirdBody::BIG_TRUNCATION_TOLERANCE));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "MAX_POWER", make_descriptor(DSSTThirdBody::MAX_POWER));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "SHORT_PERIOD_PREFIX", make_descriptor(j2p(*DSSTThirdBody::SHORT_PERIOD_PREFIX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "SMALL_TRUNCATION_TOLERANCE", make_descriptor(DSSTThirdBody::SMALL_TRUNCATION_TOLERANCE));
            }

            static PyObject *t_DSSTThirdBody_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTThirdBody::initializeClass, 1)))
                return NULL;
              return t_DSSTThirdBody::wrap_Object(DSSTThirdBody(((t_DSSTThirdBody *) arg)->object.this$));
            }
            static PyObject *t_DSSTThirdBody_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTThirdBody::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTThirdBody_init_(t_DSSTThirdBody *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
              jdouble a1;
              DSSTThirdBody object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTThirdBody(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTThirdBody_getBody(t_DSSTThirdBody *self)
            {
              ::org::orekit::bodies::CelestialBody result((jobject) NULL);
              OBJ_CALL(result = self->object.getBody());
              return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
            }

            static PyObject *t_DSSTThirdBody_getMeanElementRate(t_DSSTThirdBody *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_getParametersDrivers(t_DSSTThirdBody *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTThirdBody_initializeShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_registerAttitudeProvider(t_DSSTThirdBody *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_updateShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_get__body(t_DSSTThirdBody *self, void *data)
            {
              ::org::orekit::bodies::CelestialBody value((jobject) NULL);
              OBJ_CALL(value = self->object.getBody());
              return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
            }

            static PyObject *t_DSSTThirdBody_get__parametersDrivers(t_DSSTThirdBody *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/LaguerreRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *LaguerreRuleFactory::class$ = NULL;
          jmethodID *LaguerreRuleFactory::mids$ = NULL;
          bool LaguerreRuleFactory::live$ = false;

          jclass LaguerreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/LaguerreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeRule_086dd68d091255ed] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LaguerreRuleFactory::LaguerreRuleFactory() : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
          static PyObject *t_LaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LaguerreRuleFactory_init_(t_LaguerreRuleFactory *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_LaguerreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_LaguerreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LaguerreRuleFactory, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LaguerreRuleFactory)[] = {
            { Py_tp_methods, t_LaguerreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_LaguerreRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LaguerreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(LaguerreRuleFactory, t_LaguerreRuleFactory, LaguerreRuleFactory);

          void t_LaguerreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(LaguerreRuleFactory), &PY_TYPE_DEF(LaguerreRuleFactory), module, "LaguerreRuleFactory", 0);
          }

          void t_LaguerreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreRuleFactory), "class_", make_descriptor(LaguerreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreRuleFactory), "wrapfn_", make_descriptor(t_LaguerreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LaguerreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_LaguerreRuleFactory::wrap_Object(LaguerreRuleFactory(((t_LaguerreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_LaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LaguerreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LaguerreRuleFactory_init_(t_LaguerreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            LaguerreRuleFactory object((jobject) NULL);

            INT_CALL(object = LaguerreRuleFactory());
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1243.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
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
                  mids$[mid_init$_68ffe0e149823d38] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1243::Rtcm1243(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_68ffe0e149823d38, a0, a1.this$, a2.this$)) {}
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceHistoryMetadataKey::class$ = NULL;
              jmethodID *AttitudeCovarianceHistoryMetadataKey::mids$ = NULL;
              bool AttitudeCovarianceHistoryMetadataKey::live$ = false;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COMMENT = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_BASIS = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_BASIS_ID = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_ID = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_PREV_ID = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_REF_FRAME = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_TYPE = NULL;

              jclass AttitudeCovarianceHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_86dbf550cd143a52] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata;)Z");
                  mids$[mid_valueOf_415b12c12b895b99] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;");
                  mids$[mid_values_9a91b9d999aa7ac6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_BASIS = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_BASIS_ID = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_ID = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_PREV_ID = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_REF_FRAME = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_TYPE = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeCovarianceHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_86dbf550cd143a52], a0.this$, a1.this$, a2.this$);
              }

              AttitudeCovarianceHistoryMetadataKey AttitudeCovarianceHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeCovarianceHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_415b12c12b895b99], a0.this$));
              }

              JArray< AttitudeCovarianceHistoryMetadataKey > AttitudeCovarianceHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeCovarianceHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_9a91b9d999aa7ac6]));
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
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_of_(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_process(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_get__parameters_(t_AttitudeCovarianceHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_AttitudeCovarianceHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovarianceHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceHistoryMetadataKey)[] = {
                { Py_tp_methods, t_AttitudeCovarianceHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeCovarianceHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceHistoryMetadataKey, t_AttitudeCovarianceHistoryMetadataKey, AttitudeCovarianceHistoryMetadataKey);
              PyObject *t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(const AttitudeCovarianceHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceHistoryMetadataKey *self = (t_AttitudeCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceHistoryMetadataKey *self = (t_AttitudeCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeCovarianceHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceHistoryMetadataKey), &PY_TYPE_DEF(AttitudeCovarianceHistoryMetadataKey), module, "AttitudeCovarianceHistoryMetadataKey", 0);
              }

              void t_AttitudeCovarianceHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "class_", make_descriptor(AttitudeCovarianceHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "wrapfn_", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeCovarianceHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COMMENT", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_BASIS", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_BASIS_ID", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_ID", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_PREV_ID", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_REF_FRAME", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_TYPE", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_TYPE)));
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(AttitudeCovarianceHistoryMetadataKey(((t_AttitudeCovarianceHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_of_(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_process(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeCovarianceHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadataKey::valueOf(a0));
                  return t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< AttitudeCovarianceHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_get__parameters_(t_AttitudeCovarianceHistoryMetadataKey *self, void *data)
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
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanModel.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalUnscentedKalmanModel::class$ = NULL;
        jmethodID *SemiAnalyticalUnscentedKalmanModel::mids$ = NULL;
        bool SemiAnalyticalUnscentedKalmanModel::live$ = false;

        jclass SemiAnalyticalUnscentedKalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_7cf22bbe05cd26dc] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_7ae3461a92a43152] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getCorrectedMeasurement_164e77faf6b1d416] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_a4eb258dd7a1e164] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_aaa854c403487cf3] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_f2f64475e4580546] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_3d891496bfc9091e] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagator_c187e5fb5beb7558] = env->getMethodID(cls, "getEstimatedPropagator", "()Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_getEvolution_09fa99e5e4cb69dd] = env->getMethodID(cls, "getEvolution", "(D[Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/unscented/UnscentedEvolution;");
            mids$[mid_getInnovation_13f09da4e5cee032] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getNumberSelectedMeasurementDrivers_f2f64475e4580546] = env->getMethodID(cls, "getNumberSelectedMeasurementDrivers", "()I");
            mids$[mid_getNumberSelectedOrbitalDrivers_f2f64475e4580546] = env->getMethodID(cls, "getNumberSelectedOrbitalDrivers", "()I");
            mids$[mid_getNumberSelectedPropagationDrivers_f2f64475e4580546] = env->getMethodID(cls, "getNumberSelectedPropagationDrivers", "()I");
            mids$[mid_getObserver_c42c64cc17e34100] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_6d9adf1d5b463928] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_164e77faf6b1d416] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedMeasurements_f5983387fce0dad8] = env->getMethodID(cls, "getPredictedMeasurements", "([Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)[Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPredictedSpacecraftStates_a4eb258dd7a1e164] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_initializeShortPeriodicTerms_2b88003f931f70a7] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_processMeasurements_8ee8e7cbf633f37c] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;Lorg/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_fe6775fb802fa129] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_updateNominalSpacecraftState_2b88003f931f70a7] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateShortPeriods_2b88003f931f70a7] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SemiAnalyticalUnscentedKalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_7cf22bbe05cd26dc], a0.this$, a1.this$);
        }

        void SemiAnalyticalUnscentedKalmanModel::finalizeOperationsObservationGrid() const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeOperationsObservationGrid_7ae3461a92a43152]);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalUnscentedKalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_164e77faf6b1d416]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalUnscentedKalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_a4eb258dd7a1e164]));
        }

        ::org::orekit::time::AbsoluteDate SemiAnalyticalUnscentedKalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_aaa854c403487cf3]));
        }

        jint SemiAnalyticalUnscentedKalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_f2f64475e4580546]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate SemiAnalyticalUnscentedKalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_3d891496bfc9091e]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalUnscentedKalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalUnscentedKalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_eb9e6df280c6daa0]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalUnscentedKalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_eb9e6df280c6daa0]));
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalUnscentedKalmanModel::getEstimatedPropagator() const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagator_c187e5fb5beb7558]));
        }

        ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution SemiAnalyticalUnscentedKalmanModel::getEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_09fa99e5e4cb69dd], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalUnscentedKalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_13f09da4e5cee032], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        jint SemiAnalyticalUnscentedKalmanModel::getNumberSelectedMeasurementDrivers() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberSelectedMeasurementDrivers_f2f64475e4580546]);
        }

        jint SemiAnalyticalUnscentedKalmanModel::getNumberSelectedOrbitalDrivers() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberSelectedOrbitalDrivers_f2f64475e4580546]);
        }

        jint SemiAnalyticalUnscentedKalmanModel::getNumberSelectedPropagationDrivers() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberSelectedPropagationDrivers_f2f64475e4580546]);
        }

        ::org::orekit::estimation::sequential::KalmanObserver SemiAnalyticalUnscentedKalmanModel::getObserver() const
        {
          return ::org::orekit::estimation::sequential::KalmanObserver(env->callObjectMethod(this$, mids$[mid_getObserver_c42c64cc17e34100]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalUnscentedKalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_6d9adf1d5b463928]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_7116bbecdd8ceb21]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalUnscentedKalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_164e77faf6b1d416]));
        }

        JArray< ::org::hipparchus::linear::RealVector > SemiAnalyticalUnscentedKalmanModel::getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > & a0, const ::org::orekit::estimation::sequential::MeasurementDecorator & a1) const
        {
          return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurements_f5983387fce0dad8], a0.this$, a1.this$));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalUnscentedKalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_a4eb258dd7a1e164]));
        }

        void SemiAnalyticalUnscentedKalmanModel::initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_initializeShortPeriodicTerms_2b88003f931f70a7], a0.this$);
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalUnscentedKalmanModel::processMeasurements(const ::java::util::List & a0, const ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter & a1) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_8ee8e7cbf633f37c], a0.this$, a1.this$));
        }

        void SemiAnalyticalUnscentedKalmanModel::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_fe6775fb802fa129], a0.this$);
        }

        void SemiAnalyticalUnscentedKalmanModel::updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateNominalSpacecraftState_2b88003f931f70a7], a0.this$);
        }

        void SemiAnalyticalUnscentedKalmanModel::updateShortPeriods(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateShortPeriods_2b88003f931f70a7], a0.this$);
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
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeEstimation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentDate(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimate(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEvolution(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getInnovation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getObserver(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_processMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_setObserver(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateShortPeriods(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentDate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__observer(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static int t_SemiAnalyticalUnscentedKalmanModel_set__observer(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyGetSetDef t_SemiAnalyticalUnscentedKalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, currentDate),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimate),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedPropagator),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, numberSelectedMeasurementDrivers),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, numberSelectedOrbitalDrivers),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, numberSelectedPropagationDrivers),
          DECLARE_GETSET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, observer),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalUnscentedKalmanModel__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, finalizeOperationsObservationGrid, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedPropagator, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getNumberSelectedMeasurementDrivers, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getNumberSelectedOrbitalDrivers, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getNumberSelectedPropagationDrivers, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPredictedMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, initializeShortPeriodicTerms, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, processMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, setObserver, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, updateNominalSpacecraftState, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, updateShortPeriods, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalUnscentedKalmanModel)[] = {
          { Py_tp_methods, t_SemiAnalyticalUnscentedKalmanModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalUnscentedKalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalUnscentedKalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalUnscentedKalmanModel, t_SemiAnalyticalUnscentedKalmanModel, SemiAnalyticalUnscentedKalmanModel);

        void t_SemiAnalyticalUnscentedKalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalUnscentedKalmanModel), &PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanModel), module, "SemiAnalyticalUnscentedKalmanModel", 0);
        }

        void t_SemiAnalyticalUnscentedKalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanModel), "class_", make_descriptor(SemiAnalyticalUnscentedKalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanModel), "wrapfn_", make_descriptor(t_SemiAnalyticalUnscentedKalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalUnscentedKalmanModel::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalUnscentedKalmanModel::wrap_Object(SemiAnalyticalUnscentedKalmanModel(((t_SemiAnalyticalUnscentedKalmanModel *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalUnscentedKalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeEstimation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
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

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          OBJ_CALL(self->object.finalizeOperationsObservationGrid());
          Py_RETURN_NONE;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentDate(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimate(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEvolution(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          jdouble a0;
          JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution result((jobject) NULL);

          if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::unscented::t_UnscentedEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getInnovation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::hipparchus::linear::RealVector a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberSelectedMeasurementDrivers());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberSelectedOrbitalDrivers());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberSelectedPropagationDrivers());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getObserver(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::sequential::KalmanObserver result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          JArray< ::org::hipparchus::linear::RealVector > a0((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a1((jobject) NULL);
          JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

          if (!parseArgs(args, "[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPredictedMeasurements(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getPredictedMeasurements", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
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

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_processMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::hipparchus::filtering::kalman::unscented::t_UnscentedKalmanFilter::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0, a1));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_setObserver(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
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

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateShortPeriods(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
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

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentDate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberSelectedMeasurementDrivers());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberSelectedOrbitalDrivers());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberSelectedPropagationDrivers());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__observer(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(value);
        }
        static int t_SemiAnalyticalUnscentedKalmanModel_set__observer(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4A0.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4A0::class$ = NULL;
          jmethodID *SubFrame4A0::mids$ = NULL;
          bool SubFrame4A0::live$ = false;

          jclass SubFrame4A0::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4A0");

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
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4A0_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A0_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SubFrame4A0__methods_[] = {
            DECLARE_METHOD(t_SubFrame4A0, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A0, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4A0)[] = {
            { Py_tp_methods, t_SubFrame4A0__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4A0)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame4A),
            NULL
          };

          DEFINE_TYPE(SubFrame4A0, t_SubFrame4A0, SubFrame4A0);

          void t_SubFrame4A0::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4A0), &PY_TYPE_DEF(SubFrame4A0), module, "SubFrame4A0", 0);
          }

          void t_SubFrame4A0::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A0), "class_", make_descriptor(SubFrame4A0::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A0), "wrapfn_", make_descriptor(t_SubFrame4A0::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A0), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4A0_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4A0::initializeClass, 1)))
              return NULL;
            return t_SubFrame4A0::wrap_Object(SubFrame4A0(((t_SubFrame4A0 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4A0_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4A0::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldEventOccurrence::class$ = NULL;
        jmethodID *FieldEventOccurrence::mids$ = NULL;
        bool FieldEventOccurrence::live$ = false;

        jclass FieldEventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldEventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3039225c71fdc787] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/Action;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getAction_8c7583beb4e5a879] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_49a6589488f32cff] = env->getMethodID(cls, "getNewState", "()Lorg/hipparchus/ode/FieldODEState;");
            mids$[mid_getStopTime_e6d4d3215c30992a] = env->getMethodID(cls, "getStopTime", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventOccurrence::FieldEventOccurrence(const ::org::hipparchus::ode::events::Action & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3039225c71fdc787, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::ode::events::Action FieldEventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_8c7583beb4e5a879]));
        }

        ::org::hipparchus::ode::FieldODEState FieldEventOccurrence::getNewState() const
        {
          return ::org::hipparchus::ode::FieldODEState(env->callObjectMethod(this$, mids$[mid_getNewState_49a6589488f32cff]));
        }

        ::org::hipparchus::CalculusFieldElement FieldEventOccurrence::getStopTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getStopTime_e6d4d3215c30992a]));
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
        static PyObject *t_FieldEventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventOccurrence_of_(t_FieldEventOccurrence *self, PyObject *args);
        static int t_FieldEventOccurrence_init_(t_FieldEventOccurrence *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventOccurrence_getAction(t_FieldEventOccurrence *self);
        static PyObject *t_FieldEventOccurrence_getNewState(t_FieldEventOccurrence *self);
        static PyObject *t_FieldEventOccurrence_getStopTime(t_FieldEventOccurrence *self);
        static PyObject *t_FieldEventOccurrence_get__action(t_FieldEventOccurrence *self, void *data);
        static PyObject *t_FieldEventOccurrence_get__newState(t_FieldEventOccurrence *self, void *data);
        static PyObject *t_FieldEventOccurrence_get__stopTime(t_FieldEventOccurrence *self, void *data);
        static PyObject *t_FieldEventOccurrence_get__parameters_(t_FieldEventOccurrence *self, void *data);
        static PyGetSetDef t_FieldEventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventOccurrence, action),
          DECLARE_GET_FIELD(t_FieldEventOccurrence, newState),
          DECLARE_GET_FIELD(t_FieldEventOccurrence, stopTime),
          DECLARE_GET_FIELD(t_FieldEventOccurrence, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventOccurrence__methods_[] = {
          DECLARE_METHOD(t_FieldEventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventOccurrence, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventOccurrence, getStopTime, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventOccurrence)[] = {
          { Py_tp_methods, t_FieldEventOccurrence__methods_ },
          { Py_tp_init, (void *) t_FieldEventOccurrence_init_ },
          { Py_tp_getset, t_FieldEventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventOccurrence, t_FieldEventOccurrence, FieldEventOccurrence);
        PyObject *t_FieldEventOccurrence::wrap_Object(const FieldEventOccurrence& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventOccurrence::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventOccurrence *self = (t_FieldEventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventOccurrence::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventOccurrence::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventOccurrence *self = (t_FieldEventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventOccurrence), &PY_TYPE_DEF(FieldEventOccurrence), module, "FieldEventOccurrence", 0);
        }

        void t_FieldEventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventOccurrence), "class_", make_descriptor(FieldEventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventOccurrence), "wrapfn_", make_descriptor(t_FieldEventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventOccurrence::initializeClass, 1)))
            return NULL;
          return t_FieldEventOccurrence::wrap_Object(FieldEventOccurrence(((t_FieldEventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_FieldEventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventOccurrence_of_(t_FieldEventOccurrence *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventOccurrence_init_(t_FieldEventOccurrence *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::Action a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          FieldEventOccurrence object((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::events::Action::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_Action::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = FieldEventOccurrence(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventOccurrence_getAction(t_FieldEventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_FieldEventOccurrence_getNewState(t_FieldEventOccurrence *self)
        {
          ::org::hipparchus::ode::FieldODEState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventOccurrence_getStopTime(t_FieldEventOccurrence *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }
        static PyObject *t_FieldEventOccurrence_get__parameters_(t_FieldEventOccurrence *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventOccurrence_get__action(t_FieldEventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_FieldEventOccurrence_get__newState(t_FieldEventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(value);
        }

        static PyObject *t_FieldEventOccurrence_get__stopTime(t_FieldEventOccurrence *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovariance.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovariance::class$ = NULL;
              jmethodID *OrbitCovariance::mids$ = NULL;
              bool OrbitCovariance::live$ = false;

              jclass OrbitCovariance::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovariance");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_2606382a552ccd3f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;I)V");
                  mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_getType_89f4b16f0349faa4] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitCovariance::OrbitCovariance(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< ::java::lang::String > & a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2606382a552ccd3f, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::time::AbsoluteDate OrbitCovariance::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
              }

              ::org::hipparchus::linear::RealMatrix OrbitCovariance::getMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_7116bbecdd8ceb21]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType OrbitCovariance::getType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getType_89f4b16f0349faa4]));
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
              static PyObject *t_OrbitCovariance_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovariance_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitCovariance_init_(t_OrbitCovariance *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitCovariance_getDate(t_OrbitCovariance *self);
              static PyObject *t_OrbitCovariance_getMatrix(t_OrbitCovariance *self);
              static PyObject *t_OrbitCovariance_getType(t_OrbitCovariance *self);
              static PyObject *t_OrbitCovariance_get__date(t_OrbitCovariance *self, void *data);
              static PyObject *t_OrbitCovariance_get__matrix(t_OrbitCovariance *self, void *data);
              static PyObject *t_OrbitCovariance_get__type(t_OrbitCovariance *self, void *data);
              static PyGetSetDef t_OrbitCovariance__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCovariance, date),
                DECLARE_GET_FIELD(t_OrbitCovariance, matrix),
                DECLARE_GET_FIELD(t_OrbitCovariance, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovariance__methods_[] = {
                DECLARE_METHOD(t_OrbitCovariance, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovariance, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovariance, getDate, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovariance, getMatrix, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovariance, getType, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovariance)[] = {
                { Py_tp_methods, t_OrbitCovariance__methods_ },
                { Py_tp_init, (void *) t_OrbitCovariance_init_ },
                { Py_tp_getset, t_OrbitCovariance__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovariance)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitCovariance, t_OrbitCovariance, OrbitCovariance);

              void t_OrbitCovariance::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovariance), &PY_TYPE_DEF(OrbitCovariance), module, "OrbitCovariance", 0);
              }

              void t_OrbitCovariance::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovariance), "class_", make_descriptor(OrbitCovariance::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovariance), "wrapfn_", make_descriptor(t_OrbitCovariance::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovariance), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitCovariance_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovariance::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovariance::wrap_Object(OrbitCovariance(((t_OrbitCovariance *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovariance_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovariance::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitCovariance_init_(t_OrbitCovariance *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< ::java::lang::String > a3((jobject) NULL);
                jint a4;
                OrbitCovariance object((jobject) NULL);

                if (!parseArgs(args, "KKk[sI", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::parameters_, &a2, &a3, &a4))
                {
                  INT_CALL(object = OrbitCovariance(a0, a1, a2, a3, a4));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitCovariance_getDate(t_OrbitCovariance *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitCovariance_getMatrix(t_OrbitCovariance *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_OrbitCovariance_getType(t_OrbitCovariance *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_OrbitCovariance_get__date(t_OrbitCovariance *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OrbitCovariance_get__matrix(t_OrbitCovariance *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
              }

              static PyObject *t_OrbitCovariance_get__type(t_OrbitCovariance *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmMetadata::class$ = NULL;
            jmethodID *AdmMetadata::mids$ = NULL;
            bool AdmMetadata::live$ = false;

            jclass AdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getCenter_78375ee64056f203] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                mids$[mid_getHasCreatableBody_e470b6d9e0d979db] = env->getMethodID(cls, "getHasCreatableBody", "()Z");
                mids$[mid_getLaunchNumber_f2f64475e4580546] = env->getMethodID(cls, "getLaunchNumber", "()I");
                mids$[mid_getLaunchPiece_0090f7797e403f43] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
                mids$[mid_getLaunchYear_f2f64475e4580546] = env->getMethodID(cls, "getLaunchYear", "()I");
                mids$[mid_getObjectID_0090f7797e403f43] = env->getMethodID(cls, "getObjectID", "()Ljava/lang/String;");
                mids$[mid_getObjectName_0090f7797e403f43] = env->getMethodID(cls, "getObjectName", "()Ljava/lang/String;");
                mids$[mid_setCenter_4937bc9292f008b1] = env->getMethodID(cls, "setCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                mids$[mid_setObjectID_e939c6558ae8d313] = env->getMethodID(cls, "setObjectID", "(Ljava/lang/String;)V");
                mids$[mid_setObjectName_e939c6558ae8d313] = env->getMethodID(cls, "setObjectName", "(Ljava/lang/String;)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdmMetadata::AdmMetadata() : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            ::org::orekit::files::ccsds::definitions::BodyFacade AdmMetadata::getCenter() const
            {
              return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getCenter_78375ee64056f203]));
            }

            jboolean AdmMetadata::getHasCreatableBody() const
            {
              return env->callBooleanMethod(this$, mids$[mid_getHasCreatableBody_e470b6d9e0d979db]);
            }

            jint AdmMetadata::getLaunchNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchNumber_f2f64475e4580546]);
            }

            ::java::lang::String AdmMetadata::getLaunchPiece() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_0090f7797e403f43]));
            }

            jint AdmMetadata::getLaunchYear() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchYear_f2f64475e4580546]);
            }

            ::java::lang::String AdmMetadata::getObjectID() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectID_0090f7797e403f43]));
            }

            ::java::lang::String AdmMetadata::getObjectName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectName_0090f7797e403f43]));
            }

            void AdmMetadata::setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCenter_4937bc9292f008b1], a0.this$);
            }

            void AdmMetadata::setObjectID(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectID_e939c6558ae8d313], a0.this$);
            }

            void AdmMetadata::setObjectName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectName_e939c6558ae8d313], a0.this$);
            }

            void AdmMetadata::validate(jdouble a0) const
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
          namespace adm {
            static PyObject *t_AdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdmMetadata_init_(t_AdmMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AdmMetadata_getCenter(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getHasCreatableBody(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getLaunchNumber(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getLaunchPiece(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getLaunchYear(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getObjectID(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getObjectName(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_setCenter(t_AdmMetadata *self, PyObject *arg);
            static PyObject *t_AdmMetadata_setObjectID(t_AdmMetadata *self, PyObject *arg);
            static PyObject *t_AdmMetadata_setObjectName(t_AdmMetadata *self, PyObject *arg);
            static PyObject *t_AdmMetadata_validate(t_AdmMetadata *self, PyObject *args);
            static PyObject *t_AdmMetadata_get__center(t_AdmMetadata *self, void *data);
            static int t_AdmMetadata_set__center(t_AdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdmMetadata_get__hasCreatableBody(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__launchNumber(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__launchPiece(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__launchYear(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__objectID(t_AdmMetadata *self, void *data);
            static int t_AdmMetadata_set__objectID(t_AdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdmMetadata_get__objectName(t_AdmMetadata *self, void *data);
            static int t_AdmMetadata_set__objectName(t_AdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_AdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_AdmMetadata, center),
              DECLARE_GET_FIELD(t_AdmMetadata, hasCreatableBody),
              DECLARE_GET_FIELD(t_AdmMetadata, launchNumber),
              DECLARE_GET_FIELD(t_AdmMetadata, launchPiece),
              DECLARE_GET_FIELD(t_AdmMetadata, launchYear),
              DECLARE_GETSET_FIELD(t_AdmMetadata, objectID),
              DECLARE_GETSET_FIELD(t_AdmMetadata, objectName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmMetadata__methods_[] = {
              DECLARE_METHOD(t_AdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadata, getCenter, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getHasCreatableBody, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getLaunchNumber, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getLaunchPiece, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getLaunchYear, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getObjectID, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getObjectName, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, setCenter, METH_O),
              DECLARE_METHOD(t_AdmMetadata, setObjectID, METH_O),
              DECLARE_METHOD(t_AdmMetadata, setObjectName, METH_O),
              DECLARE_METHOD(t_AdmMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmMetadata)[] = {
              { Py_tp_methods, t_AdmMetadata__methods_ },
              { Py_tp_init, (void *) t_AdmMetadata_init_ },
              { Py_tp_getset, t_AdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(AdmMetadata, t_AdmMetadata, AdmMetadata);

            void t_AdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmMetadata), &PY_TYPE_DEF(AdmMetadata), module, "AdmMetadata", 0);
            }

            void t_AdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadata), "class_", make_descriptor(AdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadata), "wrapfn_", make_descriptor(t_AdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmMetadata::initializeClass, 1)))
                return NULL;
              return t_AdmMetadata::wrap_Object(AdmMetadata(((t_AdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_AdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdmMetadata_init_(t_AdmMetadata *self, PyObject *args, PyObject *kwds)
            {
              AdmMetadata object((jobject) NULL);

              INT_CALL(object = AdmMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_AdmMetadata_getCenter(t_AdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
            }

            static PyObject *t_AdmMetadata_getHasCreatableBody(t_AdmMetadata *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.getHasCreatableBody());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AdmMetadata_getLaunchNumber(t_AdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AdmMetadata_getLaunchPiece(t_AdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getLaunchPiece());
              return j2p(result);
            }

            static PyObject *t_AdmMetadata_getLaunchYear(t_AdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchYear());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AdmMetadata_getObjectID(t_AdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectID());
              return j2p(result);
            }

            static PyObject *t_AdmMetadata_getObjectName(t_AdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectName());
              return j2p(result);
            }

            static PyObject *t_AdmMetadata_setCenter(t_AdmMetadata *self, PyObject *arg)
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

            static PyObject *t_AdmMetadata_setObjectID(t_AdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectID(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectID", arg);
              return NULL;
            }

            static PyObject *t_AdmMetadata_setObjectName(t_AdmMetadata *self, PyObject *arg)
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

            static PyObject *t_AdmMetadata_validate(t_AdmMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(AdmMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_AdmMetadata_get__center(t_AdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
            }
            static int t_AdmMetadata_set__center(t_AdmMetadata *self, PyObject *arg, void *data)
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

            static PyObject *t_AdmMetadata_get__hasCreatableBody(t_AdmMetadata *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.getHasCreatableBody());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_AdmMetadata_get__launchNumber(t_AdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchNumber());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AdmMetadata_get__launchPiece(t_AdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getLaunchPiece());
              return j2p(value);
            }

            static PyObject *t_AdmMetadata_get__launchYear(t_AdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchYear());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AdmMetadata_get__objectID(t_AdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectID());
              return j2p(value);
            }
            static int t_AdmMetadata_set__objectID(t_AdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectID(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectID", arg);
              return -1;
            }

            static PyObject *t_AdmMetadata_get__objectName(t_AdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectName());
              return j2p(value);
            }
            static int t_AdmMetadata_set__objectName(t_AdmMetadata *self, PyObject *arg, void *data)
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
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$RangeSupplement::class$ = NULL;
        jmethodID *CRD$RangeSupplement::mids$ = NULL;
        bool CRD$RangeSupplement::live$ = false;

        jclass CRD$RangeSupplement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$RangeSupplement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ada587be4a153979] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Ljava/lang/String;DDDDD)V");
            mids$[mid_getCenterOfMassCorrection_456d9a2f64d6b28d] = env->getMethodID(cls, "getCenterOfMassCorrection", "()D");
            mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getNdFilterValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getNdFilterValue", "()D");
            mids$[mid_getRangeRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getRangeRate", "()D");
            mids$[mid_getSystemConfigurationId_0090f7797e403f43] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_getTimeBiasApplied_456d9a2f64d6b28d] = env->getMethodID(cls, "getTimeBiasApplied", "()D");
            mids$[mid_getTroposphericRefractionCorrection_456d9a2f64d6b28d] = env->getMethodID(cls, "getTroposphericRefractionCorrection", "()D");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$RangeSupplement::CRD$RangeSupplement(const ::org::orekit::time::AbsoluteDate & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ada587be4a153979, a0.this$, a1.this$, a2, a3, a4, a5, a6)) {}

        jdouble CRD$RangeSupplement::getCenterOfMassCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCenterOfMassCorrection_456d9a2f64d6b28d]);
        }

        ::org::orekit::time::AbsoluteDate CRD$RangeSupplement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
        }

        jdouble CRD$RangeSupplement::getNdFilterValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNdFilterValue_456d9a2f64d6b28d]);
        }

        jdouble CRD$RangeSupplement::getRangeRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRangeRate_456d9a2f64d6b28d]);
        }

        ::java::lang::String CRD$RangeSupplement::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_0090f7797e403f43]));
        }

        jdouble CRD$RangeSupplement::getTimeBiasApplied() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTimeBiasApplied_456d9a2f64d6b28d]);
        }

        jdouble CRD$RangeSupplement::getTroposphericRefractionCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTroposphericRefractionCorrection_456d9a2f64d6b28d]);
        }

        ::java::lang::String CRD$RangeSupplement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRD$RangeSupplement::toString() const
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
        static PyObject *t_CRD$RangeSupplement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$RangeSupplement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$RangeSupplement_init_(t_CRD$RangeSupplement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$RangeSupplement_getCenterOfMassCorrection(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getDate(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getNdFilterValue(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getRangeRate(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getSystemConfigurationId(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getTimeBiasApplied(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_getTroposphericRefractionCorrection(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_toCrdString(t_CRD$RangeSupplement *self);
        static PyObject *t_CRD$RangeSupplement_toString(t_CRD$RangeSupplement *self, PyObject *args);
        static PyObject *t_CRD$RangeSupplement_get__centerOfMassCorrection(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__date(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__ndFilterValue(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__rangeRate(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__systemConfigurationId(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__timeBiasApplied(t_CRD$RangeSupplement *self, void *data);
        static PyObject *t_CRD$RangeSupplement_get__troposphericRefractionCorrection(t_CRD$RangeSupplement *self, void *data);
        static PyGetSetDef t_CRD$RangeSupplement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, centerOfMassCorrection),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, date),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, ndFilterValue),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, rangeRate),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, systemConfigurationId),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, timeBiasApplied),
          DECLARE_GET_FIELD(t_CRD$RangeSupplement, troposphericRefractionCorrection),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$RangeSupplement__methods_[] = {
          DECLARE_METHOD(t_CRD$RangeSupplement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeSupplement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getCenterOfMassCorrection, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getNdFilterValue, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getRangeRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getTimeBiasApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, getTroposphericRefractionCorrection, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeSupplement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$RangeSupplement)[] = {
          { Py_tp_methods, t_CRD$RangeSupplement__methods_ },
          { Py_tp_init, (void *) t_CRD$RangeSupplement_init_ },
          { Py_tp_getset, t_CRD$RangeSupplement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$RangeSupplement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$RangeSupplement, t_CRD$RangeSupplement, CRD$RangeSupplement);

        void t_CRD$RangeSupplement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$RangeSupplement), &PY_TYPE_DEF(CRD$RangeSupplement), module, "CRD$RangeSupplement", 0);
        }

        void t_CRD$RangeSupplement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeSupplement), "class_", make_descriptor(CRD$RangeSupplement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeSupplement), "wrapfn_", make_descriptor(t_CRD$RangeSupplement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeSupplement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$RangeSupplement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$RangeSupplement::initializeClass, 1)))
            return NULL;
          return t_CRD$RangeSupplement::wrap_Object(CRD$RangeSupplement(((t_CRD$RangeSupplement *) arg)->object.this$));
        }
        static PyObject *t_CRD$RangeSupplement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$RangeSupplement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$RangeSupplement_init_(t_CRD$RangeSupplement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          jdouble a6;
          CRD$RangeSupplement object((jobject) NULL);

          if (!parseArgs(args, "ksDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = CRD$RangeSupplement(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$RangeSupplement_getCenterOfMassCorrection(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getCenterOfMassCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getDate(t_CRD$RangeSupplement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$RangeSupplement_getNdFilterValue(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNdFilterValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getRangeRate(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRangeRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getSystemConfigurationId(t_CRD$RangeSupplement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeSupplement_getTimeBiasApplied(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTimeBiasApplied());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_getTroposphericRefractionCorrection(t_CRD$RangeSupplement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTroposphericRefractionCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeSupplement_toCrdString(t_CRD$RangeSupplement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeSupplement_toString(t_CRD$RangeSupplement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$RangeSupplement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$RangeSupplement_get__centerOfMassCorrection(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getCenterOfMassCorrection());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__date(t_CRD$RangeSupplement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$RangeSupplement_get__ndFilterValue(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNdFilterValue());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__rangeRate(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRangeRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__systemConfigurationId(t_CRD$RangeSupplement *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }

        static PyObject *t_CRD$RangeSupplement_get__timeBiasApplied(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTimeBiasApplied());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeSupplement_get__troposphericRefractionCorrection(t_CRD$RangeSupplement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTroposphericRefractionCorrection());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1019::class$ = NULL;
              jmethodID *Rtcm1019::mids$ = NULL;
              bool Rtcm1019::live$ = false;

              jclass Rtcm1019::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_5420219adda5d86a] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1019::Rtcm1019(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1019Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_5420219adda5d86a, a0, a1.this$)) {}
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
            namespace ephemeris {
              static PyObject *t_Rtcm1019_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1019_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1019_of_(t_Rtcm1019 *self, PyObject *args);
              static int t_Rtcm1019_init_(t_Rtcm1019 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1019_get__parameters_(t_Rtcm1019 *self, void *data);
              static PyGetSetDef t_Rtcm1019__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1019, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1019__methods_[] = {
                DECLARE_METHOD(t_Rtcm1019, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1019)[] = {
                { Py_tp_methods, t_Rtcm1019__methods_ },
                { Py_tp_init, (void *) t_Rtcm1019_init_ },
                { Py_tp_getset, t_Rtcm1019__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1019)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1019, t_Rtcm1019, Rtcm1019);
              PyObject *t_Rtcm1019::wrap_Object(const Rtcm1019& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1019::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1019 *self = (t_Rtcm1019 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1019::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1019::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1019 *self = (t_Rtcm1019 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1019::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1019), &PY_TYPE_DEF(Rtcm1019), module, "Rtcm1019", 0);
              }

              void t_Rtcm1019::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019), "class_", make_descriptor(Rtcm1019::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019), "wrapfn_", make_descriptor(t_Rtcm1019::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1019_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1019::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1019::wrap_Object(Rtcm1019(((t_Rtcm1019 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1019_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1019::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1019_of_(t_Rtcm1019 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1019_init_(t_Rtcm1019 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1019Data a1((jobject) NULL);
                Rtcm1019 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1019Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1019(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1019Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1019_get__parameters_(t_Rtcm1019 *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/FDSFactory.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FDSFactory::class$ = NULL;
        jmethodID *FDSFactory::mids$ = NULL;
        bool FDSFactory::live$ = false;

        jclass FDSFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FDSFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_11914f5932256658] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_build_7d4cf49ebbb0b728] = env->getMethodID(cls, "build", "([D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_build_6b2f4e12f71db966] = env->getMethodID(cls, "build", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_constant_4695b8f2ebeb7167] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_constant_a88d27168b002560] = env->getMethodID(cls, "constant", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getCompiler_b0ae8cc686efdcbe] = env->getMethodID(cls, "getCompiler", "()Lorg/hipparchus/analysis/differentiation/DSCompiler;");
            mids$[mid_getDerivativeField_915731755491a214] = env->getMethodID(cls, "getDerivativeField", "()Lorg/hipparchus/analysis/differentiation/FDSFactory$DerivativeField;");
            mids$[mid_getValueField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_variable_27f138134a4631b3] = env->getMethodID(cls, "variable", "(ID)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_variable_6d132f5e9c3b9306] = env->getMethodID(cls, "variable", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FDSFactory::FDSFactory(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11914f5932256658, a0.this$, a1, a2)) {}

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::build(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_build_7d4cf49ebbb0b728], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::build(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_build_6b2f4e12f71db966], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::constant(jdouble a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_constant_4695b8f2ebeb7167], a0));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::constant(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_constant_a88d27168b002560], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::DSCompiler FDSFactory::getCompiler() const
        {
          return ::org::hipparchus::analysis::differentiation::DSCompiler(env->callObjectMethod(this$, mids$[mid_getCompiler_b0ae8cc686efdcbe]));
        }

        ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField FDSFactory::getDerivativeField() const
        {
          return ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField(env->callObjectMethod(this$, mids$[mid_getDerivativeField_915731755491a214]));
        }

        ::org::hipparchus::Field FDSFactory::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_70b4bbd3fa378d6b]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::variable(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_variable_27f138134a4631b3], a0, a1));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::variable(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_variable_6d132f5e9c3b9306], a0, a1.this$));
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
        static PyObject *t_FDSFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory_of_(t_FDSFactory *self, PyObject *args);
        static int t_FDSFactory_init_(t_FDSFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FDSFactory_build(t_FDSFactory *self, PyObject *args);
        static PyObject *t_FDSFactory_constant(t_FDSFactory *self, PyObject *args);
        static PyObject *t_FDSFactory_getCompiler(t_FDSFactory *self);
        static PyObject *t_FDSFactory_getDerivativeField(t_FDSFactory *self);
        static PyObject *t_FDSFactory_getValueField(t_FDSFactory *self);
        static PyObject *t_FDSFactory_variable(t_FDSFactory *self, PyObject *args);
        static PyObject *t_FDSFactory_get__compiler(t_FDSFactory *self, void *data);
        static PyObject *t_FDSFactory_get__derivativeField(t_FDSFactory *self, void *data);
        static PyObject *t_FDSFactory_get__valueField(t_FDSFactory *self, void *data);
        static PyObject *t_FDSFactory_get__parameters_(t_FDSFactory *self, void *data);
        static PyGetSetDef t_FDSFactory__fields_[] = {
          DECLARE_GET_FIELD(t_FDSFactory, compiler),
          DECLARE_GET_FIELD(t_FDSFactory, derivativeField),
          DECLARE_GET_FIELD(t_FDSFactory, valueField),
          DECLARE_GET_FIELD(t_FDSFactory, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDSFactory__methods_[] = {
          DECLARE_METHOD(t_FDSFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory, of_, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory, build, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory, constant, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory, getCompiler, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory, getDerivativeField, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory, variable, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDSFactory)[] = {
          { Py_tp_methods, t_FDSFactory__methods_ },
          { Py_tp_init, (void *) t_FDSFactory_init_ },
          { Py_tp_getset, t_FDSFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDSFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FDSFactory, t_FDSFactory, FDSFactory);
        PyObject *t_FDSFactory::wrap_Object(const FDSFactory& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory *self = (t_FDSFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FDSFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory *self = (t_FDSFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FDSFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(FDSFactory), &PY_TYPE_DEF(FDSFactory), module, "FDSFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "DerivativeField", make_descriptor(&PY_TYPE_DEF(FDSFactory$DerivativeField)));
        }

        void t_FDSFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "class_", make_descriptor(FDSFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "wrapfn_", make_descriptor(t_FDSFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FDSFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDSFactory::initializeClass, 1)))
            return NULL;
          return t_FDSFactory::wrap_Object(FDSFactory(((t_FDSFactory *) arg)->object.this$));
        }
        static PyObject *t_FDSFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDSFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FDSFactory_of_(t_FDSFactory *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FDSFactory_init_(t_FDSFactory *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          FDSFactory object((jobject) NULL);

          if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
          {
            INT_CALL(object = FDSFactory(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FDSFactory_build(t_FDSFactory *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.build(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.build(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "build", args);
          return NULL;
        }

        static PyObject *t_FDSFactory_constant(t_FDSFactory *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.constant(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.constant(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "constant", args);
          return NULL;
        }

        static PyObject *t_FDSFactory_getCompiler(t_FDSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler result((jobject) NULL);
          OBJ_CALL(result = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(result);
        }

        static PyObject *t_FDSFactory_getDerivativeField(t_FDSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField result((jobject) NULL);
          OBJ_CALL(result = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory$DerivativeField::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory_getValueField(t_FDSFactory *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory_variable(t_FDSFactory *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jdouble a1;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(result = self->object.variable(a0, a1));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.variable(a0, a1));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "variable", args);
          return NULL;
        }
        static PyObject *t_FDSFactory_get__parameters_(t_FDSFactory *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FDSFactory_get__compiler(t_FDSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler value((jobject) NULL);
          OBJ_CALL(value = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(value);
        }

        static PyObject *t_FDSFactory_get__derivativeField(t_FDSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField value((jobject) NULL);
          OBJ_CALL(value = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory$DerivativeField::wrap_Object(value);
        }

        static PyObject *t_FDSFactory_get__valueField(t_FDSFactory *self, void *data)
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
#include "org/orekit/orbits/PythonOrbit.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PythonOrbit::class$ = NULL;
      jmethodID *PythonOrbit::mids$ = NULL;
      bool PythonOrbit::live$ = false;

      jclass PythonOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PythonOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c42dca2c1e36096d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_53b3af5cdb692cc0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_c8fa6ba58ef7126b] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_computeJacobianEccentricWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianMeanWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_43de1192439efa92] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getA_456d9a2f64d6b28d] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_456d9a2f64d6b28d] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getE_456d9a2f64d6b28d] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_456d9a2f64d6b28d] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_456d9a2f64d6b28d] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_456d9a2f64d6b28d] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_456d9a2f64d6b28d] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_456d9a2f64d6b28d] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_456d9a2f64d6b28d] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_initPVCoordinates_6890805957bea2cd] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_initPosition_17a952530a808943] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_shiftedBy_77a92f9d04f61592] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonOrbit::PythonOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_c42dca2c1e36096d, a0.this$, a1.this$, a2)) {}

      PythonOrbit::PythonOrbit(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_53b3af5cdb692cc0, a0.this$, a1.this$, a2)) {}

      void PythonOrbit::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonOrbit::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonOrbit::pythonExtension(jlong a0) const
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
    namespace orbits {
      static PyObject *t_PythonOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonOrbit_init_(t_PythonOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonOrbit_finalize(t_PythonOrbit *self);
      static PyObject *t_PythonOrbit_pythonExtension(t_PythonOrbit *self, PyObject *args);
      static void JNICALL t_PythonOrbit_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
      static jobject JNICALL t_PythonOrbit_computeJacobianEccentricWrtCartesian1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_computeJacobianMeanWrtCartesian2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_computeJacobianTrueWrtCartesian3(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getA4(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getADot5(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getE6(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEDot7(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialEx8(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialExDot9(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialEy10(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialEyDot11(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHx12(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHxDot13(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHy14(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHyDot15(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getI16(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getIDot17(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLE18(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLEDot19(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLM20(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLMDot21(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLv22(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLvDot23(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_getType24(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_initPVCoordinates25(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_initPosition26(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonOrbit_pythonDecRef27(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_shiftedBy28(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonOrbit_get__self(t_PythonOrbit *self, void *data);
      static PyGetSetDef t_PythonOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_PythonOrbit, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonOrbit__methods_[] = {
        DECLARE_METHOD(t_PythonOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonOrbit, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonOrbit, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonOrbit)[] = {
        { Py_tp_methods, t_PythonOrbit__methods_ },
        { Py_tp_init, (void *) t_PythonOrbit_init_ },
        { Py_tp_getset, t_PythonOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(PythonOrbit, t_PythonOrbit, PythonOrbit);

      void t_PythonOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonOrbit), &PY_TYPE_DEF(PythonOrbit), module, "PythonOrbit", 1);
      }

      void t_PythonOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrbit), "class_", make_descriptor(PythonOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrbit), "wrapfn_", make_descriptor(t_PythonOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrbit), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonOrbit::initializeClass);
        JNINativeMethod methods[] = {
          { "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V", (void *) t_PythonOrbit_addKeplerContribution0 },
          { "computeJacobianEccentricWrtCartesian", "()[[D", (void *) t_PythonOrbit_computeJacobianEccentricWrtCartesian1 },
          { "computeJacobianMeanWrtCartesian", "()[[D", (void *) t_PythonOrbit_computeJacobianMeanWrtCartesian2 },
          { "computeJacobianTrueWrtCartesian", "()[[D", (void *) t_PythonOrbit_computeJacobianTrueWrtCartesian3 },
          { "getA", "()D", (void *) t_PythonOrbit_getA4 },
          { "getADot", "()D", (void *) t_PythonOrbit_getADot5 },
          { "getE", "()D", (void *) t_PythonOrbit_getE6 },
          { "getEDot", "()D", (void *) t_PythonOrbit_getEDot7 },
          { "getEquinoctialEx", "()D", (void *) t_PythonOrbit_getEquinoctialEx8 },
          { "getEquinoctialExDot", "()D", (void *) t_PythonOrbit_getEquinoctialExDot9 },
          { "getEquinoctialEy", "()D", (void *) t_PythonOrbit_getEquinoctialEy10 },
          { "getEquinoctialEyDot", "()D", (void *) t_PythonOrbit_getEquinoctialEyDot11 },
          { "getHx", "()D", (void *) t_PythonOrbit_getHx12 },
          { "getHxDot", "()D", (void *) t_PythonOrbit_getHxDot13 },
          { "getHy", "()D", (void *) t_PythonOrbit_getHy14 },
          { "getHyDot", "()D", (void *) t_PythonOrbit_getHyDot15 },
          { "getI", "()D", (void *) t_PythonOrbit_getI16 },
          { "getIDot", "()D", (void *) t_PythonOrbit_getIDot17 },
          { "getLE", "()D", (void *) t_PythonOrbit_getLE18 },
          { "getLEDot", "()D", (void *) t_PythonOrbit_getLEDot19 },
          { "getLM", "()D", (void *) t_PythonOrbit_getLM20 },
          { "getLMDot", "()D", (void *) t_PythonOrbit_getLMDot21 },
          { "getLv", "()D", (void *) t_PythonOrbit_getLv22 },
          { "getLvDot", "()D", (void *) t_PythonOrbit_getLvDot23 },
          { "getType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonOrbit_getType24 },
          { "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonOrbit_initPVCoordinates25 },
          { "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonOrbit_initPosition26 },
          { "pythonDecRef", "()V", (void *) t_PythonOrbit_pythonDecRef27 },
          { "shiftedBy", "(D)Lorg/orekit/orbits/Orbit;", (void *) t_PythonOrbit_shiftedBy28 },
        };
        env->registerNatives(cls, methods, 29);
      }

      static PyObject *t_PythonOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonOrbit::initializeClass, 1)))
          return NULL;
        return t_PythonOrbit::wrap_Object(PythonOrbit(((t_PythonOrbit *) arg)->object.this$));
      }
      static PyObject *t_PythonOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonOrbit_init_(t_PythonOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            PythonOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = PythonOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            PythonOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = PythonOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonOrbit_finalize(t_PythonOrbit *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonOrbit_pythonExtension(t_PythonOrbit *self, PyObject *args)
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

      static void JNICALL t_PythonOrbit_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::orbits::t_PositionAngleType::wrap_Object(::org::orekit::orbits::PositionAngleType(a0));
        PyObject *o2 = JArray<jdouble>(a2).wrap();
        PyObject *result = PyObject_CallMethod(obj, "addKeplerContribution", "OdO", o0, (double) a1, o2);
        Py_DECREF(o0);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonOrbit_computeJacobianEccentricWrtCartesian1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "computeJacobianEccentricWrtCartesian", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeJacobianEccentricWrtCartesian", result);
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

      static jobject JNICALL t_PythonOrbit_computeJacobianMeanWrtCartesian2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "computeJacobianMeanWrtCartesian", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeJacobianMeanWrtCartesian", result);
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

      static jobject JNICALL t_PythonOrbit_computeJacobianTrueWrtCartesian3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "computeJacobianTrueWrtCartesian", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeJacobianTrueWrtCartesian", result);
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

      static jdouble JNICALL t_PythonOrbit_getA4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getA", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getA", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getADot5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getADot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getADot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getE6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getE", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getE", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEDot7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialEx8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialEx", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialEx", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialExDot9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialExDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialExDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialEy10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialEy", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialEy", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialEyDot11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialEyDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialEyDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHx12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHx", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHx", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHxDot13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHxDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHxDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHy14(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHy", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHy", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHyDot15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHyDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHyDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getI16(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getI", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getI", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getIDot17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getIDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getIDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLE18(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLE", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLE", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLEDot19(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLEDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLEDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLM20(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLM", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLM", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLMDot21(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLMDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLMDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLv22(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLv", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLv", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLvDot23(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLvDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLvDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonOrbit_getType24(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
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

      static jobject JNICALL t_PythonOrbit_initPVCoordinates25(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "initPVCoordinates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("initPVCoordinates", result);
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

      static jobject JNICALL t_PythonOrbit_initPosition26(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "initPosition", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("initPosition", result);
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

      static void JNICALL t_PythonOrbit_pythonDecRef27(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonOrbit_shiftedBy28(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::Orbit value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::Orbit::initializeClass, &value))
        {
          throwTypeError("shiftedBy", result);
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

      static PyObject *t_PythonOrbit_get__self(t_PythonOrbit *self, void *data)
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
#include "org/orekit/forces/maneuvers/ConstantThrustManeuver.h"
#include "org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *ConstantThrustManeuver::class$ = NULL;
        jmethodID *ConstantThrustManeuver::mids$ = NULL;
        bool ConstantThrustManeuver::live$ = false;

        jclass ConstantThrustManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/ConstantThrustManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3071d0eebd2c86fa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers;Lorg/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel;)V");
            mids$[mid_init$_cdd50e8ce11112ae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel;)V");
            mids$[mid_init$_77049e19994346ba] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_init$_34b07c65a9b7f665] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
            mids$[mid_init$_3e3b0ad80f5b5c3f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_init$_08028e96353538f6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
            mids$[mid_init$_6b90ce2f1c6973f5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
            mids$[mid_getDirection_17a952530a808943] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDirection_71c51b45829333ce] = env->getMethodID(cls, "getDirection", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDuration_456d9a2f64d6b28d] = env->getMethodID(cls, "getDuration", "()D");
            mids$[mid_getEndDate_aaa854c403487cf3] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getFlowRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getFlowRate", "()D");
            mids$[mid_getFlowRate_e912d21057defe63] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getIsp_456d9a2f64d6b28d] = env->getMethodID(cls, "getIsp", "()D");
            mids$[mid_getIsp_e912d21057defe63] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getStartDate_aaa854c403487cf3] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getThrustMagnitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getThrustMagnitude", "()D");
            mids$[mid_getThrustMagnitude_e912d21057defe63] = env->getMethodID(cls, "getThrustMagnitude", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getThrustVector_17a952530a808943] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getThrustVector_71c51b45829333ce] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_isFiring_91c945ca7903e8ac] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
            mids$[mid_isFiring_97634138963fb58a] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/propagation/SpacecraftState;)Z");
            mids$[mid_isFiring_ee2067c5768b6768] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers & a1, const ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel & a2) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_3071d0eebd2c86fa, a0.this$, a1.this$, a2.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel & a3) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_cdd50e8ce11112ae, a0.this$, a1, a2.this$, a3.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_77049e19994346ba, a0.this$, a1, a2, a3, a4.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::java::lang::String & a5) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_34b07c65a9b7f665, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_3e3b0ad80f5b5c3f, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::java::lang::String & a6) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_08028e96353538f6, a0.this$, a1, a2, a3, a4.this$, a5.this$, a6.this$)) {}

        ConstantThrustManeuver::ConstantThrustManeuver(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a6, const ::java::lang::String & a7) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_6b90ce2f1c6973f5, a0.this$, a1, a2, a3, a4.this$, a5.this$, a6.this$, a7.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getDirection() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_17a952530a808943]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getDirection(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_71c51b45829333ce], a0.this$));
        }

        jdouble ConstantThrustManeuver::getDuration() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDuration_456d9a2f64d6b28d]);
        }

        ::org::orekit::time::AbsoluteDate ConstantThrustManeuver::getEndDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_aaa854c403487cf3]));
        }

        jdouble ConstantThrustManeuver::getFlowRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFlowRate_456d9a2f64d6b28d]);
        }

        jdouble ConstantThrustManeuver::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFlowRate_e912d21057defe63], a0.this$);
        }

        jdouble ConstantThrustManeuver::getIsp() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_456d9a2f64d6b28d]);
        }

        jdouble ConstantThrustManeuver::getIsp(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_e912d21057defe63], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate ConstantThrustManeuver::getStartDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_aaa854c403487cf3]));
        }

        jdouble ConstantThrustManeuver::getThrustMagnitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_456d9a2f64d6b28d]);
        }

        jdouble ConstantThrustManeuver::getThrustMagnitude(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_e912d21057defe63], a0.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getThrustVector() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_17a952530a808943]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustManeuver::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_71c51b45829333ce], a0.this$));
        }

        jboolean ConstantThrustManeuver::isFiring(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFiring_91c945ca7903e8ac], a0.this$);
        }

        jboolean ConstantThrustManeuver::isFiring(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFiring_97634138963fb58a], a0.this$);
        }

        jboolean ConstantThrustManeuver::isFiring(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFiring_ee2067c5768b6768], a0.this$);
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
        static PyObject *t_ConstantThrustManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantThrustManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantThrustManeuver_init_(t_ConstantThrustManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantThrustManeuver_getDirection(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getDuration(t_ConstantThrustManeuver *self);
        static PyObject *t_ConstantThrustManeuver_getEndDate(t_ConstantThrustManeuver *self);
        static PyObject *t_ConstantThrustManeuver_getFlowRate(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getIsp(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getStartDate(t_ConstantThrustManeuver *self);
        static PyObject *t_ConstantThrustManeuver_getThrustMagnitude(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_getThrustVector(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_isFiring(t_ConstantThrustManeuver *self, PyObject *args);
        static PyObject *t_ConstantThrustManeuver_get__direction(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__duration(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__endDate(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__flowRate(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__isp(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__startDate(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__thrustMagnitude(t_ConstantThrustManeuver *self, void *data);
        static PyObject *t_ConstantThrustManeuver_get__thrustVector(t_ConstantThrustManeuver *self, void *data);
        static PyGetSetDef t_ConstantThrustManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, direction),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, duration),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, endDate),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, flowRate),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, isp),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, startDate),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, thrustMagnitude),
          DECLARE_GET_FIELD(t_ConstantThrustManeuver, thrustVector),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantThrustManeuver__methods_[] = {
          DECLARE_METHOD(t_ConstantThrustManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantThrustManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getDirection, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getDuration, METH_NOARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getEndDate, METH_NOARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getFlowRate, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getIsp, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getStartDate, METH_NOARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getThrustMagnitude, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, getThrustVector, METH_VARARGS),
          DECLARE_METHOD(t_ConstantThrustManeuver, isFiring, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantThrustManeuver)[] = {
          { Py_tp_methods, t_ConstantThrustManeuver__methods_ },
          { Py_tp_init, (void *) t_ConstantThrustManeuver_init_ },
          { Py_tp_getset, t_ConstantThrustManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantThrustManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::maneuvers::Maneuver),
          NULL
        };

        DEFINE_TYPE(ConstantThrustManeuver, t_ConstantThrustManeuver, ConstantThrustManeuver);

        void t_ConstantThrustManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantThrustManeuver), &PY_TYPE_DEF(ConstantThrustManeuver), module, "ConstantThrustManeuver", 0);
        }

        void t_ConstantThrustManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustManeuver), "class_", make_descriptor(ConstantThrustManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustManeuver), "wrapfn_", make_descriptor(t_ConstantThrustManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantThrustManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantThrustManeuver::initializeClass, 1)))
            return NULL;
          return t_ConstantThrustManeuver::wrap_Object(ConstantThrustManeuver(((t_ConstantThrustManeuver *) arg)->object.this$));
        }
        static PyObject *t_ConstantThrustManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantThrustManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantThrustManeuver_init_(t_ConstantThrustManeuver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel a2((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kKk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::trigger::DateBasedManeuverTriggers::initializeClass, ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel::initializeClass, &a0, &a1, &p1, ::org::orekit::forces::maneuvers::trigger::t_DateBasedManeuverTriggers::parameters_, &a2))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel a3((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3));
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
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::java::lang::String a5((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDks", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::java::lang::String a6((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDkks", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::forces::maneuvers::Control3DVectorCostType a6((jobject) NULL);
              PyTypeObject **p6;
              ::java::lang::String a7((jobject) NULL);
              ConstantThrustManeuver object((jobject) NULL);

              if (!parseArgs(args, "kDDDkkKs", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a7))
              {
                INT_CALL(object = ConstantThrustManeuver(a0, a1, a2, a3, a4, a5, a6, a7));
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

        static PyObject *t_ConstantThrustManeuver_getDirection(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getDirection());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDirection(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getDirection", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getDuration(t_ConstantThrustManeuver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDuration());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConstantThrustManeuver_getEndDate(t_ConstantThrustManeuver *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEndDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ConstantThrustManeuver_getFlowRate(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getFlowRate());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getFlowRate(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getIsp(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIsp());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getIsp(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getIsp", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getStartDate(t_ConstantThrustManeuver *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ConstantThrustManeuver_getThrustMagnitude(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getThrustMagnitude());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThrustMagnitude(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getThrustMagnitude", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_getThrustVector(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getThrustVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThrustVector(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_isFiring(t_ConstantThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(result = self->object.isFiring(a0));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.isFiring(a0));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.isFiring(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isFiring", args);
          return NULL;
        }

        static PyObject *t_ConstantThrustManeuver_get__direction(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getDirection());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_ConstantThrustManeuver_get__duration(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDuration());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__endDate(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEndDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_ConstantThrustManeuver_get__flowRate(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFlowRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__isp(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIsp());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__startDate(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_ConstantThrustManeuver_get__thrustMagnitude(t_ConstantThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThrustMagnitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantThrustManeuver_get__thrustVector(t_ConstantThrustManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getThrustVector());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {

      ::java::lang::Class *AtmosphericRefractionModel::class$ = NULL;
      jmethodID *AtmosphericRefractionModel::mids$ = NULL;
      bool AtmosphericRefractionModel::live$ = false;

      jclass AtmosphericRefractionModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/models/AtmosphericRefractionModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getRefraction_0ba5fed9597b693e] = env->getMethodID(cls, "getRefraction", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble AtmosphericRefractionModel::getRefraction(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRefraction_0ba5fed9597b693e], a0);
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
      static PyObject *t_AtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AtmosphericRefractionModel_getRefraction(t_AtmosphericRefractionModel *self, PyObject *arg);

      static PyMethodDef t_AtmosphericRefractionModel__methods_[] = {
        DECLARE_METHOD(t_AtmosphericRefractionModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AtmosphericRefractionModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AtmosphericRefractionModel, getRefraction, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AtmosphericRefractionModel)[] = {
        { Py_tp_methods, t_AtmosphericRefractionModel__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AtmosphericRefractionModel)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(AtmosphericRefractionModel, t_AtmosphericRefractionModel, AtmosphericRefractionModel);

      void t_AtmosphericRefractionModel::install(PyObject *module)
      {
        installType(&PY_TYPE(AtmosphericRefractionModel), &PY_TYPE_DEF(AtmosphericRefractionModel), module, "AtmosphericRefractionModel", 0);
      }

      void t_AtmosphericRefractionModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefractionModel), "class_", make_descriptor(AtmosphericRefractionModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefractionModel), "wrapfn_", make_descriptor(t_AtmosphericRefractionModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefractionModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AtmosphericRefractionModel::initializeClass, 1)))
          return NULL;
        return t_AtmosphericRefractionModel::wrap_Object(AtmosphericRefractionModel(((t_AtmosphericRefractionModel *) arg)->object.this$));
      }
      static PyObject *t_AtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AtmosphericRefractionModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AtmosphericRefractionModel_getRefraction(t_AtmosphericRefractionModel *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getRefraction(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRefraction", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPEntry::class$ = NULL;
      jmethodID *EOPEntry::mids$ = NULL;
      bool EOPEntry::live$ = false;

      jclass EOPEntry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPEntry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c68cf8d9937ee5f1] = env->getMethodID(cls, "<init>", "(IDDDDDDDDDDLorg/orekit/frames/ITRFVersion;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getDdEps_456d9a2f64d6b28d] = env->getMethodID(cls, "getDdEps", "()D");
          mids$[mid_getDdPsi_456d9a2f64d6b28d] = env->getMethodID(cls, "getDdPsi", "()D");
          mids$[mid_getDx_456d9a2f64d6b28d] = env->getMethodID(cls, "getDx", "()D");
          mids$[mid_getDy_456d9a2f64d6b28d] = env->getMethodID(cls, "getDy", "()D");
          mids$[mid_getITRFType_f157e1cf87d45e2d] = env->getMethodID(cls, "getITRFType", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getLOD_456d9a2f64d6b28d] = env->getMethodID(cls, "getLOD", "()D");
          mids$[mid_getMjd_f2f64475e4580546] = env->getMethodID(cls, "getMjd", "()I");
          mids$[mid_getUT1MinusUTC_456d9a2f64d6b28d] = env->getMethodID(cls, "getUT1MinusUTC", "()D");
          mids$[mid_getX_456d9a2f64d6b28d] = env->getMethodID(cls, "getX", "()D");
          mids$[mid_getXRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getXRate", "()D");
          mids$[mid_getY_456d9a2f64d6b28d] = env->getMethodID(cls, "getY", "()D");
          mids$[mid_getYRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getYRate", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPEntry::EOPEntry(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, const ::org::orekit::frames::ITRFVersion & a11, const ::org::orekit::time::AbsoluteDate & a12) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c68cf8d9937ee5f1, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11.this$, a12.this$)) {}

      ::org::orekit::time::AbsoluteDate EOPEntry::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      jdouble EOPEntry::getDdEps() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDdEps_456d9a2f64d6b28d]);
      }

      jdouble EOPEntry::getDdPsi() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDdPsi_456d9a2f64d6b28d]);
      }

      jdouble EOPEntry::getDx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDx_456d9a2f64d6b28d]);
      }

      jdouble EOPEntry::getDy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDy_456d9a2f64d6b28d]);
      }

      ::org::orekit::frames::ITRFVersion EOPEntry::getITRFType() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFType_f157e1cf87d45e2d]));
      }

      jdouble EOPEntry::getLOD() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLOD_456d9a2f64d6b28d]);
      }

      jint EOPEntry::getMjd() const
      {
        return env->callIntMethod(this$, mids$[mid_getMjd_f2f64475e4580546]);
      }

      jdouble EOPEntry::getUT1MinusUTC() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getUT1MinusUTC_456d9a2f64d6b28d]);
      }

      jdouble EOPEntry::getX() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getX_456d9a2f64d6b28d]);
      }

      jdouble EOPEntry::getXRate() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getXRate_456d9a2f64d6b28d]);
      }

      jdouble EOPEntry::getY() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getY_456d9a2f64d6b28d]);
      }

      jdouble EOPEntry::getYRate() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getYRate_456d9a2f64d6b28d]);
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
      static PyObject *t_EOPEntry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPEntry_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPEntry_init_(t_EOPEntry *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPEntry_getDate(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDdEps(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDdPsi(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDx(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDy(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getITRFType(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getLOD(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getMjd(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getUT1MinusUTC(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getX(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getXRate(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getY(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getYRate(t_EOPEntry *self);
      static PyObject *t_EOPEntry_get__date(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__ddEps(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__ddPsi(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__dx(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__dy(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__iTRFType(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__lOD(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__mjd(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__uT1MinusUTC(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__x(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__xRate(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__y(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__yRate(t_EOPEntry *self, void *data);
      static PyGetSetDef t_EOPEntry__fields_[] = {
        DECLARE_GET_FIELD(t_EOPEntry, date),
        DECLARE_GET_FIELD(t_EOPEntry, ddEps),
        DECLARE_GET_FIELD(t_EOPEntry, ddPsi),
        DECLARE_GET_FIELD(t_EOPEntry, dx),
        DECLARE_GET_FIELD(t_EOPEntry, dy),
        DECLARE_GET_FIELD(t_EOPEntry, iTRFType),
        DECLARE_GET_FIELD(t_EOPEntry, lOD),
        DECLARE_GET_FIELD(t_EOPEntry, mjd),
        DECLARE_GET_FIELD(t_EOPEntry, uT1MinusUTC),
        DECLARE_GET_FIELD(t_EOPEntry, x),
        DECLARE_GET_FIELD(t_EOPEntry, xRate),
        DECLARE_GET_FIELD(t_EOPEntry, y),
        DECLARE_GET_FIELD(t_EOPEntry, yRate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPEntry__methods_[] = {
        DECLARE_METHOD(t_EOPEntry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPEntry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPEntry, getDate, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDdEps, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDdPsi, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDx, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDy, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getITRFType, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getLOD, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getMjd, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getUT1MinusUTC, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getX, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getXRate, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getY, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getYRate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPEntry)[] = {
        { Py_tp_methods, t_EOPEntry__methods_ },
        { Py_tp_init, (void *) t_EOPEntry_init_ },
        { Py_tp_getset, t_EOPEntry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPEntry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPEntry, t_EOPEntry, EOPEntry);

      void t_EOPEntry::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPEntry), &PY_TYPE_DEF(EOPEntry), module, "EOPEntry", 0);
      }

      void t_EOPEntry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPEntry), "class_", make_descriptor(EOPEntry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPEntry), "wrapfn_", make_descriptor(t_EOPEntry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPEntry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPEntry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPEntry::initializeClass, 1)))
          return NULL;
        return t_EOPEntry::wrap_Object(EOPEntry(((t_EOPEntry *) arg)->object.this$));
      }
      static PyObject *t_EOPEntry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPEntry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPEntry_init_(t_EOPEntry *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        jdouble a10;
        ::org::orekit::frames::ITRFVersion a11((jobject) NULL);
        PyTypeObject **p11;
        ::org::orekit::time::AbsoluteDate a12((jobject) NULL);
        EOPEntry object((jobject) NULL);

        if (!parseArgs(args, "IDDDDDDDDDDKk", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &p11, ::org::orekit::frames::t_ITRFVersion::parameters_, &a12))
        {
          INT_CALL(object = EOPEntry(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPEntry_getDate(t_EOPEntry *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_EOPEntry_getDdEps(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDdEps());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getDdPsi(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDdPsi());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getDx(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getDy(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getITRFType(t_EOPEntry *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getITRFType());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_EOPEntry_getLOD(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLOD());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getMjd(t_EOPEntry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMjd());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EOPEntry_getUT1MinusUTC(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getUT1MinusUTC());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getX(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getX());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getXRate(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getXRate());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getY(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getY());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getYRate(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getYRate());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_get__date(t_EOPEntry *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_EOPEntry_get__ddEps(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDdEps());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__ddPsi(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDdPsi());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__dx(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__dy(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__iTRFType(t_EOPEntry *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getITRFType());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_EOPEntry_get__lOD(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLOD());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__mjd(t_EOPEntry *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMjd());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_EOPEntry_get__uT1MinusUTC(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getUT1MinusUTC());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__x(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getX());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__xRate(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getXRate());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__y(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getY());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__yRate(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getYRate());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *OrbitCorrection::class$ = NULL;
            jmethodID *OrbitCorrection::mids$ = NULL;
            bool OrbitCorrection::live$ = false;

            jclass OrbitCorrection::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/OrbitCorrection");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_03d58d1a44d9d090] = env->getMethodID(cls, "<init>", "(DDDDDD)V");
                mids$[mid_getDeltaOrbitAlongTrack_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaOrbitAlongTrack", "()D");
                mids$[mid_getDeltaOrbitCrossTrack_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaOrbitCrossTrack", "()D");
                mids$[mid_getDeltaOrbitRadial_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaOrbitRadial", "()D");
                mids$[mid_getDotOrbitDeltaAlongTrack_456d9a2f64d6b28d] = env->getMethodID(cls, "getDotOrbitDeltaAlongTrack", "()D");
                mids$[mid_getDotOrbitDeltaCrossTrack_456d9a2f64d6b28d] = env->getMethodID(cls, "getDotOrbitDeltaCrossTrack", "()D");
                mids$[mid_getDotOrbitDeltaRadial_456d9a2f64d6b28d] = env->getMethodID(cls, "getDotOrbitDeltaRadial", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            OrbitCorrection::OrbitCorrection(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_03d58d1a44d9d090, a0, a1, a2, a3, a4, a5)) {}

            jdouble OrbitCorrection::getDeltaOrbitAlongTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaOrbitAlongTrack_456d9a2f64d6b28d]);
            }

            jdouble OrbitCorrection::getDeltaOrbitCrossTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaOrbitCrossTrack_456d9a2f64d6b28d]);
            }

            jdouble OrbitCorrection::getDeltaOrbitRadial() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaOrbitRadial_456d9a2f64d6b28d]);
            }

            jdouble OrbitCorrection::getDotOrbitDeltaAlongTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDotOrbitDeltaAlongTrack_456d9a2f64d6b28d]);
            }

            jdouble OrbitCorrection::getDotOrbitDeltaCrossTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDotOrbitDeltaCrossTrack_456d9a2f64d6b28d]);
            }

            jdouble OrbitCorrection::getDotOrbitDeltaRadial() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDotOrbitDeltaRadial_456d9a2f64d6b28d]);
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
          namespace common {
            static PyObject *t_OrbitCorrection_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OrbitCorrection_instance_(PyTypeObject *type, PyObject *arg);
            static int t_OrbitCorrection_init_(t_OrbitCorrection *self, PyObject *args, PyObject *kwds);
            static PyObject *t_OrbitCorrection_getDeltaOrbitAlongTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDeltaOrbitCrossTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDeltaOrbitRadial(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDotOrbitDeltaAlongTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDotOrbitDeltaCrossTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDotOrbitDeltaRadial(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_get__deltaOrbitAlongTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__deltaOrbitCrossTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__deltaOrbitRadial(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaAlongTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaCrossTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaRadial(t_OrbitCorrection *self, void *data);
            static PyGetSetDef t_OrbitCorrection__fields_[] = {
              DECLARE_GET_FIELD(t_OrbitCorrection, deltaOrbitAlongTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, deltaOrbitCrossTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, deltaOrbitRadial),
              DECLARE_GET_FIELD(t_OrbitCorrection, dotOrbitDeltaAlongTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, dotOrbitDeltaCrossTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, dotOrbitDeltaRadial),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OrbitCorrection__methods_[] = {
              DECLARE_METHOD(t_OrbitCorrection, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OrbitCorrection, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OrbitCorrection, getDeltaOrbitAlongTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDeltaOrbitCrossTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDeltaOrbitRadial, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDotOrbitDeltaAlongTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDotOrbitDeltaCrossTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDotOrbitDeltaRadial, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OrbitCorrection)[] = {
              { Py_tp_methods, t_OrbitCorrection__methods_ },
              { Py_tp_init, (void *) t_OrbitCorrection_init_ },
              { Py_tp_getset, t_OrbitCorrection__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OrbitCorrection)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(OrbitCorrection, t_OrbitCorrection, OrbitCorrection);

            void t_OrbitCorrection::install(PyObject *module)
            {
              installType(&PY_TYPE(OrbitCorrection), &PY_TYPE_DEF(OrbitCorrection), module, "OrbitCorrection", 0);
            }

            void t_OrbitCorrection::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCorrection), "class_", make_descriptor(OrbitCorrection::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCorrection), "wrapfn_", make_descriptor(t_OrbitCorrection::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCorrection), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OrbitCorrection_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OrbitCorrection::initializeClass, 1)))
                return NULL;
              return t_OrbitCorrection::wrap_Object(OrbitCorrection(((t_OrbitCorrection *) arg)->object.this$));
            }
            static PyObject *t_OrbitCorrection_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OrbitCorrection::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_OrbitCorrection_init_(t_OrbitCorrection *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              OrbitCorrection object((jobject) NULL);

              if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = OrbitCorrection(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_OrbitCorrection_getDeltaOrbitAlongTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaOrbitAlongTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDeltaOrbitCrossTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaOrbitCrossTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDeltaOrbitRadial(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaOrbitRadial());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDotOrbitDeltaAlongTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDotOrbitDeltaAlongTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDotOrbitDeltaCrossTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDotOrbitDeltaCrossTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDotOrbitDeltaRadial(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDotOrbitDeltaRadial());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_get__deltaOrbitAlongTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaOrbitAlongTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__deltaOrbitCrossTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaOrbitCrossTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__deltaOrbitRadial(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaOrbitRadial());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaAlongTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDotOrbitDeltaAlongTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaCrossTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDotOrbitDeltaCrossTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaRadial(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDotOrbitDeltaRadial());
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
#include "org/orekit/estimation/sequential/PythonKalmanObserver.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonKalmanObserver::class$ = NULL;
        jmethodID *PythonKalmanObserver::mids$ = NULL;
        bool PythonKalmanObserver::live$ = false;

        jclass PythonKalmanObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonKalmanObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_evaluationPerformed_a9c60094e0bfed76] = env->getMethodID(cls, "evaluationPerformed", "(Lorg/orekit/estimation/sequential/KalmanEstimation;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonKalmanObserver::PythonKalmanObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonKalmanObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonKalmanObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonKalmanObserver::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace sequential {
        static PyObject *t_PythonKalmanObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonKalmanObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonKalmanObserver_init_(t_PythonKalmanObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonKalmanObserver_finalize(t_PythonKalmanObserver *self);
        static PyObject *t_PythonKalmanObserver_pythonExtension(t_PythonKalmanObserver *self, PyObject *args);
        static void JNICALL t_PythonKalmanObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonKalmanObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonKalmanObserver_get__self(t_PythonKalmanObserver *self, void *data);
        static PyGetSetDef t_PythonKalmanObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonKalmanObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonKalmanObserver__methods_[] = {
          DECLARE_METHOD(t_PythonKalmanObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonKalmanObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonKalmanObserver)[] = {
          { Py_tp_methods, t_PythonKalmanObserver__methods_ },
          { Py_tp_init, (void *) t_PythonKalmanObserver_init_ },
          { Py_tp_getset, t_PythonKalmanObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonKalmanObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonKalmanObserver, t_PythonKalmanObserver, PythonKalmanObserver);

        void t_PythonKalmanObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonKalmanObserver), &PY_TYPE_DEF(PythonKalmanObserver), module, "PythonKalmanObserver", 1);
        }

        void t_PythonKalmanObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanObserver), "class_", make_descriptor(PythonKalmanObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanObserver), "wrapfn_", make_descriptor(t_PythonKalmanObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonKalmanObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "evaluationPerformed", "(Lorg/orekit/estimation/sequential/KalmanEstimation;)V", (void *) t_PythonKalmanObserver_evaluationPerformed0 },
            { "pythonDecRef", "()V", (void *) t_PythonKalmanObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonKalmanObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonKalmanObserver::initializeClass, 1)))
            return NULL;
          return t_PythonKalmanObserver::wrap_Object(PythonKalmanObserver(((t_PythonKalmanObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonKalmanObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonKalmanObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonKalmanObserver_init_(t_PythonKalmanObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonKalmanObserver object((jobject) NULL);

          INT_CALL(object = PythonKalmanObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonKalmanObserver_finalize(t_PythonKalmanObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonKalmanObserver_pythonExtension(t_PythonKalmanObserver *self, PyObject *args)
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

        static void JNICALL t_PythonKalmanObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanObserver::mids$[PythonKalmanObserver::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::sequential::t_KalmanEstimation::wrap_Object(::org::orekit::estimation::sequential::KalmanEstimation(a0));
          PyObject *result = PyObject_CallMethod(obj, "evaluationPerformed", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonKalmanObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanObserver::mids$[PythonKalmanObserver::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonKalmanObserver::mids$[PythonKalmanObserver::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonKalmanObserver_get__self(t_PythonKalmanObserver *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *AbstractGaussianContribution::class$ = NULL;
            jmethodID *AbstractGaussianContribution::mids$ = NULL;
            bool AbstractGaussianContribution::live$ = false;

            jclass AbstractGaussianContribution::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getMeanElementRate_3b4b4fe187ad73ff] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_5265bce9e9da3506] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
                mids$[mid_initializeShortPeriodTerms_74f227e9e3e51225] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_46b1d1d9daf3396d] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_8df221610d0cb785] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_6839803ab3ef216d] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_getParametersDriversWithoutMu_a6156df500549a58] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");
                mids$[mid_getMeanElementRate_cb33129d37cbb389] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution$GaussQuadrature;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_df7b7b29e2f03d3a] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution$GaussQuadrature;DDLorg/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext;[D)[D");
                mids$[mid_getLLimits_4ece4b82b4394674] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLLimits_f53f254b7878e0dd] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > AbstractGaussianContribution::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3b4b4fe187ad73ff], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > AbstractGaussianContribution::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_5265bce9e9da3506], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List AbstractGaussianContribution::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
            }

            void AbstractGaussianContribution::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
            }

            void AbstractGaussianContribution::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
            }

            ::java::util::List AbstractGaussianContribution::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_74f227e9e3e51225], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List AbstractGaussianContribution::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_46b1d1d9daf3396d], a0.this$, a1.this$, a2.this$));
            }

            void AbstractGaussianContribution::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8109c1a27d4471d3], a0.this$);
            }

            void AbstractGaussianContribution::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_8df221610d0cb785], a0.this$, a1.this$);
            }

            void AbstractGaussianContribution::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_6839803ab3ef216d], a0.this$, a1.this$);
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
            static PyObject *t_AbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContribution_getMeanElementRate(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_getParametersDrivers(t_AbstractGaussianContribution *self);
            static PyObject *t_AbstractGaussianContribution_init(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_initializeShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_registerAttitudeProvider(t_AbstractGaussianContribution *self, PyObject *arg);
            static PyObject *t_AbstractGaussianContribution_updateShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_get__parametersDrivers(t_AbstractGaussianContribution *self, void *data);
            static PyGetSetDef t_AbstractGaussianContribution__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractGaussianContribution, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractGaussianContribution__methods_[] = {
              DECLARE_METHOD(t_AbstractGaussianContribution, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContribution, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContribution, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, init, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_AbstractGaussianContribution, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractGaussianContribution)[] = {
              { Py_tp_methods, t_AbstractGaussianContribution__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractGaussianContribution__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractGaussianContribution)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractGaussianContribution, t_AbstractGaussianContribution, AbstractGaussianContribution);

            void t_AbstractGaussianContribution::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractGaussianContribution), &PY_TYPE_DEF(AbstractGaussianContribution), module, "AbstractGaussianContribution", 0);
            }

            void t_AbstractGaussianContribution::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContribution), "class_", make_descriptor(AbstractGaussianContribution::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContribution), "wrapfn_", make_descriptor(t_AbstractGaussianContribution::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContribution), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractGaussianContribution::initializeClass, 1)))
                return NULL;
              return t_AbstractGaussianContribution::wrap_Object(AbstractGaussianContribution(((t_AbstractGaussianContribution *) arg)->object.this$));
            }
            static PyObject *t_AbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractGaussianContribution::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractGaussianContribution_getMeanElementRate(t_AbstractGaussianContribution *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_AbstractGaussianContribution_getParametersDrivers(t_AbstractGaussianContribution *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_AbstractGaussianContribution_init(t_AbstractGaussianContribution *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
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
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.init(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "init", args);
              return NULL;
            }

            static PyObject *t_AbstractGaussianContribution_initializeShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_AbstractGaussianContribution_registerAttitudeProvider(t_AbstractGaussianContribution *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_AbstractGaussianContribution_updateShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_AbstractGaussianContribution_get__parametersDrivers(t_AbstractGaussianContribution *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *SequentialGaussNewtonOptimizer::class$ = NULL;
            jmethodID *SequentialGaussNewtonOptimizer::mids$ = NULL;
            bool SequentialGaussNewtonOptimizer::live$ = false;

            jclass SequentialGaussNewtonOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_afcaaa06553f1136] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;ZLorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V");
                mids$[mid_getDecomposer_73fdbc83e1233feb] = env->getMethodID(cls, "getDecomposer", "()Lorg/hipparchus/linear/MatrixDecomposer;");
                mids$[mid_getOldEvaluation_056833bba10dc523] = env->getMethodID(cls, "getOldEvaluation", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;");
                mids$[mid_isFormNormalEquations_e470b6d9e0d979db] = env->getMethodID(cls, "isFormNormalEquations", "()Z");
                mids$[mid_optimize_15b17ff9a423a2d3] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
                mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_withAPrioriData_18f9d4c10ac99b39] = env->getMethodID(cls, "withAPrioriData", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withAPrioriData_979af0a4487c2667] = env->getMethodID(cls, "withAPrioriData", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;DD)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withDecomposer_5b6bcfc129308676] = env->getMethodID(cls, "withDecomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withEvaluation_8397c356ee050ebe] = env->getMethodID(cls, "withEvaluation", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withFormNormalEquations_e4a27245360af36e] = env->getMethodID(cls, "withFormNormalEquations", "(Z)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SequentialGaussNewtonOptimizer::SequentialGaussNewtonOptimizer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            SequentialGaussNewtonOptimizer::SequentialGaussNewtonOptimizer(const ::org::hipparchus::linear::MatrixDecomposer & a0, jboolean a1, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_afcaaa06553f1136, a0.this$, a1, a2.this$)) {}

            ::org::hipparchus::linear::MatrixDecomposer SequentialGaussNewtonOptimizer::getDecomposer() const
            {
              return ::org::hipparchus::linear::MatrixDecomposer(env->callObjectMethod(this$, mids$[mid_getDecomposer_73fdbc83e1233feb]));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation SequentialGaussNewtonOptimizer::getOldEvaluation() const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(env->callObjectMethod(this$, mids$[mid_getOldEvaluation_056833bba10dc523]));
            }

            jboolean SequentialGaussNewtonOptimizer::isFormNormalEquations() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isFormNormalEquations_e470b6d9e0d979db]);
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum SequentialGaussNewtonOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_15b17ff9a423a2d3], a0.this$));
            }

            ::java::lang::String SequentialGaussNewtonOptimizer::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withAPrioriData(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withAPrioriData_18f9d4c10ac99b39], a0.this$, a1.this$));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withAPrioriData(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1, jdouble a2, jdouble a3) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withAPrioriData_979af0a4487c2667], a0.this$, a1.this$, a2, a3));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withDecomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withDecomposer_5b6bcfc129308676], a0.this$));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withEvaluation(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a0) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withEvaluation_8397c356ee050ebe], a0.this$));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withFormNormalEquations(jboolean a0) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withFormNormalEquations_e4a27245360af36e], a0));
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_SequentialGaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SequentialGaussNewtonOptimizer_init_(t_SequentialGaussNewtonOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SequentialGaussNewtonOptimizer_getDecomposer(t_SequentialGaussNewtonOptimizer *self);
            static PyObject *t_SequentialGaussNewtonOptimizer_getOldEvaluation(t_SequentialGaussNewtonOptimizer *self);
            static PyObject *t_SequentialGaussNewtonOptimizer_isFormNormalEquations(t_SequentialGaussNewtonOptimizer *self);
            static PyObject *t_SequentialGaussNewtonOptimizer_optimize(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_toString(t_SequentialGaussNewtonOptimizer *self, PyObject *args);
            static PyObject *t_SequentialGaussNewtonOptimizer_withAPrioriData(t_SequentialGaussNewtonOptimizer *self, PyObject *args);
            static PyObject *t_SequentialGaussNewtonOptimizer_withDecomposer(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_withEvaluation(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_withFormNormalEquations(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_get__decomposer(t_SequentialGaussNewtonOptimizer *self, void *data);
            static PyObject *t_SequentialGaussNewtonOptimizer_get__formNormalEquations(t_SequentialGaussNewtonOptimizer *self, void *data);
            static PyObject *t_SequentialGaussNewtonOptimizer_get__oldEvaluation(t_SequentialGaussNewtonOptimizer *self, void *data);
            static PyGetSetDef t_SequentialGaussNewtonOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_SequentialGaussNewtonOptimizer, decomposer),
              DECLARE_GET_FIELD(t_SequentialGaussNewtonOptimizer, formNormalEquations),
              DECLARE_GET_FIELD(t_SequentialGaussNewtonOptimizer, oldEvaluation),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SequentialGaussNewtonOptimizer__methods_[] = {
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, getDecomposer, METH_NOARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, getOldEvaluation, METH_NOARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, isFormNormalEquations, METH_NOARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, optimize, METH_O),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, toString, METH_VARARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withAPrioriData, METH_VARARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withDecomposer, METH_O),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withEvaluation, METH_O),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withFormNormalEquations, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SequentialGaussNewtonOptimizer)[] = {
              { Py_tp_methods, t_SequentialGaussNewtonOptimizer__methods_ },
              { Py_tp_init, (void *) t_SequentialGaussNewtonOptimizer_init_ },
              { Py_tp_getset, t_SequentialGaussNewtonOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SequentialGaussNewtonOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SequentialGaussNewtonOptimizer, t_SequentialGaussNewtonOptimizer, SequentialGaussNewtonOptimizer);

            void t_SequentialGaussNewtonOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(SequentialGaussNewtonOptimizer), &PY_TYPE_DEF(SequentialGaussNewtonOptimizer), module, "SequentialGaussNewtonOptimizer", 0);
            }

            void t_SequentialGaussNewtonOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialGaussNewtonOptimizer), "class_", make_descriptor(SequentialGaussNewtonOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialGaussNewtonOptimizer), "wrapfn_", make_descriptor(t_SequentialGaussNewtonOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialGaussNewtonOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SequentialGaussNewtonOptimizer::initializeClass, 1)))
                return NULL;
              return t_SequentialGaussNewtonOptimizer::wrap_Object(SequentialGaussNewtonOptimizer(((t_SequentialGaussNewtonOptimizer *) arg)->object.this$));
            }
            static PyObject *t_SequentialGaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SequentialGaussNewtonOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SequentialGaussNewtonOptimizer_init_(t_SequentialGaussNewtonOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  SequentialGaussNewtonOptimizer object((jobject) NULL);

                  INT_CALL(object = SequentialGaussNewtonOptimizer());
                  self->object = object;
                  break;
                }
               case 3:
                {
                  ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
                  jboolean a1;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a2((jobject) NULL);
                  SequentialGaussNewtonOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "kZk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = SequentialGaussNewtonOptimizer(a0, a1, a2));
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

            static PyObject *t_SequentialGaussNewtonOptimizer_getDecomposer(t_SequentialGaussNewtonOptimizer *self)
            {
              ::org::hipparchus::linear::MatrixDecomposer result((jobject) NULL);
              OBJ_CALL(result = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(result);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_getOldEvaluation(t_SequentialGaussNewtonOptimizer *self)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation result((jobject) NULL);
              OBJ_CALL(result = self->object.getOldEvaluation());
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(result);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_isFormNormalEquations(t_SequentialGaussNewtonOptimizer *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_optimize(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "optimize", arg);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_toString(t_SequentialGaussNewtonOptimizer *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(SequentialGaussNewtonOptimizer), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withAPrioriData(t_SequentialGaussNewtonOptimizer *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
                  SequentialGaussNewtonOptimizer result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.withAPrioriData(a0, a1));
                    return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
                  }
                }
                break;
               case 4:
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
                  jdouble a2;
                  jdouble a3;
                  SequentialGaussNewtonOptimizer result((jobject) NULL);

                  if (!parseArgs(args, "kkDD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = self->object.withAPrioriData(a0, a1, a2, a3));
                    return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "withAPrioriData", args);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withDecomposer(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
              SequentialGaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withDecomposer(a0));
                return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withDecomposer", arg);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withEvaluation(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a0((jobject) NULL);
              SequentialGaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withEvaluation(a0));
                return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withEvaluation", arg);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withFormNormalEquations(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
            {
              jboolean a0;
              SequentialGaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(result = self->object.withFormNormalEquations(a0));
                return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withFormNormalEquations", arg);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_get__decomposer(t_SequentialGaussNewtonOptimizer *self, void *data)
            {
              ::org::hipparchus::linear::MatrixDecomposer value((jobject) NULL);
              OBJ_CALL(value = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(value);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_get__formNormalEquations(t_SequentialGaussNewtonOptimizer *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_get__oldEvaluation(t_SequentialGaussNewtonOptimizer *self, void *data)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation value((jobject) NULL);
              OBJ_CALL(value = self->object.getOldEvaluation());
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalKalmanEstimator::class$ = NULL;
        jmethodID *SemiAnalyticalKalmanEstimator::mids$ = NULL;
        bool SemiAnalyticalKalmanEstimator::live$ = false;

        jclass SemiAnalyticalKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10854e5da48e71a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)V");
            mids$[mid_processMeasurements_aed7f600bccde355] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_fe6775fb802fa129] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_69a0a486b7aaf0c0] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalKalmanEstimator::SemiAnalyticalKalmanEstimator(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder & a1, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a2, const ::org::orekit::utils::ParameterDriversList & a3, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a4) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(env->newObject(initializeClass, &mids$, mid_init$_10854e5da48e71a1, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalKalmanEstimator::processMeasurements(const ::java::util::List & a0) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_aed7f600bccde355], a0.this$));
        }

        void SemiAnalyticalKalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_fe6775fb802fa129], a0.this$);
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
        static PyObject *t_SemiAnalyticalKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalKalmanEstimator_init_(t_SemiAnalyticalKalmanEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalKalmanEstimator_processMeasurements(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimator_setObserver(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg);
        static int t_SemiAnalyticalKalmanEstimator_set__observer(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_SemiAnalyticalKalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_SemiAnalyticalKalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalKalmanEstimator)[] = {
          { Py_tp_methods, t_SemiAnalyticalKalmanEstimator__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalKalmanEstimator_init_ },
          { Py_tp_getset, t_SemiAnalyticalKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalKalmanEstimator, t_SemiAnalyticalKalmanEstimator, SemiAnalyticalKalmanEstimator);

        void t_SemiAnalyticalKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalKalmanEstimator), &PY_TYPE_DEF(SemiAnalyticalKalmanEstimator), module, "SemiAnalyticalKalmanEstimator", 0);
        }

        void t_SemiAnalyticalKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimator), "class_", make_descriptor(SemiAnalyticalKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimator), "wrapfn_", make_descriptor(t_SemiAnalyticalKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalKalmanEstimator::wrap_Object(SemiAnalyticalKalmanEstimator(((t_SemiAnalyticalKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalKalmanEstimator_init_(t_SemiAnalyticalKalmanEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          ::org::orekit::propagation::conversion::DSSTPropagatorBuilder a1((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a2((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a3((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a4((jobject) NULL);
          SemiAnalyticalKalmanEstimator object((jobject) NULL);

          if (!parseArgs(args, "kkkkk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::orekit::propagation::conversion::DSSTPropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = SemiAnalyticalKalmanEstimator(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimator_processMeasurements(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimator_setObserver(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static int t_SemiAnalyticalKalmanEstimator_set__observer(t_SemiAnalyticalKalmanEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
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
#include "java/util/SortedSet.h"
#include "java/util/ListIterator.h"
#include "java/util/Set.h"
#include "java/util/Random.h"
#include "java/util/ArrayList.h"
#include "java/util/Map.h"
#include "java/util/Enumeration.h"
#include "java/util/Deque.h"
#include "java/util/Queue.h"
#include "java/util/SortedMap.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/util/NavigableMap.h"
#include "java/lang/Boolean.h"
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
        mids$[mid_addAll_32a558846a04ff84] = env->getStaticMethodID(cls, "addAll", "(Ljava/util/Collection;[Ljava/lang/Object;)Z");
        mids$[mid_asLifoQueue_df267a87ac5d76f8] = env->getStaticMethodID(cls, "asLifoQueue", "(Ljava/util/Deque;)Ljava/util/Queue;");
        mids$[mid_binarySearch_37d77edc27cecbe8] = env->getStaticMethodID(cls, "binarySearch", "(Ljava/util/List;Ljava/lang/Object;)I");
        mids$[mid_binarySearch_0941c000ece4fde2] = env->getStaticMethodID(cls, "binarySearch", "(Ljava/util/List;Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_checkedCollection_625d5ef9133cb259] = env->getStaticMethodID(cls, "checkedCollection", "(Ljava/util/Collection;Ljava/lang/Class;)Ljava/util/Collection;");
        mids$[mid_checkedList_1595bd32b51f1b46] = env->getStaticMethodID(cls, "checkedList", "(Ljava/util/List;Ljava/lang/Class;)Ljava/util/List;");
        mids$[mid_checkedMap_1c439d743e7da728] = env->getStaticMethodID(cls, "checkedMap", "(Ljava/util/Map;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/Map;");
        mids$[mid_checkedNavigableMap_8ca9b3737fb57066] = env->getStaticMethodID(cls, "checkedNavigableMap", "(Ljava/util/NavigableMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/NavigableMap;");
        mids$[mid_checkedNavigableSet_9be967eec45f6ac3] = env->getStaticMethodID(cls, "checkedNavigableSet", "(Ljava/util/NavigableSet;Ljava/lang/Class;)Ljava/util/NavigableSet;");
        mids$[mid_checkedQueue_71f4d6974fba2f60] = env->getStaticMethodID(cls, "checkedQueue", "(Ljava/util/Queue;Ljava/lang/Class;)Ljava/util/Queue;");
        mids$[mid_checkedSet_eca6a28c4c66c1a3] = env->getStaticMethodID(cls, "checkedSet", "(Ljava/util/Set;Ljava/lang/Class;)Ljava/util/Set;");
        mids$[mid_checkedSortedMap_e0f8487b57bd4f14] = env->getStaticMethodID(cls, "checkedSortedMap", "(Ljava/util/SortedMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/SortedMap;");
        mids$[mid_checkedSortedSet_8a4eec20b2cee4e1] = env->getStaticMethodID(cls, "checkedSortedSet", "(Ljava/util/SortedSet;Ljava/lang/Class;)Ljava/util/SortedSet;");
        mids$[mid_copy_694ad53d6db8f702] = env->getStaticMethodID(cls, "copy", "(Ljava/util/List;Ljava/util/List;)V");
        mids$[mid_disjoint_967fecdee3fc80eb] = env->getStaticMethodID(cls, "disjoint", "(Ljava/util/Collection;Ljava/util/Collection;)Z");
        mids$[mid_emptyEnumeration_44964b2b3d187632] = env->getStaticMethodID(cls, "emptyEnumeration", "()Ljava/util/Enumeration;");
        mids$[mid_emptyIterator_035c6167e6569aac] = env->getStaticMethodID(cls, "emptyIterator", "()Ljava/util/Iterator;");
        mids$[mid_emptyList_a6156df500549a58] = env->getStaticMethodID(cls, "emptyList", "()Ljava/util/List;");
        mids$[mid_emptyListIterator_4e1a823c948bf3a6] = env->getStaticMethodID(cls, "emptyListIterator", "()Ljava/util/ListIterator;");
        mids$[mid_emptyMap_d6753b7055940a54] = env->getStaticMethodID(cls, "emptyMap", "()Ljava/util/Map;");
        mids$[mid_emptyNavigableMap_08b23a9584a26070] = env->getStaticMethodID(cls, "emptyNavigableMap", "()Ljava/util/NavigableMap;");
        mids$[mid_emptyNavigableSet_edb7b61b9a16f086] = env->getStaticMethodID(cls, "emptyNavigableSet", "()Ljava/util/NavigableSet;");
        mids$[mid_emptySet_e9e1a6780fe94297] = env->getStaticMethodID(cls, "emptySet", "()Ljava/util/Set;");
        mids$[mid_emptySortedMap_fe1bfbfb7989e0a9] = env->getStaticMethodID(cls, "emptySortedMap", "()Ljava/util/SortedMap;");
        mids$[mid_emptySortedSet_d01a04ddab6c7194] = env->getStaticMethodID(cls, "emptySortedSet", "()Ljava/util/SortedSet;");
        mids$[mid_enumeration_54438bae750053af] = env->getStaticMethodID(cls, "enumeration", "(Ljava/util/Collection;)Ljava/util/Enumeration;");
        mids$[mid_fill_7844b00b76786b50] = env->getStaticMethodID(cls, "fill", "(Ljava/util/List;Ljava/lang/Object;)V");
        mids$[mid_frequency_9af878168154fa21] = env->getStaticMethodID(cls, "frequency", "(Ljava/util/Collection;Ljava/lang/Object;)I");
        mids$[mid_indexOfSubList_5773ab16ebab45df] = env->getStaticMethodID(cls, "indexOfSubList", "(Ljava/util/List;Ljava/util/List;)I");
        mids$[mid_lastIndexOfSubList_5773ab16ebab45df] = env->getStaticMethodID(cls, "lastIndexOfSubList", "(Ljava/util/List;Ljava/util/List;)I");
        mids$[mid_list_eb046a6d94a906c9] = env->getStaticMethodID(cls, "list", "(Ljava/util/Enumeration;)Ljava/util/ArrayList;");
        mids$[mid_max_9bf949dfb1f93000] = env->getStaticMethodID(cls, "max", "(Ljava/util/Collection;)Ljava/lang/Object;");
        mids$[mid_max_ea1dff2fe6bd78ac] = env->getStaticMethodID(cls, "max", "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;");
        mids$[mid_min_9bf949dfb1f93000] = env->getStaticMethodID(cls, "min", "(Ljava/util/Collection;)Ljava/lang/Object;");
        mids$[mid_min_ea1dff2fe6bd78ac] = env->getStaticMethodID(cls, "min", "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;");
        mids$[mid_nCopies_585b9ca2223b17d3] = env->getStaticMethodID(cls, "nCopies", "(ILjava/lang/Object;)Ljava/util/List;");
        mids$[mid_newSetFromMap_21d597c6360c7172] = env->getStaticMethodID(cls, "newSetFromMap", "(Ljava/util/Map;)Ljava/util/Set;");
        mids$[mid_replaceAll_03305538a450a9ac] = env->getStaticMethodID(cls, "replaceAll", "(Ljava/util/List;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_reverse_65de9727799c5641] = env->getStaticMethodID(cls, "reverse", "(Ljava/util/List;)V");
        mids$[mid_reverseOrder_838794f9a43cf98e] = env->getStaticMethodID(cls, "reverseOrder", "()Ljava/util/Comparator;");
        mids$[mid_reverseOrder_3d37843ecb21deb5] = env->getStaticMethodID(cls, "reverseOrder", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_rotate_d1b8ec2000165cbf] = env->getStaticMethodID(cls, "rotate", "(Ljava/util/List;I)V");
        mids$[mid_shuffle_65de9727799c5641] = env->getStaticMethodID(cls, "shuffle", "(Ljava/util/List;)V");
        mids$[mid_shuffle_fdc2a20e0f422184] = env->getStaticMethodID(cls, "shuffle", "(Ljava/util/List;Ljava/util/Random;)V");
        mids$[mid_singleton_161cf4838fdab35b] = env->getStaticMethodID(cls, "singleton", "(Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_singletonList_969dd6a242ef47c1] = env->getStaticMethodID(cls, "singletonList", "(Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_singletonMap_b6ac13fbe4a379e1] = env->getStaticMethodID(cls, "singletonMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_sort_65de9727799c5641] = env->getStaticMethodID(cls, "sort", "(Ljava/util/List;)V");
        mids$[mid_sort_65e7f32ea466b204] = env->getStaticMethodID(cls, "sort", "(Ljava/util/List;Ljava/util/Comparator;)V");
        mids$[mid_swap_22b5006692f20ec8] = env->getStaticMethodID(cls, "swap", "(Ljava/util/List;II)V");
        mids$[mid_synchronizedCollection_5c0bbab57d449f37] = env->getStaticMethodID(cls, "synchronizedCollection", "(Ljava/util/Collection;)Ljava/util/Collection;");
        mids$[mid_synchronizedList_fa7c1e622bc91b53] = env->getStaticMethodID(cls, "synchronizedList", "(Ljava/util/List;)Ljava/util/List;");
        mids$[mid_synchronizedMap_08202a898cbb39d5] = env->getStaticMethodID(cls, "synchronizedMap", "(Ljava/util/Map;)Ljava/util/Map;");
        mids$[mid_synchronizedNavigableMap_fbc9db42f2500457] = env->getStaticMethodID(cls, "synchronizedNavigableMap", "(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;");
        mids$[mid_synchronizedNavigableSet_ba7ac142aa1efcf6] = env->getStaticMethodID(cls, "synchronizedNavigableSet", "(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;");
        mids$[mid_synchronizedSet_e7f2554240752ebc] = env->getStaticMethodID(cls, "synchronizedSet", "(Ljava/util/Set;)Ljava/util/Set;");
        mids$[mid_synchronizedSortedMap_4b7196d39a0c3a88] = env->getStaticMethodID(cls, "synchronizedSortedMap", "(Ljava/util/SortedMap;)Ljava/util/SortedMap;");
        mids$[mid_synchronizedSortedSet_3be2e650c5404fbb] = env->getStaticMethodID(cls, "synchronizedSortedSet", "(Ljava/util/SortedSet;)Ljava/util/SortedSet;");
        mids$[mid_unmodifiableCollection_5c0bbab57d449f37] = env->getStaticMethodID(cls, "unmodifiableCollection", "(Ljava/util/Collection;)Ljava/util/Collection;");
        mids$[mid_unmodifiableList_fa7c1e622bc91b53] = env->getStaticMethodID(cls, "unmodifiableList", "(Ljava/util/List;)Ljava/util/List;");
        mids$[mid_unmodifiableMap_08202a898cbb39d5] = env->getStaticMethodID(cls, "unmodifiableMap", "(Ljava/util/Map;)Ljava/util/Map;");
        mids$[mid_unmodifiableNavigableMap_fbc9db42f2500457] = env->getStaticMethodID(cls, "unmodifiableNavigableMap", "(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;");
        mids$[mid_unmodifiableNavigableSet_ba7ac142aa1efcf6] = env->getStaticMethodID(cls, "unmodifiableNavigableSet", "(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;");
        mids$[mid_unmodifiableSet_e7f2554240752ebc] = env->getStaticMethodID(cls, "unmodifiableSet", "(Ljava/util/Set;)Ljava/util/Set;");
        mids$[mid_unmodifiableSortedMap_4b7196d39a0c3a88] = env->getStaticMethodID(cls, "unmodifiableSortedMap", "(Ljava/util/SortedMap;)Ljava/util/SortedMap;");
        mids$[mid_unmodifiableSortedSet_3be2e650c5404fbb] = env->getStaticMethodID(cls, "unmodifiableSortedSet", "(Ljava/util/SortedSet;)Ljava/util/SortedSet;");

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
      return env->callStaticBooleanMethod(cls, mids$[mid_addAll_32a558846a04ff84], a0.this$, a1.this$);
    }

    ::java::util::Queue Collections::asLifoQueue(const ::java::util::Deque & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Queue(env->callStaticObjectMethod(cls, mids$[mid_asLifoQueue_df267a87ac5d76f8], a0.this$));
    }

    jint Collections::binarySearch(const ::java::util::List & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_37d77edc27cecbe8], a0.this$, a1.this$);
    }

    jint Collections::binarySearch(const ::java::util::List & a0, const ::java::lang::Object & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_0941c000ece4fde2], a0.this$, a1.this$, a2.this$);
    }

    ::java::util::Collection Collections::checkedCollection(const ::java::util::Collection & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_checkedCollection_625d5ef9133cb259], a0.this$, a1.this$));
    }

    ::java::util::List Collections::checkedList(const ::java::util::List & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_checkedList_1595bd32b51f1b46], a0.this$, a1.this$));
    }

    ::java::util::Map Collections::checkedMap(const ::java::util::Map & a0, const ::java::lang::Class & a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_checkedMap_1c439d743e7da728], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::NavigableMap Collections::checkedNavigableMap(const ::java::util::NavigableMap & a0, const ::java::lang::Class & a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_checkedNavigableMap_8ca9b3737fb57066], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::NavigableSet Collections::checkedNavigableSet(const ::java::util::NavigableSet & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_checkedNavigableSet_9be967eec45f6ac3], a0.this$, a1.this$));
    }

    ::java::util::Queue Collections::checkedQueue(const ::java::util::Queue & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Queue(env->callStaticObjectMethod(cls, mids$[mid_checkedQueue_71f4d6974fba2f60], a0.this$, a1.this$));
    }

    ::java::util::Set Collections::checkedSet(const ::java::util::Set & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_checkedSet_eca6a28c4c66c1a3], a0.this$, a1.this$));
    }

    ::java::util::SortedMap Collections::checkedSortedMap(const ::java::util::SortedMap & a0, const ::java::lang::Class & a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_checkedSortedMap_e0f8487b57bd4f14], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::SortedSet Collections::checkedSortedSet(const ::java::util::SortedSet & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_checkedSortedSet_8a4eec20b2cee4e1], a0.this$, a1.this$));
    }

    void Collections::copy(const ::java::util::List & a0, const ::java::util::List & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_copy_694ad53d6db8f702], a0.this$, a1.this$);
    }

    jboolean Collections::disjoint(const ::java::util::Collection & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_disjoint_967fecdee3fc80eb], a0.this$, a1.this$);
    }

    ::java::util::Enumeration Collections::emptyEnumeration()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Enumeration(env->callStaticObjectMethod(cls, mids$[mid_emptyEnumeration_44964b2b3d187632]));
    }

    ::java::util::Iterator Collections::emptyIterator()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Iterator(env->callStaticObjectMethod(cls, mids$[mid_emptyIterator_035c6167e6569aac]));
    }

    ::java::util::List Collections::emptyList()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_emptyList_a6156df500549a58]));
    }

    ::java::util::ListIterator Collections::emptyListIterator()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::ListIterator(env->callStaticObjectMethod(cls, mids$[mid_emptyListIterator_4e1a823c948bf3a6]));
    }

    ::java::util::Map Collections::emptyMap()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_emptyMap_d6753b7055940a54]));
    }

    ::java::util::NavigableMap Collections::emptyNavigableMap()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_emptyNavigableMap_08b23a9584a26070]));
    }

    ::java::util::NavigableSet Collections::emptyNavigableSet()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_emptyNavigableSet_edb7b61b9a16f086]));
    }

    ::java::util::Set Collections::emptySet()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_emptySet_e9e1a6780fe94297]));
    }

    ::java::util::SortedMap Collections::emptySortedMap()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_emptySortedMap_fe1bfbfb7989e0a9]));
    }

    ::java::util::SortedSet Collections::emptySortedSet()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_emptySortedSet_d01a04ddab6c7194]));
    }

    ::java::util::Enumeration Collections::enumeration(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Enumeration(env->callStaticObjectMethod(cls, mids$[mid_enumeration_54438bae750053af], a0.this$));
    }

    void Collections::fill(const ::java::util::List & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_7844b00b76786b50], a0.this$, a1.this$);
    }

    jint Collections::frequency(const ::java::util::Collection & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_frequency_9af878168154fa21], a0.this$, a1.this$);
    }

    jint Collections::indexOfSubList(const ::java::util::List & a0, const ::java::util::List & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_indexOfSubList_5773ab16ebab45df], a0.this$, a1.this$);
    }

    jint Collections::lastIndexOfSubList(const ::java::util::List & a0, const ::java::util::List & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_lastIndexOfSubList_5773ab16ebab45df], a0.this$, a1.this$);
    }

    ::java::util::ArrayList Collections::list(const ::java::util::Enumeration & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::ArrayList(env->callStaticObjectMethod(cls, mids$[mid_list_eb046a6d94a906c9], a0.this$));
    }

    ::java::lang::Object Collections::max$(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_max_9bf949dfb1f93000], a0.this$));
    }

    ::java::lang::Object Collections::max$(const ::java::util::Collection & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_max_ea1dff2fe6bd78ac], a0.this$, a1.this$));
    }

    ::java::lang::Object Collections::min$(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_min_9bf949dfb1f93000], a0.this$));
    }

    ::java::lang::Object Collections::min$(const ::java::util::Collection & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_min_ea1dff2fe6bd78ac], a0.this$, a1.this$));
    }

    ::java::util::List Collections::nCopies(jint a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_nCopies_585b9ca2223b17d3], a0, a1.this$));
    }

    ::java::util::Set Collections::newSetFromMap(const ::java::util::Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_newSetFromMap_21d597c6360c7172], a0.this$));
    }

    jboolean Collections::replaceAll(const ::java::util::List & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_replaceAll_03305538a450a9ac], a0.this$, a1.this$, a2.this$);
    }

    void Collections::reverse(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_reverse_65de9727799c5641], a0.this$);
    }

    ::java::util::Comparator Collections::reverseOrder()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_reverseOrder_838794f9a43cf98e]));
    }

    ::java::util::Comparator Collections::reverseOrder(const ::java::util::Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_reverseOrder_3d37843ecb21deb5], a0.this$));
    }

    void Collections::rotate(const ::java::util::List & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_rotate_d1b8ec2000165cbf], a0.this$, a1);
    }

    void Collections::shuffle(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_shuffle_65de9727799c5641], a0.this$);
    }

    void Collections::shuffle(const ::java::util::List & a0, const ::java::util::Random & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_shuffle_fdc2a20e0f422184], a0.this$, a1.this$);
    }

    ::java::util::Set Collections::singleton(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_singleton_161cf4838fdab35b], a0.this$));
    }

    ::java::util::List Collections::singletonList(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_singletonList_969dd6a242ef47c1], a0.this$));
    }

    ::java::util::Map Collections::singletonMap(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_singletonMap_b6ac13fbe4a379e1], a0.this$, a1.this$));
    }

    void Collections::sort(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_65de9727799c5641], a0.this$);
    }

    void Collections::sort(const ::java::util::List & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_65e7f32ea466b204], a0.this$, a1.this$);
    }

    void Collections::swap(const ::java::util::List & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_swap_22b5006692f20ec8], a0.this$, a1, a2);
    }

    ::java::util::Collection Collections::synchronizedCollection(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_synchronizedCollection_5c0bbab57d449f37], a0.this$));
    }

    ::java::util::List Collections::synchronizedList(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_synchronizedList_fa7c1e622bc91b53], a0.this$));
    }

    ::java::util::Map Collections::synchronizedMap(const ::java::util::Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_synchronizedMap_08202a898cbb39d5], a0.this$));
    }

    ::java::util::NavigableMap Collections::synchronizedNavigableMap(const ::java::util::NavigableMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_synchronizedNavigableMap_fbc9db42f2500457], a0.this$));
    }

    ::java::util::NavigableSet Collections::synchronizedNavigableSet(const ::java::util::NavigableSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_synchronizedNavigableSet_ba7ac142aa1efcf6], a0.this$));
    }

    ::java::util::Set Collections::synchronizedSet(const ::java::util::Set & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_synchronizedSet_e7f2554240752ebc], a0.this$));
    }

    ::java::util::SortedMap Collections::synchronizedSortedMap(const ::java::util::SortedMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_synchronizedSortedMap_4b7196d39a0c3a88], a0.this$));
    }

    ::java::util::SortedSet Collections::synchronizedSortedSet(const ::java::util::SortedSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_synchronizedSortedSet_3be2e650c5404fbb], a0.this$));
    }

    ::java::util::Collection Collections::unmodifiableCollection(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableCollection_5c0bbab57d449f37], a0.this$));
    }

    ::java::util::List Collections::unmodifiableList(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableList_fa7c1e622bc91b53], a0.this$));
    }

    ::java::util::Map Collections::unmodifiableMap(const ::java::util::Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableMap_08202a898cbb39d5], a0.this$));
    }

    ::java::util::NavigableMap Collections::unmodifiableNavigableMap(const ::java::util::NavigableMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableNavigableMap_fbc9db42f2500457], a0.this$));
    }

    ::java::util::NavigableSet Collections::unmodifiableNavigableSet(const ::java::util::NavigableSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableNavigableSet_ba7ac142aa1efcf6], a0.this$));
    }

    ::java::util::Set Collections::unmodifiableSet(const ::java::util::Set & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableSet_e7f2554240752ebc], a0.this$));
    }

    ::java::util::SortedMap Collections::unmodifiableSortedMap(const ::java::util::SortedMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableSortedMap_4b7196d39a0c3a88], a0.this$));
    }

    ::java::util::SortedSet Collections::unmodifiableSortedSet(const ::java::util::SortedSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableSortedSet_3be2e650c5404fbb], a0.this$));
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
#include "org/orekit/estimation/measurements/modifiers/OneWayGNSSPhaseAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
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

          ::java::lang::Class *OneWayGNSSPhaseAmbiguityModifier::class$ = NULL;
          jmethodID *OneWayGNSSPhaseAmbiguityModifier::mids$ = NULL;
          bool OneWayGNSSPhaseAmbiguityModifier::live$ = false;

          jclass OneWayGNSSPhaseAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OneWayGNSSPhaseAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OneWayGNSSPhaseAmbiguityModifier::OneWayGNSSPhaseAmbiguityModifier(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

          ::java::util::List OneWayGNSSPhaseAmbiguityModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void OneWayGNSSPhaseAmbiguityModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void OneWayGNSSPhaseAmbiguityModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OneWayGNSSPhaseAmbiguityModifier_init_(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_getParametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modify(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modifyWithoutDerivatives(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_get__parametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self, void *data);
          static PyGetSetDef t_OneWayGNSSPhaseAmbiguityModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSPhaseAmbiguityModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSPhaseAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, modify, METH_O),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSPhaseAmbiguityModifier)[] = {
            { Py_tp_methods, t_OneWayGNSSPhaseAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_OneWayGNSSPhaseAmbiguityModifier_init_ },
            { Py_tp_getset, t_OneWayGNSSPhaseAmbiguityModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSPhaseAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSPhaseAmbiguityModifier, t_OneWayGNSSPhaseAmbiguityModifier, OneWayGNSSPhaseAmbiguityModifier);

          void t_OneWayGNSSPhaseAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), &PY_TYPE_DEF(OneWayGNSSPhaseAmbiguityModifier), module, "OneWayGNSSPhaseAmbiguityModifier", 0);
          }

          void t_OneWayGNSSPhaseAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), "class_", make_descriptor(OneWayGNSSPhaseAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), "wrapfn_", make_descriptor(t_OneWayGNSSPhaseAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSPhaseAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSPhaseAmbiguityModifier::wrap_Object(OneWayGNSSPhaseAmbiguityModifier(((t_OneWayGNSSPhaseAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSPhaseAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OneWayGNSSPhaseAmbiguityModifier_init_(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            OneWayGNSSPhaseAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OneWayGNSSPhaseAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_getParametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modify(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modifyWithoutDerivatives(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_get__parametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresBuilder::class$ = NULL;
            jmethodID *LeastSquaresBuilder::mids$ = NULL;
            bool LeastSquaresBuilder::live$ = false;

            jclass LeastSquaresBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_build_4f74f9320cfa7e2f] = env->getMethodID(cls, "build", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_checker_ef41542df40cbc41] = env->getMethodID(cls, "checker", "(Lorg/hipparchus/optim/ConvergenceChecker;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_checkerPair_ef41542df40cbc41] = env->getMethodID(cls, "checkerPair", "(Lorg/hipparchus/optim/ConvergenceChecker;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_lazyEvaluation_c6554cb8b9f28f9c] = env->getMethodID(cls, "lazyEvaluation", "(Z)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_maxEvaluations_5ebc0ba965a4288e] = env->getMethodID(cls, "maxEvaluations", "(I)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_maxIterations_5ebc0ba965a4288e] = env->getMethodID(cls, "maxIterations", "(I)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_model_577d731654eafa0c] = env->getMethodID(cls, "model", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_model_f0c43e2f0315058c] = env->getMethodID(cls, "model", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;Lorg/hipparchus/analysis/MultivariateMatrixFunction;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_parameterValidator_8aec5597e06dcbab] = env->getMethodID(cls, "parameterValidator", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_start_1987cbf46847defb] = env->getMethodID(cls, "start", "([D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_start_92e7bdc3b70caf37] = env->getMethodID(cls, "start", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_target_1987cbf46847defb] = env->getMethodID(cls, "target", "([D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_target_92e7bdc3b70caf37] = env->getMethodID(cls, "target", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_weight_4b7e79953c38013c] = env->getMethodID(cls, "weight", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LeastSquaresBuilder::LeastSquaresBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresBuilder::build() const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_4f74f9320cfa7e2f]));
            }

            LeastSquaresBuilder LeastSquaresBuilder::checker(const ::org::hipparchus::optim::ConvergenceChecker & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_checker_ef41542df40cbc41], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::checkerPair(const ::org::hipparchus::optim::ConvergenceChecker & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_checkerPair_ef41542df40cbc41], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::lazyEvaluation(jboolean a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_lazyEvaluation_c6554cb8b9f28f9c], a0));
            }

            LeastSquaresBuilder LeastSquaresBuilder::maxEvaluations(jint a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_maxEvaluations_5ebc0ba965a4288e], a0));
            }

            LeastSquaresBuilder LeastSquaresBuilder::maxIterations(jint a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_maxIterations_5ebc0ba965a4288e], a0));
            }

            LeastSquaresBuilder LeastSquaresBuilder::model(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_model_577d731654eafa0c], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::model(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const ::org::hipparchus::analysis::MultivariateMatrixFunction & a1) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_model_f0c43e2f0315058c], a0.this$, a1.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::parameterValidator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_parameterValidator_8aec5597e06dcbab], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::start(const JArray< jdouble > & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_start_1987cbf46847defb], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::start(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_start_92e7bdc3b70caf37], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::target(const JArray< jdouble > & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_target_1987cbf46847defb], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::target(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_target_92e7bdc3b70caf37], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::weight(const ::org::hipparchus::linear::RealMatrix & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_weight_4b7e79953c38013c], a0.this$));
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LeastSquaresBuilder_init_(t_LeastSquaresBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LeastSquaresBuilder_build(t_LeastSquaresBuilder *self);
            static PyObject *t_LeastSquaresBuilder_checker(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_checkerPair(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_lazyEvaluation(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_maxEvaluations(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_maxIterations(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_model(t_LeastSquaresBuilder *self, PyObject *args);
            static PyObject *t_LeastSquaresBuilder_parameterValidator(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_start(t_LeastSquaresBuilder *self, PyObject *args);
            static PyObject *t_LeastSquaresBuilder_target(t_LeastSquaresBuilder *self, PyObject *args);
            static PyObject *t_LeastSquaresBuilder_weight(t_LeastSquaresBuilder *self, PyObject *arg);

            static PyMethodDef t_LeastSquaresBuilder__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresBuilder, build, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, checker, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, checkerPair, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, lazyEvaluation, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, maxEvaluations, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, maxIterations, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, model, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, parameterValidator, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, start, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, target, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, weight, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresBuilder)[] = {
              { Py_tp_methods, t_LeastSquaresBuilder__methods_ },
              { Py_tp_init, (void *) t_LeastSquaresBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresBuilder, t_LeastSquaresBuilder, LeastSquaresBuilder);

            void t_LeastSquaresBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresBuilder), &PY_TYPE_DEF(LeastSquaresBuilder), module, "LeastSquaresBuilder", 0);
            }

            void t_LeastSquaresBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresBuilder), "class_", make_descriptor(LeastSquaresBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresBuilder), "wrapfn_", make_descriptor(t_LeastSquaresBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresBuilder::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresBuilder::wrap_Object(LeastSquaresBuilder(((t_LeastSquaresBuilder *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LeastSquaresBuilder_init_(t_LeastSquaresBuilder *self, PyObject *args, PyObject *kwds)
            {
              LeastSquaresBuilder object((jobject) NULL);

              INT_CALL(object = LeastSquaresBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_LeastSquaresBuilder_build(t_LeastSquaresBuilder *self)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);
              OBJ_CALL(result = self->object.build());
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresBuilder_checker(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
              PyTypeObject **p0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                OBJ_CALL(result = self->object.checker(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "checker", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_checkerPair(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
              PyTypeObject **p0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                OBJ_CALL(result = self->object.checkerPair(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "checkerPair", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_lazyEvaluation(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              jboolean a0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(result = self->object.lazyEvaluation(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "lazyEvaluation", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_maxEvaluations(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              jint a0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.maxEvaluations(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_maxIterations(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              jint a0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.maxIterations(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "maxIterations", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_model(t_LeastSquaresBuilder *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.model(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
                break;
               case 2:
                {
                  ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                  ::org::hipparchus::analysis::MultivariateMatrixFunction a1((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::analysis::MultivariateMatrixFunction::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.model(a0, a1));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "model", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_parameterValidator(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator a0((jobject) NULL);
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.parameterValidator(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parameterValidator", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_start(t_LeastSquaresBuilder *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    OBJ_CALL(result = self->object.start(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.start(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "start", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_target(t_LeastSquaresBuilder *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    OBJ_CALL(result = self->object.target(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.target(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "target", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_weight(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.weight(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "weight", arg);
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
#include "org/orekit/propagation/analytical/PythonFieldAbstractAnalyticalPropagator.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonFieldAbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *PythonFieldAbstractAnalyticalPropagator::mids$ = NULL;
        bool PythonFieldAbstractAnalyticalPropagator::live$ = false;

        jclass PythonFieldAbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonFieldAbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b33e815fa9eacfc8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMass_7bc0fd76ee915b72] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_edf76d94987be4ff] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_resetIntermediateState_c76342d42407aa3d] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAbstractAnalyticalPropagator::PythonFieldAbstractAnalyticalPropagator(const ::org::hipparchus::Field & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b33e815fa9eacfc8, a0.this$, a1.this$)) {}

        void PythonFieldAbstractAnalyticalPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonFieldAbstractAnalyticalPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonFieldAbstractAnalyticalPropagator::pythonExtension(jlong a0) const
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
      namespace analytical {
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_of_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args);
        static int t_PythonFieldAbstractAnalyticalPropagator_init_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_finalize(t_PythonFieldAbstractAnalyticalPropagator *self);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_pythonExtension(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getParametersDrivers1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_propagateOrbit2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_resetIntermediateState4(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__self(t_PythonFieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__parameters_(t_PythonFieldAbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_PythonFieldAbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAbstractAnalyticalPropagator, self),
          DECLARE_GET_FIELD(t_PythonFieldAbstractAnalyticalPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_PythonFieldAbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAbstractAnalyticalPropagator_init_ },
          { Py_tp_getset, t_PythonFieldAbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(PythonFieldAbstractAnalyticalPropagator, t_PythonFieldAbstractAnalyticalPropagator, PythonFieldAbstractAnalyticalPropagator);
        PyObject *t_PythonFieldAbstractAnalyticalPropagator::wrap_Object(const PythonFieldAbstractAnalyticalPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractAnalyticalPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractAnalyticalPropagator *self = (t_PythonFieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAbstractAnalyticalPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractAnalyticalPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractAnalyticalPropagator *self = (t_PythonFieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAbstractAnalyticalPropagator), &PY_TYPE_DEF(PythonFieldAbstractAnalyticalPropagator), module, "PythonFieldAbstractAnalyticalPropagator", 1);
        }

        void t_PythonFieldAbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractAnalyticalPropagator), "class_", make_descriptor(PythonFieldAbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_PythonFieldAbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAbstractAnalyticalPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldAbstractAnalyticalPropagator_getMass0 },
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonFieldAbstractAnalyticalPropagator_getParametersDrivers1 },
            { "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;", (void *) t_PythonFieldAbstractAnalyticalPropagator_propagateOrbit2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractAnalyticalPropagator_pythonDecRef3 },
            { "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V", (void *) t_PythonFieldAbstractAnalyticalPropagator_resetIntermediateState4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAbstractAnalyticalPropagator::wrap_Object(PythonFieldAbstractAnalyticalPropagator(((t_PythonFieldAbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_of_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAbstractAnalyticalPropagator_init_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
          PythonFieldAbstractAnalyticalPropagator object((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            INT_CALL(object = PythonFieldAbstractAnalyticalPropagator(a0, a1));
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

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_finalize(t_PythonFieldAbstractAnalyticalPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_pythonExtension(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMass", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("getMass", result);
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

        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getParametersDrivers1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_a27fc9afd27e559d]);
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

        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_propagateOrbit2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "propagateOrbit", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::FieldOrbit::initializeClass, &value))
          {
            throwTypeError("propagateOrbit", result);
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

        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_resetIntermediateState4(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *result = PyObject_CallMethod(obj, "resetIntermediateState", "OO", o0, o1);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__self(t_PythonFieldAbstractAnalyticalPropagator *self, void *data)
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
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__parameters_(t_PythonFieldAbstractAnalyticalPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *MessageType::class$ = NULL;
          jmethodID *MessageType::mids$ = NULL;
          bool MessageType::live$ = false;

          jclass MessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/MessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_parse_c877a901fff4f40f] = env->getMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Lorg/orekit/gnss/metric/messages/ParsedMessage;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::gnss::metric::messages::ParsedMessage MessageType::parse(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0, jint a1) const
          {
            return ::org::orekit::gnss::metric::messages::ParsedMessage(env->callObjectMethod(this$, mids$[mid_parse_c877a901fff4f40f], a0.this$, a1));
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
          static PyObject *t_MessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageType_parse(t_MessageType *self, PyObject *args);

          static PyMethodDef t_MessageType__methods_[] = {
            DECLARE_METHOD(t_MessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageType, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MessageType)[] = {
            { Py_tp_methods, t_MessageType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MessageType, t_MessageType, MessageType);

          void t_MessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(MessageType), &PY_TYPE_DEF(MessageType), module, "MessageType", 0);
          }

          void t_MessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageType), "class_", make_descriptor(MessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageType), "wrapfn_", make_descriptor(t_MessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageType), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MessageType::initializeClass, 1)))
              return NULL;
            return t_MessageType::wrap_Object(MessageType(((t_MessageType *) arg)->object.this$));
          }
          static PyObject *t_MessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MessageType_parse(t_MessageType *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jint a1;
            ::org::orekit::gnss::metric::messages::ParsedMessage result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::orekit::gnss::metric::messages::t_ParsedMessage::wrap_Object(result);
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
#include "org/orekit/files/ccsds/ndm/PythonNdmConstituent.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *PythonNdmConstituent::class$ = NULL;
          jmethodID *PythonNdmConstituent::mids$ = NULL;
          bool PythonNdmConstituent::live$ = false;

          jclass PythonNdmConstituent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/PythonNdmConstituent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c9d5a187842fe993] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/Header;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getConventions_f657aa17e72227da] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_fc8fc85e38e59042] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getHeader_2764986a35b07524] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
              mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_validate_7ae3461a92a43152] = env->getMethodID(cls, "validate", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonNdmConstituent::PythonNdmConstituent(const ::org::orekit::files::ccsds::section::Header & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_c9d5a187842fe993, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          void PythonNdmConstituent::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          ::org::orekit::utils::IERSConventions PythonNdmConstituent::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getConventions_f657aa17e72227da]));
          }

          ::org::orekit::data::DataContext PythonNdmConstituent::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getDataContext_fc8fc85e38e59042]));
          }

          ::org::orekit::files::ccsds::section::Header PythonNdmConstituent::getHeader() const
          {
            return ::org::orekit::files::ccsds::section::Header(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getHeader_2764986a35b07524]));
          }

          ::java::util::List PythonNdmConstituent::getSegments() const
          {
            return ::java::util::List(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getSegments_a6156df500549a58]));
          }

          jlong PythonNdmConstituent::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonNdmConstituent::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
          }

          void PythonNdmConstituent::validate() const
          {
            env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_validate_7ae3461a92a43152]);
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
          static PyObject *t_PythonNdmConstituent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNdmConstituent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNdmConstituent_of_(t_PythonNdmConstituent *self, PyObject *args);
          static int t_PythonNdmConstituent_init_(t_PythonNdmConstituent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonNdmConstituent_finalize(t_PythonNdmConstituent *self);
          static PyObject *t_PythonNdmConstituent_getConventions(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_getDataContext(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_getHeader(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_getSegments(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_pythonExtension(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_validate(t_PythonNdmConstituent *self, PyObject *args);
          static jobject JNICALL t_PythonNdmConstituent_getConventions0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNdmConstituent_getDataContext1(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNdmConstituent_getHeader2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNdmConstituent_getSegments3(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonNdmConstituent_pythonDecRef4(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonNdmConstituent_validate5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonNdmConstituent_get__self(t_PythonNdmConstituent *self, void *data);
          static PyObject *t_PythonNdmConstituent_get__parameters_(t_PythonNdmConstituent *self, void *data);
          static PyGetSetDef t_PythonNdmConstituent__fields_[] = {
            DECLARE_GET_FIELD(t_PythonNdmConstituent, self),
            DECLARE_GET_FIELD(t_PythonNdmConstituent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonNdmConstituent__methods_[] = {
            DECLARE_METHOD(t_PythonNdmConstituent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNdmConstituent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNdmConstituent, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getConventions, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getDataContext, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getHeader, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getSegments, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, pythonExtension, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonNdmConstituent)[] = {
            { Py_tp_methods, t_PythonNdmConstituent__methods_ },
            { Py_tp_init, (void *) t_PythonNdmConstituent_init_ },
            { Py_tp_getset, t_PythonNdmConstituent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonNdmConstituent)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
            NULL
          };

          DEFINE_TYPE(PythonNdmConstituent, t_PythonNdmConstituent, PythonNdmConstituent);
          PyObject *t_PythonNdmConstituent::wrap_Object(const PythonNdmConstituent& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonNdmConstituent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonNdmConstituent *self = (t_PythonNdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PythonNdmConstituent::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonNdmConstituent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonNdmConstituent *self = (t_PythonNdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PythonNdmConstituent::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonNdmConstituent), &PY_TYPE_DEF(PythonNdmConstituent), module, "PythonNdmConstituent", 1);
          }

          void t_PythonNdmConstituent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNdmConstituent), "class_", make_descriptor(PythonNdmConstituent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNdmConstituent), "wrapfn_", make_descriptor(t_PythonNdmConstituent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNdmConstituent), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonNdmConstituent::initializeClass);
            JNINativeMethod methods[] = {
              { "getConventions", "()Lorg/orekit/utils/IERSConventions;", (void *) t_PythonNdmConstituent_getConventions0 },
              { "getDataContext", "()Lorg/orekit/data/DataContext;", (void *) t_PythonNdmConstituent_getDataContext1 },
              { "getHeader", "()Lorg/orekit/files/ccsds/section/Header;", (void *) t_PythonNdmConstituent_getHeader2 },
              { "getSegments", "()Ljava/util/List;", (void *) t_PythonNdmConstituent_getSegments3 },
              { "pythonDecRef", "()V", (void *) t_PythonNdmConstituent_pythonDecRef4 },
              { "validate", "()V", (void *) t_PythonNdmConstituent_validate5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonNdmConstituent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonNdmConstituent::initializeClass, 1)))
              return NULL;
            return t_PythonNdmConstituent::wrap_Object(PythonNdmConstituent(((t_PythonNdmConstituent *) arg)->object.this$));
          }
          static PyObject *t_PythonNdmConstituent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonNdmConstituent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonNdmConstituent_of_(t_PythonNdmConstituent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonNdmConstituent_init_(t_PythonNdmConstituent *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::section::Header a0((jobject) NULL);
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::IERSConventions a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::data::DataContext a3((jobject) NULL);
            PythonNdmConstituent object((jobject) NULL);

            if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::section::Header::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
            {
              INT_CALL(object = PythonNdmConstituent(a0, a1, a2, a3));
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

          static PyObject *t_PythonNdmConstituent_finalize(t_PythonNdmConstituent *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonNdmConstituent_getConventions(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getConventions());
              return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getConventions", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_getDataContext(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getDataContext());
              return ::org::orekit::data::t_DataContext::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getDataContext", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_getHeader(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::section::Header result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getHeader());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Header::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getHeader", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_getSegments(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSegments());
              return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getSegments", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_pythonExtension(t_PythonNdmConstituent *self, PyObject *args)
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

          static PyObject *t_PythonNdmConstituent_validate(t_PythonNdmConstituent *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.validate());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "validate", args, 2);
          }

          static jobject JNICALL t_PythonNdmConstituent_getConventions0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getConventions", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::utils::IERSConventions::initializeClass, &value))
            {
              throwTypeError("getConventions", result);
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

          static jobject JNICALL t_PythonNdmConstituent_getDataContext1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::data::DataContext value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getDataContext", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::data::DataContext::initializeClass, &value))
            {
              throwTypeError("getDataContext", result);
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

          static jobject JNICALL t_PythonNdmConstituent_getHeader2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &value))
            {
              throwTypeError("getHeader", result);
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

          static jobject JNICALL t_PythonNdmConstituent_getSegments3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getSegments", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getSegments", result);
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

          static void JNICALL t_PythonNdmConstituent_pythonDecRef4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonNdmConstituent_validate5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "validate", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonNdmConstituent_get__self(t_PythonNdmConstituent *self, void *data)
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
          static PyObject *t_PythonNdmConstituent_get__parameters_(t_PythonNdmConstituent *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}

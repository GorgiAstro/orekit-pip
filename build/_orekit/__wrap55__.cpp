#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonGravityFields.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getConstantNormalizedProvider_0c77c94a83049da8] = env->getMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_eb1ce3dfed700512] = env->getMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_79759f2115f6836e] = env->getMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanTidesWaves_db6a96225c690c76] = env->getMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizedProvider_2609e3e741b941bf] = env->getMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonGravityFields::PythonGravityFields() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonGravityFields::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonGravityFields::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonGravityFields::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_9e26256fb0d384a2]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_9e26256fb0d384a2]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_9e26256fb0d384a2]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_9e26256fb0d384a2]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_9e26256fb0d384a2]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonGravityFields::mids$[PythonGravityFields::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
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
#include "org/hipparchus/random/HaltonSequenceGenerator.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *HaltonSequenceGenerator::class$ = NULL;
      jmethodID *HaltonSequenceGenerator::mids$ = NULL;
      bool HaltonSequenceGenerator::live$ = false;

      jclass HaltonSequenceGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/HaltonSequenceGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_2ec9e030f61ba505] = env->getMethodID(cls, "<init>", "(I[I[I)V");
          mids$[mid_getNextIndex_412668abc8d889e9] = env->getMethodID(cls, "getNextIndex", "()I");
          mids$[mid_nextVector_a53a7513ecedada2] = env->getMethodID(cls, "nextVector", "()[D");
          mids$[mid_skipTo_1da5c9e77f24f269] = env->getMethodID(cls, "skipTo", "(I)[D");
          mids$[mid_scramble_4885f823e425a625] = env->getMethodID(cls, "scramble", "(IIII)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HaltonSequenceGenerator::HaltonSequenceGenerator(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      HaltonSequenceGenerator::HaltonSequenceGenerator(jint a0, const JArray< jint > & a1, const JArray< jint > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ec9e030f61ba505, a0, a1.this$, a2.this$)) {}

      jint HaltonSequenceGenerator::getNextIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getNextIndex_412668abc8d889e9]);
      }

      JArray< jdouble > HaltonSequenceGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_a53a7513ecedada2]));
      }

      JArray< jdouble > HaltonSequenceGenerator::skipTo(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_skipTo_1da5c9e77f24f269], a0));
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
      static PyObject *t_HaltonSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HaltonSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HaltonSequenceGenerator_init_(t_HaltonSequenceGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HaltonSequenceGenerator_getNextIndex(t_HaltonSequenceGenerator *self);
      static PyObject *t_HaltonSequenceGenerator_nextVector(t_HaltonSequenceGenerator *self);
      static PyObject *t_HaltonSequenceGenerator_skipTo(t_HaltonSequenceGenerator *self, PyObject *arg);
      static PyObject *t_HaltonSequenceGenerator_get__nextIndex(t_HaltonSequenceGenerator *self, void *data);
      static PyGetSetDef t_HaltonSequenceGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_HaltonSequenceGenerator, nextIndex),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HaltonSequenceGenerator__methods_[] = {
        DECLARE_METHOD(t_HaltonSequenceGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, getNextIndex, METH_NOARGS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, nextVector, METH_NOARGS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, skipTo, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HaltonSequenceGenerator)[] = {
        { Py_tp_methods, t_HaltonSequenceGenerator__methods_ },
        { Py_tp_init, (void *) t_HaltonSequenceGenerator_init_ },
        { Py_tp_getset, t_HaltonSequenceGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HaltonSequenceGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HaltonSequenceGenerator, t_HaltonSequenceGenerator, HaltonSequenceGenerator);

      void t_HaltonSequenceGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(HaltonSequenceGenerator), &PY_TYPE_DEF(HaltonSequenceGenerator), module, "HaltonSequenceGenerator", 0);
      }

      void t_HaltonSequenceGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaltonSequenceGenerator), "class_", make_descriptor(HaltonSequenceGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaltonSequenceGenerator), "wrapfn_", make_descriptor(t_HaltonSequenceGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaltonSequenceGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HaltonSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HaltonSequenceGenerator::initializeClass, 1)))
          return NULL;
        return t_HaltonSequenceGenerator::wrap_Object(HaltonSequenceGenerator(((t_HaltonSequenceGenerator *) arg)->object.this$));
      }
      static PyObject *t_HaltonSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HaltonSequenceGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HaltonSequenceGenerator_init_(t_HaltonSequenceGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            HaltonSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = HaltonSequenceGenerator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            JArray< jint > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);
            HaltonSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "I[I[I", &a0, &a1, &a2))
            {
              INT_CALL(object = HaltonSequenceGenerator(a0, a1, a2));
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

      static PyObject *t_HaltonSequenceGenerator_getNextIndex(t_HaltonSequenceGenerator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNextIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_HaltonSequenceGenerator_nextVector(t_HaltonSequenceGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }

      static PyObject *t_HaltonSequenceGenerator_skipTo(t_HaltonSequenceGenerator *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.skipTo(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "skipTo", arg);
        return NULL;
      }

      static PyObject *t_HaltonSequenceGenerator_get__nextIndex(t_HaltonSequenceGenerator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNextIndex());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonDataLoader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/lang/Throwable.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_stillAcceptsData_89b302893bdbe1f1] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataLoader::PythonDataLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonDataLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonDataLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonDataLoader::pythonExtension(jlong a0) const
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_9e26256fb0d384a2]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jboolean JNICALL t_PythonDataLoader_stillAcceptsData2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_9e26256fb0d384a2]);
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/AbstractFormat.h"
#include "java/lang/Class.h"
#include "java/text/FieldPosition.h"
#include "java/lang/StringBuffer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *AbstractFormat::class$ = NULL;
      jmethodID *AbstractFormat::mids$ = NULL;
      bool AbstractFormat::live$ = false;

      jclass AbstractFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/AbstractFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_format_12b2fbc0c0cefa8d] = env->getMethodID(cls, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_d9d8c4aa92e35cdf] = env->getMethodID(cls, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getDenominatorFormat_001645e916bd626d] = env->getMethodID(cls, "getDenominatorFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getNumeratorFormat_001645e916bd626d] = env->getMethodID(cls, "getNumeratorFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getDefaultNumberFormat_001645e916bd626d] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getDefaultNumberFormat_eb8cc1bc569326d0] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
          mids$[mid_parseAndIgnoreWhitespace_c31631851425bff4] = env->getStaticMethodID(cls, "parseAndIgnoreWhitespace", "(Ljava/lang/String;Ljava/text/ParsePosition;)V");
          mids$[mid_parseNextCharacter_925fed7c0b932e5a] = env->getStaticMethodID(cls, "parseNextCharacter", "(Ljava/lang/String;Ljava/text/ParsePosition;)C");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::StringBuffer AbstractFormat::format(jdouble a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_12b2fbc0c0cefa8d], a0, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer AbstractFormat::format(jlong a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_d9d8c4aa92e35cdf], a0, a1.this$, a2.this$));
      }

      ::java::text::NumberFormat AbstractFormat::getDenominatorFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getDenominatorFormat_001645e916bd626d]));
      }

      ::java::text::NumberFormat AbstractFormat::getNumeratorFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getNumeratorFormat_001645e916bd626d]));
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
      static PyObject *t_AbstractFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFormat_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFormat_format(t_AbstractFormat *self, PyObject *args);
      static PyObject *t_AbstractFormat_getDenominatorFormat(t_AbstractFormat *self);
      static PyObject *t_AbstractFormat_getNumeratorFormat(t_AbstractFormat *self);
      static PyObject *t_AbstractFormat_get__denominatorFormat(t_AbstractFormat *self, void *data);
      static PyObject *t_AbstractFormat_get__numeratorFormat(t_AbstractFormat *self, void *data);
      static PyGetSetDef t_AbstractFormat__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFormat, denominatorFormat),
        DECLARE_GET_FIELD(t_AbstractFormat, numeratorFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFormat__methods_[] = {
        DECLARE_METHOD(t_AbstractFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFormat, getDenominatorFormat, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFormat, getNumeratorFormat, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFormat)[] = {
        { Py_tp_methods, t_AbstractFormat__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFormat)[] = {
        &PY_TYPE_DEF(::java::text::NumberFormat),
        NULL
      };

      DEFINE_TYPE(AbstractFormat, t_AbstractFormat, AbstractFormat);

      void t_AbstractFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFormat), &PY_TYPE_DEF(AbstractFormat), module, "AbstractFormat", 0);
      }

      void t_AbstractFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFormat), "class_", make_descriptor(AbstractFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFormat), "wrapfn_", make_descriptor(t_AbstractFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFormat::initializeClass, 1)))
          return NULL;
        return t_AbstractFormat::wrap_Object(AbstractFormat(((t_AbstractFormat *) arg)->object.this$));
      }
      static PyObject *t_AbstractFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFormat_format(t_AbstractFormat *self, PyObject *args)
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

        return callSuper(PY_TYPE(AbstractFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_AbstractFormat_getDenominatorFormat(t_AbstractFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getDenominatorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_AbstractFormat_getNumeratorFormat(t_AbstractFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getNumeratorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_AbstractFormat_get__denominatorFormat(t_AbstractFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getDenominatorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }

      static PyObject *t_AbstractFormat_get__numeratorFormat(t_AbstractFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getNumeratorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/SignalInSpaceAccuracy.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *SignalInSpaceAccuracy::class$ = NULL;
            jmethodID *SignalInSpaceAccuracy::mids$ = NULL;
            bool SignalInSpaceAccuracy::live$ = false;

            jclass SignalInSpaceAccuracy::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/SignalInSpaceAccuracy");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SignalInSpaceAccuracy::SignalInSpaceAccuracy(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

            jdouble SignalInSpaceAccuracy::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_557b8123390d8d0c]);
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
            static PyObject *t_SignalInSpaceAccuracy_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SignalInSpaceAccuracy_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SignalInSpaceAccuracy_init_(t_SignalInSpaceAccuracy *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SignalInSpaceAccuracy_getAccuracy(t_SignalInSpaceAccuracy *self);
            static PyObject *t_SignalInSpaceAccuracy_get__accuracy(t_SignalInSpaceAccuracy *self, void *data);
            static PyGetSetDef t_SignalInSpaceAccuracy__fields_[] = {
              DECLARE_GET_FIELD(t_SignalInSpaceAccuracy, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SignalInSpaceAccuracy__methods_[] = {
              DECLARE_METHOD(t_SignalInSpaceAccuracy, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SignalInSpaceAccuracy, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SignalInSpaceAccuracy, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SignalInSpaceAccuracy)[] = {
              { Py_tp_methods, t_SignalInSpaceAccuracy__methods_ },
              { Py_tp_init, (void *) t_SignalInSpaceAccuracy_init_ },
              { Py_tp_getset, t_SignalInSpaceAccuracy__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SignalInSpaceAccuracy)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SignalInSpaceAccuracy, t_SignalInSpaceAccuracy, SignalInSpaceAccuracy);

            void t_SignalInSpaceAccuracy::install(PyObject *module)
            {
              installType(&PY_TYPE(SignalInSpaceAccuracy), &PY_TYPE_DEF(SignalInSpaceAccuracy), module, "SignalInSpaceAccuracy", 0);
            }

            void t_SignalInSpaceAccuracy::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SignalInSpaceAccuracy), "class_", make_descriptor(SignalInSpaceAccuracy::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SignalInSpaceAccuracy), "wrapfn_", make_descriptor(t_SignalInSpaceAccuracy::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SignalInSpaceAccuracy), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SignalInSpaceAccuracy_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SignalInSpaceAccuracy::initializeClass, 1)))
                return NULL;
              return t_SignalInSpaceAccuracy::wrap_Object(SignalInSpaceAccuracy(((t_SignalInSpaceAccuracy *) arg)->object.this$));
            }
            static PyObject *t_SignalInSpaceAccuracy_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SignalInSpaceAccuracy::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SignalInSpaceAccuracy_init_(t_SignalInSpaceAccuracy *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              SignalInSpaceAccuracy object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = SignalInSpaceAccuracy(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SignalInSpaceAccuracy_getAccuracy(t_SignalInSpaceAccuracy *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SignalInSpaceAccuracy_get__accuracy(t_SignalInSpaceAccuracy *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAccuracy());
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
#include "org/orekit/files/ccsds/utils/parsing/PythonAbstractMessageParser.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *PythonAbstractMessageParser::class$ = NULL;
            jmethodID *PythonAbstractMessageParser::mids$ = NULL;
            bool PythonAbstractMessageParser::live$ = false;

            jclass PythonAbstractMessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/PythonAbstractMessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_e661fe3ba2fafb22] = env->getMethodID(cls, "build", "()Ljava/lang/Object;");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_a580586827f4ec13] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonAbstractMessageParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonAbstractMessageParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonAbstractMessageParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          namespace parsing {
            static PyObject *t_PythonAbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageParser_of_(t_PythonAbstractMessageParser *self, PyObject *args);
            static PyObject *t_PythonAbstractMessageParser_finalize(t_PythonAbstractMessageParser *self);
            static PyObject *t_PythonAbstractMessageParser_pythonExtension(t_PythonAbstractMessageParser *self, PyObject *args);
            static jobject JNICALL t_PythonAbstractMessageParser_build0(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractMessageParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractMessageParser_reset2(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonAbstractMessageParser_get__self(t_PythonAbstractMessageParser *self, void *data);
            static PyObject *t_PythonAbstractMessageParser_get__parameters_(t_PythonAbstractMessageParser *self, void *data);
            static PyGetSetDef t_PythonAbstractMessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractMessageParser, self),
              DECLARE_GET_FIELD(t_PythonAbstractMessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractMessageParser__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractMessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMessageParser)[] = {
              { Py_tp_methods, t_PythonAbstractMessageParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonAbstractMessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractMessageParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser),
              NULL
            };

            DEFINE_TYPE(PythonAbstractMessageParser, t_PythonAbstractMessageParser, PythonAbstractMessageParser);
            PyObject *t_PythonAbstractMessageParser::wrap_Object(const PythonAbstractMessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonAbstractMessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageParser *self = (t_PythonAbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonAbstractMessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonAbstractMessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageParser *self = (t_PythonAbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonAbstractMessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractMessageParser), &PY_TYPE_DEF(PythonAbstractMessageParser), module, "PythonAbstractMessageParser", 1);
            }

            void t_PythonAbstractMessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageParser), "class_", make_descriptor(PythonAbstractMessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageParser), "wrapfn_", make_descriptor(t_PythonAbstractMessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractMessageParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Ljava/lang/Object;", (void *) t_PythonAbstractMessageParser_build0 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractMessageParser_pythonDecRef1 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonAbstractMessageParser_reset2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonAbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractMessageParser::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractMessageParser::wrap_Object(PythonAbstractMessageParser(((t_PythonAbstractMessageParser *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractMessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractMessageParser_of_(t_PythonAbstractMessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonAbstractMessageParser_finalize(t_PythonAbstractMessageParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractMessageParser_pythonExtension(t_PythonAbstractMessageParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonAbstractMessageParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("build", result);
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

            static void JNICALL t_PythonAbstractMessageParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractMessageParser_reset2(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractMessageParser_get__self(t_PythonAbstractMessageParser *self, void *data)
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
            static PyObject *t_PythonAbstractMessageParser_get__parameters_(t_PythonAbstractMessageParser *self, void *data)
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
#include "org/orekit/propagation/conversion/PythonAbstractPropagatorConverter.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonAbstractPropagatorConverter::class$ = NULL;
        jmethodID *PythonAbstractPropagatorConverter::mids$ = NULL;
        bool PythonAbstractPropagatorConverter::live$ = false;

        jclass PythonAbstractPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonAbstractPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2a2776403255b5f4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;DI)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getModel_e31bcbfb9203b3a6] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getObjectiveFunction_88ca328d89915cf7] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractPropagatorConverter::PythonAbstractPropagatorConverter(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, jdouble a1, jint a2) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(env->newObject(initializeClass, &mids$, mid_init$_2a2776403255b5f4, a0.this$, a1, a2)) {}

        void PythonAbstractPropagatorConverter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAbstractPropagatorConverter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAbstractPropagatorConverter::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace conversion {
        static PyObject *t_PythonAbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractPropagatorConverter_init_(t_PythonAbstractPropagatorConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractPropagatorConverter_finalize(t_PythonAbstractPropagatorConverter *self);
        static PyObject *t_PythonAbstractPropagatorConverter_pythonExtension(t_PythonAbstractPropagatorConverter *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractPropagatorConverter_getModel0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractPropagatorConverter_getObjectiveFunction1(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractPropagatorConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractPropagatorConverter_get__self(t_PythonAbstractPropagatorConverter *self, void *data);
        static PyGetSetDef t_PythonAbstractPropagatorConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractPropagatorConverter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractPropagatorConverter)[] = {
          { Py_tp_methods, t_PythonAbstractPropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractPropagatorConverter_init_ },
          { Py_tp_getset, t_PythonAbstractPropagatorConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractPropagatorConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorConverter),
          NULL
        };

        DEFINE_TYPE(PythonAbstractPropagatorConverter, t_PythonAbstractPropagatorConverter, PythonAbstractPropagatorConverter);

        void t_PythonAbstractPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractPropagatorConverter), &PY_TYPE_DEF(PythonAbstractPropagatorConverter), module, "PythonAbstractPropagatorConverter", 1);
        }

        void t_PythonAbstractPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorConverter), "class_", make_descriptor(PythonAbstractPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorConverter), "wrapfn_", make_descriptor(t_PythonAbstractPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorConverter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractPropagatorConverter::initializeClass);
          JNINativeMethod methods[] = {
            { "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;", (void *) t_PythonAbstractPropagatorConverter_getModel0 },
            { "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;", (void *) t_PythonAbstractPropagatorConverter_getObjectiveFunction1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractPropagatorConverter_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractPropagatorConverter::wrap_Object(PythonAbstractPropagatorConverter(((t_PythonAbstractPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractPropagatorConverter_init_(t_PythonAbstractPropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          jdouble a1;
          jint a2;
          PythonAbstractPropagatorConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PythonAbstractPropagatorConverter(a0, a1, a2));
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

        static PyObject *t_PythonAbstractPropagatorConverter_finalize(t_PythonAbstractPropagatorConverter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractPropagatorConverter_pythonExtension(t_PythonAbstractPropagatorConverter *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractPropagatorConverter_getModel0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getModel", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, &value))
          {
            throwTypeError("getModel", result);
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

        static jobject JNICALL t_PythonAbstractPropagatorConverter_getObjectiveFunction1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::analysis::MultivariateVectorFunction value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObjectiveFunction", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &value))
          {
            throwTypeError("getObjectiveFunction", result);
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

        static void JNICALL t_PythonAbstractPropagatorConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractPropagatorConverter_get__self(t_PythonAbstractPropagatorConverter *self, void *data)
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
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/orekit/models/earth/GeoMagneticElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticField::class$ = NULL;
        jmethodID *GeoMagneticField::mids$ = NULL;
        bool GeoMagneticField::live$ = false;

        jclass GeoMagneticField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_calculateField_115cc5c8f9d6f38b] = env->getMethodID(cls, "calculateField", "(DDD)Lorg/orekit/models/earth/GeoMagneticElements;");
            mids$[mid_getDecimalYear_093995dc5657c18c] = env->getStaticMethodID(cls, "getDecimalYear", "(III)D");
            mids$[mid_getEpoch_557b8123390d8d0c] = env->getMethodID(cls, "getEpoch", "()D");
            mids$[mid_getModelName_3cffd47377eca18a] = env->getMethodID(cls, "getModelName", "()Ljava/lang/String;");
            mids$[mid_supportsTimeTransform_89b302893bdbe1f1] = env->getMethodID(cls, "supportsTimeTransform", "()Z");
            mids$[mid_transformModel_7100d3672aa999e4] = env->getMethodID(cls, "transformModel", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_transformModel_64649f752fe0c2a3] = env->getMethodID(cls, "transformModel", "(Lorg/orekit/models/earth/GeoMagneticField;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_validFrom_557b8123390d8d0c] = env->getMethodID(cls, "validFrom", "()D");
            mids$[mid_validTo_557b8123390d8d0c] = env->getMethodID(cls, "validTo", "()D");
            mids$[mid_setMainFieldCoefficients_8f08153945634de4] = env->getMethodID(cls, "setMainFieldCoefficients", "(IIDD)V");
            mids$[mid_setSecularVariationCoefficients_8f08153945634de4] = env->getMethodID(cls, "setSecularVariationCoefficients", "(IIDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::GeoMagneticElements GeoMagneticField::calculateField(jdouble a0, jdouble a1, jdouble a2) const
        {
          return ::org::orekit::models::earth::GeoMagneticElements(env->callObjectMethod(this$, mids$[mid_calculateField_115cc5c8f9d6f38b], a0, a1, a2));
        }

        jdouble GeoMagneticField::getDecimalYear(jint a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_getDecimalYear_093995dc5657c18c], a0, a1, a2);
        }

        jdouble GeoMagneticField::getEpoch() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEpoch_557b8123390d8d0c]);
        }

        ::java::lang::String GeoMagneticField::getModelName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getModelName_3cffd47377eca18a]));
        }

        jboolean GeoMagneticField::supportsTimeTransform() const
        {
          return env->callBooleanMethod(this$, mids$[mid_supportsTimeTransform_89b302893bdbe1f1]);
        }

        GeoMagneticField GeoMagneticField::transformModel(jdouble a0) const
        {
          return GeoMagneticField(env->callObjectMethod(this$, mids$[mid_transformModel_7100d3672aa999e4], a0));
        }

        GeoMagneticField GeoMagneticField::transformModel(const GeoMagneticField & a0, jdouble a1) const
        {
          return GeoMagneticField(env->callObjectMethod(this$, mids$[mid_transformModel_64649f752fe0c2a3], a0.this$, a1));
        }

        jdouble GeoMagneticField::validFrom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_validFrom_557b8123390d8d0c]);
        }

        jdouble GeoMagneticField::validTo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_validTo_557b8123390d8d0c]);
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
        static PyObject *t_GeoMagneticField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticField_calculateField(t_GeoMagneticField *self, PyObject *args);
        static PyObject *t_GeoMagneticField_getDecimalYear(PyTypeObject *type, PyObject *args);
        static PyObject *t_GeoMagneticField_getEpoch(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_getModelName(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_supportsTimeTransform(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_transformModel(t_GeoMagneticField *self, PyObject *args);
        static PyObject *t_GeoMagneticField_validFrom(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_validTo(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_get__epoch(t_GeoMagneticField *self, void *data);
        static PyObject *t_GeoMagneticField_get__modelName(t_GeoMagneticField *self, void *data);
        static PyGetSetDef t_GeoMagneticField__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticField, epoch),
          DECLARE_GET_FIELD(t_GeoMagneticField, modelName),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticField__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticField, calculateField, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticField, getDecimalYear, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticField, getEpoch, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, getModelName, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, supportsTimeTransform, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, transformModel, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticField, validFrom, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, validTo, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticField)[] = {
          { Py_tp_methods, t_GeoMagneticField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GeoMagneticField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticField, t_GeoMagneticField, GeoMagneticField);

        void t_GeoMagneticField::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticField), &PY_TYPE_DEF(GeoMagneticField), module, "GeoMagneticField", 0);
        }

        void t_GeoMagneticField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticField), "class_", make_descriptor(GeoMagneticField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticField), "wrapfn_", make_descriptor(t_GeoMagneticField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticField::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticField::wrap_Object(GeoMagneticField(((t_GeoMagneticField *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticField_calculateField(t_GeoMagneticField *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          ::org::orekit::models::earth::GeoMagneticElements result((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.calculateField(a0, a1, a2));
            return ::org::orekit::models::earth::t_GeoMagneticElements::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "calculateField", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticField_getDecimalYear(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticField::getDecimalYear(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "getDecimalYear", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticField_getEpoch(t_GeoMagneticField *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEpoch());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticField_getModelName(t_GeoMagneticField *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getModelName());
          return j2p(result);
        }

        static PyObject *t_GeoMagneticField_supportsTimeTransform(t_GeoMagneticField *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.supportsTimeTransform());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_GeoMagneticField_transformModel(t_GeoMagneticField *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              GeoMagneticField result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.transformModel(a0));
                return t_GeoMagneticField::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              GeoMagneticField a0((jobject) NULL);
              jdouble a1;
              GeoMagneticField result((jobject) NULL);

              if (!parseArgs(args, "kD", GeoMagneticField::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformModel(a0, a1));
                return t_GeoMagneticField::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformModel", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticField_validFrom(t_GeoMagneticField *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.validFrom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticField_validTo(t_GeoMagneticField *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.validTo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticField_get__epoch(t_GeoMagneticField *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEpoch());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticField_get__modelName(t_GeoMagneticField *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getModelName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
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
          mids$[mid_switchOccurred_990f4edc83670459] = env->getMethodID(cls, "switchOccurred", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AttitudesSequence$SwitchHandler::switchOccurred(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::propagation::SpacecraftState & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_switchOccurred_990f4edc83670459], a0.this$, a1.this$, a2.this$);
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
#include "org/orekit/rugged/utils/Selector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *Selector::class$ = NULL;
        jmethodID *Selector::mids$ = NULL;
        bool Selector::live$ = false;

        jclass Selector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/Selector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_select_2268d18be49a6087] = env->getMethodID(cls, "select", "(DD)D");
            mids$[mid_selectFirst_41fce65646328eb2] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Selector::Selector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Selector::select(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_select_2268d18be49a6087], a0, a1);
        }

        jboolean Selector::selectFirst(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_selectFirst_41fce65646328eb2], a0, a1);
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
      namespace utils {
        static PyObject *t_Selector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Selector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Selector_init_(t_Selector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Selector_select(t_Selector *self, PyObject *args);
        static PyObject *t_Selector_selectFirst(t_Selector *self, PyObject *args);

        static PyMethodDef t_Selector__methods_[] = {
          DECLARE_METHOD(t_Selector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Selector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Selector, select, METH_VARARGS),
          DECLARE_METHOD(t_Selector, selectFirst, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Selector)[] = {
          { Py_tp_methods, t_Selector__methods_ },
          { Py_tp_init, (void *) t_Selector_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Selector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Selector, t_Selector, Selector);

        void t_Selector::install(PyObject *module)
        {
          installType(&PY_TYPE(Selector), &PY_TYPE_DEF(Selector), module, "Selector", 0);
        }

        void t_Selector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Selector), "class_", make_descriptor(Selector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Selector), "wrapfn_", make_descriptor(t_Selector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Selector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Selector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Selector::initializeClass, 1)))
            return NULL;
          return t_Selector::wrap_Object(Selector(((t_Selector *) arg)->object.this$));
        }
        static PyObject *t_Selector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Selector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Selector_init_(t_Selector *self, PyObject *args, PyObject *kwds)
        {
          Selector object((jobject) NULL);

          INT_CALL(object = Selector());
          self->object = object;

          return 0;
        }

        static PyObject *t_Selector_select(t_Selector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.select(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "select", args);
          return NULL;
        }

        static PyObject *t_Selector_selectFirst(t_Selector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.selectFirst(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "selectFirst", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Precision.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Precision::class$ = NULL;
      jmethodID *Precision::mids$ = NULL;
      bool Precision::live$ = false;
      jdouble Precision::EPSILON = (jdouble) 0;
      jdouble Precision::SAFE_MIN = (jdouble) 0;

      jclass Precision::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Precision");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compareTo_8c41898dd55a0b95] = env->getStaticMethodID(cls, "compareTo", "(DDD)I");
          mids$[mid_compareTo_29539668bec8cd85] = env->getStaticMethodID(cls, "compareTo", "(DDI)I");
          mids$[mid_equals_41fce65646328eb2] = env->getStaticMethodID(cls, "equals", "(DD)Z");
          mids$[mid_equals_2a221b5baaa0955c] = env->getStaticMethodID(cls, "equals", "(FF)Z");
          mids$[mid_equals_3d7c70c33c048085] = env->getStaticMethodID(cls, "equals", "(DDD)Z");
          mids$[mid_equals_23603f2315ce5fae] = env->getStaticMethodID(cls, "equals", "(DDI)Z");
          mids$[mid_equals_2c39a2d35f848747] = env->getStaticMethodID(cls, "equals", "(FFF)Z");
          mids$[mid_equals_eb0e1b6856ae2529] = env->getStaticMethodID(cls, "equals", "(FFI)Z");
          mids$[mid_equalsIncludingNaN_41fce65646328eb2] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(DD)Z");
          mids$[mid_equalsIncludingNaN_2a221b5baaa0955c] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(FF)Z");
          mids$[mid_equalsIncludingNaN_3d7c70c33c048085] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(DDD)Z");
          mids$[mid_equalsIncludingNaN_2c39a2d35f848747] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(FFF)Z");
          mids$[mid_equalsIncludingNaN_23603f2315ce5fae] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(DDI)Z");
          mids$[mid_equalsIncludingNaN_eb0e1b6856ae2529] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(FFI)Z");
          mids$[mid_equalsWithRelativeTolerance_3d7c70c33c048085] = env->getStaticMethodID(cls, "equalsWithRelativeTolerance", "(DDD)Z");
          mids$[mid_isMathematicalInteger_dd69c3ab2404bb71] = env->getStaticMethodID(cls, "isMathematicalInteger", "(D)Z");
          mids$[mid_isMathematicalInteger_2637f4d79297c2ad] = env->getStaticMethodID(cls, "isMathematicalInteger", "(F)Z");
          mids$[mid_representableDelta_2268d18be49a6087] = env->getStaticMethodID(cls, "representableDelta", "(DD)D");
          mids$[mid_round_156ae9d72f1c8533] = env->getStaticMethodID(cls, "round", "(DI)D");
          mids$[mid_round_ef306825a01b4f72] = env->getStaticMethodID(cls, "round", "(FI)F");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EPSILON = env->getStaticDoubleField(cls, "EPSILON");
          SAFE_MIN = env->getStaticDoubleField(cls, "SAFE_MIN");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint Precision::compareTo(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_compareTo_8c41898dd55a0b95], a0, a1, a2);
      }

      jint Precision::compareTo(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_compareTo_29539668bec8cd85], a0, a1, a2);
      }

      jboolean Precision::equals(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_41fce65646328eb2], a0, a1);
      }

      jboolean Precision::equals(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_2a221b5baaa0955c], a0, a1);
      }

      jboolean Precision::equals(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_3d7c70c33c048085], a0, a1, a2);
      }

      jboolean Precision::equals(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_23603f2315ce5fae], a0, a1, a2);
      }

      jboolean Precision::equals(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_2c39a2d35f848747], a0, a1, a2);
      }

      jboolean Precision::equals(jfloat a0, jfloat a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_eb0e1b6856ae2529], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_41fce65646328eb2], a0, a1);
      }

      jboolean Precision::equalsIncludingNaN(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_2a221b5baaa0955c], a0, a1);
      }

      jboolean Precision::equalsIncludingNaN(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_3d7c70c33c048085], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_2c39a2d35f848747], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_23603f2315ce5fae], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jfloat a0, jfloat a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_eb0e1b6856ae2529], a0, a1, a2);
      }

      jboolean Precision::equalsWithRelativeTolerance(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsWithRelativeTolerance_3d7c70c33c048085], a0, a1, a2);
      }

      jboolean Precision::isMathematicalInteger(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMathematicalInteger_dd69c3ab2404bb71], a0);
      }

      jboolean Precision::isMathematicalInteger(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMathematicalInteger_2637f4d79297c2ad], a0);
      }

      jdouble Precision::representableDelta(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_representableDelta_2268d18be49a6087], a0, a1);
      }

      jdouble Precision::round(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_round_156ae9d72f1c8533], a0, a1);
      }

      jfloat Precision::round(jfloat a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_round_ef306825a01b4f72], a0, a1);
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
      static PyObject *t_Precision_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Precision_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Precision_compareTo(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_equals(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_equalsIncludingNaN(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_isMathematicalInteger(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_representableDelta(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_round(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Precision__methods_[] = {
        DECLARE_METHOD(t_Precision, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Precision, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Precision, compareTo, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, equals, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, equalsIncludingNaN, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, equalsWithRelativeTolerance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, isMathematicalInteger, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, representableDelta, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, round, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Precision)[] = {
        { Py_tp_methods, t_Precision__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Precision)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Precision, t_Precision, Precision);

      void t_Precision::install(PyObject *module)
      {
        installType(&PY_TYPE(Precision), &PY_TYPE_DEF(Precision), module, "Precision", 0);
      }

      void t_Precision::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "class_", make_descriptor(Precision::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "wrapfn_", make_descriptor(t_Precision::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "boxfn_", make_descriptor(boxObject));
        env->getClass(Precision::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "EPSILON", make_descriptor(Precision::EPSILON));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "SAFE_MIN", make_descriptor(Precision::SAFE_MIN));
      }

      static PyObject *t_Precision_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Precision::initializeClass, 1)))
          return NULL;
        return t_Precision::wrap_Object(Precision(((t_Precision *) arg)->object.this$));
      }
      static PyObject *t_Precision_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Precision::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Precision_compareTo(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::compareTo(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::compareTo(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "compareTo", args);
        return NULL;
      }

      static PyObject *t_Precision_equals(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jboolean result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jboolean result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jboolean result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "FFI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        return callSuper(type, "equals", args, 2);
      }

      static PyObject *t_Precision_equalsIncludingNaN(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jboolean result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jboolean result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jboolean result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "FFI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equalsIncludingNaN", args);
        return NULL;
      }

      static PyObject *t_Precision_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jboolean result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsWithRelativeTolerance(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "equalsWithRelativeTolerance", args);
        return NULL;
      }

      static PyObject *t_Precision_isMathematicalInteger(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jboolean result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::isMathematicalInteger(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jboolean result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::isMathematicalInteger(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "isMathematicalInteger", args);
        return NULL;
      }

      static PyObject *t_Precision_representableDelta(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::Precision::representableDelta(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "representableDelta", args);
        return NULL;
      }

      static PyObject *t_Precision_round(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::round(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jint a1;
            jfloat result;

            if (!parseArgs(args, "FI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::round(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "round", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonAttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonAttitudeProvider::class$ = NULL;
      jmethodID *PythonAttitudeProvider::mids$ = NULL;
      bool PythonAttitudeProvider::live$ = false;

      jclass PythonAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAttitudeProvider::PythonAttitudeProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonAttitudeProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonAttitudeProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonAttitudeProvider::pythonExtension(jlong a0) const
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
  namespace orekit {
    namespace attitudes {
      static PyObject *t_PythonAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAttitudeProvider_init_(t_PythonAttitudeProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAttitudeProvider_finalize(t_PythonAttitudeProvider *self);
      static PyObject *t_PythonAttitudeProvider_pythonExtension(t_PythonAttitudeProvider *self, PyObject *args);
      static jobject JNICALL t_PythonAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAttitudeProvider_get__self(t_PythonAttitudeProvider *self, void *data);
      static PyGetSetDef t_PythonAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAttitudeProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_PythonAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAttitudeProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeProvider)[] = {
        { Py_tp_methods, t_PythonAttitudeProvider__methods_ },
        { Py_tp_init, (void *) t_PythonAttitudeProvider_init_ },
        { Py_tp_getset, t_PythonAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAttitudeProvider, t_PythonAttitudeProvider, PythonAttitudeProvider);

      void t_PythonAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAttitudeProvider), &PY_TYPE_DEF(PythonAttitudeProvider), module, "PythonAttitudeProvider", 1);
      }

      void t_PythonAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProvider), "class_", make_descriptor(PythonAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProvider), "wrapfn_", make_descriptor(t_PythonAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAttitudeProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonAttitudeProvider_getAttitude0 },
          { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonAttitudeProvider_getAttitude1 },
          { "pythonDecRef", "()V", (void *) t_PythonAttitudeProvider_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_PythonAttitudeProvider::wrap_Object(PythonAttitudeProvider(((t_PythonAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAttitudeProvider_init_(t_PythonAttitudeProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonAttitudeProvider object((jobject) NULL);

        INT_CALL(object = PythonAttitudeProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAttitudeProvider_finalize(t_PythonAttitudeProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAttitudeProvider_pythonExtension(t_PythonAttitudeProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_9e26256fb0d384a2]);
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

      static jobject JNICALL t_PythonAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_9e26256fb0d384a2]);
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

      static void JNICALL t_PythonAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAttitudeProvider_get__self(t_PythonAttitudeProvider *self, void *data)
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
#include "org/orekit/attitudes/PythonAttitudeProviderModifier.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
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
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getUnderlyingAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAttitudeProviderModifier::PythonAttitudeProviderModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonAttitudeProviderModifier::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonAttitudeProviderModifier::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonAttitudeProviderModifier::pythonExtension(jlong a0) const
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
          { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonAttitudeProviderModifier_getAttitude0 },
          { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonAttitudeProviderModifier_getAttitude1 },
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_9e26256fb0d384a2]);
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

      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_9e26256fb0d384a2]);
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

      static jobject JNICALL t_PythonAttitudeProviderModifier_getUnderlyingAttitudeProvider2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_9e26256fb0d384a2]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
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
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
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
            mids$[mid_init$_0bdb57b79cecc140] = env->getMethodID(cls, "<init>", "([D[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
            mids$[mid_getKnots_a53a7513ecedada2] = env->getMethodID(cls, "getKnots", "()[D");
            mids$[mid_getN_412668abc8d889e9] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_getPolynomials_ab8ca1f1c6647c6c] = env->getMethodID(cls, "getPolynomials", "()[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_isValidPoint_dd69c3ab2404bb71] = env->getMethodID(cls, "isValidPoint", "(D)Z");
            mids$[mid_polynomialSplineDerivative_0197192358cfcea9] = env->getMethodID(cls, "polynomialSplineDerivative", "()Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_6672ad854985cb64] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialSplineFunction::PolynomialSplineFunction(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0bdb57b79cecc140, a0.this$, a1.this$)) {}

        JArray< jdouble > PolynomialSplineFunction::getKnots() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getKnots_a53a7513ecedada2]));
        }

        jint PolynomialSplineFunction::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_412668abc8d889e9]);
        }

        JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > PolynomialSplineFunction::getPolynomials() const
        {
          return JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getPolynomials_ab8ca1f1c6647c6c]));
        }

        jboolean PolynomialSplineFunction::isValidPoint(jdouble a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_dd69c3ab2404bb71], a0);
        }

        PolynomialSplineFunction PolynomialSplineFunction::polynomialSplineDerivative() const
        {
          return PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_polynomialSplineDerivative_0197192358cfcea9]));
        }

        jdouble PolynomialSplineFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialSplineFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6672ad854985cb64], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::Derivative PolynomialSplineFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
#include "org/orekit/estimation/measurements/modifiers/InterSatellitesPhaseAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *InterSatellitesPhaseAmbiguityModifier::class$ = NULL;
          jmethodID *InterSatellitesPhaseAmbiguityModifier::mids$ = NULL;
          bool InterSatellitesPhaseAmbiguityModifier::live$ = false;

          jclass InterSatellitesPhaseAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/InterSatellitesPhaseAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesPhaseAmbiguityModifier::InterSatellitesPhaseAmbiguityModifier(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

          ::java::util::List InterSatellitesPhaseAmbiguityModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void InterSatellitesPhaseAmbiguityModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void InterSatellitesPhaseAmbiguityModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_InterSatellitesPhaseAmbiguityModifier_init_(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_getParametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modify(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modifyWithoutDerivatives(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_get__parametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self, void *data);
          static PyGetSetDef t_InterSatellitesPhaseAmbiguityModifier__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesPhaseAmbiguityModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesPhaseAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, modify, METH_O),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesPhaseAmbiguityModifier)[] = {
            { Py_tp_methods, t_InterSatellitesPhaseAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesPhaseAmbiguityModifier_init_ },
            { Py_tp_getset, t_InterSatellitesPhaseAmbiguityModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesPhaseAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier),
            NULL
          };

          DEFINE_TYPE(InterSatellitesPhaseAmbiguityModifier, t_InterSatellitesPhaseAmbiguityModifier, InterSatellitesPhaseAmbiguityModifier);

          void t_InterSatellitesPhaseAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesPhaseAmbiguityModifier), &PY_TYPE_DEF(InterSatellitesPhaseAmbiguityModifier), module, "InterSatellitesPhaseAmbiguityModifier", 0);
          }

          void t_InterSatellitesPhaseAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseAmbiguityModifier), "class_", make_descriptor(InterSatellitesPhaseAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseAmbiguityModifier), "wrapfn_", make_descriptor(t_InterSatellitesPhaseAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesPhaseAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesPhaseAmbiguityModifier::wrap_Object(InterSatellitesPhaseAmbiguityModifier(((t_InterSatellitesPhaseAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesPhaseAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_InterSatellitesPhaseAmbiguityModifier_init_(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            InterSatellitesPhaseAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = InterSatellitesPhaseAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_getParametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modify(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modifyWithoutDerivatives(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_get__parametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self, void *data)
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
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarN.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarN::class$ = NULL;
          jmethodID *FieldCopolarN::mids$ = NULL;
          bool FieldCopolarN::live$ = false;

          jclass FieldCopolarN::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarN");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cn_613c8f46c659f636] = env->getMethodID(cls, "cn", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dn_613c8f46c659f636] = env->getMethodID(cls, "dn", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sn_613c8f46c659f636] = env->getMethodID(cls, "sn", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarN::cn() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_cn_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarN::dn() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dn_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarN::sn() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_sn_613c8f46c659f636]));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldCopolarN_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarN_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarN_of_(t_FieldCopolarN *self, PyObject *args);
          static PyObject *t_FieldCopolarN_cn(t_FieldCopolarN *self);
          static PyObject *t_FieldCopolarN_dn(t_FieldCopolarN *self);
          static PyObject *t_FieldCopolarN_sn(t_FieldCopolarN *self);
          static PyObject *t_FieldCopolarN_get__parameters_(t_FieldCopolarN *self, void *data);
          static PyGetSetDef t_FieldCopolarN__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarN, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarN__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarN, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarN, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarN, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarN, cn, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarN, dn, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarN, sn, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarN)[] = {
            { Py_tp_methods, t_FieldCopolarN__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarN__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarN)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarN, t_FieldCopolarN, FieldCopolarN);
          PyObject *t_FieldCopolarN::wrap_Object(const FieldCopolarN& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarN::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarN *self = (t_FieldCopolarN *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarN::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarN::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarN *self = (t_FieldCopolarN *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarN::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarN), &PY_TYPE_DEF(FieldCopolarN), module, "FieldCopolarN", 0);
          }

          void t_FieldCopolarN::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarN), "class_", make_descriptor(FieldCopolarN::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarN), "wrapfn_", make_descriptor(t_FieldCopolarN::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarN), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarN_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarN::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarN::wrap_Object(FieldCopolarN(((t_FieldCopolarN *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarN_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarN::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarN_of_(t_FieldCopolarN *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarN_cn(t_FieldCopolarN *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.cn());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarN_dn(t_FieldCopolarN *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.dn());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarN_sn(t_FieldCopolarN *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.sn());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarN_get__parameters_(t_FieldCopolarN *self, void *data)
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
#include "org/hipparchus/dfp/DfpDec.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpDec::class$ = NULL;
      jmethodID *DfpDec::mids$ = NULL;
      bool DfpDec::live$ = false;

      jclass DfpDec::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpDec");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9e05f0ac249e16a6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/dfp/Dfp;)V");
          mids$[mid_newInstance_dce9a968b1de6538] = env->getMethodID(cls, "newInstance", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_4cf97baa750c9172] = env->getMethodID(cls, "newInstance", "(Ljava/lang/String;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_f081bcbf4bd8f1ad] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_e45f329aeeedfd27] = env->getMethodID(cls, "newInstance", "(B)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_48c0a79cfaaf4ea7] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_8418d0fac935c091] = env->getMethodID(cls, "newInstance", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_521fd622f2a09126] = env->getMethodID(cls, "newInstance", "(J)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_7b144e66c7452202] = env->getMethodID(cls, "newInstance", "(BB)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_nextAfter_f081bcbf4bd8f1ad] = env->getMethodID(cls, "nextAfter", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getDecimalDigits_412668abc8d889e9] = env->getMethodID(cls, "getDecimalDigits", "()I");
          mids$[mid_round_0092017e99012694] = env->getMethodID(cls, "round", "(I)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DfpDec::DfpDec(const ::org::hipparchus::dfp::Dfp & a0) : ::org::hipparchus::dfp::Dfp(env->newObject(initializeClass, &mids$, mid_init$_9e05f0ac249e16a6, a0.this$)) {}

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_dce9a968b1de6538]));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_4cf97baa750c9172], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(const ::org::hipparchus::dfp::Dfp & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_f081bcbf4bd8f1ad], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jbyte a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_e45f329aeeedfd27], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jdouble a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_48c0a79cfaaf4ea7], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jint a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_8418d0fac935c091], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jlong a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_521fd622f2a09126], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jbyte a0, jbyte a1) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_7b144e66c7452202], a0, a1));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::nextAfter(const ::org::hipparchus::dfp::Dfp & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_nextAfter_f081bcbf4bd8f1ad], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_DfpDec_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpDec_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DfpDec_init_(t_DfpDec *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DfpDec_newInstance(t_DfpDec *self, PyObject *args);
      static PyObject *t_DfpDec_nextAfter(t_DfpDec *self, PyObject *args);

      static PyMethodDef t_DfpDec__methods_[] = {
        DECLARE_METHOD(t_DfpDec, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpDec, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpDec, newInstance, METH_VARARGS),
        DECLARE_METHOD(t_DfpDec, nextAfter, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpDec)[] = {
        { Py_tp_methods, t_DfpDec__methods_ },
        { Py_tp_init, (void *) t_DfpDec_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpDec)[] = {
        &PY_TYPE_DEF(::org::hipparchus::dfp::Dfp),
        NULL
      };

      DEFINE_TYPE(DfpDec, t_DfpDec, DfpDec);

      void t_DfpDec::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpDec), &PY_TYPE_DEF(DfpDec), module, "DfpDec", 0);
      }

      void t_DfpDec::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpDec), "class_", make_descriptor(DfpDec::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpDec), "wrapfn_", make_descriptor(t_DfpDec::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpDec), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DfpDec_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpDec::initializeClass, 1)))
          return NULL;
        return t_DfpDec::wrap_Object(DfpDec(((t_DfpDec *) arg)->object.this$));
      }
      static PyObject *t_DfpDec_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpDec::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DfpDec_init_(t_DfpDec *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        DfpDec object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          INT_CALL(object = DfpDec(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DfpDec_newInstance(t_DfpDec *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);
            OBJ_CALL(result = self->object.newInstance());
            return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "B", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jlong a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jbyte a0;
            jbyte a1;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = self->object.newInstance(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DfpDec), (PyObject *) self, "newInstance", args, 2);
      }

      static PyObject *t_DfpDec_nextAfter(t_DfpDec *self, PyObject *args)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.nextAfter(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DfpDec), (PyObject *) self, "nextAfter", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Region$Location::class$ = NULL;
        jmethodID *Region$Location::mids$ = NULL;
        bool Region$Location::live$ = false;
        Region$Location *Region$Location::BOUNDARY = NULL;
        Region$Location *Region$Location::INSIDE = NULL;
        Region$Location *Region$Location::OUTSIDE = NULL;

        jclass Region$Location::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Region$Location");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_8c1b6a5e8bd591cf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_values_8697941dc05008b3] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/partitioning/Region$Location;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BOUNDARY = new Region$Location(env->getStaticObjectField(cls, "BOUNDARY", "Lorg/hipparchus/geometry/partitioning/Region$Location;"));
            INSIDE = new Region$Location(env->getStaticObjectField(cls, "INSIDE", "Lorg/hipparchus/geometry/partitioning/Region$Location;"));
            OUTSIDE = new Region$Location(env->getStaticObjectField(cls, "OUTSIDE", "Lorg/hipparchus/geometry/partitioning/Region$Location;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Region$Location Region$Location::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Region$Location(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8c1b6a5e8bd591cf], a0.this$));
        }

        JArray< Region$Location > Region$Location::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Region$Location >(env->callStaticObjectMethod(cls, mids$[mid_values_8697941dc05008b3]));
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
        static PyObject *t_Region$Location_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region$Location_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region$Location_of_(t_Region$Location *self, PyObject *args);
        static PyObject *t_Region$Location_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Region$Location_values(PyTypeObject *type);
        static PyObject *t_Region$Location_get__parameters_(t_Region$Location *self, void *data);
        static PyGetSetDef t_Region$Location__fields_[] = {
          DECLARE_GET_FIELD(t_Region$Location, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Region$Location__methods_[] = {
          DECLARE_METHOD(t_Region$Location, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region$Location, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region$Location, of_, METH_VARARGS),
          DECLARE_METHOD(t_Region$Location, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Region$Location, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Region$Location)[] = {
          { Py_tp_methods, t_Region$Location__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Region$Location__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Region$Location)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Region$Location, t_Region$Location, Region$Location);
        PyObject *t_Region$Location::wrap_Object(const Region$Location& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region$Location::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region$Location *self = (t_Region$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Region$Location::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region$Location::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region$Location *self = (t_Region$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Region$Location::install(PyObject *module)
        {
          installType(&PY_TYPE(Region$Location), &PY_TYPE_DEF(Region$Location), module, "Region$Location", 0);
        }

        void t_Region$Location::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "class_", make_descriptor(Region$Location::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "wrapfn_", make_descriptor(t_Region$Location::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "boxfn_", make_descriptor(boxObject));
          env->getClass(Region$Location::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "BOUNDARY", make_descriptor(t_Region$Location::wrap_Object(*Region$Location::BOUNDARY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "INSIDE", make_descriptor(t_Region$Location::wrap_Object(*Region$Location::INSIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "OUTSIDE", make_descriptor(t_Region$Location::wrap_Object(*Region$Location::OUTSIDE)));
        }

        static PyObject *t_Region$Location_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Region$Location::initializeClass, 1)))
            return NULL;
          return t_Region$Location::wrap_Object(Region$Location(((t_Region$Location *) arg)->object.this$));
        }
        static PyObject *t_Region$Location_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Region$Location::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Region$Location_of_(t_Region$Location *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Region$Location_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Region$Location result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Region$Location::valueOf(a0));
            return t_Region$Location::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Region$Location_values(PyTypeObject *type)
        {
          JArray< Region$Location > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Region$Location::values());
          return JArray<jobject>(result.this$).wrap(t_Region$Location::wrap_jobject);
        }
        static PyObject *t_Region$Location_get__parameters_(t_Region$Location *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsNordsieckFieldTransformer::class$ = NULL;
        jmethodID *AdamsNordsieckFieldTransformer::mids$ = NULL;
        bool AdamsNordsieckFieldTransformer::live$ = false;

        jclass AdamsNordsieckFieldTransformer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_fdcef8516d85f185] = env->getStaticMethodID(cls, "getInstance", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer;");
            mids$[mid_initializeHighOrderDerivatives_688ff0660b77c6d1] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase1_9b7147116b9a105f] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_227b5b7fcf4fbdd6] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsNordsieckFieldTransformer AdamsNordsieckFieldTransformer::getInstance(const ::org::hipparchus::Field & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return AdamsNordsieckFieldTransformer(env->callStaticObjectMethod(cls, mids$[mid_getInstance_fdcef8516d85f185], a0.this$, a1));
        }

        ::org::hipparchus::linear::Array2DRowFieldMatrix AdamsNordsieckFieldTransformer::initializeHighOrderDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a2, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a3) const
        {
          return ::org::hipparchus::linear::Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_initializeHighOrderDerivatives_688ff0660b77c6d1], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::linear::Array2DRowFieldMatrix AdamsNordsieckFieldTransformer::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowFieldMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_9b7147116b9a105f], a0.this$));
        }

        void AdamsNordsieckFieldTransformer::updateHighOrderDerivativesPhase2(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::hipparchus::linear::Array2DRowFieldMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_227b5b7fcf4fbdd6], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsNordsieckFieldTransformer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckFieldTransformer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckFieldTransformer_of_(t_AdamsNordsieckFieldTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_getInstance(PyTypeObject *type, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckFieldTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckFieldTransformer *self, PyObject *arg);
        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckFieldTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_get__parameters_(t_AdamsNordsieckFieldTransformer *self, void *data);
        static PyGetSetDef t_AdamsNordsieckFieldTransformer__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsNordsieckFieldTransformer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsNordsieckFieldTransformer__methods_[] = {
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, getInstance, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, initializeHighOrderDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsNordsieckFieldTransformer)[] = {
          { Py_tp_methods, t_AdamsNordsieckFieldTransformer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AdamsNordsieckFieldTransformer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsNordsieckFieldTransformer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsNordsieckFieldTransformer, t_AdamsNordsieckFieldTransformer, AdamsNordsieckFieldTransformer);
        PyObject *t_AdamsNordsieckFieldTransformer::wrap_Object(const AdamsNordsieckFieldTransformer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsNordsieckFieldTransformer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsNordsieckFieldTransformer *self = (t_AdamsNordsieckFieldTransformer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsNordsieckFieldTransformer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsNordsieckFieldTransformer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsNordsieckFieldTransformer *self = (t_AdamsNordsieckFieldTransformer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsNordsieckFieldTransformer::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsNordsieckFieldTransformer), &PY_TYPE_DEF(AdamsNordsieckFieldTransformer), module, "AdamsNordsieckFieldTransformer", 0);
        }

        void t_AdamsNordsieckFieldTransformer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckFieldTransformer), "class_", make_descriptor(AdamsNordsieckFieldTransformer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckFieldTransformer), "wrapfn_", make_descriptor(t_AdamsNordsieckFieldTransformer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckFieldTransformer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsNordsieckFieldTransformer::initializeClass, 1)))
            return NULL;
          return t_AdamsNordsieckFieldTransformer::wrap_Object(AdamsNordsieckFieldTransformer(((t_AdamsNordsieckFieldTransformer *) arg)->object.this$));
        }
        static PyObject *t_AdamsNordsieckFieldTransformer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsNordsieckFieldTransformer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_of_(t_AdamsNordsieckFieldTransformer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_getInstance(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          AdamsNordsieckFieldTransformer result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::nonstiff::AdamsNordsieckFieldTransformer::getInstance(a0, a1));
            return t_AdamsNordsieckFieldTransformer::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getInstance", args);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckFieldTransformer *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a2((jobject) NULL);
          PyTypeObject **p2;
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::linear::Array2DRowFieldMatrix result((jobject) NULL);

          if (!parseArgs(args, "K[K[[K[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.initializeHighOrderDerivatives(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeHighOrderDerivatives", args);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckFieldTransformer *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowFieldMatrix a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::Array2DRowFieldMatrix result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckFieldTransformer *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::linear::Array2DRowFieldMatrix a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
        static PyObject *t_AdamsNordsieckFieldTransformer_get__parameters_(t_AdamsNordsieckFieldTransformer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDeterminationSensorKey::class$ = NULL;
              jmethodID *AttitudeDeterminationSensorKey::mids$ = NULL;
              bool AttitudeDeterminationSensorKey::live$ = false;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::NUMBER_SENSOR_NOISE_COVARIANCE = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_FREQUENCY = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_NOISE_STDDEV = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_NUMBER = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_USED = NULL;

              jclass AttitudeDeterminationSensorKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_089c84cee9ddbd83] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor;)Z");
                  mids$[mid_valueOf_583a3b7ad74d46fe] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;");
                  mids$[mid_values_7ca089d727fa48e4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  NUMBER_SENSOR_NOISE_COVARIANCE = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "NUMBER_SENSOR_NOISE_COVARIANCE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_FREQUENCY = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_FREQUENCY", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_NOISE_STDDEV = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_NOISE_STDDEV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_NUMBER = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_NUMBER", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_USED = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_USED", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeDeterminationSensorKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_089c84cee9ddbd83], a0.this$, a1.this$, a2.this$);
              }

              AttitudeDeterminationSensorKey AttitudeDeterminationSensorKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeDeterminationSensorKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_583a3b7ad74d46fe], a0.this$));
              }

              JArray< AttitudeDeterminationSensorKey > AttitudeDeterminationSensorKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeDeterminationSensorKey >(env->callStaticObjectMethod(cls, mids$[mid_values_7ca089d727fa48e4]));
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
              static PyObject *t_AttitudeDeterminationSensorKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensorKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensorKey_of_(t_AttitudeDeterminationSensorKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensorKey_process(t_AttitudeDeterminationSensorKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensorKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensorKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeDeterminationSensorKey_get__parameters_(t_AttitudeDeterminationSensorKey *self, void *data);
              static PyGetSetDef t_AttitudeDeterminationSensorKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeDeterminationSensorKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDeterminationSensorKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDeterminationSensorKey)[] = {
                { Py_tp_methods, t_AttitudeDeterminationSensorKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeDeterminationSensorKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDeterminationSensorKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeDeterminationSensorKey, t_AttitudeDeterminationSensorKey, AttitudeDeterminationSensorKey);
              PyObject *t_AttitudeDeterminationSensorKey::wrap_Object(const AttitudeDeterminationSensorKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationSensorKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationSensorKey *self = (t_AttitudeDeterminationSensorKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeDeterminationSensorKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationSensorKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationSensorKey *self = (t_AttitudeDeterminationSensorKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeDeterminationSensorKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDeterminationSensorKey), &PY_TYPE_DEF(AttitudeDeterminationSensorKey), module, "AttitudeDeterminationSensorKey", 0);
              }

              void t_AttitudeDeterminationSensorKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "class_", make_descriptor(AttitudeDeterminationSensorKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "wrapfn_", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeDeterminationSensorKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "NUMBER_SENSOR_NOISE_COVARIANCE", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::NUMBER_SENSOR_NOISE_COVARIANCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_FREQUENCY", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_FREQUENCY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_NOISE_STDDEV", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_NOISE_STDDEV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_NUMBER", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_NUMBER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_USED", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_USED)));
              }

              static PyObject *t_AttitudeDeterminationSensorKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDeterminationSensorKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDeterminationSensorKey::wrap_Object(AttitudeDeterminationSensorKey(((t_AttitudeDeterminationSensorKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDeterminationSensorKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDeterminationSensorKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeDeterminationSensorKey_of_(t_AttitudeDeterminationSensorKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeDeterminationSensorKey_process(t_AttitudeDeterminationSensorKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensorKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeDeterminationSensorKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensorKey::valueOf(a0));
                  return t_AttitudeDeterminationSensorKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeDeterminationSensorKey_values(PyTypeObject *type)
              {
                JArray< AttitudeDeterminationSensorKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensorKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeDeterminationSensorKey::wrap_jobject);
              }
              static PyObject *t_AttitudeDeterminationSensorKey_get__parameters_(t_AttitudeDeterminationSensorKey *self, void *data)
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
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *WeightedObservedPoint::class$ = NULL;
      jmethodID *WeightedObservedPoint::mids$ = NULL;
      bool WeightedObservedPoint::live$ = false;

      jclass WeightedObservedPoint::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/WeightedObservedPoint");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
          mids$[mid_getWeight_557b8123390d8d0c] = env->getMethodID(cls, "getWeight", "()D");
          mids$[mid_getX_557b8123390d8d0c] = env->getMethodID(cls, "getX", "()D");
          mids$[mid_getY_557b8123390d8d0c] = env->getMethodID(cls, "getY", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      WeightedObservedPoint::WeightedObservedPoint(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

      jdouble WeightedObservedPoint::getWeight() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getWeight_557b8123390d8d0c]);
      }

      jdouble WeightedObservedPoint::getX() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getX_557b8123390d8d0c]);
      }

      jdouble WeightedObservedPoint::getY() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getY_557b8123390d8d0c]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_WeightedObservedPoint_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WeightedObservedPoint_instance_(PyTypeObject *type, PyObject *arg);
      static int t_WeightedObservedPoint_init_(t_WeightedObservedPoint *self, PyObject *args, PyObject *kwds);
      static PyObject *t_WeightedObservedPoint_getWeight(t_WeightedObservedPoint *self);
      static PyObject *t_WeightedObservedPoint_getX(t_WeightedObservedPoint *self);
      static PyObject *t_WeightedObservedPoint_getY(t_WeightedObservedPoint *self);
      static PyObject *t_WeightedObservedPoint_get__weight(t_WeightedObservedPoint *self, void *data);
      static PyObject *t_WeightedObservedPoint_get__x(t_WeightedObservedPoint *self, void *data);
      static PyObject *t_WeightedObservedPoint_get__y(t_WeightedObservedPoint *self, void *data);
      static PyGetSetDef t_WeightedObservedPoint__fields_[] = {
        DECLARE_GET_FIELD(t_WeightedObservedPoint, weight),
        DECLARE_GET_FIELD(t_WeightedObservedPoint, x),
        DECLARE_GET_FIELD(t_WeightedObservedPoint, y),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_WeightedObservedPoint__methods_[] = {
        DECLARE_METHOD(t_WeightedObservedPoint, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoint, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoint, getWeight, METH_NOARGS),
        DECLARE_METHOD(t_WeightedObservedPoint, getX, METH_NOARGS),
        DECLARE_METHOD(t_WeightedObservedPoint, getY, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WeightedObservedPoint)[] = {
        { Py_tp_methods, t_WeightedObservedPoint__methods_ },
        { Py_tp_init, (void *) t_WeightedObservedPoint_init_ },
        { Py_tp_getset, t_WeightedObservedPoint__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WeightedObservedPoint)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WeightedObservedPoint, t_WeightedObservedPoint, WeightedObservedPoint);

      void t_WeightedObservedPoint::install(PyObject *module)
      {
        installType(&PY_TYPE(WeightedObservedPoint), &PY_TYPE_DEF(WeightedObservedPoint), module, "WeightedObservedPoint", 0);
      }

      void t_WeightedObservedPoint::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoint), "class_", make_descriptor(WeightedObservedPoint::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoint), "wrapfn_", make_descriptor(t_WeightedObservedPoint::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoint), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WeightedObservedPoint_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WeightedObservedPoint::initializeClass, 1)))
          return NULL;
        return t_WeightedObservedPoint::wrap_Object(WeightedObservedPoint(((t_WeightedObservedPoint *) arg)->object.this$));
      }
      static PyObject *t_WeightedObservedPoint_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WeightedObservedPoint::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_WeightedObservedPoint_init_(t_WeightedObservedPoint *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        WeightedObservedPoint object((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          INT_CALL(object = WeightedObservedPoint(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_WeightedObservedPoint_getWeight(t_WeightedObservedPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getWeight());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_WeightedObservedPoint_getX(t_WeightedObservedPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getX());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_WeightedObservedPoint_getY(t_WeightedObservedPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getY());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_WeightedObservedPoint_get__weight(t_WeightedObservedPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getWeight());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_WeightedObservedPoint_get__x(t_WeightedObservedPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getX());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_WeightedObservedPoint_get__y(t_WeightedObservedPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getY());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *MultivariateFunction::class$ = NULL;
      jmethodID *MultivariateFunction::mids$ = NULL;
      bool MultivariateFunction::live$ = false;

      jclass MultivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/MultivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_86c4a0582e0747ce] = env->getMethodID(cls, "value", "([D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultivariateFunction::value(const JArray< jdouble > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_86c4a0582e0747ce], a0.this$);
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
      static PyObject *t_MultivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateFunction_value(t_MultivariateFunction *self, PyObject *arg);

      static PyMethodDef t_MultivariateFunction__methods_[] = {
        DECLARE_METHOD(t_MultivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateFunction)[] = {
        { Py_tp_methods, t_MultivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateFunction, t_MultivariateFunction, MultivariateFunction);

      void t_MultivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateFunction), &PY_TYPE_DEF(MultivariateFunction), module, "MultivariateFunction", 0);
      }

      void t_MultivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunction), "class_", make_descriptor(MultivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunction), "wrapfn_", make_descriptor(t_MultivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateFunction::initializeClass, 1)))
          return NULL;
        return t_MultivariateFunction::wrap_Object(MultivariateFunction(((t_MultivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_MultivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateFunction_value(t_MultivariateFunction *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[D", &a0))
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectInputStream.h"
#include "java/io/IOException.h"
#include "java/io/NotActiveException.h"
#include "java/io/ObjectInput.h"
#include "java/io/ObjectStreamConstants.h"
#include "java/lang/Class.h"
#include "java/io/InvalidObjectException.h"
#include "java/lang/Object.h"
#include "java/io/ObjectInputStream$GetField.h"
#include "java/io/ObjectInputFilter.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/String.h"
#include "java/io/ObjectInputValidation.h"
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
        mids$[mid_init$_115bc9fcd812647a] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;)V");
        mids$[mid_available_412668abc8d889e9] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_defaultReadObject_0640e6acf969ed28] = env->getMethodID(cls, "defaultReadObject", "()V");
        mids$[mid_getObjectInputFilter_52a6f61e5e2e9089] = env->getMethodID(cls, "getObjectInputFilter", "()Ljava/io/ObjectInputFilter;");
        mids$[mid_read_412668abc8d889e9] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_68a76742c8623fb3] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_readBoolean_89b302893bdbe1f1] = env->getMethodID(cls, "readBoolean", "()Z");
        mids$[mid_readByte_acadfed42a0dbd0d] = env->getMethodID(cls, "readByte", "()B");
        mids$[mid_readChar_d156d1ce330f6993] = env->getMethodID(cls, "readChar", "()C");
        mids$[mid_readDouble_557b8123390d8d0c] = env->getMethodID(cls, "readDouble", "()D");
        mids$[mid_readFields_4d60be7021bb9f1f] = env->getMethodID(cls, "readFields", "()Ljava/io/ObjectInputStream$GetField;");
        mids$[mid_readFloat_04fe014f7609dc26] = env->getMethodID(cls, "readFloat", "()F");
        mids$[mid_readFully_d759c70c6670fd89] = env->getMethodID(cls, "readFully", "([B)V");
        mids$[mid_readFully_ac782c7077255dd3] = env->getMethodID(cls, "readFully", "([BII)V");
        mids$[mid_readInt_412668abc8d889e9] = env->getMethodID(cls, "readInt", "()I");
        mids$[mid_readLine_3cffd47377eca18a] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_readLong_9e26256fb0d384a2] = env->getMethodID(cls, "readLong", "()J");
        mids$[mid_readObject_e661fe3ba2fafb22] = env->getMethodID(cls, "readObject", "()Ljava/lang/Object;");
        mids$[mid_readShort_2554afc868a7ba2a] = env->getMethodID(cls, "readShort", "()S");
        mids$[mid_readUTF_3cffd47377eca18a] = env->getMethodID(cls, "readUTF", "()Ljava/lang/String;");
        mids$[mid_readUnshared_e661fe3ba2fafb22] = env->getMethodID(cls, "readUnshared", "()Ljava/lang/Object;");
        mids$[mid_readUnsignedByte_412668abc8d889e9] = env->getMethodID(cls, "readUnsignedByte", "()I");
        mids$[mid_readUnsignedShort_412668abc8d889e9] = env->getMethodID(cls, "readUnsignedShort", "()I");
        mids$[mid_registerValidation_46282bcb819f3db9] = env->getMethodID(cls, "registerValidation", "(Ljava/io/ObjectInputValidation;I)V");
        mids$[mid_setObjectInputFilter_a500a234e3f7d2c7] = env->getMethodID(cls, "setObjectInputFilter", "(Ljava/io/ObjectInputFilter;)V");
        mids$[mid_skipBytes_0092017e99012694] = env->getMethodID(cls, "skipBytes", "(I)I");
        mids$[mid_readStreamHeader_0640e6acf969ed28] = env->getMethodID(cls, "readStreamHeader", "()V");
        mids$[mid_readObjectOverride_e661fe3ba2fafb22] = env->getMethodID(cls, "readObjectOverride", "()Ljava/lang/Object;");
        mids$[mid_resolveProxyClass_93cb68fcd376ba98] = env->getMethodID(cls, "resolveProxyClass", "([Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_resolveObject_65d69db95c5eb156] = env->getMethodID(cls, "resolveObject", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_enableResolveObject_bc7235a51f399397] = env->getMethodID(cls, "enableResolveObject", "(Z)Z");
        mids$[mid_readClassDescriptor_dbbdc211e0cefa39] = env->getMethodID(cls, "readClassDescriptor", "()Ljava/io/ObjectStreamClass;");
        mids$[mid_resolveClass_609cac601951abfb] = env->getMethodID(cls, "resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectInputStream::ObjectInputStream(const ::java::io::InputStream & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_115bc9fcd812647a, a0.this$)) {}

    jint ObjectInputStream::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_412668abc8d889e9]);
    }

    void ObjectInputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    void ObjectInputStream::defaultReadObject() const
    {
      env->callVoidMethod(this$, mids$[mid_defaultReadObject_0640e6acf969ed28]);
    }

    ::java::io::ObjectInputFilter ObjectInputStream::getObjectInputFilter() const
    {
      return ::java::io::ObjectInputFilter(env->callObjectMethod(this$, mids$[mid_getObjectInputFilter_52a6f61e5e2e9089]));
    }

    jint ObjectInputStream::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_412668abc8d889e9]);
    }

    jint ObjectInputStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_68a76742c8623fb3], a0.this$, a1, a2);
    }

    jboolean ObjectInputStream::readBoolean() const
    {
      return env->callBooleanMethod(this$, mids$[mid_readBoolean_89b302893bdbe1f1]);
    }

    jbyte ObjectInputStream::readByte() const
    {
      return env->callByteMethod(this$, mids$[mid_readByte_acadfed42a0dbd0d]);
    }

    jchar ObjectInputStream::readChar() const
    {
      return env->callCharMethod(this$, mids$[mid_readChar_d156d1ce330f6993]);
    }

    jdouble ObjectInputStream::readDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_readDouble_557b8123390d8d0c]);
    }

    ::java::io::ObjectInputStream$GetField ObjectInputStream::readFields() const
    {
      return ::java::io::ObjectInputStream$GetField(env->callObjectMethod(this$, mids$[mid_readFields_4d60be7021bb9f1f]));
    }

    jfloat ObjectInputStream::readFloat() const
    {
      return env->callFloatMethod(this$, mids$[mid_readFloat_04fe014f7609dc26]);
    }

    void ObjectInputStream::readFully(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_d759c70c6670fd89], a0.this$);
    }

    void ObjectInputStream::readFully(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_readFully_ac782c7077255dd3], a0.this$, a1, a2);
    }

    jint ObjectInputStream::readInt() const
    {
      return env->callIntMethod(this$, mids$[mid_readInt_412668abc8d889e9]);
    }

    ::java::lang::String ObjectInputStream::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_3cffd47377eca18a]));
    }

    jlong ObjectInputStream::readLong() const
    {
      return env->callLongMethod(this$, mids$[mid_readLong_9e26256fb0d384a2]);
    }

    ::java::lang::Object ObjectInputStream::readObject() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_readObject_e661fe3ba2fafb22]));
    }

    jshort ObjectInputStream::readShort() const
    {
      return env->callShortMethod(this$, mids$[mid_readShort_2554afc868a7ba2a]);
    }

    ::java::lang::String ObjectInputStream::readUTF() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readUTF_3cffd47377eca18a]));
    }

    ::java::lang::Object ObjectInputStream::readUnshared() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_readUnshared_e661fe3ba2fafb22]));
    }

    jint ObjectInputStream::readUnsignedByte() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedByte_412668abc8d889e9]);
    }

    jint ObjectInputStream::readUnsignedShort() const
    {
      return env->callIntMethod(this$, mids$[mid_readUnsignedShort_412668abc8d889e9]);
    }

    void ObjectInputStream::registerValidation(const ::java::io::ObjectInputValidation & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_registerValidation_46282bcb819f3db9], a0.this$, a1);
    }

    void ObjectInputStream::setObjectInputFilter(const ::java::io::ObjectInputFilter & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setObjectInputFilter_a500a234e3f7d2c7], a0.this$);
    }

    jint ObjectInputStream::skipBytes(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_skipBytes_0092017e99012694], a0);
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
#include "org/orekit/estimation/measurements/gnss/PythonIntegerLeastSquareSolver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_solveILS_1580c6ee6b7d56ce] = env->getMethodID(cls, "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIntegerLeastSquareSolver::PythonIntegerLeastSquareSolver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonIntegerLeastSquareSolver::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonIntegerLeastSquareSolver::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonIntegerLeastSquareSolver::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntegerLeastSquareSolver::mids$[PythonIntegerLeastSquareSolver::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIntegerLeastSquareSolver::mids$[PythonIntegerLeastSquareSolver::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonIntegerLeastSquareSolver_solveILS1(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntegerLeastSquareSolver::mids$[PythonIntegerLeastSquareSolver::mid_pythonExtension_9e26256fb0d384a2]);
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1240.h"
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

              ::java::lang::Class *Rtcm1240::class$ = NULL;
              jmethodID *Rtcm1240::mids$ = NULL;
              bool Rtcm1240::live$ = false;

              jclass Rtcm1240::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1240");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e429337ce34e6c7c] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1240::Rtcm1240(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_e429337ce34e6c7c, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1240_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1240_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1240_of_(t_Rtcm1240 *self, PyObject *args);
              static int t_Rtcm1240_init_(t_Rtcm1240 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1240_get__parameters_(t_Rtcm1240 *self, void *data);
              static PyGetSetDef t_Rtcm1240__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1240, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1240__methods_[] = {
                DECLARE_METHOD(t_Rtcm1240, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1240, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1240, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1240)[] = {
                { Py_tp_methods, t_Rtcm1240__methods_ },
                { Py_tp_init, (void *) t_Rtcm1240_init_ },
                { Py_tp_getset, t_Rtcm1240__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1240)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1240, t_Rtcm1240, Rtcm1240);
              PyObject *t_Rtcm1240::wrap_Object(const Rtcm1240& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1240::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1240 *self = (t_Rtcm1240 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1240::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1240::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1240 *self = (t_Rtcm1240 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1240::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1240), &PY_TYPE_DEF(Rtcm1240), module, "Rtcm1240", 0);
              }

              void t_Rtcm1240::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1240), "class_", make_descriptor(Rtcm1240::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1240), "wrapfn_", make_descriptor(t_Rtcm1240::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1240), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1240_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1240::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1240::wrap_Object(Rtcm1240(((t_Rtcm1240 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1240_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1240::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1240_of_(t_Rtcm1240 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1240_init_(t_Rtcm1240 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1240 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1240(a0, a1, a2));
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
              static PyObject *t_Rtcm1240_get__parameters_(t_Rtcm1240 *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *RangeUnits::class$ = NULL;
            jmethodID *RangeUnits::mids$ = NULL;
            bool RangeUnits::live$ = false;
            RangeUnits *RangeUnits::RU = NULL;
            RangeUnits *RangeUnits::km = NULL;
            RangeUnits *RangeUnits::s = NULL;

            jclass RangeUnits::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/RangeUnits");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_4c7cc8df198ddf6b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;");
                mids$[mid_values_330e0605ebb61bd3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                RU = new RangeUnits(env->getStaticObjectField(cls, "RU", "Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;"));
                km = new RangeUnits(env->getStaticObjectField(cls, "km", "Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;"));
                s = new RangeUnits(env->getStaticObjectField(cls, "s", "Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RangeUnits RangeUnits::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return RangeUnits(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4c7cc8df198ddf6b], a0.this$));
            }

            JArray< RangeUnits > RangeUnits::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< RangeUnits >(env->callStaticObjectMethod(cls, mids$[mid_values_330e0605ebb61bd3]));
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
            static PyObject *t_RangeUnits_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnits_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnits_of_(t_RangeUnits *self, PyObject *args);
            static PyObject *t_RangeUnits_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_RangeUnits_values(PyTypeObject *type);
            static PyObject *t_RangeUnits_get__parameters_(t_RangeUnits *self, void *data);
            static PyGetSetDef t_RangeUnits__fields_[] = {
              DECLARE_GET_FIELD(t_RangeUnits, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RangeUnits__methods_[] = {
              DECLARE_METHOD(t_RangeUnits, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnits, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnits, of_, METH_VARARGS),
              DECLARE_METHOD(t_RangeUnits, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RangeUnits, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RangeUnits)[] = {
              { Py_tp_methods, t_RangeUnits__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_RangeUnits__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RangeUnits)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(RangeUnits, t_RangeUnits, RangeUnits);
            PyObject *t_RangeUnits::wrap_Object(const RangeUnits& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeUnits::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeUnits *self = (t_RangeUnits *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RangeUnits::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeUnits::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeUnits *self = (t_RangeUnits *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RangeUnits::install(PyObject *module)
            {
              installType(&PY_TYPE(RangeUnits), &PY_TYPE_DEF(RangeUnits), module, "RangeUnits", 0);
            }

            void t_RangeUnits::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "class_", make_descriptor(RangeUnits::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "wrapfn_", make_descriptor(t_RangeUnits::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "boxfn_", make_descriptor(boxObject));
              env->getClass(RangeUnits::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "RU", make_descriptor(t_RangeUnits::wrap_Object(*RangeUnits::RU)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "km", make_descriptor(t_RangeUnits::wrap_Object(*RangeUnits::km)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "s", make_descriptor(t_RangeUnits::wrap_Object(*RangeUnits::s)));
            }

            static PyObject *t_RangeUnits_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RangeUnits::initializeClass, 1)))
                return NULL;
              return t_RangeUnits::wrap_Object(RangeUnits(((t_RangeUnits *) arg)->object.this$));
            }
            static PyObject *t_RangeUnits_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RangeUnits::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RangeUnits_of_(t_RangeUnits *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_RangeUnits_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              RangeUnits result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::valueOf(a0));
                return t_RangeUnits::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_RangeUnits_values(PyTypeObject *type)
            {
              JArray< RangeUnits > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::values());
              return JArray<jobject>(result.this$).wrap(t_RangeUnits::wrap_jobject);
            }
            static PyObject *t_RangeUnits_get__parameters_(t_RangeUnits *self, void *data)
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
#include "org/orekit/propagation/conversion/ClassicalRungeKuttaIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ClassicalRungeKuttaIntegratorBuilder::class$ = NULL;
        jmethodID *ClassicalRungeKuttaIntegratorBuilder::mids$ = NULL;
        bool ClassicalRungeKuttaIntegratorBuilder::live$ = false;

        jclass ClassicalRungeKuttaIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ClassicalRungeKuttaIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_f50d555477b898d8] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaIntegratorBuilder::ClassicalRungeKuttaIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator ClassicalRungeKuttaIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_f50d555477b898d8], a0.this$, a1.this$));
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
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ClassicalRungeKuttaIntegratorBuilder_init_(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_ClassicalRungeKuttaIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaIntegratorBuilder)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaIntegratorBuilder, t_ClassicalRungeKuttaIntegratorBuilder, ClassicalRungeKuttaIntegratorBuilder);

        void t_ClassicalRungeKuttaIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), &PY_TYPE_DEF(ClassicalRungeKuttaIntegratorBuilder), module, "ClassicalRungeKuttaIntegratorBuilder", 0);
        }

        void t_ClassicalRungeKuttaIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), "class_", make_descriptor(ClassicalRungeKuttaIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaIntegratorBuilder::wrap_Object(ClassicalRungeKuttaIntegratorBuilder(((t_ClassicalRungeKuttaIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ClassicalRungeKuttaIntegratorBuilder_init_(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ClassicalRungeKuttaIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ClassicalRungeKuttaIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/common/PhaseBias.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm06Data::class$ = NULL;
              jmethodID *SsrIgm06Data::mids$ = NULL;
              bool SsrIgm06Data::live$ = false;

              jclass SsrIgm06Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addPhaseBias_6aaab491eca22f6c] = env->getMethodID(cls, "addPhaseBias", "(Lorg/orekit/gnss/metric/messages/common/PhaseBias;)V");
                  mids$[mid_getNumberOfBiasesProcessed_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfBiasesProcessed", "()I");
                  mids$[mid_getPhaseBias_7cfe504a3d90d1f0] = env->getMethodID(cls, "getPhaseBias", "(I)Lorg/orekit/gnss/metric/messages/common/PhaseBias;");
                  mids$[mid_getPhaseBiases_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getPhaseBiases", "()Ljava/util/Map;");
                  mids$[mid_getYawAngle_557b8123390d8d0c] = env->getMethodID(cls, "getYawAngle", "()D");
                  mids$[mid_getYawRate_557b8123390d8d0c] = env->getMethodID(cls, "getYawRate", "()D");
                  mids$[mid_setNumberOfBiasesProcessed_a3da1a935cb37f7b] = env->getMethodID(cls, "setNumberOfBiasesProcessed", "(I)V");
                  mids$[mid_setYawAngle_10f281d777284cea] = env->getMethodID(cls, "setYawAngle", "(D)V");
                  mids$[mid_setYawRate_10f281d777284cea] = env->getMethodID(cls, "setYawRate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm06Data::SsrIgm06Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              void SsrIgm06Data::addPhaseBias(const ::org::orekit::gnss::metric::messages::common::PhaseBias & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addPhaseBias_6aaab491eca22f6c], a0.this$);
              }

              jint SsrIgm06Data::getNumberOfBiasesProcessed() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfBiasesProcessed_412668abc8d889e9]);
              }

              ::org::orekit::gnss::metric::messages::common::PhaseBias SsrIgm06Data::getPhaseBias(jint a0) const
              {
                return ::org::orekit::gnss::metric::messages::common::PhaseBias(env->callObjectMethod(this$, mids$[mid_getPhaseBias_7cfe504a3d90d1f0], a0));
              }

              ::java::util::Map SsrIgm06Data::getPhaseBiases() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getPhaseBiases_1e62c2f73fbdd1c4]));
              }

              jdouble SsrIgm06Data::getYawAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getYawAngle_557b8123390d8d0c]);
              }

              jdouble SsrIgm06Data::getYawRate() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getYawRate_557b8123390d8d0c]);
              }

              void SsrIgm06Data::setNumberOfBiasesProcessed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfBiasesProcessed_a3da1a935cb37f7b], a0);
              }

              void SsrIgm06Data::setYawAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setYawAngle_10f281d777284cea], a0);
              }

              void SsrIgm06Data::setYawRate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setYawRate_10f281d777284cea], a0);
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
              static PyObject *t_SsrIgm06Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm06Data_init_(t_SsrIgm06Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm06Data_addPhaseBias(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_getNumberOfBiasesProcessed(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_getPhaseBias(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_getPhaseBiases(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_getYawAngle(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_getYawRate(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_setNumberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_setYawAngle(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_setYawRate(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_get__numberOfBiasesProcessed(t_SsrIgm06Data *self, void *data);
              static int t_SsrIgm06Data_set__numberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm06Data_get__phaseBiases(t_SsrIgm06Data *self, void *data);
              static PyObject *t_SsrIgm06Data_get__yawAngle(t_SsrIgm06Data *self, void *data);
              static int t_SsrIgm06Data_set__yawAngle(t_SsrIgm06Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm06Data_get__yawRate(t_SsrIgm06Data *self, void *data);
              static int t_SsrIgm06Data_set__yawRate(t_SsrIgm06Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm06Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm06Data, numberOfBiasesProcessed),
                DECLARE_GET_FIELD(t_SsrIgm06Data, phaseBiases),
                DECLARE_GETSET_FIELD(t_SsrIgm06Data, yawAngle),
                DECLARE_GETSET_FIELD(t_SsrIgm06Data, yawRate),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm06Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm06Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Data, addPhaseBias, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, getNumberOfBiasesProcessed, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, getPhaseBias, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, getPhaseBiases, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, getYawAngle, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, getYawRate, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, setNumberOfBiasesProcessed, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, setYawAngle, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, setYawRate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm06Data)[] = {
                { Py_tp_methods, t_SsrIgm06Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm06Data_init_ },
                { Py_tp_getset, t_SsrIgm06Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm06Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm06Data, t_SsrIgm06Data, SsrIgm06Data);

              void t_SsrIgm06Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm06Data), &PY_TYPE_DEF(SsrIgm06Data), module, "SsrIgm06Data", 0);
              }

              void t_SsrIgm06Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Data), "class_", make_descriptor(SsrIgm06Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Data), "wrapfn_", make_descriptor(t_SsrIgm06Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm06Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm06Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm06Data::wrap_Object(SsrIgm06Data(((t_SsrIgm06Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm06Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm06Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm06Data_init_(t_SsrIgm06Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm06Data object((jobject) NULL);

                INT_CALL(object = SsrIgm06Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm06Data_addPhaseBias(t_SsrIgm06Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::PhaseBias a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::PhaseBias::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addPhaseBias(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addPhaseBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_getNumberOfBiasesProcessed(t_SsrIgm06Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm06Data_getPhaseBias(t_SsrIgm06Data *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::common::PhaseBias result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getPhaseBias(a0));
                  return ::org::orekit::gnss::metric::messages::common::t_PhaseBias::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getPhaseBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_getPhaseBiases(t_SsrIgm06Data *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getPhaseBiases());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::org::orekit::gnss::metric::messages::common::PY_TYPE(PhaseBias));
              }

              static PyObject *t_SsrIgm06Data_getYawAngle(t_SsrIgm06Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getYawAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm06Data_getYawRate(t_SsrIgm06Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getYawRate());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm06Data_setNumberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfBiasesProcessed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfBiasesProcessed", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_setYawAngle(t_SsrIgm06Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setYawAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setYawAngle", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_setYawRate(t_SsrIgm06Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setYawRate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setYawRate", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_get__numberOfBiasesProcessed(t_SsrIgm06Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm06Data_set__numberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfBiasesProcessed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfBiasesProcessed", arg);
                return -1;
              }

              static PyObject *t_SsrIgm06Data_get__phaseBiases(t_SsrIgm06Data *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getPhaseBiases());
                return ::java::util::t_Map::wrap_Object(value);
              }

              static PyObject *t_SsrIgm06Data_get__yawAngle(t_SsrIgm06Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getYawAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm06Data_set__yawAngle(t_SsrIgm06Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setYawAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "yawAngle", arg);
                return -1;
              }

              static PyObject *t_SsrIgm06Data_get__yawRate(t_SsrIgm06Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getYawRate());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm06Data_set__yawRate(t_SsrIgm06Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setYawRate(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "yawRate", arg);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovariance.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeStamped.h"
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
                  mids$[mid_init$_ab6484d50474cac0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;I)V");
                  mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_getType_ada74ce902d29422] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitCovariance::OrbitCovariance(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< ::java::lang::String > & a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab6484d50474cac0, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::time::AbsoluteDate OrbitCovariance::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
              }

              ::org::hipparchus::linear::RealMatrix OrbitCovariance::getMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_70a207fcbc031df2]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType OrbitCovariance::getType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getType_ada74ce902d29422]));
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
#include "org/orekit/files/ilrs/StreamingCpfWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$Segment.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *StreamingCpfWriter::class$ = NULL;
        jmethodID *StreamingCpfWriter::mids$ = NULL;
        bool StreamingCpfWriter::live$ = false;

        jclass StreamingCpfWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/StreamingCpfWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0b01e2d82f1bd25d] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Lorg/orekit/time/TimeScale;Lorg/orekit/files/ilrs/CPFHeader;)V");
            mids$[mid_init$_5252d75ab5d69603] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Lorg/orekit/time/TimeScale;Lorg/orekit/files/ilrs/CPFHeader;Z)V");
            mids$[mid_newSegment_d79b215bb1140a6d] = env->getMethodID(cls, "newSegment", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ilrs/StreamingCpfWriter$Segment;");
            mids$[mid_writeEndOfFile_0640e6acf969ed28] = env->getMethodID(cls, "writeEndOfFile", "()V");
            mids$[mid_writeHeader_0640e6acf969ed28] = env->getMethodID(cls, "writeHeader", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StreamingCpfWriter::StreamingCpfWriter(const ::java::lang::Appendable & a0, const ::org::orekit::time::TimeScale & a1, const ::org::orekit::files::ilrs::CPFHeader & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0b01e2d82f1bd25d, a0.this$, a1.this$, a2.this$)) {}

        StreamingCpfWriter::StreamingCpfWriter(const ::java::lang::Appendable & a0, const ::org::orekit::time::TimeScale & a1, const ::org::orekit::files::ilrs::CPFHeader & a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5252d75ab5d69603, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::orekit::files::ilrs::StreamingCpfWriter$Segment StreamingCpfWriter::newSegment(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::orekit::files::ilrs::StreamingCpfWriter$Segment(env->callObjectMethod(this$, mids$[mid_newSegment_d79b215bb1140a6d], a0.this$));
        }

        void StreamingCpfWriter::writeEndOfFile() const
        {
          env->callVoidMethod(this$, mids$[mid_writeEndOfFile_0640e6acf969ed28]);
        }

        void StreamingCpfWriter::writeHeader() const
        {
          env->callVoidMethod(this$, mids$[mid_writeHeader_0640e6acf969ed28]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_StreamingCpfWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StreamingCpfWriter_init_(t_StreamingCpfWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StreamingCpfWriter_newSegment(t_StreamingCpfWriter *self, PyObject *arg);
        static PyObject *t_StreamingCpfWriter_writeEndOfFile(t_StreamingCpfWriter *self);
        static PyObject *t_StreamingCpfWriter_writeHeader(t_StreamingCpfWriter *self);

        static PyMethodDef t_StreamingCpfWriter__methods_[] = {
          DECLARE_METHOD(t_StreamingCpfWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter, newSegment, METH_O),
          DECLARE_METHOD(t_StreamingCpfWriter, writeEndOfFile, METH_NOARGS),
          DECLARE_METHOD(t_StreamingCpfWriter, writeHeader, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingCpfWriter)[] = {
          { Py_tp_methods, t_StreamingCpfWriter__methods_ },
          { Py_tp_init, (void *) t_StreamingCpfWriter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingCpfWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingCpfWriter, t_StreamingCpfWriter, StreamingCpfWriter);

        void t_StreamingCpfWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingCpfWriter), &PY_TYPE_DEF(StreamingCpfWriter), module, "StreamingCpfWriter", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "HeaderLineWriter", make_descriptor(&PY_TYPE_DEF(StreamingCpfWriter$HeaderLineWriter)));
        }

        void t_StreamingCpfWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "class_", make_descriptor(StreamingCpfWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "wrapfn_", make_descriptor(t_StreamingCpfWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingCpfWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingCpfWriter::initializeClass, 1)))
            return NULL;
          return t_StreamingCpfWriter::wrap_Object(StreamingCpfWriter(((t_StreamingCpfWriter *) arg)->object.this$));
        }
        static PyObject *t_StreamingCpfWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingCpfWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StreamingCpfWriter_init_(t_StreamingCpfWriter *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              ::org::orekit::files::ilrs::CPFHeader a2((jobject) NULL);
              StreamingCpfWriter object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::files::ilrs::CPFHeader::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = StreamingCpfWriter(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              ::org::orekit::files::ilrs::CPFHeader a2((jobject) NULL);
              jboolean a3;
              StreamingCpfWriter object((jobject) NULL);

              if (!parseArgs(args, "kkkZ", ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::files::ilrs::CPFHeader::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StreamingCpfWriter(a0, a1, a2, a3));
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

        static PyObject *t_StreamingCpfWriter_newSegment(t_StreamingCpfWriter *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::files::ilrs::StreamingCpfWriter$Segment result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.newSegment(a0));
            return ::org::orekit::files::ilrs::t_StreamingCpfWriter$Segment::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newSegment", arg);
          return NULL;
        }

        static PyObject *t_StreamingCpfWriter_writeEndOfFile(t_StreamingCpfWriter *self)
        {
          OBJ_CALL(self->object.writeEndOfFile());
          Py_RETURN_NONE;
        }

        static PyObject *t_StreamingCpfWriter_writeHeader(t_StreamingCpfWriter *self)
        {
          OBJ_CALL(self->object.writeHeader());
          Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/StepFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *StepFunction::class$ = NULL;
        jmethodID *StepFunction::mids$ = NULL;
        bool StepFunction::live$ = false;

        jclass StepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/StepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab4840ba016ef1da] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepFunction::StepFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab4840ba016ef1da, a0.this$, a1.this$)) {}

        jdouble StepFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
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
        static PyObject *t_StepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepFunction_init_(t_StepFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepFunction_value(t_StepFunction *self, PyObject *arg);

        static PyMethodDef t_StepFunction__methods_[] = {
          DECLARE_METHOD(t_StepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepFunction, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepFunction)[] = {
          { Py_tp_methods, t_StepFunction__methods_ },
          { Py_tp_init, (void *) t_StepFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepFunction, t_StepFunction, StepFunction);

        void t_StepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(StepFunction), &PY_TYPE_DEF(StepFunction), module, "StepFunction", 0);
        }

        void t_StepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepFunction), "class_", make_descriptor(StepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepFunction), "wrapfn_", make_descriptor(t_StepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepFunction::initializeClass, 1)))
            return NULL;
          return t_StepFunction::wrap_Object(StepFunction(((t_StepFunction *) arg)->object.this$));
        }
        static PyObject *t_StepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepFunction_init_(t_StepFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          StepFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = StepFunction(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StepFunction_value(t_StepFunction *self, PyObject *arg)
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
#include "org/hipparchus/stat/inference/InferenceTestUtils.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *InferenceTestUtils::class$ = NULL;
        jmethodID *InferenceTestUtils::mids$ = NULL;
        bool InferenceTestUtils::live$ = false;

        jclass InferenceTestUtils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/InferenceTestUtils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_approximateP_5b7edc654bd4c638] = env->getStaticMethodID(cls, "approximateP", "(DII)D");
            mids$[mid_chiSquare_4661adbd7cb942d0] = env->getStaticMethodID(cls, "chiSquare", "([[J)D");
            mids$[mid_chiSquare_309c07a77179d86e] = env->getStaticMethodID(cls, "chiSquare", "([D[J)D");
            mids$[mid_chiSquareDataSetsComparison_c9aa1880e4fb2330] = env->getStaticMethodID(cls, "chiSquareDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTest_4661adbd7cb942d0] = env->getStaticMethodID(cls, "chiSquareTest", "([[J)D");
            mids$[mid_chiSquareTest_309c07a77179d86e] = env->getStaticMethodID(cls, "chiSquareTest", "([D[J)D");
            mids$[mid_chiSquareTest_76b7b3677f01cb1c] = env->getStaticMethodID(cls, "chiSquareTest", "([[JD)Z");
            mids$[mid_chiSquareTest_deac5230a366dcf3] = env->getStaticMethodID(cls, "chiSquareTest", "([D[JD)Z");
            mids$[mid_chiSquareTestDataSetsComparison_c9aa1880e4fb2330] = env->getStaticMethodID(cls, "chiSquareTestDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTestDataSetsComparison_885f29369ee9c892] = env->getStaticMethodID(cls, "chiSquareTestDataSetsComparison", "([J[JD)Z");
            mids$[mid_exactP_4cb0bd459cea3c08] = env->getStaticMethodID(cls, "exactP", "(DIIZ)D");
            mids$[mid_g_309c07a77179d86e] = env->getStaticMethodID(cls, "g", "([D[J)D");
            mids$[mid_gDataSetsComparison_c9aa1880e4fb2330] = env->getStaticMethodID(cls, "gDataSetsComparison", "([J[J)D");
            mids$[mid_gTest_309c07a77179d86e] = env->getStaticMethodID(cls, "gTest", "([D[J)D");
            mids$[mid_gTest_deac5230a366dcf3] = env->getStaticMethodID(cls, "gTest", "([D[JD)Z");
            mids$[mid_gTestDataSetsComparison_c9aa1880e4fb2330] = env->getStaticMethodID(cls, "gTestDataSetsComparison", "([J[J)D");
            mids$[mid_gTestDataSetsComparison_885f29369ee9c892] = env->getStaticMethodID(cls, "gTestDataSetsComparison", "([J[JD)Z");
            mids$[mid_gTestIntrinsic_309c07a77179d86e] = env->getStaticMethodID(cls, "gTestIntrinsic", "([D[J)D");
            mids$[mid_homoscedasticT_628a76297e217f13] = env->getStaticMethodID(cls, "homoscedasticT", "([D[D)D");
            mids$[mid_homoscedasticT_270d3373c85c64aa] = env->getStaticMethodID(cls, "homoscedasticT", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_628a76297e217f13] = env->getStaticMethodID(cls, "homoscedasticTTest", "([D[D)D");
            mids$[mid_homoscedasticTTest_270d3373c85c64aa] = env->getStaticMethodID(cls, "homoscedasticTTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_93ebb7e130400af3] = env->getStaticMethodID(cls, "homoscedasticTTest", "([D[DD)Z");
            mids$[mid_kolmogorovSmirnovStatistic_628a76297e217f13] = env->getStaticMethodID(cls, "kolmogorovSmirnovStatistic", "([D[D)D");
            mids$[mid_kolmogorovSmirnovStatistic_25a541813dc79893] = env->getStaticMethodID(cls, "kolmogorovSmirnovStatistic", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_628a76297e217f13] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "([D[D)D");
            mids$[mid_kolmogorovSmirnovTest_25a541813dc79893] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_81226d0b24750fea] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "([D[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_7ce25eee88719bea] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_3766a811638b85f8] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DD)Z");
            mids$[mid_oneWayAnovaFValue_1ab1799bb5ae5130] = env->getStaticMethodID(cls, "oneWayAnovaFValue", "(Ljava/util/Collection;)D");
            mids$[mid_oneWayAnovaPValue_1ab1799bb5ae5130] = env->getStaticMethodID(cls, "oneWayAnovaPValue", "(Ljava/util/Collection;)D");
            mids$[mid_oneWayAnovaTest_cee28d5d28508179] = env->getStaticMethodID(cls, "oneWayAnovaTest", "(Ljava/util/Collection;D)Z");
            mids$[mid_pairedT_628a76297e217f13] = env->getStaticMethodID(cls, "pairedT", "([D[D)D");
            mids$[mid_pairedTTest_628a76297e217f13] = env->getStaticMethodID(cls, "pairedTTest", "([D[D)D");
            mids$[mid_pairedTTest_93ebb7e130400af3] = env->getStaticMethodID(cls, "pairedTTest", "([D[DD)Z");
            mids$[mid_rootLogLikelihoodRatio_db51ea2c930fe509] = env->getStaticMethodID(cls, "rootLogLikelihoodRatio", "(JJJJ)D");
            mids$[mid_t_628a76297e217f13] = env->getStaticMethodID(cls, "t", "([D[D)D");
            mids$[mid_t_1bc40469b56f2c3c] = env->getStaticMethodID(cls, "t", "(D[D)D");
            mids$[mid_t_39b4b09d85675888] = env->getStaticMethodID(cls, "t", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_t_270d3373c85c64aa] = env->getStaticMethodID(cls, "t", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_628a76297e217f13] = env->getStaticMethodID(cls, "tTest", "([D[D)D");
            mids$[mid_tTest_1bc40469b56f2c3c] = env->getStaticMethodID(cls, "tTest", "(D[D)D");
            mids$[mid_tTest_39b4b09d85675888] = env->getStaticMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_270d3373c85c64aa] = env->getStaticMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_93ebb7e130400af3] = env->getStaticMethodID(cls, "tTest", "([D[DD)Z");
            mids$[mid_tTest_ee5175543eb0ed15] = env->getStaticMethodID(cls, "tTest", "(D[DD)Z");
            mids$[mid_tTest_992a68f955dc257e] = env->getStaticMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");
            mids$[mid_tTest_88ba90c6a489d059] = env->getStaticMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble InferenceTestUtils::approximateP(jdouble a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_approximateP_5b7edc654bd4c638], a0, a1, a2);
        }

        jdouble InferenceTestUtils::chiSquare(const JArray< JArray< jlong > > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquare_4661adbd7cb942d0], a0.this$);
        }

        jdouble InferenceTestUtils::chiSquare(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquare_309c07a77179d86e], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::chiSquareDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareDataSetsComparison_c9aa1880e4fb2330], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::chiSquareTest(const JArray< JArray< jlong > > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareTest_4661adbd7cb942d0], a0.this$);
        }

        jdouble InferenceTestUtils::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareTest_309c07a77179d86e], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::chiSquareTest(const JArray< JArray< jlong > > & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_chiSquareTest_76b7b3677f01cb1c], a0.this$, a1);
        }

        jboolean InferenceTestUtils::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_chiSquareTest_deac5230a366dcf3], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareTestDataSetsComparison_c9aa1880e4fb2330], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_chiSquareTestDataSetsComparison_885f29369ee9c892], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::exactP(jdouble a0, jint a1, jint a2, jboolean a3)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_exactP_4cb0bd459cea3c08], a0, a1, a2, a3);
        }

        jdouble InferenceTestUtils::g(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_g_309c07a77179d86e], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::gDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gDataSetsComparison_c9aa1880e4fb2330], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gTest_309c07a77179d86e], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_gTest_deac5230a366dcf3], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gTestDataSetsComparison_c9aa1880e4fb2330], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_gTestDataSetsComparison_885f29369ee9c892], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::gTestIntrinsic(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gTestIntrinsic_309c07a77179d86e], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticT(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticT_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticT(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticT_270d3373c85c64aa], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticTTest_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticTTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticTTest_270d3373c85c64aa], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_homoscedasticTTest_93ebb7e130400af3], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovStatistic(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovStatistic_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovStatistic(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovStatistic_25a541813dc79893], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_25a541813dc79893], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_81226d0b24750fea], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jboolean a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_7ce25eee88719bea], a0.this$, a1.this$, a2);
        }

        jboolean InferenceTestUtils::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_kolmogorovSmirnovTest_3766a811638b85f8], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::oneWayAnovaFValue(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_oneWayAnovaFValue_1ab1799bb5ae5130], a0.this$);
        }

        jdouble InferenceTestUtils::oneWayAnovaPValue(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_oneWayAnovaPValue_1ab1799bb5ae5130], a0.this$);
        }

        jboolean InferenceTestUtils::oneWayAnovaTest(const ::java::util::Collection & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_oneWayAnovaTest_cee28d5d28508179], a0.this$, a1);
        }

        jdouble InferenceTestUtils::pairedT(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_pairedT_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_pairedTTest_628a76297e217f13], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_pairedTTest_93ebb7e130400af3], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::rootLogLikelihoodRatio(jlong a0, jlong a1, jlong a2, jlong a3)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_rootLogLikelihoodRatio_db51ea2c930fe509], a0, a1, a2, a3);
        }

        jdouble InferenceTestUtils::t(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::t(jdouble a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_1bc40469b56f2c3c], a0, a1.this$);
        }

        jdouble InferenceTestUtils::t(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_39b4b09d85675888], a0, a1.this$);
        }

        jdouble InferenceTestUtils::t(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_270d3373c85c64aa], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(jdouble a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_1bc40469b56f2c3c], a0, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_39b4b09d85675888], a0, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_270d3373c85c64aa], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_93ebb7e130400af3], a0.this$, a1.this$, a2);
        }

        jboolean InferenceTestUtils::tTest(jdouble a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_ee5175543eb0ed15], a0, a1.this$, a2);
        }

        jboolean InferenceTestUtils::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_992a68f955dc257e], a0, a1.this$, a2);
        }

        jboolean InferenceTestUtils::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_88ba90c6a489d059], a0.this$, a1.this$, a2);
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
        static PyObject *t_InferenceTestUtils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_approximateP(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquare(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquareDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquareTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquareTestDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_exactP(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_g(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gTestDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gTestIntrinsic(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_homoscedasticT(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_homoscedasticTTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovStatistic(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_oneWayAnovaFValue(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_oneWayAnovaPValue(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_oneWayAnovaTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_pairedT(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_pairedTTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_rootLogLikelihoodRatio(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_t(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_tTest(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_InferenceTestUtils__methods_[] = {
          DECLARE_METHOD(t_InferenceTestUtils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, approximateP, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquare, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquareDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquareTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquareTestDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, exactP, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, g, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gTestDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gTestIntrinsic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, homoscedasticT, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, homoscedasticTTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, kolmogorovSmirnovStatistic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, kolmogorovSmirnovTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, oneWayAnovaFValue, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, oneWayAnovaPValue, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, oneWayAnovaTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, pairedT, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, pairedTTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, rootLogLikelihoodRatio, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, t, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, tTest, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InferenceTestUtils)[] = {
          { Py_tp_methods, t_InferenceTestUtils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InferenceTestUtils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(InferenceTestUtils, t_InferenceTestUtils, InferenceTestUtils);

        void t_InferenceTestUtils::install(PyObject *module)
        {
          installType(&PY_TYPE(InferenceTestUtils), &PY_TYPE_DEF(InferenceTestUtils), module, "InferenceTestUtils", 0);
        }

        void t_InferenceTestUtils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InferenceTestUtils), "class_", make_descriptor(InferenceTestUtils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InferenceTestUtils), "wrapfn_", make_descriptor(t_InferenceTestUtils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InferenceTestUtils), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InferenceTestUtils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InferenceTestUtils::initializeClass, 1)))
            return NULL;
          return t_InferenceTestUtils::wrap_Object(InferenceTestUtils(((t_InferenceTestUtils *) arg)->object.this$));
        }
        static PyObject *t_InferenceTestUtils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InferenceTestUtils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InferenceTestUtils_approximateP(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::approximateP(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "approximateP", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquare(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquare(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "chiSquare", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquareDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "chiSquareDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquareTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble a1;
              jboolean result;

              if (!parseArgs(args, "[[JD", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0, a1));
                Py_RETURN_BOOL(result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "chiSquareTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquareTestDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "chiSquareTestDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_exactP(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jboolean a3;
          jdouble result;

          if (!parseArgs(args, "DIIZ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::exactP(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "exactP", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_g(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::g(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "g", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "gDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "gTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gTestDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "gTestDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gTestIntrinsic(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTestIntrinsic(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "gTestIntrinsic", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_homoscedasticT(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "homoscedasticT", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_homoscedasticTTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "homoscedasticTTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovStatistic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "kolmogorovSmirnovStatistic", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1));
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
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "k[DZ", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "k[DD", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "kolmogorovSmirnovTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_oneWayAnovaFValue(PyTypeObject *type, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::oneWayAnovaFValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "oneWayAnovaFValue", arg);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_oneWayAnovaPValue(PyTypeObject *type, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::oneWayAnovaPValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "oneWayAnovaPValue", arg);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_oneWayAnovaTest(PyTypeObject *type, PyObject *args)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::oneWayAnovaTest(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "oneWayAnovaTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_pairedT(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::pairedT(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "pairedT", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_pairedTTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::pairedTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::pairedTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "pairedTTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_rootLogLikelihoodRatio(PyTypeObject *type, PyObject *args)
        {
          jlong a0;
          jlong a1;
          jlong a2;
          jlong a3;
          jdouble result;

          if (!parseArgs(args, "JJJJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::rootLogLikelihoodRatio(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "rootLogLikelihoodRatio", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_t(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "t", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_tTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "DkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "kkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "tTest", args);
          return NULL;
        }
      }
    }
  }
}

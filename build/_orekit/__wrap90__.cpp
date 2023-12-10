#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/PythonWeatherModel.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *PythonWeatherModel::class$ = NULL;
          jmethodID *PythonWeatherModel::mids$ = NULL;
          bool PythonWeatherModel::live$ = false;

          jclass PythonWeatherModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/PythonWeatherModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_weatherParameters_a7786d9d355d3792] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonWeatherModel::PythonWeatherModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonWeatherModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonWeatherModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonWeatherModel::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace weather {
          static PyObject *t_PythonWeatherModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonWeatherModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonWeatherModel_init_(t_PythonWeatherModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonWeatherModel_finalize(t_PythonWeatherModel *self);
          static PyObject *t_PythonWeatherModel_pythonExtension(t_PythonWeatherModel *self, PyObject *args);
          static void JNICALL t_PythonWeatherModel_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonWeatherModel_weatherParameters1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1);
          static PyObject *t_PythonWeatherModel_get__self(t_PythonWeatherModel *self, void *data);
          static PyGetSetDef t_PythonWeatherModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonWeatherModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonWeatherModel__methods_[] = {
            DECLARE_METHOD(t_PythonWeatherModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonWeatherModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonWeatherModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonWeatherModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonWeatherModel)[] = {
            { Py_tp_methods, t_PythonWeatherModel__methods_ },
            { Py_tp_init, (void *) t_PythonWeatherModel_init_ },
            { Py_tp_getset, t_PythonWeatherModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonWeatherModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonWeatherModel, t_PythonWeatherModel, PythonWeatherModel);

          void t_PythonWeatherModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonWeatherModel), &PY_TYPE_DEF(PythonWeatherModel), module, "PythonWeatherModel", 1);
          }

          void t_PythonWeatherModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonWeatherModel), "class_", make_descriptor(PythonWeatherModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonWeatherModel), "wrapfn_", make_descriptor(t_PythonWeatherModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonWeatherModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonWeatherModel::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonWeatherModel_pythonDecRef0 },
              { "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonWeatherModel_weatherParameters1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonWeatherModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonWeatherModel::initializeClass, 1)))
              return NULL;
            return t_PythonWeatherModel::wrap_Object(PythonWeatherModel(((t_PythonWeatherModel *) arg)->object.this$));
          }
          static PyObject *t_PythonWeatherModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonWeatherModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonWeatherModel_init_(t_PythonWeatherModel *self, PyObject *args, PyObject *kwds)
          {
            PythonWeatherModel object((jobject) NULL);

            INT_CALL(object = PythonWeatherModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonWeatherModel_finalize(t_PythonWeatherModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonWeatherModel_pythonExtension(t_PythonWeatherModel *self, PyObject *args)
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

          static void JNICALL t_PythonWeatherModel_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonWeatherModel::mids$[PythonWeatherModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonWeatherModel::mids$[PythonWeatherModel::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonWeatherModel_weatherParameters1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonWeatherModel::mids$[PythonWeatherModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "weatherParameters", "dO", (double) a0, o1);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonWeatherModel_get__self(t_PythonWeatherModel *self, void *data)
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
#include "org/orekit/propagation/integration/PythonFieldAdditionalDerivativesProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonFieldAdditionalDerivativesProvider::class$ = NULL;
        jmethodID *PythonFieldAdditionalDerivativesProvider::mids$ = NULL;
        bool PythonFieldAdditionalDerivativesProvider::live$ = false;

        jclass PythonFieldAdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonFieldAdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_combinedDerivatives_bed9dfcebfaf5040] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/integration/FieldCombinedDerivatives;");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_yields_1b0abd4f90ebd0eb] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAdditionalDerivativesProvider::PythonFieldAdditionalDerivativesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonFieldAdditionalDerivativesProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonFieldAdditionalDerivativesProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonFieldAdditionalDerivativesProvider::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace integration {
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_of_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args);
        static int t_PythonFieldAdditionalDerivativesProvider_init_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_finalize(t_PythonFieldAdditionalDerivativesProvider *self);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_pythonExtension(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jint JNICALL t_PythonFieldAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonFieldAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__self(t_PythonFieldAdditionalDerivativesProvider *self, void *data);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__parameters_(t_PythonFieldAdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_PythonFieldAdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAdditionalDerivativesProvider, self),
          DECLARE_GET_FIELD(t_PythonFieldAdditionalDerivativesProvider, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_PythonFieldAdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAdditionalDerivativesProvider_init_ },
          { Py_tp_getset, t_PythonFieldAdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldAdditionalDerivativesProvider, t_PythonFieldAdditionalDerivativesProvider, PythonFieldAdditionalDerivativesProvider);
        PyObject *t_PythonFieldAdditionalDerivativesProvider::wrap_Object(const PythonFieldAdditionalDerivativesProvider& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdditionalDerivativesProvider::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdditionalDerivativesProvider *self = (t_PythonFieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAdditionalDerivativesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdditionalDerivativesProvider::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdditionalDerivativesProvider *self = (t_PythonFieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAdditionalDerivativesProvider), &PY_TYPE_DEF(PythonFieldAdditionalDerivativesProvider), module, "PythonFieldAdditionalDerivativesProvider", 1);
        }

        void t_PythonFieldAdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalDerivativesProvider), "class_", make_descriptor(PythonFieldAdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_PythonFieldAdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAdditionalDerivativesProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "combinedDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/integration/FieldCombinedDerivatives;", (void *) t_PythonFieldAdditionalDerivativesProvider_combinedDerivatives0 },
            { "getDimension", "()I", (void *) t_PythonFieldAdditionalDerivativesProvider_getDimension1 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonFieldAdditionalDerivativesProvider_getName2 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldAdditionalDerivativesProvider_init3 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAdditionalDerivativesProvider_pythonDecRef4 },
            { "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z", (void *) t_PythonFieldAdditionalDerivativesProvider_yields5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAdditionalDerivativesProvider::wrap_Object(PythonFieldAdditionalDerivativesProvider(((t_PythonFieldAdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_of_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAdditionalDerivativesProvider_init_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldAdditionalDerivativesProvider object((jobject) NULL);

          INT_CALL(object = PythonFieldAdditionalDerivativesProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_finalize(t_PythonFieldAdditionalDerivativesProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_pythonExtension(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::FieldCombinedDerivatives value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "combinedDerivatives", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::FieldCombinedDerivatives::initializeClass, &value))
          {
            throwTypeError("combinedDerivatives", result);
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

        static jint JNICALL t_PythonFieldAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getDimension", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getDimension", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getName", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getName", result);
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

        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jboolean JNICALL t_PythonFieldAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "yields", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("yields", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__self(t_PythonFieldAdditionalDerivativesProvider *self, void *data)
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
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__parameters_(t_PythonFieldAdditionalDerivativesProvider *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrix::class$ = NULL;
      jmethodID *FieldMatrix::mids$ = NULL;
      bool FieldMatrix::live$ = false;

      jclass FieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_1409f31dc074a11f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_addToEntry_d302e4fbc652587d] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_blendArithmeticallyWith_fd638641ec5d7a5a] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_copy_c992983685c753c5] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_copySubMatrix_7a58809e5177d242] = env->getMethodID(cls, "copySubMatrix", "([I[I[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_copySubMatrix_66401962bb2535a8] = env->getMethodID(cls, "copySubMatrix", "(IIII[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_createMatrix_5d35d650870a3dcb] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumn_b21ddf58698298c0] = env->getMethodID(cls, "getColumn", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getColumnMatrix_d85895e9fba6ff1d] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnVector_819edc89e6437565] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getData_75f68840bec35355] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_ef29faa67be274b8] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getRow_b21ddf58698298c0] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowMatrix_d85895e9fba6ff1d] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowVector_819edc89e6437565] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getSubMatrix_ccd02e1d2a8268ce] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getSubMatrix_1033b0d2443c0299] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getTrace_99097cb60cf2d774] = env->getMethodID(cls, "getTrace", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_multiply_1409f31dc074a11f] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyEntry_d302e4fbc652587d] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_1409f31dc074a11f] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_operate_91d3c6b4d1752243] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_operate_a657ce460dba8c79] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_power_d85895e9fba6ff1d] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_91d3c6b4d1752243] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_1409f31dc074a11f] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_a657ce460dba8c79] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_scalarAdd_57b87e024c8cac75] = env->getMethodID(cls, "scalarAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_scalarMultiply_57b87e024c8cac75] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setColumn_baf264dbcc1722ae] = env->getMethodID(cls, "setColumn", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setColumnMatrix_1fbbd8b62d351fe3] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setColumnVector_0c5a38a1f7c3f4d4] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setEntry_d302e4fbc652587d] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_baf264dbcc1722ae] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setRowMatrix_1fbbd8b62d351fe3] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setRowVector_0c5a38a1f7c3f4d4] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setSubMatrix_e8cdaf624d2bb79a] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_1409f31dc074a11f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transpose_c992983685c753c5] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transposeMultiply_1409f31dc074a11f] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_walkInColumnOrder_624c889f4088e148] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_26ed18f15f4bb370] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_c4e69fc23be9a0d2] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_7aa3cb5fccfebf0e] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_624c889f4088e148] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_26ed18f15f4bb370] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_c4e69fc23be9a0d2] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_7aa3cb5fccfebf0e] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_624c889f4088e148] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_26ed18f15f4bb370] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_c4e69fc23be9a0d2] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_7aa3cb5fccfebf0e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldMatrix FieldMatrix::add(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_add_1409f31dc074a11f], a0.this$));
      }

      void FieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_d302e4fbc652587d], a0, a1, a2.this$);
      }

      FieldMatrix FieldMatrix::blendArithmeticallyWith(const FieldMatrix & a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_fd638641ec5d7a5a], a0.this$, a1.this$));
      }

      FieldMatrix FieldMatrix::copy() const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_c992983685c753c5]));
      }

      void FieldMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< ::org::hipparchus::FieldElement > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_7a58809e5177d242], a0.this$, a1.this$, a2.this$);
      }

      void FieldMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< ::org::hipparchus::FieldElement > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_66401962bb2535a8], a0, a1, a2, a3, a4.this$);
      }

      FieldMatrix FieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_5d35d650870a3dcb], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::getColumn(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getColumn_b21ddf58698298c0], a0));
      }

      FieldMatrix FieldMatrix::getColumnMatrix(jint a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_d85895e9fba6ff1d], a0));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_819edc89e6437565], a0));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > FieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_75f68840bec35355]));
      }

      ::org::hipparchus::FieldElement FieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_ef29faa67be274b8], a0, a1));
      }

      ::org::hipparchus::Field FieldMatrix::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_b21ddf58698298c0], a0));
      }

      FieldMatrix FieldMatrix::getRowMatrix(jint a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_d85895e9fba6ff1d], a0));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getRowVector_819edc89e6437565], a0));
      }

      FieldMatrix FieldMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_ccd02e1d2a8268ce], a0.this$, a1.this$));
      }

      FieldMatrix FieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_1033b0d2443c0299], a0, a1, a2, a3));
      }

      ::org::hipparchus::FieldElement FieldMatrix::getTrace() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getTrace_99097cb60cf2d774]));
      }

      FieldMatrix FieldMatrix::multiply(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_1409f31dc074a11f], a0.this$));
      }

      void FieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_d302e4fbc652587d], a0, a1, a2.this$);
      }

      FieldMatrix FieldMatrix::multiplyTransposed(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_1409f31dc074a11f], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_91d3c6b4d1752243], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::operate(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_operate_a657ce460dba8c79], a0.this$));
      }

      FieldMatrix FieldMatrix::power(jint a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_power_d85895e9fba6ff1d], a0));
      }

      JArray< ::org::hipparchus::FieldElement > FieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_91d3c6b4d1752243], a0.this$));
      }

      FieldMatrix FieldMatrix::preMultiply(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_1409f31dc074a11f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector FieldMatrix::preMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_preMultiply_a657ce460dba8c79], a0.this$));
      }

      FieldMatrix FieldMatrix::scalarAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_57b87e024c8cac75], a0.this$));
      }

      FieldMatrix FieldMatrix::scalarMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_57b87e024c8cac75], a0.this$));
      }

      void FieldMatrix::setColumn(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_baf264dbcc1722ae], a0, a1.this$);
      }

      void FieldMatrix::setColumnMatrix(jint a0, const FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_1fbbd8b62d351fe3], a0, a1.this$);
      }

      void FieldMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_0c5a38a1f7c3f4d4], a0, a1.this$);
      }

      void FieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_d302e4fbc652587d], a0, a1, a2.this$);
      }

      void FieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_baf264dbcc1722ae], a0, a1.this$);
      }

      void FieldMatrix::setRowMatrix(jint a0, const FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_1fbbd8b62d351fe3], a0, a1.this$);
      }

      void FieldMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_0c5a38a1f7c3f4d4], a0, a1.this$);
      }

      void FieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_e8cdaf624d2bb79a], a0.this$, a1, a2);
      }

      FieldMatrix FieldMatrix::subtract(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_1409f31dc074a11f], a0.this$));
      }

      FieldMatrix FieldMatrix::transpose() const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_transpose_c992983685c753c5]));
      }

      FieldMatrix FieldMatrix::transposeMultiply(const FieldMatrix & a0) const
      {
        return FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_1409f31dc074a11f], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_624c889f4088e148], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_26ed18f15f4bb370], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_c4e69fc23be9a0d2], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_7aa3cb5fccfebf0e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_624c889f4088e148], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_26ed18f15f4bb370], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_c4e69fc23be9a0d2], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_7aa3cb5fccfebf0e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_624c889f4088e148], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_26ed18f15f4bb370], a0.this$));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_c4e69fc23be9a0d2], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement FieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_7aa3cb5fccfebf0e], a0.this$, a1, a2, a3, a4));
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
      static PyObject *t_FieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrix_of_(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_add(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_addToEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_blendArithmeticallyWith(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_copy(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_copySubMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_createMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_getColumn(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getColumnMatrix(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getColumnVector(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getData(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_getEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_getField(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_getRow(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getRowMatrix(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getRowVector(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_getSubMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_getTrace(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_multiply(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_multiplyEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_multiplyTransposed(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_operate(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_power(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_preMultiply(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_scalarAdd(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_scalarMultiply(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_setColumn(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setColumnMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setColumnVector(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setEntry(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setRow(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setRowMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setRowVector(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_setSubMatrix(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_subtract(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_transpose(t_FieldMatrix *self);
      static PyObject *t_FieldMatrix_transposeMultiply(t_FieldMatrix *self, PyObject *arg);
      static PyObject *t_FieldMatrix_walkInColumnOrder(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_walkInOptimizedOrder(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_walkInRowOrder(t_FieldMatrix *self, PyObject *args);
      static PyObject *t_FieldMatrix_get__data(t_FieldMatrix *self, void *data);
      static PyObject *t_FieldMatrix_get__field(t_FieldMatrix *self, void *data);
      static PyObject *t_FieldMatrix_get__trace(t_FieldMatrix *self, void *data);
      static PyObject *t_FieldMatrix_get__parameters_(t_FieldMatrix *self, void *data);
      static PyGetSetDef t_FieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrix, data),
        DECLARE_GET_FIELD(t_FieldMatrix, field),
        DECLARE_GET_FIELD(t_FieldMatrix, trace),
        DECLARE_GET_FIELD(t_FieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrix__methods_[] = {
        DECLARE_METHOD(t_FieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, add, METH_O),
        DECLARE_METHOD(t_FieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, getRow, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_FieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, multiply, METH_O),
        DECLARE_METHOD(t_FieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, multiplyTransposed, METH_O),
        DECLARE_METHOD(t_FieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, power, METH_O),
        DECLARE_METHOD(t_FieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_FieldMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_FieldMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, subtract, METH_O),
        DECLARE_METHOD(t_FieldMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrix, transposeMultiply, METH_O),
        DECLARE_METHOD(t_FieldMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrix)[] = {
        { Py_tp_methods, t_FieldMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AnyMatrix),
        NULL
      };

      DEFINE_TYPE(FieldMatrix, t_FieldMatrix, FieldMatrix);
      PyObject *t_FieldMatrix::wrap_Object(const FieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrix *self = (t_FieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrix *self = (t_FieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrix), &PY_TYPE_DEF(FieldMatrix), module, "FieldMatrix", 0);
      }

      void t_FieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrix), "class_", make_descriptor(FieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrix), "wrapfn_", make_descriptor(t_FieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrix::initializeClass, 1)))
          return NULL;
        return t_FieldMatrix::wrap_Object(FieldMatrix(((t_FieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrix_of_(t_FieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrix_add(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_addToEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_blendArithmeticallyWith(t_FieldMatrix *self, PyObject *args)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldMatrix::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, t_FieldMatrix::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_copy(t_FieldMatrix *self)
      {
        FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldMatrix_copySubMatrix(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< ::org::hipparchus::FieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "[I[I[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
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
            JArray< JArray< ::org::hipparchus::FieldElement > > a4((jobject) NULL);
            PyTypeObject **p4;

            if (!parseArgs(args, "IIII[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_createMatrix(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getColumn(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getColumnMatrix(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getColumnVector(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getData(t_FieldMatrix *self)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_FieldMatrix_getEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getField(t_FieldMatrix *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldMatrix_getRow(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getRowMatrix(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getRowVector(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getSubMatrix(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_getTrace(t_FieldMatrix *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrace());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldMatrix_multiply(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_multiplyEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_multiplyTransposed(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyTransposed", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_operate(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_power(t_FieldMatrix *self, PyObject *arg)
      {
        jint a0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_preMultiply(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_scalarAdd(t_FieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_scalarMultiply(t_FieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setColumn(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setColumnMatrix(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", FieldMatrix::initializeClass, &a0, &a1, &p1, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setColumnVector(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setEntry(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setRow(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setRowMatrix(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", FieldMatrix::initializeClass, &a0, &a1, &p1, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setRowVector(t_FieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_setSubMatrix(t_FieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_subtract(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_transpose(t_FieldMatrix *self)
      {
        FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldMatrix_transposeMultiply(t_FieldMatrix *self, PyObject *arg)
      {
        FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldMatrix::initializeClass, &a0, &p0, t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "transposeMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldMatrix_walkInColumnOrder(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_walkInOptimizedOrder(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_FieldMatrix_walkInRowOrder(t_FieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }
      static PyObject *t_FieldMatrix_get__parameters_(t_FieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldMatrix_get__data(t_FieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_FieldMatrix_get__field(t_FieldMatrix *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldMatrix_get__trace(t_FieldMatrix *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrace());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm02Header::class$ = NULL;
              jmethodID *SsrIgm02Header::mids$ = NULL;
              bool SsrIgm02Header::live$ = false;

              jclass SsrIgm02Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm02Header::SsrIgm02Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
              static PyObject *t_SsrIgm02Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm02Header_init_(t_SsrIgm02Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm02Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm02Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm02Header)[] = {
                { Py_tp_methods, t_SsrIgm02Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm02Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm02Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm02Header, t_SsrIgm02Header, SsrIgm02Header);

              void t_SsrIgm02Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm02Header), &PY_TYPE_DEF(SsrIgm02Header), module, "SsrIgm02Header", 0);
              }

              void t_SsrIgm02Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Header), "class_", make_descriptor(SsrIgm02Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Header), "wrapfn_", make_descriptor(t_SsrIgm02Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm02Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm02Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm02Header::wrap_Object(SsrIgm02Header(((t_SsrIgm02Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm02Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm02Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm02Header_init_(t_SsrIgm02Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm02Header object((jobject) NULL);

                INT_CALL(object = SsrIgm02Header());
                self->object = object;

                return 0;
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
#include "org/hipparchus/optim/univariate/BrentOptimizer.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *BrentOptimizer::class$ = NULL;
        jmethodID *BrentOptimizer::mids$ = NULL;
        bool BrentOptimizer::live$ = false;

        jclass BrentOptimizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/BrentOptimizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_511a7b4994f0ac32] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/optim/ConvergenceChecker;)V");
            mids$[mid_doOptimize_1512fd4a147f4927] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrentOptimizer::BrentOptimizer(jdouble a0, jdouble a1) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        BrentOptimizer::BrentOptimizer(jdouble a0, jdouble a1, const ::org::hipparchus::optim::ConvergenceChecker & a2) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_511a7b4994f0ac32, a0, a1, a2.this$)) {}
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
      namespace univariate {
        static PyObject *t_BrentOptimizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentOptimizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentOptimizer_of_(t_BrentOptimizer *self, PyObject *args);
        static int t_BrentOptimizer_init_(t_BrentOptimizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrentOptimizer_get__parameters_(t_BrentOptimizer *self, void *data);
        static PyGetSetDef t_BrentOptimizer__fields_[] = {
          DECLARE_GET_FIELD(t_BrentOptimizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BrentOptimizer__methods_[] = {
          DECLARE_METHOD(t_BrentOptimizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentOptimizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentOptimizer, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrentOptimizer)[] = {
          { Py_tp_methods, t_BrentOptimizer__methods_ },
          { Py_tp_init, (void *) t_BrentOptimizer_init_ },
          { Py_tp_getset, t_BrentOptimizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrentOptimizer)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::univariate::UnivariateOptimizer),
          NULL
        };

        DEFINE_TYPE(BrentOptimizer, t_BrentOptimizer, BrentOptimizer);
        PyObject *t_BrentOptimizer::wrap_Object(const BrentOptimizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentOptimizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentOptimizer *self = (t_BrentOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BrentOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentOptimizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentOptimizer *self = (t_BrentOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BrentOptimizer::install(PyObject *module)
        {
          installType(&PY_TYPE(BrentOptimizer), &PY_TYPE_DEF(BrentOptimizer), module, "BrentOptimizer", 0);
        }

        void t_BrentOptimizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentOptimizer), "class_", make_descriptor(BrentOptimizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentOptimizer), "wrapfn_", make_descriptor(t_BrentOptimizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentOptimizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BrentOptimizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrentOptimizer::initializeClass, 1)))
            return NULL;
          return t_BrentOptimizer::wrap_Object(BrentOptimizer(((t_BrentOptimizer *) arg)->object.this$));
        }
        static PyObject *t_BrentOptimizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrentOptimizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BrentOptimizer_of_(t_BrentOptimizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BrentOptimizer_init_(t_BrentOptimizer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BrentOptimizer object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BrentOptimizer(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::hipparchus::optim::ConvergenceChecker a2((jobject) NULL);
              PyTypeObject **p2;
              BrentOptimizer object((jobject) NULL);

              if (!parseArgs(args, "DDK", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                INT_CALL(object = BrentOptimizer(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
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
        static PyObject *t_BrentOptimizer_get__parameters_(t_BrentOptimizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Max.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/stat/descriptive/rank/Max.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Max::class$ = NULL;
          jmethodID *Max::mids$ = NULL;
          bool Max::live$ = false;

          jclass Max::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Max");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_fe3a0c5fa6b904a3] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/rank/Max;)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_74e2c09c034cb400] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Max;");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Max::Max() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void Max::aggregate(const Max & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_fe3a0c5fa6b904a3], a0.this$);
          }

          void Max::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          Max Max::copy() const
          {
            return Max(env->callObjectMethod(this$, mids$[mid_copy_74e2c09c034cb400]));
          }

          jdouble Max::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          jlong Max::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          jdouble Max::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          void Max::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
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
          static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Max_aggregate(t_Max *self, PyObject *arg);
          static PyObject *t_Max_clear(t_Max *self, PyObject *args);
          static PyObject *t_Max_copy(t_Max *self, PyObject *args);
          static PyObject *t_Max_evaluate(t_Max *self, PyObject *args);
          static PyObject *t_Max_getN(t_Max *self, PyObject *args);
          static PyObject *t_Max_getResult(t_Max *self, PyObject *args);
          static PyObject *t_Max_increment(t_Max *self, PyObject *args);
          static PyObject *t_Max_get__n(t_Max *self, void *data);
          static PyObject *t_Max_get__result(t_Max *self, void *data);
          static PyGetSetDef t_Max__fields_[] = {
            DECLARE_GET_FIELD(t_Max, n),
            DECLARE_GET_FIELD(t_Max, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Max__methods_[] = {
            DECLARE_METHOD(t_Max, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Max, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Max, aggregate, METH_O),
            DECLARE_METHOD(t_Max, clear, METH_VARARGS),
            DECLARE_METHOD(t_Max, copy, METH_VARARGS),
            DECLARE_METHOD(t_Max, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Max, getN, METH_VARARGS),
            DECLARE_METHOD(t_Max, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Max, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Max)[] = {
            { Py_tp_methods, t_Max__methods_ },
            { Py_tp_init, (void *) t_Max_init_ },
            { Py_tp_getset, t_Max__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Max)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Max, t_Max, Max);

          void t_Max::install(PyObject *module)
          {
            installType(&PY_TYPE(Max), &PY_TYPE_DEF(Max), module, "Max", 0);
          }

          void t_Max::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "class_", make_descriptor(Max::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "wrapfn_", make_descriptor(t_Max::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Max), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Max_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Max::initializeClass, 1)))
              return NULL;
            return t_Max::wrap_Object(Max(((t_Max *) arg)->object.this$));
          }
          static PyObject *t_Max_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Max::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Max_init_(t_Max *self, PyObject *args, PyObject *kwds)
          {
            Max object((jobject) NULL);

            INT_CALL(object = Max());
            self->object = object;

            return 0;
          }

          static PyObject *t_Max_aggregate(t_Max *self, PyObject *arg)
          {
            Max a0((jobject) NULL);

            if (!parseArg(arg, "k", Max::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Max_clear(t_Max *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Max_copy(t_Max *self, PyObject *args)
          {
            Max result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Max::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Max_evaluate(t_Max *self, PyObject *args)
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

            return callSuper(PY_TYPE(Max), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Max_getN(t_Max *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Max_getResult(t_Max *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Max_increment(t_Max *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Max), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Max_get__n(t_Max *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Max_get__result(t_Max *self, void *data)
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
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LibrationOrbitFamily::class$ = NULL;
      jmethodID *LibrationOrbitFamily::mids$ = NULL;
      bool LibrationOrbitFamily::live$ = false;
      LibrationOrbitFamily *LibrationOrbitFamily::NORTHERN = NULL;
      LibrationOrbitFamily *LibrationOrbitFamily::SOUTHERN = NULL;

      jclass LibrationOrbitFamily::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LibrationOrbitFamily");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_8af61d623436e3e7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/LibrationOrbitFamily;");
          mids$[mid_values_9f7b8bd9aa32bf9e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/LibrationOrbitFamily;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NORTHERN = new LibrationOrbitFamily(env->getStaticObjectField(cls, "NORTHERN", "Lorg/orekit/orbits/LibrationOrbitFamily;"));
          SOUTHERN = new LibrationOrbitFamily(env->getStaticObjectField(cls, "SOUTHERN", "Lorg/orekit/orbits/LibrationOrbitFamily;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LibrationOrbitFamily LibrationOrbitFamily::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LibrationOrbitFamily(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8af61d623436e3e7], a0.this$));
      }

      JArray< LibrationOrbitFamily > LibrationOrbitFamily::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LibrationOrbitFamily >(env->callStaticObjectMethod(cls, mids$[mid_values_9f7b8bd9aa32bf9e]));
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
      static PyObject *t_LibrationOrbitFamily_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitFamily_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitFamily_of_(t_LibrationOrbitFamily *self, PyObject *args);
      static PyObject *t_LibrationOrbitFamily_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LibrationOrbitFamily_values(PyTypeObject *type);
      static PyObject *t_LibrationOrbitFamily_get__parameters_(t_LibrationOrbitFamily *self, void *data);
      static PyGetSetDef t_LibrationOrbitFamily__fields_[] = {
        DECLARE_GET_FIELD(t_LibrationOrbitFamily, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LibrationOrbitFamily__methods_[] = {
        DECLARE_METHOD(t_LibrationOrbitFamily, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitFamily, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitFamily, of_, METH_VARARGS),
        DECLARE_METHOD(t_LibrationOrbitFamily, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitFamily, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LibrationOrbitFamily)[] = {
        { Py_tp_methods, t_LibrationOrbitFamily__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LibrationOrbitFamily__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LibrationOrbitFamily)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LibrationOrbitFamily, t_LibrationOrbitFamily, LibrationOrbitFamily);
      PyObject *t_LibrationOrbitFamily::wrap_Object(const LibrationOrbitFamily& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitFamily::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitFamily *self = (t_LibrationOrbitFamily *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LibrationOrbitFamily::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitFamily::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitFamily *self = (t_LibrationOrbitFamily *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LibrationOrbitFamily::install(PyObject *module)
      {
        installType(&PY_TYPE(LibrationOrbitFamily), &PY_TYPE_DEF(LibrationOrbitFamily), module, "LibrationOrbitFamily", 0);
      }

      void t_LibrationOrbitFamily::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "class_", make_descriptor(LibrationOrbitFamily::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "wrapfn_", make_descriptor(t_LibrationOrbitFamily::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "boxfn_", make_descriptor(boxObject));
        env->getClass(LibrationOrbitFamily::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "NORTHERN", make_descriptor(t_LibrationOrbitFamily::wrap_Object(*LibrationOrbitFamily::NORTHERN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "SOUTHERN", make_descriptor(t_LibrationOrbitFamily::wrap_Object(*LibrationOrbitFamily::SOUTHERN)));
      }

      static PyObject *t_LibrationOrbitFamily_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LibrationOrbitFamily::initializeClass, 1)))
          return NULL;
        return t_LibrationOrbitFamily::wrap_Object(LibrationOrbitFamily(((t_LibrationOrbitFamily *) arg)->object.this$));
      }
      static PyObject *t_LibrationOrbitFamily_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LibrationOrbitFamily::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LibrationOrbitFamily_of_(t_LibrationOrbitFamily *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LibrationOrbitFamily_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LibrationOrbitFamily result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitFamily::valueOf(a0));
          return t_LibrationOrbitFamily::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LibrationOrbitFamily_values(PyTypeObject *type)
      {
        JArray< LibrationOrbitFamily > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitFamily::values());
        return JArray<jobject>(result.this$).wrap(t_LibrationOrbitFamily::wrap_jobject);
      }
      static PyObject *t_LibrationOrbitFamily_get__parameters_(t_LibrationOrbitFamily *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Enum.h"
#include "java/io/Serializable.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Enum::class$ = NULL;
    jmethodID *Enum::mids$ = NULL;
    bool Enum::live$ = false;

    jclass Enum::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Enum");

        mids$ = new jmethodID[max_mid];
        mids$[mid_compareTo_bbf319b0f1e9c808] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Enum;)I");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getDeclaringClass_7c16c5008b34b3db] = env->getMethodID(cls, "getDeclaringClass", "()Ljava/lang/Class;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_name_11b109bd155ca898] = env->getMethodID(cls, "name", "()Ljava/lang/String;");
        mids$[mid_ordinal_570ce0828f81a2c1] = env->getMethodID(cls, "ordinal", "()I");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_valueOf_e2f80ec8f066cdfb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;");
        mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Enum::compareTo(const Enum & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_bbf319b0f1e9c808], a0.this$);
    }

    jboolean Enum::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Class Enum::getDeclaringClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getDeclaringClass_7c16c5008b34b3db]));
    }

    jint Enum::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    ::java::lang::String Enum::name() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_name_11b109bd155ca898]));
    }

    jint Enum::ordinal() const
    {
      return env->callIntMethod(this$, mids$[mid_ordinal_570ce0828f81a2c1]);
    }

    ::java::lang::String Enum::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    Enum Enum::valueOf(const ::java::lang::Class & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Enum(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e2f80ec8f066cdfb], a0.this$, a1.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Enum_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enum_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enum_of_(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_compareTo(t_Enum *self, PyObject *arg);
    static PyObject *t_Enum_equals(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_getDeclaringClass(t_Enum *self);
    static PyObject *t_Enum_hashCode(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_name(t_Enum *self);
    static PyObject *t_Enum_ordinal(t_Enum *self);
    static PyObject *t_Enum_toString(t_Enum *self, PyObject *args);
    static PyObject *t_Enum_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Enum_get__declaringClass(t_Enum *self, void *data);
    static PyObject *t_Enum_get__parameters_(t_Enum *self, void *data);
    static PyGetSetDef t_Enum__fields_[] = {
      DECLARE_GET_FIELD(t_Enum, declaringClass),
      DECLARE_GET_FIELD(t_Enum, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Enum__methods_[] = {
      DECLARE_METHOD(t_Enum, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enum, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enum, of_, METH_VARARGS),
      DECLARE_METHOD(t_Enum, compareTo, METH_O),
      DECLARE_METHOD(t_Enum, equals, METH_VARARGS),
      DECLARE_METHOD(t_Enum, getDeclaringClass, METH_NOARGS),
      DECLARE_METHOD(t_Enum, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Enum, name, METH_NOARGS),
      DECLARE_METHOD(t_Enum, ordinal, METH_NOARGS),
      DECLARE_METHOD(t_Enum, toString, METH_VARARGS),
      DECLARE_METHOD(t_Enum, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Enum)[] = {
      { Py_tp_methods, t_Enum__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Enum__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Enum)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Enum, t_Enum, Enum);
    PyObject *t_Enum::wrap_Object(const Enum& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enum::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enum *self = (t_Enum *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Enum::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enum::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enum *self = (t_Enum *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Enum::install(PyObject *module)
    {
      installType(&PY_TYPE(Enum), &PY_TYPE_DEF(Enum), module, "Enum", 0);
    }

    void t_Enum::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enum), "class_", make_descriptor(Enum::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enum), "wrapfn_", make_descriptor(t_Enum::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enum), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Enum_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Enum::initializeClass, 1)))
        return NULL;
      return t_Enum::wrap_Object(Enum(((t_Enum *) arg)->object.this$));
    }
    static PyObject *t_Enum_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Enum::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Enum_of_(t_Enum *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Enum_compareTo(t_Enum *self, PyObject *arg)
    {
      Enum a0((jobject) NULL);
      PyTypeObject **p0;
      jint result;

      if (!parseArg(arg, "K", Enum::initializeClass, &a0, &p0, t_Enum::parameters_))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Enum_equals(t_Enum *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Enum), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Enum_getDeclaringClass(t_Enum *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getDeclaringClass());
      return ::java::lang::t_Class::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Enum_hashCode(t_Enum *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Enum), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Enum_name(t_Enum *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.name());
      return j2p(result);
    }

    static PyObject *t_Enum_ordinal(t_Enum *self)
    {
      jint result;
      OBJ_CALL(result = self->object.ordinal());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Enum_toString(t_Enum *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Enum), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Enum_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Class a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::String a1((jobject) NULL);
      Enum result((jobject) NULL);

      if (!parseArgs(args, "Ks", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_, &a1))
      {
        OBJ_CALL(result = ::java::lang::Enum::valueOf(a0, a1));
        return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : t_Enum::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
    static PyObject *t_Enum_get__parameters_(t_Enum *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Enum_get__declaringClass(t_Enum *self, void *data)
    {
      ::java::lang::Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getDeclaringClass());
      return ::java::lang::t_Class::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/MedianDate.h"
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

          ::java::lang::Class *MedianDate::class$ = NULL;
          jmethodID *MedianDate::mids$ = NULL;
          bool MedianDate::live$ = false;

          jclass MedianDate::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/MedianDate");

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

          MedianDate::MedianDate(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c57e287341c9288, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > MedianDate::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_cb44069ef445f941], a0.this$));
          }

          ::java::lang::String MedianDate::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          jboolean MedianDate::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
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
          static PyObject *t_MedianDate_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MedianDate_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MedianDate_init_(t_MedianDate *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MedianDate_getAdditionalState(t_MedianDate *self, PyObject *arg);
          static PyObject *t_MedianDate_getName(t_MedianDate *self);
          static PyObject *t_MedianDate_yields(t_MedianDate *self, PyObject *arg);
          static PyObject *t_MedianDate_get__name(t_MedianDate *self, void *data);
          static PyGetSetDef t_MedianDate__fields_[] = {
            DECLARE_GET_FIELD(t_MedianDate, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MedianDate__methods_[] = {
            DECLARE_METHOD(t_MedianDate, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MedianDate, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MedianDate, getAdditionalState, METH_O),
            DECLARE_METHOD(t_MedianDate, getName, METH_NOARGS),
            DECLARE_METHOD(t_MedianDate, yields, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MedianDate)[] = {
            { Py_tp_methods, t_MedianDate__methods_ },
            { Py_tp_init, (void *) t_MedianDate_init_ },
            { Py_tp_getset, t_MedianDate__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MedianDate)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MedianDate, t_MedianDate, MedianDate);

          void t_MedianDate::install(PyObject *module)
          {
            installType(&PY_TYPE(MedianDate), &PY_TYPE_DEF(MedianDate), module, "MedianDate", 0);
          }

          void t_MedianDate::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MedianDate), "class_", make_descriptor(MedianDate::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MedianDate), "wrapfn_", make_descriptor(t_MedianDate::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MedianDate), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MedianDate_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MedianDate::initializeClass, 1)))
              return NULL;
            return t_MedianDate::wrap_Object(MedianDate(((t_MedianDate *) arg)->object.this$));
          }
          static PyObject *t_MedianDate_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MedianDate::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MedianDate_init_(t_MedianDate *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            MedianDate object((jobject) NULL);

            if (!parseArgs(args, "sss", &a0, &a1, &a2))
            {
              INT_CALL(object = MedianDate(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MedianDate_getAdditionalState(t_MedianDate *self, PyObject *arg)
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

          static PyObject *t_MedianDate_getName(t_MedianDate *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MedianDate_yields(t_MedianDate *self, PyObject *arg)
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

          static PyObject *t_MedianDate_get__name(t_MedianDate *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$ManeuvrableConsumer::class$ = NULL;
            jmethodID *ParseToken$ManeuvrableConsumer::mids$ = NULL;
            bool ParseToken$ManeuvrableConsumer::live$ = false;

            jclass ParseToken$ManeuvrableConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_6c07bc4d7ea23f3b] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$ManeuvrableConsumer::accept(const ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_6c07bc4d7ea23f3b], a0.this$);
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
            static PyObject *t_ParseToken$ManeuvrableConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$ManeuvrableConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$ManeuvrableConsumer_accept(t_ParseToken$ManeuvrableConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$ManeuvrableConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$ManeuvrableConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$ManeuvrableConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$ManeuvrableConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$ManeuvrableConsumer)[] = {
              { Py_tp_methods, t_ParseToken$ManeuvrableConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$ManeuvrableConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$ManeuvrableConsumer, t_ParseToken$ManeuvrableConsumer, ParseToken$ManeuvrableConsumer);

            void t_ParseToken$ManeuvrableConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$ManeuvrableConsumer), &PY_TYPE_DEF(ParseToken$ManeuvrableConsumer), module, "ParseToken$ManeuvrableConsumer", 0);
            }

            void t_ParseToken$ManeuvrableConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$ManeuvrableConsumer), "class_", make_descriptor(ParseToken$ManeuvrableConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$ManeuvrableConsumer), "wrapfn_", make_descriptor(t_ParseToken$ManeuvrableConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$ManeuvrableConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$ManeuvrableConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$ManeuvrableConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$ManeuvrableConsumer::wrap_Object(ParseToken$ManeuvrableConsumer(((t_ParseToken$ManeuvrableConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$ManeuvrableConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$ManeuvrableConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$ManeuvrableConsumer_accept(t_ParseToken$ManeuvrableConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::parameters_))
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
#include "org/hipparchus/linear/DefaultIterativeLinearSolverEvent.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultIterativeLinearSolverEvent::class$ = NULL;
      jmethodID *DefaultIterativeLinearSolverEvent::mids$ = NULL;
      bool DefaultIterativeLinearSolverEvent::live$ = false;

      jclass DefaultIterativeLinearSolverEvent::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultIterativeLinearSolverEvent");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5feb33b9e71a0b05] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;ILorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;D)V");
          mids$[mid_init$_a6ec9b04a59d907a] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;ILorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;D)V");
          mids$[mid_getNormOfResidual_dff5885c2c873297] = env->getMethodID(cls, "getNormOfResidual", "()D");
          mids$[mid_getResidual_aab4fbf77867daa8] = env->getMethodID(cls, "getResidual", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getRightHandSideVector_aab4fbf77867daa8] = env->getMethodID(cls, "getRightHandSideVector", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSolution_aab4fbf77867daa8] = env->getMethodID(cls, "getSolution", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_providesResidual_b108b35ef48e27bd] = env->getMethodID(cls, "providesResidual", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultIterativeLinearSolverEvent::DefaultIterativeLinearSolverEvent(const ::java::lang::Object & a0, jint a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3, jdouble a4) : ::org::hipparchus::linear::IterativeLinearSolverEvent(env->newObject(initializeClass, &mids$, mid_init$_5feb33b9e71a0b05, a0.this$, a1, a2.this$, a3.this$, a4)) {}

      DefaultIterativeLinearSolverEvent::DefaultIterativeLinearSolverEvent(const ::java::lang::Object & a0, jint a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3, const ::org::hipparchus::linear::RealVector & a4, jdouble a5) : ::org::hipparchus::linear::IterativeLinearSolverEvent(env->newObject(initializeClass, &mids$, mid_init$_a6ec9b04a59d907a, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5)) {}

      jdouble DefaultIterativeLinearSolverEvent::getNormOfResidual() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormOfResidual_dff5885c2c873297]);
      }

      ::org::hipparchus::linear::RealVector DefaultIterativeLinearSolverEvent::getResidual() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getResidual_aab4fbf77867daa8]));
      }

      ::org::hipparchus::linear::RealVector DefaultIterativeLinearSolverEvent::getRightHandSideVector() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRightHandSideVector_aab4fbf77867daa8]));
      }

      ::org::hipparchus::linear::RealVector DefaultIterativeLinearSolverEvent::getSolution() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSolution_aab4fbf77867daa8]));
      }

      jboolean DefaultIterativeLinearSolverEvent::providesResidual() const
      {
        return env->callBooleanMethod(this$, mids$[mid_providesResidual_b108b35ef48e27bd]);
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
      static PyObject *t_DefaultIterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultIterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DefaultIterativeLinearSolverEvent_init_(t_DefaultIterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getNormOfResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getRightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getSolution(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_providesResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__normOfResidual(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__residual(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__rightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__solution(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyGetSetDef t_DefaultIterativeLinearSolverEvent__fields_[] = {
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, normOfResidual),
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, residual),
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, rightHandSideVector),
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, solution),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DefaultIterativeLinearSolverEvent__methods_[] = {
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getNormOfResidual, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getResidual, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getRightHandSideVector, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getSolution, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, providesResidual, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultIterativeLinearSolverEvent)[] = {
        { Py_tp_methods, t_DefaultIterativeLinearSolverEvent__methods_ },
        { Py_tp_init, (void *) t_DefaultIterativeLinearSolverEvent_init_ },
        { Py_tp_getset, t_DefaultIterativeLinearSolverEvent__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultIterativeLinearSolverEvent)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::IterativeLinearSolverEvent),
        NULL
      };

      DEFINE_TYPE(DefaultIterativeLinearSolverEvent, t_DefaultIterativeLinearSolverEvent, DefaultIterativeLinearSolverEvent);

      void t_DefaultIterativeLinearSolverEvent::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultIterativeLinearSolverEvent), &PY_TYPE_DEF(DefaultIterativeLinearSolverEvent), module, "DefaultIterativeLinearSolverEvent", 0);
      }

      void t_DefaultIterativeLinearSolverEvent::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultIterativeLinearSolverEvent), "class_", make_descriptor(DefaultIterativeLinearSolverEvent::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultIterativeLinearSolverEvent), "wrapfn_", make_descriptor(t_DefaultIterativeLinearSolverEvent::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultIterativeLinearSolverEvent), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultIterativeLinearSolverEvent::initializeClass, 1)))
          return NULL;
        return t_DefaultIterativeLinearSolverEvent::wrap_Object(DefaultIterativeLinearSolverEvent(((t_DefaultIterativeLinearSolverEvent *) arg)->object.this$));
      }
      static PyObject *t_DefaultIterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultIterativeLinearSolverEvent::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DefaultIterativeLinearSolverEvent_init_(t_DefaultIterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::java::lang::Object a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            jdouble a4;
            DefaultIterativeLinearSolverEvent object((jobject) NULL);

            if (!parseArgs(args, "oIkkD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = DefaultIterativeLinearSolverEvent(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::java::lang::Object a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector a4((jobject) NULL);
            jdouble a5;
            DefaultIterativeLinearSolverEvent object((jobject) NULL);

            if (!parseArgs(args, "oIkkkD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DefaultIterativeLinearSolverEvent(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_DefaultIterativeLinearSolverEvent_getNormOfResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNormOfResidual());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getNormOfResidual", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getResidual());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getResidual", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getRightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRightHandSideVector());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getRightHandSideVector", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getSolution(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSolution());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getSolution", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_providesResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.providesResidual());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "providesResidual", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__normOfResidual(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormOfResidual());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__residual(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getResidual());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__rightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightHandSideVector());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__solution(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolution());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/FieldDSSTPropagator.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/util/Set.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *FieldDSSTPropagator::class$ = NULL;
          jmethodID *FieldDSSTPropagator::mids$ = NULL;
          bool FieldDSSTPropagator::live$ = false;

          jclass FieldDSSTPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/FieldDSSTPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bb6ed468e0500083] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;)V");
              mids$[mid_init$_fd706f9f174d8023] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_init$_b659cdfea9340f48] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_init$_aa1947ee6105f29f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/PropagationType;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_addForceModel_8788ca485d7d47e4] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel;)V");
              mids$[mid_computeMeanState_95a39c01c9339818] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_computeMeanState_2028ff7746183b5f] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;DI)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_computeOsculatingState_95a39c01c9339818] = env->getStaticMethodID(cls, "computeOsculatingState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_getAllForceModels_2afa36052df4765d] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
              mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
              mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
              mids$[mid_getSatelliteRevolution_570ce0828f81a2c1] = env->getMethodID(cls, "getSatelliteRevolution", "()I");
              mids$[mid_getSelectedCoefficients_015730311a5bacdc] = env->getMethodID(cls, "getSelectedCoefficients", "()Ljava/util/Set;");
              mids$[mid_initialIsOsculating_b108b35ef48e27bd] = env->getMethodID(cls, "initialIsOsculating", "()Z");
              mids$[mid_removeForceModels_0fa09c18fee449d5] = env->getMethodID(cls, "removeForceModels", "()V");
              mids$[mid_resetInitialState_1463d3d0d52f94dd] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
              mids$[mid_setAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_setInitialState_1463d3d0d52f94dd] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
              mids$[mid_setInitialState_c0db61abf5db836e] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_setInterpolationGridToFixedNumberOfPoints_99803b0791f320ff] = env->getMethodID(cls, "setInterpolationGridToFixedNumberOfPoints", "(I)V");
              mids$[mid_setInterpolationGridToMaxTimeGap_072c8635f2164db9] = env->getMethodID(cls, "setInterpolationGridToMaxTimeGap", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_setMu_072c8635f2164db9] = env->getMethodID(cls, "setMu", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_setSatelliteRevolution_99803b0791f320ff] = env->getMethodID(cls, "setSatelliteRevolution", "(I)V");
              mids$[mid_setSelectedCoefficients_d8e4bbe7420244b7] = env->getMethodID(cls, "setSelectedCoefficients", "(Ljava/util/Set;)V");
              mids$[mid_tolerances_b660a2aeb97c6859] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;)[[D");
              mids$[mid_tolerances_6b50e92c502fa786] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;)[[D");
              mids$[mid_beforeIntegration_8e8de2be1664674a] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_afterIntegration_0fa09c18fee449d5] = env->getMethodID(cls, "afterIntegration", "()V");
              mids$[mid_getInitialIntegrationState_02cea343d9f71933] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_createMapper_16c8184497a1d794] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
              mids$[mid_getMainStateEquations_75bae68924620d17] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_bb6ed468e0500083, a0.this$, a1.this$)) {}

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_fd706f9f174d8023, a0.this$, a1.this$, a2.this$)) {}

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_b659cdfea9340f48, a0.this$, a1.this$, a2.this$)) {}

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::propagation::PropagationType & a2, const ::org::orekit::attitudes::AttitudeProvider & a3) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_aa1947ee6105f29f, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          void FieldDSSTPropagator::addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addForceModel_8788ca485d7d47e4], a0.this$);
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldDSSTPropagator::computeMeanState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::FieldSpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_95a39c01c9339818], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldDSSTPropagator::computeMeanState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2, jdouble a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::FieldSpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_2028ff7746183b5f], a0.this$, a1.this$, a2.this$, a3, a4));
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldDSSTPropagator::computeOsculatingState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::FieldSpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeOsculatingState_95a39c01c9339818], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List FieldDSSTPropagator::getAllForceModels() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_2afa36052df4765d]));
          }

          ::org::orekit::orbits::OrbitType FieldDSSTPropagator::getOrbitType() const
          {
            return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_e29360d311dc0e20]));
          }

          ::org::orekit::orbits::PositionAngleType FieldDSSTPropagator::getPositionAngleType() const
          {
            return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_8f17e83e5a86217c]));
          }

          jint FieldDSSTPropagator::getSatelliteRevolution() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteRevolution_570ce0828f81a2c1]);
          }

          ::java::util::Set FieldDSSTPropagator::getSelectedCoefficients() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getSelectedCoefficients_015730311a5bacdc]));
          }

          jboolean FieldDSSTPropagator::initialIsOsculating() const
          {
            return env->callBooleanMethod(this$, mids$[mid_initialIsOsculating_b108b35ef48e27bd]);
          }

          void FieldDSSTPropagator::removeForceModels() const
          {
            env->callVoidMethod(this$, mids$[mid_removeForceModels_0fa09c18fee449d5]);
          }

          void FieldDSSTPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_1463d3d0d52f94dd], a0.this$);
          }

          void FieldDSSTPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_3cff7c75ea06698c], a0.this$);
          }

          void FieldDSSTPropagator::setInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_1463d3d0d52f94dd], a0.this$);
          }

          void FieldDSSTPropagator::setInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_c0db61abf5db836e], a0.this$, a1.this$);
          }

          void FieldDSSTPropagator::setInterpolationGridToFixedNumberOfPoints(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToFixedNumberOfPoints_99803b0791f320ff], a0);
          }

          void FieldDSSTPropagator::setInterpolationGridToMaxTimeGap(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToMaxTimeGap_072c8635f2164db9], a0.this$);
          }

          void FieldDSSTPropagator::setMu(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMu_072c8635f2164db9], a0.this$);
          }

          void FieldDSSTPropagator::setSatelliteRevolution(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteRevolution_99803b0791f320ff], a0);
          }

          void FieldDSSTPropagator::setSelectedCoefficients(const ::java::util::Set & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSelectedCoefficients_d8e4bbe7420244b7], a0.this$);
          }

          JArray< JArray< jdouble > > FieldDSSTPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_b660a2aeb97c6859], a0.this$, a1.this$));
          }

          JArray< JArray< jdouble > > FieldDSSTPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::orbits::FieldOrbit & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_6b50e92c502fa786], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_FieldDSSTPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_of_(t_FieldDSSTPropagator *self, PyObject *args);
          static int t_FieldDSSTPropagator_init_(t_FieldDSSTPropagator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldDSSTPropagator_addForceModel(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_getAllForceModels(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getOrbitType(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getPositionAngleType(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getSatelliteRevolution(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getSelectedCoefficients(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_initialIsOsculating(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_removeForceModels(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_resetInitialState(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setAttitudeProvider(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setInitialState(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_setMu(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setSatelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_setSelectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_tolerances(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_get__allForceModels(t_FieldDSSTPropagator *self, void *data);
          static int t_FieldDSSTPropagator_set__attitudeProvider(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__initialState(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__interpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__mu(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_FieldDSSTPropagator_get__orbitType(t_FieldDSSTPropagator *self, void *data);
          static PyObject *t_FieldDSSTPropagator_get__positionAngleType(t_FieldDSSTPropagator *self, void *data);
          static PyObject *t_FieldDSSTPropagator_get__satelliteRevolution(t_FieldDSSTPropagator *self, void *data);
          static int t_FieldDSSTPropagator_set__satelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_FieldDSSTPropagator_get__selectedCoefficients(t_FieldDSSTPropagator *self, void *data);
          static int t_FieldDSSTPropagator_set__selectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_FieldDSSTPropagator_get__parameters_(t_FieldDSSTPropagator *self, void *data);
          static PyGetSetDef t_FieldDSSTPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, allForceModels),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, attitudeProvider),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, initialState),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, interpolationGridToFixedNumberOfPoints),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, interpolationGridToMaxTimeGap),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, mu),
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, orbitType),
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, positionAngleType),
            DECLARE_GETSET_FIELD(t_FieldDSSTPropagator, satelliteRevolution),
            DECLARE_GETSET_FIELD(t_FieldDSSTPropagator, selectedCoefficients),
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldDSSTPropagator__methods_[] = {
            DECLARE_METHOD(t_FieldDSSTPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, addForceModel, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, computeMeanState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, computeOsculatingState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getAllForceModels, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getOrbitType, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getPositionAngleType, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getSatelliteRevolution, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getSelectedCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, initialIsOsculating, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, removeForceModels, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setAttitudeProvider, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setInitialState, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setInterpolationGridToFixedNumberOfPoints, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, setInterpolationGridToMaxTimeGap, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, setMu, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setSatelliteRevolution, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, setSelectedCoefficients, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, tolerances, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldDSSTPropagator)[] = {
            { Py_tp_methods, t_FieldDSSTPropagator__methods_ },
            { Py_tp_init, (void *) t_FieldDSSTPropagator_init_ },
            { Py_tp_getset, t_FieldDSSTPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldDSSTPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator),
            NULL
          };

          DEFINE_TYPE(FieldDSSTPropagator, t_FieldDSSTPropagator, FieldDSSTPropagator);
          PyObject *t_FieldDSSTPropagator::wrap_Object(const FieldDSSTPropagator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDSSTPropagator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDSSTPropagator *self = (t_FieldDSSTPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldDSSTPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDSSTPropagator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDSSTPropagator *self = (t_FieldDSSTPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldDSSTPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldDSSTPropagator), &PY_TYPE_DEF(FieldDSSTPropagator), module, "FieldDSSTPropagator", 0);
          }

          void t_FieldDSSTPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTPropagator), "class_", make_descriptor(FieldDSSTPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTPropagator), "wrapfn_", make_descriptor(t_FieldDSSTPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldDSSTPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldDSSTPropagator::initializeClass, 1)))
              return NULL;
            return t_FieldDSSTPropagator::wrap_Object(FieldDSSTPropagator(((t_FieldDSSTPropagator *) arg)->object.this$));
          }
          static PyObject *t_FieldDSSTPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldDSSTPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldDSSTPropagator_of_(t_FieldDSSTPropagator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldDSSTPropagator_init_(t_FieldDSSTPropagator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::propagation::PropagationType a2((jobject) NULL);
                PyTypeObject **p2;
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::propagation::PropagationType a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::attitudes::AttitudeProvider a3((jobject) NULL);
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KKKk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_, &a3))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1, a2, a3));
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

          static PyObject *t_FieldDSSTPropagator_addForceModel(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addForceModel(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "KkK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::computeMeanState(a0, a1, a2));
                  return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                jdouble a3;
                jint a4;
                ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "KkKDI", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::computeMeanState(a0, a1, a2, a3, a4));
                  return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "computeMeanState", args);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
            ::java::util::Collection a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::computeOsculatingState(a0, a1, a2));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "computeOsculatingState", args);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_getAllForceModels(t_FieldDSSTPropagator *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(DSSTForceModel));
          }

          static PyObject *t_FieldDSSTPropagator_getOrbitType(t_FieldDSSTPropagator *self)
          {
            ::org::orekit::orbits::OrbitType result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
          }

          static PyObject *t_FieldDSSTPropagator_getPositionAngleType(t_FieldDSSTPropagator *self)
          {
            ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
            OBJ_CALL(result = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
          }

          static PyObject *t_FieldDSSTPropagator_getSatelliteRevolution(t_FieldDSSTPropagator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldDSSTPropagator_getSelectedCoefficients(t_FieldDSSTPropagator *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_FieldDSSTPropagator_initialIsOsculating(t_FieldDSSTPropagator *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.initialIsOsculating());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldDSSTPropagator_removeForceModels(t_FieldDSSTPropagator *self)
          {
            OBJ_CALL(self->object.removeForceModels());
            Py_RETURN_NONE;
          }

          static PyObject *t_FieldDSSTPropagator_resetInitialState(t_FieldDSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldDSSTPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_FieldDSSTPropagator_setAttitudeProvider(t_FieldDSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAttitudeProvider(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldDSSTPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
          }

          static PyObject *t_FieldDSSTPropagator_setInitialState(t_FieldDSSTPropagator *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                {
                  OBJ_CALL(self->object.setInitialState(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  OBJ_CALL(self->object.setInitialState(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "setInitialState", args);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setInterpolationGridToFixedNumberOfPoints(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterpolationGridToFixedNumberOfPoints", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.setInterpolationGridToMaxTimeGap(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterpolationGridToMaxTimeGap", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setMu(t_FieldDSSTPropagator *self, PyObject *args)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.setMu(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldDSSTPropagator), (PyObject *) self, "setMu", args, 2);
          }

          static PyObject *t_FieldDSSTPropagator_setSatelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setSatelliteRevolution(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSatelliteRevolution", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setSelectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            ::java::util::Set a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
            {
              OBJ_CALL(self->object.setSelectedCoefficients(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSelectedCoefficients", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_tolerances(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::tolerances(a0, a1));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
              break;
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::tolerances(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
            }

            PyErr_SetArgsError(type, "tolerances", args);
            return NULL;
          }
          static PyObject *t_FieldDSSTPropagator_get__parameters_(t_FieldDSSTPropagator *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldDSSTPropagator_get__allForceModels(t_FieldDSSTPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(value);
          }

          static int t_FieldDSSTPropagator_set__attitudeProvider(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
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

          static int t_FieldDSSTPropagator_set__initialState(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setInitialState(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "initialState", arg);
            return -1;
          }

          static int t_FieldDSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setInterpolationGridToFixedNumberOfPoints(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interpolationGridToFixedNumberOfPoints", arg);
            return -1;
          }

          static int t_FieldDSSTPropagator_set__interpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                INT_CALL(self->object.setInterpolationGridToMaxTimeGap(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interpolationGridToMaxTimeGap", arg);
            return -1;
          }

          static int t_FieldDSSTPropagator_set__mu(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                INT_CALL(self->object.setMu(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "mu", arg);
            return -1;
          }

          static PyObject *t_FieldDSSTPropagator_get__orbitType(t_FieldDSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
          }

          static PyObject *t_FieldDSSTPropagator_get__positionAngleType(t_FieldDSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            OBJ_CALL(value = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
          }

          static PyObject *t_FieldDSSTPropagator_get__satelliteRevolution(t_FieldDSSTPropagator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) value);
          }
          static int t_FieldDSSTPropagator_set__satelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setSatelliteRevolution(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "satelliteRevolution", arg);
            return -1;
          }

          static PyObject *t_FieldDSSTPropagator_get__selectedCoefficients(t_FieldDSSTPropagator *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(value);
          }
          static int t_FieldDSSTPropagator_set__selectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::java::util::Set value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::Set::initializeClass, &value))
              {
                INT_CALL(self->object.setSelectedCoefficients(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "selectedCoefficients", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "java/util/Locale.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/text/ParsePosition.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrixFormat::class$ = NULL;
      jmethodID *RealMatrixFormat::mids$ = NULL;
      bool RealMatrixFormat::live$ = false;

      jclass RealMatrixFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrixFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_256f36a22c0d0f55] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_0be9bb25c5e386d0] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_init$_57c74c547ec2ab35] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
          mids$[mid_format_e7aa5a6f1a34a6d6] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealMatrix;)Ljava/lang/String;");
          mids$[mid_format_6f7ed89c6879f780] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealMatrix;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_c5ed07ebd55821bb] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getColumnSeparator_11b109bd155ca898] = env->getMethodID(cls, "getColumnSeparator", "()Ljava/lang/String;");
          mids$[mid_getFormat_24f83dea4a8657b1] = env->getMethodID(cls, "getFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getPrefix_11b109bd155ca898] = env->getMethodID(cls, "getPrefix", "()Ljava/lang/String;");
          mids$[mid_getRealMatrixFormat_840dbe7816392c76] = env->getStaticMethodID(cls, "getRealMatrixFormat", "()Lorg/hipparchus/linear/RealMatrixFormat;");
          mids$[mid_getRealMatrixFormat_f75c44444261c69a] = env->getStaticMethodID(cls, "getRealMatrixFormat", "(Ljava/util/Locale;)Lorg/hipparchus/linear/RealMatrixFormat;");
          mids$[mid_getRowPrefix_11b109bd155ca898] = env->getMethodID(cls, "getRowPrefix", "()Ljava/lang/String;");
          mids$[mid_getRowSeparator_11b109bd155ca898] = env->getMethodID(cls, "getRowSeparator", "()Ljava/lang/String;");
          mids$[mid_getRowSuffix_11b109bd155ca898] = env->getMethodID(cls, "getRowSuffix", "()Ljava/lang/String;");
          mids$[mid_getSuffix_11b109bd155ca898] = env->getMethodID(cls, "getSuffix", "()Ljava/lang/String;");
          mids$[mid_parse_953cb7e531a567df] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_parse_9142c3e00ceede7e] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealMatrixFormat::RealMatrixFormat() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      RealMatrixFormat::RealMatrixFormat(const ::java::text::NumberFormat & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_256f36a22c0d0f55, a0.this$)) {}

      RealMatrixFormat::RealMatrixFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0be9bb25c5e386d0, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      RealMatrixFormat::RealMatrixFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, const ::java::text::NumberFormat & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_57c74c547ec2ab35, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      ::java::lang::String RealMatrixFormat::format(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_e7aa5a6f1a34a6d6], a0.this$));
      }

      ::java::lang::StringBuffer RealMatrixFormat::format(const ::org::hipparchus::linear::RealMatrix & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_6f7ed89c6879f780], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > RealMatrixFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_c5ed07ebd55821bb]));
      }

      ::java::lang::String RealMatrixFormat::getColumnSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getColumnSeparator_11b109bd155ca898]));
      }

      ::java::text::NumberFormat RealMatrixFormat::getFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getFormat_24f83dea4a8657b1]));
      }

      ::java::lang::String RealMatrixFormat::getPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrefix_11b109bd155ca898]));
      }

      RealMatrixFormat RealMatrixFormat::getRealMatrixFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return RealMatrixFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealMatrixFormat_840dbe7816392c76]));
      }

      RealMatrixFormat RealMatrixFormat::getRealMatrixFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RealMatrixFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealMatrixFormat_f75c44444261c69a], a0.this$));
      }

      ::java::lang::String RealMatrixFormat::getRowPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRowPrefix_11b109bd155ca898]));
      }

      ::java::lang::String RealMatrixFormat::getRowSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRowSeparator_11b109bd155ca898]));
      }

      ::java::lang::String RealMatrixFormat::getRowSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRowSuffix_11b109bd155ca898]));
      }

      ::java::lang::String RealMatrixFormat::getSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSuffix_11b109bd155ca898]));
      }

      ::org::hipparchus::linear::RealMatrix RealMatrixFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_parse_953cb7e531a567df], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix RealMatrixFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_parse_9142c3e00ceede7e], a0.this$, a1.this$));
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
      static PyObject *t_RealMatrixFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealMatrixFormat_init_(t_RealMatrixFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealMatrixFormat_format(t_RealMatrixFormat *self, PyObject *args);
      static PyObject *t_RealMatrixFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_RealMatrixFormat_getColumnSeparator(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getFormat(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getPrefix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getRealMatrixFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_RealMatrixFormat_getRowPrefix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getRowSeparator(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getRowSuffix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_getSuffix(t_RealMatrixFormat *self);
      static PyObject *t_RealMatrixFormat_parse(t_RealMatrixFormat *self, PyObject *args);
      static PyObject *t_RealMatrixFormat_get__availableLocales(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__columnSeparator(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__prefix(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__realMatrixFormat(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__rowPrefix(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__rowSeparator(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__rowSuffix(t_RealMatrixFormat *self, void *data);
      static PyObject *t_RealMatrixFormat_get__suffix(t_RealMatrixFormat *self, void *data);
      static PyGetSetDef t_RealMatrixFormat__fields_[] = {
        DECLARE_GET_FIELD(t_RealMatrixFormat, availableLocales),
        DECLARE_GET_FIELD(t_RealMatrixFormat, columnSeparator),
        DECLARE_GET_FIELD(t_RealMatrixFormat, prefix),
        DECLARE_GET_FIELD(t_RealMatrixFormat, realMatrixFormat),
        DECLARE_GET_FIELD(t_RealMatrixFormat, rowPrefix),
        DECLARE_GET_FIELD(t_RealMatrixFormat, rowSeparator),
        DECLARE_GET_FIELD(t_RealMatrixFormat, rowSuffix),
        DECLARE_GET_FIELD(t_RealMatrixFormat, suffix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealMatrixFormat__methods_[] = {
        DECLARE_METHOD(t_RealMatrixFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, getColumnSeparator, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getFormat, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getPrefix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getRealMatrixFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixFormat, getRowPrefix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getRowSeparator, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getRowSuffix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, getSuffix, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrixFormat)[] = {
        { Py_tp_methods, t_RealMatrixFormat__methods_ },
        { Py_tp_init, (void *) t_RealMatrixFormat_init_ },
        { Py_tp_getset, t_RealMatrixFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrixFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealMatrixFormat, t_RealMatrixFormat, RealMatrixFormat);

      void t_RealMatrixFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrixFormat), &PY_TYPE_DEF(RealMatrixFormat), module, "RealMatrixFormat", 0);
      }

      void t_RealMatrixFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixFormat), "class_", make_descriptor(RealMatrixFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixFormat), "wrapfn_", make_descriptor(t_RealMatrixFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrixFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrixFormat::initializeClass, 1)))
          return NULL;
        return t_RealMatrixFormat::wrap_Object(RealMatrixFormat(((t_RealMatrixFormat *) arg)->object.this$));
      }
      static PyObject *t_RealMatrixFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrixFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealMatrixFormat_init_(t_RealMatrixFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealMatrixFormat object((jobject) NULL);

            INT_CALL(object = RealMatrixFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            RealMatrixFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = RealMatrixFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::java::lang::String a4((jobject) NULL);
            ::java::lang::String a5((jobject) NULL);
            RealMatrixFormat object((jobject) NULL);

            if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = RealMatrixFormat(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::java::lang::String a4((jobject) NULL);
            ::java::lang::String a5((jobject) NULL);
            ::java::text::NumberFormat a6((jobject) NULL);
            RealMatrixFormat object((jobject) NULL);

            if (!parseArgs(args, "ssssssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = RealMatrixFormat(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_RealMatrixFormat_format(t_RealMatrixFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_RealMatrixFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::linear::RealMatrixFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealMatrixFormat_getColumnSeparator(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getColumnSeparator());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getFormat(t_RealMatrixFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_RealMatrixFormat_getPrefix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrefix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getRealMatrixFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealMatrixFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::linear::RealMatrixFormat::getRealMatrixFormat());
            return t_RealMatrixFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            RealMatrixFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::RealMatrixFormat::getRealMatrixFormat(a0));
              return t_RealMatrixFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getRealMatrixFormat", args);
        return NULL;
      }

      static PyObject *t_RealMatrixFormat_getRowPrefix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getRowPrefix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getRowSeparator(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getRowSeparator());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getRowSuffix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getRowSuffix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_getSuffix(t_RealMatrixFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSuffix());
        return j2p(result);
      }

      static PyObject *t_RealMatrixFormat_parse(t_RealMatrixFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_RealMatrixFormat_get__availableLocales(t_RealMatrixFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealMatrixFormat_get__columnSeparator(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getColumnSeparator());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__prefix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrefix());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__realMatrixFormat(t_RealMatrixFormat *self, void *data)
      {
        RealMatrixFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealMatrixFormat());
        return t_RealMatrixFormat::wrap_Object(value);
      }

      static PyObject *t_RealMatrixFormat_get__rowPrefix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getRowPrefix());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__rowSeparator(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getRowSeparator());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__rowSuffix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getRowSuffix());
        return j2p(value);
      }

      static PyObject *t_RealMatrixFormat_get__suffix(t_RealMatrixFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSuffix());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/PythonNdmConstituent.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Header.h"
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
              mids$[mid_init$_88568a8f3a300101] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/Header;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getConventions_60f9ded87ab7ca4c] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_0b7cf48ee6a922ee] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getHeader_0e1b4a5061fb71d6] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
              mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_validate_0fa09c18fee449d5] = env->getMethodID(cls, "validate", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonNdmConstituent::PythonNdmConstituent(const ::org::orekit::files::ccsds::section::Header & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_88568a8f3a300101, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          void PythonNdmConstituent::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          ::org::orekit::utils::IERSConventions PythonNdmConstituent::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getConventions_60f9ded87ab7ca4c]));
          }

          ::org::orekit::data::DataContext PythonNdmConstituent::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getDataContext_0b7cf48ee6a922ee]));
          }

          ::org::orekit::files::ccsds::section::Header PythonNdmConstituent::getHeader() const
          {
            return ::org::orekit::files::ccsds::section::Header(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getHeader_0e1b4a5061fb71d6]));
          }

          ::java::util::List PythonNdmConstituent::getSegments() const
          {
            return ::java::util::List(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getSegments_2afa36052df4765d]));
          }

          jlong PythonNdmConstituent::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonNdmConstituent::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
          }

          void PythonNdmConstituent::validate() const
          {
            env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_validate_0fa09c18fee449d5]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_492808a339bfa35f]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_492808a339bfa35f]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_492808a339bfa35f]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_492808a339bfa35f]);
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
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonNdmConstituent_validate5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_492808a339bfa35f]);
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonFieldPropagator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldPropagator::class$ = NULL;
      jmethodID *PythonFieldPropagator::mids$ = NULL;
      bool PythonFieldPropagator::live$ = false;

      jclass PythonFieldPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_2c8cec257f03501f] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_addEventDetector_f929ebd2a84dbfe7] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_2afa36052df4765d] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_54ac43f1e933cf20] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_37528d110cff6b74] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_02cea343d9f71933] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_805c1ec2ab9b09dd] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_2cdae1c350dc3e9a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_f6f1ea8aef3019eb] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_propagate_fc770c29e3468de8] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_1463d3d0d52f94dd] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldPropagator::PythonFieldPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonFieldPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonFieldPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonFieldPropagator::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonFieldPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPropagator_of_(t_PythonFieldPropagator *self, PyObject *args);
      static int t_PythonFieldPropagator_init_(t_PythonFieldPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldPropagator_finalize(t_PythonFieldPropagator *self);
      static PyObject *t_PythonFieldPropagator_pythonExtension(t_PythonFieldPropagator *self, PyObject *args);
      static void JNICALL t_PythonFieldPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonFieldPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldPropagator_get__self(t_PythonFieldPropagator *self, void *data);
      static PyObject *t_PythonFieldPropagator_get__parameters_(t_PythonFieldPropagator *self, void *data);
      static PyGetSetDef t_PythonFieldPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldPropagator, self),
        DECLARE_GET_FIELD(t_PythonFieldPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldPropagator)[] = {
        { Py_tp_methods, t_PythonFieldPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldPropagator_init_ },
        { Py_tp_getset, t_PythonFieldPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldPropagator, t_PythonFieldPropagator, PythonFieldPropagator);
      PyObject *t_PythonFieldPropagator::wrap_Object(const PythonFieldPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPropagator *self = (t_PythonFieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPropagator *self = (t_PythonFieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldPropagator), &PY_TYPE_DEF(PythonFieldPropagator), module, "PythonFieldPropagator", 1);
      }

      void t_PythonFieldPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPropagator), "class_", make_descriptor(PythonFieldPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPropagator), "wrapfn_", make_descriptor(t_PythonFieldPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V", (void *) t_PythonFieldPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonFieldPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonFieldPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonFieldPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;", (void *) t_PythonFieldPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonFieldPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFieldPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonFieldPropagator_getManagedAdditionalStates9 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;", (void *) t_PythonFieldPropagator_getMultiplexer10 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonFieldPropagator_getPVCoordinates11 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonFieldPropagator_isAdditionalStateManaged12 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldPropagator_propagate13 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldPropagator_propagate14 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldPropagator_pythonDecRef15 },
          { "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldPropagator_resetInitialState16 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonFieldPropagator_setAttitudeProvider17 },
        };
        env->registerNatives(cls, methods, 18);
      }

      static PyObject *t_PythonFieldPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldPropagator::wrap_Object(PythonFieldPropagator(((t_PythonFieldPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldPropagator_of_(t_PythonFieldPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldPropagator_init_(t_PythonFieldPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldPropagator object((jobject) NULL);

        INT_CALL(object = PythonFieldPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldPropagator_finalize(t_PythonFieldPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldPropagator_pythonExtension(t_PythonFieldPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonFieldPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldAdditionalStateProvider::wrap_Object(::org::orekit::propagation::FieldAdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonFieldPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalStateProviders", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getAdditionalStateProviders", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getAttitudeProvider", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldEphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getFrame", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("getInitialState", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::String > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getManagedAdditionalStates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[s", &value))
        {
          throwTypeError("getManagedAdditionalStates", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer::initializeClass, &value))
        {
          throwTypeError("getMultiplexer", result);
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

      static jobject JNICALL t_PythonFieldPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
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

      static jboolean JNICALL t_PythonFieldPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isAdditionalStateManaged", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isAdditionalStateManaged", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonFieldPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static jobject JNICALL t_PythonFieldPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonFieldPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonFieldPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPropagator::mids$[PythonFieldPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "setAttitudeProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonFieldPropagator_get__self(t_PythonFieldPropagator *self, void *data)
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
      static PyObject *t_PythonFieldPropagator_get__parameters_(t_PythonFieldPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/HermiteInterpolator.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *HermiteInterpolator::class$ = NULL;
        jmethodID *HermiteInterpolator::mids$ = NULL;
        bool HermiteInterpolator::live$ = false;

        jclass HermiteInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/HermiteInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSamplePoint_4908d66a94509f65] = env->getMethodID(cls, "addSamplePoint", "(D[[D)V");
            mids$[mid_derivatives_1f43101c22428bd8] = env->getMethodID(cls, "derivatives", "(DI)[[D");
            mids$[mid_getPolynomials_02eeb9e6c0dfd60f] = env->getMethodID(cls, "getPolynomials", "()[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_value_cd41055053027787] = env->getMethodID(cls, "value", "(D)[D");
            mids$[mid_value_75b23942a40a3816] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)[Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HermiteInterpolator::HermiteInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void HermiteInterpolator::addSamplePoint(jdouble a0, const JArray< JArray< jdouble > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSamplePoint_4908d66a94509f65], a0, a1.this$);
        }

        JArray< JArray< jdouble > > HermiteInterpolator::derivatives(jdouble a0, jint a1) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_derivatives_1f43101c22428bd8], a0, a1));
        }

        JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > HermiteInterpolator::getPolynomials() const
        {
          return JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getPolynomials_02eeb9e6c0dfd60f]));
        }

        JArray< jdouble > HermiteInterpolator::value(jdouble a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_cd41055053027787], a0));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > HermiteInterpolator::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_value_75b23942a40a3816], a0.this$));
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
        static PyObject *t_HermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HermiteInterpolator_init_(t_HermiteInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HermiteInterpolator_addSamplePoint(t_HermiteInterpolator *self, PyObject *args);
        static PyObject *t_HermiteInterpolator_derivatives(t_HermiteInterpolator *self, PyObject *args);
        static PyObject *t_HermiteInterpolator_getPolynomials(t_HermiteInterpolator *self);
        static PyObject *t_HermiteInterpolator_value(t_HermiteInterpolator *self, PyObject *args);
        static PyObject *t_HermiteInterpolator_get__polynomials(t_HermiteInterpolator *self, void *data);
        static PyGetSetDef t_HermiteInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_HermiteInterpolator, polynomials),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HermiteInterpolator__methods_[] = {
          DECLARE_METHOD(t_HermiteInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HermiteInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HermiteInterpolator, addSamplePoint, METH_VARARGS),
          DECLARE_METHOD(t_HermiteInterpolator, derivatives, METH_VARARGS),
          DECLARE_METHOD(t_HermiteInterpolator, getPolynomials, METH_NOARGS),
          DECLARE_METHOD(t_HermiteInterpolator, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HermiteInterpolator)[] = {
          { Py_tp_methods, t_HermiteInterpolator__methods_ },
          { Py_tp_init, (void *) t_HermiteInterpolator_init_ },
          { Py_tp_getset, t_HermiteInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HermiteInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HermiteInterpolator, t_HermiteInterpolator, HermiteInterpolator);

        void t_HermiteInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(HermiteInterpolator), &PY_TYPE_DEF(HermiteInterpolator), module, "HermiteInterpolator", 0);
        }

        void t_HermiteInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteInterpolator), "class_", make_descriptor(HermiteInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteInterpolator), "wrapfn_", make_descriptor(t_HermiteInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HermiteInterpolator::initializeClass, 1)))
            return NULL;
          return t_HermiteInterpolator::wrap_Object(HermiteInterpolator(((t_HermiteInterpolator *) arg)->object.this$));
        }
        static PyObject *t_HermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HermiteInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HermiteInterpolator_init_(t_HermiteInterpolator *self, PyObject *args, PyObject *kwds)
        {
          HermiteInterpolator object((jobject) NULL);

          INT_CALL(object = HermiteInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_HermiteInterpolator_addSamplePoint(t_HermiteInterpolator *self, PyObject *args)
        {
          jdouble a0;
          JArray< JArray< jdouble > > a1((jobject) NULL);

          if (!parseArgs(args, "D[[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addSamplePoint(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSamplePoint", args);
          return NULL;
        }

        static PyObject *t_HermiteInterpolator_derivatives(t_HermiteInterpolator *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, "DI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.derivatives(a0, a1));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "derivatives", args);
          return NULL;
        }

        static PyObject *t_HermiteInterpolator_getPolynomials(t_HermiteInterpolator *self)
        {
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolynomials());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
        }

        static PyObject *t_HermiteInterpolator_value(t_HermiteInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return result.wrap();
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_HermiteInterpolator_get__polynomials(t_HermiteInterpolator *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *SubHyperplane::class$ = NULL;
        jmethodID *SubHyperplane::mids$ = NULL;
        bool SubHyperplane::live$ = false;

        jclass SubHyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/SubHyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copySelf_6e34449919366687] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getHyperplane_a9ae8c67d757c80a] = env->getMethodID(cls, "getHyperplane", "()Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_getSize_dff5885c2c873297] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_reunite_208a723630302f7b] = env->getMethodID(cls, "reunite", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_split_905725a56f20360c] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SubHyperplane SubHyperplane::copySelf() const
        {
          return SubHyperplane(env->callObjectMethod(this$, mids$[mid_copySelf_6e34449919366687]));
        }

        ::org::hipparchus::geometry::partitioning::Hyperplane SubHyperplane::getHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::Hyperplane(env->callObjectMethod(this$, mids$[mid_getHyperplane_a9ae8c67d757c80a]));
        }

        jdouble SubHyperplane::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_dff5885c2c873297]);
        }

        jboolean SubHyperplane::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
        }

        SubHyperplane SubHyperplane::reunite(const SubHyperplane & a0) const
        {
          return SubHyperplane(env->callObjectMethod(this$, mids$[mid_reunite_208a723630302f7b], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubHyperplane::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_905725a56f20360c], a0.this$));
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
        static PyObject *t_SubHyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane_of_(t_SubHyperplane *self, PyObject *args);
        static PyObject *t_SubHyperplane_copySelf(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_getHyperplane(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_getSize(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_isEmpty(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_reunite(t_SubHyperplane *self, PyObject *arg);
        static PyObject *t_SubHyperplane_split(t_SubHyperplane *self, PyObject *arg);
        static PyObject *t_SubHyperplane_get__empty(t_SubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane_get__hyperplane(t_SubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane_get__size(t_SubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane_get__parameters_(t_SubHyperplane *self, void *data);
        static PyGetSetDef t_SubHyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_SubHyperplane, empty),
          DECLARE_GET_FIELD(t_SubHyperplane, hyperplane),
          DECLARE_GET_FIELD(t_SubHyperplane, size),
          DECLARE_GET_FIELD(t_SubHyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SubHyperplane__methods_[] = {
          DECLARE_METHOD(t_SubHyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_SubHyperplane, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, getHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, getSize, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, isEmpty, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, reunite, METH_O),
          DECLARE_METHOD(t_SubHyperplane, split, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SubHyperplane)[] = {
          { Py_tp_methods, t_SubHyperplane__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SubHyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SubHyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SubHyperplane, t_SubHyperplane, SubHyperplane);
        PyObject *t_SubHyperplane::wrap_Object(const SubHyperplane& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane *self = (t_SubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SubHyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane *self = (t_SubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SubHyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(SubHyperplane), &PY_TYPE_DEF(SubHyperplane), module, "SubHyperplane", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "SplitSubHyperplane", make_descriptor(&PY_TYPE_DEF(SubHyperplane$SplitSubHyperplane)));
        }

        void t_SubHyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "class_", make_descriptor(SubHyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "wrapfn_", make_descriptor(t_SubHyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SubHyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SubHyperplane::initializeClass, 1)))
            return NULL;
          return t_SubHyperplane::wrap_Object(SubHyperplane(((t_SubHyperplane *) arg)->object.this$));
        }
        static PyObject *t_SubHyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SubHyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SubHyperplane_of_(t_SubHyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SubHyperplane_copySelf(t_SubHyperplane *self)
        {
          SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane_getHyperplane(t_SubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane_getSize(t_SubHyperplane *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SubHyperplane_isEmpty(t_SubHyperplane *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEmpty());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SubHyperplane_reunite(t_SubHyperplane *self, PyObject *arg)
        {
          SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          SubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", SubHyperplane::initializeClass, &a0, &p0, t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.reunite(a0));
            return t_SubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "reunite", arg);
          return NULL;
        }

        static PyObject *t_SubHyperplane_split(t_SubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.split(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "split", arg);
          return NULL;
        }
        static PyObject *t_SubHyperplane_get__parameters_(t_SubHyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SubHyperplane_get__empty(t_SubHyperplane *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_SubHyperplane_get__hyperplane(t_SubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(value);
        }

        static PyObject *t_SubHyperplane_get__size(t_SubHyperplane *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BracketingNthOrderBrentSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketingNthOrderBrentSolver::class$ = NULL;
        jmethodID *BracketingNthOrderBrentSolver::mids$ = NULL;
        bool BracketingNthOrderBrentSolver::live$ = false;

        jclass BracketingNthOrderBrentSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketingNthOrderBrentSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_75c2da74a5a59fda] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_01fb2c777e5def32] = env->getMethodID(cls, "<init>", "(DDI)V");
            mids$[mid_init$_447fea67b5450f7f] = env->getMethodID(cls, "<init>", "(DDDI)V");
            mids$[mid_getMaximalOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getMaximalOrder", "()I");
            mids$[mid_solve_ba3e208e0ba870dd] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solve_89bba4a49543a54f] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solveInterval_fff76e1052c58572] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");
            mids$[mid_doSolve_dff5885c2c873297] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_doSolveInterval_6f179d7662d75715] = env->getMethodID(cls, "doSolveInterval", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver(jdouble a0, jint a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_75c2da74a5a59fda, a0, a1)) {}

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_01fb2c777e5def32, a0, a1, a2)) {}

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver(jdouble a0, jdouble a1, jdouble a2, jint a3) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_447fea67b5450f7f, a0, a1, a2, a3)) {}

        jint BracketingNthOrderBrentSolver::getMaximalOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalOrder_570ce0828f81a2c1]);
        }

        jdouble BracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_ba3e208e0ba870dd], a0, a1.this$, a2, a3, a4.this$);
        }

        jdouble BracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_89bba4a49543a54f], a0, a1.this$, a2, a3, a4, a5.this$);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BracketingNthOrderBrentSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_fff76e1052c58572], a0, a1.this$, a2, a3, a4));
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
        static PyObject *t_BracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketingNthOrderBrentSolver_of_(t_BracketingNthOrderBrentSolver *self, PyObject *args);
        static int t_BracketingNthOrderBrentSolver_init_(t_BracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketingNthOrderBrentSolver_getMaximalOrder(t_BracketingNthOrderBrentSolver *self);
        static PyObject *t_BracketingNthOrderBrentSolver_solve(t_BracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_BracketingNthOrderBrentSolver_solveInterval(t_BracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_BracketingNthOrderBrentSolver_get__maximalOrder(t_BracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_BracketingNthOrderBrentSolver_get__parameters_(t_BracketingNthOrderBrentSolver *self, void *data);
        static PyGetSetDef t_BracketingNthOrderBrentSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BracketingNthOrderBrentSolver, maximalOrder),
          DECLARE_GET_FIELD(t_BracketingNthOrderBrentSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketingNthOrderBrentSolver__methods_[] = {
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, getMaximalOrder, METH_NOARGS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BracketingNthOrderBrentSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketingNthOrderBrentSolver)[] = {
          { Py_tp_methods, t_BracketingNthOrderBrentSolver__methods_ },
          { Py_tp_init, (void *) t_BracketingNthOrderBrentSolver_init_ },
          { Py_tp_getset, t_BracketingNthOrderBrentSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketingNthOrderBrentSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BracketingNthOrderBrentSolver, t_BracketingNthOrderBrentSolver, BracketingNthOrderBrentSolver);
        PyObject *t_BracketingNthOrderBrentSolver::wrap_Object(const BracketingNthOrderBrentSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketingNthOrderBrentSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketingNthOrderBrentSolver *self = (t_BracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketingNthOrderBrentSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketingNthOrderBrentSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketingNthOrderBrentSolver *self = (t_BracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketingNthOrderBrentSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketingNthOrderBrentSolver), &PY_TYPE_DEF(BracketingNthOrderBrentSolver), module, "BracketingNthOrderBrentSolver", 0);
        }

        void t_BracketingNthOrderBrentSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketingNthOrderBrentSolver), "class_", make_descriptor(BracketingNthOrderBrentSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketingNthOrderBrentSolver), "wrapfn_", make_descriptor(t_BracketingNthOrderBrentSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketingNthOrderBrentSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketingNthOrderBrentSolver::initializeClass, 1)))
            return NULL;
          return t_BracketingNthOrderBrentSolver::wrap_Object(BracketingNthOrderBrentSolver(((t_BracketingNthOrderBrentSolver *) arg)->object.this$));
        }
        static PyObject *t_BracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketingNthOrderBrentSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketingNthOrderBrentSolver_of_(t_BracketingNthOrderBrentSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BracketingNthOrderBrentSolver_init_(t_BracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BracketingNthOrderBrentSolver object((jobject) NULL);

              INT_CALL(object = BracketingNthOrderBrentSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 2:
            {
              jdouble a0;
              jint a1;
              BracketingNthOrderBrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = BracketingNthOrderBrentSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              BracketingNthOrderBrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = BracketingNthOrderBrentSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jint a3;
              BracketingNthOrderBrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = BracketingNthOrderBrentSolver(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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

        static PyObject *t_BracketingNthOrderBrentSolver_getMaximalOrder(t_BracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketingNthOrderBrentSolver_solve(t_BracketingNthOrderBrentSolver *self, PyObject *args)
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

          return callSuper(PY_TYPE(BracketingNthOrderBrentSolver), (PyObject *) self, "solve", args, 2);
        }

        static PyObject *t_BracketingNthOrderBrentSolver_solveInterval(t_BracketingNthOrderBrentSolver *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BracketingNthOrderBrentSolver_get__parameters_(t_BracketingNthOrderBrentSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketingNthOrderBrentSolver_get__maximalOrder(t_BracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *KalmanFilter::class$ = NULL;
        jmethodID *KalmanFilter::mids$ = NULL;
        bool KalmanFilter::live$ = false;

        jclass KalmanFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/KalmanFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimationStep_ba157b27aa6224ec] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getCorrected_c93ddc26f3b3eef4] = env->getMethodID(cls, "getCorrected", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getPredicted_c93ddc26f3b3eef4] = env->getMethodID(cls, "getPredicted", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_ba157b27aa6224ec], a0.this$));
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanFilter::getCorrected() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getCorrected_c93ddc26f3b3eef4]));
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanFilter::getPredicted() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getPredicted_c93ddc26f3b3eef4]));
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
    namespace filtering {
      namespace kalman {
        static PyObject *t_KalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanFilter_of_(t_KalmanFilter *self, PyObject *args);
        static PyObject *t_KalmanFilter_estimationStep(t_KalmanFilter *self, PyObject *arg);
        static PyObject *t_KalmanFilter_getCorrected(t_KalmanFilter *self);
        static PyObject *t_KalmanFilter_getPredicted(t_KalmanFilter *self);
        static PyObject *t_KalmanFilter_get__corrected(t_KalmanFilter *self, void *data);
        static PyObject *t_KalmanFilter_get__predicted(t_KalmanFilter *self, void *data);
        static PyObject *t_KalmanFilter_get__parameters_(t_KalmanFilter *self, void *data);
        static PyGetSetDef t_KalmanFilter__fields_[] = {
          DECLARE_GET_FIELD(t_KalmanFilter, corrected),
          DECLARE_GET_FIELD(t_KalmanFilter, predicted),
          DECLARE_GET_FIELD(t_KalmanFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanFilter__methods_[] = {
          DECLARE_METHOD(t_KalmanFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_KalmanFilter, estimationStep, METH_O),
          DECLARE_METHOD(t_KalmanFilter, getCorrected, METH_NOARGS),
          DECLARE_METHOD(t_KalmanFilter, getPredicted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanFilter)[] = {
          { Py_tp_methods, t_KalmanFilter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_KalmanFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanFilter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanFilter, t_KalmanFilter, KalmanFilter);
        PyObject *t_KalmanFilter::wrap_Object(const KalmanFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_KalmanFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_KalmanFilter *self = (t_KalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_KalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_KalmanFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_KalmanFilter *self = (t_KalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_KalmanFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanFilter), &PY_TYPE_DEF(KalmanFilter), module, "KalmanFilter", 0);
        }

        void t_KalmanFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanFilter), "class_", make_descriptor(KalmanFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanFilter), "wrapfn_", make_descriptor(t_KalmanFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanFilter::initializeClass, 1)))
            return NULL;
          return t_KalmanFilter::wrap_Object(KalmanFilter(((t_KalmanFilter *) arg)->object.this$));
        }
        static PyObject *t_KalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanFilter_of_(t_KalmanFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_KalmanFilter_estimationStep(t_KalmanFilter *self, PyObject *arg)
        {
          ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.estimationStep(a0));
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
          return NULL;
        }

        static PyObject *t_KalmanFilter_getCorrected(t_KalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_KalmanFilter_getPredicted(t_KalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }
        static PyObject *t_KalmanFilter_get__parameters_(t_KalmanFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_KalmanFilter_get__corrected(t_KalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_KalmanFilter_get__predicted(t_KalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEStateAndDerivative::class$ = NULL;
      jmethodID *ODEStateAndDerivative::mids$ = NULL;
      bool ODEStateAndDerivative::live$ = false;

      jclass ODEStateAndDerivative::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEStateAndDerivative");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ae63edebcc96fd60] = env->getMethodID(cls, "<init>", "(D[D[D)V");
          mids$[mid_init$_650e46f82e7a35d0] = env->getMethodID(cls, "<init>", "(D[D[D[[D[[D)V");
          mids$[mid_getCompleteDerivative_60c7040667a7dc5c] = env->getMethodID(cls, "getCompleteDerivative", "()[D");
          mids$[mid_getPrimaryDerivative_60c7040667a7dc5c] = env->getMethodID(cls, "getPrimaryDerivative", "()[D");
          mids$[mid_getSecondaryDerivative_abe82da4f5c7c981] = env->getMethodID(cls, "getSecondaryDerivative", "(I)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ODEStateAndDerivative::ODEStateAndDerivative(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) : ::org::hipparchus::ode::ODEState(env->newObject(initializeClass, &mids$, mid_init$_ae63edebcc96fd60, a0, a1.this$, a2.this$)) {}

      ODEStateAndDerivative::ODEStateAndDerivative(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4) : ::org::hipparchus::ode::ODEState(env->newObject(initializeClass, &mids$, mid_init$_650e46f82e7a35d0, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< jdouble > ODEStateAndDerivative::getCompleteDerivative() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCompleteDerivative_60c7040667a7dc5c]));
      }

      JArray< jdouble > ODEStateAndDerivative::getPrimaryDerivative() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPrimaryDerivative_60c7040667a7dc5c]));
      }

      JArray< jdouble > ODEStateAndDerivative::getSecondaryDerivative(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSecondaryDerivative_abe82da4f5c7c981], a0));
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
      static PyObject *t_ODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ODEStateAndDerivative_init_(t_ODEStateAndDerivative *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ODEStateAndDerivative_getCompleteDerivative(t_ODEStateAndDerivative *self);
      static PyObject *t_ODEStateAndDerivative_getPrimaryDerivative(t_ODEStateAndDerivative *self);
      static PyObject *t_ODEStateAndDerivative_getSecondaryDerivative(t_ODEStateAndDerivative *self, PyObject *arg);
      static PyObject *t_ODEStateAndDerivative_get__completeDerivative(t_ODEStateAndDerivative *self, void *data);
      static PyObject *t_ODEStateAndDerivative_get__primaryDerivative(t_ODEStateAndDerivative *self, void *data);
      static PyGetSetDef t_ODEStateAndDerivative__fields_[] = {
        DECLARE_GET_FIELD(t_ODEStateAndDerivative, completeDerivative),
        DECLARE_GET_FIELD(t_ODEStateAndDerivative, primaryDerivative),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEStateAndDerivative__methods_[] = {
        DECLARE_METHOD(t_ODEStateAndDerivative, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEStateAndDerivative, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEStateAndDerivative, getCompleteDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ODEStateAndDerivative, getPrimaryDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ODEStateAndDerivative, getSecondaryDerivative, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEStateAndDerivative)[] = {
        { Py_tp_methods, t_ODEStateAndDerivative__methods_ },
        { Py_tp_init, (void *) t_ODEStateAndDerivative_init_ },
        { Py_tp_getset, t_ODEStateAndDerivative__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEStateAndDerivative)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::ODEState),
        NULL
      };

      DEFINE_TYPE(ODEStateAndDerivative, t_ODEStateAndDerivative, ODEStateAndDerivative);

      void t_ODEStateAndDerivative::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEStateAndDerivative), &PY_TYPE_DEF(ODEStateAndDerivative), module, "ODEStateAndDerivative", 0);
      }

      void t_ODEStateAndDerivative::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateAndDerivative), "class_", make_descriptor(ODEStateAndDerivative::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateAndDerivative), "wrapfn_", make_descriptor(t_ODEStateAndDerivative::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateAndDerivative), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEStateAndDerivative::initializeClass, 1)))
          return NULL;
        return t_ODEStateAndDerivative::wrap_Object(ODEStateAndDerivative(((t_ODEStateAndDerivative *) arg)->object.this$));
      }
      static PyObject *t_ODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEStateAndDerivative::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ODEStateAndDerivative_init_(t_ODEStateAndDerivative *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            ODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
            {
              INT_CALL(object = ODEStateAndDerivative(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            JArray< JArray< jdouble > > a3((jobject) NULL);
            JArray< JArray< jdouble > > a4((jobject) NULL);
            ODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[D[D[[D[[D", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ODEStateAndDerivative(a0, a1, a2, a3, a4));
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

      static PyObject *t_ODEStateAndDerivative_getCompleteDerivative(t_ODEStateAndDerivative *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteDerivative());
        return result.wrap();
      }

      static PyObject *t_ODEStateAndDerivative_getPrimaryDerivative(t_ODEStateAndDerivative *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryDerivative());
        return result.wrap();
      }

      static PyObject *t_ODEStateAndDerivative_getSecondaryDerivative(t_ODEStateAndDerivative *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryDerivative(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryDerivative", arg);
        return NULL;
      }

      static PyObject *t_ODEStateAndDerivative_get__completeDerivative(t_ODEStateAndDerivative *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteDerivative());
        return value.wrap();
      }

      static PyObject *t_ODEStateAndDerivative_get__primaryDerivative(t_ODEStateAndDerivative *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryDerivative());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/AbstractCovarianceMatrixProvider.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *AbstractCovarianceMatrixProvider::class$ = NULL;
        jmethodID *AbstractCovarianceMatrixProvider::mids$ = NULL;
        bool AbstractCovarianceMatrixProvider::live$ = false;

        jclass AbstractCovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/AbstractCovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInitialCovarianceMatrix_9483b2ac438718ce] = env->getMethodID(cls, "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix AbstractCovarianceMatrixProvider::getInitialCovarianceMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInitialCovarianceMatrix_9483b2ac438718ce], a0.this$));
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
        static PyObject *t_AbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractCovarianceMatrixProvider_getInitialCovarianceMatrix(t_AbstractCovarianceMatrixProvider *self, PyObject *arg);

        static PyMethodDef t_AbstractCovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_AbstractCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractCovarianceMatrixProvider, getInitialCovarianceMatrix, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractCovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_AbstractCovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractCovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractCovarianceMatrixProvider, t_AbstractCovarianceMatrixProvider, AbstractCovarianceMatrixProvider);

        void t_AbstractCovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractCovarianceMatrixProvider), &PY_TYPE_DEF(AbstractCovarianceMatrixProvider), module, "AbstractCovarianceMatrixProvider", 0);
        }

        void t_AbstractCovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCovarianceMatrixProvider), "class_", make_descriptor(AbstractCovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_AbstractCovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractCovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_AbstractCovarianceMatrixProvider::wrap_Object(AbstractCovarianceMatrixProvider(((t_AbstractCovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_AbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractCovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractCovarianceMatrixProvider_getInitialCovarianceMatrix(t_AbstractCovarianceMatrixProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInitialCovarianceMatrix(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInitialCovarianceMatrix", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/Panel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *Panel::class$ = NULL;
      jmethodID *Panel::mids$ = NULL;
      bool Panel::live$ = false;

      jclass Panel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/Panel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAbsorption_dff5885c2c873297] = env->getMethodID(cls, "getAbsorption", "()D");
          mids$[mid_getArea_dff5885c2c873297] = env->getMethodID(cls, "getArea", "()D");
          mids$[mid_getDrag_dff5885c2c873297] = env->getMethodID(cls, "getDrag", "()D");
          mids$[mid_getLiftRatio_dff5885c2c873297] = env->getMethodID(cls, "getLiftRatio", "()D");
          mids$[mid_getNormal_e6f00ace1decd27c] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_abc43395638fd218] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getReflection_dff5885c2c873297] = env->getMethodID(cls, "getReflection", "()D");
          mids$[mid_isDoubleSided_b108b35ef48e27bd] = env->getMethodID(cls, "isDoubleSided", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Panel::getAbsorption() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAbsorption_dff5885c2c873297]);
      }

      jdouble Panel::getArea() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getArea_dff5885c2c873297]);
      }

      jdouble Panel::getDrag() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDrag_dff5885c2c873297]);
      }

      jdouble Panel::getLiftRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLiftRatio_dff5885c2c873297]);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Panel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_e6f00ace1decd27c], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Panel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_abc43395638fd218], a0.this$));
      }

      jdouble Panel::getReflection() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReflection_dff5885c2c873297]);
      }

      jboolean Panel::isDoubleSided() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isDoubleSided_b108b35ef48e27bd]);
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
      static PyObject *t_Panel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Panel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Panel_getAbsorption(t_Panel *self);
      static PyObject *t_Panel_getArea(t_Panel *self);
      static PyObject *t_Panel_getDrag(t_Panel *self);
      static PyObject *t_Panel_getLiftRatio(t_Panel *self);
      static PyObject *t_Panel_getNormal(t_Panel *self, PyObject *args);
      static PyObject *t_Panel_getReflection(t_Panel *self);
      static PyObject *t_Panel_isDoubleSided(t_Panel *self);
      static PyObject *t_Panel_get__absorption(t_Panel *self, void *data);
      static PyObject *t_Panel_get__area(t_Panel *self, void *data);
      static PyObject *t_Panel_get__doubleSided(t_Panel *self, void *data);
      static PyObject *t_Panel_get__drag(t_Panel *self, void *data);
      static PyObject *t_Panel_get__liftRatio(t_Panel *self, void *data);
      static PyObject *t_Panel_get__reflection(t_Panel *self, void *data);
      static PyGetSetDef t_Panel__fields_[] = {
        DECLARE_GET_FIELD(t_Panel, absorption),
        DECLARE_GET_FIELD(t_Panel, area),
        DECLARE_GET_FIELD(t_Panel, doubleSided),
        DECLARE_GET_FIELD(t_Panel, drag),
        DECLARE_GET_FIELD(t_Panel, liftRatio),
        DECLARE_GET_FIELD(t_Panel, reflection),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Panel__methods_[] = {
        DECLARE_METHOD(t_Panel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Panel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Panel, getAbsorption, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getArea, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getDrag, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getLiftRatio, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getNormal, METH_VARARGS),
        DECLARE_METHOD(t_Panel, getReflection, METH_NOARGS),
        DECLARE_METHOD(t_Panel, isDoubleSided, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Panel)[] = {
        { Py_tp_methods, t_Panel__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Panel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Panel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Panel, t_Panel, Panel);

      void t_Panel::install(PyObject *module)
      {
        installType(&PY_TYPE(Panel), &PY_TYPE_DEF(Panel), module, "Panel", 0);
      }

      void t_Panel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Panel), "class_", make_descriptor(Panel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Panel), "wrapfn_", make_descriptor(t_Panel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Panel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Panel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Panel::initializeClass, 1)))
          return NULL;
        return t_Panel::wrap_Object(Panel(((t_Panel *) arg)->object.this$));
      }
      static PyObject *t_Panel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Panel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Panel_getAbsorption(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAbsorption());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getArea(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getArea());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getDrag(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDrag());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getLiftRatio(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLiftRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getNormal(t_Panel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNormal", args);
        return NULL;
      }

      static PyObject *t_Panel_getReflection(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReflection());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_isDoubleSided(t_Panel *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isDoubleSided());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Panel_get__absorption(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAbsorption());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__area(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getArea());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__doubleSided(t_Panel *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isDoubleSided());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Panel_get__drag(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDrag());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__liftRatio(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLiftRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__reflection(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReflection());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/TimeZone.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/time/Month.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/Date.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldAbsoluteDate::class$ = NULL;
      jmethodID *FieldAbsoluteDate::mids$ = NULL;
      bool FieldAbsoluteDate::live$ = false;

      jclass FieldAbsoluteDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldAbsoluteDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_c6316b0aa0f1cff4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;D)V");
          mids$[mid_init$_253621a7278b3102] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_560bb100a19ff026] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init$_15dd6ecec3fa3822] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_1ee41df68a12de0d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/util/Date;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_4c401f76448cafd8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_b1985c50995fed88] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_accca367fd2836e4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_2b0f3313fc1f1d56] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/DateTimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_71f13a000c355cd6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_a169c1d292e93a11] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/orekit/time/Month;ILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_0efcb67a9580bba2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IIILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_3bf19cbbb4abec10] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/orekit/time/Month;IIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_004c165304442a0a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IIIIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_compareTo_1e7a6890919ea8bb] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_createBesselianEpoch_1975a0ad09e731d5] = env->getStaticMethodID(cls, "createBesselianEpoch", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createBesselianEpoch_ffb0d14929bb0e7b] = env->getStaticMethodID(cls, "createBesselianEpoch", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createGPSDate_c7287fc8652e4072] = env->getStaticMethodID(cls, "createGPSDate", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createGPSDate_e08712afe0e9127d] = env->getStaticMethodID(cls, "createGPSDate", "(ILorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createJDDate_e08712afe0e9127d] = env->getStaticMethodID(cls, "createJDDate", "(ILorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createJulianEpoch_1975a0ad09e731d5] = env->getStaticMethodID(cls, "createJulianEpoch", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createJulianEpoch_ffb0d14929bb0e7b] = env->getStaticMethodID(cls, "createJulianEpoch", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createMJDDate_e08712afe0e9127d] = env->getStaticMethodID(cls, "createMJDDate", "(ILorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_durationFrom_b48e5e8236744aca] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_durationFrom_2a5f05be83ff251d] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getArbitraryEpoch_5db4a75a42bc8059] = env->getStaticMethodID(cls, "getArbitraryEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getCCSDSEpoch_5db4a75a42bc8059] = env->getStaticMethodID(cls, "getCCSDSEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getComponents_d6544458f233293b] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_f3a5c409801be8e9] = env->getMethodID(cls, "getComponents", "(I)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_b889282ad7e843b0] = env->getMethodID(cls, "getComponents", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_279a1fb73805d842] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_b4e48014e875ddbb] = env->getMethodID(cls, "getComponents", "(ILorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getFiftiesEpoch_5db4a75a42bc8059] = env->getStaticMethodID(cls, "getFiftiesEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getFutureInfinity_5db4a75a42bc8059] = env->getStaticMethodID(cls, "getFutureInfinity", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getGPSEpoch_5db4a75a42bc8059] = env->getStaticMethodID(cls, "getGPSEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getGalileoEpoch_5db4a75a42bc8059] = env->getStaticMethodID(cls, "getGalileoEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getJ2000Epoch_5db4a75a42bc8059] = env->getStaticMethodID(cls, "getJ2000Epoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getJavaEpoch_5db4a75a42bc8059] = env->getStaticMethodID(cls, "getJavaEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getJulianEpoch_5db4a75a42bc8059] = env->getStaticMethodID(cls, "getJulianEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_5db4a75a42bc8059] = env->getStaticMethodID(cls, "getModifiedJulianEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getPastInfinity_5db4a75a42bc8059] = env->getStaticMethodID(cls, "getPastInfinity", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_hasZeroField_b108b35ef48e27bd] = env->getMethodID(cls, "hasZeroField", "()Z");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isAfter_d4d0cc6198150b12] = env->getMethodID(cls, "isAfter", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isAfterOrEqualTo_d4d0cc6198150b12] = env->getMethodID(cls, "isAfterOrEqualTo", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBefore_d4d0cc6198150b12] = env->getMethodID(cls, "isBefore", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBeforeOrEqualTo_d4d0cc6198150b12] = env->getMethodID(cls, "isBeforeOrEqualTo", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBetween_ffe1f3825a966e21] = env->getMethodID(cls, "isBetween", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBetweenOrEqualTo_ffe1f3825a966e21] = env->getMethodID(cls, "isBetweenOrEqualTo", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isCloseTo_6942757036a60841] = env->getMethodID(cls, "isCloseTo", "(Lorg/orekit/time/FieldTimeStamped;D)Z");
          mids$[mid_isEqualTo_d4d0cc6198150b12] = env->getMethodID(cls, "isEqualTo", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_offsetFrom_832c907dd0da9d67] = env->getMethodID(cls, "offsetFrom", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/TimeScale;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_b27024900e752374] = env->getMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[B)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_33b9e0348f37f80d] = env->getMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[BLorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_1e7a276cb7b92ed5] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(Lorg/hipparchus/Field;B[BLorg/orekit/time/DateComponents;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_113287b76ca39b11] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(Lorg/hipparchus/Field;B[BLorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_9bdef614b74efa9f] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(Lorg/hipparchus/Field;BB[BLorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_19ff818b316ddad5] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(Lorg/hipparchus/Field;BB[BLorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_shiftedBy_f9285ecfac057f19] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_shiftedBy_1975a0ad09e731d5] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_timeScalesOffset_c5a72d70ad4b89a5] = env->getMethodID(cls, "timeScalesOffset", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScale;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toAbsoluteDate_85703d13e302437e] = env->getMethodID(cls, "toAbsoluteDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_toDate_dc536aab1e2c5013] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/TimeScale;)Ljava/util/Date;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_54668190d292adde] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;)Ljava/lang/String;");
          mids$[mid_toString_8cc8a10236476f23] = env->getMethodID(cls, "toString", "(I)Ljava/lang/String;");
          mids$[mid_toString_e3ec59f6a2ed4d7c] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_b931e891aeceaf16] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_ed4d62dceac38f41] = env->getMethodID(cls, "toString", "(ILorg/orekit/time/TimeScale;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const FieldAbsoluteDate & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c6316b0aa0f1cff4, a0.this$, a1)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_253621a7278b3102, a0.this$, a1.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_560bb100a19ff026, a0.this$, a1.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_15dd6ecec3fa3822, a0.this$, a1.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::java::util::Date & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ee41df68a12de0d, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c401f76448cafd8, a0.this$, a1, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b1985c50995fed88, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::DateComponents & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_accca367fd2836e4, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::DateTimeComponents & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2b0f3313fc1f1d56, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::DateComponents & a1, const ::org::orekit::time::TimeComponents & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_71f13a000c355cd6, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, const ::org::orekit::time::Month & a2, jint a3, const ::org::orekit::time::TimeScale & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a169c1d292e93a11, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3, const ::org::orekit::time::TimeScale & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0efcb67a9580bba2, a0.this$, a1, a2, a3, a4.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, const ::org::orekit::time::Month & a2, jint a3, jint a4, jint a5, jdouble a6, const ::org::orekit::time::TimeScale & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3bf19cbbb4abec10, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3, jint a4, jint a5, jdouble a6, const ::org::orekit::time::TimeScale & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_004c165304442a0a, a0.this$, a1, a2, a3, a4, a5, a6, a7.this$)) {}

      jint FieldAbsoluteDate::compareTo(const FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_1e7a6890919ea8bb], a0.this$);
      }

      FieldAbsoluteDate FieldAbsoluteDate::createBesselianEpoch(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createBesselianEpoch_1975a0ad09e731d5], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createBesselianEpoch(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::TimeScales & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createBesselianEpoch_ffb0d14929bb0e7b], a0.this$, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createGPSDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createGPSDate_c7287fc8652e4072], a0, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createGPSDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createGPSDate_e08712afe0e9127d], a0, a1.this$, a2.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createJDDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJDDate_e08712afe0e9127d], a0, a1.this$, a2.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createJulianEpoch(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJulianEpoch_1975a0ad09e731d5], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createJulianEpoch(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::TimeScales & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJulianEpoch_ffb0d14929bb0e7b], a0.this$, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createMJDDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createMJDDate_e08712afe0e9127d], a0, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::durationFrom(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_durationFrom_b48e5e8236744aca], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::durationFrom(const FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_durationFrom_2a5f05be83ff251d], a0.this$));
      }

      jboolean FieldAbsoluteDate::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      FieldAbsoluteDate FieldAbsoluteDate::getArbitraryEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getArbitraryEpoch_5db4a75a42bc8059], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getCCSDSEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getCCSDSEpoch_5db4a75a42bc8059], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(const ::java::util::TimeZone & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_d6544458f233293b], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(jint a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_f3a5c409801be8e9], a0));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_b889282ad7e843b0], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_279a1fb73805d842], a0.this$, a1.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_b4e48014e875ddbb], a0, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getDate() const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_51da00d5b8a3b5df]));
      }

      ::org::hipparchus::Field FieldAbsoluteDate::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getFiftiesEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getFiftiesEpoch_5db4a75a42bc8059], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getFutureInfinity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getFutureInfinity_5db4a75a42bc8059], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getGPSEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getGPSEpoch_5db4a75a42bc8059], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getGalileoEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getGalileoEpoch_5db4a75a42bc8059], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getJ2000Epoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getJ2000Epoch_5db4a75a42bc8059], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getJavaEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getJavaEpoch_5db4a75a42bc8059], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getJulianEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getJulianEpoch_5db4a75a42bc8059], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getModifiedJulianEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getModifiedJulianEpoch_5db4a75a42bc8059], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getPastInfinity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getPastInfinity_5db4a75a42bc8059], a0.this$));
      }

      jboolean FieldAbsoluteDate::hasZeroField() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasZeroField_b108b35ef48e27bd]);
      }

      jint FieldAbsoluteDate::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      jboolean FieldAbsoluteDate::isAfter(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfter_d4d0cc6198150b12], a0.this$);
      }

      jboolean FieldAbsoluteDate::isAfterOrEqualTo(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfterOrEqualTo_d4d0cc6198150b12], a0.this$);
      }

      jboolean FieldAbsoluteDate::isBefore(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBefore_d4d0cc6198150b12], a0.this$);
      }

      jboolean FieldAbsoluteDate::isBeforeOrEqualTo(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBeforeOrEqualTo_d4d0cc6198150b12], a0.this$);
      }

      jboolean FieldAbsoluteDate::isBetween(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetween_ffe1f3825a966e21], a0.this$, a1.this$);
      }

      jboolean FieldAbsoluteDate::isBetweenOrEqualTo(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetweenOrEqualTo_ffe1f3825a966e21], a0.this$, a1.this$);
      }

      jboolean FieldAbsoluteDate::isCloseTo(const ::org::orekit::time::FieldTimeStamped & a0, jdouble a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isCloseTo_6942757036a60841], a0.this$, a1);
      }

      jboolean FieldAbsoluteDate::isEqualTo(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isEqualTo_d4d0cc6198150b12], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::offsetFrom(const FieldAbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFrom_832c907dd0da9d67], a0.this$, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_b27024900e752374], a0, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::TimeScale & a2) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_33b9e0348f37f80d], a0, a1.this$, a2.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, const JArray< jbyte > & a2, const ::org::orekit::time::DateComponents & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_1e7a276cb7b92ed5], a0.this$, a1, a2.this$, a3.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, const JArray< jbyte > & a2, const ::org::orekit::time::DateComponents & a3, const ::org::orekit::time::TimeScale & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_113287b76ca39b11], a0.this$, a1, a2.this$, a3.this$, a4.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, jbyte a2, const JArray< jbyte > & a3, const FieldAbsoluteDate & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_9bdef614b74efa9f], a0.this$, a1, a2, a3.this$, a4.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, jbyte a2, const JArray< jbyte > & a3, const FieldAbsoluteDate & a4, const FieldAbsoluteDate & a5)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_19ff818b316ddad5], a0.this$, a1, a2, a3.this$, a4.this$, a5.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::shiftedBy(jdouble a0) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_shiftedBy_f9285ecfac057f19], a0));
      }

      FieldAbsoluteDate FieldAbsoluteDate::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_shiftedBy_1975a0ad09e731d5], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::timeScalesOffset(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_timeScalesOffset_c5a72d70ad4b89a5], a0.this$, a1.this$));
      }

      ::org::orekit::time::AbsoluteDate FieldAbsoluteDate::toAbsoluteDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_toAbsoluteDate_85703d13e302437e]));
      }

      ::java::util::Date FieldAbsoluteDate::toDate(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::util::Date(env->callObjectMethod(this$, mids$[mid_toDate_dc536aab1e2c5013], a0.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      ::java::lang::String FieldAbsoluteDate::toString(const ::java::util::TimeZone & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_54668190d292adde], a0.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_8cc8a10236476f23], a0));
      }

      ::java::lang::String FieldAbsoluteDate::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_e3ec59f6a2ed4d7c], a0.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_b931e891aeceaf16], a0.this$, a1.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_ed4d62dceac38f41], a0, a1.this$));
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
      static PyObject *t_FieldAbsoluteDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_of_(t_FieldAbsoluteDate *self, PyObject *args);
      static int t_FieldAbsoluteDate_init_(t_FieldAbsoluteDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAbsoluteDate_compareTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createGPSDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_durationFrom(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_equals(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_getArbitraryEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getCCSDSEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getComponents(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_getDate(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_getField(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_getFiftiesEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getFutureInfinity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getGPSEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getGalileoEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getJ2000Epoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getJavaEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getJulianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getModifiedJulianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getPastInfinity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_hasZeroField(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_hashCode(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isAfter(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isAfterOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isBefore(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isBeforeOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isBetween(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isBetweenOrEqualTo(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isCloseTo(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isEqualTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_offsetFrom(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_shiftedBy(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_timeScalesOffset(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_toAbsoluteDate(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_toDate(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_toString(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_get__date(t_FieldAbsoluteDate *self, void *data);
      static PyObject *t_FieldAbsoluteDate_get__field(t_FieldAbsoluteDate *self, void *data);
      static PyObject *t_FieldAbsoluteDate_get__parameters_(t_FieldAbsoluteDate *self, void *data);
      static PyGetSetDef t_FieldAbsoluteDate__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbsoluteDate, date),
        DECLARE_GET_FIELD(t_FieldAbsoluteDate, field),
        DECLARE_GET_FIELD(t_FieldAbsoluteDate, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbsoluteDate__methods_[] = {
        DECLARE_METHOD(t_FieldAbsoluteDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, compareTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, createBesselianEpoch, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createGPSDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createJulianEpoch, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createMJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, durationFrom, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getArbitraryEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getCCSDSEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getComponents, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getFiftiesEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getFutureInfinity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getGPSEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getGalileoEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getJ2000Epoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getJavaEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getJulianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getModifiedJulianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getPastInfinity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, hasZeroField, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isAfter, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isAfterOrEqualTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBefore, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBeforeOrEqualTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBetween, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBetweenOrEqualTo, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isCloseTo, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isEqualTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, offsetFrom, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, parseCCSDSCalendarSegmentedTimeCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, parseCCSDSDaySegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, parseCCSDSUnsegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, timeScalesOffset, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, toAbsoluteDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, toDate, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbsoluteDate)[] = {
        { Py_tp_methods, t_FieldAbsoluteDate__methods_ },
        { Py_tp_init, (void *) t_FieldAbsoluteDate_init_ },
        { Py_tp_getset, t_FieldAbsoluteDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbsoluteDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAbsoluteDate, t_FieldAbsoluteDate, FieldAbsoluteDate);
      PyObject *t_FieldAbsoluteDate::wrap_Object(const FieldAbsoluteDate& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsoluteDate::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsoluteDate *self = (t_FieldAbsoluteDate *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbsoluteDate::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsoluteDate::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsoluteDate *self = (t_FieldAbsoluteDate *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbsoluteDate::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbsoluteDate), &PY_TYPE_DEF(FieldAbsoluteDate), module, "FieldAbsoluteDate", 0);
      }

      void t_FieldAbsoluteDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsoluteDate), "class_", make_descriptor(FieldAbsoluteDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsoluteDate), "wrapfn_", make_descriptor(t_FieldAbsoluteDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsoluteDate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbsoluteDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbsoluteDate::initializeClass, 1)))
          return NULL;
        return t_FieldAbsoluteDate::wrap_Object(FieldAbsoluteDate(((t_FieldAbsoluteDate *) arg)->object.this$));
      }
      static PyObject *t_FieldAbsoluteDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbsoluteDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbsoluteDate_of_(t_FieldAbsoluteDate *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAbsoluteDate_init_(t_FieldAbsoluteDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldAbsoluteDate(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KD", FieldAbsoluteDate::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KK", FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Date a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::Field::initializeClass, ::java::util::Date::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KDk", FieldAbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Ksk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DateComponents a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DateTimeComponents a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateTimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DateComponents a1((jobject) NULL);
            ::org::orekit::time::TimeComponents a2((jobject) NULL);
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::time::Month a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            ::org::orekit::time::TimeScale a4((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIKIk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_Month::parameters_, &a3, &a4))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            ::org::orekit::time::TimeScale a4((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIIIk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 8:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::time::Month a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            jint a4;
            jint a5;
            jdouble a6;
            ::org::orekit::time::TimeScale a7((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIKIIIDk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_Month::parameters_, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jint a5;
            jdouble a6;
            ::org::orekit::time::TimeScale a7((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIIIIIDk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4, a5, a6, a7));
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

      static PyObject *t_FieldAbsoluteDate_compareTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        jint result;

        if (!parseArg(arg, "K", FieldAbsoluteDate::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createBesselianEpoch(a0));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createBesselianEpoch(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createBesselianEpoch", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createGPSDate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createGPSDate(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "IKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createGPSDate(a0, a1, a2));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createGPSDate", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createJDDate(a0, a1, a2));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createJDDate", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createJulianEpoch(a0));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createJulianEpoch(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createJulianEpoch", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createMJDDate(a0, a1, a2));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createMJDDate", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_durationFrom(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.durationFrom(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", FieldAbsoluteDate::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.durationFrom(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_equals(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldAbsoluteDate), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldAbsoluteDate_getArbitraryEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getArbitraryEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getArbitraryEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getCCSDSEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getCCSDSEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCCSDSEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getComponents(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getComponents", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getDate(t_FieldAbsoluteDate *self)
      {
        FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbsoluteDate_getField(t_FieldAbsoluteDate *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbsoluteDate_getFiftiesEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getFiftiesEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFiftiesEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getFutureInfinity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getFutureInfinity(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFutureInfinity", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getGPSEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getGPSEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getGPSEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getGalileoEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getGalileoEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getGalileoEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getJ2000Epoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getJ2000Epoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getJ2000Epoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getJavaEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getJavaEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getJavaEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getJulianEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getJulianEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getModifiedJulianEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getModifiedJulianEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getModifiedJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getPastInfinity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getPastInfinity(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getPastInfinity", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_hasZeroField(t_FieldAbsoluteDate *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasZeroField());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldAbsoluteDate_hashCode(t_FieldAbsoluteDate *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldAbsoluteDate), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldAbsoluteDate_isAfter(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isAfter(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfter", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isAfterOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isAfterOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfterOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBefore(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBefore(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBefore", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBeforeOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBeforeOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBeforeOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBetween(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
        PyTypeObject **p1;
        jboolean result;

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBetween(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetween", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBetweenOrEqualTo(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
        PyTypeObject **p1;
        jboolean result;

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBetweenOrEqualTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetweenOrEqualTo", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isCloseTo(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "KD", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.isCloseTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isCloseTo", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isEqualTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isEqualTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_offsetFrom(t_FieldAbsoluteDate *self, PyObject *args)
      {
        FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "Kk", FieldAbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.offsetFrom(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFrom", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[B", &a0, &a1))
            {
              OBJ_CALL(result = self->object.parseCCSDSCalendarSegmentedTimeCode(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 3:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.parseCCSDSCalendarSegmentedTimeCode(a0, a1, a2));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parseCCSDSCalendarSegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KB[Bk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2, a3));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            ::org::orekit::time::TimeScale a4((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KB[Bkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2, a3, a4));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSDaySegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            jbyte a2;
            JArray< jbyte > a3((jobject) NULL);
            FieldAbsoluteDate a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KBB[BK", ::org::hipparchus::Field::initializeClass, FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &p4, t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3, a4));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            jbyte a2;
            JArray< jbyte > a3((jobject) NULL);
            FieldAbsoluteDate a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsoluteDate a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KBB[BKK", ::org::hipparchus::Field::initializeClass, FieldAbsoluteDate::initializeClass, FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &p4, t_FieldAbsoluteDate::parameters_, &a5, &p5, t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3, a4, a5));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSUnsegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_shiftedBy(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_timeScalesOffset(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.timeScalesOffset(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "timeScalesOffset", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_toAbsoluteDate(t_FieldAbsoluteDate *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.toAbsoluteDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_FieldAbsoluteDate_toDate(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::java::util::Date result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toDate(a0));
          return ::java::util::t_Date::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDate", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_toString(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(FieldAbsoluteDate), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldAbsoluteDate_get__parameters_(t_FieldAbsoluteDate *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbsoluteDate_get__date(t_FieldAbsoluteDate *self, void *data)
      {
        FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldAbsoluteDate_get__field(t_FieldAbsoluteDate *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$Meteo::class$ = NULL;
        jmethodID *CRD$Meteo::mids$ = NULL;
        bool CRD$Meteo::live$ = false;

        jclass CRD$Meteo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$Meteo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5794fd067b349f51] = env->getMethodID(cls, "<init>", "(Ljava/util/SortedSet;)V");
            mids$[mid_getData_2afa36052df4765d] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
            mids$[mid_getMeteo_09bf2b6fa95d5f91] = env->getMethodID(cls, "getMeteo", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/files/ilrs/CRD$MeteorologicalMeasurement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$Meteo::CRD$Meteo(const ::java::util::SortedSet & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5794fd067b349f51, a0.this$)) {}

        ::java::util::List CRD$Meteo::getData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_2afa36052df4765d]));
        }

        ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement CRD$Meteo::getMeteo(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement(env->callObjectMethod(this$, mids$[mid_getMeteo_09bf2b6fa95d5f91], a0.this$));
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
        static PyObject *t_CRD$Meteo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$Meteo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$Meteo_init_(t_CRD$Meteo *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$Meteo_getData(t_CRD$Meteo *self);
        static PyObject *t_CRD$Meteo_getMeteo(t_CRD$Meteo *self, PyObject *arg);
        static PyObject *t_CRD$Meteo_get__data(t_CRD$Meteo *self, void *data);
        static PyGetSetDef t_CRD$Meteo__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$Meteo, data),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$Meteo__methods_[] = {
          DECLARE_METHOD(t_CRD$Meteo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Meteo, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Meteo, getData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Meteo, getMeteo, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$Meteo)[] = {
          { Py_tp_methods, t_CRD$Meteo__methods_ },
          { Py_tp_init, (void *) t_CRD$Meteo_init_ },
          { Py_tp_getset, t_CRD$Meteo__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$Meteo)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$Meteo, t_CRD$Meteo, CRD$Meteo);

        void t_CRD$Meteo::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$Meteo), &PY_TYPE_DEF(CRD$Meteo), module, "CRD$Meteo", 0);
        }

        void t_CRD$Meteo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Meteo), "class_", make_descriptor(CRD$Meteo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Meteo), "wrapfn_", make_descriptor(t_CRD$Meteo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Meteo), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$Meteo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$Meteo::initializeClass, 1)))
            return NULL;
          return t_CRD$Meteo::wrap_Object(CRD$Meteo(((t_CRD$Meteo *) arg)->object.this$));
        }
        static PyObject *t_CRD$Meteo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$Meteo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$Meteo_init_(t_CRD$Meteo *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::SortedSet a0((jobject) NULL);
          PyTypeObject **p0;
          CRD$Meteo object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
          {
            INT_CALL(object = CRD$Meteo(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$Meteo_getData(t_CRD$Meteo *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$MeteorologicalMeasurement));
        }

        static PyObject *t_CRD$Meteo_getMeteo(t_CRD$Meteo *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getMeteo(a0));
            return ::org::orekit::files::ilrs::t_CRD$MeteorologicalMeasurement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getMeteo", arg);
          return NULL;
        }

        static PyObject *t_CRD$Meteo_get__data(t_CRD$Meteo *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getData());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBody::class$ = NULL;
      jmethodID *CelestialBody::mids$ = NULL;
      bool CelestialBody::live$ = false;

      jclass CelestialBody::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBody");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBodyOrientedFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getBodyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGM_dff5885c2c873297] = env->getMethodID(cls, "getGM", "()D");
          mids$[mid_getInertiallyOrientedFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getInertiallyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame CelestialBody::getBodyOrientedFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyOrientedFrame_b86f9f61d97a7244]));
      }

      jdouble CelestialBody::getGM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGM_dff5885c2c873297]);
      }

      ::org::orekit::frames::Frame CelestialBody::getInertiallyOrientedFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertiallyOrientedFrame_b86f9f61d97a7244]));
      }

      ::java::lang::String CelestialBody::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
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
      static PyObject *t_CelestialBody_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBody_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBody_getBodyOrientedFrame(t_CelestialBody *self);
      static PyObject *t_CelestialBody_getGM(t_CelestialBody *self);
      static PyObject *t_CelestialBody_getInertiallyOrientedFrame(t_CelestialBody *self);
      static PyObject *t_CelestialBody_getName(t_CelestialBody *self);
      static PyObject *t_CelestialBody_get__bodyOrientedFrame(t_CelestialBody *self, void *data);
      static PyObject *t_CelestialBody_get__gM(t_CelestialBody *self, void *data);
      static PyObject *t_CelestialBody_get__inertiallyOrientedFrame(t_CelestialBody *self, void *data);
      static PyObject *t_CelestialBody_get__name(t_CelestialBody *self, void *data);
      static PyGetSetDef t_CelestialBody__fields_[] = {
        DECLARE_GET_FIELD(t_CelestialBody, bodyOrientedFrame),
        DECLARE_GET_FIELD(t_CelestialBody, gM),
        DECLARE_GET_FIELD(t_CelestialBody, inertiallyOrientedFrame),
        DECLARE_GET_FIELD(t_CelestialBody, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CelestialBody__methods_[] = {
        DECLARE_METHOD(t_CelestialBody, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBody, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBody, getBodyOrientedFrame, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBody, getGM, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBody, getInertiallyOrientedFrame, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBody, getName, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBody)[] = {
        { Py_tp_methods, t_CelestialBody__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CelestialBody__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBody)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(CelestialBody, t_CelestialBody, CelestialBody);

      void t_CelestialBody::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBody), &PY_TYPE_DEF(CelestialBody), module, "CelestialBody", 0);
      }

      void t_CelestialBody::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBody), "class_", make_descriptor(CelestialBody::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBody), "wrapfn_", make_descriptor(t_CelestialBody::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBody), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBody_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBody::initializeClass, 1)))
          return NULL;
        return t_CelestialBody::wrap_Object(CelestialBody(((t_CelestialBody *) arg)->object.this$));
      }
      static PyObject *t_CelestialBody_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBody::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBody_getBodyOrientedFrame(t_CelestialBody *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_CelestialBody_getGM(t_CelestialBody *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CelestialBody_getInertiallyOrientedFrame(t_CelestialBody *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiallyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_CelestialBody_getName(t_CelestialBody *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_CelestialBody_get__bodyOrientedFrame(t_CelestialBody *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_CelestialBody_get__gM(t_CelestialBody *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CelestialBody_get__inertiallyOrientedFrame(t_CelestialBody *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiallyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_CelestialBody_get__name(t_CelestialBody *self, void *data)
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
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *PhaseCenterVariationFunction::class$ = NULL;
        jmethodID *PhaseCenterVariationFunction::mids$ = NULL;
        bool PhaseCenterVariationFunction::live$ = false;

        jclass PhaseCenterVariationFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/PhaseCenterVariationFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble PhaseCenterVariationFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_86ffecc08a63eff0], a0, a1);
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
      namespace antenna {
        static PyObject *t_PhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PhaseCenterVariationFunction_value(t_PhaseCenterVariationFunction *self, PyObject *args);

        static PyMethodDef t_PhaseCenterVariationFunction__methods_[] = {
          DECLARE_METHOD(t_PhaseCenterVariationFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PhaseCenterVariationFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PhaseCenterVariationFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PhaseCenterVariationFunction)[] = {
          { Py_tp_methods, t_PhaseCenterVariationFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PhaseCenterVariationFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PhaseCenterVariationFunction, t_PhaseCenterVariationFunction, PhaseCenterVariationFunction);

        void t_PhaseCenterVariationFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PhaseCenterVariationFunction), &PY_TYPE_DEF(PhaseCenterVariationFunction), module, "PhaseCenterVariationFunction", 0);
        }

        void t_PhaseCenterVariationFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCenterVariationFunction), "class_", make_descriptor(PhaseCenterVariationFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCenterVariationFunction), "wrapfn_", make_descriptor(t_PhaseCenterVariationFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCenterVariationFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PhaseCenterVariationFunction::initializeClass, 1)))
            return NULL;
          return t_PhaseCenterVariationFunction::wrap_Object(PhaseCenterVariationFunction(((t_PhaseCenterVariationFunction *) arg)->object.this$));
        }
        static PyObject *t_PhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PhaseCenterVariationFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PhaseCenterVariationFunction_value(t_PhaseCenterVariationFunction *self, PyObject *args)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PotentialCoefficientsReader::class$ = NULL;
          jmethodID *PotentialCoefficientsReader::mids$ = NULL;
          bool PotentialCoefficientsReader::live$ = false;

          jclass PotentialCoefficientsReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PotentialCoefficientsReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMaxAvailableDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxAvailableDegree", "()I");
              mids$[mid_getMaxAvailableOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxAvailableOrder", "()I");
              mids$[mid_getMaxParseDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxParseDegree", "()I");
              mids$[mid_getMaxParseOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxParseOrder", "()I");
              mids$[mid_getProvider_fc0a96c558346426] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_getSupportedNames_11b109bd155ca898] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_missingCoefficientsAllowed_b108b35ef48e27bd] = env->getMethodID(cls, "missingCoefficientsAllowed", "()Z");
              mids$[mid_setMaxParseDegree_99803b0791f320ff] = env->getMethodID(cls, "setMaxParseDegree", "(I)V");
              mids$[mid_setMaxParseOrder_99803b0791f320ff] = env->getMethodID(cls, "setMaxParseOrder", "(I)V");
              mids$[mid_stillAcceptsData_b108b35ef48e27bd] = env->getMethodID(cls, "stillAcceptsData", "()Z");
              mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getAe_dff5885c2c873297] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getTideSystem_c68abf1ca1fc273e] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_rescale_9a2aa9108cecb925] = env->getMethodID(cls, "rescale", "(DZLorg/orekit/forces/gravity/potential/Flattener;Lorg/orekit/forces/gravity/potential/Flattener;[D)[D");
              mids$[mid_rescale_61f58c83df8a60fe] = env->getMethodID(cls, "rescale", "(ZLorg/orekit/forces/gravity/potential/Flattener;Lorg/orekit/forces/gravity/potential/Flattener;[Lorg/orekit/forces/gravity/potential/TimeDependentHarmonic;)[Lorg/orekit/forces/gravity/potential/TimeDependentHarmonic;");
              mids$[mid_setMu_17db3a65980d3441] = env->getMethodID(cls, "setMu", "(D)V");
              mids$[mid_buildFlatArray_46d958aaa8c2963a] = env->getStaticMethodID(cls, "buildFlatArray", "(Lorg/orekit/forces/gravity/potential/Flattener;D)[D");
              mids$[mid_toDate_3eda4f7d7f1dde2e] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_toDate_4ace5066ad98bc71] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/DateComponents;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_buildRow_8c43e11f707ab8a7] = env->getStaticMethodID(cls, "buildRow", "(IID)[D");
              mids$[mid_setReadComplete_bd04c9335fb9e4cf] = env->getMethodID(cls, "setReadComplete", "(Z)V");
              mids$[mid_setAe_17db3a65980d3441] = env->getMethodID(cls, "setAe", "(D)V");
              mids$[mid_setTideSystem_9dc8f5cdc0b53f13] = env->getMethodID(cls, "setTideSystem", "(Lorg/orekit/forces/gravity/potential/TideSystem;)V");
              mids$[mid_parseCoefficient_1954fd36afccfc5c] = env->getMethodID(cls, "parseCoefficient", "(Ljava/lang/String;Lorg/orekit/forces/gravity/potential/Flattener;[DIILjava/lang/String;Ljava/lang/String;)V");
              mids$[mid_setRawCoefficients_27afb517a8911014] = env->getMethodID(cls, "setRawCoefficients", "(ZLorg/orekit/forces/gravity/potential/Flattener;[D[DLjava/lang/String;)V");
              mids$[mid_getBaseProvider_1ac4a92a4fde34c8] = env->getMethodID(cls, "getBaseProvider", "(ZII)Lorg/orekit/forces/gravity/potential/ConstantSphericalHarmonics;");
              mids$[mid_parseDouble_b36dde1444e08956] = env->getStaticMethodID(cls, "parseDouble", "(Ljava/lang/String;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint PotentialCoefficientsReader::getMaxAvailableDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxAvailableDegree_570ce0828f81a2c1]);
          }

          jint PotentialCoefficientsReader::getMaxAvailableOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxAvailableOrder_570ce0828f81a2c1]);
          }

          jint PotentialCoefficientsReader::getMaxParseDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseDegree_570ce0828f81a2c1]);
          }

          jint PotentialCoefficientsReader::getMaxParseOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseOrder_570ce0828f81a2c1]);
          }

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider PotentialCoefficientsReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_fc0a96c558346426], a0, a1, a2));
          }

          ::java::lang::String PotentialCoefficientsReader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_11b109bd155ca898]));
          }

          void PotentialCoefficientsReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
          }

          jboolean PotentialCoefficientsReader::missingCoefficientsAllowed() const
          {
            return env->callBooleanMethod(this$, mids$[mid_missingCoefficientsAllowed_b108b35ef48e27bd]);
          }

          void PotentialCoefficientsReader::setMaxParseDegree(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseDegree_99803b0791f320ff], a0);
          }

          void PotentialCoefficientsReader::setMaxParseOrder(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseOrder_99803b0791f320ff], a0);
          }

          jboolean PotentialCoefficientsReader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_b108b35ef48e27bd]);
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
          static PyObject *t_PotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableDegree(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableOrder(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getMaxParseDegree(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getMaxParseOrder(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getProvider(t_PotentialCoefficientsReader *self, PyObject *args);
          static PyObject *t_PotentialCoefficientsReader_getSupportedNames(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_loadData(t_PotentialCoefficientsReader *self, PyObject *args);
          static PyObject *t_PotentialCoefficientsReader_missingCoefficientsAllowed(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_setMaxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_setMaxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_stillAcceptsData(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableDegree(t_PotentialCoefficientsReader *self, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableOrder(t_PotentialCoefficientsReader *self, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__maxParseDegree(t_PotentialCoefficientsReader *self, void *data);
          static int t_PotentialCoefficientsReader_set__maxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__maxParseOrder(t_PotentialCoefficientsReader *self, void *data);
          static int t_PotentialCoefficientsReader_set__maxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__supportedNames(t_PotentialCoefficientsReader *self, void *data);
          static PyGetSetDef t_PotentialCoefficientsReader__fields_[] = {
            DECLARE_GET_FIELD(t_PotentialCoefficientsReader, maxAvailableDegree),
            DECLARE_GET_FIELD(t_PotentialCoefficientsReader, maxAvailableOrder),
            DECLARE_GETSET_FIELD(t_PotentialCoefficientsReader, maxParseDegree),
            DECLARE_GETSET_FIELD(t_PotentialCoefficientsReader, maxParseOrder),
            DECLARE_GET_FIELD(t_PotentialCoefficientsReader, supportedNames),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PotentialCoefficientsReader__methods_[] = {
            DECLARE_METHOD(t_PotentialCoefficientsReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxAvailableDegree, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxAvailableOrder, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxParseDegree, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxParseOrder, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, missingCoefficientsAllowed, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, setMaxParseDegree, METH_O),
            DECLARE_METHOD(t_PotentialCoefficientsReader, setMaxParseOrder, METH_O),
            DECLARE_METHOD(t_PotentialCoefficientsReader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PotentialCoefficientsReader)[] = {
            { Py_tp_methods, t_PotentialCoefficientsReader__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PotentialCoefficientsReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PotentialCoefficientsReader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PotentialCoefficientsReader, t_PotentialCoefficientsReader, PotentialCoefficientsReader);

          void t_PotentialCoefficientsReader::install(PyObject *module)
          {
            installType(&PY_TYPE(PotentialCoefficientsReader), &PY_TYPE_DEF(PotentialCoefficientsReader), module, "PotentialCoefficientsReader", 0);
          }

          void t_PotentialCoefficientsReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PotentialCoefficientsReader), "class_", make_descriptor(PotentialCoefficientsReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PotentialCoefficientsReader), "wrapfn_", make_descriptor(t_PotentialCoefficientsReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PotentialCoefficientsReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PotentialCoefficientsReader::initializeClass, 1)))
              return NULL;
            return t_PotentialCoefficientsReader::wrap_Object(PotentialCoefficientsReader(((t_PotentialCoefficientsReader *) arg)->object.this$));
          }
          static PyObject *t_PotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PotentialCoefficientsReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableDegree(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxAvailableDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableOrder(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxAvailableOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxParseDegree(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxParseOrder(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getProvider(t_PotentialCoefficientsReader *self, PyObject *args)
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

            PyErr_SetArgsError((PyObject *) self, "getProvider", args);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_getSupportedNames(t_PotentialCoefficientsReader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_PotentialCoefficientsReader_loadData(t_PotentialCoefficientsReader *self, PyObject *args)
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

          static PyObject *t_PotentialCoefficientsReader_missingCoefficientsAllowed(t_PotentialCoefficientsReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.missingCoefficientsAllowed());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_PotentialCoefficientsReader_setMaxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseDegree(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseDegree", arg);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_setMaxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseOrder(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseOrder", arg);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_stillAcceptsData(t_PotentialCoefficientsReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableDegree(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxAvailableDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableOrder(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxAvailableOrder());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxParseDegree(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) value);
          }
          static int t_PotentialCoefficientsReader_set__maxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseDegree(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseDegree", arg);
            return -1;
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxParseOrder(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) value);
          }
          static int t_PotentialCoefficientsReader_set__maxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseOrder(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseOrder", arg);
            return -1;
          }

          static PyObject *t_PotentialCoefficientsReader_get__supportedNames(t_PotentialCoefficientsReader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/MidpointFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *MidpointFieldIntegrator::class$ = NULL;
        jmethodID *MidpointFieldIntegrator::mids$ = NULL;
        bool MidpointFieldIntegrator::live$ = false;

        jclass MidpointFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/MidpointFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_79b17d518528c1b2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_1b3ae884bec31e6d] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_226a0b2040b1d2e1] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_226a0b2040b1d2e1] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_6ae25b9f124390b4] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/MidpointFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointFieldIntegrator::MidpointFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_79b17d518528c1b2, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > MidpointFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_1b3ae884bec31e6d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > MidpointFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_226a0b2040b1d2e1]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > MidpointFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_226a0b2040b1d2e1]));
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
        static PyObject *t_MidpointFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegrator_of_(t_MidpointFieldIntegrator *self, PyObject *args);
        static int t_MidpointFieldIntegrator_init_(t_MidpointFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointFieldIntegrator_getA(t_MidpointFieldIntegrator *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegrator_getB(t_MidpointFieldIntegrator *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegrator_getC(t_MidpointFieldIntegrator *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegrator_get__a(t_MidpointFieldIntegrator *self, void *data);
        static PyObject *t_MidpointFieldIntegrator_get__b(t_MidpointFieldIntegrator *self, void *data);
        static PyObject *t_MidpointFieldIntegrator_get__c(t_MidpointFieldIntegrator *self, void *data);
        static PyObject *t_MidpointFieldIntegrator_get__parameters_(t_MidpointFieldIntegrator *self, void *data);
        static PyGetSetDef t_MidpointFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, a),
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, b),
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, c),
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MidpointFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_MidpointFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointFieldIntegrator)[] = {
          { Py_tp_methods, t_MidpointFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_MidpointFieldIntegrator_init_ },
          { Py_tp_getset, t_MidpointFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(MidpointFieldIntegrator, t_MidpointFieldIntegrator, MidpointFieldIntegrator);
        PyObject *t_MidpointFieldIntegrator::wrap_Object(const MidpointFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegrator *self = (t_MidpointFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MidpointFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegrator *self = (t_MidpointFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MidpointFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointFieldIntegrator), &PY_TYPE_DEF(MidpointFieldIntegrator), module, "MidpointFieldIntegrator", 0);
        }

        void t_MidpointFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegrator), "class_", make_descriptor(MidpointFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegrator), "wrapfn_", make_descriptor(t_MidpointFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_MidpointFieldIntegrator::wrap_Object(MidpointFieldIntegrator(((t_MidpointFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_MidpointFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MidpointFieldIntegrator_of_(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MidpointFieldIntegrator_init_(t_MidpointFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          MidpointFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = MidpointFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MidpointFieldIntegrator_getA(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_MidpointFieldIntegrator_getB(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_MidpointFieldIntegrator_getC(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_MidpointFieldIntegrator_get__parameters_(t_MidpointFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MidpointFieldIntegrator_get__a(t_MidpointFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_MidpointFieldIntegrator_get__b(t_MidpointFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_MidpointFieldIntegrator_get__c(t_MidpointFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/LongFrequency.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *LongFrequency::class$ = NULL;
      jmethodID *LongFrequency::mids$ = NULL;
      bool LongFrequency::live$ = false;

      jclass LongFrequency::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/LongFrequency");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_aba33752f2449599] = env->getMethodID(cls, "<init>", "(Ljava/util/Comparator;)V");
          mids$[mid_addValue_99803b0791f320ff] = env->getMethodID(cls, "addValue", "(I)V");
          mids$[mid_getCount_a1cf8c47dc9c5883] = env->getMethodID(cls, "getCount", "(I)J");
          mids$[mid_getCumFreq_a1cf8c47dc9c5883] = env->getMethodID(cls, "getCumFreq", "(I)J");
          mids$[mid_getCumPct_46f85b53d9aedd96] = env->getMethodID(cls, "getCumPct", "(I)D");
          mids$[mid_getPct_46f85b53d9aedd96] = env->getMethodID(cls, "getPct", "(I)D");
          mids$[mid_incrementValue_5ea3eee09cb6a61f] = env->getMethodID(cls, "incrementValue", "(IJ)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LongFrequency::LongFrequency() : ::org::hipparchus::stat::Frequency(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      LongFrequency::LongFrequency(const ::java::util::Comparator & a0) : ::org::hipparchus::stat::Frequency(env->newObject(initializeClass, &mids$, mid_init$_aba33752f2449599, a0.this$)) {}

      void LongFrequency::addValue(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addValue_99803b0791f320ff], a0);
      }

      jlong LongFrequency::getCount(jint a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCount_a1cf8c47dc9c5883], a0);
      }

      jlong LongFrequency::getCumFreq(jint a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCumFreq_a1cf8c47dc9c5883], a0);
      }

      jdouble LongFrequency::getCumPct(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCumPct_46f85b53d9aedd96], a0);
      }

      jdouble LongFrequency::getPct(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPct_46f85b53d9aedd96], a0);
      }

      void LongFrequency::incrementValue(jint a0, jlong a1) const
      {
        env->callVoidMethod(this$, mids$[mid_incrementValue_5ea3eee09cb6a61f], a0, a1);
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
      static PyObject *t_LongFrequency_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongFrequency_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongFrequency_of_(t_LongFrequency *self, PyObject *args);
      static int t_LongFrequency_init_(t_LongFrequency *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LongFrequency_addValue(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getCount(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getCumFreq(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getCumPct(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getPct(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_incrementValue(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_get__parameters_(t_LongFrequency *self, void *data);
      static PyGetSetDef t_LongFrequency__fields_[] = {
        DECLARE_GET_FIELD(t_LongFrequency, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LongFrequency__methods_[] = {
        DECLARE_METHOD(t_LongFrequency, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongFrequency, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongFrequency, of_, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, addValue, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getCount, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getCumFreq, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getCumPct, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getPct, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, incrementValue, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LongFrequency)[] = {
        { Py_tp_methods, t_LongFrequency__methods_ },
        { Py_tp_init, (void *) t_LongFrequency_init_ },
        { Py_tp_getset, t_LongFrequency__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LongFrequency)[] = {
        &PY_TYPE_DEF(::org::hipparchus::stat::Frequency),
        NULL
      };

      DEFINE_TYPE(LongFrequency, t_LongFrequency, LongFrequency);
      PyObject *t_LongFrequency::wrap_Object(const LongFrequency& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LongFrequency::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LongFrequency *self = (t_LongFrequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LongFrequency::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LongFrequency::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LongFrequency *self = (t_LongFrequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LongFrequency::install(PyObject *module)
      {
        installType(&PY_TYPE(LongFrequency), &PY_TYPE_DEF(LongFrequency), module, "LongFrequency", 0);
      }

      void t_LongFrequency::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongFrequency), "class_", make_descriptor(LongFrequency::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongFrequency), "wrapfn_", make_descriptor(t_LongFrequency::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongFrequency), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LongFrequency_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LongFrequency::initializeClass, 1)))
          return NULL;
        return t_LongFrequency::wrap_Object(LongFrequency(((t_LongFrequency *) arg)->object.this$));
      }
      static PyObject *t_LongFrequency_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LongFrequency::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LongFrequency_of_(t_LongFrequency *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_LongFrequency_init_(t_LongFrequency *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            LongFrequency object((jobject) NULL);

            INT_CALL(object = LongFrequency());
            self->object = object;
            self->parameters[0] = ::java::lang::PY_TYPE(Long);
            break;
          }
         case 1:
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;
            LongFrequency object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              INT_CALL(object = LongFrequency(a0));
              self->object = object;
              self->parameters[0] = ::java::lang::PY_TYPE(Long);
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LongFrequency_addValue(t_LongFrequency *self, PyObject *args)
      {
        jint a0;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(self->object.addValue(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "addValue", args, 2);
      }

      static PyObject *t_LongFrequency_getCount(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jlong result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCount(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getCount", args, 2);
      }

      static PyObject *t_LongFrequency_getCumFreq(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jlong result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCumFreq(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getCumFreq", args, 2);
      }

      static PyObject *t_LongFrequency_getCumPct(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCumPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getCumPct", args, 2);
      }

      static PyObject *t_LongFrequency_getPct(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getPct", args, 2);
      }

      static PyObject *t_LongFrequency_incrementValue(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jlong a1;

        if (!parseArgs(args, "IJ", &a0, &a1))
        {
          OBJ_CALL(self->object.incrementValue(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "incrementValue", args, 2);
      }
      static PyObject *t_LongFrequency_get__parameters_(t_LongFrequency *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}

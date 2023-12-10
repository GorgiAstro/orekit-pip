#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PythonGeneratedMeasurementSubscriber.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonGeneratedMeasurementSubscriber::class$ = NULL;
          jmethodID *PythonGeneratedMeasurementSubscriber::mids$ = NULL;
          bool PythonGeneratedMeasurementSubscriber::live$ = false;

          jclass PythonGeneratedMeasurementSubscriber::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonGeneratedMeasurementSubscriber");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_handleGeneratedMeasurement_54d78f04ce23dff7] = env->getMethodID(cls, "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
              mids$[mid_init_d958a9bfde45c759] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonGeneratedMeasurementSubscriber::PythonGeneratedMeasurementSubscriber() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonGeneratedMeasurementSubscriber::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonGeneratedMeasurementSubscriber::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonGeneratedMeasurementSubscriber::pythonExtension(jlong a0) const
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
        namespace generation {
          static PyObject *t_PythonGeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonGeneratedMeasurementSubscriber_init_(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_finalize(t_PythonGeneratedMeasurementSubscriber *self);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_pythonExtension(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args);
          static void JNICALL t_PythonGeneratedMeasurementSubscriber_handleGeneratedMeasurement0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonGeneratedMeasurementSubscriber_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonGeneratedMeasurementSubscriber_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonGeneratedMeasurementSubscriber_get__self(t_PythonGeneratedMeasurementSubscriber *self, void *data);
          static PyGetSetDef t_PythonGeneratedMeasurementSubscriber__fields_[] = {
            DECLARE_GET_FIELD(t_PythonGeneratedMeasurementSubscriber, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonGeneratedMeasurementSubscriber__methods_[] = {
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonGeneratedMeasurementSubscriber, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonGeneratedMeasurementSubscriber)[] = {
            { Py_tp_methods, t_PythonGeneratedMeasurementSubscriber__methods_ },
            { Py_tp_init, (void *) t_PythonGeneratedMeasurementSubscriber_init_ },
            { Py_tp_getset, t_PythonGeneratedMeasurementSubscriber__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonGeneratedMeasurementSubscriber)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonGeneratedMeasurementSubscriber, t_PythonGeneratedMeasurementSubscriber, PythonGeneratedMeasurementSubscriber);

          void t_PythonGeneratedMeasurementSubscriber::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonGeneratedMeasurementSubscriber), &PY_TYPE_DEF(PythonGeneratedMeasurementSubscriber), module, "PythonGeneratedMeasurementSubscriber", 1);
          }

          void t_PythonGeneratedMeasurementSubscriber::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeneratedMeasurementSubscriber), "class_", make_descriptor(PythonGeneratedMeasurementSubscriber::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeneratedMeasurementSubscriber), "wrapfn_", make_descriptor(t_PythonGeneratedMeasurementSubscriber::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeneratedMeasurementSubscriber), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonGeneratedMeasurementSubscriber::initializeClass);
            JNINativeMethod methods[] = {
              { "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V", (void *) t_PythonGeneratedMeasurementSubscriber_handleGeneratedMeasurement0 },
              { "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonGeneratedMeasurementSubscriber_init1 },
              { "pythonDecRef", "()V", (void *) t_PythonGeneratedMeasurementSubscriber_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonGeneratedMeasurementSubscriber::initializeClass, 1)))
              return NULL;
            return t_PythonGeneratedMeasurementSubscriber::wrap_Object(PythonGeneratedMeasurementSubscriber(((t_PythonGeneratedMeasurementSubscriber *) arg)->object.this$));
          }
          static PyObject *t_PythonGeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonGeneratedMeasurementSubscriber::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonGeneratedMeasurementSubscriber_init_(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args, PyObject *kwds)
          {
            PythonGeneratedMeasurementSubscriber object((jobject) NULL);

            INT_CALL(object = PythonGeneratedMeasurementSubscriber());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_finalize(t_PythonGeneratedMeasurementSubscriber *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_pythonExtension(t_PythonGeneratedMeasurementSubscriber *self, PyObject *args)
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

          static void JNICALL t_PythonGeneratedMeasurementSubscriber_handleGeneratedMeasurement0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(::org::orekit::estimation::measurements::ObservedMeasurement(a0));
            PyObject *result = PyObject_CallMethod(obj, "handleGeneratedMeasurement", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonGeneratedMeasurementSubscriber_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonGeneratedMeasurementSubscriber_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonGeneratedMeasurementSubscriber::mids$[PythonGeneratedMeasurementSubscriber::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonGeneratedMeasurementSubscriber_get__self(t_PythonGeneratedMeasurementSubscriber *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *AbstractSolarActivityDataLoader$LineParameters::class$ = NULL;
            jmethodID *AbstractSolarActivityDataLoader$LineParameters::mids$ = NULL;
            bool AbstractSolarActivityDataLoader$LineParameters::live$ = false;

            jclass AbstractSolarActivityDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_compareTo_533614488ddee224] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters;)I");
                mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint AbstractSolarActivityDataLoader$LineParameters::compareTo(const AbstractSolarActivityDataLoader$LineParameters & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_533614488ddee224], a0.this$);
            }

            jboolean AbstractSolarActivityDataLoader$LineParameters::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityDataLoader$LineParameters::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
            }

            jint AbstractSolarActivityDataLoader$LineParameters::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_of_(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_compareTo(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_equals(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_getDate(t_AbstractSolarActivityDataLoader$LineParameters *self);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_hashCode(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__date(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__parameters_(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_AbstractSolarActivityDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader$LineParameters, date),
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader$LineParameters, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSolarActivityDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, compareTo, METH_O),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, equals, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, getDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader$LineParameters, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSolarActivityDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_AbstractSolarActivityDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractSolarActivityDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSolarActivityDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSolarActivityDataLoader$LineParameters, t_AbstractSolarActivityDataLoader$LineParameters, AbstractSolarActivityDataLoader$LineParameters);
            PyObject *t_AbstractSolarActivityDataLoader$LineParameters::wrap_Object(const AbstractSolarActivityDataLoader$LineParameters& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader$LineParameters::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader$LineParameters *self = (t_AbstractSolarActivityDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AbstractSolarActivityDataLoader$LineParameters::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader$LineParameters::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader$LineParameters *self = (t_AbstractSolarActivityDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AbstractSolarActivityDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), &PY_TYPE_DEF(AbstractSolarActivityDataLoader$LineParameters), module, "AbstractSolarActivityDataLoader$LineParameters", 0);
            }

            void t_AbstractSolarActivityDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), "class_", make_descriptor(AbstractSolarActivityDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), "wrapfn_", make_descriptor(t_AbstractSolarActivityDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSolarActivityDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_AbstractSolarActivityDataLoader$LineParameters::wrap_Object(AbstractSolarActivityDataLoader$LineParameters(((t_AbstractSolarActivityDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSolarActivityDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_of_(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_compareTo(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *arg)
            {
              AbstractSolarActivityDataLoader$LineParameters a0((jobject) NULL);
              PyTypeObject **p0;
              jint result;

              if (!parseArg(arg, "K", AbstractSolarActivityDataLoader$LineParameters::initializeClass, &a0, &p0, t_AbstractSolarActivityDataLoader$LineParameters::parameters_))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
              return NULL;
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_equals(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_getDate(t_AbstractSolarActivityDataLoader$LineParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_hashCode(t_AbstractSolarActivityDataLoader$LineParameters *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(AbstractSolarActivityDataLoader$LineParameters), (PyObject *) self, "hashCode", args, 2);
            }
            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__parameters_(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractSolarActivityDataLoader$LineParameters_get__date(t_AbstractSolarActivityDataLoader$LineParameters *self, void *data)
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
#include "org/hipparchus/optim/univariate/UnivariateObjectiveFunction.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *UnivariateObjectiveFunction::class$ = NULL;
        jmethodID *UnivariateObjectiveFunction::mids$ = NULL;
        bool UnivariateObjectiveFunction::live$ = false;

        jclass UnivariateObjectiveFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/UnivariateObjectiveFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4528ab217c8ded23] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/UnivariateFunction;)V");
            mids$[mid_getObjectiveFunction_392ddb0fce14b5b7] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateObjectiveFunction::UnivariateObjectiveFunction(const ::org::hipparchus::analysis::UnivariateFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4528ab217c8ded23, a0.this$)) {}

        ::org::hipparchus::analysis::UnivariateFunction UnivariateObjectiveFunction::getObjectiveFunction() const
        {
          return ::org::hipparchus::analysis::UnivariateFunction(env->callObjectMethod(this$, mids$[mid_getObjectiveFunction_392ddb0fce14b5b7]));
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
      namespace univariate {
        static PyObject *t_UnivariateObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariateObjectiveFunction_init_(t_UnivariateObjectiveFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateObjectiveFunction_getObjectiveFunction(t_UnivariateObjectiveFunction *self);
        static PyObject *t_UnivariateObjectiveFunction_get__objectiveFunction(t_UnivariateObjectiveFunction *self, void *data);
        static PyGetSetDef t_UnivariateObjectiveFunction__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateObjectiveFunction, objectiveFunction),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateObjectiveFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateObjectiveFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateObjectiveFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateObjectiveFunction, getObjectiveFunction, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateObjectiveFunction)[] = {
          { Py_tp_methods, t_UnivariateObjectiveFunction__methods_ },
          { Py_tp_init, (void *) t_UnivariateObjectiveFunction_init_ },
          { Py_tp_getset, t_UnivariateObjectiveFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateObjectiveFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateObjectiveFunction, t_UnivariateObjectiveFunction, UnivariateObjectiveFunction);

        void t_UnivariateObjectiveFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateObjectiveFunction), &PY_TYPE_DEF(UnivariateObjectiveFunction), module, "UnivariateObjectiveFunction", 0);
        }

        void t_UnivariateObjectiveFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateObjectiveFunction), "class_", make_descriptor(UnivariateObjectiveFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateObjectiveFunction), "wrapfn_", make_descriptor(t_UnivariateObjectiveFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateObjectiveFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateObjectiveFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateObjectiveFunction::wrap_Object(UnivariateObjectiveFunction(((t_UnivariateObjectiveFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateObjectiveFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariateObjectiveFunction_init_(t_UnivariateObjectiveFunction *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          UnivariateObjectiveFunction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
          {
            INT_CALL(object = UnivariateObjectiveFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UnivariateObjectiveFunction_getObjectiveFunction(t_UnivariateObjectiveFunction *self)
        {
          ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getObjectiveFunction());
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        static PyObject *t_UnivariateObjectiveFunction_get__objectiveFunction(t_UnivariateObjectiveFunction *self, void *data)
        {
          ::org::hipparchus::analysis::UnivariateFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getObjectiveFunction());
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/GPSBlockIIR.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GPSBlockIIR::class$ = NULL;
        jmethodID *GPSBlockIIR::mids$ = NULL;
        bool GPSBlockIIR::live$ = false;
        jdouble GPSBlockIIR::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass GPSBlockIIR::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GPSBlockIIR");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c3bb01d9fe1b183b] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_89a7d6ae4e1f14a2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_70e28bc10c6688c2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GPSBlockIIR::GPSBlockIIR(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_c3bb01d9fe1b183b, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
      namespace attitude {
        static PyObject *t_GPSBlockIIR_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GPSBlockIIR_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GPSBlockIIR_init_(t_GPSBlockIIR *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_GPSBlockIIR__methods_[] = {
          DECLARE_METHOD(t_GPSBlockIIR, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIR, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GPSBlockIIR)[] = {
          { Py_tp_methods, t_GPSBlockIIR__methods_ },
          { Py_tp_init, (void *) t_GPSBlockIIR_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GPSBlockIIR)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GPSBlockIIR, t_GPSBlockIIR, GPSBlockIIR);

        void t_GPSBlockIIR::install(PyObject *module)
        {
          installType(&PY_TYPE(GPSBlockIIR), &PY_TYPE_DEF(GPSBlockIIR), module, "GPSBlockIIR", 0);
        }

        void t_GPSBlockIIR::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "class_", make_descriptor(GPSBlockIIR::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "wrapfn_", make_descriptor(t_GPSBlockIIR::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "boxfn_", make_descriptor(boxObject));
          env->getClass(GPSBlockIIR::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "DEFAULT_YAW_RATE", make_descriptor(GPSBlockIIR::DEFAULT_YAW_RATE));
        }

        static PyObject *t_GPSBlockIIR_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GPSBlockIIR::initializeClass, 1)))
            return NULL;
          return t_GPSBlockIIR::wrap_Object(GPSBlockIIR(((t_GPSBlockIIR *) arg)->object.this$));
        }
        static PyObject *t_GPSBlockIIR_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GPSBlockIIR::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GPSBlockIIR_init_(t_GPSBlockIIR *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          ::org::orekit::frames::Frame a4((jobject) NULL);
          GPSBlockIIR object((jobject) NULL);

          if (!parseArgs(args, "Dkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = GPSBlockIIR(a0, a1, a2, a3, a4));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/HaloXZPlaneCrossingDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/HaloXZPlaneCrossingDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *HaloXZPlaneCrossingDetector::class$ = NULL;
        jmethodID *HaloXZPlaneCrossingDetector::mids$ = NULL;
        bool HaloXZPlaneCrossingDetector::live$ = false;

        jclass HaloXZPlaneCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/HaloXZPlaneCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_be9fff2230cd79f9] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/HaloXZPlaneCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HaloXZPlaneCrossingDetector::HaloXZPlaneCrossingDetector(jdouble a0, jdouble a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble HaloXZPlaneCrossingDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
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
        static PyObject *t_HaloXZPlaneCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HaloXZPlaneCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HaloXZPlaneCrossingDetector_of_(t_HaloXZPlaneCrossingDetector *self, PyObject *args);
        static int t_HaloXZPlaneCrossingDetector_init_(t_HaloXZPlaneCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HaloXZPlaneCrossingDetector_g(t_HaloXZPlaneCrossingDetector *self, PyObject *args);
        static PyObject *t_HaloXZPlaneCrossingDetector_get__parameters_(t_HaloXZPlaneCrossingDetector *self, void *data);
        static PyGetSetDef t_HaloXZPlaneCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_HaloXZPlaneCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HaloXZPlaneCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_HaloXZPlaneCrossingDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HaloXZPlaneCrossingDetector)[] = {
          { Py_tp_methods, t_HaloXZPlaneCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_HaloXZPlaneCrossingDetector_init_ },
          { Py_tp_getset, t_HaloXZPlaneCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HaloXZPlaneCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(HaloXZPlaneCrossingDetector, t_HaloXZPlaneCrossingDetector, HaloXZPlaneCrossingDetector);
        PyObject *t_HaloXZPlaneCrossingDetector::wrap_Object(const HaloXZPlaneCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HaloXZPlaneCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HaloXZPlaneCrossingDetector *self = (t_HaloXZPlaneCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_HaloXZPlaneCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HaloXZPlaneCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HaloXZPlaneCrossingDetector *self = (t_HaloXZPlaneCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_HaloXZPlaneCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(HaloXZPlaneCrossingDetector), &PY_TYPE_DEF(HaloXZPlaneCrossingDetector), module, "HaloXZPlaneCrossingDetector", 0);
        }

        void t_HaloXZPlaneCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HaloXZPlaneCrossingDetector), "class_", make_descriptor(HaloXZPlaneCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HaloXZPlaneCrossingDetector), "wrapfn_", make_descriptor(t_HaloXZPlaneCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HaloXZPlaneCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HaloXZPlaneCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HaloXZPlaneCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_HaloXZPlaneCrossingDetector::wrap_Object(HaloXZPlaneCrossingDetector(((t_HaloXZPlaneCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_HaloXZPlaneCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HaloXZPlaneCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_HaloXZPlaneCrossingDetector_of_(t_HaloXZPlaneCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_HaloXZPlaneCrossingDetector_init_(t_HaloXZPlaneCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          HaloXZPlaneCrossingDetector object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = HaloXZPlaneCrossingDetector(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(HaloXZPlaneCrossingDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HaloXZPlaneCrossingDetector_g(t_HaloXZPlaneCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HaloXZPlaneCrossingDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_HaloXZPlaneCrossingDetector_get__parameters_(t_HaloXZPlaneCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AdamsMoultonFieldIntegratorBuilder.h"
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

        ::java::lang::Class *AdamsMoultonFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsMoultonFieldIntegratorBuilder::mids$ = NULL;
        bool AdamsMoultonFieldIntegratorBuilder::live$ = false;

        jclass AdamsMoultonFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsMoultonFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d3d0b69fc0b5db95] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_79616f78bb6df44f] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonFieldIntegratorBuilder::AdamsMoultonFieldIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_d3d0b69fc0b5db95, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator AdamsMoultonFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_of_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args);
        static int t_AdamsMoultonFieldIntegratorBuilder_init_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_buildIntegrator(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_get__parameters_(t_AdamsMoultonFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AdamsMoultonFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsMoultonFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsMoultonFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsMoultonFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_AdamsMoultonFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonFieldIntegratorBuilder, t_AdamsMoultonFieldIntegratorBuilder, AdamsMoultonFieldIntegratorBuilder);
        PyObject *t_AdamsMoultonFieldIntegratorBuilder::wrap_Object(const AdamsMoultonFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegratorBuilder *self = (t_AdamsMoultonFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsMoultonFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegratorBuilder *self = (t_AdamsMoultonFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsMoultonFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonFieldIntegratorBuilder), &PY_TYPE_DEF(AdamsMoultonFieldIntegratorBuilder), module, "AdamsMoultonFieldIntegratorBuilder", 0);
        }

        void t_AdamsMoultonFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegratorBuilder), "class_", make_descriptor(AdamsMoultonFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsMoultonFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonFieldIntegratorBuilder::wrap_Object(AdamsMoultonFieldIntegratorBuilder(((t_AdamsMoultonFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_of_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsMoultonFieldIntegratorBuilder_init_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsMoultonFieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsMoultonFieldIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_buildIntegrator(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(AdamsMoultonFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_get__parameters_(t_AdamsMoultonFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/IsotropicDrag.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *IsotropicDrag::class$ = NULL;
        jmethodID *IsotropicDrag::mids$ = NULL;
        bool IsotropicDrag::live$ = false;

        jclass IsotropicDrag::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/IsotropicDrag");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_667a7965403ed91a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_dragAcceleration_72c100be3e679e5e] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dragAcceleration_3061f9a13979e9fa] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDragParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicDrag::IsotropicDrag(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        IsotropicDrag::IsotropicDrag(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_667a7965403ed91a, a0, a1, a2, a3)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicDrag::dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_72c100be3e679e5e], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicDrag::dragAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_3061f9a13979e9fa], a0.this$, a1, a2.this$, a3.this$));
        }

        ::java::util::List IsotropicDrag::getDragParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDragParametersDrivers_a6156df500549a58]));
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
      namespace drag {
        static PyObject *t_IsotropicDrag_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicDrag_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicDrag_init_(t_IsotropicDrag *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicDrag_dragAcceleration(t_IsotropicDrag *self, PyObject *args);
        static PyObject *t_IsotropicDrag_getDragParametersDrivers(t_IsotropicDrag *self);
        static PyObject *t_IsotropicDrag_get__dragParametersDrivers(t_IsotropicDrag *self, void *data);
        static PyGetSetDef t_IsotropicDrag__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicDrag, dragParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicDrag__methods_[] = {
          DECLARE_METHOD(t_IsotropicDrag, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicDrag, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicDrag, dragAcceleration, METH_VARARGS),
          DECLARE_METHOD(t_IsotropicDrag, getDragParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicDrag)[] = {
          { Py_tp_methods, t_IsotropicDrag__methods_ },
          { Py_tp_init, (void *) t_IsotropicDrag_init_ },
          { Py_tp_getset, t_IsotropicDrag__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicDrag)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicDrag, t_IsotropicDrag, IsotropicDrag);

        void t_IsotropicDrag::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicDrag), &PY_TYPE_DEF(IsotropicDrag), module, "IsotropicDrag", 0);
        }

        void t_IsotropicDrag::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicDrag), "class_", make_descriptor(IsotropicDrag::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicDrag), "wrapfn_", make_descriptor(t_IsotropicDrag::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicDrag), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicDrag_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicDrag::initializeClass, 1)))
            return NULL;
          return t_IsotropicDrag::wrap_Object(IsotropicDrag(((t_IsotropicDrag *) arg)->object.this$));
        }
        static PyObject *t_IsotropicDrag_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicDrag::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicDrag_init_(t_IsotropicDrag *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              IsotropicDrag object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = IsotropicDrag(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              IsotropicDrag object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = IsotropicDrag(a0, a1, a2, a3));
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

        static PyObject *t_IsotropicDrag_dragAcceleration(t_IsotropicDrag *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kDk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KKK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "dragAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicDrag_getDragParametersDrivers(t_IsotropicDrag *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicDrag_get__dragParametersDrivers(t_IsotropicDrag *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1063.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "java/lang/Class.h"
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
                  mids$[mid_init$_68ffe0e149823d38] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1063::Rtcm1063(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_68ffe0e149823d38, a0, a1.this$, a2.this$)) {}
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
#include "org/orekit/estimation/measurements/generation/GatheringSubscriber.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "java/util/SortedSet.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *GatheringSubscriber::class$ = NULL;
          jmethodID *GatheringSubscriber::mids$ = NULL;
          bool GatheringSubscriber::live$ = false;

          jclass GatheringSubscriber::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/GatheringSubscriber");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getGeneratedMeasurements_d01a04ddab6c7194] = env->getMethodID(cls, "getGeneratedMeasurements", "()Ljava/util/SortedSet;");
              mids$[mid_handleGeneratedMeasurement_54d78f04ce23dff7] = env->getMethodID(cls, "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
              mids$[mid_init_d958a9bfde45c759] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GatheringSubscriber::GatheringSubscriber() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::java::util::SortedSet GatheringSubscriber::getGeneratedMeasurements() const
          {
            return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getGeneratedMeasurements_d01a04ddab6c7194]));
          }

          void GatheringSubscriber::handleGeneratedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_handleGeneratedMeasurement_54d78f04ce23dff7], a0.this$);
          }

          void GatheringSubscriber::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_d958a9bfde45c759], a0.this$, a1.this$);
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
          static PyObject *t_GatheringSubscriber_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GatheringSubscriber_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GatheringSubscriber_init_(t_GatheringSubscriber *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GatheringSubscriber_getGeneratedMeasurements(t_GatheringSubscriber *self);
          static PyObject *t_GatheringSubscriber_handleGeneratedMeasurement(t_GatheringSubscriber *self, PyObject *arg);
          static PyObject *t_GatheringSubscriber_init(t_GatheringSubscriber *self, PyObject *args);
          static PyObject *t_GatheringSubscriber_get__generatedMeasurements(t_GatheringSubscriber *self, void *data);
          static PyGetSetDef t_GatheringSubscriber__fields_[] = {
            DECLARE_GET_FIELD(t_GatheringSubscriber, generatedMeasurements),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GatheringSubscriber__methods_[] = {
            DECLARE_METHOD(t_GatheringSubscriber, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GatheringSubscriber, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GatheringSubscriber, getGeneratedMeasurements, METH_NOARGS),
            DECLARE_METHOD(t_GatheringSubscriber, handleGeneratedMeasurement, METH_O),
            DECLARE_METHOD(t_GatheringSubscriber, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GatheringSubscriber)[] = {
            { Py_tp_methods, t_GatheringSubscriber__methods_ },
            { Py_tp_init, (void *) t_GatheringSubscriber_init_ },
            { Py_tp_getset, t_GatheringSubscriber__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GatheringSubscriber)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GatheringSubscriber, t_GatheringSubscriber, GatheringSubscriber);

          void t_GatheringSubscriber::install(PyObject *module)
          {
            installType(&PY_TYPE(GatheringSubscriber), &PY_TYPE_DEF(GatheringSubscriber), module, "GatheringSubscriber", 0);
          }

          void t_GatheringSubscriber::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GatheringSubscriber), "class_", make_descriptor(GatheringSubscriber::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GatheringSubscriber), "wrapfn_", make_descriptor(t_GatheringSubscriber::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GatheringSubscriber), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GatheringSubscriber_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GatheringSubscriber::initializeClass, 1)))
              return NULL;
            return t_GatheringSubscriber::wrap_Object(GatheringSubscriber(((t_GatheringSubscriber *) arg)->object.this$));
          }
          static PyObject *t_GatheringSubscriber_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GatheringSubscriber::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GatheringSubscriber_init_(t_GatheringSubscriber *self, PyObject *args, PyObject *kwds)
          {
            GatheringSubscriber object((jobject) NULL);

            INT_CALL(object = GatheringSubscriber());
            self->object = object;

            return 0;
          }

          static PyObject *t_GatheringSubscriber_getGeneratedMeasurements(t_GatheringSubscriber *self)
          {
            ::java::util::SortedSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getGeneratedMeasurements());
            return ::java::util::t_SortedSet::wrap_Object(result);
          }

          static PyObject *t_GatheringSubscriber_handleGeneratedMeasurement(t_GatheringSubscriber *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.handleGeneratedMeasurement(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "handleGeneratedMeasurement", arg);
            return NULL;
          }

          static PyObject *t_GatheringSubscriber_init(t_GatheringSubscriber *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_GatheringSubscriber_get__generatedMeasurements(t_GatheringSubscriber *self, void *data)
          {
            ::java::util::SortedSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getGeneratedMeasurements());
            return ::java::util::t_SortedSet::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttractionContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTNewtonianAttractionContext::class$ = NULL;
            jmethodID *DSSTNewtonianAttractionContext::mids$ = NULL;
            bool DSSTNewtonianAttractionContext::live$ = false;

            jclass DSSTNewtonianAttractionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttractionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0be42e9992eaa0a6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)V");
                mids$[mid_getGM_456d9a2f64d6b28d] = env->getMethodID(cls, "getGM", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTNewtonianAttractionContext::DSSTNewtonianAttractionContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const JArray< jdouble > & a1) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_0be42e9992eaa0a6, a0.this$, a1.this$)) {}

            jdouble DSSTNewtonianAttractionContext::getGM() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGM_456d9a2f64d6b28d]);
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
            static PyObject *t_DSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTNewtonianAttractionContext_init_(t_DSSTNewtonianAttractionContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTNewtonianAttractionContext_getGM(t_DSSTNewtonianAttractionContext *self);
            static PyObject *t_DSSTNewtonianAttractionContext_get__gM(t_DSSTNewtonianAttractionContext *self, void *data);
            static PyGetSetDef t_DSSTNewtonianAttractionContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTNewtonianAttractionContext, gM),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTNewtonianAttractionContext__methods_[] = {
              DECLARE_METHOD(t_DSSTNewtonianAttractionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttractionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttractionContext, getGM, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTNewtonianAttractionContext)[] = {
              { Py_tp_methods, t_DSSTNewtonianAttractionContext__methods_ },
              { Py_tp_init, (void *) t_DSSTNewtonianAttractionContext_init_ },
              { Py_tp_getset, t_DSSTNewtonianAttractionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTNewtonianAttractionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTNewtonianAttractionContext, t_DSSTNewtonianAttractionContext, DSSTNewtonianAttractionContext);

            void t_DSSTNewtonianAttractionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTNewtonianAttractionContext), &PY_TYPE_DEF(DSSTNewtonianAttractionContext), module, "DSSTNewtonianAttractionContext", 0);
            }

            void t_DSSTNewtonianAttractionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttractionContext), "class_", make_descriptor(DSSTNewtonianAttractionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttractionContext), "wrapfn_", make_descriptor(t_DSSTNewtonianAttractionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttractionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTNewtonianAttractionContext::initializeClass, 1)))
                return NULL;
              return t_DSSTNewtonianAttractionContext::wrap_Object(DSSTNewtonianAttractionContext(((t_DSSTNewtonianAttractionContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTNewtonianAttractionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTNewtonianAttractionContext_init_(t_DSSTNewtonianAttractionContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              DSSTNewtonianAttractionContext object((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTNewtonianAttractionContext(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTNewtonianAttractionContext_getGM(t_DSSTNewtonianAttractionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGM());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTNewtonianAttractionContext_get__gM(t_DSSTNewtonianAttractionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGM());
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
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ButcherArrayProvider::class$ = NULL;
        jmethodID *ButcherArrayProvider::mids$ = NULL;
        bool ButcherArrayProvider::live$ = false;

        jclass ButcherArrayProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ButcherArrayProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getA_43de1192439efa92] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_7cdc325af0834901] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_7cdc325af0834901] = env->getMethodID(cls, "getC", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< JArray< jdouble > > ButcherArrayProvider::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_43de1192439efa92]));
        }

        JArray< jdouble > ButcherArrayProvider::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_7cdc325af0834901]));
        }

        JArray< jdouble > ButcherArrayProvider::getC() const
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
        static PyObject *t_ButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ButcherArrayProvider_getA(t_ButcherArrayProvider *self);
        static PyObject *t_ButcherArrayProvider_getB(t_ButcherArrayProvider *self);
        static PyObject *t_ButcherArrayProvider_getC(t_ButcherArrayProvider *self);
        static PyObject *t_ButcherArrayProvider_get__a(t_ButcherArrayProvider *self, void *data);
        static PyObject *t_ButcherArrayProvider_get__b(t_ButcherArrayProvider *self, void *data);
        static PyObject *t_ButcherArrayProvider_get__c(t_ButcherArrayProvider *self, void *data);
        static PyGetSetDef t_ButcherArrayProvider__fields_[] = {
          DECLARE_GET_FIELD(t_ButcherArrayProvider, a),
          DECLARE_GET_FIELD(t_ButcherArrayProvider, b),
          DECLARE_GET_FIELD(t_ButcherArrayProvider, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ButcherArrayProvider__methods_[] = {
          DECLARE_METHOD(t_ButcherArrayProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ButcherArrayProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ButcherArrayProvider, getA, METH_NOARGS),
          DECLARE_METHOD(t_ButcherArrayProvider, getB, METH_NOARGS),
          DECLARE_METHOD(t_ButcherArrayProvider, getC, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ButcherArrayProvider)[] = {
          { Py_tp_methods, t_ButcherArrayProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ButcherArrayProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ButcherArrayProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ButcherArrayProvider, t_ButcherArrayProvider, ButcherArrayProvider);

        void t_ButcherArrayProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(ButcherArrayProvider), &PY_TYPE_DEF(ButcherArrayProvider), module, "ButcherArrayProvider", 0);
        }

        void t_ButcherArrayProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ButcherArrayProvider), "class_", make_descriptor(ButcherArrayProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ButcherArrayProvider), "wrapfn_", make_descriptor(t_ButcherArrayProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ButcherArrayProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ButcherArrayProvider::initializeClass, 1)))
            return NULL;
          return t_ButcherArrayProvider::wrap_Object(ButcherArrayProvider(((t_ButcherArrayProvider *) arg)->object.this$));
        }
        static PyObject *t_ButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ButcherArrayProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ButcherArrayProvider_getA(t_ButcherArrayProvider *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getA());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_ButcherArrayProvider_getB(t_ButcherArrayProvider *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getB());
          return result.wrap();
        }

        static PyObject *t_ButcherArrayProvider_getC(t_ButcherArrayProvider *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getC());
          return result.wrap();
        }

        static PyObject *t_ButcherArrayProvider_get__a(t_ButcherArrayProvider *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ButcherArrayProvider_get__b(t_ButcherArrayProvider *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_ButcherArrayProvider_get__c(t_ButcherArrayProvider *self, void *data)
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
#include "java/lang/NullPointerException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *NullPointerException::class$ = NULL;
    jmethodID *NullPointerException::mids$ = NULL;
    bool NullPointerException::live$ = false;

    jclass NullPointerException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/NullPointerException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NullPointerException::NullPointerException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    NullPointerException::NullPointerException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_NullPointerException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NullPointerException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_NullPointerException_init_(t_NullPointerException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_NullPointerException__methods_[] = {
      DECLARE_METHOD(t_NullPointerException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NullPointerException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NullPointerException)[] = {
      { Py_tp_methods, t_NullPointerException__methods_ },
      { Py_tp_init, (void *) t_NullPointerException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NullPointerException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(NullPointerException, t_NullPointerException, NullPointerException);

    void t_NullPointerException::install(PyObject *module)
    {
      installType(&PY_TYPE(NullPointerException), &PY_TYPE_DEF(NullPointerException), module, "NullPointerException", 0);
    }

    void t_NullPointerException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NullPointerException), "class_", make_descriptor(NullPointerException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NullPointerException), "wrapfn_", make_descriptor(t_NullPointerException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NullPointerException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NullPointerException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NullPointerException::initializeClass, 1)))
        return NULL;
      return t_NullPointerException::wrap_Object(NullPointerException(((t_NullPointerException *) arg)->object.this$));
    }
    static PyObject *t_NullPointerException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NullPointerException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_NullPointerException_init_(t_NullPointerException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NullPointerException object((jobject) NULL);

          INT_CALL(object = NullPointerException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          NullPointerException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = NullPointerException(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/XmlStructureProcessingState.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *XmlStructureProcessingState::class$ = NULL;
          jmethodID *XmlStructureProcessingState::mids$ = NULL;
          bool XmlStructureProcessingState::live$ = false;

          jclass XmlStructureProcessingState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/XmlStructureProcessingState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_108d781641c998af] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)V");
              mids$[mid_processToken_aa256c47fb7b26f1] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          XmlStructureProcessingState::XmlStructureProcessingState(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_108d781641c998af, a0.this$, a1.this$)) {}

          jboolean XmlStructureProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_processToken_aa256c47fb7b26f1], a0.this$);
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
          static PyObject *t_XmlStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_XmlStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_XmlStructureProcessingState_init_(t_XmlStructureProcessingState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_XmlStructureProcessingState_processToken(t_XmlStructureProcessingState *self, PyObject *arg);

          static PyMethodDef t_XmlStructureProcessingState__methods_[] = {
            DECLARE_METHOD(t_XmlStructureProcessingState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureProcessingState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureProcessingState, processToken, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(XmlStructureProcessingState)[] = {
            { Py_tp_methods, t_XmlStructureProcessingState__methods_ },
            { Py_tp_init, (void *) t_XmlStructureProcessingState_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(XmlStructureProcessingState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(XmlStructureProcessingState, t_XmlStructureProcessingState, XmlStructureProcessingState);

          void t_XmlStructureProcessingState::install(PyObject *module)
          {
            installType(&PY_TYPE(XmlStructureProcessingState), &PY_TYPE_DEF(XmlStructureProcessingState), module, "XmlStructureProcessingState", 0);
          }

          void t_XmlStructureProcessingState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureProcessingState), "class_", make_descriptor(XmlStructureProcessingState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureProcessingState), "wrapfn_", make_descriptor(t_XmlStructureProcessingState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureProcessingState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_XmlStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, XmlStructureProcessingState::initializeClass, 1)))
              return NULL;
            return t_XmlStructureProcessingState::wrap_Object(XmlStructureProcessingState(((t_XmlStructureProcessingState *) arg)->object.this$));
          }
          static PyObject *t_XmlStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, XmlStructureProcessingState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_XmlStructureProcessingState_init_(t_XmlStructureProcessingState *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a1((jobject) NULL);
            PyTypeObject **p1;
            XmlStructureProcessingState object((jobject) NULL);

            if (!parseArgs(args, "sK", ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              INT_CALL(object = XmlStructureProcessingState(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_XmlStructureProcessingState_processToken(t_XmlStructureProcessingState *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.processToken(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "processToken", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/SparseGradient.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/SparseGradient.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *SparseGradient::class$ = NULL;
        jmethodID *SparseGradient::mids$ = NULL;
        bool SparseGradient::live$ = false;

        jclass SparseGradient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/SparseGradient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_abs_696946eeaba4dcdf] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_acos_696946eeaba4dcdf] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_acosh_696946eeaba4dcdf] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_add_b9608530ef4c1741] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_add_b1f11c9800ac2d79] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_addInPlace_fba7be235291669a] = env->getMethodID(cls, "addInPlace", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)V");
            mids$[mid_asin_696946eeaba4dcdf] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_asinh_696946eeaba4dcdf] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atan_696946eeaba4dcdf] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atan2_b9608530ef4c1741] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atan2_fc07438449a274e1] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atanh_696946eeaba4dcdf] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_cbrt_696946eeaba4dcdf] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_ceil_696946eeaba4dcdf] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_compose_667832caa39a0f1a] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_copySign_b9608530ef4c1741] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_copySign_b1f11c9800ac2d79] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_cos_696946eeaba4dcdf] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_cosh_696946eeaba4dcdf] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_createConstant_b1f11c9800ac2d79] = env->getStaticMethodID(cls, "createConstant", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_createVariable_3b9386c165646dd7] = env->getStaticMethodID(cls, "createVariable", "(ID)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_divide_b9608530ef4c1741] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_divide_b1f11c9800ac2d79] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_696946eeaba4dcdf] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_expm1_696946eeaba4dcdf] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_floor_696946eeaba4dcdf] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_getDerivative_b772323fc98b7293] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getPi_696946eeaba4dcdf] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_b9608530ef4c1741] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_hypot_fc07438449a274e1] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_2c11bc9e4794f37e] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_f5fe33f0c4e1159c] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/SparseGradient;[Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_625a51937e4c69fd] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_d0186cae63917128] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_4982f3ad320f55d2] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_09ef2cc37db2d813] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_b539347ac1f5e9cb] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_fa43a717320a04b1] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_log_696946eeaba4dcdf] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_log10_696946eeaba4dcdf] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_log1p_696946eeaba4dcdf] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiply_b9608530ef4c1741] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiply_b1f11c9800ac2d79] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiply_12afe5a10b30039b] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiplyInPlace_fba7be235291669a] = env->getMethodID(cls, "multiplyInPlace", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)V");
            mids$[mid_negate_696946eeaba4dcdf] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_newInstance_b1f11c9800ac2d79] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_numVars_f2f64475e4580546] = env->getMethodID(cls, "numVars", "()I");
            mids$[mid_pow_b9608530ef4c1741] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_pow_b1f11c9800ac2d79] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_pow_12afe5a10b30039b] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_pow_3f65bc801456de75] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_reciprocal_696946eeaba4dcdf] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_remainder_b9608530ef4c1741] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_remainder_b1f11c9800ac2d79] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_rint_696946eeaba4dcdf] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_rootN_12afe5a10b30039b] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_scalb_12afe5a10b30039b] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sign_696946eeaba4dcdf] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sin_696946eeaba4dcdf] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_696946eeaba4dcdf] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_696946eeaba4dcdf] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_subtract_b9608530ef4c1741] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_subtract_b1f11c9800ac2d79] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_tan_696946eeaba4dcdf] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_tanh_696946eeaba4dcdf] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_taylor_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "taylor", "([D)D");
            mids$[mid_toDegrees_696946eeaba4dcdf] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_toRadians_696946eeaba4dcdf] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_ulp_696946eeaba4dcdf] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SparseGradient SparseGradient::abs() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_abs_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::acos() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_acos_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::acosh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_acosh_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::add(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_add_b9608530ef4c1741], a0.this$));
        }

        SparseGradient SparseGradient::add(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_add_b1f11c9800ac2d79], a0));
        }

        void SparseGradient::addInPlace(const SparseGradient & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addInPlace_fba7be235291669a], a0.this$);
        }

        SparseGradient SparseGradient::asin() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_asin_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::asinh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_asinh_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::atan() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_atan_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::atan2(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_atan2_b9608530ef4c1741], a0.this$));
        }

        SparseGradient SparseGradient::atan2(const SparseGradient & a0, const SparseGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_atan2_fc07438449a274e1], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::atanh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_atanh_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::cbrt() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_cbrt_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::ceil() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_ceil_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::compose(const JArray< jdouble > & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_compose_667832caa39a0f1a], a0.this$));
        }

        SparseGradient SparseGradient::copySign(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_copySign_b9608530ef4c1741], a0.this$));
        }

        SparseGradient SparseGradient::copySign(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_copySign_b1f11c9800ac2d79], a0));
        }

        SparseGradient SparseGradient::cos() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_cos_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::cosh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_cosh_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::createConstant(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_createConstant_b1f11c9800ac2d79], a0));
        }

        SparseGradient SparseGradient::createVariable(jint a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_createVariable_3b9386c165646dd7], a0, a1));
        }

        SparseGradient SparseGradient::divide(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_divide_b9608530ef4c1741], a0.this$));
        }

        SparseGradient SparseGradient::divide(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_divide_b1f11c9800ac2d79], a0));
        }

        jboolean SparseGradient::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        SparseGradient SparseGradient::exp() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_exp_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::expm1() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_expm1_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::floor() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_floor_696946eeaba4dcdf]));
        }

        jdouble SparseGradient::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_b772323fc98b7293], a0);
        }

        ::org::hipparchus::Field SparseGradient::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
        }

        SparseGradient SparseGradient::getPi() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_getPi_696946eeaba4dcdf]));
        }

        jdouble SparseGradient::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
        }

        jdouble SparseGradient::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_456d9a2f64d6b28d]);
        }

        jint SparseGradient::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        SparseGradient SparseGradient::hypot(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_hypot_b9608530ef4c1741], a0.this$));
        }

        SparseGradient SparseGradient::hypot(const SparseGradient & a0, const SparseGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_hypot_fc07438449a274e1], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::linearCombination(const JArray< jdouble > & a0, const JArray< SparseGradient > & a1) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_2c11bc9e4794f37e], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::linearCombination(const JArray< SparseGradient > & a0, const JArray< SparseGradient > & a1) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_f5fe33f0c4e1159c], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::linearCombination(const SparseGradient & a0, const SparseGradient & a1, const SparseGradient & a2, const SparseGradient & a3) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_625a51937e4c69fd], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        SparseGradient SparseGradient::linearCombination(jdouble a0, const SparseGradient & a1, jdouble a2, const SparseGradient & a3) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_d0186cae63917128], a0, a1.this$, a2, a3.this$));
        }

        SparseGradient SparseGradient::linearCombination(const SparseGradient & a0, const SparseGradient & a1, const SparseGradient & a2, const SparseGradient & a3, const SparseGradient & a4, const SparseGradient & a5) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_4982f3ad320f55d2], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        SparseGradient SparseGradient::linearCombination(jdouble a0, const SparseGradient & a1, jdouble a2, const SparseGradient & a3, jdouble a4, const SparseGradient & a5) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_09ef2cc37db2d813], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        SparseGradient SparseGradient::linearCombination(const SparseGradient & a0, const SparseGradient & a1, const SparseGradient & a2, const SparseGradient & a3, const SparseGradient & a4, const SparseGradient & a5, const SparseGradient & a6, const SparseGradient & a7) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_b539347ac1f5e9cb], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        SparseGradient SparseGradient::linearCombination(jdouble a0, const SparseGradient & a1, jdouble a2, const SparseGradient & a3, jdouble a4, const SparseGradient & a5, jdouble a6, const SparseGradient & a7) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_fa43a717320a04b1], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        SparseGradient SparseGradient::log() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_log_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::log10() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_log10_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::log1p() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_log1p_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::multiply(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_multiply_b9608530ef4c1741], a0.this$));
        }

        SparseGradient SparseGradient::multiply(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_multiply_b1f11c9800ac2d79], a0));
        }

        SparseGradient SparseGradient::multiply(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_multiply_12afe5a10b30039b], a0));
        }

        void SparseGradient::multiplyInPlace(const SparseGradient & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_multiplyInPlace_fba7be235291669a], a0.this$);
        }

        SparseGradient SparseGradient::negate() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_negate_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::newInstance(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_newInstance_b1f11c9800ac2d79], a0));
        }

        jint SparseGradient::numVars() const
        {
          return env->callIntMethod(this$, mids$[mid_numVars_f2f64475e4580546]);
        }

        SparseGradient SparseGradient::pow(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_pow_b9608530ef4c1741], a0.this$));
        }

        SparseGradient SparseGradient::pow(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_pow_b1f11c9800ac2d79], a0));
        }

        SparseGradient SparseGradient::pow(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_pow_12afe5a10b30039b], a0));
        }

        SparseGradient SparseGradient::pow(jdouble a0, const SparseGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_pow_3f65bc801456de75], a0, a1.this$));
        }

        SparseGradient SparseGradient::reciprocal() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_reciprocal_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::remainder(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_remainder_b9608530ef4c1741], a0.this$));
        }

        SparseGradient SparseGradient::remainder(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_remainder_b1f11c9800ac2d79], a0));
        }

        SparseGradient SparseGradient::rint() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_rint_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::rootN(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_rootN_12afe5a10b30039b], a0));
        }

        SparseGradient SparseGradient::scalb(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_scalb_12afe5a10b30039b], a0));
        }

        SparseGradient SparseGradient::sign() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sign_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::sin() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sin_696946eeaba4dcdf]));
        }

        ::org::hipparchus::util::FieldSinCos SparseGradient::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
        }

        SparseGradient SparseGradient::sinh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sinh_696946eeaba4dcdf]));
        }

        ::org::hipparchus::util::FieldSinhCosh SparseGradient::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
        }

        SparseGradient SparseGradient::sqrt() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sqrt_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::subtract(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_subtract_b9608530ef4c1741], a0.this$));
        }

        SparseGradient SparseGradient::subtract(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_subtract_b1f11c9800ac2d79], a0));
        }

        SparseGradient SparseGradient::tan() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_tan_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::tanh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_tanh_696946eeaba4dcdf]));
        }

        jdouble SparseGradient::taylor(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_f05cb8c6dfd5e0b9], a0.this$);
        }

        SparseGradient SparseGradient::toDegrees() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_toDegrees_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::toRadians() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_toRadians_696946eeaba4dcdf]));
        }

        SparseGradient SparseGradient::ulp() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_ulp_696946eeaba4dcdf]));
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
        static PyObject *t_SparseGradient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SparseGradient_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SparseGradient_abs(t_SparseGradient *self);
        static PyObject *t_SparseGradient_acos(t_SparseGradient *self);
        static PyObject *t_SparseGradient_acosh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_add(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_addInPlace(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_asin(t_SparseGradient *self);
        static PyObject *t_SparseGradient_asinh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_atan(t_SparseGradient *self);
        static PyObject *t_SparseGradient_atan2(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_atan2_(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_atanh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_cbrt(t_SparseGradient *self);
        static PyObject *t_SparseGradient_ceil(t_SparseGradient *self);
        static PyObject *t_SparseGradient_compose(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_copySign(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_cos(t_SparseGradient *self);
        static PyObject *t_SparseGradient_cosh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_createConstant(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SparseGradient_createVariable(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_divide(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_equals(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_exp(t_SparseGradient *self);
        static PyObject *t_SparseGradient_expm1(t_SparseGradient *self);
        static PyObject *t_SparseGradient_floor(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getDerivative(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_getField(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getPi(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getReal(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getValue(t_SparseGradient *self);
        static PyObject *t_SparseGradient_hashCode(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_hypot(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_hypot_(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_linearCombination(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_log(t_SparseGradient *self);
        static PyObject *t_SparseGradient_log10(t_SparseGradient *self);
        static PyObject *t_SparseGradient_log1p(t_SparseGradient *self);
        static PyObject *t_SparseGradient_multiply(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_multiplyInPlace(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_negate(t_SparseGradient *self);
        static PyObject *t_SparseGradient_newInstance(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_numVars(t_SparseGradient *self);
        static PyObject *t_SparseGradient_pow(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_reciprocal(t_SparseGradient *self);
        static PyObject *t_SparseGradient_remainder(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_rint(t_SparseGradient *self);
        static PyObject *t_SparseGradient_rootN(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_scalb(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_sign(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sin(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sinCos(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sinh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sinhCosh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sqrt(t_SparseGradient *self);
        static PyObject *t_SparseGradient_subtract(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_tan(t_SparseGradient *self);
        static PyObject *t_SparseGradient_tanh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_taylor(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_toDegrees(t_SparseGradient *self);
        static PyObject *t_SparseGradient_toRadians(t_SparseGradient *self);
        static PyObject *t_SparseGradient_ulp(t_SparseGradient *self);
        static PyObject *t_SparseGradient_get__field(t_SparseGradient *self, void *data);
        static PyObject *t_SparseGradient_get__pi(t_SparseGradient *self, void *data);
        static PyObject *t_SparseGradient_get__real(t_SparseGradient *self, void *data);
        static PyObject *t_SparseGradient_get__value(t_SparseGradient *self, void *data);
        static PyGetSetDef t_SparseGradient__fields_[] = {
          DECLARE_GET_FIELD(t_SparseGradient, field),
          DECLARE_GET_FIELD(t_SparseGradient, pi),
          DECLARE_GET_FIELD(t_SparseGradient, real),
          DECLARE_GET_FIELD(t_SparseGradient, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SparseGradient__methods_[] = {
          DECLARE_METHOD(t_SparseGradient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, abs, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, acos, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, acosh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, add, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, addInPlace, METH_O),
          DECLARE_METHOD(t_SparseGradient, asin, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, asinh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, atan, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, atan2, METH_O),
          DECLARE_METHOD(t_SparseGradient, atan2_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, atanh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, ceil, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, compose, METH_O),
          DECLARE_METHOD(t_SparseGradient, copySign, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, cos, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, cosh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, createConstant, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, createVariable, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, divide, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, equals, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, exp, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, expm1, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, floor, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getDerivative, METH_O),
          DECLARE_METHOD(t_SparseGradient, getField, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getPi, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getReal, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getValue, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, hypot, METH_O),
          DECLARE_METHOD(t_SparseGradient, hypot_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, log, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, log10, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, log1p, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, multiply, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, multiplyInPlace, METH_O),
          DECLARE_METHOD(t_SparseGradient, negate, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, newInstance, METH_O),
          DECLARE_METHOD(t_SparseGradient, numVars, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, pow, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, remainder, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, rint, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, rootN, METH_O),
          DECLARE_METHOD(t_SparseGradient, scalb, METH_O),
          DECLARE_METHOD(t_SparseGradient, sign, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sin, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sinh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, subtract, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, tan, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, tanh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, taylor, METH_O),
          DECLARE_METHOD(t_SparseGradient, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, ulp, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SparseGradient)[] = {
          { Py_tp_methods, t_SparseGradient__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SparseGradient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SparseGradient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SparseGradient, t_SparseGradient, SparseGradient);

        void t_SparseGradient::install(PyObject *module)
        {
          installType(&PY_TYPE(SparseGradient), &PY_TYPE_DEF(SparseGradient), module, "SparseGradient", 0);
        }

        void t_SparseGradient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SparseGradient), "class_", make_descriptor(SparseGradient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SparseGradient), "wrapfn_", make_descriptor(t_SparseGradient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SparseGradient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SparseGradient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SparseGradient::initializeClass, 1)))
            return NULL;
          return t_SparseGradient::wrap_Object(SparseGradient(((t_SparseGradient *) arg)->object.this$));
        }
        static PyObject *t_SparseGradient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SparseGradient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SparseGradient_abs(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_acos(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_acosh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_add(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_addInPlace(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addInPlace(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addInPlace", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_asin(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_asinh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_atan(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_atan2(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_atan2_(PyTypeObject *type, PyObject *args)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient a1((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "kk", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::atan2(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "atan2_", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_atanh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_cbrt(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_ceil(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_compose(t_SparseGradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_copySign(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_cos(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_cosh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_createConstant(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::createConstant(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createConstant", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_createVariable(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::createVariable(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createVariable", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_divide(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_equals(t_SparseGradient *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(SparseGradient), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_SparseGradient_exp(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_expm1(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_floor(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_getDerivative(t_SparseGradient *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivative", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_getField(t_SparseGradient *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(SparseGradient));
        }

        static PyObject *t_SparseGradient_getPi(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_getReal(t_SparseGradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SparseGradient_getValue(t_SparseGradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SparseGradient_hashCode(t_SparseGradient *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(SparseGradient), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_SparseGradient_hypot(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_hypot_(PyTypeObject *type, PyObject *args)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient a1((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "kk", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::hypot(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "hypot_", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_linearCombination(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< SparseGradient > a1((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "[D[k", SparseGradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              JArray< SparseGradient > a0((jobject) NULL);
              JArray< SparseGradient > a1((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "[k[k", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient a1((jobject) NULL);
              SparseGradient a2((jobject) NULL);
              SparseGradient a3((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "kkkk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient a1((jobject) NULL);
              jdouble a2;
              SparseGradient a3((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "DkDk", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient a1((jobject) NULL);
              SparseGradient a2((jobject) NULL);
              SparseGradient a3((jobject) NULL);
              SparseGradient a4((jobject) NULL);
              SparseGradient a5((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient a1((jobject) NULL);
              jdouble a2;
              SparseGradient a3((jobject) NULL);
              jdouble a4;
              SparseGradient a5((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient a1((jobject) NULL);
              SparseGradient a2((jobject) NULL);
              SparseGradient a3((jobject) NULL);
              SparseGradient a4((jobject) NULL);
              SparseGradient a5((jobject) NULL);
              SparseGradient a6((jobject) NULL);
              SparseGradient a7((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient a1((jobject) NULL);
              jdouble a2;
              SparseGradient a3((jobject) NULL);
              jdouble a4;
              SparseGradient a5((jobject) NULL);
              jdouble a6;
              SparseGradient a7((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDkDk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_log(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_log10(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_log1p(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_multiply(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_multiplyInPlace(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(self->object.multiplyInPlace(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "multiplyInPlace", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_negate(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_newInstance(t_SparseGradient *self, PyObject *arg)
        {
          jdouble a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_numVars(t_SparseGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.numVars());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SparseGradient_pow(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          SparseGradient a1((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "Dk", SparseGradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::pow(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_reciprocal(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_remainder(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_rint(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_rootN(t_SparseGradient *self, PyObject *arg)
        {
          jint a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_scalb(t_SparseGradient *self, PyObject *arg)
        {
          jint a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_sign(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_sin(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_sinCos(t_SparseGradient *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(SparseGradient));
        }

        static PyObject *t_SparseGradient_sinh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_sinhCosh(t_SparseGradient *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(SparseGradient));
        }

        static PyObject *t_SparseGradient_sqrt(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_subtract(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_tan(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_tanh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_taylor(t_SparseGradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_toDegrees(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_toRadians(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_ulp(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_get__field(t_SparseGradient *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_SparseGradient_get__pi(t_SparseGradient *self, void *data)
        {
          SparseGradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_SparseGradient::wrap_Object(value);
        }

        static PyObject *t_SparseGradient_get__real(t_SparseGradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SparseGradient_get__value(t_SparseGradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GalileoScale::class$ = NULL;
      jmethodID *GalileoScale::mids$ = NULL;
      bool GalileoScale::live$ = false;

      jclass GalileoScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GalileoScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String GalileoScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jdouble GalileoScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GalileoScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      jdouble GalileoScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1], a0.this$, a1.this$);
      }

      ::java::lang::String GalileoScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_GalileoScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GalileoScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GalileoScale_getName(t_GalileoScale *self);
      static PyObject *t_GalileoScale_offsetFromTAI(t_GalileoScale *self, PyObject *args);
      static PyObject *t_GalileoScale_offsetToTAI(t_GalileoScale *self, PyObject *args);
      static PyObject *t_GalileoScale_toString(t_GalileoScale *self, PyObject *args);
      static PyObject *t_GalileoScale_get__name(t_GalileoScale *self, void *data);
      static PyGetSetDef t_GalileoScale__fields_[] = {
        DECLARE_GET_FIELD(t_GalileoScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GalileoScale__methods_[] = {
        DECLARE_METHOD(t_GalileoScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GalileoScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GalileoScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GalileoScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GalileoScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_GalileoScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GalileoScale)[] = {
        { Py_tp_methods, t_GalileoScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GalileoScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GalileoScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GalileoScale, t_GalileoScale, GalileoScale);

      void t_GalileoScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GalileoScale), &PY_TYPE_DEF(GalileoScale), module, "GalileoScale", 0);
      }

      void t_GalileoScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoScale), "class_", make_descriptor(GalileoScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoScale), "wrapfn_", make_descriptor(t_GalileoScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GalileoScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GalileoScale::initializeClass, 1)))
          return NULL;
        return t_GalileoScale::wrap_Object(GalileoScale(((t_GalileoScale *) arg)->object.this$));
      }
      static PyObject *t_GalileoScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GalileoScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GalileoScale_getName(t_GalileoScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GalileoScale_offsetFromTAI(t_GalileoScale *self, PyObject *args)
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

      static PyObject *t_GalileoScale_offsetToTAI(t_GalileoScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_GalileoScale_toString(t_GalileoScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GalileoScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GalileoScale_get__name(t_GalileoScale *self, void *data)
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
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *UnivariateMatrixFunction::class$ = NULL;
      jmethodID *UnivariateMatrixFunction::mids$ = NULL;
      bool UnivariateMatrixFunction::live$ = false;

      jclass UnivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/UnivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_46ddffa0c457a6dd] = env->getMethodID(cls, "value", "(D)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > UnivariateMatrixFunction::value(jdouble a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_46ddffa0c457a6dd], a0));
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
      static PyObject *t_UnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateMatrixFunction_value(t_UnivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_UnivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_UnivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnivariateMatrixFunction)[] = {
        { Py_tp_methods, t_UnivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnivariateMatrixFunction, t_UnivariateMatrixFunction, UnivariateMatrixFunction);

      void t_UnivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(UnivariateMatrixFunction), &PY_TYPE_DEF(UnivariateMatrixFunction), module, "UnivariateMatrixFunction", 0);
      }

      void t_UnivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunction), "class_", make_descriptor(UnivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunction), "wrapfn_", make_descriptor(t_UnivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_UnivariateMatrixFunction::wrap_Object(UnivariateMatrixFunction(((t_UnivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_UnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnivariateMatrixFunction_value(t_UnivariateMatrixFunction *self, PyObject *arg)
      {
        jdouble a0;
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Data.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm01::class$ = NULL;
              jmethodID *SsrIgm01::mids$ = NULL;
              bool SsrIgm01::live$ = false;

              jclass SsrIgm01::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d1cb74964c36a726] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm01Data_d6753b7055940a54] = env->getMethodID(cls, "getSsrIgm01Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm01::SsrIgm01(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm01Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_d1cb74964c36a726, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm01::getSsrIgm01Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm01Data_d6753b7055940a54]));
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
              static PyObject *t_SsrIgm01_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01_of_(t_SsrIgm01 *self, PyObject *args);
              static int t_SsrIgm01_init_(t_SsrIgm01 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm01_getSsrIgm01Data(t_SsrIgm01 *self);
              static PyObject *t_SsrIgm01_get__ssrIgm01Data(t_SsrIgm01 *self, void *data);
              static PyObject *t_SsrIgm01_get__parameters_(t_SsrIgm01 *self, void *data);
              static PyGetSetDef t_SsrIgm01__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm01, ssrIgm01Data),
                DECLARE_GET_FIELD(t_SsrIgm01, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm01__methods_[] = {
                DECLARE_METHOD(t_SsrIgm01, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm01, getSsrIgm01Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm01)[] = {
                { Py_tp_methods, t_SsrIgm01__methods_ },
                { Py_tp_init, (void *) t_SsrIgm01_init_ },
                { Py_tp_getset, t_SsrIgm01__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm01)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm01, t_SsrIgm01, SsrIgm01);
              PyObject *t_SsrIgm01::wrap_Object(const SsrIgm01& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm01::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm01 *self = (t_SsrIgm01 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm01::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm01::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm01 *self = (t_SsrIgm01 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm01::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm01), &PY_TYPE_DEF(SsrIgm01), module, "SsrIgm01", 0);
              }

              void t_SsrIgm01::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01), "class_", make_descriptor(SsrIgm01::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01), "wrapfn_", make_descriptor(t_SsrIgm01::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm01_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm01::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm01::wrap_Object(SsrIgm01(((t_SsrIgm01 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm01_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm01::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm01_of_(t_SsrIgm01 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm01_init_(t_SsrIgm01 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm01Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm01 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm01Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm01(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm01Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm01Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm01_getSsrIgm01Data(t_SsrIgm01 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm01Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm01_get__parameters_(t_SsrIgm01 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm01_get__ssrIgm01Data(t_SsrIgm01 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm01Data());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "org/hipparchus/util/Incrementor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Incrementor::class$ = NULL;
      jmethodID *Incrementor::mids$ = NULL;
      bool Incrementor::live$ = false;

      jclass Incrementor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Incrementor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_929833d91a321b2f] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/util/Incrementor$MaxCountExceededCallback;)V");
          mids$[mid_canIncrement_e470b6d9e0d979db] = env->getMethodID(cls, "canIncrement", "()Z");
          mids$[mid_canIncrement_e95e4c7cd3dd17ff] = env->getMethodID(cls, "canIncrement", "(I)Z");
          mids$[mid_getCount_f2f64475e4580546] = env->getMethodID(cls, "getCount", "()I");
          mids$[mid_getMaximalCount_f2f64475e4580546] = env->getMethodID(cls, "getMaximalCount", "()I");
          mids$[mid_increment_7ae3461a92a43152] = env->getMethodID(cls, "increment", "()V");
          mids$[mid_increment_0a2a1ac2721c0336] = env->getMethodID(cls, "increment", "(I)V");
          mids$[mid_reset_7ae3461a92a43152] = env->getMethodID(cls, "reset", "()V");
          mids$[mid_withCallback_d6623a2186de5203] = env->getMethodID(cls, "withCallback", "(Lorg/hipparchus/util/Incrementor$MaxCountExceededCallback;)Lorg/hipparchus/util/Incrementor;");
          mids$[mid_withCount_1db12502a7c68c36] = env->getMethodID(cls, "withCount", "(I)Lorg/hipparchus/util/Incrementor;");
          mids$[mid_withMaximalCount_1db12502a7c68c36] = env->getMethodID(cls, "withMaximalCount", "(I)Lorg/hipparchus/util/Incrementor;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Incrementor::Incrementor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      Incrementor::Incrementor(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      Incrementor::Incrementor(jint a0, const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_929833d91a321b2f, a0, a1.this$)) {}

      jboolean Incrementor::canIncrement() const
      {
        return env->callBooleanMethod(this$, mids$[mid_canIncrement_e470b6d9e0d979db]);
      }

      jboolean Incrementor::canIncrement(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_canIncrement_e95e4c7cd3dd17ff], a0);
      }

      jint Incrementor::getCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_f2f64475e4580546]);
      }

      jint Incrementor::getMaximalCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaximalCount_f2f64475e4580546]);
      }

      void Incrementor::increment() const
      {
        env->callVoidMethod(this$, mids$[mid_increment_7ae3461a92a43152]);
      }

      void Incrementor::increment(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_0a2a1ac2721c0336], a0);
      }

      void Incrementor::reset() const
      {
        env->callVoidMethod(this$, mids$[mid_reset_7ae3461a92a43152]);
      }

      Incrementor Incrementor::withCallback(const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback & a0) const
      {
        return Incrementor(env->callObjectMethod(this$, mids$[mid_withCallback_d6623a2186de5203], a0.this$));
      }

      Incrementor Incrementor::withCount(jint a0) const
      {
        return Incrementor(env->callObjectMethod(this$, mids$[mid_withCount_1db12502a7c68c36], a0));
      }

      Incrementor Incrementor::withMaximalCount(jint a0) const
      {
        return Incrementor(env->callObjectMethod(this$, mids$[mid_withMaximalCount_1db12502a7c68c36], a0));
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
      static PyObject *t_Incrementor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Incrementor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Incrementor_init_(t_Incrementor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Incrementor_canIncrement(t_Incrementor *self, PyObject *args);
      static PyObject *t_Incrementor_getCount(t_Incrementor *self);
      static PyObject *t_Incrementor_getMaximalCount(t_Incrementor *self);
      static PyObject *t_Incrementor_increment(t_Incrementor *self, PyObject *args);
      static PyObject *t_Incrementor_reset(t_Incrementor *self);
      static PyObject *t_Incrementor_withCallback(t_Incrementor *self, PyObject *arg);
      static PyObject *t_Incrementor_withCount(t_Incrementor *self, PyObject *arg);
      static PyObject *t_Incrementor_withMaximalCount(t_Incrementor *self, PyObject *arg);
      static PyObject *t_Incrementor_get__count(t_Incrementor *self, void *data);
      static PyObject *t_Incrementor_get__maximalCount(t_Incrementor *self, void *data);
      static PyGetSetDef t_Incrementor__fields_[] = {
        DECLARE_GET_FIELD(t_Incrementor, count),
        DECLARE_GET_FIELD(t_Incrementor, maximalCount),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Incrementor__methods_[] = {
        DECLARE_METHOD(t_Incrementor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor, canIncrement, METH_VARARGS),
        DECLARE_METHOD(t_Incrementor, getCount, METH_NOARGS),
        DECLARE_METHOD(t_Incrementor, getMaximalCount, METH_NOARGS),
        DECLARE_METHOD(t_Incrementor, increment, METH_VARARGS),
        DECLARE_METHOD(t_Incrementor, reset, METH_NOARGS),
        DECLARE_METHOD(t_Incrementor, withCallback, METH_O),
        DECLARE_METHOD(t_Incrementor, withCount, METH_O),
        DECLARE_METHOD(t_Incrementor, withMaximalCount, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Incrementor)[] = {
        { Py_tp_methods, t_Incrementor__methods_ },
        { Py_tp_init, (void *) t_Incrementor_init_ },
        { Py_tp_getset, t_Incrementor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Incrementor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Incrementor, t_Incrementor, Incrementor);

      void t_Incrementor::install(PyObject *module)
      {
        installType(&PY_TYPE(Incrementor), &PY_TYPE_DEF(Incrementor), module, "Incrementor", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "MaxCountExceededCallback", make_descriptor(&PY_TYPE_DEF(Incrementor$MaxCountExceededCallback)));
      }

      void t_Incrementor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "class_", make_descriptor(Incrementor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "wrapfn_", make_descriptor(t_Incrementor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Incrementor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Incrementor::initializeClass, 1)))
          return NULL;
        return t_Incrementor::wrap_Object(Incrementor(((t_Incrementor *) arg)->object.this$));
      }
      static PyObject *t_Incrementor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Incrementor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Incrementor_init_(t_Incrementor *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Incrementor object((jobject) NULL);

            INT_CALL(object = Incrementor());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            Incrementor object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Incrementor(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::hipparchus::util::Incrementor$MaxCountExceededCallback a1((jobject) NULL);
            Incrementor object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::util::Incrementor$MaxCountExceededCallback::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Incrementor(a0, a1));
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

      static PyObject *t_Incrementor_canIncrement(t_Incrementor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jboolean result;
            OBJ_CALL(result = self->object.canIncrement());
            Py_RETURN_BOOL(result);
          }
          break;
         case 1:
          {
            jint a0;
            jboolean result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.canIncrement(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "canIncrement", args);
        return NULL;
      }

      static PyObject *t_Incrementor_getCount(t_Incrementor *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Incrementor_getMaximalCount(t_Incrementor *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaximalCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Incrementor_increment(t_Incrementor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.increment());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "increment", args);
        return NULL;
      }

      static PyObject *t_Incrementor_reset(t_Incrementor *self)
      {
        OBJ_CALL(self->object.reset());
        Py_RETURN_NONE;
      }

      static PyObject *t_Incrementor_withCallback(t_Incrementor *self, PyObject *arg)
      {
        ::org::hipparchus::util::Incrementor$MaxCountExceededCallback a0((jobject) NULL);
        Incrementor result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor$MaxCountExceededCallback::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withCallback(a0));
          return t_Incrementor::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withCallback", arg);
        return NULL;
      }

      static PyObject *t_Incrementor_withCount(t_Incrementor *self, PyObject *arg)
      {
        jint a0;
        Incrementor result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withCount(a0));
          return t_Incrementor::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withCount", arg);
        return NULL;
      }

      static PyObject *t_Incrementor_withMaximalCount(t_Incrementor *self, PyObject *arg)
      {
        jint a0;
        Incrementor result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaximalCount(a0));
          return t_Incrementor::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaximalCount", arg);
        return NULL;
      }

      static PyObject *t_Incrementor_get__count(t_Incrementor *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCount());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Incrementor_get__maximalCount(t_Incrementor *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaximalCount());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Data::class$ = NULL;
          jmethodID *Data::mids$ = NULL;
          bool Data::live$ = false;

          jclass Data::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Data");

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
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_Data_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Data_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_Data__methods_[] = {
            DECLARE_METHOD(t_Data, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Data, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Data)[] = {
            { Py_tp_methods, t_Data__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Data)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Section),
            NULL
          };

          DEFINE_TYPE(Data, t_Data, Data);

          void t_Data::install(PyObject *module)
          {
            installType(&PY_TYPE(Data), &PY_TYPE_DEF(Data), module, "Data", 0);
          }

          void t_Data::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Data), "class_", make_descriptor(Data::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Data), "wrapfn_", make_descriptor(t_Data::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Data), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Data_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Data::initializeClass, 1)))
              return NULL;
            return t_Data::wrap_Object(Data(((t_Data *) arg)->object.this$));
          }
          static PyObject *t_Data_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Data::initializeClass, 0))
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
#include "org/orekit/propagation/events/FilterType.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FilterType::class$ = NULL;
        jmethodID *FilterType::mids$ = NULL;
        bool FilterType::live$ = false;
        FilterType *FilterType::TRIGGER_ONLY_DECREASING_EVENTS = NULL;
        FilterType *FilterType::TRIGGER_ONLY_INCREASING_EVENTS = NULL;

        jclass FilterType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FilterType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_5133e6270b419ed8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/events/FilterType;");
            mids$[mid_values_53e2eec35fa1586c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/events/FilterType;");
            mids$[mid_selectTransformer_85e10f2660b5f940] = env->getMethodID(cls, "selectTransformer", "(Lorg/orekit/propagation/events/Transformer;DZ)Lorg/orekit/propagation/events/Transformer;");
            mids$[mid_getTriggeredIncreasing_e470b6d9e0d979db] = env->getMethodID(cls, "getTriggeredIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRIGGER_ONLY_DECREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_DECREASING_EVENTS", "Lorg/orekit/propagation/events/FilterType;"));
            TRIGGER_ONLY_INCREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_INCREASING_EVENTS", "Lorg/orekit/propagation/events/FilterType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FilterType FilterType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FilterType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5133e6270b419ed8], a0.this$));
        }

        JArray< FilterType > FilterType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< FilterType >(env->callStaticObjectMethod(cls, mids$[mid_values_53e2eec35fa1586c]));
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
        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args);
        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_FilterType_values(PyTypeObject *type);
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data);
        static PyGetSetDef t_FilterType__fields_[] = {
          DECLARE_GET_FIELD(t_FilterType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FilterType__methods_[] = {
          DECLARE_METHOD(t_FilterType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, of_, METH_VARARGS),
          DECLARE_METHOD(t_FilterType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FilterType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FilterType)[] = {
          { Py_tp_methods, t_FilterType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FilterType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FilterType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(FilterType, t_FilterType, FilterType);
        PyObject *t_FilterType::wrap_Object(const FilterType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FilterType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FilterType::install(PyObject *module)
        {
          installType(&PY_TYPE(FilterType), &PY_TYPE_DEF(FilterType), module, "FilterType", 0);
        }

        void t_FilterType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "class_", make_descriptor(FilterType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "wrapfn_", make_descriptor(t_FilterType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "boxfn_", make_descriptor(boxObject));
          env->getClass(FilterType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_DECREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_DECREASING_EVENTS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_INCREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_INCREASING_EVENTS)));
        }

        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FilterType::initializeClass, 1)))
            return NULL;
          return t_FilterType::wrap_Object(FilterType(((t_FilterType *) arg)->object.this$));
        }
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FilterType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          FilterType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::FilterType::valueOf(a0));
            return t_FilterType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_FilterType_values(PyTypeObject *type)
        {
          JArray< FilterType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::propagation::events::FilterType::values());
          return JArray<jobject>(result.this$).wrap(t_FilterType::wrap_jobject);
        }
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ODParameters::class$ = NULL;
            jmethodID *ODParameters::mids$ = NULL;
            bool ODParameters::live$ = false;

            jclass ODParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ODParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getActualOdSpan_456d9a2f64d6b28d] = env->getMethodID(cls, "getActualOdSpan", "()D");
                mids$[mid_getObsAvailable_f2f64475e4580546] = env->getMethodID(cls, "getObsAvailable", "()I");
                mids$[mid_getObsUsed_f2f64475e4580546] = env->getMethodID(cls, "getObsUsed", "()I");
                mids$[mid_getOdEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getOdEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getRecommendedOdSpan_456d9a2f64d6b28d] = env->getMethodID(cls, "getRecommendedOdSpan", "()D");
                mids$[mid_getResidualsAccepted_456d9a2f64d6b28d] = env->getMethodID(cls, "getResidualsAccepted", "()D");
                mids$[mid_getTimeLastObsEnd_aaa854c403487cf3] = env->getMethodID(cls, "getTimeLastObsEnd", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTimeLastObsStart_aaa854c403487cf3] = env->getMethodID(cls, "getTimeLastObsStart", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTracksAvailable_f2f64475e4580546] = env->getMethodID(cls, "getTracksAvailable", "()I");
                mids$[mid_getTracksUsed_f2f64475e4580546] = env->getMethodID(cls, "getTracksUsed", "()I");
                mids$[mid_getWeightedRMS_456d9a2f64d6b28d] = env->getMethodID(cls, "getWeightedRMS", "()D");
                mids$[mid_setActualOdSpan_77e0f9a1f260e2e5] = env->getMethodID(cls, "setActualOdSpan", "(D)V");
                mids$[mid_setObsAvailable_0a2a1ac2721c0336] = env->getMethodID(cls, "setObsAvailable", "(I)V");
                mids$[mid_setObsUsed_0a2a1ac2721c0336] = env->getMethodID(cls, "setObsUsed", "(I)V");
                mids$[mid_setOdEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setOdEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setRecommendedOdSpan_77e0f9a1f260e2e5] = env->getMethodID(cls, "setRecommendedOdSpan", "(D)V");
                mids$[mid_setResidualsAccepted_77e0f9a1f260e2e5] = env->getMethodID(cls, "setResidualsAccepted", "(D)V");
                mids$[mid_setTimeLastObsEnd_e82d68cd9f886886] = env->getMethodID(cls, "setTimeLastObsEnd", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTimeLastObsStart_e82d68cd9f886886] = env->getMethodID(cls, "setTimeLastObsStart", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTracksAvailable_0a2a1ac2721c0336] = env->getMethodID(cls, "setTracksAvailable", "(I)V");
                mids$[mid_setTracksUsed_0a2a1ac2721c0336] = env->getMethodID(cls, "setTracksUsed", "(I)V");
                mids$[mid_setWeightedRMS_77e0f9a1f260e2e5] = env->getMethodID(cls, "setWeightedRMS", "(D)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ODParameters::ODParameters() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jdouble ODParameters::getActualOdSpan() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getActualOdSpan_456d9a2f64d6b28d]);
            }

            jint ODParameters::getObsAvailable() const
            {
              return env->callIntMethod(this$, mids$[mid_getObsAvailable_f2f64475e4580546]);
            }

            jint ODParameters::getObsUsed() const
            {
              return env->callIntMethod(this$, mids$[mid_getObsUsed_f2f64475e4580546]);
            }

            ::org::orekit::time::AbsoluteDate ODParameters::getOdEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getOdEpoch_aaa854c403487cf3]));
            }

            jdouble ODParameters::getRecommendedOdSpan() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRecommendedOdSpan_456d9a2f64d6b28d]);
            }

            jdouble ODParameters::getResidualsAccepted() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getResidualsAccepted_456d9a2f64d6b28d]);
            }

            ::org::orekit::time::AbsoluteDate ODParameters::getTimeLastObsEnd() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTimeLastObsEnd_aaa854c403487cf3]));
            }

            ::org::orekit::time::AbsoluteDate ODParameters::getTimeLastObsStart() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTimeLastObsStart_aaa854c403487cf3]));
            }

            jint ODParameters::getTracksAvailable() const
            {
              return env->callIntMethod(this$, mids$[mid_getTracksAvailable_f2f64475e4580546]);
            }

            jint ODParameters::getTracksUsed() const
            {
              return env->callIntMethod(this$, mids$[mid_getTracksUsed_f2f64475e4580546]);
            }

            jdouble ODParameters::getWeightedRMS() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getWeightedRMS_456d9a2f64d6b28d]);
            }

            void ODParameters::setActualOdSpan(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setActualOdSpan_77e0f9a1f260e2e5], a0);
            }

            void ODParameters::setObsAvailable(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObsAvailable_0a2a1ac2721c0336], a0);
            }

            void ODParameters::setObsUsed(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObsUsed_0a2a1ac2721c0336], a0);
            }

            void ODParameters::setOdEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOdEpoch_e82d68cd9f886886], a0.this$);
            }

            void ODParameters::setRecommendedOdSpan(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRecommendedOdSpan_77e0f9a1f260e2e5], a0);
            }

            void ODParameters::setResidualsAccepted(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setResidualsAccepted_77e0f9a1f260e2e5], a0);
            }

            void ODParameters::setTimeLastObsEnd(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimeLastObsEnd_e82d68cd9f886886], a0.this$);
            }

            void ODParameters::setTimeLastObsStart(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimeLastObsStart_e82d68cd9f886886], a0.this$);
            }

            void ODParameters::setTracksAvailable(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTracksAvailable_0a2a1ac2721c0336], a0);
            }

            void ODParameters::setTracksUsed(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTracksUsed_0a2a1ac2721c0336], a0);
            }

            void ODParameters::setWeightedRMS(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setWeightedRMS_77e0f9a1f260e2e5], a0);
            }

            void ODParameters::validate(jdouble a0) const
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
            static PyObject *t_ODParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ODParameters_init_(t_ODParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ODParameters_getActualOdSpan(t_ODParameters *self);
            static PyObject *t_ODParameters_getObsAvailable(t_ODParameters *self);
            static PyObject *t_ODParameters_getObsUsed(t_ODParameters *self);
            static PyObject *t_ODParameters_getOdEpoch(t_ODParameters *self);
            static PyObject *t_ODParameters_getRecommendedOdSpan(t_ODParameters *self);
            static PyObject *t_ODParameters_getResidualsAccepted(t_ODParameters *self);
            static PyObject *t_ODParameters_getTimeLastObsEnd(t_ODParameters *self);
            static PyObject *t_ODParameters_getTimeLastObsStart(t_ODParameters *self);
            static PyObject *t_ODParameters_getTracksAvailable(t_ODParameters *self);
            static PyObject *t_ODParameters_getTracksUsed(t_ODParameters *self);
            static PyObject *t_ODParameters_getWeightedRMS(t_ODParameters *self);
            static PyObject *t_ODParameters_setActualOdSpan(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setObsAvailable(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setObsUsed(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setOdEpoch(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setRecommendedOdSpan(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setResidualsAccepted(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTimeLastObsEnd(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTimeLastObsStart(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTracksAvailable(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTracksUsed(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setWeightedRMS(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_validate(t_ODParameters *self, PyObject *args);
            static PyObject *t_ODParameters_get__actualOdSpan(t_ODParameters *self, void *data);
            static int t_ODParameters_set__actualOdSpan(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__obsAvailable(t_ODParameters *self, void *data);
            static int t_ODParameters_set__obsAvailable(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__obsUsed(t_ODParameters *self, void *data);
            static int t_ODParameters_set__obsUsed(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__odEpoch(t_ODParameters *self, void *data);
            static int t_ODParameters_set__odEpoch(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__recommendedOdSpan(t_ODParameters *self, void *data);
            static int t_ODParameters_set__recommendedOdSpan(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__residualsAccepted(t_ODParameters *self, void *data);
            static int t_ODParameters_set__residualsAccepted(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__timeLastObsEnd(t_ODParameters *self, void *data);
            static int t_ODParameters_set__timeLastObsEnd(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__timeLastObsStart(t_ODParameters *self, void *data);
            static int t_ODParameters_set__timeLastObsStart(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__tracksAvailable(t_ODParameters *self, void *data);
            static int t_ODParameters_set__tracksAvailable(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__tracksUsed(t_ODParameters *self, void *data);
            static int t_ODParameters_set__tracksUsed(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__weightedRMS(t_ODParameters *self, void *data);
            static int t_ODParameters_set__weightedRMS(t_ODParameters *self, PyObject *arg, void *data);
            static PyGetSetDef t_ODParameters__fields_[] = {
              DECLARE_GETSET_FIELD(t_ODParameters, actualOdSpan),
              DECLARE_GETSET_FIELD(t_ODParameters, obsAvailable),
              DECLARE_GETSET_FIELD(t_ODParameters, obsUsed),
              DECLARE_GETSET_FIELD(t_ODParameters, odEpoch),
              DECLARE_GETSET_FIELD(t_ODParameters, recommendedOdSpan),
              DECLARE_GETSET_FIELD(t_ODParameters, residualsAccepted),
              DECLARE_GETSET_FIELD(t_ODParameters, timeLastObsEnd),
              DECLARE_GETSET_FIELD(t_ODParameters, timeLastObsStart),
              DECLARE_GETSET_FIELD(t_ODParameters, tracksAvailable),
              DECLARE_GETSET_FIELD(t_ODParameters, tracksUsed),
              DECLARE_GETSET_FIELD(t_ODParameters, weightedRMS),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ODParameters__methods_[] = {
              DECLARE_METHOD(t_ODParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParameters, getActualOdSpan, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getObsAvailable, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getObsUsed, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getOdEpoch, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getRecommendedOdSpan, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getResidualsAccepted, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTimeLastObsEnd, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTimeLastObsStart, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTracksAvailable, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTracksUsed, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getWeightedRMS, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, setActualOdSpan, METH_O),
              DECLARE_METHOD(t_ODParameters, setObsAvailable, METH_O),
              DECLARE_METHOD(t_ODParameters, setObsUsed, METH_O),
              DECLARE_METHOD(t_ODParameters, setOdEpoch, METH_O),
              DECLARE_METHOD(t_ODParameters, setRecommendedOdSpan, METH_O),
              DECLARE_METHOD(t_ODParameters, setResidualsAccepted, METH_O),
              DECLARE_METHOD(t_ODParameters, setTimeLastObsEnd, METH_O),
              DECLARE_METHOD(t_ODParameters, setTimeLastObsStart, METH_O),
              DECLARE_METHOD(t_ODParameters, setTracksAvailable, METH_O),
              DECLARE_METHOD(t_ODParameters, setTracksUsed, METH_O),
              DECLARE_METHOD(t_ODParameters, setWeightedRMS, METH_O),
              DECLARE_METHOD(t_ODParameters, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ODParameters)[] = {
              { Py_tp_methods, t_ODParameters__methods_ },
              { Py_tp_init, (void *) t_ODParameters_init_ },
              { Py_tp_getset, t_ODParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ODParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(ODParameters, t_ODParameters, ODParameters);

            void t_ODParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(ODParameters), &PY_TYPE_DEF(ODParameters), module, "ODParameters", 0);
            }

            void t_ODParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParameters), "class_", make_descriptor(ODParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParameters), "wrapfn_", make_descriptor(t_ODParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ODParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ODParameters::initializeClass, 1)))
                return NULL;
              return t_ODParameters::wrap_Object(ODParameters(((t_ODParameters *) arg)->object.this$));
            }
            static PyObject *t_ODParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ODParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ODParameters_init_(t_ODParameters *self, PyObject *args, PyObject *kwds)
            {
              ODParameters object((jobject) NULL);

              INT_CALL(object = ODParameters());
              self->object = object;

              return 0;
            }

            static PyObject *t_ODParameters_getActualOdSpan(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getActualOdSpan());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_getObsAvailable(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObsAvailable());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getObsUsed(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObsUsed());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getOdEpoch(t_ODParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getOdEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_ODParameters_getRecommendedOdSpan(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRecommendedOdSpan());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_getResidualsAccepted(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getResidualsAccepted());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_getTimeLastObsEnd(t_ODParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeLastObsEnd());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_ODParameters_getTimeLastObsStart(t_ODParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeLastObsStart());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_ODParameters_getTracksAvailable(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTracksAvailable());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getTracksUsed(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTracksUsed());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getWeightedRMS(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getWeightedRMS());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_setActualOdSpan(t_ODParameters *self, PyObject *arg)
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

            static PyObject *t_ODParameters_setObsAvailable(t_ODParameters *self, PyObject *arg)
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

            static PyObject *t_ODParameters_setObsUsed(t_ODParameters *self, PyObject *arg)
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

            static PyObject *t_ODParameters_setOdEpoch(t_ODParameters *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setOdEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOdEpoch", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setRecommendedOdSpan(t_ODParameters *self, PyObject *arg)
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

            static PyObject *t_ODParameters_setResidualsAccepted(t_ODParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setResidualsAccepted(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setResidualsAccepted", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setTimeLastObsEnd(t_ODParameters *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setTimeLastObsEnd(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimeLastObsEnd", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setTimeLastObsStart(t_ODParameters *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setTimeLastObsStart(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimeLastObsStart", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setTracksAvailable(t_ODParameters *self, PyObject *arg)
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

            static PyObject *t_ODParameters_setTracksUsed(t_ODParameters *self, PyObject *arg)
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

            static PyObject *t_ODParameters_setWeightedRMS(t_ODParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setWeightedRMS(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setWeightedRMS", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_validate(t_ODParameters *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(ODParameters), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_ODParameters_get__actualOdSpan(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getActualOdSpan());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__actualOdSpan(t_ODParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_ODParameters_get__obsAvailable(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObsAvailable());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__obsAvailable(t_ODParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_ODParameters_get__obsUsed(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObsUsed());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__obsUsed(t_ODParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_ODParameters_get__odEpoch(t_ODParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getOdEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_ODParameters_set__odEpoch(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setOdEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "odEpoch", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__recommendedOdSpan(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRecommendedOdSpan());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__recommendedOdSpan(t_ODParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_ODParameters_get__residualsAccepted(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getResidualsAccepted());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__residualsAccepted(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setResidualsAccepted(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "residualsAccepted", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__timeLastObsEnd(t_ODParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeLastObsEnd());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_ODParameters_set__timeLastObsEnd(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimeLastObsEnd(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timeLastObsEnd", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__timeLastObsStart(t_ODParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeLastObsStart());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_ODParameters_set__timeLastObsStart(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimeLastObsStart(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timeLastObsStart", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__tracksAvailable(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTracksAvailable());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__tracksAvailable(t_ODParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_ODParameters_get__tracksUsed(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTracksUsed());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__tracksUsed(t_ODParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_ODParameters_get__weightedRMS(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getWeightedRMS());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__weightedRMS(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setWeightedRMS(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "weightedRMS", arg);
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
#include "org/hipparchus/analysis/solvers/AbstractUnivariateDifferentiableSolver.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/UnivariateDifferentiableSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AbstractUnivariateDifferentiableSolver::class$ = NULL;
        jmethodID *AbstractUnivariateDifferentiableSolver::mids$ = NULL;
        bool AbstractUnivariateDifferentiableSolver::live$ = false;

        jclass AbstractUnivariateDifferentiableSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AbstractUnivariateDifferentiableSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeObjectiveValueAndDerivative_c8b983f259312c1e] = env->getMethodID(cls, "computeObjectiveValueAndDerivative", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_setup_82408b73d112d209] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;DDD)V");

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
        static PyObject *t_AbstractUnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateDifferentiableSolver_of_(t_AbstractUnivariateDifferentiableSolver *self, PyObject *args);
        static PyObject *t_AbstractUnivariateDifferentiableSolver_get__parameters_(t_AbstractUnivariateDifferentiableSolver *self, void *data);
        static PyGetSetDef t_AbstractUnivariateDifferentiableSolver__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractUnivariateDifferentiableSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractUnivariateDifferentiableSolver__methods_[] = {
          DECLARE_METHOD(t_AbstractUnivariateDifferentiableSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateDifferentiableSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateDifferentiableSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractUnivariateDifferentiableSolver)[] = {
          { Py_tp_methods, t_AbstractUnivariateDifferentiableSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractUnivariateDifferentiableSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractUnivariateDifferentiableSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(AbstractUnivariateDifferentiableSolver, t_AbstractUnivariateDifferentiableSolver, AbstractUnivariateDifferentiableSolver);
        PyObject *t_AbstractUnivariateDifferentiableSolver::wrap_Object(const AbstractUnivariateDifferentiableSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateDifferentiableSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateDifferentiableSolver *self = (t_AbstractUnivariateDifferentiableSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractUnivariateDifferentiableSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateDifferentiableSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateDifferentiableSolver *self = (t_AbstractUnivariateDifferentiableSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractUnivariateDifferentiableSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractUnivariateDifferentiableSolver), &PY_TYPE_DEF(AbstractUnivariateDifferentiableSolver), module, "AbstractUnivariateDifferentiableSolver", 0);
        }

        void t_AbstractUnivariateDifferentiableSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateDifferentiableSolver), "class_", make_descriptor(AbstractUnivariateDifferentiableSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateDifferentiableSolver), "wrapfn_", make_descriptor(t_AbstractUnivariateDifferentiableSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateDifferentiableSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractUnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractUnivariateDifferentiableSolver::initializeClass, 1)))
            return NULL;
          return t_AbstractUnivariateDifferentiableSolver::wrap_Object(AbstractUnivariateDifferentiableSolver(((t_AbstractUnivariateDifferentiableSolver *) arg)->object.this$));
        }
        static PyObject *t_AbstractUnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractUnivariateDifferentiableSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractUnivariateDifferentiableSolver_of_(t_AbstractUnivariateDifferentiableSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractUnivariateDifferentiableSolver_get__parameters_(t_AbstractUnivariateDifferentiableSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/LoveNumbers.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *LoveNumbers::class$ = NULL;
      jmethodID *LoveNumbers::mids$ = NULL;
      bool LoveNumbers::live$ = false;

      jclass LoveNumbers::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/LoveNumbers");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bff1d17d989bb322] = env->getMethodID(cls, "<init>", "([[D[[D[[D)V");
          mids$[mid_getImaginary_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getImaginary", "(II)D");
          mids$[mid_getPlus_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getPlus", "(II)D");
          mids$[mid_getReal_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getReal", "(II)D");
          mids$[mid_getSize_f2f64475e4580546] = env->getMethodID(cls, "getSize", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LoveNumbers::LoveNumbers(const JArray< JArray< jdouble > > & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bff1d17d989bb322, a0.this$, a1.this$, a2.this$)) {}

      jdouble LoveNumbers::getImaginary(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginary_a84e4ee1da3f1ab8], a0, a1);
      }

      jdouble LoveNumbers::getPlus(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPlus_a84e4ee1da3f1ab8], a0, a1);
      }

      jdouble LoveNumbers::getReal(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_a84e4ee1da3f1ab8], a0, a1);
      }

      jint LoveNumbers::getSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getSize_f2f64475e4580546]);
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
      static PyObject *t_LoveNumbers_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LoveNumbers_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LoveNumbers_init_(t_LoveNumbers *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LoveNumbers_getImaginary(t_LoveNumbers *self, PyObject *args);
      static PyObject *t_LoveNumbers_getPlus(t_LoveNumbers *self, PyObject *args);
      static PyObject *t_LoveNumbers_getReal(t_LoveNumbers *self, PyObject *args);
      static PyObject *t_LoveNumbers_getSize(t_LoveNumbers *self);
      static PyObject *t_LoveNumbers_get__size(t_LoveNumbers *self, void *data);
      static PyGetSetDef t_LoveNumbers__fields_[] = {
        DECLARE_GET_FIELD(t_LoveNumbers, size),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LoveNumbers__methods_[] = {
        DECLARE_METHOD(t_LoveNumbers, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoveNumbers, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoveNumbers, getImaginary, METH_VARARGS),
        DECLARE_METHOD(t_LoveNumbers, getPlus, METH_VARARGS),
        DECLARE_METHOD(t_LoveNumbers, getReal, METH_VARARGS),
        DECLARE_METHOD(t_LoveNumbers, getSize, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LoveNumbers)[] = {
        { Py_tp_methods, t_LoveNumbers__methods_ },
        { Py_tp_init, (void *) t_LoveNumbers_init_ },
        { Py_tp_getset, t_LoveNumbers__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LoveNumbers)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LoveNumbers, t_LoveNumbers, LoveNumbers);

      void t_LoveNumbers::install(PyObject *module)
      {
        installType(&PY_TYPE(LoveNumbers), &PY_TYPE_DEF(LoveNumbers), module, "LoveNumbers", 0);
      }

      void t_LoveNumbers::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoveNumbers), "class_", make_descriptor(LoveNumbers::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoveNumbers), "wrapfn_", make_descriptor(t_LoveNumbers::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoveNumbers), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LoveNumbers_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LoveNumbers::initializeClass, 1)))
          return NULL;
        return t_LoveNumbers::wrap_Object(LoveNumbers(((t_LoveNumbers *) arg)->object.this$));
      }
      static PyObject *t_LoveNumbers_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LoveNumbers::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LoveNumbers_init_(t_LoveNumbers *self, PyObject *args, PyObject *kwds)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        JArray< JArray< jdouble > > a1((jobject) NULL);
        JArray< JArray< jdouble > > a2((jobject) NULL);
        LoveNumbers object((jobject) NULL);

        if (!parseArgs(args, "[[D[[D[[D", &a0, &a1, &a2))
        {
          INT_CALL(object = LoveNumbers(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LoveNumbers_getImaginary(t_LoveNumbers *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getImaginary(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getImaginary", args);
        return NULL;
      }

      static PyObject *t_LoveNumbers_getPlus(t_LoveNumbers *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPlus(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPlus", args);
        return NULL;
      }

      static PyObject *t_LoveNumbers_getReal(t_LoveNumbers *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getReal(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getReal", args);
        return NULL;
      }

      static PyObject *t_LoveNumbers_getSize(t_LoveNumbers *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_LoveNumbers_get__size(t_LoveNumbers *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldAdditionalDerivativesProvider::class$ = NULL;
        jmethodID *FieldAdditionalDerivativesProvider::mids$ = NULL;
        bool FieldAdditionalDerivativesProvider::live$ = false;

        jclass FieldAdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldAdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_combinedDerivatives_ae4cc0c1894391de] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/integration/FieldCombinedDerivatives;");
            mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_yields_91c945ca7903e8ac] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::integration::FieldCombinedDerivatives FieldAdditionalDerivativesProvider::combinedDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::orekit::propagation::integration::FieldCombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_ae4cc0c1894391de], a0.this$));
        }

        jint FieldAdditionalDerivativesProvider::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
        }

        ::java::lang::String FieldAdditionalDerivativesProvider::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
        }

        void FieldAdditionalDerivativesProvider::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
        }

        jboolean FieldAdditionalDerivativesProvider::yields(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_yields_91c945ca7903e8ac], a0.this$);
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
        static PyObject *t_FieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_of_(t_FieldAdditionalDerivativesProvider *self, PyObject *args);
        static PyObject *t_FieldAdditionalDerivativesProvider_combinedDerivatives(t_FieldAdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_getDimension(t_FieldAdditionalDerivativesProvider *self);
        static PyObject *t_FieldAdditionalDerivativesProvider_getName(t_FieldAdditionalDerivativesProvider *self);
        static PyObject *t_FieldAdditionalDerivativesProvider_init(t_FieldAdditionalDerivativesProvider *self, PyObject *args);
        static PyObject *t_FieldAdditionalDerivativesProvider_yields(t_FieldAdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_get__dimension(t_FieldAdditionalDerivativesProvider *self, void *data);
        static PyObject *t_FieldAdditionalDerivativesProvider_get__name(t_FieldAdditionalDerivativesProvider *self, void *data);
        static PyObject *t_FieldAdditionalDerivativesProvider_get__parameters_(t_FieldAdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_FieldAdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdditionalDerivativesProvider, dimension),
          DECLARE_GET_FIELD(t_FieldAdditionalDerivativesProvider, name),
          DECLARE_GET_FIELD(t_FieldAdditionalDerivativesProvider, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, combinedDerivatives, METH_O),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, getName, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, yields, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_FieldAdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdditionalDerivativesProvider, t_FieldAdditionalDerivativesProvider, FieldAdditionalDerivativesProvider);
        PyObject *t_FieldAdditionalDerivativesProvider::wrap_Object(const FieldAdditionalDerivativesProvider& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdditionalDerivativesProvider::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdditionalDerivativesProvider *self = (t_FieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdditionalDerivativesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdditionalDerivativesProvider::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdditionalDerivativesProvider *self = (t_FieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdditionalDerivativesProvider), &PY_TYPE_DEF(FieldAdditionalDerivativesProvider), module, "FieldAdditionalDerivativesProvider", 0);
        }

        void t_FieldAdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalDerivativesProvider), "class_", make_descriptor(FieldAdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_FieldAdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_FieldAdditionalDerivativesProvider::wrap_Object(FieldAdditionalDerivativesProvider(((t_FieldAdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_FieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_of_(t_FieldAdditionalDerivativesProvider *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_combinedDerivatives(t_FieldAdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::integration::FieldCombinedDerivatives result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.combinedDerivatives(a0));
            return ::org::orekit::propagation::integration::t_FieldCombinedDerivatives::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
          return NULL;
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_getDimension(t_FieldAdditionalDerivativesProvider *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_getName(t_FieldAdditionalDerivativesProvider *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_init(t_FieldAdditionalDerivativesProvider *self, PyObject *args)
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

        static PyObject *t_FieldAdditionalDerivativesProvider_yields(t_FieldAdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.yields(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "yields", arg);
          return NULL;
        }
        static PyObject *t_FieldAdditionalDerivativesProvider_get__parameters_(t_FieldAdditionalDerivativesProvider *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_get__dimension(t_FieldAdditionalDerivativesProvider *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_get__name(t_FieldAdditionalDerivativesProvider *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *InterSatellitesRange::class$ = NULL;
        jmethodID *InterSatellitesRange::mids$ = NULL;
        bool InterSatellitesRange::live$ = false;
        ::java::lang::String *InterSatellitesRange::MEASUREMENT_TYPE = NULL;

        jclass InterSatellitesRange::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/InterSatellitesRange");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a23aa784f2ad4ed1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;ZLorg/orekit/time/AbsoluteDate;DDD)V");
            mids$[mid_isTwoWay_e470b6d9e0d979db] = env->getMethodID(cls, "isTwoWay", "()Z");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterSatellitesRange::InterSatellitesRange(const ::org::orekit::estimation::measurements::ObservableSatellite & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, jboolean a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_a23aa784f2ad4ed1, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6)) {}

        jboolean InterSatellitesRange::isTwoWay() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTwoWay_e470b6d9e0d979db]);
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
        static PyObject *t_InterSatellitesRange_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatellitesRange_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatellitesRange_of_(t_InterSatellitesRange *self, PyObject *args);
        static int t_InterSatellitesRange_init_(t_InterSatellitesRange *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterSatellitesRange_isTwoWay(t_InterSatellitesRange *self);
        static PyObject *t_InterSatellitesRange_get__twoWay(t_InterSatellitesRange *self, void *data);
        static PyObject *t_InterSatellitesRange_get__parameters_(t_InterSatellitesRange *self, void *data);
        static PyGetSetDef t_InterSatellitesRange__fields_[] = {
          DECLARE_GET_FIELD(t_InterSatellitesRange, twoWay),
          DECLARE_GET_FIELD(t_InterSatellitesRange, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InterSatellitesRange__methods_[] = {
          DECLARE_METHOD(t_InterSatellitesRange, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatellitesRange, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatellitesRange, of_, METH_VARARGS),
          DECLARE_METHOD(t_InterSatellitesRange, isTwoWay, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterSatellitesRange)[] = {
          { Py_tp_methods, t_InterSatellitesRange__methods_ },
          { Py_tp_init, (void *) t_InterSatellitesRange_init_ },
          { Py_tp_getset, t_InterSatellitesRange__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterSatellitesRange)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(InterSatellitesRange, t_InterSatellitesRange, InterSatellitesRange);
        PyObject *t_InterSatellitesRange::wrap_Object(const InterSatellitesRange& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatellitesRange::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatellitesRange *self = (t_InterSatellitesRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_InterSatellitesRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatellitesRange::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatellitesRange *self = (t_InterSatellitesRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_InterSatellitesRange::install(PyObject *module)
        {
          installType(&PY_TYPE(InterSatellitesRange), &PY_TYPE_DEF(InterSatellitesRange), module, "InterSatellitesRange", 0);
        }

        void t_InterSatellitesRange::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "class_", make_descriptor(InterSatellitesRange::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "wrapfn_", make_descriptor(t_InterSatellitesRange::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "boxfn_", make_descriptor(boxObject));
          env->getClass(InterSatellitesRange::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*InterSatellitesRange::MEASUREMENT_TYPE)));
        }

        static PyObject *t_InterSatellitesRange_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterSatellitesRange::initializeClass, 1)))
            return NULL;
          return t_InterSatellitesRange::wrap_Object(InterSatellitesRange(((t_InterSatellitesRange *) arg)->object.this$));
        }
        static PyObject *t_InterSatellitesRange_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterSatellitesRange::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InterSatellitesRange_of_(t_InterSatellitesRange *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_InterSatellitesRange_init_(t_InterSatellitesRange *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservableSatellite a0((jobject) NULL);
          ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
          jboolean a2;
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          jdouble a4;
          jdouble a5;
          jdouble a6;
          InterSatellitesRange object((jobject) NULL);

          if (!parseArgs(args, "kkZkDDD", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = InterSatellitesRange(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(InterSatellitesRange);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterSatellitesRange_isTwoWay(t_InterSatellitesRange *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isTwoWay());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_InterSatellitesRange_get__parameters_(t_InterSatellitesRange *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_InterSatellitesRange_get__twoWay(t_InterSatellitesRange *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isTwoWay());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/IsotropicRadiationSingleCoefficient.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
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

        ::java::lang::Class *IsotropicRadiationSingleCoefficient::class$ = NULL;
        jmethodID *IsotropicRadiationSingleCoefficient::mids$ = NULL;
        bool IsotropicRadiationSingleCoefficient::live$ = false;

        jclass IsotropicRadiationSingleCoefficient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/IsotropicRadiationSingleCoefficient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_667a7965403ed91a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getRadiationParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_5efc9e86ed57c6dd] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_radiationPressureAcceleration_397d87bcad93c626] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicRadiationSingleCoefficient::IsotropicRadiationSingleCoefficient(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        IsotropicRadiationSingleCoefficient::IsotropicRadiationSingleCoefficient(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_667a7965403ed91a, a0, a1, a2, a3)) {}

        ::java::util::List IsotropicRadiationSingleCoefficient::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_a6156df500549a58]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicRadiationSingleCoefficient::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_5efc9e86ed57c6dd], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicRadiationSingleCoefficient::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_397d87bcad93c626], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_IsotropicRadiationSingleCoefficient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicRadiationSingleCoefficient_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicRadiationSingleCoefficient_init_(t_IsotropicRadiationSingleCoefficient *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicRadiationSingleCoefficient_getRadiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self);
        static PyObject *t_IsotropicRadiationSingleCoefficient_radiationPressureAcceleration(t_IsotropicRadiationSingleCoefficient *self, PyObject *args);
        static PyObject *t_IsotropicRadiationSingleCoefficient_get__radiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self, void *data);
        static PyGetSetDef t_IsotropicRadiationSingleCoefficient__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicRadiationSingleCoefficient, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicRadiationSingleCoefficient__methods_[] = {
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicRadiationSingleCoefficient)[] = {
          { Py_tp_methods, t_IsotropicRadiationSingleCoefficient__methods_ },
          { Py_tp_init, (void *) t_IsotropicRadiationSingleCoefficient_init_ },
          { Py_tp_getset, t_IsotropicRadiationSingleCoefficient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicRadiationSingleCoefficient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicRadiationSingleCoefficient, t_IsotropicRadiationSingleCoefficient, IsotropicRadiationSingleCoefficient);

        void t_IsotropicRadiationSingleCoefficient::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicRadiationSingleCoefficient), &PY_TYPE_DEF(IsotropicRadiationSingleCoefficient), module, "IsotropicRadiationSingleCoefficient", 0);
        }

        void t_IsotropicRadiationSingleCoefficient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationSingleCoefficient), "class_", make_descriptor(IsotropicRadiationSingleCoefficient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationSingleCoefficient), "wrapfn_", make_descriptor(t_IsotropicRadiationSingleCoefficient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationSingleCoefficient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicRadiationSingleCoefficient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicRadiationSingleCoefficient::initializeClass, 1)))
            return NULL;
          return t_IsotropicRadiationSingleCoefficient::wrap_Object(IsotropicRadiationSingleCoefficient(((t_IsotropicRadiationSingleCoefficient *) arg)->object.this$));
        }
        static PyObject *t_IsotropicRadiationSingleCoefficient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicRadiationSingleCoefficient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicRadiationSingleCoefficient_init_(t_IsotropicRadiationSingleCoefficient *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              IsotropicRadiationSingleCoefficient object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = IsotropicRadiationSingleCoefficient(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              IsotropicRadiationSingleCoefficient object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = IsotropicRadiationSingleCoefficient(a0, a1, a2, a3));
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

        static PyObject *t_IsotropicRadiationSingleCoefficient_getRadiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicRadiationSingleCoefficient_radiationPressureAcceleration(t_IsotropicRadiationSingleCoefficient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
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
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicRadiationSingleCoefficient_get__radiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Hyperplane::class$ = NULL;
        jmethodID *Hyperplane::mids$ = NULL;
        bool Hyperplane::live$ = false;

        jclass Hyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Hyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copySelf_e829aeefe0096202] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_emptyHyperplane_a66e04f05d5608cc] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getOffset_726dc963fac3505e] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
            mids$[mid_getTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getTolerance", "()D");
            mids$[mid_project_ac445dfe898b403a] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
            mids$[mid_sameOrientationAs_b99f508aafd89c77] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
            mids$[mid_wholeHyperplane_a66e04f05d5608cc] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_wholeSpace_9552c312bc09a7e5] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/partitioning/Region;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Hyperplane Hyperplane::copySelf() const
        {
          return Hyperplane(env->callObjectMethod(this$, mids$[mid_copySelf_e829aeefe0096202]));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Hyperplane::emptyHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_a66e04f05d5608cc]));
        }

        jdouble Hyperplane::getOffset(const ::org::hipparchus::geometry::Point & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOffset_726dc963fac3505e], a0.this$);
        }

        jdouble Hyperplane::getTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTolerance_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::geometry::Point Hyperplane::project(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_ac445dfe898b403a], a0.this$));
        }

        jboolean Hyperplane::sameOrientationAs(const Hyperplane & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_b99f508aafd89c77], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Hyperplane::wholeHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_a66e04f05d5608cc]));
        }

        ::org::hipparchus::geometry::partitioning::Region Hyperplane::wholeSpace() const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_wholeSpace_9552c312bc09a7e5]));
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
        static PyObject *t_Hyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Hyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Hyperplane_of_(t_Hyperplane *self, PyObject *args);
        static PyObject *t_Hyperplane_copySelf(t_Hyperplane *self);
        static PyObject *t_Hyperplane_emptyHyperplane(t_Hyperplane *self);
        static PyObject *t_Hyperplane_getOffset(t_Hyperplane *self, PyObject *arg);
        static PyObject *t_Hyperplane_getTolerance(t_Hyperplane *self);
        static PyObject *t_Hyperplane_project(t_Hyperplane *self, PyObject *arg);
        static PyObject *t_Hyperplane_sameOrientationAs(t_Hyperplane *self, PyObject *arg);
        static PyObject *t_Hyperplane_wholeHyperplane(t_Hyperplane *self);
        static PyObject *t_Hyperplane_wholeSpace(t_Hyperplane *self);
        static PyObject *t_Hyperplane_get__tolerance(t_Hyperplane *self, void *data);
        static PyObject *t_Hyperplane_get__parameters_(t_Hyperplane *self, void *data);
        static PyGetSetDef t_Hyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_Hyperplane, tolerance),
          DECLARE_GET_FIELD(t_Hyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Hyperplane__methods_[] = {
          DECLARE_METHOD(t_Hyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Hyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Hyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_Hyperplane, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, emptyHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, getOffset, METH_O),
          DECLARE_METHOD(t_Hyperplane, getTolerance, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, project, METH_O),
          DECLARE_METHOD(t_Hyperplane, sameOrientationAs, METH_O),
          DECLARE_METHOD(t_Hyperplane, wholeHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, wholeSpace, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Hyperplane)[] = {
          { Py_tp_methods, t_Hyperplane__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Hyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Hyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Hyperplane, t_Hyperplane, Hyperplane);
        PyObject *t_Hyperplane::wrap_Object(const Hyperplane& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Hyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Hyperplane *self = (t_Hyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Hyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Hyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Hyperplane *self = (t_Hyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Hyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(Hyperplane), &PY_TYPE_DEF(Hyperplane), module, "Hyperplane", 0);
        }

        void t_Hyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Hyperplane), "class_", make_descriptor(Hyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Hyperplane), "wrapfn_", make_descriptor(t_Hyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Hyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Hyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Hyperplane::initializeClass, 1)))
            return NULL;
          return t_Hyperplane::wrap_Object(Hyperplane(((t_Hyperplane *) arg)->object.this$));
        }
        static PyObject *t_Hyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Hyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Hyperplane_of_(t_Hyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Hyperplane_copySelf(t_Hyperplane *self)
        {
          Hyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_Hyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Hyperplane_emptyHyperplane(t_Hyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.emptyHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Hyperplane_getOffset(t_Hyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.getOffset(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOffset", arg);
          return NULL;
        }

        static PyObject *t_Hyperplane_getTolerance(t_Hyperplane *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Hyperplane_project(t_Hyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.project(a0));
            return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "project", arg);
          return NULL;
        }

        static PyObject *t_Hyperplane_sameOrientationAs(t_Hyperplane *self, PyObject *arg)
        {
          Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", Hyperplane::initializeClass, &a0, &p0, t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.sameOrientationAs(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
          return NULL;
        }

        static PyObject *t_Hyperplane_wholeHyperplane(t_Hyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.wholeHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Hyperplane_wholeSpace(t_Hyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
          OBJ_CALL(result = self->object.wholeSpace());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_Hyperplane_get__parameters_(t_Hyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Hyperplane_get__tolerance(t_Hyperplane *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTolerance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/ReceiverAntenna.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *ReceiverAntenna::class$ = NULL;
        jmethodID *ReceiverAntenna::mids$ = NULL;
        bool ReceiverAntenna::live$ = false;

        jclass ReceiverAntenna::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/ReceiverAntenna");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_69cc6399260ee0e4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V");
            mids$[mid_getSerialNumber_0090f7797e403f43] = env->getMethodID(cls, "getSerialNumber", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ReceiverAntenna::ReceiverAntenna(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::util::Map & a2, const ::java::lang::String & a3) : ::org::orekit::gnss::antenna::Antenna(env->newObject(initializeClass, &mids$, mid_init$_69cc6399260ee0e4, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::java::lang::String ReceiverAntenna::getSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSerialNumber_0090f7797e403f43]));
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
        static PyObject *t_ReceiverAntenna_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReceiverAntenna_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ReceiverAntenna_init_(t_ReceiverAntenna *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ReceiverAntenna_getSerialNumber(t_ReceiverAntenna *self);
        static PyObject *t_ReceiverAntenna_get__serialNumber(t_ReceiverAntenna *self, void *data);
        static PyGetSetDef t_ReceiverAntenna__fields_[] = {
          DECLARE_GET_FIELD(t_ReceiverAntenna, serialNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ReceiverAntenna__methods_[] = {
          DECLARE_METHOD(t_ReceiverAntenna, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReceiverAntenna, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReceiverAntenna, getSerialNumber, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ReceiverAntenna)[] = {
          { Py_tp_methods, t_ReceiverAntenna__methods_ },
          { Py_tp_init, (void *) t_ReceiverAntenna_init_ },
          { Py_tp_getset, t_ReceiverAntenna__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ReceiverAntenna)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::antenna::Antenna),
          NULL
        };

        DEFINE_TYPE(ReceiverAntenna, t_ReceiverAntenna, ReceiverAntenna);

        void t_ReceiverAntenna::install(PyObject *module)
        {
          installType(&PY_TYPE(ReceiverAntenna), &PY_TYPE_DEF(ReceiverAntenna), module, "ReceiverAntenna", 0);
        }

        void t_ReceiverAntenna::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReceiverAntenna), "class_", make_descriptor(ReceiverAntenna::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReceiverAntenna), "wrapfn_", make_descriptor(t_ReceiverAntenna::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReceiverAntenna), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ReceiverAntenna_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ReceiverAntenna::initializeClass, 1)))
            return NULL;
          return t_ReceiverAntenna::wrap_Object(ReceiverAntenna(((t_ReceiverAntenna *) arg)->object.this$));
        }
        static PyObject *t_ReceiverAntenna_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ReceiverAntenna::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ReceiverAntenna_init_(t_ReceiverAntenna *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::util::Map a2((jobject) NULL);
          PyTypeObject **p2;
          ::java::lang::String a3((jobject) NULL);
          ReceiverAntenna object((jobject) NULL);

          if (!parseArgs(args, "ssKs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Map::parameters_, &a3))
          {
            INT_CALL(object = ReceiverAntenna(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ReceiverAntenna_getSerialNumber(t_ReceiverAntenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSerialNumber());
          return j2p(result);
        }

        static PyObject *t_ReceiverAntenna_get__serialNumber(t_ReceiverAntenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSerialNumber());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmMetadataKey::class$ = NULL;
              jmethodID *OmmMetadataKey::mids$ = NULL;
              bool OmmMetadataKey::live$ = false;
              OmmMetadataKey *OmmMetadataKey::MEAN_ELEMENT_THEORY = NULL;

              jclass OmmMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_f38fe738390efa5c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadata;)Z");
                  mids$[mid_valueOf_a7b2e46cf88dcd5a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey;");
                  mids$[mid_values_1404a72c85824132] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  MEAN_ELEMENT_THEORY = new OmmMetadataKey(env->getStaticObjectField(cls, "MEAN_ELEMENT_THEORY", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OmmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_f38fe738390efa5c], a0.this$, a1.this$, a2.this$);
              }

              OmmMetadataKey OmmMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OmmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a7b2e46cf88dcd5a], a0.this$));
              }

              JArray< OmmMetadataKey > OmmMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OmmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_1404a72c85824132]));
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
            namespace omm {
              static PyObject *t_OmmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmMetadataKey_of_(t_OmmMetadataKey *self, PyObject *args);
              static PyObject *t_OmmMetadataKey_process(t_OmmMetadataKey *self, PyObject *args);
              static PyObject *t_OmmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OmmMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OmmMetadataKey_get__parameters_(t_OmmMetadataKey *self, void *data);
              static PyGetSetDef t_OmmMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OmmMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OmmMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OmmMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OmmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmMetadataKey)[] = {
                { Py_tp_methods, t_OmmMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OmmMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OmmMetadataKey, t_OmmMetadataKey, OmmMetadataKey);
              PyObject *t_OmmMetadataKey::wrap_Object(const OmmMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmMetadataKey *self = (t_OmmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OmmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmMetadataKey *self = (t_OmmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OmmMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmMetadataKey), &PY_TYPE_DEF(OmmMetadataKey), module, "OmmMetadataKey", 0);
              }

              void t_OmmMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "class_", make_descriptor(OmmMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "wrapfn_", make_descriptor(t_OmmMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "MEAN_ELEMENT_THEORY", make_descriptor(t_OmmMetadataKey::wrap_Object(*OmmMetadataKey::MEAN_ELEMENT_THEORY)));
              }

              static PyObject *t_OmmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OmmMetadataKey::wrap_Object(OmmMetadataKey(((t_OmmMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OmmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmMetadataKey_of_(t_OmmMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OmmMetadataKey_process(t_OmmMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OmmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OmmMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadataKey::valueOf(a0));
                  return t_OmmMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OmmMetadataKey_values(PyTypeObject *type)
              {
                JArray< OmmMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OmmMetadataKey::wrap_jobject);
              }
              static PyObject *t_OmmMetadataKey_get__parameters_(t_OmmMetadataKey *self, void *data)
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

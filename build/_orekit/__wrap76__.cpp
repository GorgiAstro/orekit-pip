#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonEstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonEstimationModifier::class$ = NULL;
        jmethodID *PythonEstimationModifier::mids$ = NULL;
        bool PythonEstimationModifier::live$ = false;

        jclass PythonEstimationModifier::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonEstimationModifier");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEstimationModifier::PythonEstimationModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonEstimationModifier::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonEstimationModifier::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonEstimationModifier::pythonExtension(jlong a0) const
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
      namespace measurements {
        static PyObject *t_PythonEstimationModifier_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEstimationModifier_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEstimationModifier_of_(t_PythonEstimationModifier *self, PyObject *args);
        static int t_PythonEstimationModifier_init_(t_PythonEstimationModifier *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEstimationModifier_finalize(t_PythonEstimationModifier *self);
        static PyObject *t_PythonEstimationModifier_pythonExtension(t_PythonEstimationModifier *self, PyObject *args);
        static jobject JNICALL t_PythonEstimationModifier_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEstimationModifier_modify1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEstimationModifier_modifyWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEstimationModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEstimationModifier_get__self(t_PythonEstimationModifier *self, void *data);
        static PyObject *t_PythonEstimationModifier_get__parameters_(t_PythonEstimationModifier *self, void *data);
        static PyGetSetDef t_PythonEstimationModifier__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEstimationModifier, self),
          DECLARE_GET_FIELD(t_PythonEstimationModifier, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEstimationModifier__methods_[] = {
          DECLARE_METHOD(t_PythonEstimationModifier, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationModifier, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationModifier, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonEstimationModifier, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEstimationModifier, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEstimationModifier)[] = {
          { Py_tp_methods, t_PythonEstimationModifier__methods_ },
          { Py_tp_init, (void *) t_PythonEstimationModifier_init_ },
          { Py_tp_getset, t_PythonEstimationModifier__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEstimationModifier)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEstimationModifier, t_PythonEstimationModifier, PythonEstimationModifier);
        PyObject *t_PythonEstimationModifier::wrap_Object(const PythonEstimationModifier& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonEstimationModifier::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonEstimationModifier *self = (t_PythonEstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonEstimationModifier::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonEstimationModifier::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonEstimationModifier *self = (t_PythonEstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonEstimationModifier::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEstimationModifier), &PY_TYPE_DEF(PythonEstimationModifier), module, "PythonEstimationModifier", 1);
        }

        void t_PythonEstimationModifier::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationModifier), "class_", make_descriptor(PythonEstimationModifier::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationModifier), "wrapfn_", make_descriptor(t_PythonEstimationModifier::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationModifier), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEstimationModifier::initializeClass);
          JNINativeMethod methods[] = {
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonEstimationModifier_getParametersDrivers0 },
            { "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V", (void *) t_PythonEstimationModifier_modify1 },
            { "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V", (void *) t_PythonEstimationModifier_modifyWithoutDerivatives2 },
            { "pythonDecRef", "()V", (void *) t_PythonEstimationModifier_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonEstimationModifier_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEstimationModifier::initializeClass, 1)))
            return NULL;
          return t_PythonEstimationModifier::wrap_Object(PythonEstimationModifier(((t_PythonEstimationModifier *) arg)->object.this$));
        }
        static PyObject *t_PythonEstimationModifier_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEstimationModifier::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonEstimationModifier_of_(t_PythonEstimationModifier *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonEstimationModifier_init_(t_PythonEstimationModifier *self, PyObject *args, PyObject *kwds)
        {
          PythonEstimationModifier object((jobject) NULL);

          INT_CALL(object = PythonEstimationModifier());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEstimationModifier_finalize(t_PythonEstimationModifier *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEstimationModifier_pythonExtension(t_PythonEstimationModifier *self, PyObject *args)
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

        static jobject JNICALL t_PythonEstimationModifier_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_a27fc9afd27e559d]);
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

        static void JNICALL t_PythonEstimationModifier_modify1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurement(a0));
          PyObject *result = PyObject_CallMethod(obj, "modify", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEstimationModifier_modifyWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurementBase(a0));
          PyObject *result = PyObject_CallMethod(obj, "modifyWithoutDerivatives", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEstimationModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEstimationModifier_get__self(t_PythonEstimationModifier *self, void *data)
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
        static PyObject *t_PythonEstimationModifier_get__parameters_(t_PythonEstimationModifier *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDifferentiableMatrixFunction::class$ = NULL;
        jmethodID *UnivariateDifferentiableMatrixFunction::mids$ = NULL;
        bool UnivariateDifferentiableMatrixFunction::live$ = false;

        jclass UnivariateDifferentiableMatrixFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_5ae018012fc0c987] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)[[Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > > UnivariateDifferentiableMatrixFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > >(env->callObjectMethod(this$, mids$[mid_value_5ae018012fc0c987], a0.this$));
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
        static PyObject *t_UnivariateDifferentiableMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableMatrixFunction_value(t_UnivariateDifferentiableMatrixFunction *self, PyObject *args);

        static PyMethodDef t_UnivariateDifferentiableMatrixFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableMatrixFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableMatrixFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableMatrixFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableMatrixFunction)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableMatrixFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableMatrixFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::UnivariateMatrixFunction),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableMatrixFunction, t_UnivariateDifferentiableMatrixFunction, UnivariateDifferentiableMatrixFunction);

        void t_UnivariateDifferentiableMatrixFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableMatrixFunction), &PY_TYPE_DEF(UnivariateDifferentiableMatrixFunction), module, "UnivariateDifferentiableMatrixFunction", 0);
        }

        void t_UnivariateDifferentiableMatrixFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableMatrixFunction), "class_", make_descriptor(UnivariateDifferentiableMatrixFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableMatrixFunction), "wrapfn_", make_descriptor(t_UnivariateDifferentiableMatrixFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableMatrixFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableMatrixFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableMatrixFunction::wrap_Object(UnivariateDifferentiableMatrixFunction(((t_UnivariateDifferentiableMatrixFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableMatrixFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDifferentiableMatrixFunction_value(t_UnivariateDifferentiableMatrixFunction *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< JArray< ::org::hipparchus::analysis::differentiation::Derivative > > result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(UnivariateDifferentiableMatrixFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSAlmanac.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *QZSSAlmanac::class$ = NULL;
            jmethodID *QZSSAlmanac::mids$ = NULL;
            bool QZSSAlmanac::live$ = false;

            jclass QZSSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/QZSSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealth_f2f64475e4580546] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getSource_0090f7797e403f43] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
                mids$[mid_setHealth_0a2a1ac2721c0336] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setSource_e939c6558ae8d313] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
                mids$[mid_setSqrtA_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSqrtA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            QZSSAlmanac::QZSSAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jint QZSSAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_f2f64475e4580546]);
            }

            ::java::lang::String QZSSAlmanac::getSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_0090f7797e403f43]));
            }

            void QZSSAlmanac::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_0a2a1ac2721c0336], a0);
            }

            void QZSSAlmanac::setSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSource_e939c6558ae8d313], a0.this$);
            }

            void QZSSAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_QZSSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_QZSSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_QZSSAlmanac_init_(t_QZSSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_QZSSAlmanac_getHealth(t_QZSSAlmanac *self);
            static PyObject *t_QZSSAlmanac_getSource(t_QZSSAlmanac *self);
            static PyObject *t_QZSSAlmanac_setHealth(t_QZSSAlmanac *self, PyObject *arg);
            static PyObject *t_QZSSAlmanac_setSource(t_QZSSAlmanac *self, PyObject *arg);
            static PyObject *t_QZSSAlmanac_setSqrtA(t_QZSSAlmanac *self, PyObject *arg);
            static PyObject *t_QZSSAlmanac_get__health(t_QZSSAlmanac *self, void *data);
            static int t_QZSSAlmanac_set__health(t_QZSSAlmanac *self, PyObject *arg, void *data);
            static PyObject *t_QZSSAlmanac_get__source(t_QZSSAlmanac *self, void *data);
            static int t_QZSSAlmanac_set__source(t_QZSSAlmanac *self, PyObject *arg, void *data);
            static int t_QZSSAlmanac_set__sqrtA(t_QZSSAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_QZSSAlmanac__fields_[] = {
              DECLARE_GETSET_FIELD(t_QZSSAlmanac, health),
              DECLARE_GETSET_FIELD(t_QZSSAlmanac, source),
              DECLARE_SET_FIELD(t_QZSSAlmanac, sqrtA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_QZSSAlmanac__methods_[] = {
              DECLARE_METHOD(t_QZSSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_QZSSAlmanac, getSource, METH_NOARGS),
              DECLARE_METHOD(t_QZSSAlmanac, setHealth, METH_O),
              DECLARE_METHOD(t_QZSSAlmanac, setSource, METH_O),
              DECLARE_METHOD(t_QZSSAlmanac, setSqrtA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(QZSSAlmanac)[] = {
              { Py_tp_methods, t_QZSSAlmanac__methods_ },
              { Py_tp_init, (void *) t_QZSSAlmanac_init_ },
              { Py_tp_getset, t_QZSSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(QZSSAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(QZSSAlmanac, t_QZSSAlmanac, QZSSAlmanac);

            void t_QZSSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(QZSSAlmanac), &PY_TYPE_DEF(QZSSAlmanac), module, "QZSSAlmanac", 0);
            }

            void t_QZSSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSAlmanac), "class_", make_descriptor(QZSSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSAlmanac), "wrapfn_", make_descriptor(t_QZSSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_QZSSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, QZSSAlmanac::initializeClass, 1)))
                return NULL;
              return t_QZSSAlmanac::wrap_Object(QZSSAlmanac(((t_QZSSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_QZSSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, QZSSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_QZSSAlmanac_init_(t_QZSSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              QZSSAlmanac object((jobject) NULL);

              INT_CALL(object = QZSSAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_QZSSAlmanac_getHealth(t_QZSSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_QZSSAlmanac_getSource(t_QZSSAlmanac *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSource());
              return j2p(result);
            }

            static PyObject *t_QZSSAlmanac_setHealth(t_QZSSAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_QZSSAlmanac_setSource(t_QZSSAlmanac *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSource", arg);
              return NULL;
            }

            static PyObject *t_QZSSAlmanac_setSqrtA(t_QZSSAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_QZSSAlmanac_get__health(t_QZSSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_QZSSAlmanac_set__health(t_QZSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_QZSSAlmanac_get__source(t_QZSSAlmanac *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSource());
              return j2p(value);
            }
            static int t_QZSSAlmanac_set__source(t_QZSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "source", arg);
              return -1;
            }

            static int t_QZSSAlmanac_set__sqrtA(t_QZSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmMessage.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SatelliteSystem.h"
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
                  mids$[mid_init$_d869d400a2c0cc23] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader;Ljava/util/List;)V");
                  mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgmMessage::SsrIgmMessage(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::SsrMessage(env->newObject(initializeClass, &mids$, mid_init$_d869d400a2c0cc23, a0, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::gnss::SatelliteSystem SsrIgmMessage::getSatelliteSystem() const
              {
                return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7]));
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$RotationOrderConsumer::class$ = NULL;
            jmethodID *ParseToken$RotationOrderConsumer::mids$ = NULL;
            bool ParseToken$RotationOrderConsumer::live$ = false;

            jclass ParseToken$RotationOrderConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_3c290f1c2c08ff0e] = env->getMethodID(cls, "accept", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$RotationOrderConsumer::accept(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_3c290f1c2c08ff0e], a0.this$);
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
            static PyObject *t_ParseToken$RotationOrderConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$RotationOrderConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$RotationOrderConsumer_accept(t_ParseToken$RotationOrderConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$RotationOrderConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$RotationOrderConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$RotationOrderConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$RotationOrderConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$RotationOrderConsumer)[] = {
              { Py_tp_methods, t_ParseToken$RotationOrderConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$RotationOrderConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$RotationOrderConsumer, t_ParseToken$RotationOrderConsumer, ParseToken$RotationOrderConsumer);

            void t_ParseToken$RotationOrderConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$RotationOrderConsumer), &PY_TYPE_DEF(ParseToken$RotationOrderConsumer), module, "ParseToken$RotationOrderConsumer", 0);
            }

            void t_ParseToken$RotationOrderConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$RotationOrderConsumer), "class_", make_descriptor(ParseToken$RotationOrderConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$RotationOrderConsumer), "wrapfn_", make_descriptor(t_ParseToken$RotationOrderConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$RotationOrderConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$RotationOrderConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$RotationOrderConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$RotationOrderConsumer::wrap_Object(ParseToken$RotationOrderConsumer(((t_ParseToken$RotationOrderConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$RotationOrderConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$RotationOrderConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$RotationOrderConsumer_accept(t_ParseToken$RotationOrderConsumer *self, PyObject *arg)
            {
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
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
#include "org/hipparchus/analysis/interpolation/DividedDifferenceInterpolator.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *DividedDifferenceInterpolator::class$ = NULL;
        jmethodID *DividedDifferenceInterpolator::mids$ = NULL;
        bool DividedDifferenceInterpolator::live$ = false;

        jclass DividedDifferenceInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/DividedDifferenceInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_32a936e876fb7ecf] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm;");
            mids$[mid_computeDividedDifference_0f29b7d9f77b462e] = env->getStaticMethodID(cls, "computeDividedDifference", "([D[D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DividedDifferenceInterpolator::DividedDifferenceInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm DividedDifferenceInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm(env->callObjectMethod(this$, mids$[mid_interpolate_32a936e876fb7ecf], a0.this$, a1.this$));
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
        static PyObject *t_DividedDifferenceInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DividedDifferenceInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DividedDifferenceInterpolator_init_(t_DividedDifferenceInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DividedDifferenceInterpolator_interpolate(t_DividedDifferenceInterpolator *self, PyObject *args);

        static PyMethodDef t_DividedDifferenceInterpolator__methods_[] = {
          DECLARE_METHOD(t_DividedDifferenceInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DividedDifferenceInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DividedDifferenceInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DividedDifferenceInterpolator)[] = {
          { Py_tp_methods, t_DividedDifferenceInterpolator__methods_ },
          { Py_tp_init, (void *) t_DividedDifferenceInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DividedDifferenceInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DividedDifferenceInterpolator, t_DividedDifferenceInterpolator, DividedDifferenceInterpolator);

        void t_DividedDifferenceInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(DividedDifferenceInterpolator), &PY_TYPE_DEF(DividedDifferenceInterpolator), module, "DividedDifferenceInterpolator", 0);
        }

        void t_DividedDifferenceInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DividedDifferenceInterpolator), "class_", make_descriptor(DividedDifferenceInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DividedDifferenceInterpolator), "wrapfn_", make_descriptor(t_DividedDifferenceInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DividedDifferenceInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DividedDifferenceInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DividedDifferenceInterpolator::initializeClass, 1)))
            return NULL;
          return t_DividedDifferenceInterpolator::wrap_Object(DividedDifferenceInterpolator(((t_DividedDifferenceInterpolator *) arg)->object.this$));
        }
        static PyObject *t_DividedDifferenceInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DividedDifferenceInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DividedDifferenceInterpolator_init_(t_DividedDifferenceInterpolator *self, PyObject *args, PyObject *kwds)
        {
          DividedDifferenceInterpolator object((jobject) NULL);

          INT_CALL(object = DividedDifferenceInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_DividedDifferenceInterpolator_interpolate(t_DividedDifferenceInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunctionNewtonForm::wrap_Object(result);
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
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *NRLMSISE00InputParameters::class$ = NULL;
          jmethodID *NRLMSISE00InputParameters::mids$ = NULL;
          bool NRLMSISE00InputParameters::live$ = false;

          jclass NRLMSISE00InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAp_e586dea4c0bad69b] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_getAverageFlux_e912d21057defe63] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getDailyFlux_e912d21057defe63] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< jdouble > NRLMSISE00InputParameters::getAp(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAp_e586dea4c0bad69b], a0.this$));
          }

          jdouble NRLMSISE00InputParameters::getAverageFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAverageFlux_e912d21057defe63], a0.this$);
          }

          jdouble NRLMSISE00InputParameters::getDailyFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDailyFlux_e912d21057defe63], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate NRLMSISE00InputParameters::getMaxDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
          }

          ::org::orekit::time::AbsoluteDate NRLMSISE00InputParameters::getMinDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
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
          static PyObject *t_NRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getAp(t_NRLMSISE00InputParameters *self, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getAverageFlux(t_NRLMSISE00InputParameters *self, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getDailyFlux(t_NRLMSISE00InputParameters *self, PyObject *arg);
          static PyObject *t_NRLMSISE00InputParameters_getMaxDate(t_NRLMSISE00InputParameters *self);
          static PyObject *t_NRLMSISE00InputParameters_getMinDate(t_NRLMSISE00InputParameters *self);
          static PyObject *t_NRLMSISE00InputParameters_get__maxDate(t_NRLMSISE00InputParameters *self, void *data);
          static PyObject *t_NRLMSISE00InputParameters_get__minDate(t_NRLMSISE00InputParameters *self, void *data);
          static PyGetSetDef t_NRLMSISE00InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_NRLMSISE00InputParameters, maxDate),
            DECLARE_GET_FIELD(t_NRLMSISE00InputParameters, minDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NRLMSISE00InputParameters__methods_[] = {
            DECLARE_METHOD(t_NRLMSISE00InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getAp, METH_O),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getAverageFlux, METH_O),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getDailyFlux, METH_O),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getMaxDate, METH_NOARGS),
            DECLARE_METHOD(t_NRLMSISE00InputParameters, getMinDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NRLMSISE00InputParameters)[] = {
            { Py_tp_methods, t_NRLMSISE00InputParameters__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NRLMSISE00InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NRLMSISE00InputParameters)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(NRLMSISE00InputParameters, t_NRLMSISE00InputParameters, NRLMSISE00InputParameters);

          void t_NRLMSISE00InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(NRLMSISE00InputParameters), &PY_TYPE_DEF(NRLMSISE00InputParameters), module, "NRLMSISE00InputParameters", 0);
          }

          void t_NRLMSISE00InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00InputParameters), "class_", make_descriptor(NRLMSISE00InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00InputParameters), "wrapfn_", make_descriptor(t_NRLMSISE00InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00InputParameters), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NRLMSISE00InputParameters::initializeClass, 1)))
              return NULL;
            return t_NRLMSISE00InputParameters::wrap_Object(NRLMSISE00InputParameters(((t_NRLMSISE00InputParameters *) arg)->object.this$));
          }
          static PyObject *t_NRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NRLMSISE00InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NRLMSISE00InputParameters_getAp(t_NRLMSISE00InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAp(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAp", arg);
            return NULL;
          }

          static PyObject *t_NRLMSISE00InputParameters_getAverageFlux(t_NRLMSISE00InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAverageFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAverageFlux", arg);
            return NULL;
          }

          static PyObject *t_NRLMSISE00InputParameters_getDailyFlux(t_NRLMSISE00InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDailyFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDailyFlux", arg);
            return NULL;
          }

          static PyObject *t_NRLMSISE00InputParameters_getMaxDate(t_NRLMSISE00InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_NRLMSISE00InputParameters_getMinDate(t_NRLMSISE00InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_NRLMSISE00InputParameters_get__maxDate(t_NRLMSISE00InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_NRLMSISE00InputParameters_get__minDate(t_NRLMSISE00InputParameters *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/GTODProvider.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/GTODProvider.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *GTODProvider::class$ = NULL;
      jmethodID *GTODProvider::mids$ = NULL;
      bool GTODProvider::live$ = false;

      jclass GTODProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/GTODProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEOPHistory_1266c6198e5d43dd] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getNonInterpolatingProvider_7ee1c1efd2bd5e08] = env->getMethodID(cls, "getNonInterpolatingProvider", "()Lorg/orekit/frames/GTODProvider;");
          mids$[mid_getStaticTransform_96493aacdf1acda1] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_490485462b5938a0] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_d55545a64ea4a9a7] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_0b4f24249033b631] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::EOPHistory GTODProvider::getEOPHistory() const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_1266c6198e5d43dd]));
      }

      GTODProvider GTODProvider::getNonInterpolatingProvider() const
      {
        return GTODProvider(env->callObjectMethod(this$, mids$[mid_getNonInterpolatingProvider_7ee1c1efd2bd5e08]));
      }

      ::org::orekit::frames::StaticTransform GTODProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_96493aacdf1acda1], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform GTODProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_490485462b5938a0], a0.this$));
      }

      ::org::orekit::frames::Transform GTODProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_d55545a64ea4a9a7], a0.this$));
      }

      ::org::orekit::frames::FieldTransform GTODProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_0b4f24249033b631], a0.this$));
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
      static PyObject *t_GTODProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GTODProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GTODProvider_getEOPHistory(t_GTODProvider *self);
      static PyObject *t_GTODProvider_getNonInterpolatingProvider(t_GTODProvider *self);
      static PyObject *t_GTODProvider_getStaticTransform(t_GTODProvider *self, PyObject *args);
      static PyObject *t_GTODProvider_getTransform(t_GTODProvider *self, PyObject *args);
      static PyObject *t_GTODProvider_get__eOPHistory(t_GTODProvider *self, void *data);
      static PyObject *t_GTODProvider_get__nonInterpolatingProvider(t_GTODProvider *self, void *data);
      static PyGetSetDef t_GTODProvider__fields_[] = {
        DECLARE_GET_FIELD(t_GTODProvider, eOPHistory),
        DECLARE_GET_FIELD(t_GTODProvider, nonInterpolatingProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GTODProvider__methods_[] = {
        DECLARE_METHOD(t_GTODProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GTODProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GTODProvider, getEOPHistory, METH_NOARGS),
        DECLARE_METHOD(t_GTODProvider, getNonInterpolatingProvider, METH_NOARGS),
        DECLARE_METHOD(t_GTODProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_GTODProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GTODProvider)[] = {
        { Py_tp_methods, t_GTODProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GTODProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GTODProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GTODProvider, t_GTODProvider, GTODProvider);

      void t_GTODProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(GTODProvider), &PY_TYPE_DEF(GTODProvider), module, "GTODProvider", 0);
      }

      void t_GTODProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GTODProvider), "class_", make_descriptor(GTODProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GTODProvider), "wrapfn_", make_descriptor(t_GTODProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GTODProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GTODProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GTODProvider::initializeClass, 1)))
          return NULL;
        return t_GTODProvider::wrap_Object(GTODProvider(((t_GTODProvider *) arg)->object.this$));
      }
      static PyObject *t_GTODProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GTODProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GTODProvider_getEOPHistory(t_GTODProvider *self)
      {
        ::org::orekit::frames::EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_GTODProvider_getNonInterpolatingProvider(t_GTODProvider *self)
      {
        GTODProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getNonInterpolatingProvider());
        return t_GTODProvider::wrap_Object(result);
      }

      static PyObject *t_GTODProvider_getStaticTransform(t_GTODProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_GTODProvider_getTransform(t_GTODProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }

      static PyObject *t_GTODProvider_get__eOPHistory(t_GTODProvider *self, void *data)
      {
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_GTODProvider_get__nonInterpolatingProvider(t_GTODProvider *self, void *data)
      {
        GTODProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getNonInterpolatingProvider());
        return t_GTODProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Short.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Short.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Short::class$ = NULL;
    jmethodID *Short::mids$ = NULL;
    bool Short::live$ = false;
    jint Short::BYTES = (jint) 0;
    jshort Short::MAX_VALUE = (jshort) 0;
    jshort Short::MIN_VALUE = (jshort) 0;
    jint Short::SIZE = (jint) 0;
    ::java::lang::Class *Short::TYPE = NULL;

    jclass Short::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Short");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_49529ddfc5d788f4] = env->getMethodID(cls, "<init>", "(S)V");
        mids$[mid_byteValue_1d06dd1980a98d13] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_f665b51b1f7d7692] = env->getStaticMethodID(cls, "compare", "(SS)I");
        mids$[mid_compareTo_44cea484a8989889] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Short;)I");
        mids$[mid_compareUnsigned_f665b51b1f7d7692] = env->getStaticMethodID(cls, "compareUnsigned", "(SS)I");
        mids$[mid_decode_5c3930597259c87f] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Short;");
        mids$[mid_doubleValue_456d9a2f64d6b28d] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_966c782d3223854d] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_2da221e5b217b02e] = env->getStaticMethodID(cls, "hashCode", "(S)I");
        mids$[mid_intValue_f2f64475e4580546] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_a27fc9afd27e559d] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_parseShort_8f5b817b89f3cf90] = env->getStaticMethodID(cls, "parseShort", "(Ljava/lang/String;)S");
        mids$[mid_parseShort_f9d65cf648ebc964] = env->getStaticMethodID(cls, "parseShort", "(Ljava/lang/String;I)S");
        mids$[mid_reverseBytes_354b000ccea30104] = env->getStaticMethodID(cls, "reverseBytes", "(S)S");
        mids$[mid_shortValue_f89720844d790ad7] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_f80f3447d43d64b0] = env->getStaticMethodID(cls, "toString", "(S)Ljava/lang/String;");
        mids$[mid_toUnsignedInt_2da221e5b217b02e] = env->getStaticMethodID(cls, "toUnsignedInt", "(S)I");
        mids$[mid_toUnsignedLong_fa66fe7ebbbe698c] = env->getStaticMethodID(cls, "toUnsignedLong", "(S)J");
        mids$[mid_valueOf_5c3930597259c87f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Short;");
        mids$[mid_valueOf_059edb28669472a1] = env->getStaticMethodID(cls, "valueOf", "(S)Ljava/lang/Short;");
        mids$[mid_valueOf_311accad91d67f83] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Short;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticShortField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticShortField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Short::Short(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    Short::Short(jshort a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_49529ddfc5d788f4, a0)) {}

    jbyte Short::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_1d06dd1980a98d13]);
    }

    jint Short::compare(jshort a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_f665b51b1f7d7692], a0, a1);
    }

    jint Short::compareTo(const Short & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_44cea484a8989889], a0.this$);
    }

    jint Short::compareUnsigned(jshort a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_f665b51b1f7d7692], a0, a1);
    }

    Short Short::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_decode_5c3930597259c87f], a0.this$));
    }

    jdouble Short::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_456d9a2f64d6b28d]);
    }

    jboolean Short::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jfloat Short::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_966c782d3223854d]);
    }

    jint Short::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jint Short::hashCode(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_2da221e5b217b02e], a0);
    }

    jint Short::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_f2f64475e4580546]);
    }

    jlong Short::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_a27fc9afd27e559d]);
    }

    jshort Short::parseShort(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticShortMethod(cls, mids$[mid_parseShort_8f5b817b89f3cf90], a0.this$);
    }

    jshort Short::parseShort(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticShortMethod(cls, mids$[mid_parseShort_f9d65cf648ebc964], a0.this$, a1);
    }

    jshort Short::reverseBytes(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticShortMethod(cls, mids$[mid_reverseBytes_354b000ccea30104], a0);
    }

    jshort Short::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_f89720844d790ad7]);
    }

    ::java::lang::String Short::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    ::java::lang::String Short::toString(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_f80f3447d43d64b0], a0));
    }

    jint Short::toUnsignedInt(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toUnsignedInt_2da221e5b217b02e], a0);
    }

    jlong Short::toUnsignedLong(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_toUnsignedLong_fa66fe7ebbbe698c], a0);
    }

    Short Short::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5c3930597259c87f], a0.this$));
    }

    Short Short::valueOf(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_valueOf_059edb28669472a1], a0));
    }

    Short Short::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_valueOf_311accad91d67f83], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Short_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Short_init_(t_Short *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Short_byteValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_compareTo(t_Short *self, PyObject *arg);
    static PyObject *t_Short_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_doubleValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_equals(t_Short *self, PyObject *args);
    static PyObject *t_Short_floatValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_hashCode(t_Short *self, PyObject *args);
    static PyObject *t_Short_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_intValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_longValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_parseShort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_shortValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_toString(t_Short *self, PyObject *args);
    static PyObject *t_Short_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_toUnsignedInt(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_toUnsignedLong(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Short__methods_[] = {
      DECLARE_METHOD(t_Short, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Short, compareTo, METH_O),
      DECLARE_METHOD(t_Short, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Short, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, equals, METH_VARARGS),
      DECLARE_METHOD(t_Short, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Short, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, parseShort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Short, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, toString, METH_VARARGS),
      DECLARE_METHOD(t_Short, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, toUnsignedInt, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, toUnsignedLong, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Short)[] = {
      { Py_tp_methods, t_Short__methods_ },
      { Py_tp_init, (void *) t_Short_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Short)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Short, t_Short, Short);

    void t_Short::install(PyObject *module)
    {
      installType(&PY_TYPE(Short), &PY_TYPE_DEF(Short), module, "Short", 0);
    }

    void t_Short::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "class_", make_descriptor(Short::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "wrapfn_", make_descriptor(unboxShort));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "boxfn_", make_descriptor(boxShort));
      env->getClass(Short::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "BYTES", make_descriptor(Short::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "MAX_VALUE", make_descriptor(Short::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "MIN_VALUE", make_descriptor(Short::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "SIZE", make_descriptor(Short::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Short::TYPE)));
    }

    static PyObject *t_Short_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Short::initializeClass, 1)))
        return NULL;
      return t_Short::wrap_Object(Short(((t_Short *) arg)->object.this$));
    }
    static PyObject *t_Short_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Short::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Short_init_(t_Short *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Short object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Short(a0));
            self->object = object;
            break;
          }
        }
        {
          jshort a0;
          Short object((jobject) NULL);

          if (!parseArgs(args, "S", &a0))
          {
            INT_CALL(object = Short(a0));
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

    static PyObject *t_Short_byteValue(t_Short *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Short_compare(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      jshort a1;
      jint result;

      if (!parseArgs(args, "SS", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Short::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Short_compareTo(t_Short *self, PyObject *arg)
    {
      Short a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Short), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Short_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      jshort a1;
      jint result;

      if (!parseArgs(args, "SS", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Short::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Short_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Short result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::decode(a0));
        return t_Short::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Short_doubleValue(t_Short *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Short_equals(t_Short *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Short_floatValue(t_Short *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Short_hashCode(t_Short *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Short_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      jint result;

      if (!parseArgs(args, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Short_intValue(t_Short *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Short_longValue(t_Short *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Short_parseShort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jshort result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Short::parseShort(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jshort result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Short::parseShort(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseShort", args);
      return NULL;
    }

    static PyObject *t_Short_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jshort a0;
      jshort result;

      if (!parseArg(arg, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::reverseBytes(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Short_shortValue(t_Short *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Short_toString(t_Short *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Short_toString_(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Short_toUnsignedInt(PyTypeObject *type, PyObject *arg)
    {
      jshort a0;
      jint result;

      if (!parseArg(arg, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::toUnsignedInt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "toUnsignedInt", arg);
      return NULL;
    }

    static PyObject *t_Short_toUnsignedLong(PyTypeObject *type, PyObject *arg)
    {
      jshort a0;
      jlong result;

      if (!parseArg(arg, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::toUnsignedLong(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "toUnsignedLong", arg);
      return NULL;
    }

    static PyObject *t_Short_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Short result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Short::valueOf(a0));
            return t_Short::wrap_Object(result);
          }
        }
        {
          jshort a0;
          Short result((jobject) NULL);

          if (!parseArgs(args, "S", &a0))
          {
            OBJ_CALL(result = ::java::lang::Short::valueOf(a0));
            return t_Short::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Short result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Short::valueOf(a0, a1));
            return t_Short::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/DateDriver.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *DateDriver::class$ = NULL;
      jmethodID *DateDriver::mids$ = NULL;
      bool DateDriver::live$ = false;

      jclass DateDriver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/DateDriver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bbfbb4872f4edb46] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Ljava/lang/String;Z)V");
          mids$[mid_getBaseDate_aaa854c403487cf3] = env->getMethodID(cls, "getBaseDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_isStart_e470b6d9e0d979db] = env->getMethodID(cls, "isStart", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DateDriver::DateDriver(const ::org::orekit::time::AbsoluteDate & a0, const ::java::lang::String & a1, jboolean a2) : ::org::orekit::utils::ParameterDriver(env->newObject(initializeClass, &mids$, mid_init$_bbfbb4872f4edb46, a0.this$, a1.this$, a2)) {}

      ::org::orekit::time::AbsoluteDate DateDriver::getBaseDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBaseDate_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate DateDriver::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      jboolean DateDriver::isStart() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isStart_e470b6d9e0d979db]);
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
      static PyObject *t_DateDriver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateDriver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DateDriver_init_(t_DateDriver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DateDriver_getBaseDate(t_DateDriver *self);
      static PyObject *t_DateDriver_getDate(t_DateDriver *self);
      static PyObject *t_DateDriver_isStart(t_DateDriver *self);
      static PyObject *t_DateDriver_get__baseDate(t_DateDriver *self, void *data);
      static PyObject *t_DateDriver_get__date(t_DateDriver *self, void *data);
      static PyObject *t_DateDriver_get__start(t_DateDriver *self, void *data);
      static PyGetSetDef t_DateDriver__fields_[] = {
        DECLARE_GET_FIELD(t_DateDriver, baseDate),
        DECLARE_GET_FIELD(t_DateDriver, date),
        DECLARE_GET_FIELD(t_DateDriver, start),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DateDriver__methods_[] = {
        DECLARE_METHOD(t_DateDriver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateDriver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateDriver, getBaseDate, METH_NOARGS),
        DECLARE_METHOD(t_DateDriver, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DateDriver, isStart, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DateDriver)[] = {
        { Py_tp_methods, t_DateDriver__methods_ },
        { Py_tp_init, (void *) t_DateDriver_init_ },
        { Py_tp_getset, t_DateDriver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DateDriver)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::ParameterDriver),
        NULL
      };

      DEFINE_TYPE(DateDriver, t_DateDriver, DateDriver);

      void t_DateDriver::install(PyObject *module)
      {
        installType(&PY_TYPE(DateDriver), &PY_TYPE_DEF(DateDriver), module, "DateDriver", 0);
      }

      void t_DateDriver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateDriver), "class_", make_descriptor(DateDriver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateDriver), "wrapfn_", make_descriptor(t_DateDriver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateDriver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DateDriver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DateDriver::initializeClass, 1)))
          return NULL;
        return t_DateDriver::wrap_Object(DateDriver(((t_DateDriver *) arg)->object.this$));
      }
      static PyObject *t_DateDriver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DateDriver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DateDriver_init_(t_DateDriver *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        jboolean a2;
        DateDriver object((jobject) NULL);

        if (!parseArgs(args, "ksZ", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = DateDriver(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DateDriver_getBaseDate(t_DateDriver *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getBaseDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DateDriver_getDate(t_DateDriver *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DateDriver_isStart(t_DateDriver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isStart());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_DateDriver_get__baseDate(t_DateDriver *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getBaseDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DateDriver_get__date(t_DateDriver *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DateDriver_get__start(t_DateDriver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isStart());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMetadataWriter::class$ = NULL;
            jmethodID *CdmMetadataWriter::mids$ = NULL;
            bool CdmMetadataWriter::live$ = false;

            jclass CdmMetadataWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMetadataWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_39a326a1f81e0f3e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;)V");
                mids$[mid_writeContent_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmMetadataWriter::CdmMetadataWriter(const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata & a0) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_39a326a1f81e0f3e, a0.this$)) {}
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
            static PyObject *t_CdmMetadataWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadataWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmMetadataWriter_init_(t_CdmMetadataWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_CdmMetadataWriter__methods_[] = {
              DECLARE_METHOD(t_CdmMetadataWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMetadataWriter)[] = {
              { Py_tp_methods, t_CdmMetadataWriter__methods_ },
              { Py_tp_init, (void *) t_CdmMetadataWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMetadataWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(CdmMetadataWriter, t_CdmMetadataWriter, CdmMetadataWriter);

            void t_CdmMetadataWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMetadataWriter), &PY_TYPE_DEF(CdmMetadataWriter), module, "CdmMetadataWriter", 0);
            }

            void t_CdmMetadataWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataWriter), "class_", make_descriptor(CdmMetadataWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataWriter), "wrapfn_", make_descriptor(t_CdmMetadataWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmMetadataWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMetadataWriter::initializeClass, 1)))
                return NULL;
              return t_CdmMetadataWriter::wrap_Object(CdmMetadataWriter(((t_CdmMetadataWriter *) arg)->object.this$));
            }
            static PyObject *t_CdmMetadataWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMetadataWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmMetadataWriter_init_(t_CdmMetadataWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata a0((jobject) NULL);
              CdmMetadataWriter object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata::initializeClass, &a0))
              {
                INT_CALL(object = CdmMetadataWriter(a0));
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
#include "org/orekit/frames/UpdatableFrame.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *UpdatableFrame::class$ = NULL;
      jmethodID *UpdatableFrame::mids$ = NULL;
      bool UpdatableFrame::live$ = false;

      jclass UpdatableFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/UpdatableFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4d900b4c52a404d9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;)V");
          mids$[mid_init$_3b080937682107f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;Z)V");
          mids$[mid_updateTransform_e619467012bbf00d] = env->getMethodID(cls, "updateTransform", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Lorg/orekit/time/AbsoluteDate;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UpdatableFrame::UpdatableFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_4d900b4c52a404d9, a0.this$, a1.this$, a2.this$)) {}

      UpdatableFrame::UpdatableFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2, jboolean a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_3b080937682107f9, a0.this$, a1.this$, a2.this$, a3)) {}

      void UpdatableFrame::updateTransform(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::frames::Transform & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_updateTransform_e619467012bbf00d], a0.this$, a1.this$, a2.this$, a3.this$);
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
      static PyObject *t_UpdatableFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UpdatableFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UpdatableFrame_init_(t_UpdatableFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UpdatableFrame_updateTransform(t_UpdatableFrame *self, PyObject *args);

      static PyMethodDef t_UpdatableFrame__methods_[] = {
        DECLARE_METHOD(t_UpdatableFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UpdatableFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UpdatableFrame, updateTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UpdatableFrame)[] = {
        { Py_tp_methods, t_UpdatableFrame__methods_ },
        { Py_tp_init, (void *) t_UpdatableFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UpdatableFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(UpdatableFrame, t_UpdatableFrame, UpdatableFrame);

      void t_UpdatableFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(UpdatableFrame), &PY_TYPE_DEF(UpdatableFrame), module, "UpdatableFrame", 0);
      }

      void t_UpdatableFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableFrame), "class_", make_descriptor(UpdatableFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableFrame), "wrapfn_", make_descriptor(t_UpdatableFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UpdatableFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UpdatableFrame::initializeClass, 1)))
          return NULL;
        return t_UpdatableFrame::wrap_Object(UpdatableFrame(((t_UpdatableFrame *) arg)->object.this$));
      }
      static PyObject *t_UpdatableFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UpdatableFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UpdatableFrame_init_(t_UpdatableFrame *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            UpdatableFrame object((jobject) NULL);

            if (!parseArgs(args, "kks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = UpdatableFrame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jboolean a3;
            UpdatableFrame object((jobject) NULL);

            if (!parseArgs(args, "kksZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = UpdatableFrame(a0, a1, a2, a3));
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

      static PyObject *t_UpdatableFrame_updateTransform(t_UpdatableFrame *self, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::frames::Transform a2((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a3((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.updateTransform(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "updateTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/util/List.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Double.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
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
                mids$[mid_init$_a20abbbf1824e4da] = env->getMethodID(cls, "<init>", "(IDZIILorg/hipparchus/random/RandomGenerator;ZLorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_getStatisticsDHistory_a6156df500549a58] = env->getMethodID(cls, "getStatisticsDHistory", "()Ljava/util/List;");
                mids$[mid_getStatisticsFitnessHistory_a6156df500549a58] = env->getMethodID(cls, "getStatisticsFitnessHistory", "()Ljava/util/List;");
                mids$[mid_getStatisticsMeanHistory_a6156df500549a58] = env->getMethodID(cls, "getStatisticsMeanHistory", "()Ljava/util/List;");
                mids$[mid_getStatisticsSigmaHistory_a6156df500549a58] = env->getMethodID(cls, "getStatisticsSigmaHistory", "()Ljava/util/List;");
                mids$[mid_optimize_02ecb87ce66bcfc1] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_doOptimize_f3368328259a5468] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_parseOptimizationData_a5cd04a701a45f77] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CMAESOptimizer::CMAESOptimizer(jint a0, jdouble a1, jboolean a2, jint a3, jint a4, const ::org::hipparchus::random::RandomGenerator & a5, jboolean a6, const ::org::hipparchus::optim::ConvergenceChecker & a7) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_a20abbbf1824e4da, a0, a1, a2, a3, a4, a5.this$, a6, a7.this$)) {}

            ::java::util::List CMAESOptimizer::getStatisticsDHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsDHistory_a6156df500549a58]));
            }

            ::java::util::List CMAESOptimizer::getStatisticsFitnessHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsFitnessHistory_a6156df500549a58]));
            }

            ::java::util::List CMAESOptimizer::getStatisticsMeanHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsMeanHistory_a6156df500549a58]));
            }

            ::java::util::List CMAESOptimizer::getStatisticsSigmaHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsSigmaHistory_a6156df500549a58]));
            }

            ::org::hipparchus::optim::PointValuePair CMAESOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_02ecb87ce66bcfc1], a0.this$));
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
#include "org/hipparchus/linear/AbstractRealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
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
          mids$[mid_add_e00cd33aedcc5bd0] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_addToEntry_78e41e7b5124a628] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_7116bbecdd8ceb21] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_copySubMatrix_9a9a0c9e43221c5a] = env->getMethodID(cls, "copySubMatrix", "([I[I[[D)V");
          mids$[mid_copySubMatrix_8f6f9022196ddb1c] = env->getMethodID(cls, "copySubMatrix", "(IIII[[D)V");
          mids$[mid_createMatrix_4225756160ad1bc1] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getColumn_eb9cceadce1b2217] = env->getMethodID(cls, "getColumn", "(I)[D");
          mids$[mid_getColumnDimension_f2f64475e4580546] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_3a4716f77215ee99] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnVector_2cafd1b18558ed5f] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getData_43de1192439efa92] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getEntry_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getFrobeniusNorm_456d9a2f64d6b28d] = env->getMethodID(cls, "getFrobeniusNorm", "()D");
          mids$[mid_getRow_eb9cceadce1b2217] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowDimension_f2f64475e4580546] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_3a4716f77215ee99] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRowVector_2cafd1b18558ed5f] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSubMatrix_6bdc980f8daf4737] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSubMatrix_d4cd53a0b7898ff0] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getTrace_456d9a2f64d6b28d] = env->getMethodID(cls, "getTrace", "()D");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isSquare_e470b6d9e0d979db] = env->getMethodID(cls, "isSquare", "()Z");
          mids$[mid_multiply_e00cd33aedcc5bd0] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_78e41e7b5124a628] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_operate_4b742fe429c22ba8] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_operate_a3e626dfa1abd779] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_power_3a4716f77215ee99] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_preMultiply_4b742fe429c22ba8] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_preMultiply_a3e626dfa1abd779] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_preMultiply_e00cd33aedcc5bd0] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarAdd_2461b653ab91779b] = env->getMethodID(cls, "scalarAdd", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarMultiply_2461b653ab91779b] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setColumn_7d4f41c65056f174] = env->getMethodID(cls, "setColumn", "(I[D)V");
          mids$[mid_setColumnMatrix_8f1af6d535d298ec] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setColumnVector_dcd0f7fda5e9451c] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setEntry_78e41e7b5124a628] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_7d4f41c65056f174] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setRowMatrix_8f1af6d535d298ec] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setRowVector_dcd0f7fda5e9451c] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setSubMatrix_a741cdd381e94792] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_subtract_e00cd33aedcc5bd0] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_transpose_7116bbecdd8ceb21] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_walkInColumnOrder_340ddcf983c0c22e] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInColumnOrder_354ebbe7c685c961] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInColumnOrder_56223f2e9b79c5ad] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInColumnOrder_62551289056beecd] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_340ddcf983c0c22e] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_354ebbe7c685c961] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_56223f2e9b79c5ad] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_62551289056beecd] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_340ddcf983c0c22e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_354ebbe7c685c961] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_56223f2e9b79c5ad] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_62551289056beecd] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::add(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_add_e00cd33aedcc5bd0], a0.this$));
      }

      void AbstractRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_78e41e7b5124a628], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::copy() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_7116bbecdd8ceb21]));
      }

      void AbstractRealMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< jdouble > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_9a9a0c9e43221c5a], a0.this$, a1.this$, a2.this$);
      }

      void AbstractRealMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< jdouble > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_8f6f9022196ddb1c], a0, a1, a2, a3, a4.this$);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_4225756160ad1bc1], a0, a1));
      }

      jboolean AbstractRealMatrix::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      JArray< jdouble > AbstractRealMatrix::getColumn(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getColumn_eb9cceadce1b2217], a0));
      }

      jint AbstractRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getColumnMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_3a4716f77215ee99], a0));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_2cafd1b18558ed5f], a0));
      }

      JArray< JArray< jdouble > > AbstractRealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_43de1192439efa92]));
      }

      jdouble AbstractRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_a84e4ee1da3f1ab8], a0, a1);
      }

      jdouble AbstractRealMatrix::getFrobeniusNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFrobeniusNorm_456d9a2f64d6b28d]);
      }

      JArray< jdouble > AbstractRealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_eb9cceadce1b2217], a0));
      }

      jint AbstractRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getRowMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_3a4716f77215ee99], a0));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRowVector_2cafd1b18558ed5f], a0));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_6bdc980f8daf4737], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_d4cd53a0b7898ff0], a0, a1, a2, a3));
      }

      jdouble AbstractRealMatrix::getTrace() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrace_456d9a2f64d6b28d]);
      }

      jint AbstractRealMatrix::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      jboolean AbstractRealMatrix::isSquare() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSquare_e470b6d9e0d979db]);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_e00cd33aedcc5bd0], a0.this$));
      }

      void AbstractRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_78e41e7b5124a628], a0, a1, a2);
      }

      JArray< jdouble > AbstractRealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_4b742fe429c22ba8], a0.this$));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_a3e626dfa1abd779], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::power(jint a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_power_3a4716f77215ee99], a0));
      }

      JArray< jdouble > AbstractRealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_4b742fe429c22ba8], a0.this$));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::preMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_preMultiply_a3e626dfa1abd779], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::preMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_e00cd33aedcc5bd0], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::scalarAdd(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_2461b653ab91779b], a0));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::scalarMultiply(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_2461b653ab91779b], a0));
      }

      void AbstractRealMatrix::setColumn(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_7d4f41c65056f174], a0, a1.this$);
      }

      void AbstractRealMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_8f1af6d535d298ec], a0, a1.this$);
      }

      void AbstractRealMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_dcd0f7fda5e9451c], a0, a1.this$);
      }

      void AbstractRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_78e41e7b5124a628], a0, a1, a2);
      }

      void AbstractRealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_7d4f41c65056f174], a0, a1.this$);
      }

      void AbstractRealMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_8f1af6d535d298ec], a0, a1.this$);
      }

      void AbstractRealMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_dcd0f7fda5e9451c], a0, a1.this$);
      }

      void AbstractRealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_a741cdd381e94792], a0.this$, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::subtract(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_e00cd33aedcc5bd0], a0.this$));
      }

      ::java::lang::String AbstractRealMatrix::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::transpose() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transpose_7116bbecdd8ceb21]));
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_340ddcf983c0c22e], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_354ebbe7c685c961], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_56223f2e9b79c5ad], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_62551289056beecd], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_340ddcf983c0c22e], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_354ebbe7c685c961], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_56223f2e9b79c5ad], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_62551289056beecd], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_340ddcf983c0c22e], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_354ebbe7c685c961], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_56223f2e9b79c5ad], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_62551289056beecd], a0.this$, a1, a2, a3, a4);
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
#include "org/orekit/gnss/metric/ntrip/GnssData.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *GnssData::class$ = NULL;
          jmethodID *GnssData::mids$ = NULL;
          bool GnssData::live$ = false;

          jclass GnssData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/GnssData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1fa9249f4a2aa117] = env->getMethodID(cls, "<init>", "([BI)V");
              mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GnssData::GnssData(const JArray< jbyte > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1fa9249f4a2aa117, a0.this$, a1)) {}

          ::java::lang::String GnssData::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
          static PyObject *t_GnssData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GnssData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GnssData_init_(t_GnssData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GnssData_toString(t_GnssData *self, PyObject *args);

          static PyMethodDef t_GnssData__methods_[] = {
            DECLARE_METHOD(t_GnssData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GnssData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GnssData, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GnssData)[] = {
            { Py_tp_methods, t_GnssData__methods_ },
            { Py_tp_init, (void *) t_GnssData_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GnssData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GnssData, t_GnssData, GnssData);

          void t_GnssData::install(PyObject *module)
          {
            installType(&PY_TYPE(GnssData), &PY_TYPE_DEF(GnssData), module, "GnssData", 0);
          }

          void t_GnssData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GnssData), "class_", make_descriptor(GnssData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GnssData), "wrapfn_", make_descriptor(t_GnssData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GnssData), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GnssData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GnssData::initializeClass, 1)))
              return NULL;
            return t_GnssData::wrap_Object(GnssData(((t_GnssData *) arg)->object.this$));
          }
          static PyObject *t_GnssData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GnssData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GnssData_init_(t_GnssData *self, PyObject *args, PyObject *kwds)
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            GnssData object((jobject) NULL);

            if (!parseArgs(args, "[BI", &a0, &a1))
            {
              INT_CALL(object = GnssData(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_GnssData_toString(t_GnssData *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(GnssData), (PyObject *) self, "toString", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PositionAngleDetector.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/propagation/events/PositionAngleDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PositionAngleDetector::class$ = NULL;
        jmethodID *PositionAngleDetector::mids$ = NULL;
        bool PositionAngleDetector::live$ = false;

        jclass PositionAngleDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PositionAngleDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bae8e8bcb1f20009] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_6e4c284847e31171] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAngle_456d9a2f64d6b28d] = env->getMethodID(cls, "getAngle", "()D");
            mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_6e6735a86409adbb] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/PositionAngleDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PositionAngleDetector::PositionAngleDetector(const ::org::orekit::orbits::OrbitType & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_bae8e8bcb1f20009, a0.this$, a1.this$, a2)) {}

        PositionAngleDetector::PositionAngleDetector(jdouble a0, jdouble a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3, jdouble a4) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6e4c284847e31171, a0, a1, a2.this$, a3.this$, a4)) {}

        jdouble PositionAngleDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        jdouble PositionAngleDetector::getAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAngle_456d9a2f64d6b28d]);
        }

        ::org::orekit::orbits::OrbitType PositionAngleDetector::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_63ea5cd020bf7bf1]));
        }

        ::org::orekit::orbits::PositionAngleType PositionAngleDetector::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_2571e8fe1cede425]));
        }

        void PositionAngleDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
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
        static PyObject *t_PositionAngleDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PositionAngleDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PositionAngleDetector_of_(t_PositionAngleDetector *self, PyObject *args);
        static int t_PositionAngleDetector_init_(t_PositionAngleDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PositionAngleDetector_g(t_PositionAngleDetector *self, PyObject *args);
        static PyObject *t_PositionAngleDetector_getAngle(t_PositionAngleDetector *self);
        static PyObject *t_PositionAngleDetector_getOrbitType(t_PositionAngleDetector *self);
        static PyObject *t_PositionAngleDetector_getPositionAngleType(t_PositionAngleDetector *self);
        static PyObject *t_PositionAngleDetector_init(t_PositionAngleDetector *self, PyObject *args);
        static PyObject *t_PositionAngleDetector_get__angle(t_PositionAngleDetector *self, void *data);
        static PyObject *t_PositionAngleDetector_get__orbitType(t_PositionAngleDetector *self, void *data);
        static PyObject *t_PositionAngleDetector_get__positionAngleType(t_PositionAngleDetector *self, void *data);
        static PyObject *t_PositionAngleDetector_get__parameters_(t_PositionAngleDetector *self, void *data);
        static PyGetSetDef t_PositionAngleDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PositionAngleDetector, angle),
          DECLARE_GET_FIELD(t_PositionAngleDetector, orbitType),
          DECLARE_GET_FIELD(t_PositionAngleDetector, positionAngleType),
          DECLARE_GET_FIELD(t_PositionAngleDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PositionAngleDetector__methods_[] = {
          DECLARE_METHOD(t_PositionAngleDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PositionAngleDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PositionAngleDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PositionAngleDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_PositionAngleDetector, getAngle, METH_NOARGS),
          DECLARE_METHOD(t_PositionAngleDetector, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_PositionAngleDetector, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_PositionAngleDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PositionAngleDetector)[] = {
          { Py_tp_methods, t_PositionAngleDetector__methods_ },
          { Py_tp_init, (void *) t_PositionAngleDetector_init_ },
          { Py_tp_getset, t_PositionAngleDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PositionAngleDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(PositionAngleDetector, t_PositionAngleDetector, PositionAngleDetector);
        PyObject *t_PositionAngleDetector::wrap_Object(const PositionAngleDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PositionAngleDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PositionAngleDetector *self = (t_PositionAngleDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PositionAngleDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PositionAngleDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PositionAngleDetector *self = (t_PositionAngleDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PositionAngleDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PositionAngleDetector), &PY_TYPE_DEF(PositionAngleDetector), module, "PositionAngleDetector", 0);
        }

        void t_PositionAngleDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleDetector), "class_", make_descriptor(PositionAngleDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleDetector), "wrapfn_", make_descriptor(t_PositionAngleDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PositionAngleDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PositionAngleDetector::initializeClass, 1)))
            return NULL;
          return t_PositionAngleDetector::wrap_Object(PositionAngleDetector(((t_PositionAngleDetector *) arg)->object.this$));
        }
        static PyObject *t_PositionAngleDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PositionAngleDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PositionAngleDetector_of_(t_PositionAngleDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PositionAngleDetector_init_(t_PositionAngleDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::OrbitType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              PositionAngleDetector object((jobject) NULL);

              if (!parseArgs(args, "KKD", ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_OrbitType::parameters_, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2))
              {
                INT_CALL(object = PositionAngleDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(PositionAngleDetector);
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              PositionAngleDetector object((jobject) NULL);

              if (!parseArgs(args, "DDKKD", ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a4))
              {
                INT_CALL(object = PositionAngleDetector(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(PositionAngleDetector);
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

        static PyObject *t_PositionAngleDetector_g(t_PositionAngleDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PositionAngleDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_PositionAngleDetector_getAngle(t_PositionAngleDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAngle());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PositionAngleDetector_getOrbitType(t_PositionAngleDetector *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_PositionAngleDetector_getPositionAngleType(t_PositionAngleDetector *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_PositionAngleDetector_init(t_PositionAngleDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PositionAngleDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_PositionAngleDetector_get__parameters_(t_PositionAngleDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_PositionAngleDetector_get__angle(t_PositionAngleDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAngle());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PositionAngleDetector_get__orbitType(t_PositionAngleDetector *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_PositionAngleDetector_get__positionAngleType(t_PositionAngleDetector *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ImmutableTimeStampedCache::class$ = NULL;
      jmethodID *ImmutableTimeStampedCache::mids$ = NULL;
      bool ImmutableTimeStampedCache::live$ = false;

      jclass ImmutableTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ImmutableTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_23703d999b776f91] = env->getMethodID(cls, "<init>", "(ILjava/util/Collection;)V");
          mids$[mid_emptyCache_63e099e72fa7bec4] = env->getStaticMethodID(cls, "emptyCache", "()Lorg/orekit/utils/ImmutableTimeStampedCache;");
          mids$[mid_getAll_a6156df500549a58] = env->getMethodID(cls, "getAll", "()Ljava/util/List;");
          mids$[mid_getEarliest_b6273cee359d7146] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getLatest_b6273cee359d7146] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_f2f64475e4580546] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getNeighbors_1f145bd0decc1d0c] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ImmutableTimeStampedCache::ImmutableTimeStampedCache(jint a0, const ::java::util::Collection & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_23703d999b776f91, a0, a1.this$)) {}

      ImmutableTimeStampedCache ImmutableTimeStampedCache::emptyCache()
      {
        jclass cls = env->getClass(initializeClass);
        return ImmutableTimeStampedCache(env->callStaticObjectMethod(cls, mids$[mid_emptyCache_63e099e72fa7bec4]));
      }

      ::java::util::List ImmutableTimeStampedCache::getAll() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAll_a6156df500549a58]));
      }

      ::org::orekit::time::TimeStamped ImmutableTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_b6273cee359d7146]));
      }

      ::org::orekit::time::TimeStamped ImmutableTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_b6273cee359d7146]));
      }

      jint ImmutableTimeStampedCache::getMaxNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxNeighborsSize_f2f64475e4580546]);
      }

      ::java::util::stream::Stream ImmutableTimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_1f145bd0decc1d0c], a0.this$, a1));
      }

      ::java::lang::String ImmutableTimeStampedCache::toString() const
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
    namespace utils {
      static PyObject *t_ImmutableTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableTimeStampedCache_of_(t_ImmutableTimeStampedCache *self, PyObject *args);
      static int t_ImmutableTimeStampedCache_init_(t_ImmutableTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ImmutableTimeStampedCache_emptyCache(PyTypeObject *type);
      static PyObject *t_ImmutableTimeStampedCache_getAll(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getEarliest(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getLatest(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getMaxNeighborsSize(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getNeighbors(t_ImmutableTimeStampedCache *self, PyObject *args);
      static PyObject *t_ImmutableTimeStampedCache_toString(t_ImmutableTimeStampedCache *self, PyObject *args);
      static PyObject *t_ImmutableTimeStampedCache_get__all(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__earliest(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__latest(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__maxNeighborsSize(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__parameters_(t_ImmutableTimeStampedCache *self, void *data);
      static PyGetSetDef t_ImmutableTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, all),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, maxNeighborsSize),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ImmutableTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_ImmutableTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, emptyCache, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getAll, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getMaxNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getNeighbors, METH_VARARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ImmutableTimeStampedCache)[] = {
        { Py_tp_methods, t_ImmutableTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_ImmutableTimeStampedCache_init_ },
        { Py_tp_getset, t_ImmutableTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ImmutableTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ImmutableTimeStampedCache, t_ImmutableTimeStampedCache, ImmutableTimeStampedCache);
      PyObject *t_ImmutableTimeStampedCache::wrap_Object(const ImmutableTimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ImmutableTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableTimeStampedCache *self = (t_ImmutableTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ImmutableTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ImmutableTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableTimeStampedCache *self = (t_ImmutableTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ImmutableTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(ImmutableTimeStampedCache), &PY_TYPE_DEF(ImmutableTimeStampedCache), module, "ImmutableTimeStampedCache", 0);
      }

      void t_ImmutableTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableTimeStampedCache), "class_", make_descriptor(ImmutableTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableTimeStampedCache), "wrapfn_", make_descriptor(t_ImmutableTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableTimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ImmutableTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ImmutableTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_ImmutableTimeStampedCache::wrap_Object(ImmutableTimeStampedCache(((t_ImmutableTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_ImmutableTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ImmutableTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ImmutableTimeStampedCache_of_(t_ImmutableTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ImmutableTimeStampedCache_init_(t_ImmutableTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ImmutableTimeStampedCache object((jobject) NULL);

        if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = ImmutableTimeStampedCache(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ImmutableTimeStampedCache_emptyCache(PyTypeObject *type)
      {
        ImmutableTimeStampedCache result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::ImmutableTimeStampedCache::emptyCache());
        return t_ImmutableTimeStampedCache::wrap_Object(result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getAll(t_ImmutableTimeStampedCache *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAll());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ImmutableTimeStampedCache_getEarliest(t_ImmutableTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getLatest(t_ImmutableTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getMaxNeighborsSize(t_ImmutableTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getNeighbors(t_ImmutableTimeStampedCache *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", args);
        return NULL;
      }

      static PyObject *t_ImmutableTimeStampedCache_toString(t_ImmutableTimeStampedCache *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ImmutableTimeStampedCache), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_ImmutableTimeStampedCache_get__parameters_(t_ImmutableTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ImmutableTimeStampedCache_get__all(t_ImmutableTimeStampedCache *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAll());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ImmutableTimeStampedCache_get__earliest(t_ImmutableTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableTimeStampedCache_get__latest(t_ImmutableTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableTimeStampedCache_get__maxNeighborsSize(t_ImmutableTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonFieldManeuverTriggersResetter.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonFieldManeuverTriggersResetter::class$ = NULL;
          jmethodID *PythonFieldManeuverTriggersResetter::mids$ = NULL;
          bool PythonFieldManeuverTriggersResetter::live$ = false;

          jclass PythonFieldManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonFieldManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_maneuverTriggered_c76342d42407aa3d] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_db7b9ef879f5b135] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonFieldManeuverTriggersResetter::PythonFieldManeuverTriggersResetter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonFieldManeuverTriggersResetter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonFieldManeuverTriggersResetter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonFieldManeuverTriggersResetter::pythonExtension(jlong a0) const
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
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_PythonFieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldManeuverTriggersResetter_of_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args);
          static int t_PythonFieldManeuverTriggersResetter_init_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonFieldManeuverTriggersResetter_finalize(t_PythonFieldManeuverTriggersResetter *self);
          static PyObject *t_PythonFieldManeuverTriggersResetter_pythonExtension(t_PythonFieldManeuverTriggersResetter *self, PyObject *args);
          static void JNICALL t_PythonFieldManeuverTriggersResetter_maneuverTriggered0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
          static void JNICALL t_PythonFieldManeuverTriggersResetter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonFieldManeuverTriggersResetter_resetState2(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonFieldManeuverTriggersResetter_get__self(t_PythonFieldManeuverTriggersResetter *self, void *data);
          static PyObject *t_PythonFieldManeuverTriggersResetter_get__parameters_(t_PythonFieldManeuverTriggersResetter *self, void *data);
          static PyGetSetDef t_PythonFieldManeuverTriggersResetter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonFieldManeuverTriggersResetter, self),
            DECLARE_GET_FIELD(t_PythonFieldManeuverTriggersResetter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonFieldManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonFieldManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_PythonFieldManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) t_PythonFieldManeuverTriggersResetter_init_ },
            { Py_tp_getset, t_PythonFieldManeuverTriggersResetter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonFieldManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonFieldManeuverTriggersResetter, t_PythonFieldManeuverTriggersResetter, PythonFieldManeuverTriggersResetter);
          PyObject *t_PythonFieldManeuverTriggersResetter::wrap_Object(const PythonFieldManeuverTriggersResetter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldManeuverTriggersResetter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldManeuverTriggersResetter *self = (t_PythonFieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonFieldManeuverTriggersResetter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldManeuverTriggersResetter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldManeuverTriggersResetter *self = (t_PythonFieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonFieldManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonFieldManeuverTriggersResetter), &PY_TYPE_DEF(PythonFieldManeuverTriggersResetter), module, "PythonFieldManeuverTriggersResetter", 1);
          }

          void t_PythonFieldManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldManeuverTriggersResetter), "class_", make_descriptor(PythonFieldManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldManeuverTriggersResetter), "wrapfn_", make_descriptor(t_PythonFieldManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonFieldManeuverTriggersResetter::initializeClass);
            JNINativeMethod methods[] = {
              { "maneuverTriggered", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V", (void *) t_PythonFieldManeuverTriggersResetter_maneuverTriggered0 },
              { "pythonDecRef", "()V", (void *) t_PythonFieldManeuverTriggersResetter_pythonDecRef1 },
              { "resetState", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldManeuverTriggersResetter_resetState2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonFieldManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_PythonFieldManeuverTriggersResetter::wrap_Object(PythonFieldManeuverTriggersResetter(((t_PythonFieldManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_PythonFieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonFieldManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_of_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonFieldManeuverTriggersResetter_init_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args, PyObject *kwds)
          {
            PythonFieldManeuverTriggersResetter object((jobject) NULL);

            INT_CALL(object = PythonFieldManeuverTriggersResetter());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_finalize(t_PythonFieldManeuverTriggersResetter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_pythonExtension(t_PythonFieldManeuverTriggersResetter *self, PyObject *args)
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

          static void JNICALL t_PythonFieldManeuverTriggersResetter_maneuverTriggered0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = (a1 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "maneuverTriggered", "OO", o0, o1);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldManeuverTriggersResetter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonFieldManeuverTriggersResetter_resetState2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
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

          static PyObject *t_PythonFieldManeuverTriggersResetter_get__self(t_PythonFieldManeuverTriggersResetter *self, void *data)
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
          static PyObject *t_PythonFieldManeuverTriggersResetter_get__parameters_(t_PythonFieldManeuverTriggersResetter *self, void *data)
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
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Double.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ArrayRealVector::class$ = NULL;
      jmethodID *ArrayRealVector::mids$ = NULL;
      bool ArrayRealVector::live$ = false;

      jclass ArrayRealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ArrayRealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_6d211d0550baef5d] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;)V");
          mids$[mid_init$_df4ee11a06094b55] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_8f7323824264d7e5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;Lorg/hipparchus/linear/ArrayRealVector;)V");
          mids$[mid_init$_e16ea2cf9e8a7313] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;[D)V");
          mids$[mid_init$_1e0e996ac840b5c7] = env->getMethodID(cls, "<init>", "([DLorg/hipparchus/linear/ArrayRealVector;)V");
          mids$[mid_init$_a007ff78575b9ade] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_init$_d9abe82675adaecf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/ArrayRealVector;)V");
          mids$[mid_init$_0d03c8a1d7f56f02] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_init$_febce76b2e172ee8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;Z)V");
          mids$[mid_init$_d26930f65a8ba6c9] = env->getMethodID(cls, "<init>", "([DZ)V");
          mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_d3508f432c1d798d] = env->getMethodID(cls, "<init>", "([DII)V");
          mids$[mid_init$_8ff13165a6ccde38] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;II)V");
          mids$[mid_add_814fde753e05ba41] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_addToEntry_987a5fb872043b12] = env->getMethodID(cls, "addToEntry", "(ID)V");
          mids$[mid_append_cf7752188b9ef155] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/ArrayRealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_append_a3e626dfa1abd779] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_append_247afd2de476d613] = env->getMethodID(cls, "append", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_combine_5792aa5323251556] = env->getMethodID(cls, "combine", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_combineToSelf_5792aa5323251556] = env->getMethodID(cls, "combineToSelf", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_copy_012d035251715193] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_dotProduct_5ed80776077f2bda] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_ebeDivide_814fde753e05ba41] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_ebeMultiply_814fde753e05ba41] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDataRef_7cdc325af0834901] = env->getMethodID(cls, "getDataRef", "()[D");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getDistance_5ed80776077f2bda] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getEntry_b772323fc98b7293] = env->getMethodID(cls, "getEntry", "(I)D");
          mids$[mid_getL1Distance_5ed80776077f2bda] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getL1Norm_456d9a2f64d6b28d] = env->getMethodID(cls, "getL1Norm", "()D");
          mids$[mid_getLInfDistance_5ed80776077f2bda] = env->getMethodID(cls, "getLInfDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getLInfNorm_456d9a2f64d6b28d] = env->getMethodID(cls, "getLInfNorm", "()D");
          mids$[mid_getNorm_456d9a2f64d6b28d] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getSubVector_898f26b9327f192e] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_map_a6fda0c2218c2046] = env->getMethodID(cls, "map", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_mapAddToSelf_247afd2de476d613] = env->getMethodID(cls, "mapAddToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapDivideToSelf_247afd2de476d613] = env->getMethodID(cls, "mapDivideToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapMultiplyToSelf_247afd2de476d613] = env->getMethodID(cls, "mapMultiplyToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapSubtractToSelf_247afd2de476d613] = env->getMethodID(cls, "mapSubtractToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapToSelf_a6fda0c2218c2046] = env->getMethodID(cls, "mapToSelf", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_outerProduct_d91077830a593cbe] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_set_77e0f9a1f260e2e5] = env->getMethodID(cls, "set", "(D)V");
          mids$[mid_setEntry_987a5fb872043b12] = env->getMethodID(cls, "setEntry", "(ID)V");
          mids$[mid_setSubVector_7d4f41c65056f174] = env->getMethodID(cls, "setSubVector", "(I[D)V");
          mids$[mid_setSubVector_dcd0f7fda5e9451c] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_subtract_814fde753e05ba41] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_toArray_7cdc325af0834901] = env->getMethodID(cls, "toArray", "()[D");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_walkInDefaultOrder_f936e3f5b1c1be24] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInDefaultOrder_87c5a5041dad7333] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInDefaultOrder_295a71e39a8e7bf3] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInDefaultOrder_5e84f8a04ec8e2fa] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_f936e3f5b1c1be24] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_87c5a5041dad7333] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_295a71e39a8e7bf3] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_5e84f8a04ec8e2fa] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_checkVectorDimensions_df4ee11a06094b55] = env->getMethodID(cls, "checkVectorDimensions", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_checkVectorDimensions_0a2a1ac2721c0336] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ArrayRealVector::ArrayRealVector() : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

      ArrayRealVector::ArrayRealVector(const JArray< ::java::lang::Double > & a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_6d211d0550baef5d, a0.this$)) {}

      ArrayRealVector::ArrayRealVector(const ::org::hipparchus::linear::RealVector & a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_df4ee11a06094b55, a0.this$)) {}

      ArrayRealVector::ArrayRealVector(jint a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, const ArrayRealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_8f7323824264d7e5, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, const JArray< jdouble > & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_e16ea2cf9e8a7313, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, const ArrayRealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_1e0e996ac840b5c7, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, const ::org::hipparchus::linear::RealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_a007ff78575b9ade, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ::org::hipparchus::linear::RealVector & a0, const ArrayRealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_d9abe82675adaecf, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_0d03c8a1d7f56f02, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, jboolean a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_febce76b2e172ee8, a0.this$, a1)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, jboolean a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_d26930f65a8ba6c9, a0.this$, a1)) {}

      ArrayRealVector::ArrayRealVector(jint a0, jdouble a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, jint a1, jint a2) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_d3508f432c1d798d, a0.this$, a1, a2)) {}

      ArrayRealVector::ArrayRealVector(const JArray< ::java::lang::Double > & a0, jint a1, jint a2) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_8ff13165a6ccde38, a0.this$, a1, a2)) {}

      ArrayRealVector ArrayRealVector::add(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_add_814fde753e05ba41], a0.this$));
      }

      void ArrayRealVector::addToEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_987a5fb872043b12], a0, a1);
      }

      ArrayRealVector ArrayRealVector::append(const ArrayRealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_append_cf7752188b9ef155], a0.this$));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::append(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_append_a3e626dfa1abd779], a0.this$));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::append(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_append_247afd2de476d613], a0));
      }

      ArrayRealVector ArrayRealVector::combine(jdouble a0, jdouble a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_combine_5792aa5323251556], a0, a1, a2.this$));
      }

      ArrayRealVector ArrayRealVector::combineToSelf(jdouble a0, jdouble a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_combineToSelf_5792aa5323251556], a0, a1, a2.this$));
      }

      ArrayRealVector ArrayRealVector::copy() const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_copy_012d035251715193]));
      }

      jdouble ArrayRealVector::dotProduct(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_5ed80776077f2bda], a0.this$);
      }

      ArrayRealVector ArrayRealVector::ebeDivide(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_814fde753e05ba41], a0.this$));
      }

      ArrayRealVector ArrayRealVector::ebeMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_814fde753e05ba41], a0.this$));
      }

      jboolean ArrayRealVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      JArray< jdouble > ArrayRealVector::getDataRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDataRef_7cdc325af0834901]));
      }

      jint ArrayRealVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      jdouble ArrayRealVector::getDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_5ed80776077f2bda], a0.this$);
      }

      jdouble ArrayRealVector::getEntry(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_b772323fc98b7293], a0);
      }

      jdouble ArrayRealVector::getL1Distance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_5ed80776077f2bda], a0.this$);
      }

      jdouble ArrayRealVector::getL1Norm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Norm_456d9a2f64d6b28d]);
      }

      jdouble ArrayRealVector::getLInfDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfDistance_5ed80776077f2bda], a0.this$);
      }

      jdouble ArrayRealVector::getLInfNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfNorm_456d9a2f64d6b28d]);
      }

      jdouble ArrayRealVector::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::getSubVector(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSubVector_898f26b9327f192e], a0, a1));
      }

      jint ArrayRealVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      jboolean ArrayRealVector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
      }

      jboolean ArrayRealVector::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
      }

      ArrayRealVector ArrayRealVector::map(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_map_a6fda0c2218c2046], a0.this$));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapAddToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_247afd2de476d613], a0));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapDivideToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_247afd2de476d613], a0));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapMultiplyToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_247afd2de476d613], a0));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapSubtractToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_247afd2de476d613], a0));
      }

      ArrayRealVector ArrayRealVector::mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_mapToSelf_a6fda0c2218c2046], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix ArrayRealVector::outerProduct(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_d91077830a593cbe], a0.this$));
      }

      void ArrayRealVector::set(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_77e0f9a1f260e2e5], a0);
      }

      void ArrayRealVector::setEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_987a5fb872043b12], a0, a1);
      }

      void ArrayRealVector::setSubVector(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_7d4f41c65056f174], a0, a1.this$);
      }

      void ArrayRealVector::setSubVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_dcd0f7fda5e9451c], a0, a1.this$);
      }

      ArrayRealVector ArrayRealVector::subtract(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_subtract_814fde753e05ba41], a0.this$));
      }

      JArray< jdouble > ArrayRealVector::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_7cdc325af0834901]));
      }

      ::java::lang::String ArrayRealVector::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_f936e3f5b1c1be24], a0.this$);
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_87c5a5041dad7333], a0.this$);
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_295a71e39a8e7bf3], a0.this$, a1, a2);
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_5e84f8a04ec8e2fa], a0.this$, a1, a2);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_f936e3f5b1c1be24], a0.this$);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_87c5a5041dad7333], a0.this$);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_295a71e39a8e7bf3], a0.this$, a1, a2);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_5e84f8a04ec8e2fa], a0.this$, a1, a2);
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
      static PyObject *t_ArrayRealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArrayRealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ArrayRealVector_init_(t_ArrayRealVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ArrayRealVector_add(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_addToEntry(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_append(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_combine(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_combineToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_copy(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_dotProduct(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_ebeDivide(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_ebeMultiply(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_equals(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getDataRef(t_ArrayRealVector *self);
      static PyObject *t_ArrayRealVector_getDimension(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getDistance(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getEntry(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getL1Distance(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getL1Norm(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getLInfDistance(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getLInfNorm(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getNorm(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getSubVector(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_hashCode(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_isInfinite(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_isNaN(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_map(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapAddToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapDivideToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapMultiplyToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapSubtractToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_outerProduct(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_set(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_setEntry(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_setSubVector(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_subtract(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_toArray(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_toString(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_walkInDefaultOrder(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_walkInOptimizedOrder(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_get__dataRef(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__dimension(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__infinite(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__l1Norm(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__lInfNorm(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__naN(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__norm(t_ArrayRealVector *self, void *data);
      static PyGetSetDef t_ArrayRealVector__fields_[] = {
        DECLARE_GET_FIELD(t_ArrayRealVector, dataRef),
        DECLARE_GET_FIELD(t_ArrayRealVector, dimension),
        DECLARE_GET_FIELD(t_ArrayRealVector, infinite),
        DECLARE_GET_FIELD(t_ArrayRealVector, l1Norm),
        DECLARE_GET_FIELD(t_ArrayRealVector, lInfNorm),
        DECLARE_GET_FIELD(t_ArrayRealVector, naN),
        DECLARE_GET_FIELD(t_ArrayRealVector, norm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ArrayRealVector__methods_[] = {
        DECLARE_METHOD(t_ArrayRealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayRealVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayRealVector, add, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, append, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, combine, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, combineToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, copy, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, dotProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, ebeDivide, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, ebeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_ArrayRealVector, getDimension, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getDistance, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getL1Distance, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getL1Norm, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getLInfDistance, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getLInfNorm, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getNorm, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, isInfinite, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, isNaN, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, map, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapAddToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapDivideToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapMultiplyToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapSubtractToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, outerProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, set, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, toArray, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, toString, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ArrayRealVector)[] = {
        { Py_tp_methods, t_ArrayRealVector__methods_ },
        { Py_tp_init, (void *) t_ArrayRealVector_init_ },
        { Py_tp_getset, t_ArrayRealVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ArrayRealVector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::RealVector),
        NULL
      };

      DEFINE_TYPE(ArrayRealVector, t_ArrayRealVector, ArrayRealVector);

      void t_ArrayRealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(ArrayRealVector), &PY_TYPE_DEF(ArrayRealVector), module, "ArrayRealVector", 0);
      }

      void t_ArrayRealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayRealVector), "class_", make_descriptor(ArrayRealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayRealVector), "wrapfn_", make_descriptor(t_ArrayRealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayRealVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ArrayRealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ArrayRealVector::initializeClass, 1)))
          return NULL;
        return t_ArrayRealVector::wrap_Object(ArrayRealVector(((t_ArrayRealVector *) arg)->object.this$));
      }
      static PyObject *t_ArrayRealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ArrayRealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ArrayRealVector_init_(t_ArrayRealVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ArrayRealVector object((jobject) NULL);

            INT_CALL(object = ArrayRealVector());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[O", ::java::lang::PY_TYPE(Double), &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ArrayRealVector a0((jobject) NULL);
            ArrayRealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kk", ArrayRealVector::initializeClass, ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayRealVector a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "k[D", ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            ArrayRealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[Dk", ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayRealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kk", ArrayRealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ArrayRealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayRealVector a0((jobject) NULL);
            jboolean a1;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kZ", ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            jboolean a1;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[DZ", &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              INT_CALL(object = ArrayRealVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            jint a1;
            jint a2;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[OII", ::java::lang::PY_TYPE(Double), &a0, &a1, &a2))
            {
              INT_CALL(object = ArrayRealVector(a0, a1, a2));
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

      static PyObject *t_ArrayRealVector_add(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_ArrayRealVector_addToEntry(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_ArrayRealVector_append(t_ArrayRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayRealVector a0((jobject) NULL);
            ArrayRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ArrayRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_ArrayRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "append", args, 2);
      }

      static PyObject *t_ArrayRealVector_combine(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combine(a0, a1, a2));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "combine", args, 2);
      }

      static PyObject *t_ArrayRealVector_combineToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combineToSelf(a0, a1, a2));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "combineToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_copy(t_ArrayRealVector *self, PyObject *args)
      {
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_ArrayRealVector_dotProduct(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "dotProduct", args, 2);
      }

      static PyObject *t_ArrayRealVector_ebeDivide(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "ebeDivide", args, 2);
      }

      static PyObject *t_ArrayRealVector_ebeMultiply(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "ebeMultiply", args, 2);
      }

      static PyObject *t_ArrayRealVector_equals(t_ArrayRealVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ArrayRealVector_getDataRef(t_ArrayRealVector *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return result.wrap();
      }

      static PyObject *t_ArrayRealVector_getDimension(t_ArrayRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getDimension", args, 2);
      }

      static PyObject *t_ArrayRealVector_getDistance(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getDistance", args, 2);
      }

      static PyObject *t_ArrayRealVector_getEntry(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_ArrayRealVector_getL1Distance(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getL1Distance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getL1Distance", args, 2);
      }

      static PyObject *t_ArrayRealVector_getL1Norm(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getL1Norm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getL1Norm", args, 2);
      }

      static PyObject *t_ArrayRealVector_getLInfDistance(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLInfDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getLInfDistance", args, 2);
      }

      static PyObject *t_ArrayRealVector_getLInfNorm(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLInfNorm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getLInfNorm", args, 2);
      }

      static PyObject *t_ArrayRealVector_getNorm(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNorm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getNorm", args, 2);
      }

      static PyObject *t_ArrayRealVector_getSubVector(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getSubVector", args, 2);
      }

      static PyObject *t_ArrayRealVector_hashCode(t_ArrayRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ArrayRealVector_isInfinite(t_ArrayRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isInfinite());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "isInfinite", args, 2);
      }

      static PyObject *t_ArrayRealVector_isNaN(t_ArrayRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isNaN());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "isNaN", args, 2);
      }

      static PyObject *t_ArrayRealVector_map(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.map(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "map", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapAddToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapAddToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapDivideToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapDivideToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapMultiplyToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapMultiplyToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapSubtractToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapSubtractToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.mapToSelf(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_outerProduct(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.outerProduct(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "outerProduct", args, 2);
      }

      static PyObject *t_ArrayRealVector_set(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "set", args, 2);
      }

      static PyObject *t_ArrayRealVector_setEntry(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_ArrayRealVector_setSubVector(t_ArrayRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            JArray< jdouble > a1((jobject) NULL);

            if (!parseArgs(args, "I[D", &a0, &a1))
            {
              OBJ_CALL(self->object.setSubVector(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setSubVector(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "setSubVector", args, 2);
      }

      static PyObject *t_ArrayRealVector_subtract(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_ArrayRealVector_toArray(t_ArrayRealVector *self, PyObject *args)
      {
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toArray());
          return result.wrap();
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "toArray", args, 2);
      }

      static PyObject *t_ArrayRealVector_toString(t_ArrayRealVector *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_ArrayRealVector_walkInDefaultOrder(t_ArrayRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "walkInDefaultOrder", args, 2);
      }

      static PyObject *t_ArrayRealVector_walkInOptimizedOrder(t_ArrayRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "walkInOptimizedOrder", args, 2);
      }

      static PyObject *t_ArrayRealVector_get__dataRef(t_ArrayRealVector *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return value.wrap();
      }

      static PyObject *t_ArrayRealVector_get__dimension(t_ArrayRealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ArrayRealVector_get__infinite(t_ArrayRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_ArrayRealVector_get__l1Norm(t_ArrayRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getL1Norm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ArrayRealVector_get__lInfNorm(t_ArrayRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLInfNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ArrayRealVector_get__naN(t_ArrayRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_ArrayRealVector_get__norm(t_ArrayRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Incrementor$MaxCountExceededCallback::class$ = NULL;
      jmethodID *Incrementor$MaxCountExceededCallback::mids$ = NULL;
      bool Incrementor$MaxCountExceededCallback::live$ = false;

      jclass Incrementor$MaxCountExceededCallback::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Incrementor$MaxCountExceededCallback");

          mids$ = new jmethodID[max_mid];
          mids$[mid_trigger_0a2a1ac2721c0336] = env->getMethodID(cls, "trigger", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void Incrementor$MaxCountExceededCallback::trigger(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_trigger_0a2a1ac2721c0336], a0);
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
      static PyObject *t_Incrementor$MaxCountExceededCallback_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Incrementor$MaxCountExceededCallback_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Incrementor$MaxCountExceededCallback_trigger(t_Incrementor$MaxCountExceededCallback *self, PyObject *arg);

      static PyMethodDef t_Incrementor$MaxCountExceededCallback__methods_[] = {
        DECLARE_METHOD(t_Incrementor$MaxCountExceededCallback, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor$MaxCountExceededCallback, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor$MaxCountExceededCallback, trigger, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Incrementor$MaxCountExceededCallback)[] = {
        { Py_tp_methods, t_Incrementor$MaxCountExceededCallback__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Incrementor$MaxCountExceededCallback)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Incrementor$MaxCountExceededCallback, t_Incrementor$MaxCountExceededCallback, Incrementor$MaxCountExceededCallback);

      void t_Incrementor$MaxCountExceededCallback::install(PyObject *module)
      {
        installType(&PY_TYPE(Incrementor$MaxCountExceededCallback), &PY_TYPE_DEF(Incrementor$MaxCountExceededCallback), module, "Incrementor$MaxCountExceededCallback", 0);
      }

      void t_Incrementor$MaxCountExceededCallback::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor$MaxCountExceededCallback), "class_", make_descriptor(Incrementor$MaxCountExceededCallback::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor$MaxCountExceededCallback), "wrapfn_", make_descriptor(t_Incrementor$MaxCountExceededCallback::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor$MaxCountExceededCallback), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Incrementor$MaxCountExceededCallback_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Incrementor$MaxCountExceededCallback::initializeClass, 1)))
          return NULL;
        return t_Incrementor$MaxCountExceededCallback::wrap_Object(Incrementor$MaxCountExceededCallback(((t_Incrementor$MaxCountExceededCallback *) arg)->object.this$));
      }
      static PyObject *t_Incrementor$MaxCountExceededCallback_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Incrementor$MaxCountExceededCallback::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Incrementor$MaxCountExceededCallback_trigger(t_Incrementor$MaxCountExceededCallback *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.trigger(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "trigger", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Euclidean1D::class$ = NULL;
          jmethodID *Euclidean1D::mids$ = NULL;
          bool Euclidean1D::live$ = false;

          jclass Euclidean1D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Euclidean1D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_14585c1b88a8af3b] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/euclidean/oned/Euclidean1D;");
              mids$[mid_getSubSpace_0438ef5f9a5edb53] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/Space;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint Euclidean1D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
          }

          Euclidean1D Euclidean1D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Euclidean1D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_14585c1b88a8af3b]));
          }

          ::org::hipparchus::geometry::Space Euclidean1D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSubSpace_0438ef5f9a5edb53]));
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
        namespace oned {
          static PyObject *t_Euclidean1D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean1D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean1D_getDimension(t_Euclidean1D *self);
          static PyObject *t_Euclidean1D_getInstance(PyTypeObject *type);
          static PyObject *t_Euclidean1D_getSubSpace(t_Euclidean1D *self);
          static PyObject *t_Euclidean1D_get__dimension(t_Euclidean1D *self, void *data);
          static PyObject *t_Euclidean1D_get__instance(t_Euclidean1D *self, void *data);
          static PyObject *t_Euclidean1D_get__subSpace(t_Euclidean1D *self, void *data);
          static PyGetSetDef t_Euclidean1D__fields_[] = {
            DECLARE_GET_FIELD(t_Euclidean1D, dimension),
            DECLARE_GET_FIELD(t_Euclidean1D, instance),
            DECLARE_GET_FIELD(t_Euclidean1D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Euclidean1D__methods_[] = {
            DECLARE_METHOD(t_Euclidean1D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Euclidean1D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean1D)[] = {
            { Py_tp_methods, t_Euclidean1D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Euclidean1D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean1D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Euclidean1D, t_Euclidean1D, Euclidean1D);

          void t_Euclidean1D::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean1D), &PY_TYPE_DEF(Euclidean1D), module, "Euclidean1D", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "NoSubSpaceException", make_descriptor(&PY_TYPE_DEF(Euclidean1D$NoSubSpaceException)));
          }

          void t_Euclidean1D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "class_", make_descriptor(Euclidean1D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "wrapfn_", make_descriptor(t_Euclidean1D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean1D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean1D::initializeClass, 1)))
              return NULL;
            return t_Euclidean1D::wrap_Object(Euclidean1D(((t_Euclidean1D *) arg)->object.this$));
          }
          static PyObject *t_Euclidean1D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean1D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Euclidean1D_getDimension(t_Euclidean1D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Euclidean1D_getInstance(PyTypeObject *type)
          {
            Euclidean1D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Euclidean1D::getInstance());
            return t_Euclidean1D::wrap_Object(result);
          }

          static PyObject *t_Euclidean1D_getSubSpace(t_Euclidean1D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Euclidean1D_get__dimension(t_Euclidean1D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Euclidean1D_get__instance(t_Euclidean1D *self, void *data)
          {
            Euclidean1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Euclidean1D::wrap_Object(value);
          }

          static PyObject *t_Euclidean1D_get__subSpace(t_Euclidean1D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDifferentiableVectorFunction::class$ = NULL;
        jmethodID *UnivariateDifferentiableVectorFunction::mids$ = NULL;
        bool UnivariateDifferentiableVectorFunction::live$ = false;

        jclass UnivariateDifferentiableVectorFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_8db78ffbf68761e3] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)[Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > UnivariateDifferentiableVectorFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_value_8db78ffbf68761e3], a0.this$));
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
        static PyObject *t_UnivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableVectorFunction_value(t_UnivariateDifferentiableVectorFunction *self, PyObject *args);

        static PyMethodDef t_UnivariateDifferentiableVectorFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableVectorFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableVectorFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableVectorFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableVectorFunction)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableVectorFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableVectorFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::UnivariateVectorFunction),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableVectorFunction, t_UnivariateDifferentiableVectorFunction, UnivariateDifferentiableVectorFunction);

        void t_UnivariateDifferentiableVectorFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableVectorFunction), &PY_TYPE_DEF(UnivariateDifferentiableVectorFunction), module, "UnivariateDifferentiableVectorFunction", 0);
        }

        void t_UnivariateDifferentiableVectorFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableVectorFunction), "class_", make_descriptor(UnivariateDifferentiableVectorFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableVectorFunction), "wrapfn_", make_descriptor(t_UnivariateDifferentiableVectorFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableVectorFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableVectorFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableVectorFunction::wrap_Object(UnivariateDifferentiableVectorFunction(((t_UnivariateDifferentiableVectorFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableVectorFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDifferentiableVectorFunction_value(t_UnivariateDifferentiableVectorFunction *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
          }

          return callSuper(PY_TYPE(UnivariateDifferentiableVectorFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/PythonJB2008InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonJB2008InputParameters::class$ = NULL;
          jmethodID *PythonJB2008InputParameters::mids$ = NULL;
          bool PythonJB2008InputParameters::live$ = false;

          jclass PythonJB2008InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonJB2008InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getDSTDTC_e912d21057defe63] = env->getMethodID(cls, "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10_e912d21057defe63] = env->getMethodID(cls, "getF10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10B_e912d21057defe63] = env->getMethodID(cls, "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getS10_e912d21057defe63] = env->getMethodID(cls, "getS10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getS10B_e912d21057defe63] = env->getMethodID(cls, "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10_e912d21057defe63] = env->getMethodID(cls, "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10B_e912d21057defe63] = env->getMethodID(cls, "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10_e912d21057defe63] = env->getMethodID(cls, "getY10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10B_e912d21057defe63] = env->getMethodID(cls, "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonJB2008InputParameters::PythonJB2008InputParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonJB2008InputParameters::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonJB2008InputParameters::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonJB2008InputParameters::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonJB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonJB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonJB2008InputParameters_init_(t_PythonJB2008InputParameters *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonJB2008InputParameters_finalize(t_PythonJB2008InputParameters *self);
          static PyObject *t_PythonJB2008InputParameters_pythonExtension(t_PythonJB2008InputParameters *self, PyObject *args);
          static jdouble JNICALL t_PythonJB2008InputParameters_getDSTDTC0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getF101(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getF10B2(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonJB2008InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonJB2008InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonJB2008InputParameters_getS105(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getS10B6(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getXM107(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getXM10B8(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getY109(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getY10B10(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonJB2008InputParameters_pythonDecRef11(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonJB2008InputParameters_get__self(t_PythonJB2008InputParameters *self, void *data);
          static PyGetSetDef t_PythonJB2008InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_PythonJB2008InputParameters, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonJB2008InputParameters__methods_[] = {
            DECLARE_METHOD(t_PythonJB2008InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonJB2008InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonJB2008InputParameters, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonJB2008InputParameters, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonJB2008InputParameters)[] = {
            { Py_tp_methods, t_PythonJB2008InputParameters__methods_ },
            { Py_tp_init, (void *) t_PythonJB2008InputParameters_init_ },
            { Py_tp_getset, t_PythonJB2008InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonJB2008InputParameters)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonJB2008InputParameters, t_PythonJB2008InputParameters, PythonJB2008InputParameters);

          void t_PythonJB2008InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonJB2008InputParameters), &PY_TYPE_DEF(PythonJB2008InputParameters), module, "PythonJB2008InputParameters", 1);
          }

          void t_PythonJB2008InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJB2008InputParameters), "class_", make_descriptor(PythonJB2008InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJB2008InputParameters), "wrapfn_", make_descriptor(t_PythonJB2008InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJB2008InputParameters), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonJB2008InputParameters::initializeClass);
            JNINativeMethod methods[] = {
              { "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getDSTDTC0 },
              { "getF10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getF101 },
              { "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getF10B2 },
              { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonJB2008InputParameters_getMaxDate3 },
              { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonJB2008InputParameters_getMinDate4 },
              { "getS10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getS105 },
              { "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getS10B6 },
              { "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getXM107 },
              { "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getXM10B8 },
              { "getY10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getY109 },
              { "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getY10B10 },
              { "pythonDecRef", "()V", (void *) t_PythonJB2008InputParameters_pythonDecRef11 },
            };
            env->registerNatives(cls, methods, 12);
          }

          static PyObject *t_PythonJB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonJB2008InputParameters::initializeClass, 1)))
              return NULL;
            return t_PythonJB2008InputParameters::wrap_Object(PythonJB2008InputParameters(((t_PythonJB2008InputParameters *) arg)->object.this$));
          }
          static PyObject *t_PythonJB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonJB2008InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonJB2008InputParameters_init_(t_PythonJB2008InputParameters *self, PyObject *args, PyObject *kwds)
          {
            PythonJB2008InputParameters object((jobject) NULL);

            INT_CALL(object = PythonJB2008InputParameters());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonJB2008InputParameters_finalize(t_PythonJB2008InputParameters *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonJB2008InputParameters_pythonExtension(t_PythonJB2008InputParameters *self, PyObject *args)
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

          static jdouble JNICALL t_PythonJB2008InputParameters_getDSTDTC0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getDSTDTC", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getDSTDTC", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getF101(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getF10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getF10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getF10B2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getF10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getF10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonJB2008InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
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

          static jobject JNICALL t_PythonJB2008InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
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

          static jdouble JNICALL t_PythonJB2008InputParameters_getS105(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getS10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getS10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getS10B6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getS10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getS10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getXM107(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getXM10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getXM10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getXM10B8(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getXM10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getXM10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getY109(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getY10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getY10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getY10B10(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getY10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getY10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonJB2008InputParameters_pythonDecRef11(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonJB2008InputParameters_get__self(t_PythonJB2008InputParameters *self, void *data)
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
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *MathRuntimeException::class$ = NULL;
      jmethodID *MathRuntimeException::mids$ = NULL;
      bool MathRuntimeException::live$ = false;

      jclass MathRuntimeException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/MathRuntimeException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3d6784947cb48668] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_ca997976b075d32c] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_createInternalError_61b3f4688c42a21e] = env->getStaticMethodID(cls, "createInternalError", "()Lorg/hipparchus/exception/MathRuntimeException;");
          mids$[mid_createInternalError_8397aefd85298b7b] = env->getStaticMethodID(cls, "createInternalError", "(Ljava/lang/Throwable;)Lorg/hipparchus/exception/MathRuntimeException;");
          mids$[mid_getLocalizedMessage_0090f7797e403f43] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_0090f7797e403f43] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_bab3be9b232acc5a] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_e81d7907eea7e008] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_2e589a53386da289] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathRuntimeException::MathRuntimeException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_3d6784947cb48668, a0.this$, a1.this$)) {}

      MathRuntimeException::MathRuntimeException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ca997976b075d32c, a0.this$, a1.this$, a2.this$)) {}

      MathRuntimeException MathRuntimeException::createInternalError()
      {
        jclass cls = env->getClass(initializeClass);
        return MathRuntimeException(env->callStaticObjectMethod(cls, mids$[mid_createInternalError_61b3f4688c42a21e]));
      }

      MathRuntimeException MathRuntimeException::createInternalError(const ::java::lang::Throwable & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MathRuntimeException(env->callStaticObjectMethod(cls, mids$[mid_createInternalError_8397aefd85298b7b], a0.this$));
      }

      ::java::lang::String MathRuntimeException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_0090f7797e403f43]));
      }

      ::java::lang::String MathRuntimeException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_0090f7797e403f43]));
      }

      ::java::lang::String MathRuntimeException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_bab3be9b232acc5a], a0.this$));
      }

      JArray< ::java::lang::Object > MathRuntimeException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_e81d7907eea7e008]));
      }

      ::org::hipparchus::exception::Localizable MathRuntimeException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_2e589a53386da289]));
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
      static PyObject *t_MathRuntimeException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathRuntimeException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MathRuntimeException_init_(t_MathRuntimeException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MathRuntimeException_createInternalError(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathRuntimeException_getLocalizedMessage(t_MathRuntimeException *self, PyObject *args);
      static PyObject *t_MathRuntimeException_getMessage(t_MathRuntimeException *self, PyObject *args);
      static PyObject *t_MathRuntimeException_getParts(t_MathRuntimeException *self);
      static PyObject *t_MathRuntimeException_getSpecifier(t_MathRuntimeException *self);
      static PyObject *t_MathRuntimeException_get__localizedMessage(t_MathRuntimeException *self, void *data);
      static PyObject *t_MathRuntimeException_get__message(t_MathRuntimeException *self, void *data);
      static PyObject *t_MathRuntimeException_get__parts(t_MathRuntimeException *self, void *data);
      static PyObject *t_MathRuntimeException_get__specifier(t_MathRuntimeException *self, void *data);
      static PyGetSetDef t_MathRuntimeException__fields_[] = {
        DECLARE_GET_FIELD(t_MathRuntimeException, localizedMessage),
        DECLARE_GET_FIELD(t_MathRuntimeException, message),
        DECLARE_GET_FIELD(t_MathRuntimeException, parts),
        DECLARE_GET_FIELD(t_MathRuntimeException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathRuntimeException__methods_[] = {
        DECLARE_METHOD(t_MathRuntimeException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathRuntimeException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathRuntimeException, createInternalError, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathRuntimeException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_MathRuntimeException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_MathRuntimeException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_MathRuntimeException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathRuntimeException)[] = {
        { Py_tp_methods, t_MathRuntimeException__methods_ },
        { Py_tp_init, (void *) t_MathRuntimeException_init_ },
        { Py_tp_getset, t_MathRuntimeException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathRuntimeException)[] = {
        &PY_TYPE_DEF(::java::lang::RuntimeException),
        NULL
      };

      DEFINE_TYPE(MathRuntimeException, t_MathRuntimeException, MathRuntimeException);

      void t_MathRuntimeException::install(PyObject *module)
      {
        installType(&PY_TYPE(MathRuntimeException), &PY_TYPE_DEF(MathRuntimeException), module, "MathRuntimeException", 0);
      }

      void t_MathRuntimeException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathRuntimeException), "class_", make_descriptor(MathRuntimeException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathRuntimeException), "wrapfn_", make_descriptor(t_MathRuntimeException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathRuntimeException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathRuntimeException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathRuntimeException::initializeClass, 1)))
          return NULL;
        return t_MathRuntimeException::wrap_Object(MathRuntimeException(((t_MathRuntimeException *) arg)->object.this$));
      }
      static PyObject *t_MathRuntimeException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathRuntimeException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MathRuntimeException_init_(t_MathRuntimeException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            MathRuntimeException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = MathRuntimeException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            MathRuntimeException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MathRuntimeException(a0, a1, a2));
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

      static PyObject *t_MathRuntimeException_createInternalError(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            MathRuntimeException result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::exception::MathRuntimeException::createInternalError());
            return t_MathRuntimeException::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            MathRuntimeException result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::exception::MathRuntimeException::createInternalError(a0));
              return t_MathRuntimeException::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createInternalError", args);
        return NULL;
      }

      static PyObject *t_MathRuntimeException_getLocalizedMessage(t_MathRuntimeException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(MathRuntimeException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_MathRuntimeException_getMessage(t_MathRuntimeException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(MathRuntimeException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_MathRuntimeException_getParts(t_MathRuntimeException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_MathRuntimeException_getSpecifier(t_MathRuntimeException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_MathRuntimeException_get__localizedMessage(t_MathRuntimeException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_MathRuntimeException_get__message(t_MathRuntimeException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_MathRuntimeException_get__parts(t_MathRuntimeException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_MathRuntimeException_get__specifier(t_MathRuntimeException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/legendre/LegendreEllipticIntegral.h"
#include "org/hipparchus/complex/ComplexUnivariateIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/complex/FieldComplexUnivariateIntegrator.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace legendre {

          ::java::lang::Class *LegendreEllipticIntegral::class$ = NULL;
          jmethodID *LegendreEllipticIntegral::mids$ = NULL;
          bool LegendreEllipticIntegral::live$ = false;

          jclass LegendreEllipticIntegral::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/legendre/LegendreEllipticIntegral");

              mids$ = new jmethodID[max_mid];
              mids$[mid_bigD_b074c62aaddfbbb2] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigD_e335ffa535ec807c] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigD_0ba5fed9597b693e] = env->getStaticMethodID(cls, "bigD", "(D)D");
              mids$[mid_bigD_d3398190482814dc] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigD_b90fd2ae3b76ce9e] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigD_85c7af728c9b8762] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigD_824133ce4aec3505] = env->getStaticMethodID(cls, "bigD", "(DD)D");
              mids$[mid_bigD_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigE_b074c62aaddfbbb2] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigE_e335ffa535ec807c] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigE_0ba5fed9597b693e] = env->getStaticMethodID(cls, "bigE", "(D)D");
              mids$[mid_bigE_d3398190482814dc] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigE_b90fd2ae3b76ce9e] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigE_85c7af728c9b8762] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigE_824133ce4aec3505] = env->getStaticMethodID(cls, "bigE", "(DD)D");
              mids$[mid_bigE_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigE_0376628ef9b6ae64] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/ComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigE_77a479c0e43a7d9d] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigF_b90fd2ae3b76ce9e] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigF_85c7af728c9b8762] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigF_824133ce4aec3505] = env->getStaticMethodID(cls, "bigF", "(DD)D");
              mids$[mid_bigF_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigF_0376628ef9b6ae64] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/ComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigF_77a479c0e43a7d9d] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigK_b074c62aaddfbbb2] = env->getStaticMethodID(cls, "bigK", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigK_e335ffa535ec807c] = env->getStaticMethodID(cls, "bigK", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigK_0ba5fed9597b693e] = env->getStaticMethodID(cls, "bigK", "(D)D");
              mids$[mid_bigK_d3398190482814dc] = env->getStaticMethodID(cls, "bigK", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigKPrime_b074c62aaddfbbb2] = env->getStaticMethodID(cls, "bigKPrime", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigKPrime_e335ffa535ec807c] = env->getStaticMethodID(cls, "bigKPrime", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigKPrime_0ba5fed9597b693e] = env->getStaticMethodID(cls, "bigKPrime", "(D)D");
              mids$[mid_bigKPrime_d3398190482814dc] = env->getStaticMethodID(cls, "bigKPrime", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigPi_b90fd2ae3b76ce9e] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigPi_85c7af728c9b8762] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigPi_824133ce4aec3505] = env->getStaticMethodID(cls, "bigPi", "(DD)D");
              mids$[mid_bigPi_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigPi_8713168363f00e29] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigPi_391473110206afe5] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigPi_c564d6ace53a5934] = env->getStaticMethodID(cls, "bigPi", "(DDD)D");
              mids$[mid_bigPi_f56548599899c286] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigPi_6f222436ba8518b8] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/ComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigPi_0fa1f139db9bfc8a] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_nome_0ba5fed9597b693e] = env->getStaticMethodID(cls, "nome", "(D)D");
              mids$[mid_nome_d3398190482814dc] = env->getStaticMethodID(cls, "nome", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigD_b074c62aaddfbbb2], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigD_e335ffa535ec807c], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigD(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigD_0ba5fed9597b693e], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigD(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigD_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigD_b90fd2ae3b76ce9e], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigD_85c7af728c9b8762], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigD(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigD_824133ce4aec3505], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigD(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigD_75c7ce7d33e7324b], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigE_b074c62aaddfbbb2], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigE_e335ffa535ec807c], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigE(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigE_0ba5fed9597b693e], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigE(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigE_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigE_b90fd2ae3b76ce9e], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigE_85c7af728c9b8762], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigE(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigE_824133ce4aec3505], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigE(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigE_75c7ce7d33e7324b], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::ComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigE_0376628ef9b6ae64], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigE_77a479c0e43a7d9d], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigF_b90fd2ae3b76ce9e], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigF_85c7af728c9b8762], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigF(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigF_824133ce4aec3505], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigF(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigF_75c7ce7d33e7324b], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::ComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigF_0376628ef9b6ae64], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigF_77a479c0e43a7d9d], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigK(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigK_b074c62aaddfbbb2], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigK(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigK_e335ffa535ec807c], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigK(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigK_0ba5fed9597b693e], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigK(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigK_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigKPrime(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigKPrime_b074c62aaddfbbb2], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigKPrime(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigKPrime_e335ffa535ec807c], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigKPrime(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigKPrime_0ba5fed9597b693e], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigKPrime(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigKPrime_d3398190482814dc], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_b90fd2ae3b76ce9e], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_85c7af728c9b8762], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigPi(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigPi_824133ce4aec3505], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigPi(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigPi_75c7ce7d33e7324b], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_8713168363f00e29], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_391473110206afe5], a0.this$, a1.this$, a2.this$));
          }

          jdouble LegendreEllipticIntegral::bigPi(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigPi_c564d6ace53a5934], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigPi(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigPi_f56548599899c286], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::ComplexUnivariateIntegrator & a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_6f222436ba8518b8], a0.this$, a1.this$, a2.this$, a3.this$, a4));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator & a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_0fa1f139db9bfc8a], a0.this$, a1.this$, a2.this$, a3.this$, a4));
          }

          jdouble LegendreEllipticIntegral::nome(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_nome_0ba5fed9597b693e], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::nome(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_nome_d3398190482814dc], a0.this$));
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
        namespace legendre {
          static PyObject *t_LegendreEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LegendreEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LegendreEllipticIntegral_bigD(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigE(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigF(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigK(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigKPrime(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigPi(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_nome(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_LegendreEllipticIntegral__methods_[] = {
            DECLARE_METHOD(t_LegendreEllipticIntegral, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigD, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigE, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigF, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigK, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigKPrime, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigPi, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, nome, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LegendreEllipticIntegral)[] = {
            { Py_tp_methods, t_LegendreEllipticIntegral__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LegendreEllipticIntegral)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LegendreEllipticIntegral, t_LegendreEllipticIntegral, LegendreEllipticIntegral);

          void t_LegendreEllipticIntegral::install(PyObject *module)
          {
            installType(&PY_TYPE(LegendreEllipticIntegral), &PY_TYPE_DEF(LegendreEllipticIntegral), module, "LegendreEllipticIntegral", 0);
          }

          void t_LegendreEllipticIntegral::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreEllipticIntegral), "class_", make_descriptor(LegendreEllipticIntegral::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreEllipticIntegral), "wrapfn_", make_descriptor(t_LegendreEllipticIntegral::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreEllipticIntegral), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LegendreEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LegendreEllipticIntegral::initializeClass, 1)))
              return NULL;
            return t_LegendreEllipticIntegral::wrap_Object(LegendreEllipticIntegral(((t_LegendreEllipticIntegral *) arg)->object.this$));
          }
          static PyObject *t_LegendreEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LegendreEllipticIntegral::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LegendreEllipticIntegral_bigD(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
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
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigD", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigE(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
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
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::ComplexUnivariateIntegrator a2((jobject) NULL);
                jint a3;
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkI", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::ComplexUnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplexUnivariateIntegrator a2((jobject) NULL);
                PyTypeObject **p2;
                jint a3;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKI", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplexUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplexUnivariateIntegrator::parameters_, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigE", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigF(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
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
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::ComplexUnivariateIntegrator a2((jobject) NULL);
                jint a3;
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkI", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::ComplexUnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplexUnivariateIntegrator a2((jobject) NULL);
                PyTypeObject **p2;
                jint a3;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKI", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplexUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplexUnivariateIntegrator::parameters_, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigF", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigK(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigK", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigKPrime(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigKPrime", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigPi(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
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
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::ComplexUnivariateIntegrator a3((jobject) NULL);
                jint a4;
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkkI", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::ComplexUnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplexUnivariateIntegrator a3((jobject) NULL);
                PyTypeObject **p3;
                jint a4;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKKI", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplexUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplexUnivariateIntegrator::parameters_, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigPi", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_nome(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::nome(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::nome(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "nome", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Patera2005.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Patera2005::class$ = NULL;
              jmethodID *Patera2005::mids$ = NULL;
              bool Patera2005::live$ = false;

              jclass Patera2005::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Patera2005");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_init$_2a367ff12676817c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/UnivariateIntegrator;I)V");
                  mids$[mid_compute_61ec0633a7b37601] = env->getMethodID(cls, "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_ddd31c5991d1fe60] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_830fb81b25fc6619] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Patera2005::Patera2005() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              Patera2005::Patera2005(const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a0, jint a1) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_2a367ff12676817c, a0.this$, a1)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Patera2005::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_61ec0633a7b37601], a0, a1, a2, a3, a4, a5.this$, a6));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Patera2005::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_ddd31c5991d1fe60], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Patera2005::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_830fb81b25fc6619]));
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
              static PyObject *t_Patera2005_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Patera2005_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Patera2005_init_(t_Patera2005 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Patera2005_compute(t_Patera2005 *self, PyObject *args);
              static PyObject *t_Patera2005_getType(t_Patera2005 *self, PyObject *args);
              static PyObject *t_Patera2005_get__type(t_Patera2005 *self, void *data);
              static PyGetSetDef t_Patera2005__fields_[] = {
                DECLARE_GET_FIELD(t_Patera2005, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Patera2005__methods_[] = {
                DECLARE_METHOD(t_Patera2005, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Patera2005, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Patera2005, compute, METH_VARARGS),
                DECLARE_METHOD(t_Patera2005, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Patera2005)[] = {
                { Py_tp_methods, t_Patera2005__methods_ },
                { Py_tp_init, (void *) t_Patera2005_init_ },
                { Py_tp_getset, t_Patera2005__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Patera2005)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Patera2005, t_Patera2005, Patera2005);

              void t_Patera2005::install(PyObject *module)
              {
                installType(&PY_TYPE(Patera2005), &PY_TYPE_DEF(Patera2005), module, "Patera2005", 0);
              }

              void t_Patera2005::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Patera2005), "class_", make_descriptor(Patera2005::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Patera2005), "wrapfn_", make_descriptor(t_Patera2005::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Patera2005), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Patera2005_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Patera2005::initializeClass, 1)))
                  return NULL;
                return t_Patera2005::wrap_Object(Patera2005(((t_Patera2005 *) arg)->object.this$));
              }
              static PyObject *t_Patera2005_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Patera2005::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Patera2005_init_(t_Patera2005 *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    Patera2005 object((jobject) NULL);

                    INT_CALL(object = Patera2005());
                    self->object = object;
                    break;
                  }
                 case 2:
                  {
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a0((jobject) NULL);
                    jint a1;
                    Patera2005 object((jobject) NULL);

                    if (!parseArgs(args, "kI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1))
                    {
                      INT_CALL(object = Patera2005(a0, a1));
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

              static PyObject *t_Patera2005_compute(t_Patera2005 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 7:
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
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a5((jobject) NULL);
                    PyTypeObject **p5;
                    jint a6;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a5((jobject) NULL);
                    jint a6;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDDkI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(Patera2005), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Patera2005_getType(t_Patera2005 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Patera2005), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Patera2005_get__type(t_Patera2005 *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/orekit/utils/PythonFieldPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonFieldPVCoordinatesProvider::class$ = NULL;
      jmethodID *PythonFieldPVCoordinatesProvider::mids$ = NULL;
      bool PythonFieldPVCoordinatesProvider::live$ = false;

      jclass PythonFieldPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonFieldPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getPVCoordinates_0e277b7d6a64b75a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldPVCoordinatesProvider::PythonFieldPVCoordinatesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonFieldPVCoordinatesProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonFieldPVCoordinatesProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonFieldPVCoordinatesProvider::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonFieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPVCoordinatesProvider_of_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args);
      static int t_PythonFieldPVCoordinatesProvider_init_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldPVCoordinatesProvider_finalize(t_PythonFieldPVCoordinatesProvider *self);
      static PyObject *t_PythonFieldPVCoordinatesProvider_pythonExtension(t_PythonFieldPVCoordinatesProvider *self, PyObject *args);
      static jobject JNICALL t_PythonFieldPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldPVCoordinatesProvider_get__self(t_PythonFieldPVCoordinatesProvider *self, void *data);
      static PyObject *t_PythonFieldPVCoordinatesProvider_get__parameters_(t_PythonFieldPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_PythonFieldPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldPVCoordinatesProvider, self),
        DECLARE_GET_FIELD(t_PythonFieldPVCoordinatesProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PythonFieldPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_PythonFieldPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_PythonFieldPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldPVCoordinatesProvider, t_PythonFieldPVCoordinatesProvider, PythonFieldPVCoordinatesProvider);
      PyObject *t_PythonFieldPVCoordinatesProvider::wrap_Object(const PythonFieldPVCoordinatesProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPVCoordinatesProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPVCoordinatesProvider *self = (t_PythonFieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldPVCoordinatesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPVCoordinatesProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPVCoordinatesProvider *self = (t_PythonFieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldPVCoordinatesProvider), &PY_TYPE_DEF(PythonFieldPVCoordinatesProvider), module, "PythonFieldPVCoordinatesProvider", 1);
      }

      void t_PythonFieldPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPVCoordinatesProvider), "class_", make_descriptor(PythonFieldPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPVCoordinatesProvider), "wrapfn_", make_descriptor(t_PythonFieldPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldPVCoordinatesProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonFieldPVCoordinatesProvider_getPVCoordinates0 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldPVCoordinatesProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PythonFieldPVCoordinatesProvider::wrap_Object(PythonFieldPVCoordinatesProvider(((t_PythonFieldPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_of_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldPVCoordinatesProvider_init_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldPVCoordinatesProvider object((jobject) NULL);

        INT_CALL(object = PythonFieldPVCoordinatesProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_finalize(t_PythonFieldPVCoordinatesProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_pythonExtension(t_PythonFieldPVCoordinatesProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPVCoordinatesProvider::mids$[PythonFieldPVCoordinatesProvider::mid_pythonExtension_a27fc9afd27e559d]);
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

      static void JNICALL t_PythonFieldPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPVCoordinatesProvider::mids$[PythonFieldPVCoordinatesProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldPVCoordinatesProvider::mids$[PythonFieldPVCoordinatesProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_get__self(t_PythonFieldPVCoordinatesProvider *self, void *data)
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
      static PyObject *t_PythonFieldPVCoordinatesProvider_get__parameters_(t_PythonFieldPVCoordinatesProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmMetadata::class$ = NULL;
              jmethodID *OmmMetadata::mids$ = NULL;
              bool OmmMetadata::live$ = false;
              ::java::lang::String *OmmMetadata::DSST_THEORY = NULL;
              ::java::lang::String *OmmMetadata::SGP4_XP_THEORY = NULL;
              ::java::lang::String *OmmMetadata::SGP_SGP4_THEORY = NULL;

              jclass OmmMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getMeanElementTheory_0090f7797e403f43] = env->getMethodID(cls, "getMeanElementTheory", "()Ljava/lang/String;");
                  mids$[mid_setMeanElementTheory_e939c6558ae8d313] = env->getMethodID(cls, "setMeanElementTheory", "(Ljava/lang/String;)V");
                  mids$[mid_theoryIsSgpSdp_e470b6d9e0d979db] = env->getMethodID(cls, "theoryIsSgpSdp", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DSST_THEORY = new ::java::lang::String(env->getStaticObjectField(cls, "DSST_THEORY", "Ljava/lang/String;"));
                  SGP4_XP_THEORY = new ::java::lang::String(env->getStaticObjectField(cls, "SGP4_XP_THEORY", "Ljava/lang/String;"));
                  SGP_SGP4_THEORY = new ::java::lang::String(env->getStaticObjectField(cls, "SGP_SGP4_THEORY", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmMetadata::OmmMetadata() : ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::java::lang::String OmmMetadata::getMeanElementTheory() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMeanElementTheory_0090f7797e403f43]));
              }

              void OmmMetadata::setMeanElementTheory(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMeanElementTheory_e939c6558ae8d313], a0.this$);
              }

              jboolean OmmMetadata::theoryIsSgpSdp() const
              {
                return env->callBooleanMethod(this$, mids$[mid_theoryIsSgpSdp_e470b6d9e0d979db]);
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
              static PyObject *t_OmmMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OmmMetadata_init_(t_OmmMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmMetadata_getMeanElementTheory(t_OmmMetadata *self);
              static PyObject *t_OmmMetadata_setMeanElementTheory(t_OmmMetadata *self, PyObject *arg);
              static PyObject *t_OmmMetadata_theoryIsSgpSdp(t_OmmMetadata *self);
              static PyObject *t_OmmMetadata_get__meanElementTheory(t_OmmMetadata *self, void *data);
              static int t_OmmMetadata_set__meanElementTheory(t_OmmMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OmmMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OmmMetadata, meanElementTheory),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmMetadata__methods_[] = {
                DECLARE_METHOD(t_OmmMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadata, getMeanElementTheory, METH_NOARGS),
                DECLARE_METHOD(t_OmmMetadata, setMeanElementTheory, METH_O),
                DECLARE_METHOD(t_OmmMetadata, theoryIsSgpSdp, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmMetadata)[] = {
                { Py_tp_methods, t_OmmMetadata__methods_ },
                { Py_tp_init, (void *) t_OmmMetadata_init_ },
                { Py_tp_getset, t_OmmMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata),
                NULL
              };

              DEFINE_TYPE(OmmMetadata, t_OmmMetadata, OmmMetadata);

              void t_OmmMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmMetadata), &PY_TYPE_DEF(OmmMetadata), module, "OmmMetadata", 0);
              }

              void t_OmmMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "class_", make_descriptor(OmmMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "wrapfn_", make_descriptor(t_OmmMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "DSST_THEORY", make_descriptor(j2p(*OmmMetadata::DSST_THEORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "SGP4_XP_THEORY", make_descriptor(j2p(*OmmMetadata::SGP4_XP_THEORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "SGP_SGP4_THEORY", make_descriptor(j2p(*OmmMetadata::SGP_SGP4_THEORY)));
              }

              static PyObject *t_OmmMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmMetadata::initializeClass, 1)))
                  return NULL;
                return t_OmmMetadata::wrap_Object(OmmMetadata(((t_OmmMetadata *) arg)->object.this$));
              }
              static PyObject *t_OmmMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OmmMetadata_init_(t_OmmMetadata *self, PyObject *args, PyObject *kwds)
              {
                OmmMetadata object((jobject) NULL);

                INT_CALL(object = OmmMetadata());
                self->object = object;

                return 0;
              }

              static PyObject *t_OmmMetadata_getMeanElementTheory(t_OmmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getMeanElementTheory());
                return j2p(result);
              }

              static PyObject *t_OmmMetadata_setMeanElementTheory(t_OmmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setMeanElementTheory(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMeanElementTheory", arg);
                return NULL;
              }

              static PyObject *t_OmmMetadata_theoryIsSgpSdp(t_OmmMetadata *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.theoryIsSgpSdp());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_OmmMetadata_get__meanElementTheory(t_OmmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getMeanElementTheory());
                return j2p(value);
              }
              static int t_OmmMetadata_set__meanElementTheory(t_OmmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setMeanElementTheory(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "meanElementTheory", arg);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *StreamingOcmWriter::class$ = NULL;
              jmethodID *StreamingOcmWriter::mids$ = NULL;
              bool StreamingOcmWriter::live$ = false;

              jclass StreamingOcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f7e8ebbce8addf92] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;)V");
                  mids$[mid_init$_12e8ffe840a131e2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;Z)V");
                  mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
                  mids$[mid_newBlock_a4428b3d75ed85a7] = env->getMethodID(cls, "newBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOcmWriter::StreamingOcmWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a3, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f7e8ebbce8addf92, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

              StreamingOcmWriter::StreamingOcmWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a3, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a4, jboolean a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_12e8ffe840a131e2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

              void StreamingOcmWriter::close() const
              {
                env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter StreamingOcmWriter::newBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter(env->callObjectMethod(this$, mids$[mid_newBlock_a4428b3d75ed85a7]));
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
              static PyObject *t_StreamingOcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOcmWriter_init_(t_StreamingOcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOcmWriter_close(t_StreamingOcmWriter *self);
              static PyObject *t_StreamingOcmWriter_newBlock(t_StreamingOcmWriter *self);

              static PyMethodDef t_StreamingOcmWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOcmWriter, close, METH_NOARGS),
                DECLARE_METHOD(t_StreamingOcmWriter, newBlock, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOcmWriter)[] = {
                { Py_tp_methods, t_StreamingOcmWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOcmWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOcmWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOcmWriter, t_StreamingOcmWriter, StreamingOcmWriter);

              void t_StreamingOcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOcmWriter), &PY_TYPE_DEF(StreamingOcmWriter), module, "StreamingOcmWriter", 0);
              }

              void t_StreamingOcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter), "class_", make_descriptor(StreamingOcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter), "wrapfn_", make_descriptor(t_StreamingOcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOcmWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOcmWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOcmWriter::wrap_Object(StreamingOcmWriter(((t_StreamingOcmWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOcmWriter_init_(t_StreamingOcmWriter *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a3((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a4((jobject) NULL);
                    StreamingOcmWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::parameters_, &a2, &a3, &a4))
                    {
                      INT_CALL(object = StreamingOcmWriter(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a3((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a4((jobject) NULL);
                    jboolean a5;
                    StreamingOcmWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkkZ", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::parameters_, &a2, &a3, &a4, &a5))
                    {
                      INT_CALL(object = StreamingOcmWriter(a0, a1, a2, a3, a4, a5));
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

              static PyObject *t_StreamingOcmWriter_close(t_StreamingOcmWriter *self)
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              static PyObject *t_StreamingOcmWriter_newBlock(t_StreamingOcmWriter *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::StreamingOcmWriter$BlockWriter result((jobject) NULL);
                OBJ_CALL(result = self->object.newBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_StreamingOcmWriter$BlockWriter::wrap_Object(result);
              }
            }
          }
        }
      }
    }
  }
}

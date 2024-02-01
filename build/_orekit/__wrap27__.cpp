#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeScalarFunction.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScalarFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeScalarFunction::class$ = NULL;
      jmethodID *PythonTimeScalarFunction::mids$ = NULL;
      bool PythonTimeScalarFunction::live$ = false;

      jclass PythonTimeScalarFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeScalarFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_209f08246d708042] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_value_cf010978f3c5a913] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeScalarFunction::PythonTimeScalarFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonTimeScalarFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonTimeScalarFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonTimeScalarFunction::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonTimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeScalarFunction_init_(t_PythonTimeScalarFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeScalarFunction_finalize(t_PythonTimeScalarFunction *self);
      static PyObject *t_PythonTimeScalarFunction_pythonExtension(t_PythonTimeScalarFunction *self, PyObject *args);
      static void JNICALL t_PythonTimeScalarFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonTimeScalarFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeScalarFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonTimeScalarFunction_get__self(t_PythonTimeScalarFunction *self, void *data);
      static PyGetSetDef t_PythonTimeScalarFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeScalarFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeScalarFunction__methods_[] = {
        DECLARE_METHOD(t_PythonTimeScalarFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScalarFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScalarFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeScalarFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeScalarFunction)[] = {
        { Py_tp_methods, t_PythonTimeScalarFunction__methods_ },
        { Py_tp_init, (void *) t_PythonTimeScalarFunction_init_ },
        { Py_tp_getset, t_PythonTimeScalarFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeScalarFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeScalarFunction, t_PythonTimeScalarFunction, PythonTimeScalarFunction);

      void t_PythonTimeScalarFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeScalarFunction), &PY_TYPE_DEF(PythonTimeScalarFunction), module, "PythonTimeScalarFunction", 1);
      }

      void t_PythonTimeScalarFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScalarFunction), "class_", make_descriptor(PythonTimeScalarFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScalarFunction), "wrapfn_", make_descriptor(t_PythonTimeScalarFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScalarFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeScalarFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonTimeScalarFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonTimeScalarFunction_value1 },
          { "value", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonTimeScalarFunction_value2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonTimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeScalarFunction::initializeClass, 1)))
          return NULL;
        return t_PythonTimeScalarFunction::wrap_Object(PythonTimeScalarFunction(((t_PythonTimeScalarFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeScalarFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeScalarFunction_init_(t_PythonTimeScalarFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeScalarFunction object((jobject) NULL);

        INT_CALL(object = PythonTimeScalarFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeScalarFunction_finalize(t_PythonTimeScalarFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeScalarFunction_pythonExtension(t_PythonTimeScalarFunction *self, PyObject *args)
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

      static void JNICALL t_PythonTimeScalarFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonTimeScalarFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonTimeScalarFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
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

      static PyObject *t_PythonTimeScalarFunction_get__self(t_PythonTimeScalarFunction *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EmbeddedRungeKuttaFieldIntegrator::class$ = NULL;
        jmethodID *EmbeddedRungeKuttaFieldIntegrator::mids$ = NULL;
        bool EmbeddedRungeKuttaFieldIntegrator::live$ = false;

        jclass EmbeddedRungeKuttaFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getMaxGrowth_08d37e3f77b7239d] = env->getMethodID(cls, "getMaxGrowth", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMinReduction_08d37e3f77b7239d] = env->getMethodID(cls, "getMinReduction", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getSafety_08d37e3f77b7239d] = env->getMethodID(cls, "getSafety", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_integrate_7e5884a5ebca9afb] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_setMaxGrowth_f63ca9e3185c722e] = env->getMethodID(cls, "setMaxGrowth", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setMinReduction_f63ca9e3185c722e] = env->getMethodID(cls, "setMinReduction", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setSafety_f63ca9e3185c722e] = env->getMethodID(cls, "setSafety", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_fraction_89a7d1b6c5e4fe60] = env->getMethodID(cls, "fraction", "(II)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_fraction_44b518e8c914a050] = env->getMethodID(cls, "fraction", "(DD)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_17af2a8a707ea45d] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaFieldStateInterpolator;");
            mids$[mid_estimateError_2bb116b8560eb7ee] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement EmbeddedRungeKuttaFieldIntegrator::getMaxGrowth() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMaxGrowth_08d37e3f77b7239d]));
        }

        ::org::hipparchus::CalculusFieldElement EmbeddedRungeKuttaFieldIntegrator::getMinReduction() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMinReduction_08d37e3f77b7239d]));
        }

        jint EmbeddedRungeKuttaFieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
        }

        ::org::hipparchus::CalculusFieldElement EmbeddedRungeKuttaFieldIntegrator::getSafety() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSafety_08d37e3f77b7239d]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative EmbeddedRungeKuttaFieldIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_7e5884a5ebca9afb], a0.this$, a1.this$, a2.this$));
        }

        void EmbeddedRungeKuttaFieldIntegrator::setMaxGrowth(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxGrowth_f63ca9e3185c722e], a0.this$);
        }

        void EmbeddedRungeKuttaFieldIntegrator::setMinReduction(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMinReduction_f63ca9e3185c722e], a0.this$);
        }

        void EmbeddedRungeKuttaFieldIntegrator::setSafety(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSafety_f63ca9e3185c722e], a0.this$);
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
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_of_(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getOrder(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getSafety(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_integrate(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setSafety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__order(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__parameters_(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static PyGetSetDef t_EmbeddedRungeKuttaFieldIntegrator__fields_[] = {
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, maxGrowth),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, minReduction),
          DECLARE_GET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, order),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, safety),
          DECLARE_GET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EmbeddedRungeKuttaFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getMaxGrowth, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getMinReduction, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getSafety, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, setMaxGrowth, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, setMinReduction, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, setSafety, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EmbeddedRungeKuttaFieldIntegrator)[] = {
          { Py_tp_methods, t_EmbeddedRungeKuttaFieldIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EmbeddedRungeKuttaFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EmbeddedRungeKuttaFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(EmbeddedRungeKuttaFieldIntegrator, t_EmbeddedRungeKuttaFieldIntegrator, EmbeddedRungeKuttaFieldIntegrator);
        PyObject *t_EmbeddedRungeKuttaFieldIntegrator::wrap_Object(const EmbeddedRungeKuttaFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EmbeddedRungeKuttaFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EmbeddedRungeKuttaFieldIntegrator *self = (t_EmbeddedRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EmbeddedRungeKuttaFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EmbeddedRungeKuttaFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EmbeddedRungeKuttaFieldIntegrator *self = (t_EmbeddedRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EmbeddedRungeKuttaFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), &PY_TYPE_DEF(EmbeddedRungeKuttaFieldIntegrator), module, "EmbeddedRungeKuttaFieldIntegrator", 0);
        }

        void t_EmbeddedRungeKuttaFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), "class_", make_descriptor(EmbeddedRungeKuttaFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), "wrapfn_", make_descriptor(t_EmbeddedRungeKuttaFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EmbeddedRungeKuttaFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_EmbeddedRungeKuttaFieldIntegrator::wrap_Object(EmbeddedRungeKuttaFieldIntegrator(((t_EmbeddedRungeKuttaFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EmbeddedRungeKuttaFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_of_(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxGrowth());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinReduction());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getOrder(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getSafety(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getSafety());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_integrate(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldExpandableODE a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldExpandableODE::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldExpandableODE::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMaxGrowth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMinReduction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setSafety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setSafety(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
          return NULL;
        }
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__parameters_(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxGrowth());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMaxGrowth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinReduction());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMinReduction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__order(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getSafety());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setSafety(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "safety", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *DenseOutputModel::class$ = NULL;
      jmethodID *DenseOutputModel::mids$ = NULL;
      bool DenseOutputModel::live$ = false;

      jclass DenseOutputModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/DenseOutputModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_append_f707b066c165e5ed] = env->getMethodID(cls, "append", "(Lorg/hipparchus/ode/DenseOutputModel;)V");
          mids$[mid_finish_6bfc236263cc281c] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
          mids$[mid_getFinalTime_9981f74b2d109da6] = env->getMethodID(cls, "getFinalTime", "()D");
          mids$[mid_getInitialTime_9981f74b2d109da6] = env->getMethodID(cls, "getInitialTime", "()D");
          mids$[mid_getInterpolatedState_dddd5f60deb44228] = env->getMethodID(cls, "getInterpolatedState", "(D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_handleStep_4f79f5048423f318] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
          mids$[mid_init_25005604bcb94d07] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DenseOutputModel::DenseOutputModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void DenseOutputModel::append(const DenseOutputModel & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_append_f707b066c165e5ed], a0.this$);
      }

      void DenseOutputModel::finish(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_finish_6bfc236263cc281c], a0.this$);
      }

      jdouble DenseOutputModel::getFinalTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFinalTime_9981f74b2d109da6]);
      }

      jdouble DenseOutputModel::getInitialTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getInitialTime_9981f74b2d109da6]);
      }

      ::org::hipparchus::ode::ODEStateAndDerivative DenseOutputModel::getInterpolatedState(jdouble a0) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_dddd5f60deb44228], a0));
      }

      void DenseOutputModel::handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_handleStep_4f79f5048423f318], a0.this$);
      }

      void DenseOutputModel::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_25005604bcb94d07], a0.this$, a1);
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
      static PyObject *t_DenseOutputModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DenseOutputModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DenseOutputModel_init_(t_DenseOutputModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DenseOutputModel_append(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_finish(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_getFinalTime(t_DenseOutputModel *self);
      static PyObject *t_DenseOutputModel_getInitialTime(t_DenseOutputModel *self);
      static PyObject *t_DenseOutputModel_getInterpolatedState(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_handleStep(t_DenseOutputModel *self, PyObject *arg);
      static PyObject *t_DenseOutputModel_init(t_DenseOutputModel *self, PyObject *args);
      static PyObject *t_DenseOutputModel_get__finalTime(t_DenseOutputModel *self, void *data);
      static PyObject *t_DenseOutputModel_get__initialTime(t_DenseOutputModel *self, void *data);
      static PyGetSetDef t_DenseOutputModel__fields_[] = {
        DECLARE_GET_FIELD(t_DenseOutputModel, finalTime),
        DECLARE_GET_FIELD(t_DenseOutputModel, initialTime),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DenseOutputModel__methods_[] = {
        DECLARE_METHOD(t_DenseOutputModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DenseOutputModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DenseOutputModel, append, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, finish, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, getFinalTime, METH_NOARGS),
        DECLARE_METHOD(t_DenseOutputModel, getInitialTime, METH_NOARGS),
        DECLARE_METHOD(t_DenseOutputModel, getInterpolatedState, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, handleStep, METH_O),
        DECLARE_METHOD(t_DenseOutputModel, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DenseOutputModel)[] = {
        { Py_tp_methods, t_DenseOutputModel__methods_ },
        { Py_tp_init, (void *) t_DenseOutputModel_init_ },
        { Py_tp_getset, t_DenseOutputModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DenseOutputModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DenseOutputModel, t_DenseOutputModel, DenseOutputModel);

      void t_DenseOutputModel::install(PyObject *module)
      {
        installType(&PY_TYPE(DenseOutputModel), &PY_TYPE_DEF(DenseOutputModel), module, "DenseOutputModel", 0);
      }

      void t_DenseOutputModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DenseOutputModel), "class_", make_descriptor(DenseOutputModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DenseOutputModel), "wrapfn_", make_descriptor(t_DenseOutputModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DenseOutputModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DenseOutputModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DenseOutputModel::initializeClass, 1)))
          return NULL;
        return t_DenseOutputModel::wrap_Object(DenseOutputModel(((t_DenseOutputModel *) arg)->object.this$));
      }
      static PyObject *t_DenseOutputModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DenseOutputModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DenseOutputModel_init_(t_DenseOutputModel *self, PyObject *args, PyObject *kwds)
      {
        DenseOutputModel object((jobject) NULL);

        INT_CALL(object = DenseOutputModel());
        self->object = object;

        return 0;
      }

      static PyObject *t_DenseOutputModel_append(t_DenseOutputModel *self, PyObject *arg)
      {
        DenseOutputModel a0((jobject) NULL);

        if (!parseArg(arg, "k", DenseOutputModel::initializeClass, &a0))
        {
          OBJ_CALL(self->object.append(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "append", arg);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_finish(t_DenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
        {
          OBJ_CALL(self->object.finish(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "finish", arg);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_getFinalTime(t_DenseOutputModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFinalTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DenseOutputModel_getInitialTime(t_DenseOutputModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getInitialTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DenseOutputModel_getInterpolatedState(t_DenseOutputModel *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getInterpolatedState(a0));
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_handleStep(t_DenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
        {
          OBJ_CALL(self->object.handleStep(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_init(t_DenseOutputModel *self, PyObject *args)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_DenseOutputModel_get__finalTime(t_DenseOutputModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFinalTime());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DenseOutputModel_get__initialTime(t_DenseOutputModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getInitialTime());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/LibrationOrbitType.h"
#include "org/orekit/orbits/LibrationOrbitType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LibrationOrbitType::class$ = NULL;
      jmethodID *LibrationOrbitType::mids$ = NULL;
      bool LibrationOrbitType::live$ = false;
      LibrationOrbitType *LibrationOrbitType::HALO = NULL;
      LibrationOrbitType *LibrationOrbitType::LYAPUNOV = NULL;

      jclass LibrationOrbitType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LibrationOrbitType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_c739d379d196a005] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/LibrationOrbitType;");
          mids$[mid_values_de92c3816eb74f8c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/LibrationOrbitType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          HALO = new LibrationOrbitType(env->getStaticObjectField(cls, "HALO", "Lorg/orekit/orbits/LibrationOrbitType;"));
          LYAPUNOV = new LibrationOrbitType(env->getStaticObjectField(cls, "LYAPUNOV", "Lorg/orekit/orbits/LibrationOrbitType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LibrationOrbitType LibrationOrbitType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LibrationOrbitType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c739d379d196a005], a0.this$));
      }

      JArray< LibrationOrbitType > LibrationOrbitType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LibrationOrbitType >(env->callStaticObjectMethod(cls, mids$[mid_values_de92c3816eb74f8c]));
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
      static PyObject *t_LibrationOrbitType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitType_of_(t_LibrationOrbitType *self, PyObject *args);
      static PyObject *t_LibrationOrbitType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LibrationOrbitType_values(PyTypeObject *type);
      static PyObject *t_LibrationOrbitType_get__parameters_(t_LibrationOrbitType *self, void *data);
      static PyGetSetDef t_LibrationOrbitType__fields_[] = {
        DECLARE_GET_FIELD(t_LibrationOrbitType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LibrationOrbitType__methods_[] = {
        DECLARE_METHOD(t_LibrationOrbitType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitType, of_, METH_VARARGS),
        DECLARE_METHOD(t_LibrationOrbitType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LibrationOrbitType)[] = {
        { Py_tp_methods, t_LibrationOrbitType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LibrationOrbitType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LibrationOrbitType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LibrationOrbitType, t_LibrationOrbitType, LibrationOrbitType);
      PyObject *t_LibrationOrbitType::wrap_Object(const LibrationOrbitType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitType *self = (t_LibrationOrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LibrationOrbitType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitType *self = (t_LibrationOrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LibrationOrbitType::install(PyObject *module)
      {
        installType(&PY_TYPE(LibrationOrbitType), &PY_TYPE_DEF(LibrationOrbitType), module, "LibrationOrbitType", 0);
      }

      void t_LibrationOrbitType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "class_", make_descriptor(LibrationOrbitType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "wrapfn_", make_descriptor(t_LibrationOrbitType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "boxfn_", make_descriptor(boxObject));
        env->getClass(LibrationOrbitType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "HALO", make_descriptor(t_LibrationOrbitType::wrap_Object(*LibrationOrbitType::HALO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "LYAPUNOV", make_descriptor(t_LibrationOrbitType::wrap_Object(*LibrationOrbitType::LYAPUNOV)));
      }

      static PyObject *t_LibrationOrbitType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LibrationOrbitType::initializeClass, 1)))
          return NULL;
        return t_LibrationOrbitType::wrap_Object(LibrationOrbitType(((t_LibrationOrbitType *) arg)->object.this$));
      }
      static PyObject *t_LibrationOrbitType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LibrationOrbitType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LibrationOrbitType_of_(t_LibrationOrbitType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LibrationOrbitType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LibrationOrbitType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitType::valueOf(a0));
          return t_LibrationOrbitType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LibrationOrbitType_values(PyTypeObject *type)
      {
        JArray< LibrationOrbitType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitType::values());
        return JArray<jobject>(result.this$).wrap(t_LibrationOrbitType::wrap_jobject);
      }
      static PyObject *t_LibrationOrbitType_get__parameters_(t_LibrationOrbitType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *FieldUnivariateInterpolator::class$ = NULL;
        jmethodID *FieldUnivariateInterpolator::mids$ = NULL;
        bool FieldUnivariateInterpolator::live$ = false;

        jclass FieldUnivariateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_dee80c3e27912dc3] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::CalculusFieldUnivariateFunction FieldUnivariateInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::CalculusFieldUnivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_dee80c3e27912dc3], a0.this$, a1.this$));
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
        static PyObject *t_FieldUnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateInterpolator_interpolate(t_FieldUnivariateInterpolator *self, PyObject *args);

        static PyMethodDef t_FieldUnivariateInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateInterpolator)[] = {
          { Py_tp_methods, t_FieldUnivariateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateInterpolator, t_FieldUnivariateInterpolator, FieldUnivariateInterpolator);

        void t_FieldUnivariateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateInterpolator), &PY_TYPE_DEF(FieldUnivariateInterpolator), module, "FieldUnivariateInterpolator", 0);
        }

        void t_FieldUnivariateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateInterpolator), "class_", make_descriptor(FieldUnivariateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateInterpolator), "wrapfn_", make_descriptor(t_FieldUnivariateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateInterpolator::wrap_Object(FieldUnivariateInterpolator(((t_FieldUnivariateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateInterpolator_interpolate(t_FieldUnivariateInterpolator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::wrap_Object(result);
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenThirdBodyLinear.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenThirdBodyLinear::class$ = NULL;
              jmethodID *HansenThirdBodyLinear::mids$ = NULL;
              bool HansenThirdBodyLinear::live$ = false;

              jclass HansenThirdBodyLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenThirdBodyLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
                  mids$[mid_computeInitValues_bd28dc6055dc5bbd] = env->getMethodID(cls, "computeInitValues", "(DDD)V");
                  mids$[mid_getDerivative_5540210c7d309f18] = env->getMethodID(cls, "getDerivative", "(ID)D");
                  mids$[mid_getValue_5540210c7d309f18] = env->getMethodID(cls, "getValue", "(ID)D");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              HansenThirdBodyLinear::HansenThirdBodyLinear(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

              void HansenThirdBodyLinear::computeInitValues(jdouble a0, jdouble a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_bd28dc6055dc5bbd], a0, a1, a2);
              }

              jdouble HansenThirdBodyLinear::getDerivative(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDerivative_5540210c7d309f18], a0, a1);
              }

              jdouble HansenThirdBodyLinear::getValue(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getValue_5540210c7d309f18], a0, a1);
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
              static PyObject *t_HansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg);
              static int t_HansenThirdBodyLinear_init_(t_HansenThirdBodyLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_HansenThirdBodyLinear_computeInitValues(t_HansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_HansenThirdBodyLinear_getDerivative(t_HansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_HansenThirdBodyLinear_getValue(t_HansenThirdBodyLinear *self, PyObject *args);

              static PyMethodDef t_HansenThirdBodyLinear__methods_[] = {
                DECLARE_METHOD(t_HansenThirdBodyLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenThirdBodyLinear)[] = {
                { Py_tp_methods, t_HansenThirdBodyLinear__methods_ },
                { Py_tp_init, (void *) t_HansenThirdBodyLinear_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenThirdBodyLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenThirdBodyLinear, t_HansenThirdBodyLinear, HansenThirdBodyLinear);

              void t_HansenThirdBodyLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenThirdBodyLinear), &PY_TYPE_DEF(HansenThirdBodyLinear), module, "HansenThirdBodyLinear", 0);
              }

              void t_HansenThirdBodyLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenThirdBodyLinear), "class_", make_descriptor(HansenThirdBodyLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenThirdBodyLinear), "wrapfn_", make_descriptor(t_HansenThirdBodyLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenThirdBodyLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_HansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenThirdBodyLinear::initializeClass, 1)))
                  return NULL;
                return t_HansenThirdBodyLinear::wrap_Object(HansenThirdBodyLinear(((t_HansenThirdBodyLinear *) arg)->object.this$));
              }
              static PyObject *t_HansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenThirdBodyLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_HansenThirdBodyLinear_init_(t_HansenThirdBodyLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                HansenThirdBodyLinear object((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  INT_CALL(object = HansenThirdBodyLinear(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_HansenThirdBodyLinear_computeInitValues(t_HansenThirdBodyLinear *self, PyObject *args)
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_HansenThirdBodyLinear_getDerivative(t_HansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_HansenThirdBodyLinear_getValue(t_HansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
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
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
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
              mids$[mid_getAp_9b63d19c31941c0f] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_getAverageFlux_209f08246d708042] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getDailyFlux_209f08246d708042] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< jdouble > NRLMSISE00InputParameters::getAp(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAp_9b63d19c31941c0f], a0.this$));
          }

          jdouble NRLMSISE00InputParameters::getAverageFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAverageFlux_209f08246d708042], a0.this$);
          }

          jdouble NRLMSISE00InputParameters::getDailyFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDailyFlux_209f08246d708042], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate NRLMSISE00InputParameters::getMaxDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
          }

          ::org::orekit::time::AbsoluteDate NRLMSISE00InputParameters::getMinDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
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
#include "org/hipparchus/geometry/euclidean/threed/SubLine.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Segment.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "org/hipparchus/geometry/euclidean/threed/SubLine.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SubLine::class$ = NULL;
          jmethodID *SubLine::mids$ = NULL;
          bool SubLine::live$ = false;

          jclass SubLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SubLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_05438a698e1a2771] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Segment;)V");
              mids$[mid_init$_289dc4768a0ca25a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/oned/IntervalsSet;)V");
              mids$[mid_init$_dcbb005903c9a2a8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_intersection_fa7ef246a25efb04] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/SubLine;Z)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::threed::Segment & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_05438a698e1a2771, a0.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::oned::IntervalsSet & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_289dc4768a0ca25a, a0.this$, a1.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dcbb005903c9a2a8, a0.this$, a1.this$, a2)) {}

          ::java::util::List SubLine::getSegments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_d751c1a57012b438]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D SubLine::intersection(const SubLine & a0, jboolean a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_intersection_fa7ef246a25efb04], a0.this$, a1));
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
          static PyObject *t_SubLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLine_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SubLine_init_(t_SubLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubLine_getSegments(t_SubLine *self);
          static PyObject *t_SubLine_intersection(t_SubLine *self, PyObject *args);
          static PyObject *t_SubLine_get__segments(t_SubLine *self, void *data);
          static PyGetSetDef t_SubLine__fields_[] = {
            DECLARE_GET_FIELD(t_SubLine, segments),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubLine__methods_[] = {
            DECLARE_METHOD(t_SubLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLine, getSegments, METH_NOARGS),
            DECLARE_METHOD(t_SubLine, intersection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubLine)[] = {
            { Py_tp_methods, t_SubLine__methods_ },
            { Py_tp_init, (void *) t_SubLine_init_ },
            { Py_tp_getset, t_SubLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubLine)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SubLine, t_SubLine, SubLine);

          void t_SubLine::install(PyObject *module)
          {
            installType(&PY_TYPE(SubLine), &PY_TYPE_DEF(SubLine), module, "SubLine", 0);
          }

          void t_SubLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "class_", make_descriptor(SubLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "wrapfn_", make_descriptor(t_SubLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubLine::initializeClass, 1)))
              return NULL;
            return t_SubLine::wrap_Object(SubLine(((t_SubLine *) arg)->object.this$));
          }
          static PyObject *t_SubLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SubLine_init_(t_SubLine *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Segment a0((jobject) NULL);
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Segment::initializeClass, &a0))
                {
                  INT_CALL(object = SubLine(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::oned::IntervalsSet a1((jobject) NULL);
                PyTypeObject **p1;
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::oned::IntervalsSet::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::oned::t_IntervalsSet::parameters_))
                {
                  INT_CALL(object = SubLine(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble a2;
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SubLine(a0, a1, a2));
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

          static PyObject *t_SubLine_getSegments(t_SubLine *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Segment));
          }

          static PyObject *t_SubLine_intersection(t_SubLine *self, PyObject *args)
          {
            SubLine a0((jobject) NULL);
            jboolean a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kZ", SubLine::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.intersection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_SubLine_get__segments(t_SubLine *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Identity.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Identity::class$ = NULL;
        jmethodID *Identity::mids$ = NULL;
        bool Identity::live$ = false;

        jclass Identity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Identity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Identity::Identity() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Identity::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Identity::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
      namespace function {
        static PyObject *t_Identity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Identity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Identity_init_(t_Identity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Identity_value(t_Identity *self, PyObject *args);

        static PyMethodDef t_Identity__methods_[] = {
          DECLARE_METHOD(t_Identity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Identity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Identity, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Identity)[] = {
          { Py_tp_methods, t_Identity__methods_ },
          { Py_tp_init, (void *) t_Identity_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Identity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Identity, t_Identity, Identity);

        void t_Identity::install(PyObject *module)
        {
          installType(&PY_TYPE(Identity), &PY_TYPE_DEF(Identity), module, "Identity", 0);
        }

        void t_Identity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Identity), "class_", make_descriptor(Identity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Identity), "wrapfn_", make_descriptor(t_Identity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Identity), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Identity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Identity::initializeClass, 1)))
            return NULL;
          return t_Identity::wrap_Object(Identity(((t_Identity *) arg)->object.this$));
        }
        static PyObject *t_Identity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Identity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Identity_init_(t_Identity *self, PyObject *args, PyObject *kwds)
        {
          Identity object((jobject) NULL);

          INT_CALL(object = Identity());
          self->object = object;

          return 0;
        }

        static PyObject *t_Identity_value(t_Identity *self, PyObject *args)
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
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *Space::class$ = NULL;
      jmethodID *Space::mids$ = NULL;
      bool Space::live$ = false;

      jclass Space::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/Space");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getSubSpace_a30bf0b437744017] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/Space;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint Space::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      Space Space::getSubSpace() const
      {
        return Space(env->callObjectMethod(this$, mids$[mid_getSubSpace_a30bf0b437744017]));
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
      static PyObject *t_Space_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Space_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Space_getDimension(t_Space *self);
      static PyObject *t_Space_getSubSpace(t_Space *self);
      static PyObject *t_Space_get__dimension(t_Space *self, void *data);
      static PyObject *t_Space_get__subSpace(t_Space *self, void *data);
      static PyGetSetDef t_Space__fields_[] = {
        DECLARE_GET_FIELD(t_Space, dimension),
        DECLARE_GET_FIELD(t_Space, subSpace),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Space__methods_[] = {
        DECLARE_METHOD(t_Space, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Space, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Space, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_Space, getSubSpace, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Space)[] = {
        { Py_tp_methods, t_Space__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Space__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Space)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(Space, t_Space, Space);

      void t_Space::install(PyObject *module)
      {
        installType(&PY_TYPE(Space), &PY_TYPE_DEF(Space), module, "Space", 0);
      }

      void t_Space::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Space), "class_", make_descriptor(Space::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Space), "wrapfn_", make_descriptor(t_Space::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Space), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Space_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Space::initializeClass, 1)))
          return NULL;
        return t_Space::wrap_Object(Space(((t_Space *) arg)->object.this$));
      }
      static PyObject *t_Space_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Space::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Space_getDimension(t_Space *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Space_getSubSpace(t_Space *self)
      {
        Space result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubSpace());
        return t_Space::wrap_Object(result);
      }

      static PyObject *t_Space_get__dimension(t_Space *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Space_get__subSpace(t_Space *self, void *data)
      {
        Space value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubSpace());
        return t_Space::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldMidPointIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldMidPointIntegrator::class$ = NULL;
        jmethodID *FieldMidPointIntegrator::mids$ = NULL;
        bool FieldMidPointIntegrator::live$ = false;
        jint FieldMidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldMidPointIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldMidPointIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_ddbf374219cf6329] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_119028fb2475d87b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_08d37e3f77b7239d] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MIDPOINT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "MIDPOINT_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldMidPointIntegrator::FieldMidPointIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

        FieldMidPointIntegrator::FieldMidPointIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_ddbf374219cf6329, a0.this$, a1, a2)) {}

        FieldMidPointIntegrator::FieldMidPointIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_119028fb2475d87b, a0.this$, a1, a2, a3, a4)) {}
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
        static PyObject *t_FieldMidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldMidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldMidPointIntegrator_of_(t_FieldMidPointIntegrator *self, PyObject *args);
        static int t_FieldMidPointIntegrator_init_(t_FieldMidPointIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldMidPointIntegrator_get__parameters_(t_FieldMidPointIntegrator *self, void *data);
        static PyGetSetDef t_FieldMidPointIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldMidPointIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldMidPointIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldMidPointIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldMidPointIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldMidPointIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldMidPointIntegrator)[] = {
          { Py_tp_methods, t_FieldMidPointIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldMidPointIntegrator_init_ },
          { Py_tp_getset, t_FieldMidPointIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldMidPointIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldMidPointIntegrator, t_FieldMidPointIntegrator, FieldMidPointIntegrator);
        PyObject *t_FieldMidPointIntegrator::wrap_Object(const FieldMidPointIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldMidPointIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldMidPointIntegrator *self = (t_FieldMidPointIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldMidPointIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldMidPointIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldMidPointIntegrator *self = (t_FieldMidPointIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldMidPointIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldMidPointIntegrator), &PY_TYPE_DEF(FieldMidPointIntegrator), module, "FieldMidPointIntegrator", 0);
        }

        void t_FieldMidPointIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "class_", make_descriptor(FieldMidPointIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "wrapfn_", make_descriptor(t_FieldMidPointIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldMidPointIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "MIDPOINT_MAX_ITERATIONS_COUNT", make_descriptor(FieldMidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldMidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldMidPointIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldMidPointIntegrator::wrap_Object(FieldMidPointIntegrator(((t_FieldMidPointIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldMidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldMidPointIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldMidPointIntegrator_of_(t_FieldMidPointIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldMidPointIntegrator_init_(t_FieldMidPointIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldMidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldMidPointIntegrator(a0));
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
              FieldMidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldMidPointIntegrator(a0, a1, a2));
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
              FieldMidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldMidPointIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldMidPointIntegrator_get__parameters_(t_FieldMidPointIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/GRAPHICCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *GRAPHICCombination::class$ = NULL;
          jmethodID *GRAPHICCombination::mids$ = NULL;
          bool GRAPHICCombination::live$ = false;

          jclass GRAPHICCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/GRAPHICCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_82f92590f4247da1] = env->getMethodID(cls, "getCombinedValue", "(DD)D");

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
          static PyObject *t_GRAPHICCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GRAPHICCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_GRAPHICCombination__methods_[] = {
            DECLARE_METHOD(t_GRAPHICCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GRAPHICCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GRAPHICCombination)[] = {
            { Py_tp_methods, t_GRAPHICCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GRAPHICCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(GRAPHICCombination, t_GRAPHICCombination, GRAPHICCombination);

          void t_GRAPHICCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(GRAPHICCombination), &PY_TYPE_DEF(GRAPHICCombination), module, "GRAPHICCombination", 0);
          }

          void t_GRAPHICCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRAPHICCombination), "class_", make_descriptor(GRAPHICCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRAPHICCombination), "wrapfn_", make_descriptor(t_GRAPHICCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRAPHICCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GRAPHICCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GRAPHICCombination::initializeClass, 1)))
              return NULL;
            return t_GRAPHICCombination::wrap_Object(GRAPHICCombination(((t_GRAPHICCombination *) arg)->object.this$));
          }
          static PyObject *t_GRAPHICCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GRAPHICCombination::initializeClass, 0))
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuverHistoryMetadataKey::class$ = NULL;
              jmethodID *OrbitManeuverHistoryMetadataKey::mids$ = NULL;
              bool OrbitManeuverHistoryMetadataKey::live$ = false;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::COMMENT = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_BODY_FRAME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_BODY_TRIGGER = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_EXEC_START = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_EXEC_STOP = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_MAX_CYCLES = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_MIN_CYCLES = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_PA_START_ANGLE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_PA_STOP_ANGLE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_REF_DIR = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_REF_TIME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_DURATION = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_PERIOD = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_TYPE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_WIN_CLOSE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::DC_WIN_OPEN = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::GRAV_ASSIST_NAME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_BASIS = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_BASIS_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_COMPOSITION = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_DEVICE_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_FRAME_EPOCH = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_NEXT_EPOCH = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_NEXT_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PRED_SOURCE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PREV_EPOCH = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PREV_ID = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_PURPOSE = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_REF_FRAME = NULL;
              OrbitManeuverHistoryMetadataKey *OrbitManeuverHistoryMetadataKey::MAN_UNITS = NULL;

              jclass OrbitManeuverHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_0539b50f4d614bc8] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata;)Z");
                  mids$[mid_valueOf_ae7366a44fca87cb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;");
                  mids$[mid_values_f388abcfc8bc2d3f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_BODY_FRAME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_BODY_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_BODY_TRIGGER = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_BODY_TRIGGER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_EXEC_START = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_EXEC_START", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_EXEC_STOP = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_EXEC_STOP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_MAX_CYCLES = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_MAX_CYCLES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_MIN_CYCLES = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_MIN_CYCLES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_PA_START_ANGLE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_PA_START_ANGLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_PA_STOP_ANGLE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_PA_STOP_ANGLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_REF_DIR = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_REF_DIR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_REF_TIME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_REF_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_TIME_PULSE_DURATION = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_TIME_PULSE_DURATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_TIME_PULSE_PERIOD = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_TIME_PULSE_PERIOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_TYPE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_WIN_CLOSE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_WIN_CLOSE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  DC_WIN_OPEN = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "DC_WIN_OPEN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  GRAV_ASSIST_NAME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "GRAV_ASSIST_NAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_BASIS = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_BASIS_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_COMPOSITION = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_COMPOSITION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_DEVICE_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_DEVICE_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_FRAME_EPOCH = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_NEXT_EPOCH = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_NEXT_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_NEXT_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_NEXT_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PRED_SOURCE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PRED_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PREV_EPOCH = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PREV_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PREV_ID = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_PURPOSE = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_PURPOSE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_REF_FRAME = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  MAN_UNITS = new OrbitManeuverHistoryMetadataKey(env->getStaticObjectField(cls, "MAN_UNITS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitManeuverHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_0539b50f4d614bc8], a0.this$, a1.this$, a2.this$);
              }

              OrbitManeuverHistoryMetadataKey OrbitManeuverHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitManeuverHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ae7366a44fca87cb], a0.this$));
              }

              JArray< OrbitManeuverHistoryMetadataKey > OrbitManeuverHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitManeuverHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_f388abcfc8bc2d3f]));
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
              static PyObject *t_OrbitManeuverHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_of_(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_process(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OrbitManeuverHistoryMetadataKey_get__parameters_(t_OrbitManeuverHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_OrbitManeuverHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitManeuverHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuverHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuverHistoryMetadataKey)[] = {
                { Py_tp_methods, t_OrbitManeuverHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitManeuverHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuverHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitManeuverHistoryMetadataKey, t_OrbitManeuverHistoryMetadataKey, OrbitManeuverHistoryMetadataKey);
              PyObject *t_OrbitManeuverHistoryMetadataKey::wrap_Object(const OrbitManeuverHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitManeuverHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitManeuverHistoryMetadataKey *self = (t_OrbitManeuverHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitManeuverHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitManeuverHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitManeuverHistoryMetadataKey *self = (t_OrbitManeuverHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitManeuverHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuverHistoryMetadataKey), &PY_TYPE_DEF(OrbitManeuverHistoryMetadataKey), module, "OrbitManeuverHistoryMetadataKey", 0);
              }

              void t_OrbitManeuverHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "class_", make_descriptor(OrbitManeuverHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "wrapfn_", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitManeuverHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "COMMENT", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_BODY_FRAME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_BODY_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_BODY_TRIGGER", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_BODY_TRIGGER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_EXEC_START", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_EXEC_START)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_EXEC_STOP", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_EXEC_STOP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_MAX_CYCLES", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_MAX_CYCLES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_MIN_CYCLES", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_MIN_CYCLES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_PA_START_ANGLE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_PA_START_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_PA_STOP_ANGLE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_PA_STOP_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_REF_DIR", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_REF_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_REF_TIME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_REF_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_TIME_PULSE_DURATION", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_TIME_PULSE_PERIOD", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_TIME_PULSE_PERIOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_TYPE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_WIN_CLOSE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_WIN_CLOSE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "DC_WIN_OPEN", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::DC_WIN_OPEN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "GRAV_ASSIST_NAME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::GRAV_ASSIST_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_BASIS", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_BASIS_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_COMPOSITION", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_COMPOSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_DEVICE_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_DEVICE_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_FRAME_EPOCH", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_NEXT_EPOCH", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_NEXT_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_NEXT_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_NEXT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PRED_SOURCE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PRED_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PREV_EPOCH", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PREV_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PREV_ID", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_PURPOSE", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_PURPOSE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_REF_FRAME", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadataKey), "MAN_UNITS", make_descriptor(t_OrbitManeuverHistoryMetadataKey::wrap_Object(*OrbitManeuverHistoryMetadataKey::MAN_UNITS)));
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuverHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuverHistoryMetadataKey::wrap_Object(OrbitManeuverHistoryMetadataKey(((t_OrbitManeuverHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuverHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuverHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_of_(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_process(t_OrbitManeuverHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitManeuverHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadataKey::valueOf(a0));
                  return t_OrbitManeuverHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitManeuverHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< OrbitManeuverHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitManeuverHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_OrbitManeuverHistoryMetadataKey_get__parameters_(t_OrbitManeuverHistoryMetadataKey *self, void *data)
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
#include "org/orekit/files/rinex/observation/ScaleFactorCorrection.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/ObservationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *ScaleFactorCorrection::class$ = NULL;
          jmethodID *ScaleFactorCorrection::mids$ = NULL;
          bool ScaleFactorCorrection::live$ = false;

          jclass ScaleFactorCorrection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/ScaleFactorCorrection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bc12f79c8a19bd0d] = env->getMethodID(cls, "<init>", "(DLjava/util/List;)V");
              mids$[mid_getCorrection_9981f74b2d109da6] = env->getMethodID(cls, "getCorrection", "()D");
              mids$[mid_getTypesObsScaled_d751c1a57012b438] = env->getMethodID(cls, "getTypesObsScaled", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ScaleFactorCorrection::ScaleFactorCorrection(jdouble a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc12f79c8a19bd0d, a0, a1.this$)) {}

          jdouble ScaleFactorCorrection::getCorrection() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCorrection_9981f74b2d109da6]);
          }

          ::java::util::List ScaleFactorCorrection::getTypesObsScaled() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTypesObsScaled_d751c1a57012b438]));
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
        namespace observation {
          static PyObject *t_ScaleFactorCorrection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ScaleFactorCorrection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ScaleFactorCorrection_init_(t_ScaleFactorCorrection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ScaleFactorCorrection_getCorrection(t_ScaleFactorCorrection *self);
          static PyObject *t_ScaleFactorCorrection_getTypesObsScaled(t_ScaleFactorCorrection *self);
          static PyObject *t_ScaleFactorCorrection_get__correction(t_ScaleFactorCorrection *self, void *data);
          static PyObject *t_ScaleFactorCorrection_get__typesObsScaled(t_ScaleFactorCorrection *self, void *data);
          static PyGetSetDef t_ScaleFactorCorrection__fields_[] = {
            DECLARE_GET_FIELD(t_ScaleFactorCorrection, correction),
            DECLARE_GET_FIELD(t_ScaleFactorCorrection, typesObsScaled),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ScaleFactorCorrection__methods_[] = {
            DECLARE_METHOD(t_ScaleFactorCorrection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaleFactorCorrection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaleFactorCorrection, getCorrection, METH_NOARGS),
            DECLARE_METHOD(t_ScaleFactorCorrection, getTypesObsScaled, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ScaleFactorCorrection)[] = {
            { Py_tp_methods, t_ScaleFactorCorrection__methods_ },
            { Py_tp_init, (void *) t_ScaleFactorCorrection_init_ },
            { Py_tp_getset, t_ScaleFactorCorrection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ScaleFactorCorrection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ScaleFactorCorrection, t_ScaleFactorCorrection, ScaleFactorCorrection);

          void t_ScaleFactorCorrection::install(PyObject *module)
          {
            installType(&PY_TYPE(ScaleFactorCorrection), &PY_TYPE_DEF(ScaleFactorCorrection), module, "ScaleFactorCorrection", 0);
          }

          void t_ScaleFactorCorrection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaleFactorCorrection), "class_", make_descriptor(ScaleFactorCorrection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaleFactorCorrection), "wrapfn_", make_descriptor(t_ScaleFactorCorrection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaleFactorCorrection), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ScaleFactorCorrection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ScaleFactorCorrection::initializeClass, 1)))
              return NULL;
            return t_ScaleFactorCorrection::wrap_Object(ScaleFactorCorrection(((t_ScaleFactorCorrection *) arg)->object.this$));
          }
          static PyObject *t_ScaleFactorCorrection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ScaleFactorCorrection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ScaleFactorCorrection_init_(t_ScaleFactorCorrection *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ScaleFactorCorrection object((jobject) NULL);

            if (!parseArgs(args, "DK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = ScaleFactorCorrection(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ScaleFactorCorrection_getCorrection(t_ScaleFactorCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCorrection());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ScaleFactorCorrection_getTypesObsScaled(t_ScaleFactorCorrection *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getTypesObsScaled());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(ObservationType));
          }

          static PyObject *t_ScaleFactorCorrection_get__correction(t_ScaleFactorCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCorrection());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ScaleFactorCorrection_get__typesObsScaled(t_ScaleFactorCorrection *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getTypesObsScaled());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/ConstantElevationAlgorithm.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *ConstantElevationAlgorithm::class$ = NULL;
        jmethodID *ConstantElevationAlgorithm::mids$ = NULL;
        bool ConstantElevationAlgorithm::live$ = false;

        jclass ConstantElevationAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/ConstantElevationAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getAlgorithmId_65c2eab2e30f9d2d] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_82f92590f4247da1] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_5c14acfe95406f7d] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_1feab13663326a32] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantElevationAlgorithm::ConstantElevationAlgorithm(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ::org::orekit::rugged::api::AlgorithmId ConstantElevationAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_65c2eab2e30f9d2d]));
        }

        jdouble ConstantElevationAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_82f92590f4247da1], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ConstantElevationAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_5c14acfe95406f7d], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ConstantElevationAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_1feab13663326a32], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace intersection {
        static PyObject *t_ConstantElevationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantElevationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantElevationAlgorithm_init_(t_ConstantElevationAlgorithm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantElevationAlgorithm_getAlgorithmId(t_ConstantElevationAlgorithm *self);
        static PyObject *t_ConstantElevationAlgorithm_getElevation(t_ConstantElevationAlgorithm *self, PyObject *args);
        static PyObject *t_ConstantElevationAlgorithm_intersection(t_ConstantElevationAlgorithm *self, PyObject *args);
        static PyObject *t_ConstantElevationAlgorithm_refineIntersection(t_ConstantElevationAlgorithm *self, PyObject *args);
        static PyObject *t_ConstantElevationAlgorithm_get__algorithmId(t_ConstantElevationAlgorithm *self, void *data);
        static PyGetSetDef t_ConstantElevationAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantElevationAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantElevationAlgorithm__methods_[] = {
          DECLARE_METHOD(t_ConstantElevationAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantElevationAlgorithm)[] = {
          { Py_tp_methods, t_ConstantElevationAlgorithm__methods_ },
          { Py_tp_init, (void *) t_ConstantElevationAlgorithm_init_ },
          { Py_tp_getset, t_ConstantElevationAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantElevationAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConstantElevationAlgorithm, t_ConstantElevationAlgorithm, ConstantElevationAlgorithm);

        void t_ConstantElevationAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantElevationAlgorithm), &PY_TYPE_DEF(ConstantElevationAlgorithm), module, "ConstantElevationAlgorithm", 0);
        }

        void t_ConstantElevationAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantElevationAlgorithm), "class_", make_descriptor(ConstantElevationAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantElevationAlgorithm), "wrapfn_", make_descriptor(t_ConstantElevationAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantElevationAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantElevationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantElevationAlgorithm::initializeClass, 1)))
            return NULL;
          return t_ConstantElevationAlgorithm::wrap_Object(ConstantElevationAlgorithm(((t_ConstantElevationAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_ConstantElevationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantElevationAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantElevationAlgorithm_init_(t_ConstantElevationAlgorithm *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ConstantElevationAlgorithm object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ConstantElevationAlgorithm(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConstantElevationAlgorithm_getAlgorithmId(t_ConstantElevationAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_ConstantElevationAlgorithm_getElevation(t_ConstantElevationAlgorithm *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", args);
          return NULL;
        }

        static PyObject *t_ConstantElevationAlgorithm_intersection(t_ConstantElevationAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_ConstantElevationAlgorithm_refineIntersection(t_ConstantElevationAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
          return NULL;
        }

        static PyObject *t_ConstantElevationAlgorithm_get__algorithmId(t_ConstantElevationAlgorithm *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Binary64Field.h"
#include "org/hipparchus/util/Binary64.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/Binary64Field.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Binary64Field::class$ = NULL;
      jmethodID *Binary64Field::mids$ = NULL;
      bool Binary64Field::live$ = false;

      jclass Binary64Field::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Binary64Field");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_c02fa34c78bdb138] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/util/Binary64Field;");
          mids$[mid_getOne_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_8fcc6c2abdbc3ba7] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean Binary64Field::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      Binary64Field Binary64Field::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return Binary64Field(env->callStaticObjectMethod(cls, mids$[mid_getInstance_c02fa34c78bdb138]));
      }

      ::org::hipparchus::util::Binary64 Binary64Field::getOne() const
      {
        return ::org::hipparchus::util::Binary64(env->callObjectMethod(this$, mids$[mid_getOne_8fcc6c2abdbc3ba7]));
      }

      ::java::lang::Class Binary64Field::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
      }

      ::org::hipparchus::util::Binary64 Binary64Field::getZero() const
      {
        return ::org::hipparchus::util::Binary64(env->callObjectMethod(this$, mids$[mid_getZero_8fcc6c2abdbc3ba7]));
      }

      jint Binary64Field::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
      static PyObject *t_Binary64Field_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Binary64Field_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Binary64Field_equals(t_Binary64Field *self, PyObject *args);
      static PyObject *t_Binary64Field_getInstance(PyTypeObject *type);
      static PyObject *t_Binary64Field_getOne(t_Binary64Field *self);
      static PyObject *t_Binary64Field_getRuntimeClass(t_Binary64Field *self);
      static PyObject *t_Binary64Field_getZero(t_Binary64Field *self);
      static PyObject *t_Binary64Field_hashCode(t_Binary64Field *self, PyObject *args);
      static PyObject *t_Binary64Field_get__instance(t_Binary64Field *self, void *data);
      static PyObject *t_Binary64Field_get__one(t_Binary64Field *self, void *data);
      static PyObject *t_Binary64Field_get__runtimeClass(t_Binary64Field *self, void *data);
      static PyObject *t_Binary64Field_get__zero(t_Binary64Field *self, void *data);
      static PyGetSetDef t_Binary64Field__fields_[] = {
        DECLARE_GET_FIELD(t_Binary64Field, instance),
        DECLARE_GET_FIELD(t_Binary64Field, one),
        DECLARE_GET_FIELD(t_Binary64Field, runtimeClass),
        DECLARE_GET_FIELD(t_Binary64Field, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Binary64Field__methods_[] = {
        DECLARE_METHOD(t_Binary64Field, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64Field, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64Field, equals, METH_VARARGS),
        DECLARE_METHOD(t_Binary64Field, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_Binary64Field, getOne, METH_NOARGS),
        DECLARE_METHOD(t_Binary64Field, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_Binary64Field, getZero, METH_NOARGS),
        DECLARE_METHOD(t_Binary64Field, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Binary64Field)[] = {
        { Py_tp_methods, t_Binary64Field__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Binary64Field__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Binary64Field)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Binary64Field, t_Binary64Field, Binary64Field);

      void t_Binary64Field::install(PyObject *module)
      {
        installType(&PY_TYPE(Binary64Field), &PY_TYPE_DEF(Binary64Field), module, "Binary64Field", 0);
      }

      void t_Binary64Field::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64Field), "class_", make_descriptor(Binary64Field::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64Field), "wrapfn_", make_descriptor(t_Binary64Field::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64Field), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Binary64Field_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Binary64Field::initializeClass, 1)))
          return NULL;
        return t_Binary64Field::wrap_Object(Binary64Field(((t_Binary64Field *) arg)->object.this$));
      }
      static PyObject *t_Binary64Field_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Binary64Field::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Binary64Field_equals(t_Binary64Field *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Binary64Field), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Binary64Field_getInstance(PyTypeObject *type)
      {
        Binary64Field result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::Binary64Field::getInstance());
        return t_Binary64Field::wrap_Object(result);
      }

      static PyObject *t_Binary64Field_getOne(t_Binary64Field *self)
      {
        ::org::hipparchus::util::Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64Field_getRuntimeClass(t_Binary64Field *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64Field_getZero(t_Binary64Field *self)
      {
        ::org::hipparchus::util::Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64Field_hashCode(t_Binary64Field *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64Field), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Binary64Field_get__instance(t_Binary64Field *self, void *data)
      {
        Binary64Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_Binary64Field::wrap_Object(value);
      }

      static PyObject *t_Binary64Field_get__one(t_Binary64Field *self, void *data)
      {
        ::org::hipparchus::util::Binary64 value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(value);
      }

      static PyObject *t_Binary64Field_get__runtimeClass(t_Binary64Field *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_Binary64Field_get__zero(t_Binary64Field *self, void *data)
      {
        ::org::hipparchus::util::Binary64 value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
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

              ::java::lang::Class *AttitudeManeuver::class$ = NULL;
              jmethodID *AttitudeManeuver::mids$ = NULL;
              bool AttitudeManeuver::live$ = false;

              jclass AttitudeManeuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getActuatorUsed_d2c8eb4129821f0e] = env->getMethodID(cls, "getActuatorUsed", "()Ljava/lang/String;");
                  mids$[mid_getBeginTime_9981f74b2d109da6] = env->getMethodID(cls, "getBeginTime", "()D");
                  mids$[mid_getDuration_9981f74b2d109da6] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getEndTime_9981f74b2d109da6] = env->getMethodID(cls, "getEndTime", "()D");
                  mids$[mid_getID_d2c8eb4129821f0e] = env->getMethodID(cls, "getID", "()Ljava/lang/String;");
                  mids$[mid_getManPurpose_d2c8eb4129821f0e] = env->getMethodID(cls, "getManPurpose", "()Ljava/lang/String;");
                  mids$[mid_getPrevID_d2c8eb4129821f0e] = env->getMethodID(cls, "getPrevID", "()Ljava/lang/String;");
                  mids$[mid_getTargetAttitude_4d68cff5f6e4403a] = env->getMethodID(cls, "getTargetAttitude", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
                  mids$[mid_getTargetMomFrame_0fc1562b68204151] = env->getMethodID(cls, "getTargetMomFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getTargetMomentum_032312bdeb3f2f93] = env->getMethodID(cls, "getTargetMomentum", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getTargetSpinRate_9981f74b2d109da6] = env->getMethodID(cls, "getTargetSpinRate", "()D");
                  mids$[mid_setActuatorUsed_105e1eadb709d9ac] = env->getMethodID(cls, "setActuatorUsed", "(Ljava/lang/String;)V");
                  mids$[mid_setBeginTime_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setBeginTime", "(D)V");
                  mids$[mid_setDuration_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setEndTime_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setEndTime", "(D)V");
                  mids$[mid_setID_105e1eadb709d9ac] = env->getMethodID(cls, "setID", "(Ljava/lang/String;)V");
                  mids$[mid_setManPurpose_105e1eadb709d9ac] = env->getMethodID(cls, "setManPurpose", "(Ljava/lang/String;)V");
                  mids$[mid_setPrevID_105e1eadb709d9ac] = env->getMethodID(cls, "setPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setTargetAttitude_c7213d7f3b4952c4] = env->getMethodID(cls, "setTargetAttitude", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
                  mids$[mid_setTargetMomFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setTargetMomFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setTargetMomentum_30f8886dfb88a63c] = env->getMethodID(cls, "setTargetMomentum", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setTargetSpinRate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTargetSpinRate", "(D)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeManeuver::AttitudeManeuver() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::java::lang::String AttitudeManeuver::getActuatorUsed() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getActuatorUsed_d2c8eb4129821f0e]));
              }

              jdouble AttitudeManeuver::getBeginTime() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBeginTime_9981f74b2d109da6]);
              }

              jdouble AttitudeManeuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_9981f74b2d109da6]);
              }

              jdouble AttitudeManeuver::getEndTime() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEndTime_9981f74b2d109da6]);
              }

              ::java::lang::String AttitudeManeuver::getID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getID_d2c8eb4129821f0e]));
              }

              ::java::lang::String AttitudeManeuver::getManPurpose() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManPurpose_d2c8eb4129821f0e]));
              }

              ::java::lang::String AttitudeManeuver::getPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrevID_d2c8eb4129821f0e]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudeManeuver::getTargetAttitude() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getTargetAttitude_4d68cff5f6e4403a]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeManeuver::getTargetMomFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getTargetMomFrame_0fc1562b68204151]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D AttitudeManeuver::getTargetMomentum() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTargetMomentum_032312bdeb3f2f93]));
              }

              jdouble AttitudeManeuver::getTargetSpinRate() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTargetSpinRate_9981f74b2d109da6]);
              }

              void AttitudeManeuver::setActuatorUsed(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setActuatorUsed_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeManeuver::setBeginTime(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBeginTime_1ad26e8c8c0cd65b], a0);
              }

              void AttitudeManeuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_1ad26e8c8c0cd65b], a0);
              }

              void AttitudeManeuver::setEndTime(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEndTime_1ad26e8c8c0cd65b], a0);
              }

              void AttitudeManeuver::setID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setID_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeManeuver::setManPurpose(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPurpose_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeManeuver::setPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrevID_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeManeuver::setTargetAttitude(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetAttitude_c7213d7f3b4952c4], a0.this$);
              }

              void AttitudeManeuver::setTargetMomFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetMomFrame_2c8b859a72c0094e], a0.this$);
              }

              void AttitudeManeuver::setTargetMomentum(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetMomentum_30f8886dfb88a63c], a0.this$);
              }

              void AttitudeManeuver::setTargetSpinRate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetSpinRate_1ad26e8c8c0cd65b], a0);
              }

              void AttitudeManeuver::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
              static PyObject *t_AttitudeManeuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeManeuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeManeuver_init_(t_AttitudeManeuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeManeuver_getActuatorUsed(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getBeginTime(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getDuration(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getEndTime(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getID(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getManPurpose(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getPrevID(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetAttitude(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetMomFrame(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetMomentum(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetSpinRate(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_setActuatorUsed(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setBeginTime(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setDuration(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setEndTime(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setID(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setManPurpose(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setPrevID(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetAttitude(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetMomFrame(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetMomentum(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetSpinRate(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_validate(t_AttitudeManeuver *self, PyObject *args);
              static PyObject *t_AttitudeManeuver_get__actuatorUsed(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__actuatorUsed(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__beginTime(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__beginTime(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__duration(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__duration(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__endTime(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__endTime(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__iD(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__iD(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__manPurpose(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__manPurpose(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__prevID(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__prevID(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetAttitude(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetAttitude(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetMomFrame(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetMomFrame(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetMomentum(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetMomentum(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetSpinRate(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetSpinRate(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeManeuver__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, actuatorUsed),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, beginTime),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, duration),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, endTime),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, iD),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, manPurpose),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, prevID),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetAttitude),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetMomFrame),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetMomentum),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetSpinRate),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeManeuver__methods_[] = {
                DECLARE_METHOD(t_AttitudeManeuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuver, getActuatorUsed, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getBeginTime, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getEndTime, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getManPurpose, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getPrevID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetAttitude, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetMomFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetMomentum, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetSpinRate, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, setActuatorUsed, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setBeginTime, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setDuration, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setEndTime, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setID, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setManPurpose, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setPrevID, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetAttitude, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetMomFrame, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetMomentum, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetSpinRate, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeManeuver)[] = {
                { Py_tp_methods, t_AttitudeManeuver__methods_ },
                { Py_tp_init, (void *) t_AttitudeManeuver_init_ },
                { Py_tp_getset, t_AttitudeManeuver__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeManeuver)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeManeuver, t_AttitudeManeuver, AttitudeManeuver);

              void t_AttitudeManeuver::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeManeuver), &PY_TYPE_DEF(AttitudeManeuver), module, "AttitudeManeuver", 0);
              }

              void t_AttitudeManeuver::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuver), "class_", make_descriptor(AttitudeManeuver::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuver), "wrapfn_", make_descriptor(t_AttitudeManeuver::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuver), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeManeuver_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeManeuver::initializeClass, 1)))
                  return NULL;
                return t_AttitudeManeuver::wrap_Object(AttitudeManeuver(((t_AttitudeManeuver *) arg)->object.this$));
              }
              static PyObject *t_AttitudeManeuver_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeManeuver::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeManeuver_init_(t_AttitudeManeuver *self, PyObject *args, PyObject *kwds)
              {
                AttitudeManeuver object((jobject) NULL);

                INT_CALL(object = AttitudeManeuver());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeManeuver_getActuatorUsed(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getActuatorUsed());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getBeginTime(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBeginTime());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_getDuration(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_getEndTime(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEndTime());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_getID(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getID());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getManPurpose(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPurpose());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getPrevID(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrevID());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetAttitude(t_AttitudeManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
                OBJ_CALL(result = self->object.getTargetAttitude());
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetMomFrame(t_AttitudeManeuver *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getTargetMomFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetMomentum(t_AttitudeManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getTargetMomentum());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetSpinRate(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTargetSpinRate());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_setActuatorUsed(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setActuatorUsed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setActuatorUsed", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setBeginTime(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBeginTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBeginTime", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setDuration(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDuration", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setEndTime(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEndTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEndTime", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setID(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setManPurpose(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManPurpose(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPurpose", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setPrevID(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPrevID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetAttitude(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTargetAttitude(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetAttitude", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetMomFrame(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTargetMomFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetMomFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetMomentum(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTargetMomentum(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetMomentum", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetSpinRate(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTargetSpinRate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetSpinRate", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_validate(t_AttitudeManeuver *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeManeuver), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeManeuver_get__actuatorUsed(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getActuatorUsed());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__actuatorUsed(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setActuatorUsed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "actuatorUsed", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__beginTime(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBeginTime());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__beginTime(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBeginTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "beginTime", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__duration(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__duration(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "duration", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__endTime(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEndTime());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__endTime(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEndTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "endTime", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__iD(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getID());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__iD(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "iD", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__manPurpose(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPurpose());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__manPurpose(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManPurpose(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPurpose", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__prevID(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrevID());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__prevID(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "prevID", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetAttitude(t_AttitudeManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
                OBJ_CALL(value = self->object.getTargetAttitude());
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
              }
              static int t_AttitudeManeuver_set__targetAttitude(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTargetAttitude(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetAttitude", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetMomFrame(t_AttitudeManeuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getTargetMomFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudeManeuver_set__targetMomFrame(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTargetMomFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetMomFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetMomentum(t_AttitudeManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getTargetMomentum());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_AttitudeManeuver_set__targetMomentum(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTargetMomentum(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetMomentum", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetSpinRate(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTargetSpinRate());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__targetSpinRate(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTargetSpinRate(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetSpinRate", arg);
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
#include "org/orekit/geometry/fov/EllipticalFieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *EllipticalFieldOfView::class$ = NULL;
        jmethodID *EllipticalFieldOfView::mids$ = NULL;
        bool EllipticalFieldOfView::live$ = false;

        jclass EllipticalFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/EllipticalFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fef8c64fec0e68b6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDD)V");
            mids$[mid_getFocus1_032312bdeb3f2f93] = env->getMethodID(cls, "getFocus1", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getFocus2_032312bdeb3f2f93] = env->getMethodID(cls, "getFocus2", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getHalfApertureAlongX_9981f74b2d109da6] = env->getMethodID(cls, "getHalfApertureAlongX", "()D");
            mids$[mid_getHalfApertureAlongY_9981f74b2d109da6] = env->getMethodID(cls, "getHalfApertureAlongY", "()D");
            mids$[mid_offsetFromBoundary_7ed10fb0bfbbf1c4] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_53c542efd8574582] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_directionAt_98a3eeef43dce47a] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EllipticalFieldOfView::EllipticalFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, jdouble a3, jdouble a4) : ::org::orekit::geometry::fov::SmoothFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_fef8c64fec0e68b6, a0.this$, a1.this$, a2, a3, a4)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EllipticalFieldOfView::getFocus1() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getFocus1_032312bdeb3f2f93]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EllipticalFieldOfView::getFocus2() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getFocus2_032312bdeb3f2f93]));
        }

        jdouble EllipticalFieldOfView::getHalfApertureAlongX() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHalfApertureAlongX_9981f74b2d109da6]);
        }

        jdouble EllipticalFieldOfView::getHalfApertureAlongY() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHalfApertureAlongY_9981f74b2d109da6]);
        }

        jdouble EllipticalFieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_7ed10fb0bfbbf1c4], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EllipticalFieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_53c542efd8574582], a0.this$));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_EllipticalFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EllipticalFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EllipticalFieldOfView_init_(t_EllipticalFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EllipticalFieldOfView_getFocus1(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_getFocus2(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongX(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongY(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_offsetFromBoundary(t_EllipticalFieldOfView *self, PyObject *args);
        static PyObject *t_EllipticalFieldOfView_projectToBoundary(t_EllipticalFieldOfView *self, PyObject *args);
        static PyObject *t_EllipticalFieldOfView_get__focus1(t_EllipticalFieldOfView *self, void *data);
        static PyObject *t_EllipticalFieldOfView_get__focus2(t_EllipticalFieldOfView *self, void *data);
        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongX(t_EllipticalFieldOfView *self, void *data);
        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongY(t_EllipticalFieldOfView *self, void *data);
        static PyGetSetDef t_EllipticalFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, focus1),
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, focus2),
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, halfApertureAlongX),
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, halfApertureAlongY),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EllipticalFieldOfView__methods_[] = {
          DECLARE_METHOD(t_EllipticalFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipticalFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getFocus1, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getFocus2, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getHalfApertureAlongX, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getHalfApertureAlongY, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, projectToBoundary, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EllipticalFieldOfView)[] = {
          { Py_tp_methods, t_EllipticalFieldOfView__methods_ },
          { Py_tp_init, (void *) t_EllipticalFieldOfView_init_ },
          { Py_tp_getset, t_EllipticalFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EllipticalFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::SmoothFieldOfView),
          NULL
        };

        DEFINE_TYPE(EllipticalFieldOfView, t_EllipticalFieldOfView, EllipticalFieldOfView);

        void t_EllipticalFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(EllipticalFieldOfView), &PY_TYPE_DEF(EllipticalFieldOfView), module, "EllipticalFieldOfView", 0);
        }

        void t_EllipticalFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipticalFieldOfView), "class_", make_descriptor(EllipticalFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipticalFieldOfView), "wrapfn_", make_descriptor(t_EllipticalFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipticalFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EllipticalFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EllipticalFieldOfView::initializeClass, 1)))
            return NULL;
          return t_EllipticalFieldOfView::wrap_Object(EllipticalFieldOfView(((t_EllipticalFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_EllipticalFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EllipticalFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EllipticalFieldOfView_init_(t_EllipticalFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          EllipticalFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kkDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = EllipticalFieldOfView(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EllipticalFieldOfView_getFocus1(t_EllipticalFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getFocus1());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_EllipticalFieldOfView_getFocus2(t_EllipticalFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getFocus2());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongX(t_EllipticalFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHalfApertureAlongX());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongY(t_EllipticalFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHalfApertureAlongY());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EllipticalFieldOfView_offsetFromBoundary(t_EllipticalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble result;

          if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_))
          {
            OBJ_CALL(result = self->object.offsetFromBoundary(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EllipticalFieldOfView), (PyObject *) self, "offsetFromBoundary", args, 2);
        }

        static PyObject *t_EllipticalFieldOfView_projectToBoundary(t_EllipticalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EllipticalFieldOfView), (PyObject *) self, "projectToBoundary", args, 2);
        }

        static PyObject *t_EllipticalFieldOfView_get__focus1(t_EllipticalFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getFocus1());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_EllipticalFieldOfView_get__focus2(t_EllipticalFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getFocus2());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongX(t_EllipticalFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHalfApertureAlongX());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongY(t_EllipticalFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHalfApertureAlongY());
          return PyFloat_FromDouble((double) value);
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
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NullPointerException::NullPointerException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    NullPointerException::NullPointerException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}
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
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::class$ = NULL;
          jmethodID *UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::mids$ = NULL;
          bool UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::live$ = false;

          jclass UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getUnnormalizedCnm_6d920aab27f0a3d2] = env->getMethodID(cls, "getUnnormalizedCnm", "(II)D");
              mids$[mid_getUnnormalizedSnm_6d920aab27f0a3d2] = env->getMethodID(cls, "getUnnormalizedSnm", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::getUnnormalizedCnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUnnormalizedCnm_6d920aab27f0a3d2], a0, a1);
          }

          jdouble UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::getUnnormalizedSnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUnnormalizedSnm_6d920aab27f0a3d2], a0, a1);
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
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedCnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedSnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args);

          static PyMethodDef t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, getUnnormalizedCnm, METH_VARARGS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, getUnnormalizedSnm, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics)[] = {
            { Py_tp_methods, t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
            NULL
          };

          DEFINE_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics);

          void t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), &PY_TYPE_DEF(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), module, "UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics", 0);
          }

          void t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), "class_", make_descriptor(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), "wrapfn_", make_descriptor(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::wrap_Object(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics(((t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedCnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedCnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedCnm", args);
            return NULL;
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedSnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedSnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedSnm", args);
            return NULL;
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
                mids$[mid_init$_b35db77cae58639e] = env->getMethodID(cls, "<init>", "(Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GPSCivilianNavigationMessage::GPSCivilianNavigationMessage(jboolean a0) : ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_b35db77cae58639e, a0)) {}
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
#include "org/hipparchus/exception/UTF8Control.h"
#include "java/util/Locale.h"
#include "java/io/IOException.h"
#include "java/lang/InstantiationException.h"
#include "java/lang/IllegalAccessException.h"
#include "java/util/ResourceBundle.h"
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
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_newBundle_9d8ce1b08b92301a] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTF8Control::UTF8Control() : ::java::util::ResourceBundle$Control(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ::java::util::ResourceBundle UTF8Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
      {
        return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_9d8ce1b08b92301a], a0.this$, a1.this$, a2.this$, a3.this$, a4));
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
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {

    ::java::lang::Class *CalculusFieldElement::class$ = NULL;
    jmethodID *CalculusFieldElement::mids$ = NULL;
    bool CalculusFieldElement::live$ = false;

    jclass CalculusFieldElement::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("org/hipparchus/CalculusFieldElement");

        mids$ = new jmethodID[max_mid];
        mids$[mid_abs_f6328613456309a1] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_acos_f6328613456309a1] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_acosh_f6328613456309a1] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_add_2931f2385f0244b2] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_asin_f6328613456309a1] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_asinh_f6328613456309a1] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_atan_f6328613456309a1] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_atan2_6c107bef87eef23a] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_atanh_f6328613456309a1] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_cbrt_f6328613456309a1] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_ceil_f6328613456309a1] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_copySign_2931f2385f0244b2] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_copySign_6c107bef87eef23a] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_cos_f6328613456309a1] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_cosh_f6328613456309a1] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_divide_2931f2385f0244b2] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_exp_f6328613456309a1] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_expm1_f6328613456309a1] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_floor_f6328613456309a1] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_getExponent_d6ab429752e7c267] = env->getMethodID(cls, "getExponent", "()I");
        mids$[mid_getPi_f6328613456309a1] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_hypot_6c107bef87eef23a] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_isFinite_eee3de00fe971136] = env->getMethodID(cls, "isFinite", "()Z");
        mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
        mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
        mids$[mid_linearCombination_00286450062ca7cc] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_e1fce98e75df5d98] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/FieldElement;[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_797e174db380e13a] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_1179bbafe6054a62] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_cd0fbf0395a62bd3] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_84340afa1e5f2d75] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_a37c7637839d3af2] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_1dd3245a75ae068a] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_log_f6328613456309a1] = env->getMethodID(cls, "log", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_log10_f6328613456309a1] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_log1p_f6328613456309a1] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_multiply_2931f2385f0244b2] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_newInstance_2931f2385f0244b2] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_norm_9981f74b2d109da6] = env->getMethodID(cls, "norm", "()D");
        mids$[mid_pow_2931f2385f0244b2] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_pow_bae57aba20797b29] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_pow_6c107bef87eef23a] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_reciprocal_f6328613456309a1] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_remainder_2931f2385f0244b2] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_remainder_6c107bef87eef23a] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_rint_f6328613456309a1] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_rootN_bae57aba20797b29] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_round_42c72b98e3c2e08a] = env->getMethodID(cls, "round", "()J");
        mids$[mid_scalb_bae57aba20797b29] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_sign_f6328613456309a1] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_sin_f6328613456309a1] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
        mids$[mid_sinh_f6328613456309a1] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
        mids$[mid_sqrt_f6328613456309a1] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_subtract_2931f2385f0244b2] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_tan_f6328613456309a1] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_tanh_f6328613456309a1] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_toDegrees_f6328613456309a1] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_toRadians_f6328613456309a1] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_ulp_f6328613456309a1] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/FieldElement;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::abs() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_abs_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::acos() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_acos_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::acosh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_acosh_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::add(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_add_2931f2385f0244b2], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::asin() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_asin_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::asinh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_asinh_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::atan() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_atan_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::atan2(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_atan2_6c107bef87eef23a], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::atanh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_atanh_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::cbrt() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_cbrt_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::ceil() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_ceil_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::copySign(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_copySign_2931f2385f0244b2], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::copySign(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_copySign_6c107bef87eef23a], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::cos() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_cos_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::cosh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_cosh_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::divide(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_divide_2931f2385f0244b2], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::exp() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_exp_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::expm1() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_expm1_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::floor() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_floor_f6328613456309a1]));
    }

    jint CalculusFieldElement::getExponent() const
    {
      return env->callIntMethod(this$, mids$[mid_getExponent_d6ab429752e7c267]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::getPi() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getPi_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::hypot(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_hypot_6c107bef87eef23a], a0.this$));
    }

    jboolean CalculusFieldElement::isFinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isFinite_eee3de00fe971136]);
    }

    jboolean CalculusFieldElement::isInfinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
    }

    jboolean CalculusFieldElement::isNaN() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_00286450062ca7cc], a0.this$, a1.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const JArray< ::org::hipparchus::FieldElement > & a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_e1fce98e75df5d98], a0.this$, a1.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(jdouble a0, const ::org::hipparchus::FieldElement & a1, jdouble a2, const ::org::hipparchus::FieldElement & a3) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_797e174db380e13a], a0, a1.this$, a2, a3.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1, const ::org::hipparchus::FieldElement & a2, const ::org::hipparchus::FieldElement & a3) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_1179bbafe6054a62], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(jdouble a0, const ::org::hipparchus::FieldElement & a1, jdouble a2, const ::org::hipparchus::FieldElement & a3, jdouble a4, const ::org::hipparchus::FieldElement & a5) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_cd0fbf0395a62bd3], a0, a1.this$, a2, a3.this$, a4, a5.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1, const ::org::hipparchus::FieldElement & a2, const ::org::hipparchus::FieldElement & a3, const ::org::hipparchus::FieldElement & a4, const ::org::hipparchus::FieldElement & a5) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_84340afa1e5f2d75], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(jdouble a0, const ::org::hipparchus::FieldElement & a1, jdouble a2, const ::org::hipparchus::FieldElement & a3, jdouble a4, const ::org::hipparchus::FieldElement & a5, jdouble a6, const ::org::hipparchus::FieldElement & a7) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_a37c7637839d3af2], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1, const ::org::hipparchus::FieldElement & a2, const ::org::hipparchus::FieldElement & a3, const ::org::hipparchus::FieldElement & a4, const ::org::hipparchus::FieldElement & a5, const ::org::hipparchus::FieldElement & a6, const ::org::hipparchus::FieldElement & a7) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_1dd3245a75ae068a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::log() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_log_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::log10() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_log10_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::log1p() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_log1p_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::multiply(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_multiply_2931f2385f0244b2], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::newInstance(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_newInstance_2931f2385f0244b2], a0));
    }

    jdouble CalculusFieldElement::norm() const
    {
      return env->callDoubleMethod(this$, mids$[mid_norm_9981f74b2d109da6]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::pow(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_pow_2931f2385f0244b2], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::pow(jint a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_pow_bae57aba20797b29], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::pow(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_pow_6c107bef87eef23a], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::reciprocal() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_reciprocal_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::remainder(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_remainder_2931f2385f0244b2], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::remainder(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_remainder_6c107bef87eef23a], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::rint() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_rint_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::rootN(jint a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_rootN_bae57aba20797b29], a0));
    }

    jlong CalculusFieldElement::round() const
    {
      return env->callLongMethod(this$, mids$[mid_round_42c72b98e3c2e08a]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::scalb(jint a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_scalb_bae57aba20797b29], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sign() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sign_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sin() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sin_f6328613456309a1]));
    }

    ::org::hipparchus::util::FieldSinCos CalculusFieldElement::sinCos() const
    {
      return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sinh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sinh_f6328613456309a1]));
    }

    ::org::hipparchus::util::FieldSinhCosh CalculusFieldElement::sinhCosh() const
    {
      return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sqrt() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sqrt_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::subtract(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_subtract_2931f2385f0244b2], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::tan() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_tan_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::tanh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_tanh_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::toDegrees() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_toDegrees_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::toRadians() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_toRadians_f6328613456309a1]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::ulp() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_ulp_f6328613456309a1]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    static PyObject *t_CalculusFieldElement_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_CalculusFieldElement_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_CalculusFieldElement_of_(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_abs(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_acos(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_acosh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_add(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_asin(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_asinh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_atan(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_atan2(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_atanh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_cbrt(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_ceil(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_copySign(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_cos(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_cosh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_divide(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_exp(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_expm1(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_floor(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_getExponent(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_getPi(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_hypot(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_isFinite(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_isInfinite(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_isNaN(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_linearCombination(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_log(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_log10(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_log1p(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_multiply(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_newInstance(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_norm(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_pow(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_reciprocal(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_remainder(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_rint(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_rootN(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_round(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_scalb(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_sign(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sin(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sinCos(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sinh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sinhCosh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sqrt(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_subtract(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_tan(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_tanh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_toDegrees(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_toRadians(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_ulp(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_get__exponent(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__finite(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__infinite(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__naN(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__pi(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__parameters_(t_CalculusFieldElement *self, void *data);
    static PyGetSetDef t_CalculusFieldElement__fields_[] = {
      DECLARE_GET_FIELD(t_CalculusFieldElement, exponent),
      DECLARE_GET_FIELD(t_CalculusFieldElement, finite),
      DECLARE_GET_FIELD(t_CalculusFieldElement, infinite),
      DECLARE_GET_FIELD(t_CalculusFieldElement, naN),
      DECLARE_GET_FIELD(t_CalculusFieldElement, pi),
      DECLARE_GET_FIELD(t_CalculusFieldElement, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_CalculusFieldElement__methods_[] = {
      DECLARE_METHOD(t_CalculusFieldElement, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_CalculusFieldElement, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_CalculusFieldElement, of_, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, abs, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, acos, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, acosh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, add, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, asin, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, asinh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, atan, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, atan2, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, atanh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, cbrt, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, ceil, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, copySign, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, cos, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, cosh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, divide, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, exp, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, expm1, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, floor, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, getExponent, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, getPi, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, hypot, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, isFinite, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, isInfinite, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, isNaN, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, linearCombination, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, log, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, log10, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, log1p, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, multiply, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, newInstance, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, norm, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, pow, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, reciprocal, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, remainder, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, rint, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, rootN, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, round, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, scalb, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, sign, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sin, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sinCos, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sinh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sinhCosh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sqrt, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, subtract, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, tan, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, tanh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, toDegrees, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, toRadians, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, ulp, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(CalculusFieldElement)[] = {
      { Py_tp_methods, t_CalculusFieldElement__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_CalculusFieldElement__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(CalculusFieldElement)[] = {
      &PY_TYPE_DEF(::org::hipparchus::FieldElement),
      NULL
    };

    DEFINE_TYPE(CalculusFieldElement, t_CalculusFieldElement, CalculusFieldElement);
    PyObject *t_CalculusFieldElement::wrap_Object(const CalculusFieldElement& object, PyTypeObject *p0)
    {
      PyObject *obj = t_CalculusFieldElement::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_CalculusFieldElement *self = (t_CalculusFieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_CalculusFieldElement::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_CalculusFieldElement::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_CalculusFieldElement *self = (t_CalculusFieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_CalculusFieldElement::install(PyObject *module)
    {
      installType(&PY_TYPE(CalculusFieldElement), &PY_TYPE_DEF(CalculusFieldElement), module, "CalculusFieldElement", 0);
    }

    void t_CalculusFieldElement::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldElement), "class_", make_descriptor(CalculusFieldElement::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldElement), "wrapfn_", make_descriptor(t_CalculusFieldElement::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldElement), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_CalculusFieldElement_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, CalculusFieldElement::initializeClass, 1)))
        return NULL;
      return t_CalculusFieldElement::wrap_Object(CalculusFieldElement(((t_CalculusFieldElement *) arg)->object.this$));
    }
    static PyObject *t_CalculusFieldElement_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, CalculusFieldElement::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_CalculusFieldElement_of_(t_CalculusFieldElement *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_CalculusFieldElement_abs(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.abs());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_acos(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.acos());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_acosh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.acosh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_add(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_CalculusFieldElement_asin(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.asin());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_asinh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.asinh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_atan(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.atan());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_atan2(t_CalculusFieldElement *self, PyObject *arg)
    {
      ::org::hipparchus::FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.atan2(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "atan2", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_atanh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.atanh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_cbrt(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.cbrt());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_ceil(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.ceil());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_copySign(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.copySign(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.copySign(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "copySign", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_cos(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.cos());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_cosh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.cosh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_divide(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.divide(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "divide", args, 2);
    }

    static PyObject *t_CalculusFieldElement_exp(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.exp());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_expm1(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.expm1());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_floor(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.floor());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_getExponent(t_CalculusFieldElement *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getExponent());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_CalculusFieldElement_getPi(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.getPi());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_hypot(t_CalculusFieldElement *self, PyObject *arg)
    {
      ::org::hipparchus::FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.hypot(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "hypot", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_isFinite(t_CalculusFieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isFinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_CalculusFieldElement_isInfinite(t_CalculusFieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInfinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_CalculusFieldElement_isNaN(t_CalculusFieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNaN());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_CalculusFieldElement_linearCombination(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "[D[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "DKDK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "KKKK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          jdouble a4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "DKDKDK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "KKKKKK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          jdouble a4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          jdouble a6;
          ::org::hipparchus::FieldElement a7((jobject) NULL);
          PyTypeObject **p7;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "DKDKDKDK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_, &a6, &a7, &p7, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::hipparchus::FieldElement a6((jobject) NULL);
          PyTypeObject **p6;
          ::org::hipparchus::FieldElement a7((jobject) NULL);
          PyTypeObject **p7;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_FieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_log(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.log());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_log10(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.log10());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_log1p(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.log1p());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_multiply(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.multiply(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "multiply", args, 2);
    }

    static PyObject *t_CalculusFieldElement_newInstance(t_CalculusFieldElement *self, PyObject *arg)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = self->object.newInstance(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_norm(t_CalculusFieldElement *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.norm());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_CalculusFieldElement_pow(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.pow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.pow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.pow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "pow", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_reciprocal(t_CalculusFieldElement *self, PyObject *args)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.reciprocal());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "reciprocal", args, 2);
    }

    static PyObject *t_CalculusFieldElement_remainder(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.remainder(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.remainder(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "remainder", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_rint(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.rint());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_rootN(t_CalculusFieldElement *self, PyObject *arg)
    {
      jint a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.rootN(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "rootN", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_round(t_CalculusFieldElement *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.round());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_CalculusFieldElement_scalb(t_CalculusFieldElement *self, PyObject *arg)
    {
      jint a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.scalb(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "scalb", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_sign(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sign());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_sin(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sin());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_sinCos(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
      OBJ_CALL(result = self->object.sinCos());
      return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_CalculusFieldElement_sinh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sinh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_sinhCosh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
      OBJ_CALL(result = self->object.sinhCosh());
      return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_CalculusFieldElement_sqrt(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sqrt());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_subtract(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.subtract(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "subtract", args, 2);
    }

    static PyObject *t_CalculusFieldElement_tan(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.tan());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_tanh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.tanh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_toDegrees(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.toDegrees());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_toRadians(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.toRadians());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_ulp(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.ulp());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }
    static PyObject *t_CalculusFieldElement_get__parameters_(t_CalculusFieldElement *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_CalculusFieldElement_get__exponent(t_CalculusFieldElement *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getExponent());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_CalculusFieldElement_get__finite(t_CalculusFieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isFinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_CalculusFieldElement_get__infinite(t_CalculusFieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInfinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_CalculusFieldElement_get__naN(t_CalculusFieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNaN());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_CalculusFieldElement_get__pi(t_CalculusFieldElement *self, void *data)
    {
      ::org::hipparchus::FieldElement value((jobject) NULL);
      OBJ_CALL(value = self->object.getPi());
      return ::org::hipparchus::t_FieldElement::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/ComplexEigenDecomposition.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ComplexEigenDecomposition::class$ = NULL;
      jmethodID *ComplexEigenDecomposition::mids$ = NULL;
      bool ComplexEigenDecomposition::live$ = false;
      jdouble ComplexEigenDecomposition::DEFAULT_EIGENVECTORS_EQUALITY = (jdouble) 0;
      jdouble ComplexEigenDecomposition::DEFAULT_EPSILON = (jdouble) 0;
      jdouble ComplexEigenDecomposition::DEFAULT_EPSILON_AV_VD_CHECK = (jdouble) 0;

      jclass ComplexEigenDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ComplexEigenDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_e834f27fc5021cbd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DDD)V");
          mids$[mid_getD_02883dbbe5db44ac] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getDeterminant_9981f74b2d109da6] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getEigenvalues_6bea1b718c2aa50b] = env->getMethodID(cls, "getEigenvalues", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvector_229c51f1f7aa44e3] = env->getMethodID(cls, "getEigenvector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getV_02883dbbe5db44ac] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getVT_02883dbbe5db44ac] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_hasComplexEigenvalues_eee3de00fe971136] = env->getMethodID(cls, "hasComplexEigenvalues", "()Z");
          mids$[mid_findEigenVectors_87e4c06eff884f7d] = env->getMethodID(cls, "findEigenVectors", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_matricesToEigenArrays_ff7cb6c242604316] = env->getMethodID(cls, "matricesToEigenArrays", "()V");
          mids$[mid_checkDefinition_f5364c9a9d9cbd53] = env->getMethodID(cls, "checkDefinition", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_findEigenValues_f5364c9a9d9cbd53] = env->getMethodID(cls, "findEigenValues", "(Lorg/hipparchus/linear/RealMatrix;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EIGENVECTORS_EQUALITY = env->getStaticDoubleField(cls, "DEFAULT_EIGENVECTORS_EQUALITY");
          DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
          DEFAULT_EPSILON_AV_VD_CHECK = env->getStaticDoubleField(cls, "DEFAULT_EPSILON_AV_VD_CHECK");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexEigenDecomposition::ComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

      ComplexEigenDecomposition::ComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e834f27fc5021cbd, a0.this$, a1, a2, a3)) {}

      ::org::hipparchus::linear::FieldMatrix ComplexEigenDecomposition::getD() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getD_02883dbbe5db44ac]));
      }

      jdouble ComplexEigenDecomposition::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_9981f74b2d109da6]);
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexEigenDecomposition::getEigenvalues() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getEigenvalues_6bea1b718c2aa50b]));
      }

      ::org::hipparchus::linear::FieldVector ComplexEigenDecomposition::getEigenvector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getEigenvector_229c51f1f7aa44e3], a0));
      }

      ::org::hipparchus::linear::FieldMatrix ComplexEigenDecomposition::getV() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getV_02883dbbe5db44ac]));
      }

      ::org::hipparchus::linear::FieldMatrix ComplexEigenDecomposition::getVT() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getVT_02883dbbe5db44ac]));
      }

      jboolean ComplexEigenDecomposition::hasComplexEigenvalues() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasComplexEigenvalues_eee3de00fe971136]);
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
      static PyObject *t_ComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexEigenDecomposition_init_(t_ComplexEigenDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexEigenDecomposition_getD(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getDeterminant(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getEigenvalues(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getEigenvector(t_ComplexEigenDecomposition *self, PyObject *arg);
      static PyObject *t_ComplexEigenDecomposition_getV(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getVT(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_hasComplexEigenvalues(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_get__d(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__determinant(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__eigenvalues(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__v(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__vT(t_ComplexEigenDecomposition *self, void *data);
      static PyGetSetDef t_ComplexEigenDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, d),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, determinant),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, eigenvalues),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, v),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexEigenDecomposition__methods_[] = {
        DECLARE_METHOD(t_ComplexEigenDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getD, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getEigenvalues, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getEigenvector, METH_O),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getV, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getVT, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, hasComplexEigenvalues, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexEigenDecomposition)[] = {
        { Py_tp_methods, t_ComplexEigenDecomposition__methods_ },
        { Py_tp_init, (void *) t_ComplexEigenDecomposition_init_ },
        { Py_tp_getset, t_ComplexEigenDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexEigenDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexEigenDecomposition, t_ComplexEigenDecomposition, ComplexEigenDecomposition);

      void t_ComplexEigenDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexEigenDecomposition), &PY_TYPE_DEF(ComplexEigenDecomposition), module, "ComplexEigenDecomposition", 0);
      }

      void t_ComplexEigenDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "class_", make_descriptor(ComplexEigenDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "wrapfn_", make_descriptor(t_ComplexEigenDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "boxfn_", make_descriptor(boxObject));
        env->getClass(ComplexEigenDecomposition::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "DEFAULT_EIGENVECTORS_EQUALITY", make_descriptor(ComplexEigenDecomposition::DEFAULT_EIGENVECTORS_EQUALITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "DEFAULT_EPSILON", make_descriptor(ComplexEigenDecomposition::DEFAULT_EPSILON));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "DEFAULT_EPSILON_AV_VD_CHECK", make_descriptor(ComplexEigenDecomposition::DEFAULT_EPSILON_AV_VD_CHECK));
      }

      static PyObject *t_ComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexEigenDecomposition::initializeClass, 1)))
          return NULL;
        return t_ComplexEigenDecomposition::wrap_Object(ComplexEigenDecomposition(((t_ComplexEigenDecomposition *) arg)->object.this$));
      }
      static PyObject *t_ComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexEigenDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexEigenDecomposition_init_(t_ComplexEigenDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = ComplexEigenDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            ComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDDD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = ComplexEigenDecomposition(a0, a1, a2, a3));
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

      static PyObject *t_ComplexEigenDecomposition_getD(t_ComplexEigenDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexEigenDecomposition_getDeterminant(t_ComplexEigenDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ComplexEigenDecomposition_getEigenvalues(t_ComplexEigenDecomposition *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getEigenvalues());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexEigenDecomposition_getEigenvector(t_ComplexEigenDecomposition *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvector", arg);
        return NULL;
      }

      static PyObject *t_ComplexEigenDecomposition_getV(t_ComplexEigenDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexEigenDecomposition_getVT(t_ComplexEigenDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexEigenDecomposition_hasComplexEigenvalues(t_ComplexEigenDecomposition *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasComplexEigenvalues());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ComplexEigenDecomposition_get__d(t_ComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_ComplexEigenDecomposition_get__determinant(t_ComplexEigenDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ComplexEigenDecomposition_get__eigenvalues(t_ComplexEigenDecomposition *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getEigenvalues());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexEigenDecomposition_get__v(t_ComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_ComplexEigenDecomposition_get__vT(t_ComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/NonNegativeConstraint.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *NonNegativeConstraint::class$ = NULL;
        jmethodID *NonNegativeConstraint::mids$ = NULL;
        bool NonNegativeConstraint::live$ = false;

        jclass NonNegativeConstraint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/NonNegativeConstraint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b35db77cae58639e] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_isRestrictedToNonNegative_eee3de00fe971136] = env->getMethodID(cls, "isRestrictedToNonNegative", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NonNegativeConstraint::NonNegativeConstraint(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b35db77cae58639e, a0)) {}

        jboolean NonNegativeConstraint::isRestrictedToNonNegative() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isRestrictedToNonNegative_eee3de00fe971136]);
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
        static PyObject *t_NonNegativeConstraint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NonNegativeConstraint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NonNegativeConstraint_init_(t_NonNegativeConstraint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NonNegativeConstraint_isRestrictedToNonNegative(t_NonNegativeConstraint *self);
        static PyObject *t_NonNegativeConstraint_get__restrictedToNonNegative(t_NonNegativeConstraint *self, void *data);
        static PyGetSetDef t_NonNegativeConstraint__fields_[] = {
          DECLARE_GET_FIELD(t_NonNegativeConstraint, restrictedToNonNegative),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NonNegativeConstraint__methods_[] = {
          DECLARE_METHOD(t_NonNegativeConstraint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NonNegativeConstraint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NonNegativeConstraint, isRestrictedToNonNegative, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NonNegativeConstraint)[] = {
          { Py_tp_methods, t_NonNegativeConstraint__methods_ },
          { Py_tp_init, (void *) t_NonNegativeConstraint_init_ },
          { Py_tp_getset, t_NonNegativeConstraint__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NonNegativeConstraint)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NonNegativeConstraint, t_NonNegativeConstraint, NonNegativeConstraint);

        void t_NonNegativeConstraint::install(PyObject *module)
        {
          installType(&PY_TYPE(NonNegativeConstraint), &PY_TYPE_DEF(NonNegativeConstraint), module, "NonNegativeConstraint", 0);
        }

        void t_NonNegativeConstraint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NonNegativeConstraint), "class_", make_descriptor(NonNegativeConstraint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NonNegativeConstraint), "wrapfn_", make_descriptor(t_NonNegativeConstraint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NonNegativeConstraint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NonNegativeConstraint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NonNegativeConstraint::initializeClass, 1)))
            return NULL;
          return t_NonNegativeConstraint::wrap_Object(NonNegativeConstraint(((t_NonNegativeConstraint *) arg)->object.this$));
        }
        static PyObject *t_NonNegativeConstraint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NonNegativeConstraint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NonNegativeConstraint_init_(t_NonNegativeConstraint *self, PyObject *args, PyObject *kwds)
        {
          jboolean a0;
          NonNegativeConstraint object((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            INT_CALL(object = NonNegativeConstraint(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NonNegativeConstraint_isRestrictedToNonNegative(t_NonNegativeConstraint *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isRestrictedToNonNegative());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_NonNegativeConstraint_get__restrictedToNonNegative(t_NonNegativeConstraint *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isRestrictedToNonNegative());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/FieldEllipse.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *FieldEllipse::class$ = NULL;
      jmethodID *FieldEllipse::mids$ = NULL;
      bool FieldEllipse::live$ = false;

      jclass FieldEllipse::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/FieldEllipse");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7487621e90fe4291] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getA_08d37e3f77b7239d] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getB_08d37e3f77b7239d] = env->getMethodID(cls, "getB", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCenter_d1b42a6748e907f9] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getCenterOfCurvature_7942696c79200ea4] = env->getMethodID(cls, "getCenterOfCurvature", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getU_d1b42a6748e907f9] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getV_d1b42a6748e907f9] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_pointAt_c2b058e1eb7a8988] = env->getMethodID(cls, "pointAt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_projectToEllipse_42f03a1654758e56] = env->getMethodID(cls, "projectToEllipse", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_projectToEllipse_7942696c79200ea4] = env->getMethodID(cls, "projectToEllipse", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
          mids$[mid_toPlane_f59945942a1427c6] = env->getMethodID(cls, "toPlane", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
          mids$[mid_toSpace_6c5279bc1e96d3cb] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldEllipse::FieldEllipse(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::frames::Frame & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7487621e90fe4291, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldEllipse::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEllipse::getB() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getB_08d37e3f77b7239d]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::getCenter() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getCenter_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldEllipse::getCenterOfCurvature(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_getCenterOfCurvature_7942696c79200ea4], a0.this$));
      }

      ::org::orekit::frames::Frame FieldEllipse::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::getU() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getU_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::getV() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getV_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::pointAt(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointAt_c2b058e1eb7a8988], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldEllipse::projectToEllipse(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToEllipse_42f03a1654758e56], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldEllipse::projectToEllipse(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_projectToEllipse_7942696c79200ea4], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldEllipse::toPlane(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_toPlane_f59945942a1427c6], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::toSpace(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toSpace_6c5279bc1e96d3cb], a0.this$));
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
      static PyObject *t_FieldEllipse_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEllipse_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEllipse_of_(t_FieldEllipse *self, PyObject *args);
      static int t_FieldEllipse_init_(t_FieldEllipse *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldEllipse_getA(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getB(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getCenter(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getCenterOfCurvature(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_getFrame(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getU(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_getV(t_FieldEllipse *self);
      static PyObject *t_FieldEllipse_pointAt(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_projectToEllipse(t_FieldEllipse *self, PyObject *args);
      static PyObject *t_FieldEllipse_toPlane(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_toSpace(t_FieldEllipse *self, PyObject *arg);
      static PyObject *t_FieldEllipse_get__a(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__b(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__center(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__frame(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__u(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__v(t_FieldEllipse *self, void *data);
      static PyObject *t_FieldEllipse_get__parameters_(t_FieldEllipse *self, void *data);
      static PyGetSetDef t_FieldEllipse__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEllipse, a),
        DECLARE_GET_FIELD(t_FieldEllipse, b),
        DECLARE_GET_FIELD(t_FieldEllipse, center),
        DECLARE_GET_FIELD(t_FieldEllipse, frame),
        DECLARE_GET_FIELD(t_FieldEllipse, u),
        DECLARE_GET_FIELD(t_FieldEllipse, v),
        DECLARE_GET_FIELD(t_FieldEllipse, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEllipse__methods_[] = {
        DECLARE_METHOD(t_FieldEllipse, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEllipse, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEllipse, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEllipse, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getB, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getCenter, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getCenterOfCurvature, METH_O),
        DECLARE_METHOD(t_FieldEllipse, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getU, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, getV, METH_NOARGS),
        DECLARE_METHOD(t_FieldEllipse, pointAt, METH_O),
        DECLARE_METHOD(t_FieldEllipse, projectToEllipse, METH_VARARGS),
        DECLARE_METHOD(t_FieldEllipse, toPlane, METH_O),
        DECLARE_METHOD(t_FieldEllipse, toSpace, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEllipse)[] = {
        { Py_tp_methods, t_FieldEllipse__methods_ },
        { Py_tp_init, (void *) t_FieldEllipse_init_ },
        { Py_tp_getset, t_FieldEllipse__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEllipse)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldEllipse, t_FieldEllipse, FieldEllipse);
      PyObject *t_FieldEllipse::wrap_Object(const FieldEllipse& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEllipse::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEllipse *self = (t_FieldEllipse *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEllipse::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEllipse::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEllipse *self = (t_FieldEllipse *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEllipse::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEllipse), &PY_TYPE_DEF(FieldEllipse), module, "FieldEllipse", 0);
      }

      void t_FieldEllipse::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEllipse), "class_", make_descriptor(FieldEllipse::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEllipse), "wrapfn_", make_descriptor(t_FieldEllipse::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEllipse), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEllipse_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEllipse::initializeClass, 1)))
          return NULL;
        return t_FieldEllipse::wrap_Object(FieldEllipse(((t_FieldEllipse *) arg)->object.this$));
      }
      static PyObject *t_FieldEllipse_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEllipse::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEllipse_of_(t_FieldEllipse *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldEllipse_init_(t_FieldEllipse *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
        PyTypeObject **p3;
        ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
        PyTypeObject **p4;
        ::org::orekit::frames::Frame a5((jobject) NULL);
        FieldEllipse object((jobject) NULL);

        if (!parseArgs(args, "KKKKKk", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
        {
          INT_CALL(object = FieldEllipse(a0, a1, a2, a3, a4, a5));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldEllipse_getA(t_FieldEllipse *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldEllipse_getB(t_FieldEllipse *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getB());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldEllipse_getCenter(t_FieldEllipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEllipse_getCenterOfCurvature(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_))
        {
          OBJ_CALL(result = self->object.getCenterOfCurvature(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getCenterOfCurvature", arg);
        return NULL;
      }

      static PyObject *t_FieldEllipse_getFrame(t_FieldEllipse *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldEllipse_getU(t_FieldEllipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEllipse_getV(t_FieldEllipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEllipse_pointAt(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.pointAt(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAt", arg);
        return NULL;
      }

      static PyObject *t_FieldEllipse_projectToEllipse(t_FieldEllipse *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToEllipse", args);
        return NULL;
      }

      static PyObject *t_FieldEllipse_toPlane(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
        {
          OBJ_CALL(result = self->object.toPlane(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "toPlane", arg);
        return NULL;
      }

      static PyObject *t_FieldEllipse_toSpace(t_FieldEllipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_))
        {
          OBJ_CALL(result = self->object.toSpace(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
        return NULL;
      }
      static PyObject *t_FieldEllipse_get__parameters_(t_FieldEllipse *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEllipse_get__a(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__b(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getB());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__center(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__frame(t_FieldEllipse *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__u(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldEllipse_get__v(t_FieldEllipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalParametersWriter::class$ = NULL;
            jmethodID *AdditionalParametersWriter::mids$ = NULL;
            bool AdditionalParametersWriter::live$ = false;

            jclass AdditionalParametersWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalParametersWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_05c6d36d73082fa6] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

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
            static PyObject *t_AdditionalParametersWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParametersWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_AdditionalParametersWriter__methods_[] = {
              DECLARE_METHOD(t_AdditionalParametersWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalParametersWriter)[] = {
              { Py_tp_methods, t_AdditionalParametersWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalParametersWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(AdditionalParametersWriter, t_AdditionalParametersWriter, AdditionalParametersWriter);

            void t_AdditionalParametersWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalParametersWriter), &PY_TYPE_DEF(AdditionalParametersWriter), module, "AdditionalParametersWriter", 0);
            }

            void t_AdditionalParametersWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersWriter), "class_", make_descriptor(AdditionalParametersWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersWriter), "wrapfn_", make_descriptor(t_AdditionalParametersWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdditionalParametersWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalParametersWriter::initializeClass, 1)))
                return NULL;
              return t_AdditionalParametersWriter::wrap_Object(AdditionalParametersWriter(((t_AdditionalParametersWriter *) arg)->object.this$));
            }
            static PyObject *t_AdditionalParametersWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalParametersWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *DataQuality::class$ = NULL;
            jmethodID *DataQuality::mids$ = NULL;
            bool DataQuality::live$ = false;
            DataQuality *DataQuality::DEGRADED = NULL;
            DataQuality *DataQuality::RAW = NULL;
            DataQuality *DataQuality::VALIDATED = NULL;

            jclass DataQuality::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/DataQuality");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_934da1b0c27434d9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;");
                mids$[mid_values_a5d652cebedfcf64] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEGRADED = new DataQuality(env->getStaticObjectField(cls, "DEGRADED", "Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;"));
                RAW = new DataQuality(env->getStaticObjectField(cls, "RAW", "Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;"));
                VALIDATED = new DataQuality(env->getStaticObjectField(cls, "VALIDATED", "Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DataQuality DataQuality::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return DataQuality(env->callStaticObjectMethod(cls, mids$[mid_valueOf_934da1b0c27434d9], a0.this$));
            }

            JArray< DataQuality > DataQuality::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< DataQuality >(env->callStaticObjectMethod(cls, mids$[mid_values_a5d652cebedfcf64]));
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
            static PyObject *t_DataQuality_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DataQuality_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DataQuality_of_(t_DataQuality *self, PyObject *args);
            static PyObject *t_DataQuality_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_DataQuality_values(PyTypeObject *type);
            static PyObject *t_DataQuality_get__parameters_(t_DataQuality *self, void *data);
            static PyGetSetDef t_DataQuality__fields_[] = {
              DECLARE_GET_FIELD(t_DataQuality, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DataQuality__methods_[] = {
              DECLARE_METHOD(t_DataQuality, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DataQuality, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DataQuality, of_, METH_VARARGS),
              DECLARE_METHOD(t_DataQuality, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_DataQuality, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DataQuality)[] = {
              { Py_tp_methods, t_DataQuality__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DataQuality__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DataQuality)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(DataQuality, t_DataQuality, DataQuality);
            PyObject *t_DataQuality::wrap_Object(const DataQuality& object, PyTypeObject *p0)
            {
              PyObject *obj = t_DataQuality::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_DataQuality *self = (t_DataQuality *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_DataQuality::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_DataQuality::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_DataQuality *self = (t_DataQuality *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_DataQuality::install(PyObject *module)
            {
              installType(&PY_TYPE(DataQuality), &PY_TYPE_DEF(DataQuality), module, "DataQuality", 0);
            }

            void t_DataQuality::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "class_", make_descriptor(DataQuality::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "wrapfn_", make_descriptor(t_DataQuality::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "boxfn_", make_descriptor(boxObject));
              env->getClass(DataQuality::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "DEGRADED", make_descriptor(t_DataQuality::wrap_Object(*DataQuality::DEGRADED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "RAW", make_descriptor(t_DataQuality::wrap_Object(*DataQuality::RAW)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "VALIDATED", make_descriptor(t_DataQuality::wrap_Object(*DataQuality::VALIDATED)));
            }

            static PyObject *t_DataQuality_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DataQuality::initializeClass, 1)))
                return NULL;
              return t_DataQuality::wrap_Object(DataQuality(((t_DataQuality *) arg)->object.this$));
            }
            static PyObject *t_DataQuality_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DataQuality::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DataQuality_of_(t_DataQuality *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_DataQuality_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              DataQuality result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::DataQuality::valueOf(a0));
                return t_DataQuality::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_DataQuality_values(PyTypeObject *type)
            {
              JArray< DataQuality > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::DataQuality::values());
              return JArray<jobject>(result.this$).wrap(t_DataQuality::wrap_jobject);
            }
            static PyObject *t_DataQuality_get__parameters_(t_DataQuality *self, void *data)
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
#include "org/orekit/estimation/iod/IodLambert.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/time/AbsoluteDate.h"
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

        ::java::lang::Class *IodLambert::class$ = NULL;
        jmethodID *IodLambert::mids$ = NULL;
        bool IodLambert::live$ = false;

        jclass IodLambert::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodLambert");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_f3a059523fa45d08] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;ZILorg/orekit/estimation/measurements/PV;Lorg/orekit/estimation/measurements/PV;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_1a9f087f7bb55679] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;ZILorg/orekit/estimation/measurements/Position;Lorg/orekit/estimation/measurements/Position;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_ad6b3416d9d657ed] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;ZILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodLambert::IodLambert(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ::org::orekit::orbits::Orbit IodLambert::estimate(const ::org::orekit::frames::Frame & a0, jboolean a1, jint a2, const ::org::orekit::estimation::measurements::PV & a3, const ::org::orekit::estimation::measurements::PV & a4) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_f3a059523fa45d08], a0.this$, a1, a2, a3.this$, a4.this$));
        }

        ::org::orekit::orbits::Orbit IodLambert::estimate(const ::org::orekit::frames::Frame & a0, jboolean a1, jint a2, const ::org::orekit::estimation::measurements::Position & a3, const ::org::orekit::estimation::measurements::Position & a4) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_1a9f087f7bb55679], a0.this$, a1, a2, a3.this$, a4.this$));
        }

        ::org::orekit::orbits::Orbit IodLambert::estimate(const ::org::orekit::frames::Frame & a0, jboolean a1, jint a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::time::AbsoluteDate & a6) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_ad6b3416d9d657ed], a0.this$, a1, a2, a3.this$, a4.this$, a5.this$, a6.this$));
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
        static PyObject *t_IodLambert_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodLambert_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodLambert_init_(t_IodLambert *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodLambert_estimate(t_IodLambert *self, PyObject *args);

        static PyMethodDef t_IodLambert__methods_[] = {
          DECLARE_METHOD(t_IodLambert, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLambert, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLambert, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodLambert)[] = {
          { Py_tp_methods, t_IodLambert__methods_ },
          { Py_tp_init, (void *) t_IodLambert_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodLambert)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodLambert, t_IodLambert, IodLambert);

        void t_IodLambert::install(PyObject *module)
        {
          installType(&PY_TYPE(IodLambert), &PY_TYPE_DEF(IodLambert), module, "IodLambert", 0);
        }

        void t_IodLambert::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLambert), "class_", make_descriptor(IodLambert::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLambert), "wrapfn_", make_descriptor(t_IodLambert::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLambert), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodLambert_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodLambert::initializeClass, 1)))
            return NULL;
          return t_IodLambert::wrap_Object(IodLambert(((t_IodLambert *) arg)->object.this$));
        }
        static PyObject *t_IodLambert_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodLambert::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodLambert_init_(t_IodLambert *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodLambert object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodLambert(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodLambert_estimate(t_IodLambert *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jboolean a1;
              jint a2;
              ::org::orekit::estimation::measurements::PV a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::estimation::measurements::PV a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kZIKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::estimation::measurements::t_PV::parameters_, &a4, &p4, ::org::orekit::estimation::measurements::t_PV::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jboolean a1;
              jint a2;
              ::org::orekit::estimation::measurements::Position a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::estimation::measurements::Position a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kZIKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::estimation::measurements::t_Position::parameters_, &a4, &p4, ::org::orekit::estimation::measurements::t_Position::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jboolean a1;
              jint a2;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kZIkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
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
#include "org/hipparchus/filtering/kalman/AbstractKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *AbstractKalmanFilter::class$ = NULL;
        jmethodID *AbstractKalmanFilter::mids$ = NULL;
        bool AbstractKalmanFilter::live$ = false;

        jclass AbstractKalmanFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/AbstractKalmanFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCorrected_270f067ba2ecffc6] = env->getMethodID(cls, "getCorrected", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getPredicted_270f067ba2ecffc6] = env->getMethodID(cls, "getPredicted", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_predict_757a87fa089054a4] = env->getMethodID(cls, "predict", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_correct_b3f1a36810e108a6] = env->getMethodID(cls, "correct", "(Lorg/hipparchus/filtering/kalman/Measurement;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_computeInnovationCovarianceMatrix_6412409473265b02] = env->getMethodID(cls, "computeInnovationCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate AbstractKalmanFilter::getCorrected() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getCorrected_270f067ba2ecffc6]));
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate AbstractKalmanFilter::getPredicted() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getPredicted_270f067ba2ecffc6]));
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
        static PyObject *t_AbstractKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanFilter_of_(t_AbstractKalmanFilter *self, PyObject *args);
        static PyObject *t_AbstractKalmanFilter_getCorrected(t_AbstractKalmanFilter *self);
        static PyObject *t_AbstractKalmanFilter_getPredicted(t_AbstractKalmanFilter *self);
        static PyObject *t_AbstractKalmanFilter_get__corrected(t_AbstractKalmanFilter *self, void *data);
        static PyObject *t_AbstractKalmanFilter_get__predicted(t_AbstractKalmanFilter *self, void *data);
        static PyObject *t_AbstractKalmanFilter_get__parameters_(t_AbstractKalmanFilter *self, void *data);
        static PyGetSetDef t_AbstractKalmanFilter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractKalmanFilter, corrected),
          DECLARE_GET_FIELD(t_AbstractKalmanFilter, predicted),
          DECLARE_GET_FIELD(t_AbstractKalmanFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractKalmanFilter__methods_[] = {
          DECLARE_METHOD(t_AbstractKalmanFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractKalmanFilter, getCorrected, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanFilter, getPredicted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractKalmanFilter)[] = {
          { Py_tp_methods, t_AbstractKalmanFilter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractKalmanFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractKalmanFilter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractKalmanFilter, t_AbstractKalmanFilter, AbstractKalmanFilter);
        PyObject *t_AbstractKalmanFilter::wrap_Object(const AbstractKalmanFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractKalmanFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractKalmanFilter *self = (t_AbstractKalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractKalmanFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractKalmanFilter *self = (t_AbstractKalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractKalmanFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractKalmanFilter), &PY_TYPE_DEF(AbstractKalmanFilter), module, "AbstractKalmanFilter", 0);
        }

        void t_AbstractKalmanFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanFilter), "class_", make_descriptor(AbstractKalmanFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanFilter), "wrapfn_", make_descriptor(t_AbstractKalmanFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractKalmanFilter::initializeClass, 1)))
            return NULL;
          return t_AbstractKalmanFilter::wrap_Object(AbstractKalmanFilter(((t_AbstractKalmanFilter *) arg)->object.this$));
        }
        static PyObject *t_AbstractKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractKalmanFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractKalmanFilter_of_(t_AbstractKalmanFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractKalmanFilter_getCorrected(t_AbstractKalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanFilter_getPredicted(t_AbstractKalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }
        static PyObject *t_AbstractKalmanFilter_get__parameters_(t_AbstractKalmanFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractKalmanFilter_get__corrected(t_AbstractKalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanFilter_get__predicted(t_AbstractKalmanFilter *self, void *data)
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
#include "org/orekit/attitudes/YawCompensation.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *YawCompensation::class$ = NULL;
      jmethodID *YawCompensation::mids$ = NULL;
      bool YawCompensation::live$ = false;

      jclass YawCompensation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/YawCompensation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_49240b6f46f84815] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/attitudes/GroundPointing;)V");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getBaseState_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getBaseState_a02177519e1b6a45] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getTargetPV_19719ebf0495cd86] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_11bfbaf3cce3e66c] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getUnderlyingAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getYawAngle_0cd7fb3ba780c7b9] = env->getMethodID(cls, "getYawAngle", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)D");
          mids$[mid_getYawAngle_7f0c088969d99c56] = env->getMethodID(cls, "getYawAngle", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      YawCompensation::YawCompensation(const ::org::orekit::frames::Frame & a0, const ::org::orekit::attitudes::GroundPointing & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_49240b6f46f84815, a0.this$, a1.this$)) {}

      ::org::orekit::attitudes::Attitude YawCompensation::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawCompensation::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawCompensation::getBaseState(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getBaseState_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude YawCompensation::getBaseState(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getBaseState_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates YawCompensation::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_19719ebf0495cd86], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates YawCompensation::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_11bfbaf3cce3e66c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider YawCompensation::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_2f73d1f4460b8d6c]));
      }

      jdouble YawCompensation::getYawAngle(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getYawAngle_0cd7fb3ba780c7b9], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement YawCompensation::getYawAngle(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getYawAngle_7f0c088969d99c56], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_YawCompensation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_YawCompensation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_YawCompensation_init_(t_YawCompensation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_YawCompensation_getAttitude(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_getBaseState(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_getTargetPV(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_getUnderlyingAttitudeProvider(t_YawCompensation *self);
      static PyObject *t_YawCompensation_getYawAngle(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_get__underlyingAttitudeProvider(t_YawCompensation *self, void *data);
      static PyGetSetDef t_YawCompensation__fields_[] = {
        DECLARE_GET_FIELD(t_YawCompensation, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_YawCompensation__methods_[] = {
        DECLARE_METHOD(t_YawCompensation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawCompensation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawCompensation, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_YawCompensation, getBaseState, METH_VARARGS),
        DECLARE_METHOD(t_YawCompensation, getTargetPV, METH_VARARGS),
        DECLARE_METHOD(t_YawCompensation, getUnderlyingAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_YawCompensation, getYawAngle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(YawCompensation)[] = {
        { Py_tp_methods, t_YawCompensation__methods_ },
        { Py_tp_init, (void *) t_YawCompensation_init_ },
        { Py_tp_getset, t_YawCompensation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(YawCompensation)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(YawCompensation, t_YawCompensation, YawCompensation);

      void t_YawCompensation::install(PyObject *module)
      {
        installType(&PY_TYPE(YawCompensation), &PY_TYPE_DEF(YawCompensation), module, "YawCompensation", 0);
      }

      void t_YawCompensation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawCompensation), "class_", make_descriptor(YawCompensation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawCompensation), "wrapfn_", make_descriptor(t_YawCompensation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawCompensation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_YawCompensation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, YawCompensation::initializeClass, 1)))
          return NULL;
        return t_YawCompensation::wrap_Object(YawCompensation(((t_YawCompensation *) arg)->object.this$));
      }
      static PyObject *t_YawCompensation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, YawCompensation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_YawCompensation_init_(t_YawCompensation *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::attitudes::GroundPointing a1((jobject) NULL);
        YawCompensation object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::attitudes::GroundPointing::initializeClass, &a0, &a1))
        {
          INT_CALL(object = YawCompensation(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_YawCompensation_getAttitude(t_YawCompensation *self, PyObject *args)
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

        return callSuper(PY_TYPE(YawCompensation), (PyObject *) self, "getAttitude", args, 2);
      }

      static PyObject *t_YawCompensation_getBaseState(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getBaseState", args);
        return NULL;
      }

      static PyObject *t_YawCompensation_getTargetPV(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }

      static PyObject *t_YawCompensation_getUnderlyingAttitudeProvider(t_YawCompensation *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_YawCompensation_getYawAngle(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getYawAngle(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getYawAngle(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getYawAngle", args);
        return NULL;
      }

      static PyObject *t_YawCompensation_get__underlyingAttitudeProvider(t_YawCompensation *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *MeasurementType::class$ = NULL;
      jmethodID *MeasurementType::mids$ = NULL;
      bool MeasurementType::live$ = false;
      MeasurementType *MeasurementType::CARRIER_PHASE = NULL;
      MeasurementType *MeasurementType::COMBINED_RANGE_PHASE = NULL;
      MeasurementType *MeasurementType::DOPPLER = NULL;
      MeasurementType *MeasurementType::PSEUDO_RANGE = NULL;
      MeasurementType *MeasurementType::SIGNAL_STRENGTH = NULL;

      jclass MeasurementType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/MeasurementType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_dd1ad3a9a1e9632b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/MeasurementType;");
          mids$[mid_values_9f5a87fd1e906dc5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/MeasurementType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CARRIER_PHASE = new MeasurementType(env->getStaticObjectField(cls, "CARRIER_PHASE", "Lorg/orekit/gnss/MeasurementType;"));
          COMBINED_RANGE_PHASE = new MeasurementType(env->getStaticObjectField(cls, "COMBINED_RANGE_PHASE", "Lorg/orekit/gnss/MeasurementType;"));
          DOPPLER = new MeasurementType(env->getStaticObjectField(cls, "DOPPLER", "Lorg/orekit/gnss/MeasurementType;"));
          PSEUDO_RANGE = new MeasurementType(env->getStaticObjectField(cls, "PSEUDO_RANGE", "Lorg/orekit/gnss/MeasurementType;"));
          SIGNAL_STRENGTH = new MeasurementType(env->getStaticObjectField(cls, "SIGNAL_STRENGTH", "Lorg/orekit/gnss/MeasurementType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MeasurementType MeasurementType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MeasurementType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_dd1ad3a9a1e9632b], a0.this$));
      }

      JArray< MeasurementType > MeasurementType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< MeasurementType >(env->callStaticObjectMethod(cls, mids$[mid_values_9f5a87fd1e906dc5]));
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
      static PyObject *t_MeasurementType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MeasurementType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MeasurementType_of_(t_MeasurementType *self, PyObject *args);
      static PyObject *t_MeasurementType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MeasurementType_values(PyTypeObject *type);
      static PyObject *t_MeasurementType_get__parameters_(t_MeasurementType *self, void *data);
      static PyGetSetDef t_MeasurementType__fields_[] = {
        DECLARE_GET_FIELD(t_MeasurementType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MeasurementType__methods_[] = {
        DECLARE_METHOD(t_MeasurementType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MeasurementType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MeasurementType, of_, METH_VARARGS),
        DECLARE_METHOD(t_MeasurementType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MeasurementType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MeasurementType)[] = {
        { Py_tp_methods, t_MeasurementType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MeasurementType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MeasurementType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(MeasurementType, t_MeasurementType, MeasurementType);
      PyObject *t_MeasurementType::wrap_Object(const MeasurementType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MeasurementType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MeasurementType *self = (t_MeasurementType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MeasurementType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MeasurementType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MeasurementType *self = (t_MeasurementType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MeasurementType::install(PyObject *module)
      {
        installType(&PY_TYPE(MeasurementType), &PY_TYPE_DEF(MeasurementType), module, "MeasurementType", 0);
      }

      void t_MeasurementType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "class_", make_descriptor(MeasurementType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "wrapfn_", make_descriptor(t_MeasurementType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "boxfn_", make_descriptor(boxObject));
        env->getClass(MeasurementType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "CARRIER_PHASE", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::CARRIER_PHASE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "COMBINED_RANGE_PHASE", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::COMBINED_RANGE_PHASE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "DOPPLER", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::DOPPLER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "PSEUDO_RANGE", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::PSEUDO_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "SIGNAL_STRENGTH", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::SIGNAL_STRENGTH)));
      }

      static PyObject *t_MeasurementType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MeasurementType::initializeClass, 1)))
          return NULL;
        return t_MeasurementType::wrap_Object(MeasurementType(((t_MeasurementType *) arg)->object.this$));
      }
      static PyObject *t_MeasurementType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MeasurementType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MeasurementType_of_(t_MeasurementType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MeasurementType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        MeasurementType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::MeasurementType::valueOf(a0));
          return t_MeasurementType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_MeasurementType_values(PyTypeObject *type)
      {
        JArray< MeasurementType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::MeasurementType::values());
        return JArray<jobject>(result.this$).wrap(t_MeasurementType::wrap_jobject);
      }
      static PyObject *t_MeasurementType_get__parameters_(t_MeasurementType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}

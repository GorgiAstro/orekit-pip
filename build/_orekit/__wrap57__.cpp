#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/BaseAbstractFieldUnivariateIntegrator.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *BaseAbstractFieldUnivariateIntegrator::class$ = NULL;
        jmethodID *BaseAbstractFieldUnivariateIntegrator::mids$ = NULL;
        bool BaseAbstractFieldUnivariateIntegrator::live$ = false;
        jdouble BaseAbstractFieldUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY = (jdouble) 0;
        jint BaseAbstractFieldUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT = (jint) 0;
        jint BaseAbstractFieldUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT = (jint) 0;
        jdouble BaseAbstractFieldUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY = (jdouble) 0;

        jclass BaseAbstractFieldUnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/BaseAbstractFieldUnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getIterations_412668abc8d889e9] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_febca2424e26c993] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMin_613c8f46c659f636] = env->getMethodID(cls, "getMin", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMax_613c8f46c659f636] = env->getMethodID(cls, "getMax", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_computeObjectiveValue_6672ad854985cb64] = env->getMethodID(cls, "computeObjectiveValue", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_doIntegrate_613c8f46c659f636] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_setup_c5866c4f44a777c3] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ABSOLUTE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_ABSOLUTE_ACCURACY");
            DEFAULT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS_COUNT");
            DEFAULT_MIN_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MIN_ITERATIONS_COUNT");
            DEFAULT_RELATIVE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_RELATIVE_ACCURACY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseAbstractFieldUnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_557b8123390d8d0c]);
        }

        jint BaseAbstractFieldUnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
        }

        ::org::hipparchus::Field BaseAbstractFieldUnivariateIntegrator::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
        }

        jint BaseAbstractFieldUnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_412668abc8d889e9]);
        }

        jint BaseAbstractFieldUnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_412668abc8d889e9]);
        }

        jint BaseAbstractFieldUnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_412668abc8d889e9]);
        }

        jdouble BaseAbstractFieldUnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_557b8123390d8d0c]);
        }

        ::org::hipparchus::CalculusFieldElement BaseAbstractFieldUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_febca2424e26c993], a0, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_of_(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getEvaluations(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getField(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getIterations(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_integrate(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__evaluations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__field(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__iterations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__parameters_(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyGetSetDef t_BaseAbstractFieldUnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, field),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, relativeAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseAbstractFieldUnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getField, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseAbstractFieldUnivariateIntegrator)[] = {
          { Py_tp_methods, t_BaseAbstractFieldUnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseAbstractFieldUnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseAbstractFieldUnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseAbstractFieldUnivariateIntegrator, t_BaseAbstractFieldUnivariateIntegrator, BaseAbstractFieldUnivariateIntegrator);
        PyObject *t_BaseAbstractFieldUnivariateIntegrator::wrap_Object(const BaseAbstractFieldUnivariateIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractFieldUnivariateIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractFieldUnivariateIntegrator *self = (t_BaseAbstractFieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseAbstractFieldUnivariateIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractFieldUnivariateIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractFieldUnivariateIntegrator *self = (t_BaseAbstractFieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseAbstractFieldUnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseAbstractFieldUnivariateIntegrator), &PY_TYPE_DEF(BaseAbstractFieldUnivariateIntegrator), module, "BaseAbstractFieldUnivariateIntegrator", 0);
        }

        void t_BaseAbstractFieldUnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "class_", make_descriptor(BaseAbstractFieldUnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "wrapfn_", make_descriptor(t_BaseAbstractFieldUnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(BaseAbstractFieldUnivariateIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_ABSOLUTE_ACCURACY", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_MAX_ITERATIONS_COUNT", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_MIN_ITERATIONS_COUNT", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_RELATIVE_ACCURACY", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY));
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseAbstractFieldUnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_BaseAbstractFieldUnivariateIntegrator::wrap_Object(BaseAbstractFieldUnivariateIntegrator(((t_BaseAbstractFieldUnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseAbstractFieldUnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_of_(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getEvaluations(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getField(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getIterations(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_integrate(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__parameters_(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__evaluations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__field(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__iterations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/DoubleArrayDictionary$Entry.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/DoubleArrayDictionary$Entry.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *DoubleArrayDictionary$Entry::class$ = NULL;
      jmethodID *DoubleArrayDictionary$Entry::mids$ = NULL;
      bool DoubleArrayDictionary$Entry::live$ = false;

      jclass DoubleArrayDictionary$Entry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/DoubleArrayDictionary$Entry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_3cffd47377eca18a] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
          mids$[mid_getValue_a53a7513ecedada2] = env->getMethodID(cls, "getValue", "()[D");
          mids$[mid_increment_cc18240f4a737f14] = env->getMethodID(cls, "increment", "([D)V");
          mids$[mid_scaledIncrement_08f180e87df7be95] = env->getMethodID(cls, "scaledIncrement", "(DLorg/orekit/utils/DoubleArrayDictionary$Entry;)V");
          mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
          mids$[mid_zero_0640e6acf969ed28] = env->getMethodID(cls, "zero", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String DoubleArrayDictionary$Entry::getKey() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_3cffd47377eca18a]));
      }

      JArray< jdouble > DoubleArrayDictionary$Entry::getValue() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValue_a53a7513ecedada2]));
      }

      void DoubleArrayDictionary$Entry::increment(const JArray< jdouble > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_cc18240f4a737f14], a0.this$);
      }

      void DoubleArrayDictionary$Entry::scaledIncrement(jdouble a0, const DoubleArrayDictionary$Entry & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaledIncrement_08f180e87df7be95], a0, a1.this$);
      }

      jint DoubleArrayDictionary$Entry::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
      }

      void DoubleArrayDictionary$Entry::zero() const
      {
        env->callVoidMethod(this$, mids$[mid_zero_0640e6acf969ed28]);
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
      static PyObject *t_DoubleArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary$Entry_getKey(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_getValue(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_increment(t_DoubleArrayDictionary$Entry *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary$Entry_scaledIncrement(t_DoubleArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary$Entry_size(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_zero(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_get__key(t_DoubleArrayDictionary$Entry *self, void *data);
      static PyObject *t_DoubleArrayDictionary$Entry_get__value(t_DoubleArrayDictionary$Entry *self, void *data);
      static PyGetSetDef t_DoubleArrayDictionary$Entry__fields_[] = {
        DECLARE_GET_FIELD(t_DoubleArrayDictionary$Entry, key),
        DECLARE_GET_FIELD(t_DoubleArrayDictionary$Entry, value),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DoubleArrayDictionary$Entry__methods_[] = {
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, getKey, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, getValue, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, increment, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, scaledIncrement, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, size, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, zero, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleArrayDictionary$Entry)[] = {
        { Py_tp_methods, t_DoubleArrayDictionary$Entry__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DoubleArrayDictionary$Entry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleArrayDictionary$Entry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleArrayDictionary$Entry, t_DoubleArrayDictionary$Entry, DoubleArrayDictionary$Entry);

      void t_DoubleArrayDictionary$Entry::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleArrayDictionary$Entry), &PY_TYPE_DEF(DoubleArrayDictionary$Entry), module, "DoubleArrayDictionary$Entry", 0);
      }

      void t_DoubleArrayDictionary$Entry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary$Entry), "class_", make_descriptor(DoubleArrayDictionary$Entry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary$Entry), "wrapfn_", make_descriptor(t_DoubleArrayDictionary$Entry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary$Entry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleArrayDictionary$Entry::initializeClass, 1)))
          return NULL;
        return t_DoubleArrayDictionary$Entry::wrap_Object(DoubleArrayDictionary$Entry(((t_DoubleArrayDictionary$Entry *) arg)->object.this$));
      }
      static PyObject *t_DoubleArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleArrayDictionary$Entry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_getKey(t_DoubleArrayDictionary$Entry *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return j2p(result);
      }

      static PyObject *t_DoubleArrayDictionary$Entry_getValue(t_DoubleArrayDictionary$Entry *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return result.wrap();
      }

      static PyObject *t_DoubleArrayDictionary$Entry_increment(t_DoubleArrayDictionary$Entry *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(self->object.increment(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "increment", arg);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_scaledIncrement(t_DoubleArrayDictionary$Entry *self, PyObject *args)
      {
        jdouble a0;
        DoubleArrayDictionary$Entry a1((jobject) NULL);

        if (!parseArgs(args, "Dk", DoubleArrayDictionary$Entry::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.scaledIncrement(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "scaledIncrement", args);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_size(t_DoubleArrayDictionary$Entry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DoubleArrayDictionary$Entry_zero(t_DoubleArrayDictionary$Entry *self)
      {
        OBJ_CALL(self->object.zero());
        Py_RETURN_NONE;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_get__key(t_DoubleArrayDictionary$Entry *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return j2p(value);
      }

      static PyObject *t_DoubleArrayDictionary$Entry_get__value(t_DoubleArrayDictionary$Entry *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCategory::class$ = NULL;
              jmethodID *OrbitCategory::mids$ = NULL;
              bool OrbitCategory::live$ = false;
              OrbitCategory *OrbitCategory::EGO = NULL;
              OrbitCategory *OrbitCategory::ESO = NULL;
              OrbitCategory *OrbitCategory::GEO = NULL;
              OrbitCategory *OrbitCategory::GHO = NULL;
              OrbitCategory *OrbitCategory::GSO = NULL;
              OrbitCategory *OrbitCategory::GTO = NULL;
              OrbitCategory *OrbitCategory::HAO = NULL;
              OrbitCategory *OrbitCategory::HEO = NULL;
              OrbitCategory *OrbitCategory::IGO = NULL;
              OrbitCategory *OrbitCategory::LEO = NULL;
              OrbitCategory *OrbitCategory::LMO = NULL;
              OrbitCategory *OrbitCategory::MEO = NULL;
              OrbitCategory *OrbitCategory::MGO = NULL;
              OrbitCategory *OrbitCategory::NSO = NULL;
              OrbitCategory *OrbitCategory::UFO = NULL;

              jclass OrbitCategory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_cac85bd723f3f49f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;");
                  mids$[mid_values_fd74b3a77a3645ee] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  EGO = new OrbitCategory(env->getStaticObjectField(cls, "EGO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  ESO = new OrbitCategory(env->getStaticObjectField(cls, "ESO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GEO = new OrbitCategory(env->getStaticObjectField(cls, "GEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GHO = new OrbitCategory(env->getStaticObjectField(cls, "GHO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GSO = new OrbitCategory(env->getStaticObjectField(cls, "GSO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GTO = new OrbitCategory(env->getStaticObjectField(cls, "GTO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  HAO = new OrbitCategory(env->getStaticObjectField(cls, "HAO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  HEO = new OrbitCategory(env->getStaticObjectField(cls, "HEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  IGO = new OrbitCategory(env->getStaticObjectField(cls, "IGO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  LEO = new OrbitCategory(env->getStaticObjectField(cls, "LEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  LMO = new OrbitCategory(env->getStaticObjectField(cls, "LMO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  MEO = new OrbitCategory(env->getStaticObjectField(cls, "MEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  MGO = new OrbitCategory(env->getStaticObjectField(cls, "MGO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  NSO = new OrbitCategory(env->getStaticObjectField(cls, "NSO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  UFO = new OrbitCategory(env->getStaticObjectField(cls, "UFO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::lang::String OrbitCategory::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
              }

              OrbitCategory OrbitCategory::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitCategory(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cac85bd723f3f49f], a0.this$));
              }

              JArray< OrbitCategory > OrbitCategory::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitCategory >(env->callStaticObjectMethod(cls, mids$[mid_values_fd74b3a77a3645ee]));
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
              static PyObject *t_OrbitCategory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCategory_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCategory_of_(t_OrbitCategory *self, PyObject *args);
              static PyObject *t_OrbitCategory_toString(t_OrbitCategory *self, PyObject *args);
              static PyObject *t_OrbitCategory_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitCategory_values(PyTypeObject *type);
              static PyObject *t_OrbitCategory_get__parameters_(t_OrbitCategory *self, void *data);
              static PyGetSetDef t_OrbitCategory__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCategory, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCategory__methods_[] = {
                DECLARE_METHOD(t_OrbitCategory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCategory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCategory, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCategory, toString, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCategory, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitCategory, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCategory)[] = {
                { Py_tp_methods, t_OrbitCategory__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitCategory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCategory)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitCategory, t_OrbitCategory, OrbitCategory);
              PyObject *t_OrbitCategory::wrap_Object(const OrbitCategory& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCategory::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCategory *self = (t_OrbitCategory *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitCategory::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCategory::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCategory *self = (t_OrbitCategory *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitCategory::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCategory), &PY_TYPE_DEF(OrbitCategory), module, "OrbitCategory", 0);
              }

              void t_OrbitCategory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "class_", make_descriptor(OrbitCategory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "wrapfn_", make_descriptor(t_OrbitCategory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitCategory::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "EGO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::EGO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "ESO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::ESO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GHO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GHO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GSO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GSO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GTO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GTO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "HAO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::HAO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "HEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::HEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "IGO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::IGO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "LEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::LEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "LMO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::LMO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "MEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::MEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "MGO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::MGO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "NSO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::NSO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "UFO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::UFO)));
              }

              static PyObject *t_OrbitCategory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCategory::initializeClass, 1)))
                  return NULL;
                return t_OrbitCategory::wrap_Object(OrbitCategory(((t_OrbitCategory *) arg)->object.this$));
              }
              static PyObject *t_OrbitCategory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCategory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitCategory_of_(t_OrbitCategory *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitCategory_toString(t_OrbitCategory *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(OrbitCategory), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_OrbitCategory_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitCategory result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::valueOf(a0));
                  return t_OrbitCategory::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitCategory_values(PyTypeObject *type)
              {
                JArray< OrbitCategory > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitCategory::wrap_jobject);
              }
              static PyObject *t_OrbitCategory_get__parameters_(t_OrbitCategory *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OnOff::class$ = NULL;
          jmethodID *OnOff::mids$ = NULL;
          bool OnOff::live$ = false;
          OnOff *OnOff::OFF = NULL;
          OnOff *OnOff::ON = NULL;

          jclass OnOff::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OnOff");

              mids$ = new jmethodID[max_mid];
              mids$[mid_isOn_89b302893bdbe1f1] = env->getMethodID(cls, "isOn", "()Z");
              mids$[mid_valueOf_b3425661c8839a36] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OnOff;");
              mids$[mid_values_ec032e6bc72340b5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/OnOff;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              OFF = new OnOff(env->getStaticObjectField(cls, "OFF", "Lorg/orekit/files/ccsds/definitions/OnOff;"));
              ON = new OnOff(env->getStaticObjectField(cls, "ON", "Lorg/orekit/files/ccsds/definitions/OnOff;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean OnOff::isOn() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isOn_89b302893bdbe1f1]);
          }

          OnOff OnOff::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OnOff(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b3425661c8839a36], a0.this$));
          }

          JArray< OnOff > OnOff::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OnOff >(env->callStaticObjectMethod(cls, mids$[mid_values_ec032e6bc72340b5]));
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
        namespace definitions {
          static PyObject *t_OnOff_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnOff_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnOff_of_(t_OnOff *self, PyObject *args);
          static PyObject *t_OnOff_isOn(t_OnOff *self);
          static PyObject *t_OnOff_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OnOff_values(PyTypeObject *type);
          static PyObject *t_OnOff_get__on(t_OnOff *self, void *data);
          static PyObject *t_OnOff_get__parameters_(t_OnOff *self, void *data);
          static PyGetSetDef t_OnOff__fields_[] = {
            DECLARE_GET_FIELD(t_OnOff, on),
            DECLARE_GET_FIELD(t_OnOff, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnOff__methods_[] = {
            DECLARE_METHOD(t_OnOff, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnOff, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnOff, of_, METH_VARARGS),
            DECLARE_METHOD(t_OnOff, isOn, METH_NOARGS),
            DECLARE_METHOD(t_OnOff, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OnOff, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnOff)[] = {
            { Py_tp_methods, t_OnOff__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OnOff__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnOff)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OnOff, t_OnOff, OnOff);
          PyObject *t_OnOff::wrap_Object(const OnOff& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OnOff::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OnOff *self = (t_OnOff *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OnOff::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OnOff::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OnOff *self = (t_OnOff *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OnOff::install(PyObject *module)
          {
            installType(&PY_TYPE(OnOff), &PY_TYPE_DEF(OnOff), module, "OnOff", 0);
          }

          void t_OnOff::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "class_", make_descriptor(OnOff::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "wrapfn_", make_descriptor(t_OnOff::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "boxfn_", make_descriptor(boxObject));
            env->getClass(OnOff::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "OFF", make_descriptor(t_OnOff::wrap_Object(*OnOff::OFF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "ON", make_descriptor(t_OnOff::wrap_Object(*OnOff::ON)));
          }

          static PyObject *t_OnOff_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnOff::initializeClass, 1)))
              return NULL;
            return t_OnOff::wrap_Object(OnOff(((t_OnOff *) arg)->object.this$));
          }
          static PyObject *t_OnOff_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnOff::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OnOff_of_(t_OnOff *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OnOff_isOn(t_OnOff *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isOn());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OnOff_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OnOff result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OnOff::valueOf(a0));
              return t_OnOff::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OnOff_values(PyTypeObject *type)
          {
            JArray< OnOff > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OnOff::values());
            return JArray<jobject>(result.this$).wrap(t_OnOff::wrap_jobject);
          }
          static PyObject *t_OnOff_get__parameters_(t_OnOff *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OnOff_get__on(t_OnOff *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isOn());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/io/Serializable.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *GeodeticPoint::class$ = NULL;
      jmethodID *GeodeticPoint::mids$ = NULL;
      bool GeodeticPoint::live$ = false;
      GeodeticPoint *GeodeticPoint::NORTH_POLE = NULL;
      GeodeticPoint *GeodeticPoint::SOUTH_POLE = NULL;

      jclass GeodeticPoint::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/GeodeticPoint");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getAltitude_557b8123390d8d0c] = env->getMethodID(cls, "getAltitude", "()D");
          mids$[mid_getEast_f88961cca75a2c0a] = env->getMethodID(cls, "getEast", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getLatitude_557b8123390d8d0c] = env->getMethodID(cls, "getLatitude", "()D");
          mids$[mid_getLongitude_557b8123390d8d0c] = env->getMethodID(cls, "getLongitude", "()D");
          mids$[mid_getNadir_f88961cca75a2c0a] = env->getMethodID(cls, "getNadir", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNorth_f88961cca75a2c0a] = env->getMethodID(cls, "getNorth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getSouth_f88961cca75a2c0a] = env->getMethodID(cls, "getSouth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getWest_f88961cca75a2c0a] = env->getMethodID(cls, "getWest", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getZenith_f88961cca75a2c0a] = env->getMethodID(cls, "getZenith", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NORTH_POLE = new GeodeticPoint(env->getStaticObjectField(cls, "NORTH_POLE", "Lorg/orekit/bodies/GeodeticPoint;"));
          SOUTH_POLE = new GeodeticPoint(env->getStaticObjectField(cls, "SOUTH_POLE", "Lorg/orekit/bodies/GeodeticPoint;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GeodeticPoint::GeodeticPoint(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

      jboolean GeodeticPoint::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      jdouble GeodeticPoint::getAltitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAltitude_557b8123390d8d0c]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getEast() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEast_f88961cca75a2c0a]));
      }

      jdouble GeodeticPoint::getLatitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLatitude_557b8123390d8d0c]);
      }

      jdouble GeodeticPoint::getLongitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLongitude_557b8123390d8d0c]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getNadir() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNadir_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getNorth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNorth_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getSouth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSouth_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getWest() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getWest_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getZenith() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getZenith_f88961cca75a2c0a]));
      }

      jint GeodeticPoint::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      ::java::lang::String GeodeticPoint::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_GeodeticPoint_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GeodeticPoint_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GeodeticPoint_init_(t_GeodeticPoint *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GeodeticPoint_equals(t_GeodeticPoint *self, PyObject *args);
      static PyObject *t_GeodeticPoint_getAltitude(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getEast(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getLatitude(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getLongitude(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getNadir(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getNorth(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getSouth(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getWest(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getZenith(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_hashCode(t_GeodeticPoint *self, PyObject *args);
      static PyObject *t_GeodeticPoint_toString(t_GeodeticPoint *self, PyObject *args);
      static PyObject *t_GeodeticPoint_get__altitude(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__east(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__latitude(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__longitude(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__nadir(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__north(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__south(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__west(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__zenith(t_GeodeticPoint *self, void *data);
      static PyGetSetDef t_GeodeticPoint__fields_[] = {
        DECLARE_GET_FIELD(t_GeodeticPoint, altitude),
        DECLARE_GET_FIELD(t_GeodeticPoint, east),
        DECLARE_GET_FIELD(t_GeodeticPoint, latitude),
        DECLARE_GET_FIELD(t_GeodeticPoint, longitude),
        DECLARE_GET_FIELD(t_GeodeticPoint, nadir),
        DECLARE_GET_FIELD(t_GeodeticPoint, north),
        DECLARE_GET_FIELD(t_GeodeticPoint, south),
        DECLARE_GET_FIELD(t_GeodeticPoint, west),
        DECLARE_GET_FIELD(t_GeodeticPoint, zenith),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GeodeticPoint__methods_[] = {
        DECLARE_METHOD(t_GeodeticPoint, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GeodeticPoint, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GeodeticPoint, equals, METH_VARARGS),
        DECLARE_METHOD(t_GeodeticPoint, getAltitude, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getEast, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getLatitude, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getLongitude, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getNadir, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getNorth, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getSouth, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getWest, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getZenith, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_GeodeticPoint, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GeodeticPoint)[] = {
        { Py_tp_methods, t_GeodeticPoint__methods_ },
        { Py_tp_init, (void *) t_GeodeticPoint_init_ },
        { Py_tp_getset, t_GeodeticPoint__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GeodeticPoint)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GeodeticPoint, t_GeodeticPoint, GeodeticPoint);

      void t_GeodeticPoint::install(PyObject *module)
      {
        installType(&PY_TYPE(GeodeticPoint), &PY_TYPE_DEF(GeodeticPoint), module, "GeodeticPoint", 0);
      }

      void t_GeodeticPoint::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "class_", make_descriptor(GeodeticPoint::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "wrapfn_", make_descriptor(t_GeodeticPoint::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "boxfn_", make_descriptor(boxObject));
        env->getClass(GeodeticPoint::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "NORTH_POLE", make_descriptor(t_GeodeticPoint::wrap_Object(*GeodeticPoint::NORTH_POLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "SOUTH_POLE", make_descriptor(t_GeodeticPoint::wrap_Object(*GeodeticPoint::SOUTH_POLE)));
      }

      static PyObject *t_GeodeticPoint_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GeodeticPoint::initializeClass, 1)))
          return NULL;
        return t_GeodeticPoint::wrap_Object(GeodeticPoint(((t_GeodeticPoint *) arg)->object.this$));
      }
      static PyObject *t_GeodeticPoint_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GeodeticPoint::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GeodeticPoint_init_(t_GeodeticPoint *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        GeodeticPoint object((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          INT_CALL(object = GeodeticPoint(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_GeodeticPoint_equals(t_GeodeticPoint *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(GeodeticPoint), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_GeodeticPoint_getAltitude(t_GeodeticPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAltitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GeodeticPoint_getEast(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getLatitude(t_GeodeticPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLatitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GeodeticPoint_getLongitude(t_GeodeticPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLongitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GeodeticPoint_getNadir(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getNorth(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getSouth(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getWest(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getZenith(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_hashCode(t_GeodeticPoint *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(GeodeticPoint), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_GeodeticPoint_toString(t_GeodeticPoint *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GeodeticPoint), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GeodeticPoint_get__altitude(t_GeodeticPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAltitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GeodeticPoint_get__east(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__latitude(t_GeodeticPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLatitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GeodeticPoint_get__longitude(t_GeodeticPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLongitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GeodeticPoint_get__nadir(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__north(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__south(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__west(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__zenith(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/util/Locale.h"
#include "org/orekit/errors/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitIllegalArgumentException::class$ = NULL;
      jmethodID *OrekitIllegalArgumentException::mids$ = NULL;
      bool OrekitIllegalArgumentException::live$ = false;

      jclass OrekitIllegalArgumentException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitIllegalArgumentException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4fde7f3f87bbd6f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_3cffd47377eca18a] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_3cffd47377eca18a] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_4b51060c6b7ea981] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_6555a5198c71b73a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_a86d7419cf3241b7] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitIllegalArgumentException::OrekitIllegalArgumentException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::IllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_4fde7f3f87bbd6f7, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitIllegalArgumentException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_3cffd47377eca18a]));
      }

      ::java::lang::String OrekitIllegalArgumentException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cffd47377eca18a]));
      }

      ::java::lang::String OrekitIllegalArgumentException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_4b51060c6b7ea981], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitIllegalArgumentException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_6555a5198c71b73a]));
      }

      ::org::hipparchus::exception::Localizable OrekitIllegalArgumentException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_a86d7419cf3241b7]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitIllegalArgumentException_init_(t_OrekitIllegalArgumentException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitIllegalArgumentException_getLocalizedMessage(t_OrekitIllegalArgumentException *self, PyObject *args);
      static PyObject *t_OrekitIllegalArgumentException_getMessage(t_OrekitIllegalArgumentException *self, PyObject *args);
      static PyObject *t_OrekitIllegalArgumentException_getParts(t_OrekitIllegalArgumentException *self);
      static PyObject *t_OrekitIllegalArgumentException_getSpecifier(t_OrekitIllegalArgumentException *self);
      static PyObject *t_OrekitIllegalArgumentException_get__localizedMessage(t_OrekitIllegalArgumentException *self, void *data);
      static PyObject *t_OrekitIllegalArgumentException_get__message(t_OrekitIllegalArgumentException *self, void *data);
      static PyObject *t_OrekitIllegalArgumentException_get__parts(t_OrekitIllegalArgumentException *self, void *data);
      static PyObject *t_OrekitIllegalArgumentException_get__specifier(t_OrekitIllegalArgumentException *self, void *data);
      static PyGetSetDef t_OrekitIllegalArgumentException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, message),
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, parts),
        DECLARE_GET_FIELD(t_OrekitIllegalArgumentException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitIllegalArgumentException__methods_[] = {
        DECLARE_METHOD(t_OrekitIllegalArgumentException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitIllegalArgumentException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitIllegalArgumentException)[] = {
        { Py_tp_methods, t_OrekitIllegalArgumentException__methods_ },
        { Py_tp_init, (void *) t_OrekitIllegalArgumentException_init_ },
        { Py_tp_getset, t_OrekitIllegalArgumentException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitIllegalArgumentException)[] = {
        &PY_TYPE_DEF(::java::lang::IllegalArgumentException),
        NULL
      };

      DEFINE_TYPE(OrekitIllegalArgumentException, t_OrekitIllegalArgumentException, OrekitIllegalArgumentException);

      void t_OrekitIllegalArgumentException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitIllegalArgumentException), &PY_TYPE_DEF(OrekitIllegalArgumentException), module, "OrekitIllegalArgumentException", 0);
      }

      void t_OrekitIllegalArgumentException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalArgumentException), "class_", make_descriptor(OrekitIllegalArgumentException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalArgumentException), "wrapfn_", make_descriptor(t_OrekitIllegalArgumentException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalArgumentException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitIllegalArgumentException::initializeClass, 1)))
          return NULL;
        return t_OrekitIllegalArgumentException::wrap_Object(OrekitIllegalArgumentException(((t_OrekitIllegalArgumentException *) arg)->object.this$));
      }
      static PyObject *t_OrekitIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitIllegalArgumentException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitIllegalArgumentException_init_(t_OrekitIllegalArgumentException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitIllegalArgumentException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitIllegalArgumentException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitIllegalArgumentException_getLocalizedMessage(t_OrekitIllegalArgumentException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitIllegalArgumentException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalArgumentException_getMessage(t_OrekitIllegalArgumentException *self, PyObject *args)
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

        return callSuper(PY_TYPE(OrekitIllegalArgumentException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalArgumentException_getParts(t_OrekitIllegalArgumentException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalArgumentException_getSpecifier(t_OrekitIllegalArgumentException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__localizedMessage(t_OrekitIllegalArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__message(t_OrekitIllegalArgumentException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__parts(t_OrekitIllegalArgumentException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalArgumentException_get__specifier(t_OrekitIllegalArgumentException *self, void *data)
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
#include "org/hipparchus/optim/linear/Relationship.h"
#include "java/lang/String.h"
#include "org/hipparchus/optim/linear/Relationship.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *Relationship::class$ = NULL;
        jmethodID *Relationship::mids$ = NULL;
        bool Relationship::live$ = false;
        Relationship *Relationship::EQ = NULL;
        Relationship *Relationship::GEQ = NULL;
        Relationship *Relationship::LEQ = NULL;

        jclass Relationship::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/Relationship");

            mids$ = new jmethodID[max_mid];
            mids$[mid_oppositeRelationship_c55cd9ad2e6d5653] = env->getMethodID(cls, "oppositeRelationship", "()Lorg/hipparchus/optim/linear/Relationship;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
            mids$[mid_valueOf_51a36101421c2ddf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/linear/Relationship;");
            mids$[mid_values_6c1ba400cea315d2] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/linear/Relationship;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EQ = new Relationship(env->getStaticObjectField(cls, "EQ", "Lorg/hipparchus/optim/linear/Relationship;"));
            GEQ = new Relationship(env->getStaticObjectField(cls, "GEQ", "Lorg/hipparchus/optim/linear/Relationship;"));
            LEQ = new Relationship(env->getStaticObjectField(cls, "LEQ", "Lorg/hipparchus/optim/linear/Relationship;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Relationship Relationship::oppositeRelationship() const
        {
          return Relationship(env->callObjectMethod(this$, mids$[mid_oppositeRelationship_c55cd9ad2e6d5653]));
        }

        ::java::lang::String Relationship::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
        }

        Relationship Relationship::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Relationship(env->callStaticObjectMethod(cls, mids$[mid_valueOf_51a36101421c2ddf], a0.this$));
        }

        JArray< Relationship > Relationship::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Relationship >(env->callStaticObjectMethod(cls, mids$[mid_values_6c1ba400cea315d2]));
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
        static PyObject *t_Relationship_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Relationship_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Relationship_of_(t_Relationship *self, PyObject *args);
        static PyObject *t_Relationship_oppositeRelationship(t_Relationship *self);
        static PyObject *t_Relationship_toString(t_Relationship *self, PyObject *args);
        static PyObject *t_Relationship_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Relationship_values(PyTypeObject *type);
        static PyObject *t_Relationship_get__parameters_(t_Relationship *self, void *data);
        static PyGetSetDef t_Relationship__fields_[] = {
          DECLARE_GET_FIELD(t_Relationship, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Relationship__methods_[] = {
          DECLARE_METHOD(t_Relationship, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relationship, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relationship, of_, METH_VARARGS),
          DECLARE_METHOD(t_Relationship, oppositeRelationship, METH_NOARGS),
          DECLARE_METHOD(t_Relationship, toString, METH_VARARGS),
          DECLARE_METHOD(t_Relationship, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Relationship, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Relationship)[] = {
          { Py_tp_methods, t_Relationship__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Relationship__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Relationship)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Relationship, t_Relationship, Relationship);
        PyObject *t_Relationship::wrap_Object(const Relationship& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Relationship::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Relationship *self = (t_Relationship *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Relationship::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Relationship::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Relationship *self = (t_Relationship *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Relationship::install(PyObject *module)
        {
          installType(&PY_TYPE(Relationship), &PY_TYPE_DEF(Relationship), module, "Relationship", 0);
        }

        void t_Relationship::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "class_", make_descriptor(Relationship::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "wrapfn_", make_descriptor(t_Relationship::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "boxfn_", make_descriptor(boxObject));
          env->getClass(Relationship::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "EQ", make_descriptor(t_Relationship::wrap_Object(*Relationship::EQ)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "GEQ", make_descriptor(t_Relationship::wrap_Object(*Relationship::GEQ)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relationship), "LEQ", make_descriptor(t_Relationship::wrap_Object(*Relationship::LEQ)));
        }

        static PyObject *t_Relationship_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Relationship::initializeClass, 1)))
            return NULL;
          return t_Relationship::wrap_Object(Relationship(((t_Relationship *) arg)->object.this$));
        }
        static PyObject *t_Relationship_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Relationship::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Relationship_of_(t_Relationship *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Relationship_oppositeRelationship(t_Relationship *self)
        {
          Relationship result((jobject) NULL);
          OBJ_CALL(result = self->object.oppositeRelationship());
          return t_Relationship::wrap_Object(result);
        }

        static PyObject *t_Relationship_toString(t_Relationship *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(Relationship), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_Relationship_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Relationship result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::optim::linear::Relationship::valueOf(a0));
            return t_Relationship::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Relationship_values(PyTypeObject *type)
        {
          JArray< Relationship > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::optim::linear::Relationship::values());
          return JArray<jobject>(result.this$).wrap(t_Relationship::wrap_jobject);
        }
        static PyObject *t_Relationship_get__parameters_(t_Relationship *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *EventHandler::class$ = NULL;
          jmethodID *EventHandler::mids$ = NULL;
          bool EventHandler::live$ = false;

          jclass EventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/EventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_eventOccurred_c85ac59cb25f2670] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_init_e0491fcf7b1e4288] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V");
              mids$[mid_resetState_ce9bc9b3806ce3d4] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::ode::events::Action EventHandler::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_c85ac59cb25f2670], a0.this$, a1.this$, a2));
          }

          void EventHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::propagation::events::EventDetector & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_init_e0491fcf7b1e4288], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::propagation::SpacecraftState EventHandler::resetState(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_ce9bc9b3806ce3d4], a0.this$, a1.this$));
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
      namespace events {
        namespace handlers {
          static PyObject *t_EventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventHandler_eventOccurred(t_EventHandler *self, PyObject *args);
          static PyObject *t_EventHandler_init(t_EventHandler *self, PyObject *args);
          static PyObject *t_EventHandler_resetState(t_EventHandler *self, PyObject *args);

          static PyMethodDef t_EventHandler__methods_[] = {
            DECLARE_METHOD(t_EventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventHandler, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_EventHandler, init, METH_VARARGS),
            DECLARE_METHOD(t_EventHandler, resetState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EventHandler)[] = {
            { Py_tp_methods, t_EventHandler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EventHandler, t_EventHandler, EventHandler);

          void t_EventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(EventHandler), &PY_TYPE_DEF(EventHandler), module, "EventHandler", 0);
          }

          void t_EventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventHandler), "class_", make_descriptor(EventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventHandler), "wrapfn_", make_descriptor(t_EventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventHandler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EventHandler::initializeClass, 1)))
              return NULL;
            return t_EventHandler::wrap_Object(EventHandler(((t_EventHandler *) arg)->object.this$));
          }
          static PyObject *t_EventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_EventHandler_eventOccurred(t_EventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }

          static PyObject *t_EventHandler_init(t_EventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a2((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.init(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_EventHandler_resetState(t_EventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.resetState(a0, a1));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/IntRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *IntRandomGenerator::class$ = NULL;
      jmethodID *IntRandomGenerator::mids$ = NULL;
      bool IntRandomGenerator::live$ = false;

      jclass IntRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/IntRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextBoolean_89b302893bdbe1f1] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_d759c70c6670fd89] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_ac782c7077255dd3] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_557b8123390d8d0c] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_04fe014f7609dc26] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextInt_412668abc8d889e9] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextLong_9e26256fb0d384a2] = env->getMethodID(cls, "nextLong", "()J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean IntRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_89b302893bdbe1f1]);
      }

      void IntRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_d759c70c6670fd89], a0.this$);
      }

      void IntRandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_ac782c7077255dd3], a0.this$, a1, a2);
      }

      jdouble IntRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_557b8123390d8d0c]);
      }

      jfloat IntRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_04fe014f7609dc26]);
      }

      jint IntRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_412668abc8d889e9]);
      }

      jlong IntRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_9e26256fb0d384a2]);
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
      static PyObject *t_IntRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntRandomGenerator_nextBoolean(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextBytes(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextDouble(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextFloat(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextInt(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextLong(t_IntRandomGenerator *self, PyObject *args);

      static PyMethodDef t_IntRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_IntRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntRandomGenerator, nextBoolean, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextDouble, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextFloat, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextLong, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IntRandomGenerator)[] = {
        { Py_tp_methods, t_IntRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IntRandomGenerator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::BaseRandomGenerator),
        NULL
      };

      DEFINE_TYPE(IntRandomGenerator, t_IntRandomGenerator, IntRandomGenerator);

      void t_IntRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(IntRandomGenerator), &PY_TYPE_DEF(IntRandomGenerator), module, "IntRandomGenerator", 0);
      }

      void t_IntRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntRandomGenerator), "class_", make_descriptor(IntRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntRandomGenerator), "wrapfn_", make_descriptor(t_IntRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IntRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IntRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_IntRandomGenerator::wrap_Object(IntRandomGenerator(((t_IntRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_IntRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IntRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IntRandomGenerator_nextBoolean(t_IntRandomGenerator *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextBoolean());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextBoolean", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextBytes(t_IntRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
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
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextBytes", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextDouble(t_IntRandomGenerator *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextDouble());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextDouble", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextFloat(t_IntRandomGenerator *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextFloat());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextFloat", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextInt(t_IntRandomGenerator *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextLong(t_IntRandomGenerator *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextLong());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextLong", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *CartesianDerivativesFilter::class$ = NULL;
      jmethodID *CartesianDerivativesFilter::mids$ = NULL;
      bool CartesianDerivativesFilter::live$ = false;
      CartesianDerivativesFilter *CartesianDerivativesFilter::USE_P = NULL;
      CartesianDerivativesFilter *CartesianDerivativesFilter::USE_PV = NULL;
      CartesianDerivativesFilter *CartesianDerivativesFilter::USE_PVA = NULL;

      jclass CartesianDerivativesFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/CartesianDerivativesFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getFilter_c5d6392fd4affea9] = env->getStaticMethodID(cls, "getFilter", "(I)Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_getMaxOrder_412668abc8d889e9] = env->getMethodID(cls, "getMaxOrder", "()I");
          mids$[mid_valueOf_cdb925dbc9d5c0f2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_values_f8d12b019cf223aa] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/CartesianDerivativesFilter;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          USE_P = new CartesianDerivativesFilter(env->getStaticObjectField(cls, "USE_P", "Lorg/orekit/utils/CartesianDerivativesFilter;"));
          USE_PV = new CartesianDerivativesFilter(env->getStaticObjectField(cls, "USE_PV", "Lorg/orekit/utils/CartesianDerivativesFilter;"));
          USE_PVA = new CartesianDerivativesFilter(env->getStaticObjectField(cls, "USE_PVA", "Lorg/orekit/utils/CartesianDerivativesFilter;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CartesianDerivativesFilter CartesianDerivativesFilter::getFilter(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return CartesianDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_getFilter_c5d6392fd4affea9], a0));
      }

      jint CartesianDerivativesFilter::getMaxOrder() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxOrder_412668abc8d889e9]);
      }

      CartesianDerivativesFilter CartesianDerivativesFilter::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return CartesianDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cdb925dbc9d5c0f2], a0.this$));
      }

      JArray< CartesianDerivativesFilter > CartesianDerivativesFilter::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< CartesianDerivativesFilter >(env->callStaticObjectMethod(cls, mids$[mid_values_f8d12b019cf223aa]));
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
      static PyObject *t_CartesianDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianDerivativesFilter_of_(t_CartesianDerivativesFilter *self, PyObject *args);
      static PyObject *t_CartesianDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CartesianDerivativesFilter_getMaxOrder(t_CartesianDerivativesFilter *self);
      static PyObject *t_CartesianDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_CartesianDerivativesFilter_values(PyTypeObject *type);
      static PyObject *t_CartesianDerivativesFilter_get__maxOrder(t_CartesianDerivativesFilter *self, void *data);
      static PyObject *t_CartesianDerivativesFilter_get__parameters_(t_CartesianDerivativesFilter *self, void *data);
      static PyGetSetDef t_CartesianDerivativesFilter__fields_[] = {
        DECLARE_GET_FIELD(t_CartesianDerivativesFilter, maxOrder),
        DECLARE_GET_FIELD(t_CartesianDerivativesFilter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CartesianDerivativesFilter__methods_[] = {
        DECLARE_METHOD(t_CartesianDerivativesFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, of_, METH_VARARGS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, getFilter, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, getMaxOrder, METH_NOARGS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CartesianDerivativesFilter, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CartesianDerivativesFilter)[] = {
        { Py_tp_methods, t_CartesianDerivativesFilter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CartesianDerivativesFilter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CartesianDerivativesFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(CartesianDerivativesFilter, t_CartesianDerivativesFilter, CartesianDerivativesFilter);
      PyObject *t_CartesianDerivativesFilter::wrap_Object(const CartesianDerivativesFilter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CartesianDerivativesFilter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CartesianDerivativesFilter *self = (t_CartesianDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CartesianDerivativesFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CartesianDerivativesFilter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CartesianDerivativesFilter *self = (t_CartesianDerivativesFilter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CartesianDerivativesFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(CartesianDerivativesFilter), &PY_TYPE_DEF(CartesianDerivativesFilter), module, "CartesianDerivativesFilter", 0);
      }

      void t_CartesianDerivativesFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "class_", make_descriptor(CartesianDerivativesFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "wrapfn_", make_descriptor(t_CartesianDerivativesFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "boxfn_", make_descriptor(boxObject));
        env->getClass(CartesianDerivativesFilter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "USE_P", make_descriptor(t_CartesianDerivativesFilter::wrap_Object(*CartesianDerivativesFilter::USE_P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "USE_PV", make_descriptor(t_CartesianDerivativesFilter::wrap_Object(*CartesianDerivativesFilter::USE_PV)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianDerivativesFilter), "USE_PVA", make_descriptor(t_CartesianDerivativesFilter::wrap_Object(*CartesianDerivativesFilter::USE_PVA)));
      }

      static PyObject *t_CartesianDerivativesFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CartesianDerivativesFilter::initializeClass, 1)))
          return NULL;
        return t_CartesianDerivativesFilter::wrap_Object(CartesianDerivativesFilter(((t_CartesianDerivativesFilter *) arg)->object.this$));
      }
      static PyObject *t_CartesianDerivativesFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CartesianDerivativesFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CartesianDerivativesFilter_of_(t_CartesianDerivativesFilter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CartesianDerivativesFilter_getFilter(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        CartesianDerivativesFilter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::CartesianDerivativesFilter::getFilter(a0));
          return t_CartesianDerivativesFilter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFilter", arg);
        return NULL;
      }

      static PyObject *t_CartesianDerivativesFilter_getMaxOrder(t_CartesianDerivativesFilter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxOrder());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_CartesianDerivativesFilter_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        CartesianDerivativesFilter result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::CartesianDerivativesFilter::valueOf(a0));
          return t_CartesianDerivativesFilter::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_CartesianDerivativesFilter_values(PyTypeObject *type)
      {
        JArray< CartesianDerivativesFilter > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::CartesianDerivativesFilter::values());
        return JArray<jobject>(result.this$).wrap(t_CartesianDerivativesFilter::wrap_jobject);
      }
      static PyObject *t_CartesianDerivativesFilter_get__parameters_(t_CartesianDerivativesFilter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_CartesianDerivativesFilter_get__maxOrder(t_CartesianDerivativesFilter *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RangeRateTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeRateTroposphericDelayModifier::class$ = NULL;
          jmethodID *RangeRateTroposphericDelayModifier::mids$ = NULL;
          bool RangeRateTroposphericDelayModifier::live$ = false;

          jclass RangeRateTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeRateTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2e9593028b0eebf7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;Z)V");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_rangeRateErrorTroposphericModel_17bae2e3aa9bc870] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_rangeRateErrorTroposphericModel_81f653af97ea34a8] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeRateTroposphericDelayModifier::RangeRateTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0, jboolean a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_2e9593028b0eebf7, a0.this$, a1)) {}

          void RangeRateTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void RangeRateTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
          }

          jdouble RangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_17bae2e3aa9bc870], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement RangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_81f653af97ea34a8], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_RangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeRateTroposphericDelayModifier_init_(t_RangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeRateTroposphericDelayModifier_modify(t_RangeRateTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeRateTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_RangeRateTroposphericDelayModifier *self, PyObject *args);

          static PyMethodDef t_RangeRateTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            DECLARE_METHOD(t_RangeRateTroposphericDelayModifier, rangeRateErrorTroposphericModel, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeRateTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeRateTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeRateTroposphericDelayModifier, t_RangeRateTroposphericDelayModifier, RangeRateTroposphericDelayModifier);

          void t_RangeRateTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateTroposphericDelayModifier), &PY_TYPE_DEF(RangeRateTroposphericDelayModifier), module, "RangeRateTroposphericDelayModifier", 0);
          }

          void t_RangeRateTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateTroposphericDelayModifier), "class_", make_descriptor(RangeRateTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateTroposphericDelayModifier), "wrapfn_", make_descriptor(t_RangeRateTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeRateTroposphericDelayModifier::wrap_Object(RangeRateTroposphericDelayModifier(((t_RangeRateTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeRateTroposphericDelayModifier_init_(t_RangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            jboolean a1;
            RangeRateTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kZ", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RangeRateTroposphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeRateTroposphericDelayModifier_modify(t_RangeRateTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeRateTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_RangeRateTroposphericDelayModifier *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK[K", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1, a2));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(RangeRateTroposphericDelayModifier), (PyObject *) self, "rangeRateErrorTroposphericModel", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/WindUp.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *WindUp::class$ = NULL;
          jmethodID *WindUp::mids$ = NULL;
          bool WindUp::live$ = false;

          jclass WindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/WindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_receiverToInert_d9b98e1ca49f6e0d] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_emitterToInert_d9b98e1ca49f6e0d] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

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
          static PyObject *t_WindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WindUp_of_(t_WindUp *self, PyObject *args);
          static PyObject *t_WindUp_get__parameters_(t_WindUp *self, void *data);
          static PyGetSetDef t_WindUp__fields_[] = {
            DECLARE_GET_FIELD(t_WindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_WindUp__methods_[] = {
            DECLARE_METHOD(t_WindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUp, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WindUp)[] = {
            { Py_tp_methods, t_WindUp__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_WindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WindUp)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractWindUp),
            NULL
          };

          DEFINE_TYPE(WindUp, t_WindUp, WindUp);
          PyObject *t_WindUp::wrap_Object(const WindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WindUp *self = (t_WindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_WindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_WindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_WindUp *self = (t_WindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_WindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(WindUp), &PY_TYPE_DEF(WindUp), module, "WindUp", 0);
          }

          void t_WindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUp), "class_", make_descriptor(WindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUp), "wrapfn_", make_descriptor(t_WindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUp), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WindUp::initializeClass, 1)))
              return NULL;
            return t_WindUp::wrap_Object(WindUp(((t_WindUp *) arg)->object.this$));
          }
          static PyObject *t_WindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_WindUp_of_(t_WindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_WindUp_get__parameters_(t_WindUp *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *AngleType::class$ = NULL;
            jmethodID *AngleType::mids$ = NULL;
            bool AngleType::live$ = false;
            AngleType *AngleType::AZEL = NULL;
            AngleType *AngleType::RADEC = NULL;
            AngleType *AngleType::XEYN = NULL;
            AngleType *AngleType::XSYE = NULL;

            jclass AngleType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/AngleType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_642401b5b2e502af] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/AngleType;");
                mids$[mid_values_98c7ddb14a6d13ed] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/AngleType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                AZEL = new AngleType(env->getStaticObjectField(cls, "AZEL", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                RADEC = new AngleType(env->getStaticObjectField(cls, "RADEC", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                XEYN = new AngleType(env->getStaticObjectField(cls, "XEYN", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                XSYE = new AngleType(env->getStaticObjectField(cls, "XSYE", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AngleType AngleType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AngleType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_642401b5b2e502af], a0.this$));
            }

            JArray< AngleType > AngleType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AngleType >(env->callStaticObjectMethod(cls, mids$[mid_values_98c7ddb14a6d13ed]));
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
            static PyObject *t_AngleType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AngleType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AngleType_of_(t_AngleType *self, PyObject *args);
            static PyObject *t_AngleType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AngleType_values(PyTypeObject *type);
            static PyObject *t_AngleType_get__parameters_(t_AngleType *self, void *data);
            static PyGetSetDef t_AngleType__fields_[] = {
              DECLARE_GET_FIELD(t_AngleType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AngleType__methods_[] = {
              DECLARE_METHOD(t_AngleType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AngleType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AngleType, of_, METH_VARARGS),
              DECLARE_METHOD(t_AngleType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AngleType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AngleType)[] = {
              { Py_tp_methods, t_AngleType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AngleType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AngleType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AngleType, t_AngleType, AngleType);
            PyObject *t_AngleType::wrap_Object(const AngleType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AngleType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AngleType *self = (t_AngleType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AngleType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AngleType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AngleType *self = (t_AngleType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AngleType::install(PyObject *module)
            {
              installType(&PY_TYPE(AngleType), &PY_TYPE_DEF(AngleType), module, "AngleType", 0);
            }

            void t_AngleType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "class_", make_descriptor(AngleType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "wrapfn_", make_descriptor(t_AngleType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "boxfn_", make_descriptor(boxObject));
              env->getClass(AngleType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "AZEL", make_descriptor(t_AngleType::wrap_Object(*AngleType::AZEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "RADEC", make_descriptor(t_AngleType::wrap_Object(*AngleType::RADEC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "XEYN", make_descriptor(t_AngleType::wrap_Object(*AngleType::XEYN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "XSYE", make_descriptor(t_AngleType::wrap_Object(*AngleType::XSYE)));
            }

            static PyObject *t_AngleType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AngleType::initializeClass, 1)))
                return NULL;
              return t_AngleType::wrap_Object(AngleType(((t_AngleType *) arg)->object.this$));
            }
            static PyObject *t_AngleType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AngleType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AngleType_of_(t_AngleType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AngleType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AngleType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::AngleType::valueOf(a0));
                return t_AngleType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AngleType_values(PyTypeObject *type)
            {
              JArray< AngleType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::AngleType::values());
              return JArray<jobject>(result.this$).wrap(t_AngleType::wrap_jobject);
            }
            static PyObject *t_AngleType_get__parameters_(t_AngleType *self, void *data)
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
#include "org/hipparchus/analysis/solvers/BracketingNthOrderBrentSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
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
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_47602ef8408ea361] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_427af08acba367ca] = env->getMethodID(cls, "<init>", "(DDI)V");
            mids$[mid_init$_ea24d059cd2995aa] = env->getMethodID(cls, "<init>", "(DDDI)V");
            mids$[mid_getMaximalOrder_412668abc8d889e9] = env->getMethodID(cls, "getMaximalOrder", "()I");
            mids$[mid_solve_63a1fb60fcca1695] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solve_d706f5f2b1b08d5d] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solveInterval_d50558ec42f23049] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");
            mids$[mid_doSolve_557b8123390d8d0c] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_doSolveInterval_ca1621db2f37d4e2] = env->getMethodID(cls, "doSolveInterval", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver(jdouble a0, jint a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_47602ef8408ea361, a0, a1)) {}

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_427af08acba367ca, a0, a1, a2)) {}

        BracketingNthOrderBrentSolver::BracketingNthOrderBrentSolver(jdouble a0, jdouble a1, jdouble a2, jint a3) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_ea24d059cd2995aa, a0, a1, a2, a3)) {}

        jint BracketingNthOrderBrentSolver::getMaximalOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalOrder_412668abc8d889e9]);
        }

        jdouble BracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_63a1fb60fcca1695], a0, a1.this$, a2, a3, a4.this$);
        }

        jdouble BracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_d706f5f2b1b08d5d], a0, a1.this$, a2, a3, a4, a5.this$);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BracketingNthOrderBrentSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_d50558ec42f23049], a0, a1.this$, a2, a3, a4));
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
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *BodyRotatingFrameId::class$ = NULL;
        jmethodID *BodyRotatingFrameId::mids$ = NULL;
        bool BodyRotatingFrameId::live$ = false;
        BodyRotatingFrameId *BodyRotatingFrameId::GTOD = NULL;
        BodyRotatingFrameId *BodyRotatingFrameId::ITRF = NULL;
        BodyRotatingFrameId *BodyRotatingFrameId::ITRF_EQUINOX = NULL;

        jclass BodyRotatingFrameId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/BodyRotatingFrameId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_751780577a495c20] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/BodyRotatingFrameId;");
            mids$[mid_values_76ae667665c218ce] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/BodyRotatingFrameId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GTOD = new BodyRotatingFrameId(env->getStaticObjectField(cls, "GTOD", "Lorg/orekit/rugged/api/BodyRotatingFrameId;"));
            ITRF = new BodyRotatingFrameId(env->getStaticObjectField(cls, "ITRF", "Lorg/orekit/rugged/api/BodyRotatingFrameId;"));
            ITRF_EQUINOX = new BodyRotatingFrameId(env->getStaticObjectField(cls, "ITRF_EQUINOX", "Lorg/orekit/rugged/api/BodyRotatingFrameId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BodyRotatingFrameId BodyRotatingFrameId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BodyRotatingFrameId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_751780577a495c20], a0.this$));
        }

        JArray< BodyRotatingFrameId > BodyRotatingFrameId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< BodyRotatingFrameId >(env->callStaticObjectMethod(cls, mids$[mid_values_76ae667665c218ce]));
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
      namespace api {
        static PyObject *t_BodyRotatingFrameId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BodyRotatingFrameId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BodyRotatingFrameId_of_(t_BodyRotatingFrameId *self, PyObject *args);
        static PyObject *t_BodyRotatingFrameId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_BodyRotatingFrameId_values(PyTypeObject *type);
        static PyObject *t_BodyRotatingFrameId_get__parameters_(t_BodyRotatingFrameId *self, void *data);
        static PyGetSetDef t_BodyRotatingFrameId__fields_[] = {
          DECLARE_GET_FIELD(t_BodyRotatingFrameId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BodyRotatingFrameId__methods_[] = {
          DECLARE_METHOD(t_BodyRotatingFrameId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BodyRotatingFrameId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BodyRotatingFrameId, of_, METH_VARARGS),
          DECLARE_METHOD(t_BodyRotatingFrameId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BodyRotatingFrameId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BodyRotatingFrameId)[] = {
          { Py_tp_methods, t_BodyRotatingFrameId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BodyRotatingFrameId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BodyRotatingFrameId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(BodyRotatingFrameId, t_BodyRotatingFrameId, BodyRotatingFrameId);
        PyObject *t_BodyRotatingFrameId::wrap_Object(const BodyRotatingFrameId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BodyRotatingFrameId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BodyRotatingFrameId *self = (t_BodyRotatingFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BodyRotatingFrameId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BodyRotatingFrameId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BodyRotatingFrameId *self = (t_BodyRotatingFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BodyRotatingFrameId::install(PyObject *module)
        {
          installType(&PY_TYPE(BodyRotatingFrameId), &PY_TYPE_DEF(BodyRotatingFrameId), module, "BodyRotatingFrameId", 0);
        }

        void t_BodyRotatingFrameId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "class_", make_descriptor(BodyRotatingFrameId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "wrapfn_", make_descriptor(t_BodyRotatingFrameId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "boxfn_", make_descriptor(boxObject));
          env->getClass(BodyRotatingFrameId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "GTOD", make_descriptor(t_BodyRotatingFrameId::wrap_Object(*BodyRotatingFrameId::GTOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "ITRF", make_descriptor(t_BodyRotatingFrameId::wrap_Object(*BodyRotatingFrameId::ITRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "ITRF_EQUINOX", make_descriptor(t_BodyRotatingFrameId::wrap_Object(*BodyRotatingFrameId::ITRF_EQUINOX)));
        }

        static PyObject *t_BodyRotatingFrameId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BodyRotatingFrameId::initializeClass, 1)))
            return NULL;
          return t_BodyRotatingFrameId::wrap_Object(BodyRotatingFrameId(((t_BodyRotatingFrameId *) arg)->object.this$));
        }
        static PyObject *t_BodyRotatingFrameId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BodyRotatingFrameId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BodyRotatingFrameId_of_(t_BodyRotatingFrameId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BodyRotatingFrameId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          BodyRotatingFrameId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::BodyRotatingFrameId::valueOf(a0));
            return t_BodyRotatingFrameId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_BodyRotatingFrameId_values(PyTypeObject *type)
        {
          JArray< BodyRotatingFrameId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::BodyRotatingFrameId::values());
          return JArray<jobject>(result.this$).wrap(t_BodyRotatingFrameId::wrap_jobject);
        }
        static PyObject *t_BodyRotatingFrameId_get__parameters_(t_BodyRotatingFrameId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1057.h"
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

              ::java::lang::Class *Rtcm1057::class$ = NULL;
              jmethodID *Rtcm1057::mids$ = NULL;
              bool Rtcm1057::live$ = false;

              jclass Rtcm1057::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1057");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e429337ce34e6c7c] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1057::Rtcm1057(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_e429337ce34e6c7c, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1057_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1057_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1057_of_(t_Rtcm1057 *self, PyObject *args);
              static int t_Rtcm1057_init_(t_Rtcm1057 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1057_get__parameters_(t_Rtcm1057 *self, void *data);
              static PyGetSetDef t_Rtcm1057__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1057, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1057__methods_[] = {
                DECLARE_METHOD(t_Rtcm1057, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1057, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1057, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1057)[] = {
                { Py_tp_methods, t_Rtcm1057__methods_ },
                { Py_tp_init, (void *) t_Rtcm1057_init_ },
                { Py_tp_getset, t_Rtcm1057__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1057)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1057, t_Rtcm1057, Rtcm1057);
              PyObject *t_Rtcm1057::wrap_Object(const Rtcm1057& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1057::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1057 *self = (t_Rtcm1057 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1057::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1057::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1057 *self = (t_Rtcm1057 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1057::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1057), &PY_TYPE_DEF(Rtcm1057), module, "Rtcm1057", 0);
              }

              void t_Rtcm1057::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1057), "class_", make_descriptor(Rtcm1057::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1057), "wrapfn_", make_descriptor(t_Rtcm1057::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1057), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1057_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1057::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1057::wrap_Object(Rtcm1057(((t_Rtcm1057 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1057_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1057::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1057_of_(t_Rtcm1057 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1057_init_(t_Rtcm1057 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1057 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1057(a0, a1, a2));
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
              static PyObject *t_Rtcm1057_get__parameters_(t_Rtcm1057 *self, void *data)
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
#include "org/orekit/utils/Fieldifier.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *Fieldifier::class$ = NULL;
      jmethodID *Fieldifier::mids$ = NULL;
      bool Fieldifier::live$ = false;

      jclass Fieldifier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/Fieldifier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_fieldify_e9be6c9886c2ede1] = env->getStaticMethodID(cls, "fieldify", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_fieldify_a3f9f869471db509] = env->getStaticMethodID(cls, "fieldify", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/StateCovariance;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_fieldify_2b8bd54a32522ec8] = env->getStaticMethodID(cls, "fieldify", "(Lorg/hipparchus/Field;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::orbits::FieldOrbit Fieldifier::fieldify(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::orbits::FieldOrbit(env->callStaticObjectMethod(cls, mids$[mid_fieldify_e9be6c9886c2ede1], a0.this$, a1.this$));
      }

      ::org::orekit::propagation::FieldStateCovariance Fieldifier::fieldify(const ::org::hipparchus::Field & a0, const ::org::orekit::propagation::StateCovariance & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::propagation::FieldStateCovariance(env->callStaticObjectMethod(cls, mids$[mid_fieldify_a3f9f869471db509], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Fieldifier::fieldify(const ::org::hipparchus::Field & a0, const ::org::hipparchus::linear::RealMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_fieldify_2b8bd54a32522ec8], a0.this$, a1.this$));
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
      static PyObject *t_Fieldifier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fieldifier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fieldifier_fieldify(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Fieldifier__methods_[] = {
        DECLARE_METHOD(t_Fieldifier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fieldifier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fieldifier, fieldify, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Fieldifier)[] = {
        { Py_tp_methods, t_Fieldifier__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Fieldifier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Fieldifier, t_Fieldifier, Fieldifier);

      void t_Fieldifier::install(PyObject *module)
      {
        installType(&PY_TYPE(Fieldifier), &PY_TYPE_DEF(Fieldifier), module, "Fieldifier", 0);
      }

      void t_Fieldifier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fieldifier), "class_", make_descriptor(Fieldifier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fieldifier), "wrapfn_", make_descriptor(t_Fieldifier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fieldifier), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Fieldifier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Fieldifier::initializeClass, 1)))
          return NULL;
        return t_Fieldifier::wrap_Object(Fieldifier(((t_Fieldifier *) arg)->object.this$));
      }
      static PyObject *t_Fieldifier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Fieldifier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Fieldifier_fieldify(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::utils::Fieldifier::fieldify(a0, a1));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
            ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::utils::Fieldifier::fieldify(a0, a1));
              return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::utils::Fieldifier::fieldify(a0, a1));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "fieldify", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/ComplexField.h"
#include "org/hipparchus/complex/ComplexField.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexField::class$ = NULL;
      jmethodID *ComplexField::mids$ = NULL;
      bool ComplexField::live$ = false;

      jclass ComplexField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_d1dc7459146fba31] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/complex/ComplexField;");
          mids$[mid_getOne_921a2f30ecc499e5] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_921a2f30ecc499e5] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean ComplexField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      ComplexField ComplexField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_d1dc7459146fba31]));
      }

      ::org::hipparchus::complex::Complex ComplexField::getOne() const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getOne_921a2f30ecc499e5]));
      }

      ::java::lang::Class ComplexField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
      }

      ::org::hipparchus::complex::Complex ComplexField::getZero() const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getZero_921a2f30ecc499e5]));
      }

      jint ComplexField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_ComplexField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexField_equals(t_ComplexField *self, PyObject *args);
      static PyObject *t_ComplexField_getInstance(PyTypeObject *type);
      static PyObject *t_ComplexField_getOne(t_ComplexField *self);
      static PyObject *t_ComplexField_getRuntimeClass(t_ComplexField *self);
      static PyObject *t_ComplexField_getZero(t_ComplexField *self);
      static PyObject *t_ComplexField_hashCode(t_ComplexField *self, PyObject *args);
      static PyObject *t_ComplexField_get__instance(t_ComplexField *self, void *data);
      static PyObject *t_ComplexField_get__one(t_ComplexField *self, void *data);
      static PyObject *t_ComplexField_get__runtimeClass(t_ComplexField *self, void *data);
      static PyObject *t_ComplexField_get__zero(t_ComplexField *self, void *data);
      static PyGetSetDef t_ComplexField__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexField, instance),
        DECLARE_GET_FIELD(t_ComplexField, one),
        DECLARE_GET_FIELD(t_ComplexField, runtimeClass),
        DECLARE_GET_FIELD(t_ComplexField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexField__methods_[] = {
        DECLARE_METHOD(t_ComplexField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexField, equals, METH_VARARGS),
        DECLARE_METHOD(t_ComplexField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ComplexField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_ComplexField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_ComplexField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_ComplexField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexField)[] = {
        { Py_tp_methods, t_ComplexField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ComplexField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexField, t_ComplexField, ComplexField);

      void t_ComplexField::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexField), &PY_TYPE_DEF(ComplexField), module, "ComplexField", 0);
      }

      void t_ComplexField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexField), "class_", make_descriptor(ComplexField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexField), "wrapfn_", make_descriptor(t_ComplexField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexField::initializeClass, 1)))
          return NULL;
        return t_ComplexField::wrap_Object(ComplexField(((t_ComplexField *) arg)->object.this$));
      }
      static PyObject *t_ComplexField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexField_equals(t_ComplexField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ComplexField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ComplexField_getInstance(PyTypeObject *type)
      {
        ComplexField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::complex::ComplexField::getInstance());
        return t_ComplexField::wrap_Object(result);
      }

      static PyObject *t_ComplexField_getOne(t_ComplexField *self)
      {
        ::org::hipparchus::complex::Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
      }

      static PyObject *t_ComplexField_getRuntimeClass(t_ComplexField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexField_getZero(t_ComplexField *self)
      {
        ::org::hipparchus::complex::Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
      }

      static PyObject *t_ComplexField_hashCode(t_ComplexField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ComplexField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ComplexField_get__instance(t_ComplexField *self, void *data)
      {
        ComplexField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_ComplexField::wrap_Object(value);
      }

      static PyObject *t_ComplexField_get__one(t_ComplexField *self, void *data)
      {
        ::org::hipparchus::complex::Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(value);
      }

      static PyObject *t_ComplexField_get__runtimeClass(t_ComplexField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_ComplexField_get__zero(t_ComplexField *self, void *data)
      {
        ::org::hipparchus::complex::Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/DummyLocalizable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/util/Locale.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *DummyLocalizable::class$ = NULL;
      jmethodID *DummyLocalizable::mids$ = NULL;
      bool DummyLocalizable::live$ = false;

      jclass DummyLocalizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/DummyLocalizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_getLocalizedString_4b51060c6b7ea981] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_3cffd47377eca18a] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DummyLocalizable::DummyLocalizable(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

      ::java::lang::String DummyLocalizable::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_4b51060c6b7ea981], a0.this$));
      }

      ::java::lang::String DummyLocalizable::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_3cffd47377eca18a]));
      }

      ::java::lang::String DummyLocalizable::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_DummyLocalizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DummyLocalizable_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DummyLocalizable_init_(t_DummyLocalizable *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DummyLocalizable_getLocalizedString(t_DummyLocalizable *self, PyObject *arg);
      static PyObject *t_DummyLocalizable_getSourceString(t_DummyLocalizable *self);
      static PyObject *t_DummyLocalizable_toString(t_DummyLocalizable *self, PyObject *args);
      static PyObject *t_DummyLocalizable_get__sourceString(t_DummyLocalizable *self, void *data);
      static PyGetSetDef t_DummyLocalizable__fields_[] = {
        DECLARE_GET_FIELD(t_DummyLocalizable, sourceString),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DummyLocalizable__methods_[] = {
        DECLARE_METHOD(t_DummyLocalizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DummyLocalizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DummyLocalizable, getLocalizedString, METH_O),
        DECLARE_METHOD(t_DummyLocalizable, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_DummyLocalizable, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DummyLocalizable)[] = {
        { Py_tp_methods, t_DummyLocalizable__methods_ },
        { Py_tp_init, (void *) t_DummyLocalizable_init_ },
        { Py_tp_getset, t_DummyLocalizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DummyLocalizable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DummyLocalizable, t_DummyLocalizable, DummyLocalizable);

      void t_DummyLocalizable::install(PyObject *module)
      {
        installType(&PY_TYPE(DummyLocalizable), &PY_TYPE_DEF(DummyLocalizable), module, "DummyLocalizable", 0);
      }

      void t_DummyLocalizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DummyLocalizable), "class_", make_descriptor(DummyLocalizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DummyLocalizable), "wrapfn_", make_descriptor(t_DummyLocalizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DummyLocalizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DummyLocalizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DummyLocalizable::initializeClass, 1)))
          return NULL;
        return t_DummyLocalizable::wrap_Object(DummyLocalizable(((t_DummyLocalizable *) arg)->object.this$));
      }
      static PyObject *t_DummyLocalizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DummyLocalizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DummyLocalizable_init_(t_DummyLocalizable *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        DummyLocalizable object((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          INT_CALL(object = DummyLocalizable(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DummyLocalizable_getLocalizedString(t_DummyLocalizable *self, PyObject *arg)
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

      static PyObject *t_DummyLocalizable_getSourceString(t_DummyLocalizable *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_DummyLocalizable_toString(t_DummyLocalizable *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(DummyLocalizable), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DummyLocalizable_get__sourceString(t_DummyLocalizable *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm01Header::class$ = NULL;
              jmethodID *SsrIgm01Header::mids$ = NULL;
              bool SsrIgm01Header::live$ = false;

              jclass SsrIgm01Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCrsIndicator_412668abc8d889e9] = env->getMethodID(cls, "getCrsIndicator", "()I");
                  mids$[mid_setCrsIndicator_a3da1a935cb37f7b] = env->getMethodID(cls, "setCrsIndicator", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm01Header::SsrIgm01Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jint SsrIgm01Header::getCrsIndicator() const
              {
                return env->callIntMethod(this$, mids$[mid_getCrsIndicator_412668abc8d889e9]);
              }

              void SsrIgm01Header::setCrsIndicator(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCrsIndicator_a3da1a935cb37f7b], a0);
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
              static PyObject *t_SsrIgm01Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm01Header_init_(t_SsrIgm01Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm01Header_getCrsIndicator(t_SsrIgm01Header *self);
              static PyObject *t_SsrIgm01Header_setCrsIndicator(t_SsrIgm01Header *self, PyObject *arg);
              static PyObject *t_SsrIgm01Header_get__crsIndicator(t_SsrIgm01Header *self, void *data);
              static int t_SsrIgm01Header_set__crsIndicator(t_SsrIgm01Header *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm01Header__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm01Header, crsIndicator),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm01Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm01Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Header, getCrsIndicator, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm01Header, setCrsIndicator, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm01Header)[] = {
                { Py_tp_methods, t_SsrIgm01Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm01Header_init_ },
                { Py_tp_getset, t_SsrIgm01Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm01Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm01Header, t_SsrIgm01Header, SsrIgm01Header);

              void t_SsrIgm01Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm01Header), &PY_TYPE_DEF(SsrIgm01Header), module, "SsrIgm01Header", 0);
              }

              void t_SsrIgm01Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Header), "class_", make_descriptor(SsrIgm01Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Header), "wrapfn_", make_descriptor(t_SsrIgm01Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm01Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm01Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm01Header::wrap_Object(SsrIgm01Header(((t_SsrIgm01Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm01Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm01Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm01Header_init_(t_SsrIgm01Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm01Header object((jobject) NULL);

                INT_CALL(object = SsrIgm01Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm01Header_getCrsIndicator(t_SsrIgm01Header *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getCrsIndicator());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm01Header_setCrsIndicator(t_SsrIgm01Header *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setCrsIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCrsIndicator", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm01Header_get__crsIndicator(t_SsrIgm01Header *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getCrsIndicator());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm01Header_set__crsIndicator(t_SsrIgm01Header *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setCrsIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "crsIndicator", arg);
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldShortPeriodicsInterpolatedCoefficient.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldShortPeriodicsInterpolatedCoefficient::class$ = NULL;
            jmethodID *FieldShortPeriodicsInterpolatedCoefficient::mids$ = NULL;
            bool FieldShortPeriodicsInterpolatedCoefficient::live$ = false;

            jclass FieldShortPeriodicsInterpolatedCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldShortPeriodicsInterpolatedCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_addGridPoint_9b6c5378b14dfab5] = env->getMethodID(cls, "addGridPoint", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_clearHistory_0640e6acf969ed28] = env->getMethodID(cls, "clearHistory", "()V");
                mids$[mid_value_f77452810420dd04] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldShortPeriodicsInterpolatedCoefficient::FieldShortPeriodicsInterpolatedCoefficient(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

            void FieldShortPeriodicsInterpolatedCoefficient::addGridPoint(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addGridPoint_9b6c5378b14dfab5], a0.this$, a1.this$);
            }

            void FieldShortPeriodicsInterpolatedCoefficient::clearHistory() const
            {
              env->callVoidMethod(this$, mids$[mid_clearHistory_0640e6acf969ed28]);
            }

            JArray< ::org::hipparchus::CalculusFieldElement > FieldShortPeriodicsInterpolatedCoefficient::value(const ::org::orekit::time::FieldAbsoluteDate & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_f77452810420dd04], a0.this$));
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
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_of_(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args);
            static int t_FieldShortPeriodicsInterpolatedCoefficient_init_(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_addGridPoint(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_clearHistory(t_FieldShortPeriodicsInterpolatedCoefficient *self);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_value(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *arg);
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_get__parameters_(t_FieldShortPeriodicsInterpolatedCoefficient *self, void *data);
            static PyGetSetDef t_FieldShortPeriodicsInterpolatedCoefficient__fields_[] = {
              DECLARE_GET_FIELD(t_FieldShortPeriodicsInterpolatedCoefficient, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldShortPeriodicsInterpolatedCoefficient__methods_[] = {
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, addGridPoint, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, clearHistory, METH_NOARGS),
              DECLARE_METHOD(t_FieldShortPeriodicsInterpolatedCoefficient, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldShortPeriodicsInterpolatedCoefficient)[] = {
              { Py_tp_methods, t_FieldShortPeriodicsInterpolatedCoefficient__methods_ },
              { Py_tp_init, (void *) t_FieldShortPeriodicsInterpolatedCoefficient_init_ },
              { Py_tp_getset, t_FieldShortPeriodicsInterpolatedCoefficient__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldShortPeriodicsInterpolatedCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldShortPeriodicsInterpolatedCoefficient, t_FieldShortPeriodicsInterpolatedCoefficient, FieldShortPeriodicsInterpolatedCoefficient);
            PyObject *t_FieldShortPeriodicsInterpolatedCoefficient::wrap_Object(const FieldShortPeriodicsInterpolatedCoefficient& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodicsInterpolatedCoefficient::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodicsInterpolatedCoefficient *self = (t_FieldShortPeriodicsInterpolatedCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldShortPeriodicsInterpolatedCoefficient::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodicsInterpolatedCoefficient::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodicsInterpolatedCoefficient *self = (t_FieldShortPeriodicsInterpolatedCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldShortPeriodicsInterpolatedCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldShortPeriodicsInterpolatedCoefficient), &PY_TYPE_DEF(FieldShortPeriodicsInterpolatedCoefficient), module, "FieldShortPeriodicsInterpolatedCoefficient", 0);
            }

            void t_FieldShortPeriodicsInterpolatedCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodicsInterpolatedCoefficient), "class_", make_descriptor(FieldShortPeriodicsInterpolatedCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodicsInterpolatedCoefficient), "wrapfn_", make_descriptor(t_FieldShortPeriodicsInterpolatedCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodicsInterpolatedCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldShortPeriodicsInterpolatedCoefficient::initializeClass, 1)))
                return NULL;
              return t_FieldShortPeriodicsInterpolatedCoefficient::wrap_Object(FieldShortPeriodicsInterpolatedCoefficient(((t_FieldShortPeriodicsInterpolatedCoefficient *) arg)->object.this$));
            }
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldShortPeriodicsInterpolatedCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_of_(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldShortPeriodicsInterpolatedCoefficient_init_(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              FieldShortPeriodicsInterpolatedCoefficient object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = FieldShortPeriodicsInterpolatedCoefficient(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_addGridPoint(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *args)
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(self->object.addGridPoint(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addGridPoint", args);
              return NULL;
            }

            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_clearHistory(t_FieldShortPeriodicsInterpolatedCoefficient *self)
            {
              OBJ_CALL(self->object.clearHistory());
              Py_RETURN_NONE;
            }

            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_value(t_FieldShortPeriodicsInterpolatedCoefficient *self, PyObject *arg)
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
              return NULL;
            }
            static PyObject *t_FieldShortPeriodicsInterpolatedCoefficient_get__parameters_(t_FieldShortPeriodicsInterpolatedCoefficient *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmWriter::class$ = NULL;
            jmethodID *CdmWriter::mids$ = NULL;
            bool CdmWriter::live$ = false;
            jdouble CdmWriter::CCSDS_CDM_VERS = (jdouble) 0;
            jint CdmWriter::KVN_PADDING_WIDTH = (jint) 0;

            jclass CdmWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_cba1f12fdff2950e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                mids$[mid_writeRelativeMetadataContent_968820312130dbd5] = env->getMethodID(cls, "writeRelativeMetadataContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)V");
                mids$[mid_writeSegmentContent_e9836ce27ccfe3b9] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CCSDS_CDM_VERS = env->getStaticDoubleField(cls, "CCSDS_CDM_VERS");
                KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmWriter::CdmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1) : ::org::orekit::files::ccsds::ndm::cdm::CdmMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_cba1f12fdff2950e, a0.this$, a1.this$)) {}

            void CdmWriter::writeRelativeMetadataContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRelativeMetadataContent_968820312130dbd5], a0.this$, a1, a2.this$);
            }

            void CdmWriter::writeSegmentContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::section::Segment & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegmentContent_e9836ce27ccfe3b9], a0.this$, a1, a2.this$);
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
            static PyObject *t_CdmWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmWriter_init_(t_CdmWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmWriter_writeRelativeMetadataContent(t_CdmWriter *self, PyObject *args);
            static PyObject *t_CdmWriter_writeSegmentContent(t_CdmWriter *self, PyObject *args);

            static PyMethodDef t_CdmWriter__methods_[] = {
              DECLARE_METHOD(t_CdmWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmWriter, writeRelativeMetadataContent, METH_VARARGS),
              DECLARE_METHOD(t_CdmWriter, writeSegmentContent, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmWriter)[] = {
              { Py_tp_methods, t_CdmWriter__methods_ },
              { Py_tp_init, (void *) t_CdmWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::cdm::CdmMessageWriter),
              NULL
            };

            DEFINE_TYPE(CdmWriter, t_CdmWriter, CdmWriter);

            void t_CdmWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmWriter), &PY_TYPE_DEF(CdmWriter), module, "CdmWriter", 0);
            }

            void t_CdmWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "class_", make_descriptor(CdmWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "wrapfn_", make_descriptor(t_CdmWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "CCSDS_CDM_VERS", make_descriptor(CdmWriter::CCSDS_CDM_VERS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmWriter), "KVN_PADDING_WIDTH", make_descriptor(CdmWriter::KVN_PADDING_WIDTH));
            }

            static PyObject *t_CdmWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmWriter::initializeClass, 1)))
                return NULL;
              return t_CdmWriter::wrap_Object(CdmWriter(((t_CdmWriter *) arg)->object.this$));
            }
            static PyObject *t_CdmWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmWriter_init_(t_CdmWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::utils::IERSConventions a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::data::DataContext a1((jobject) NULL);
              CdmWriter object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
              {
                INT_CALL(object = CdmWriter(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CdmWriter_writeRelativeMetadataContent(t_CdmWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a2((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.writeRelativeMetadataContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmWriter), (PyObject *) self, "writeRelativeMetadataContent", args, 2);
            }

            static PyObject *t_CdmWriter_writeSegmentContent(t_CdmWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::section::Segment a2((jobject) NULL);
              PyTypeObject **p2;

              if (!parseArgs(args, "kDK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegmentContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmWriter), (PyObject *) self, "writeSegmentContent", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/MultisatStepNormalizer.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *MultisatStepNormalizer::class$ = NULL;
        jmethodID *MultisatStepNormalizer::mids$ = NULL;
        bool MultisatStepNormalizer::live$ = false;

        jclass MultisatStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/MultisatStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_26b8003b7e15d197] = env->getMethodID(cls, "<init>", "(DLorg/orekit/propagation/sampling/MultiSatFixedStepHandler;)V");
            mids$[mid_finish_4ccaedadb068bdeb] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_getFixedStepHandler_3a1aa72f37e261e7] = env->getMethodID(cls, "getFixedStepHandler", "()Lorg/orekit/propagation/sampling/MultiSatFixedStepHandler;");
            mids$[mid_getFixedTimeStep_557b8123390d8d0c] = env->getMethodID(cls, "getFixedTimeStep", "()D");
            mids$[mid_handleStep_4ccaedadb068bdeb] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_98fa7d48d3b7f88a] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultisatStepNormalizer::MultisatStepNormalizer(jdouble a0, const ::org::orekit::propagation::sampling::MultiSatFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_26b8003b7e15d197, a0, a1.this$)) {}

        void MultisatStepNormalizer::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_4ccaedadb068bdeb], a0.this$);
        }

        ::org::orekit::propagation::sampling::MultiSatFixedStepHandler MultisatStepNormalizer::getFixedStepHandler() const
        {
          return ::org::orekit::propagation::sampling::MultiSatFixedStepHandler(env->callObjectMethod(this$, mids$[mid_getFixedStepHandler_3a1aa72f37e261e7]));
        }

        jdouble MultisatStepNormalizer::getFixedTimeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFixedTimeStep_557b8123390d8d0c]);
        }

        void MultisatStepNormalizer::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_4ccaedadb068bdeb], a0.this$);
        }

        void MultisatStepNormalizer::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_98fa7d48d3b7f88a], a0.this$, a1.this$);
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
      namespace sampling {
        static PyObject *t_MultisatStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultisatStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultisatStepNormalizer_init_(t_MultisatStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultisatStepNormalizer_finish(t_MultisatStepNormalizer *self, PyObject *arg);
        static PyObject *t_MultisatStepNormalizer_getFixedStepHandler(t_MultisatStepNormalizer *self);
        static PyObject *t_MultisatStepNormalizer_getFixedTimeStep(t_MultisatStepNormalizer *self);
        static PyObject *t_MultisatStepNormalizer_handleStep(t_MultisatStepNormalizer *self, PyObject *arg);
        static PyObject *t_MultisatStepNormalizer_init(t_MultisatStepNormalizer *self, PyObject *args);
        static PyObject *t_MultisatStepNormalizer_get__fixedStepHandler(t_MultisatStepNormalizer *self, void *data);
        static PyObject *t_MultisatStepNormalizer_get__fixedTimeStep(t_MultisatStepNormalizer *self, void *data);
        static PyGetSetDef t_MultisatStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_MultisatStepNormalizer, fixedStepHandler),
          DECLARE_GET_FIELD(t_MultisatStepNormalizer, fixedTimeStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultisatStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_MultisatStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultisatStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultisatStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_MultisatStepNormalizer, getFixedStepHandler, METH_NOARGS),
          DECLARE_METHOD(t_MultisatStepNormalizer, getFixedTimeStep, METH_NOARGS),
          DECLARE_METHOD(t_MultisatStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_MultisatStepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultisatStepNormalizer)[] = {
          { Py_tp_methods, t_MultisatStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_MultisatStepNormalizer_init_ },
          { Py_tp_getset, t_MultisatStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultisatStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultisatStepNormalizer, t_MultisatStepNormalizer, MultisatStepNormalizer);

        void t_MultisatStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(MultisatStepNormalizer), &PY_TYPE_DEF(MultisatStepNormalizer), module, "MultisatStepNormalizer", 0);
        }

        void t_MultisatStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultisatStepNormalizer), "class_", make_descriptor(MultisatStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultisatStepNormalizer), "wrapfn_", make_descriptor(t_MultisatStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultisatStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultisatStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultisatStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_MultisatStepNormalizer::wrap_Object(MultisatStepNormalizer(((t_MultisatStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_MultisatStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultisatStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultisatStepNormalizer_init_(t_MultisatStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler a1((jobject) NULL);
          MultisatStepNormalizer object((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::MultiSatFixedStepHandler::initializeClass, &a0, &a1))
          {
            INT_CALL(object = MultisatStepNormalizer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultisatStepNormalizer_finish(t_MultisatStepNormalizer *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_MultisatStepNormalizer_getFixedStepHandler(t_MultisatStepNormalizer *self)
        {
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_MultiSatFixedStepHandler::wrap_Object(result);
        }

        static PyObject *t_MultisatStepNormalizer_getFixedTimeStep(t_MultisatStepNormalizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultisatStepNormalizer_handleStep(t_MultisatStepNormalizer *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_MultisatStepNormalizer_init(t_MultisatStepNormalizer *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_MultisatStepNormalizer_get__fixedStepHandler(t_MultisatStepNormalizer *self, void *data)
        {
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_MultiSatFixedStepHandler::wrap_Object(value);
        }

        static PyObject *t_MultisatStepNormalizer_get__fixedTimeStep(t_MultisatStepNormalizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuverHistoryMetadata::class$ = NULL;
              jmethodID *OrbitManeuverHistoryMetadata::mids$ = NULL;
              bool OrbitManeuverHistoryMetadata::live$ = false;
              ::org::orekit::files::ccsds::definitions::DutyCycleType *OrbitManeuverHistoryMetadata::DEFAULT_DC_TYPE = NULL;

              jclass OrbitManeuverHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_20affcbd28542333] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getDcBodyFrame_f86371e743965d5e] = env->getMethodID(cls, "getDcBodyFrame", "()Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;");
                  mids$[mid_getDcBodyTrigger_f88961cca75a2c0a] = env->getMethodID(cls, "getDcBodyTrigger", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDcExecStart_7a97f7e149e79afb] = env->getMethodID(cls, "getDcExecStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcExecStop_7a97f7e149e79afb] = env->getMethodID(cls, "getDcExecStop", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcMaxCycles_412668abc8d889e9] = env->getMethodID(cls, "getDcMaxCycles", "()I");
                  mids$[mid_getDcMinCycles_412668abc8d889e9] = env->getMethodID(cls, "getDcMinCycles", "()I");
                  mids$[mid_getDcPhaseStartAngle_557b8123390d8d0c] = env->getMethodID(cls, "getDcPhaseStartAngle", "()D");
                  mids$[mid_getDcPhaseStopAngle_557b8123390d8d0c] = env->getMethodID(cls, "getDcPhaseStopAngle", "()D");
                  mids$[mid_getDcRefDir_f88961cca75a2c0a] = env->getMethodID(cls, "getDcRefDir", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDcRefTime_7a97f7e149e79afb] = env->getMethodID(cls, "getDcRefTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcTimePulseDuration_557b8123390d8d0c] = env->getMethodID(cls, "getDcTimePulseDuration", "()D");
                  mids$[mid_getDcTimePulsePeriod_557b8123390d8d0c] = env->getMethodID(cls, "getDcTimePulsePeriod", "()D");
                  mids$[mid_getDcType_f6ee7f5f33e09f00] = env->getMethodID(cls, "getDcType", "()Lorg/orekit/files/ccsds/definitions/DutyCycleType;");
                  mids$[mid_getDcWindowClose_7a97f7e149e79afb] = env->getMethodID(cls, "getDcWindowClose", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcWindowOpen_7a97f7e149e79afb] = env->getMethodID(cls, "getDcWindowOpen", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getGravitationalAssist_c642bce266d6d89a] = env->getMethodID(cls, "getGravitationalAssist", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                  mids$[mid_getManBasis_1929aa09b0efe5e6] = env->getMethodID(cls, "getManBasis", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;");
                  mids$[mid_getManBasisID_3cffd47377eca18a] = env->getMethodID(cls, "getManBasisID", "()Ljava/lang/String;");
                  mids$[mid_getManComposition_0d9551367f7ecdef] = env->getMethodID(cls, "getManComposition", "()Ljava/util/List;");
                  mids$[mid_getManDeviceID_3cffd47377eca18a] = env->getMethodID(cls, "getManDeviceID", "()Ljava/lang/String;");
                  mids$[mid_getManFrameEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getManFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManID_3cffd47377eca18a] = env->getMethodID(cls, "getManID", "()Ljava/lang/String;");
                  mids$[mid_getManNextEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getManNextEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManNextID_3cffd47377eca18a] = env->getMethodID(cls, "getManNextID", "()Ljava/lang/String;");
                  mids$[mid_getManPredSource_3cffd47377eca18a] = env->getMethodID(cls, "getManPredSource", "()Ljava/lang/String;");
                  mids$[mid_getManPrevEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getManPrevEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManPrevID_3cffd47377eca18a] = env->getMethodID(cls, "getManPrevID", "()Ljava/lang/String;");
                  mids$[mid_getManPurpose_0d9551367f7ecdef] = env->getMethodID(cls, "getManPurpose", "()Ljava/util/List;");
                  mids$[mid_getManReferenceFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getManReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getManUnits_0d9551367f7ecdef] = env->getMethodID(cls, "getManUnits", "()Ljava/util/List;");
                  mids$[mid_setDcBodyFrame_cd9779da9f153284] = env->getMethodID(cls, "setDcBodyFrame", "(Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;)V");
                  mids$[mid_setDcBodyTrigger_2810d2bec90e7b1c] = env->getMethodID(cls, "setDcBodyTrigger", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setDcExecStart_20affcbd28542333] = env->getMethodID(cls, "setDcExecStart", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcExecStop_20affcbd28542333] = env->getMethodID(cls, "setDcExecStop", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcMaxCycles_a3da1a935cb37f7b] = env->getMethodID(cls, "setDcMaxCycles", "(I)V");
                  mids$[mid_setDcMinCycles_a3da1a935cb37f7b] = env->getMethodID(cls, "setDcMinCycles", "(I)V");
                  mids$[mid_setDcPhaseStartAngle_10f281d777284cea] = env->getMethodID(cls, "setDcPhaseStartAngle", "(D)V");
                  mids$[mid_setDcPhaseStopAngle_10f281d777284cea] = env->getMethodID(cls, "setDcPhaseStopAngle", "(D)V");
                  mids$[mid_setDcRefDir_2810d2bec90e7b1c] = env->getMethodID(cls, "setDcRefDir", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setDcRefTime_20affcbd28542333] = env->getMethodID(cls, "setDcRefTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcTimePulseDuration_10f281d777284cea] = env->getMethodID(cls, "setDcTimePulseDuration", "(D)V");
                  mids$[mid_setDcTimePulsePeriod_10f281d777284cea] = env->getMethodID(cls, "setDcTimePulsePeriod", "(D)V");
                  mids$[mid_setDcType_4d69b82588c717d8] = env->getMethodID(cls, "setDcType", "(Lorg/orekit/files/ccsds/definitions/DutyCycleType;)V");
                  mids$[mid_setDcWindowClose_20affcbd28542333] = env->getMethodID(cls, "setDcWindowClose", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcWindowOpen_20affcbd28542333] = env->getMethodID(cls, "setDcWindowOpen", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setGravitationalAssist_e6f755c267d91c26] = env->getMethodID(cls, "setGravitationalAssist", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                  mids$[mid_setManBasis_5c26ac53f1ec8457] = env->getMethodID(cls, "setManBasis", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;)V");
                  mids$[mid_setManBasisID_f5ffdf29129ef90a] = env->getMethodID(cls, "setManBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setManComposition_4ccaedadb068bdeb] = env->getMethodID(cls, "setManComposition", "(Ljava/util/List;)V");
                  mids$[mid_setManDeviceID_f5ffdf29129ef90a] = env->getMethodID(cls, "setManDeviceID", "(Ljava/lang/String;)V");
                  mids$[mid_setManFrameEpoch_20affcbd28542333] = env->getMethodID(cls, "setManFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setManID_f5ffdf29129ef90a] = env->getMethodID(cls, "setManID", "(Ljava/lang/String;)V");
                  mids$[mid_setManNextEpoch_20affcbd28542333] = env->getMethodID(cls, "setManNextEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setManNextID_f5ffdf29129ef90a] = env->getMethodID(cls, "setManNextID", "(Ljava/lang/String;)V");
                  mids$[mid_setManPredSource_f5ffdf29129ef90a] = env->getMethodID(cls, "setManPredSource", "(Ljava/lang/String;)V");
                  mids$[mid_setManPrevEpoch_20affcbd28542333] = env->getMethodID(cls, "setManPrevEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setManPrevID_f5ffdf29129ef90a] = env->getMethodID(cls, "setManPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setManPurpose_4ccaedadb068bdeb] = env->getMethodID(cls, "setManPurpose", "(Ljava/util/List;)V");
                  mids$[mid_setManReferenceFrame_f55eee1236275bb1] = env->getMethodID(cls, "setManReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setManUnits_4ccaedadb068bdeb] = env->getMethodID(cls, "setManUnits", "(Ljava/util/List;)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_DC_TYPE = new ::org::orekit::files::ccsds::definitions::DutyCycleType(env->getStaticObjectField(cls, "DEFAULT_DC_TYPE", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitManeuverHistoryMetadata::OrbitManeuverHistoryMetadata(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_20affcbd28542333, a0.this$)) {}

              ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame OrbitManeuverHistoryMetadata::getDcBodyFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame(env->callObjectMethod(this$, mids$[mid_getDcBodyFrame_f86371e743965d5e]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuverHistoryMetadata::getDcBodyTrigger() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDcBodyTrigger_f88961cca75a2c0a]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcExecStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcExecStart_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcExecStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcExecStop_7a97f7e149e79afb]));
              }

              jint OrbitManeuverHistoryMetadata::getDcMaxCycles() const
              {
                return env->callIntMethod(this$, mids$[mid_getDcMaxCycles_412668abc8d889e9]);
              }

              jint OrbitManeuverHistoryMetadata::getDcMinCycles() const
              {
                return env->callIntMethod(this$, mids$[mid_getDcMinCycles_412668abc8d889e9]);
              }

              jdouble OrbitManeuverHistoryMetadata::getDcPhaseStartAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcPhaseStartAngle_557b8123390d8d0c]);
              }

              jdouble OrbitManeuverHistoryMetadata::getDcPhaseStopAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcPhaseStopAngle_557b8123390d8d0c]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuverHistoryMetadata::getDcRefDir() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDcRefDir_f88961cca75a2c0a]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcRefTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcRefTime_7a97f7e149e79afb]));
              }

              jdouble OrbitManeuverHistoryMetadata::getDcTimePulseDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcTimePulseDuration_557b8123390d8d0c]);
              }

              jdouble OrbitManeuverHistoryMetadata::getDcTimePulsePeriod() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcTimePulsePeriod_557b8123390d8d0c]);
              }

              ::org::orekit::files::ccsds::definitions::DutyCycleType OrbitManeuverHistoryMetadata::getDcType() const
              {
                return ::org::orekit::files::ccsds::definitions::DutyCycleType(env->callObjectMethod(this$, mids$[mid_getDcType_f6ee7f5f33e09f00]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcWindowClose() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcWindowClose_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcWindowOpen() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcWindowOpen_7a97f7e149e79afb]));
              }

              ::org::orekit::files::ccsds::definitions::BodyFacade OrbitManeuverHistoryMetadata::getGravitationalAssist() const
              {
                return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getGravitationalAssist_c642bce266d6d89a]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis OrbitManeuverHistoryMetadata::getManBasis() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis(env->callObjectMethod(this$, mids$[mid_getManBasis_1929aa09b0efe5e6]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManBasisID_3cffd47377eca18a]));
              }

              ::java::util::List OrbitManeuverHistoryMetadata::getManComposition() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManComposition_0d9551367f7ecdef]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManDeviceID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManDeviceID_3cffd47377eca18a]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getManFrameEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getManFrameEpoch_7a97f7e149e79afb]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManID_3cffd47377eca18a]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getManNextEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getManNextEpoch_7a97f7e149e79afb]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManNextID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManNextID_3cffd47377eca18a]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManPredSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManPredSource_3cffd47377eca18a]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getManPrevEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getManPrevEpoch_7a97f7e149e79afb]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManPrevID_3cffd47377eca18a]));
              }

              ::java::util::List OrbitManeuverHistoryMetadata::getManPurpose() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManPurpose_0d9551367f7ecdef]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade OrbitManeuverHistoryMetadata::getManReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getManReferenceFrame_98f5fcaff3e3f9d2]));
              }

              ::java::util::List OrbitManeuverHistoryMetadata::getManUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManUnits_0d9551367f7ecdef]));
              }

              void OrbitManeuverHistoryMetadata::setDcBodyFrame(const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcBodyFrame_cd9779da9f153284], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcBodyTrigger(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcBodyTrigger_2810d2bec90e7b1c], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcExecStart(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcExecStart_20affcbd28542333], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcExecStop(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcExecStop_20affcbd28542333], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcMaxCycles(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcMaxCycles_a3da1a935cb37f7b], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcMinCycles(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcMinCycles_a3da1a935cb37f7b], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcPhaseStartAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcPhaseStartAngle_10f281d777284cea], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcPhaseStopAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcPhaseStopAngle_10f281d777284cea], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcRefDir(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcRefDir_2810d2bec90e7b1c], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcRefTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcRefTime_20affcbd28542333], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcTimePulseDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcTimePulseDuration_10f281d777284cea], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcTimePulsePeriod(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcTimePulsePeriod_10f281d777284cea], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcType(const ::org::orekit::files::ccsds::definitions::DutyCycleType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcType_4d69b82588c717d8], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcWindowClose(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcWindowClose_20affcbd28542333], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcWindowOpen(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcWindowOpen_20affcbd28542333], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setGravitationalAssist(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGravitationalAssist_e6f755c267d91c26], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManBasis(const ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManBasis_5c26ac53f1ec8457], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManBasisID_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManComposition(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManComposition_4ccaedadb068bdeb], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManDeviceID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManDeviceID_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManFrameEpoch_20affcbd28542333], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManID_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManNextEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManNextEpoch_20affcbd28542333], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManNextID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManNextID_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPredSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPredSource_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPrevEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPrevEpoch_20affcbd28542333], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPrevID_f5ffdf29129ef90a], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPurpose(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPurpose_4ccaedadb068bdeb], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManReferenceFrame_f55eee1236275bb1], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManUnits(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManUnits_4ccaedadb068bdeb], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
              static PyObject *t_OrbitManeuverHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitManeuverHistoryMetadata_init_(t_OrbitManeuverHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyFrame(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStart(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStop(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMaxCycles(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMinCycles(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefDir(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefTime(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcType(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowClose(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowOpen(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getGravitationalAssist(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasis(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasisID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManComposition(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManDeviceID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManFrameEpoch(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextEpoch(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPredSource(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevEpoch(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPurpose(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManReferenceFrame(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManUnits(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setGravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_validate(t_OrbitManeuverHistoryMetadata *self, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStart(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStop(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefDir(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefTime(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcType(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasis(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasisID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manComposition(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manDeviceID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPredSource(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPurpose(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manUnits(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitManeuverHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcBodyFrame),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcBodyTrigger),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcExecStart),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcExecStop),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcMaxCycles),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcMinCycles),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcPhaseStartAngle),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcPhaseStopAngle),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcRefDir),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcRefTime),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcTimePulseDuration),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcTimePulsePeriod),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcType),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcWindowClose),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcWindowOpen),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, gravitationalAssist),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manBasis),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manBasisID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manComposition),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manDeviceID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manFrameEpoch),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manNextEpoch),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manNextID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPredSource),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPrevEpoch),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPrevID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPurpose),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manReferenceFrame),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manUnits),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuverHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcBodyFrame, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcBodyTrigger, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcExecStart, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcExecStop, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcMaxCycles, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcMinCycles, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcPhaseStartAngle, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcPhaseStopAngle, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcRefDir, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcRefTime, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcTimePulseDuration, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcTimePulsePeriod, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcType, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcWindowClose, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcWindowOpen, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getGravitationalAssist, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManBasis, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManBasisID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManComposition, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManDeviceID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManFrameEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManNextEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManNextID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPredSource, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPrevEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPrevID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPurpose, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManUnits, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcBodyFrame, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcBodyTrigger, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcExecStart, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcExecStop, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcMaxCycles, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcMinCycles, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcPhaseStartAngle, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcPhaseStopAngle, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcRefDir, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcRefTime, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcTimePulseDuration, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcTimePulsePeriod, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcType, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcWindowClose, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcWindowOpen, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setGravitationalAssist, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManBasis, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManBasisID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManComposition, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManDeviceID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManFrameEpoch, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManNextEpoch, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManNextID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPredSource, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPrevEpoch, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPrevID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPurpose, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManReferenceFrame, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManUnits, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuverHistoryMetadata)[] = {
                { Py_tp_methods, t_OrbitManeuverHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_OrbitManeuverHistoryMetadata_init_ },
                { Py_tp_getset, t_OrbitManeuverHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuverHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OrbitManeuverHistoryMetadata, t_OrbitManeuverHistoryMetadata, OrbitManeuverHistoryMetadata);

              void t_OrbitManeuverHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuverHistoryMetadata), &PY_TYPE_DEF(OrbitManeuverHistoryMetadata), module, "OrbitManeuverHistoryMetadata", 0);
              }

              void t_OrbitManeuverHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "class_", make_descriptor(OrbitManeuverHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "wrapfn_", make_descriptor(t_OrbitManeuverHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitManeuverHistoryMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "DEFAULT_DC_TYPE", make_descriptor(::org::orekit::files::ccsds::definitions::t_DutyCycleType::wrap_Object(*OrbitManeuverHistoryMetadata::DEFAULT_DC_TYPE)));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuverHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuverHistoryMetadata::wrap_Object(OrbitManeuverHistoryMetadata(((t_OrbitManeuverHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuverHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuverHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitManeuverHistoryMetadata_init_(t_OrbitManeuverHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                OrbitManeuverHistoryMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = OrbitManeuverHistoryMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyFrame(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcBodyFrame());
                return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcBodyTrigger());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStart(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcExecStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStop(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcExecStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMaxCycles(t_OrbitManeuverHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getDcMaxCycles());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMinCycles(t_OrbitManeuverHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getDcMinCycles());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcPhaseStartAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcPhaseStopAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefDir(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcRefDir());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefTime(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcRefTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcTimePulseDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcTimePulsePeriod());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcType(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::DutyCycleType result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcType());
                return ::org::orekit::files::ccsds::definitions::t_DutyCycleType::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowClose(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcWindowClose());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowOpen(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcWindowOpen());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getGravitationalAssist(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getGravitationalAssist());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasis(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis result((jobject) NULL);
                OBJ_CALL(result = self->object.getManBasis());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ManBasis::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasisID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManBasisID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManComposition(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManComposition());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(ManeuverFieldType));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManDeviceID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManDeviceID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManFrameEpoch(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getManFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextEpoch(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getManNextEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManNextID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPredSource(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPredSource());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevEpoch(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPrevEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPrevID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPurpose(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPurpose());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManReferenceFrame(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getManReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManUnits(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcBodyFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcBodyFrame", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcBodyTrigger(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcBodyTrigger", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcExecStart(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcExecStart", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcExecStop(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcExecStop", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setDcMaxCycles(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcMaxCycles", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setDcMinCycles(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcMinCycles", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcPhaseStartAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcPhaseStartAngle", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcPhaseStopAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcPhaseStopAngle", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcRefDir(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcRefDir", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcRefTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcRefTime", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcTimePulseDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcTimePulseDuration", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcTimePulsePeriod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcTimePulsePeriod", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::DutyCycleType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::DutyCycleType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_DutyCycleType::parameters_))
                {
                  OBJ_CALL(self->object.setDcType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcType", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcWindowClose(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcWindowClose", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcWindowOpen(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcWindowOpen", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setGravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGravitationalAssist(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGravitationalAssist", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ManBasis::parameters_))
                {
                  OBJ_CALL(self->object.setManBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManBasis", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManBasisID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setManComposition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManComposition", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManDeviceID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManDeviceID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManFrameEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManFrameEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManNextEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManNextEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManNextID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManNextID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManPredSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPredSource", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManPrevEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPrevEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPrevID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setManPurpose(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPurpose", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setManUnits(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManUnits", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_validate(t_OrbitManeuverHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OrbitManeuverHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcBodyFrame());
                return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcBodyFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcBodyFrame", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcBodyTrigger());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcBodyTrigger(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcBodyTrigger", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStart(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcExecStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcExecStart(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcExecStart", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStop(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcExecStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcExecStop(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcExecStop", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getDcMaxCycles());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setDcMaxCycles(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcMaxCycles", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getDcMinCycles());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setDcMinCycles(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcMinCycles", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcPhaseStartAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcPhaseStartAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcPhaseStartAngle", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcPhaseStopAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcPhaseStopAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcPhaseStopAngle", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefDir(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcRefDir());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcRefDir(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcRefDir", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefTime(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcRefTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcRefTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcRefTime", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcTimePulseDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcTimePulseDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcTimePulseDuration", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcTimePulsePeriod());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcTimePulsePeriod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcTimePulsePeriod", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcType(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::DutyCycleType value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcType());
                return ::org::orekit::files::ccsds::definitions::t_DutyCycleType::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::DutyCycleType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::DutyCycleType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcType", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcWindowClose());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcWindowClose(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcWindowClose", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcWindowOpen());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcWindowOpen(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcWindowOpen", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getGravitationalAssist());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGravitationalAssist(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gravitationalAssist", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasis(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis value((jobject) NULL);
                OBJ_CALL(value = self->object.getManBasis());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ManBasis::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manBasis", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasisID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManBasisID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manBasisID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manComposition(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManComposition());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManComposition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manComposition", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manDeviceID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManDeviceID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManDeviceID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manDeviceID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getManFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManFrameEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manFrameEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getManNextEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManNextEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manNextEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManNextID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManNextID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manNextID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPredSource(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPredSource());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManPredSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPredSource", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPrevEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManPrevEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPrevEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPrevID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPrevID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPurpose(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPurpose());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManPurpose(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPurpose", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getManReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manUnits(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManUnits());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManUnits(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manUnits", arg);
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
#include "org/orekit/propagation/numerical/cr3bp/CR3BPMultipleShooter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "org/orekit/propagation/numerical/cr3bp/STMEquations.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *CR3BPMultipleShooter::class$ = NULL;
          jmethodID *CR3BPMultipleShooter::mids$ = NULL;
          bool CR3BPMultipleShooter::live$ = false;

          jclass CR3BPMultipleShooter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/CR3BPMultipleShooter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_56e88fd08b255763] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;DI)V");
              mids$[mid_setClosedOrbitConstraint_ed2afdb8506b9742] = env->getMethodID(cls, "setClosedOrbitConstraint", "(Z)V");
              mids$[mid_setEpochFreedom_746492bb94848925] = env->getMethodID(cls, "setEpochFreedom", "(IZ)V");
              mids$[mid_setScaleLength_10f281d777284cea] = env->getMethodID(cls, "setScaleLength", "(D)V");
              mids$[mid_setScaleTime_10f281d777284cea] = env->getMethodID(cls, "setScaleTime", "(D)V");
              mids$[mid_computeAdditionalConstraints_1122e29f2a25b86f] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
              mids$[mid_computeAdditionalJacobianMatrix_29dc26d4c6c7bd43] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
              mids$[mid_getAugmentedInitialState_d91edcd61f36fecc] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_getNumberOfConstraints_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfConstraints", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CR3BPMultipleShooter::CR3BPMultipleShooter(const ::java::util::List & a0, const ::java::util::List & a1, const ::java::util::List & a2, jdouble a3, jint a4) : ::org::orekit::utils::AbstractMultipleShooting(env->newObject(initializeClass, &mids$, mid_init$_56e88fd08b255763, a0.this$, a1.this$, a2.this$, a3, a4)) {}

          void CR3BPMultipleShooter::setClosedOrbitConstraint(jboolean a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setClosedOrbitConstraint_ed2afdb8506b9742], a0);
          }

          void CR3BPMultipleShooter::setEpochFreedom(jint a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setEpochFreedom_746492bb94848925], a0, a1);
          }

          void CR3BPMultipleShooter::setScaleLength(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setScaleLength_10f281d777284cea], a0);
          }

          void CR3BPMultipleShooter::setScaleTime(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setScaleTime_10f281d777284cea], a0);
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
      namespace numerical {
        namespace cr3bp {
          static PyObject *t_CR3BPMultipleShooter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPMultipleShooter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CR3BPMultipleShooter_init_(t_CR3BPMultipleShooter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CR3BPMultipleShooter_setClosedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg);
          static PyObject *t_CR3BPMultipleShooter_setEpochFreedom(t_CR3BPMultipleShooter *self, PyObject *args);
          static PyObject *t_CR3BPMultipleShooter_setScaleLength(t_CR3BPMultipleShooter *self, PyObject *args);
          static PyObject *t_CR3BPMultipleShooter_setScaleTime(t_CR3BPMultipleShooter *self, PyObject *args);
          static int t_CR3BPMultipleShooter_set__closedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg, void *data);
          static int t_CR3BPMultipleShooter_set__scaleLength(t_CR3BPMultipleShooter *self, PyObject *arg, void *data);
          static int t_CR3BPMultipleShooter_set__scaleTime(t_CR3BPMultipleShooter *self, PyObject *arg, void *data);
          static PyGetSetDef t_CR3BPMultipleShooter__fields_[] = {
            DECLARE_SET_FIELD(t_CR3BPMultipleShooter, closedOrbitConstraint),
            DECLARE_SET_FIELD(t_CR3BPMultipleShooter, scaleLength),
            DECLARE_SET_FIELD(t_CR3BPMultipleShooter, scaleTime),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CR3BPMultipleShooter__methods_[] = {
            DECLARE_METHOD(t_CR3BPMultipleShooter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setClosedOrbitConstraint, METH_O),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setEpochFreedom, METH_VARARGS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setScaleLength, METH_VARARGS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setScaleTime, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CR3BPMultipleShooter)[] = {
            { Py_tp_methods, t_CR3BPMultipleShooter__methods_ },
            { Py_tp_init, (void *) t_CR3BPMultipleShooter_init_ },
            { Py_tp_getset, t_CR3BPMultipleShooter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CR3BPMultipleShooter)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::AbstractMultipleShooting),
            NULL
          };

          DEFINE_TYPE(CR3BPMultipleShooter, t_CR3BPMultipleShooter, CR3BPMultipleShooter);

          void t_CR3BPMultipleShooter::install(PyObject *module)
          {
            installType(&PY_TYPE(CR3BPMultipleShooter), &PY_TYPE_DEF(CR3BPMultipleShooter), module, "CR3BPMultipleShooter", 0);
          }

          void t_CR3BPMultipleShooter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPMultipleShooter), "class_", make_descriptor(CR3BPMultipleShooter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPMultipleShooter), "wrapfn_", make_descriptor(t_CR3BPMultipleShooter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPMultipleShooter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CR3BPMultipleShooter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CR3BPMultipleShooter::initializeClass, 1)))
              return NULL;
            return t_CR3BPMultipleShooter::wrap_Object(CR3BPMultipleShooter(((t_CR3BPMultipleShooter *) arg)->object.this$));
          }
          static PyObject *t_CR3BPMultipleShooter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CR3BPMultipleShooter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CR3BPMultipleShooter_init_(t_CR3BPMultipleShooter *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jint a4;
            CR3BPMultipleShooter object((jobject) NULL);

            if (!parseArgs(args, "KKKDI", ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4))
            {
              INT_CALL(object = CR3BPMultipleShooter(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CR3BPMultipleShooter_setClosedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg)
          {
            jboolean a0;

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(self->object.setClosedOrbitConstraint(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setClosedOrbitConstraint", arg);
            return NULL;
          }

          static PyObject *t_CR3BPMultipleShooter_setEpochFreedom(t_CR3BPMultipleShooter *self, PyObject *args)
          {
            jint a0;
            jboolean a1;

            if (!parseArgs(args, "IZ", &a0, &a1))
            {
              OBJ_CALL(self->object.setEpochFreedom(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CR3BPMultipleShooter), (PyObject *) self, "setEpochFreedom", args, 2);
          }

          static PyObject *t_CR3BPMultipleShooter_setScaleLength(t_CR3BPMultipleShooter *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setScaleLength(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CR3BPMultipleShooter), (PyObject *) self, "setScaleLength", args, 2);
          }

          static PyObject *t_CR3BPMultipleShooter_setScaleTime(t_CR3BPMultipleShooter *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setScaleTime(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CR3BPMultipleShooter), (PyObject *) self, "setScaleTime", args, 2);
          }

          static int t_CR3BPMultipleShooter_set__closedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg, void *data)
          {
            {
              jboolean value;
              if (!parseArg(arg, "Z", &value))
              {
                INT_CALL(self->object.setClosedOrbitConstraint(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "closedOrbitConstraint", arg);
            return -1;
          }

          static int t_CR3BPMultipleShooter_set__scaleLength(t_CR3BPMultipleShooter *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setScaleLength(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "scaleLength", arg);
            return -1;
          }

          static int t_CR3BPMultipleShooter_set__scaleTime(t_CR3BPMultipleShooter *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setScaleTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "scaleTime", arg);
            return -1;
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
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/SubLine.h"
#include "org/hipparchus/geometry/euclidean/threed/Segment.h"
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
              mids$[mid_init$_236e7483aa3ace2d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Segment;)V");
              mids$[mid_init$_ecad37d667f0f990] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/oned/IntervalsSet;)V");
              mids$[mid_init$_8a3775c012d81228] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_intersection_3688c10a24527df7] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/SubLine;Z)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::threed::Segment & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_236e7483aa3ace2d, a0.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::oned::IntervalsSet & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ecad37d667f0f990, a0.this$, a1.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8a3775c012d81228, a0.this$, a1.this$, a2)) {}

          ::java::util::List SubLine::getSegments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_0d9551367f7ecdef]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D SubLine::intersection(const SubLine & a0, jboolean a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_intersection_3688c10a24527df7], a0.this$, a1));
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
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/String.h"
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
          mids$[mid_getFilter_fc338503faecdd01] = env->getStaticMethodID(cls, "getFilter", "(I)Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_getMaxOrder_412668abc8d889e9] = env->getMethodID(cls, "getMaxOrder", "()I");
          mids$[mid_valueOf_a83e1e8abbd4b65b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_values_05edc09a4ca9b5ac] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/AngularDerivativesFilter;");

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
        return AngularDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_getFilter_fc338503faecdd01], a0));
      }

      jint AngularDerivativesFilter::getMaxOrder() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxOrder_412668abc8d889e9]);
      }

      AngularDerivativesFilter AngularDerivativesFilter::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AngularDerivativesFilter(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a83e1e8abbd4b65b], a0.this$));
      }

      JArray< AngularDerivativesFilter > AngularDerivativesFilter::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< AngularDerivativesFilter >(env->callStaticObjectMethod(cls, mids$[mid_values_05edc09a4ca9b5ac]));
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
#include "org/orekit/forces/drag/PythonAbstractDragForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *PythonAbstractDragForceModel::class$ = NULL;
        jmethodID *PythonAbstractDragForceModel::mids$ = NULL;
        bool PythonAbstractDragForceModel::live$ = false;

        jclass PythonAbstractDragForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/PythonAbstractDragForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_75d446ceb412e1f6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;)V");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractDragForceModel::PythonAbstractDragForceModel(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_75d446ceb412e1f6, a0.this$)) {}

        void PythonAbstractDragForceModel::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAbstractDragForceModel::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAbstractDragForceModel::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace drag {
        static PyObject *t_PythonAbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractDragForceModel_init_(t_PythonAbstractDragForceModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractDragForceModel_finalize(t_PythonAbstractDragForceModel *self);
        static PyObject *t_PythonAbstractDragForceModel_pythonExtension(t_PythonAbstractDragForceModel *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractDragForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractDragForceModel_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractDragForceModel_get__self(t_PythonAbstractDragForceModel *self, void *data);
        static PyGetSetDef t_PythonAbstractDragForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractDragForceModel, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractDragForceModel__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractDragForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDragForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDragForceModel, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractDragForceModel, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractDragForceModel)[] = {
          { Py_tp_methods, t_PythonAbstractDragForceModel__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractDragForceModel_init_ },
          { Py_tp_getset, t_PythonAbstractDragForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractDragForceModel)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::drag::AbstractDragForceModel),
          NULL
        };

        DEFINE_TYPE(PythonAbstractDragForceModel, t_PythonAbstractDragForceModel, PythonAbstractDragForceModel);

        void t_PythonAbstractDragForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractDragForceModel), &PY_TYPE_DEF(PythonAbstractDragForceModel), module, "PythonAbstractDragForceModel", 1);
        }

        void t_PythonAbstractDragForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDragForceModel), "class_", make_descriptor(PythonAbstractDragForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDragForceModel), "wrapfn_", make_descriptor(t_PythonAbstractDragForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDragForceModel), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractDragForceModel::initializeClass);
          JNINativeMethod methods[] = {
            { "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractDragForceModel_acceleration0 },
            { "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAbstractDragForceModel_acceleration1 },
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractDragForceModel_getParametersDrivers2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractDragForceModel_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractDragForceModel::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractDragForceModel::wrap_Object(PythonAbstractDragForceModel(((t_PythonAbstractDragForceModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractDragForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractDragForceModel_init_(t_PythonAbstractDragForceModel *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
          PythonAbstractDragForceModel object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractDragForceModel(a0));
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

        static PyObject *t_PythonAbstractDragForceModel_finalize(t_PythonAbstractDragForceModel *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractDragForceModel_pythonExtension(t_PythonAbstractDragForceModel *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("acceleration", result);
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

        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("acceleration", result);
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

        static jobject JNICALL t_PythonAbstractDragForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_9e26256fb0d384a2]);
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

        static void JNICALL t_PythonAbstractDragForceModel_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractDragForceModel_get__self(t_PythonAbstractDragForceModel *self, void *data)
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
#include "org/hipparchus/linear/RectangularCholeskyDecomposition.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RectangularCholeskyDecomposition::class$ = NULL;
      jmethodID *RectangularCholeskyDecomposition::mids$ = NULL;
      bool RectangularCholeskyDecomposition::live$ = false;

      jclass RectangularCholeskyDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RectangularCholeskyDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_08eaf415db10314f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getRank_412668abc8d889e9] = env->getMethodID(cls, "getRank", "()I");
          mids$[mid_getRootMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getRootMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RectangularCholeskyDecomposition::RectangularCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

      RectangularCholeskyDecomposition::RectangularCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_08eaf415db10314f, a0.this$, a1)) {}

      jint RectangularCholeskyDecomposition::getRank() const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::RealMatrix RectangularCholeskyDecomposition::getRootMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRootMatrix_70a207fcbc031df2]));
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
      static PyObject *t_RectangularCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RectangularCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RectangularCholeskyDecomposition_init_(t_RectangularCholeskyDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RectangularCholeskyDecomposition_getRank(t_RectangularCholeskyDecomposition *self);
      static PyObject *t_RectangularCholeskyDecomposition_getRootMatrix(t_RectangularCholeskyDecomposition *self);
      static PyObject *t_RectangularCholeskyDecomposition_get__rank(t_RectangularCholeskyDecomposition *self, void *data);
      static PyObject *t_RectangularCholeskyDecomposition_get__rootMatrix(t_RectangularCholeskyDecomposition *self, void *data);
      static PyGetSetDef t_RectangularCholeskyDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_RectangularCholeskyDecomposition, rank),
        DECLARE_GET_FIELD(t_RectangularCholeskyDecomposition, rootMatrix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RectangularCholeskyDecomposition__methods_[] = {
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, getRank, METH_NOARGS),
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, getRootMatrix, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RectangularCholeskyDecomposition)[] = {
        { Py_tp_methods, t_RectangularCholeskyDecomposition__methods_ },
        { Py_tp_init, (void *) t_RectangularCholeskyDecomposition_init_ },
        { Py_tp_getset, t_RectangularCholeskyDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RectangularCholeskyDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RectangularCholeskyDecomposition, t_RectangularCholeskyDecomposition, RectangularCholeskyDecomposition);

      void t_RectangularCholeskyDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(RectangularCholeskyDecomposition), &PY_TYPE_DEF(RectangularCholeskyDecomposition), module, "RectangularCholeskyDecomposition", 0);
      }

      void t_RectangularCholeskyDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RectangularCholeskyDecomposition), "class_", make_descriptor(RectangularCholeskyDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RectangularCholeskyDecomposition), "wrapfn_", make_descriptor(t_RectangularCholeskyDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RectangularCholeskyDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RectangularCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RectangularCholeskyDecomposition::initializeClass, 1)))
          return NULL;
        return t_RectangularCholeskyDecomposition::wrap_Object(RectangularCholeskyDecomposition(((t_RectangularCholeskyDecomposition *) arg)->object.this$));
      }
      static PyObject *t_RectangularCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RectangularCholeskyDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RectangularCholeskyDecomposition_init_(t_RectangularCholeskyDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            RectangularCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = RectangularCholeskyDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            RectangularCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RectangularCholeskyDecomposition(a0, a1));
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

      static PyObject *t_RectangularCholeskyDecomposition_getRank(t_RectangularCholeskyDecomposition *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRank());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RectangularCholeskyDecomposition_getRootMatrix(t_RectangularCholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RectangularCholeskyDecomposition_get__rank(t_RectangularCholeskyDecomposition *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRank());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RectangularCholeskyDecomposition_get__rootMatrix(t_RectangularCholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PoissonSeries$CompiledSeries::class$ = NULL;
      jmethodID *PoissonSeries$CompiledSeries::mids$ = NULL;
      bool PoissonSeries$CompiledSeries::live$ = false;

      jclass PoissonSeries$CompiledSeries::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PoissonSeries$CompiledSeries");

          mids$ = new jmethodID[max_mid];
          mids$[mid_derivative_c933bd8b3b01b6fa] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_derivative_19d2f680a2dd5e54] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_value_c933bd8b3b01b6fa] = env->getMethodID(cls, "value", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_value_19d2f680a2dd5e54] = env->getMethodID(cls, "value", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > PoissonSeries$CompiledSeries::derivative(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_derivative_c933bd8b3b01b6fa], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > PoissonSeries$CompiledSeries::derivative(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_derivative_19d2f680a2dd5e54], a0.this$));
      }

      JArray< jdouble > PoissonSeries$CompiledSeries::value(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_c933bd8b3b01b6fa], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > PoissonSeries$CompiledSeries::value(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_19d2f680a2dd5e54], a0.this$));
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
      static PyObject *t_PoissonSeries$CompiledSeries_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries$CompiledSeries_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries$CompiledSeries_derivative(t_PoissonSeries$CompiledSeries *self, PyObject *args);
      static PyObject *t_PoissonSeries$CompiledSeries_value(t_PoissonSeries$CompiledSeries *self, PyObject *args);

      static PyMethodDef t_PoissonSeries$CompiledSeries__methods_[] = {
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, derivative, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoissonSeries$CompiledSeries)[] = {
        { Py_tp_methods, t_PoissonSeries$CompiledSeries__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoissonSeries$CompiledSeries)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoissonSeries$CompiledSeries, t_PoissonSeries$CompiledSeries, PoissonSeries$CompiledSeries);

      void t_PoissonSeries$CompiledSeries::install(PyObject *module)
      {
        installType(&PY_TYPE(PoissonSeries$CompiledSeries), &PY_TYPE_DEF(PoissonSeries$CompiledSeries), module, "PoissonSeries$CompiledSeries", 0);
      }

      void t_PoissonSeries$CompiledSeries::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries$CompiledSeries), "class_", make_descriptor(PoissonSeries$CompiledSeries::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries$CompiledSeries), "wrapfn_", make_descriptor(t_PoissonSeries$CompiledSeries::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries$CompiledSeries), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PoissonSeries$CompiledSeries_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoissonSeries$CompiledSeries::initializeClass, 1)))
          return NULL;
        return t_PoissonSeries$CompiledSeries::wrap_Object(PoissonSeries$CompiledSeries(((t_PoissonSeries$CompiledSeries *) arg)->object.this$));
      }
      static PyObject *t_PoissonSeries$CompiledSeries_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoissonSeries$CompiledSeries::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PoissonSeries$CompiledSeries_derivative(t_PoissonSeries$CompiledSeries *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "derivative", args);
        return NULL;
      }

      static PyObject *t_PoissonSeries$CompiledSeries_value(t_PoissonSeries$CompiledSeries *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *Oem::class$ = NULL;
              jmethodID *Oem::mids$ = NULL;
              bool Oem::live$ = false;
              ::java::lang::String *Oem::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Oem::ROOT = NULL;

              jclass Oem::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/Oem");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_66443a7cc3b43b5d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;D)V");
                  mids$[mid_checkTimeSystems_0640e6acf969ed28] = env->getMethodID(cls, "checkTimeSystems", "()V");
                  mids$[mid_getSatellites_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Oem::Oem(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3, jdouble a4) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_66443a7cc3b43b5d, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              void Oem::checkTimeSystems() const
              {
                env->callVoidMethod(this$, mids$[mid_checkTimeSystems_0640e6acf969ed28]);
              }

              ::java::util::Map Oem::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_1e62c2f73fbdd1c4]));
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
            namespace oem {
              static PyObject *t_Oem_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Oem_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Oem_of_(t_Oem *self, PyObject *args);
              static int t_Oem_init_(t_Oem *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Oem_checkTimeSystems(t_Oem *self);
              static PyObject *t_Oem_getSatellites(t_Oem *self);
              static PyObject *t_Oem_get__satellites(t_Oem *self, void *data);
              static PyObject *t_Oem_get__parameters_(t_Oem *self, void *data);
              static PyGetSetDef t_Oem__fields_[] = {
                DECLARE_GET_FIELD(t_Oem, satellites),
                DECLARE_GET_FIELD(t_Oem, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Oem__methods_[] = {
                DECLARE_METHOD(t_Oem, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Oem, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Oem, of_, METH_VARARGS),
                DECLARE_METHOD(t_Oem, checkTimeSystems, METH_NOARGS),
                DECLARE_METHOD(t_Oem, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Oem)[] = {
                { Py_tp_methods, t_Oem__methods_ },
                { Py_tp_init, (void *) t_Oem_init_ },
                { Py_tp_getset, t_Oem__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Oem)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Oem, t_Oem, Oem);
              PyObject *t_Oem::wrap_Object(const Oem& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Oem::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Oem *self = (t_Oem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Oem::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Oem::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Oem *self = (t_Oem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Oem::install(PyObject *module)
              {
                installType(&PY_TYPE(Oem), &PY_TYPE_DEF(Oem), module, "Oem", 0);
              }

              void t_Oem::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "class_", make_descriptor(Oem::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "wrapfn_", make_descriptor(t_Oem::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "boxfn_", make_descriptor(boxObject));
                env->getClass(Oem::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Oem::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "ROOT", make_descriptor(j2p(*Oem::ROOT)));
              }

              static PyObject *t_Oem_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Oem::initializeClass, 1)))
                  return NULL;
                return t_Oem::wrap_Object(Oem(((t_Oem *) arg)->object.this$));
              }
              static PyObject *t_Oem_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Oem::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Oem_of_(t_Oem *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Oem_init_(t_Oem *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                jdouble a4;
                Oem object((jobject) NULL);

                if (!parseArgs(args, "kKKkD", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
                {
                  INT_CALL(object = Oem(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSegment);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Oem_checkTimeSystems(t_Oem *self)
              {
                OBJ_CALL(self->object.checkTimeSystems());
                Py_RETURN_NONE;
              }

              static PyObject *t_Oem_getSatellites(t_Oem *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSatelliteEphemeris));
              }
              static PyObject *t_Oem_get__parameters_(t_Oem *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Oem_get__satellites(t_Oem *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
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
#include "org/orekit/data/FilesListCrawler.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FilesListCrawler::class$ = NULL;
      jmethodID *FilesListCrawler::mids$ = NULL;
      bool FilesListCrawler::live$ = false;

      jclass FilesListCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FilesListCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_374b2b754d881b88] = env->getMethodID(cls, "<init>", "([Ljava/io/File;)V");
          mids$[mid_getCompleteName_b717dae808c0c49c] = env->getMethodID(cls, "getCompleteName", "(Ljava/io/File;)Ljava/lang/String;");
          mids$[mid_getBaseName_b717dae808c0c49c] = env->getMethodID(cls, "getBaseName", "(Ljava/io/File;)Ljava/lang/String;");
          mids$[mid_getZipJarCrawler_93f20e0a9bd16ec7] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/io/File;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_getStream_84f8ce8d5e5e97b4] = env->getMethodID(cls, "getStream", "(Ljava/io/File;)Ljava/io/InputStream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FilesListCrawler::FilesListCrawler(const JArray< ::java::io::File > & a0) : ::org::orekit::data::AbstractListCrawler(env->newObject(initializeClass, &mids$, mid_init$_374b2b754d881b88, a0.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_FilesListCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FilesListCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FilesListCrawler_of_(t_FilesListCrawler *self, PyObject *args);
      static int t_FilesListCrawler_init_(t_FilesListCrawler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FilesListCrawler_get__parameters_(t_FilesListCrawler *self, void *data);
      static PyGetSetDef t_FilesListCrawler__fields_[] = {
        DECLARE_GET_FIELD(t_FilesListCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FilesListCrawler__methods_[] = {
        DECLARE_METHOD(t_FilesListCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FilesListCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FilesListCrawler, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FilesListCrawler)[] = {
        { Py_tp_methods, t_FilesListCrawler__methods_ },
        { Py_tp_init, (void *) t_FilesListCrawler_init_ },
        { Py_tp_getset, t_FilesListCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FilesListCrawler)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractListCrawler),
        NULL
      };

      DEFINE_TYPE(FilesListCrawler, t_FilesListCrawler, FilesListCrawler);
      PyObject *t_FilesListCrawler::wrap_Object(const FilesListCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FilesListCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FilesListCrawler *self = (t_FilesListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FilesListCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FilesListCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FilesListCrawler *self = (t_FilesListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FilesListCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(FilesListCrawler), &PY_TYPE_DEF(FilesListCrawler), module, "FilesListCrawler", 0);
      }

      void t_FilesListCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FilesListCrawler), "class_", make_descriptor(FilesListCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FilesListCrawler), "wrapfn_", make_descriptor(t_FilesListCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FilesListCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FilesListCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FilesListCrawler::initializeClass, 1)))
          return NULL;
        return t_FilesListCrawler::wrap_Object(FilesListCrawler(((t_FilesListCrawler *) arg)->object.this$));
      }
      static PyObject *t_FilesListCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FilesListCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FilesListCrawler_of_(t_FilesListCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FilesListCrawler_init_(t_FilesListCrawler *self, PyObject *args, PyObject *kwds)
      {
        JArray< ::java::io::File > a0((jobject) NULL);
        FilesListCrawler object((jobject) NULL);

        if (!parseArgs(args, "[k", ::java::io::File::initializeClass, &a0))
        {
          INT_CALL(object = FilesListCrawler(a0));
          self->object = object;
          self->parameters[0] = ::java::io::PY_TYPE(File);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
      static PyObject *t_FilesListCrawler_get__parameters_(t_FilesListCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
